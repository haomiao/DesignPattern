#include "stdafx.h"

#include "memento.h"
#include "caretaker.h"


Caretaker::Caretaker()
{

}


Caretaker::~Caretaker()
{
    while (!memento_stack_.empty() )
    {
        Memento * &pmemnto = memento_stack_.top();
        delete pmemnto;
        memento_stack_.pop();
    }
}


void Caretaker::PushMemento( Memento *pmemento )
{
    memento_stack_.push( pmemento );
}


Memento * Caretaker::TopMemento()
{
    if ( !memento_stack_.empty() )
    {
        Memento *pmemnto = memento_stack_.top();
        return pmemnto;
    }
    return nullptr;
}


void Caretaker::PopMemento()
{
    if ( !memento_stack_.empty() )
    {
        Memento *pmemnto = memento_stack_.top();
        delete pmemnto;
        memento_stack_.pop();
    }
}