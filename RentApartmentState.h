#pragma once

#include "IState.h"
#include "IRentalRobot.h"


class RentApartmentState : public IState
{
private:
	IRentalRobot* pRobot;

public:
	RentApartmentState(IRentalRobot* robot);

	void getForm();
	void checkForm();
	void rentApartment();
	void dispenseKeys();

};

