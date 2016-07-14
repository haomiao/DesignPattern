#include "stdafx.h"

#include <iostream>

#include "base_subject.h"
#include "concrete_observer_b.h"


CConcreteObserverB::CConcreteObserverB( CBaseSubject *psubject ) :psubject_( psubject )
{
    psubject_->AttachObserver( this );
}


CConcreteObserverB::~CConcreteObserverB()
{

}


void CConcreteObserverB::Update( CBaseSubject *psubject )
{
    if ( psubject != nullptr && psubject == psubject_ )
    {
        std::cout << "CConcreteObserverB::Update() -> Subject's value changed: " << 
        psubject->GetChangedData() << std::endl;
    }
}