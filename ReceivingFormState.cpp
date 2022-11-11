#include "ReceivingFormState.h"



using namespace std;

ReceivingFormState::ReceivingFormState(IRentalRobot* robot) {
	pRobot = robot;
}

void ReceivingFormState::getForm() {
	cout << "We already got your application." << endl;
}
void ReceivingFormState::checkForm() {
    // simulate the form checking
    std::uniform_int_distribution<int> int_distribution(0, 9);
    bool isFormOk = (int_distribution(pRandomGenerator) > 5);

    if (isFormOk && pRobot->getCount() > 0) {
        cout << "Congratulations, you were approved." << endl;
        pRobot->setState(pRobot->getRentApartmentState());
        pRobot->getState()->rentApartment();
    }
    else {
        pRobot->setState(pRobot->getWaitingState());
        cout << "Sorry, you were not approved." << endl;
    }
}

void ReceivingFormState::rentApartment() {
    cout << "You must have your application checked." << endl;
}
void ReceivingFormState::dispenseKeys() {
    cout << "You must have your application checked." << endl;
}