#pragma once

#include "IState.h"

class IRentalRobot
{
public:
    virtual ~IRentalRobot() {};
    virtual void getForm() = 0;
    virtual void checkForm() = 0;
    virtual void setState(IState *state) = 0;
    virtual IState* getState() = 0;
    virtual IState* getWaitingState() = 0;
    virtual IState* getReceivingFormState() = 0;
    virtual IState* getRentApartmentState() = 0;
    virtual IState* getFullyRentedState() = 0;
    virtual int getCount() = 0;
    virtual void setCount(int nof_room) = 0;

};