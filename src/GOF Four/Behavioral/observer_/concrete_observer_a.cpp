#include "stdafx.h"

#include <iostream>

#include "base_subject.h"
#include "concrete_observer_a.h"


CConcreteObserverA::CConcreteObserverA(CBaseSubject *psubject) :psubject_(psubject)
{
    psubject_->AttachObserver( this );
}


CConcreteObserverA::~CConcreteObserverA()
{

}


void CConcreteObserverA::Update( CBaseSubject *psubject )
{
    if ( psubject != nullptr && psubject == psubject_ )
    {
        std::cout << "CConcreteObserverA::Update() -> Subject's value changed: " << 
        psubject->GetChangedData() << std::endl;
    }
}