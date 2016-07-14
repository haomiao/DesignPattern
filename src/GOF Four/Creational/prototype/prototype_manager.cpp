#include "stdafx.h"
#include "prototype_manager.h"

#include "concrete_prototype_a.h"
#include "concrete_prototype_b.h"


CPrototypeManager::CPrototypeManager()
{

}


CPrototypeManager::~CPrototypeManager()
{
    while ( !prototypeMap_.empty() )
    {
        PrototypeMap::iterator it = prototypeMap_.begin();
        delete it->second;
        prototypeMap_.erase( it );
    }
}


CPrototypeBase * CPrototypeManager::GetPrototype( PrototypeType prototypeType )
{
    PrototypeMap::iterator it = prototypeMap_.find( prototypeType );
    if (it != prototypeMap_.end() )
    {
        return it->second->Clone();
    }

    switch ( prototypeType )
    {
    case PTT_PROTOTYPE_A:
        prototypeMap_[prototypeType] = new CConcretePrototypeA();
        return prototypeMap_[prototypeType]->Clone();
    	break;
    case PTT_PROTOTYPE_B:
        prototypeMap_[prototypeType] = new CConcretePrototypeB();
        return prototypeMap_[prototypeType]->Clone();
        break;
    }
    
    return nullptr;
}