#pragma once

#include "IState.h"
#include "IRentalRobot.h"

class FullyRentedState : public IState
{
private:
	IRentalRobot* pRobot;

public:
	FullyRentedState(IRentalRobot* robot);

	void getForm();
	void checkForm();
	void rentApartment();
	void dispenseKeys();
};

