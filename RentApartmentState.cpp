#include "RentApartmentState.h"

using namespace std;

RentApartmentState::RentApartmentState(IRentalRobot* robot) {
    pRobot = robot;
}

void RentApartmentState::getForm() {
    cout << "Hang on, we’re renting you an apartment." << endl;
}

void RentApartmentState::checkForm() {
    cout << "Hang on, we’re renting you an apartment." << endl;
}

void RentApartmentState::rentApartment() {
    pRobot->setCount(pRobot->getCount() - 1);
    cout << "Renting you an apartment...." << endl;
    dispenseKeys();
}

void RentApartmentState::dispenseKeys() {
    if (pRobot->getCount() > 0) {
        pRobot->setState(pRobot->getWaitingState());
    }
    else {
        pRobot->setState(pRobot->getFullyRentedState());
    }
    cout << "Here are your keys!" << endl;
}