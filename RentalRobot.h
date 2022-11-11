#pragma once
#include "IRentalRobot.h"
#include "IState.h"
#include "WaitingState.h"
#include "ReceivingFormState.h"
#include "RentApartmentState.h"
#include "FullyRentedState.h"

class RentalRobot : public IRentalRobot
{
private:
    IState* pCurentState;
    IState* pWaitingState;
    IState* pReceivingFormState;
    IState* pRentApartmentState;
    IState* pFullyRentedState;
    int count;

public:
    RentalRobot(int nof_room);
    ~RentalRobot();

    void getForm();
    void checkForm();

    void rentApartment();
    void setState(IState* state);

    IState* getState();

    IState* getWaitingState() ;
    IState* getReceivingFormState() ;
    IState* getRentApartmentState() ;
    IState* getFullyRentedState() ;

    int getCount();

    void setCount(int nof_room);
};

