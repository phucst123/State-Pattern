#pragma once
#include "IRentalRobot.h"

#include "IState.h"

class WaitingState : public IState
{
private:
	IRentalRobot* pRobot;

public:
	WaitingState(IRentalRobot* robot);

	void getForm();
	void checkForm();

	void rentApartment();
	void dispenseKeys();
};

