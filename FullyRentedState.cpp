#include "FullyRentedState.h"

using namespace std;

FullyRentedState::FullyRentedState(IRentalRobot* robot) {
    pRobot = robot;
}

void FullyRentedState::getForm() {
    cout << "Sorry, we’re fully rented." << endl;
}

void FullyRentedState::checkForm() {
    cout << "Sorry, we’re fully rented." << endl;
}

void FullyRentedState::rentApartment() {
    cout << "Sorry, we’re fully rented." << endl;
}

void FullyRentedState::dispenseKeys() {
    cout << "Sorry, we’re fully rented." << endl;
}