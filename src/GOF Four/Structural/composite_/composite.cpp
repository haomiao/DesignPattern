#include "stdafx.h"
#include "composite.h"


CComposite::CComposite()
{

}


CComposite::~CComposite()
{
    while ( !component_vec_.empty() )
    {
        ComponentVec::iterator it = component_vec_.begin();
        delete (*it);
        component_vec_.erase( it );
    }
}


void CComposite::AddComponent( CComponent * pcomponent )
{
    if ( pcomponent != nullptr)
    {
        component_vec_.push_back( pcomponent );
    }
}


bool CComposite::RemoveComponent( CComponent * pcomponent )
{
    //  遍历删除指定叶子组件或组合组件,若是组合组件，则删除组合组件中的所有组件
    bool removeRes = false;
    if ( pcomponent != nullptr )
    {
        ComponentVec::iterator it = component_vec_.begin();
        ComponentVec::iterator end = component_vec_.end();
        for ( ; it != end; ++it )
        {
            //  此处暂时通过地址进行比较
            if (*it == pcomponent )
            {
                delete ( *it );
                component_vec_.erase( it );
                removeRes = true;
                break;
            }

            if ( (*it)->GetChildSize() > 0)
            {
                removeRes = (*it)->RemoveComponent( pcomponent );
                if ( removeRes == true)
                {
                    break;
                }
            }
        }
    }

    return removeRes;
}


CComponent * CComposite::GetChildComponent( unsigned int index )
{
    if (index >= component_vec_.size() )
    {
        return nullptr;
    }

    return component_vec_[index];
}


unsigned int CComposite::GetChildSize()
{
    return component_vec_.size();
}

