// mediator_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "concrete_colleague_a.h"
#include "concrete_colleague_b.h"
#include "concrete_colleague_monitor.h"
#include "mediator.h"


//  可结合使用观察者模式
int _tmain(int argc, _TCHAR* argv[])
{

    CMediator *pmediator = new CMediator();
    CConcreteColleagueA *pcolleagueA = new CConcreteColleagueA( pmediator,  EIF_DRINK );
    CConcreteColleagueB *pcolleagueB = new CConcreteColleagueB( pmediator, EIF_SLEEP | EIF_WORK );
    pmediator->PushColleague( pcolleagueA );
    pmediator->PushColleague( pcolleagueB );


    pcolleagueA->SleepingNotify();
    pcolleagueB->DrinkingNotify();
    pcolleagueA->WorkingNotify();

    CConcreteColleagueB *pcolleagueB2 = new CConcreteColleagueB( pmediator, EIF_SLEEP | EIF_WORK );
    pmediator->PushColleague( pcolleagueB2 );

    CConcreteColleagueMonitor *pcolleague_monitor = new CConcreteColleagueMonitor( pmediator, EIF_NO );
    pmediator->PushColleague( pcolleague_monitor );

    pcolleague_monitor->NotifyAll( "work study, day day up!" );

    delete pmediator;
    delete pcolleagueA;
    delete pcolleagueB;
    delete pcolleagueB2;
    delete pcolleague_monitor;

	return 0;
}

