#include "WaitingState.h"

using namespace std;

WaitingState::WaitingState(IRentalRobot* robot) {
    pRobot = robot;
}

void WaitingState::getForm() {
    pRobot->setState(pRobot->getReceivingFormState());
    cout << "Thanks for the form." << endl;
}

void WaitingState::checkForm() {
    cout << "You have to submit an form." << endl;
}

void WaitingState::rentApartment() {
    cout << "You have to submit an form." << endl;
}

void WaitingState::dispenseKeys() {
    cout << "You have to submit an form." << endl;
}