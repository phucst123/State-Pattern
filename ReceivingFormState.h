#pragma once

#include "IState.h"
#include "IRentalRobot.h"

#include <random>
class ReceivingFormState : public IState
{
private:
	IRentalRobot* pRobot;
	std::random_device pRandomGenerator;

public:
	ReceivingFormState(IRentalRobot* robot);

	void getForm();
	void checkForm();

	void rentApartment();
	void dispenseKeys();
};

