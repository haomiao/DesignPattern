#include "stdafx.h"
#include "flyweight_factory.h"

#include "concrete_flyweight.h"
#include "unshared_concrete_flyweight.h"

namespace
{
    //  暂时将享元类型作为内部状态
    CFlyweight * CreateFlyweight( int flyweight_type )
    {
        CFlyweight * pflyweight = nullptr;
        switch ( flyweight_type )
        {
        case FWT_Type1:
            pflyweight = new CConcreteFlyweight( flyweight_type );
            break;
        case FWT_Type2:
            pflyweight = new CConcreteFlyweight( flyweight_type );
            break;
        case FWT_Type3:
            pflyweight = new CConcreteFlyweight( flyweight_type );
            break;
        case FWT_Type4:
            pflyweight = new CUnsharedConcreteFlyweight( flyweight_type );
        default:
            break;
        }

        return pflyweight;
    }
}


CFlyweightFactory::FlyWeightMap CFlyweightFactory::flyweight_map_;


CFlyweightFactory::CFlyweightFactory()
{

}


CFlyweightFactory::~CFlyweightFactory()
{
    while ( !flyweight_map_.empty() )
    {
        FlyWeightMap::iterator it = flyweight_map_.begin();
        delete it->second;
        flyweight_map_.erase( it );
    }
}


CFlyweightFactory * CFlyweightFactory::GetInstance()
{
    static CFlyweightFactory flyweight_factory;
    return &flyweight_factory;
}


CFlyweight * CFlyweightFactory::GetFlyweight( int flyweight_type )
{
    FlyWeightMap::iterator it = flyweight_map_.find( flyweight_type );
    FlyWeightMap::iterator end = flyweight_map_.end();
    if ( it != end )
    {
        return it->second;
    }

    CFlyweight *pflyweight = CreateFlyweight( flyweight_type );
    if ( pflyweight != nullptr)
    {
        flyweight_map_[flyweight_type] = pflyweight;
    }
    
    return pflyweight;
}

