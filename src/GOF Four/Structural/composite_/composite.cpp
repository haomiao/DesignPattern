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
    //  ����ɾ��ָ��Ҷ�������������,��������������ɾ���������е��������
    bool removeRes = false;
    if ( pcomponent != nullptr )
    {
        ComponentVec::iterator it = component_vec_.begin();
        ComponentVec::iterator end = component_vec_.end();
        for ( ; it != end; ++it )
        {
            //  �˴���ʱͨ����ַ���бȽ�
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

