#include "RentalRobot.h"

#include "IState.h"
#include "FullyRentedState.h"
#include "ReceivingFormState.h"
#include "RentApartmentState.h"
#include "WaitingState.h"

using namespace std;

RentalRobot::RentalRobot(int nof_room) {
    count = nof_room;
    pWaitingState = new WaitingState(this);
    pReceivingFormState = new ReceivingFormState(this);
    pRentApartmentState = new RentApartmentState(this);
    pFullyRentedState = new FullyRentedState(this);
    pCurentState = pWaitingState;
}

RentalRobot::~RentalRobot() {
    if (pWaitingState != nullptr) {
        delete pWaitingState;
        pWaitingState = nullptr;
    }

    if (pReceivingFormState != nullptr) {
        delete pReceivingFormState;
        pReceivingFormState = nullptr;
    }

    if (pRentApartmentState != nullptr) {
        delete pRentApartmentState;
        pRentApartmentState = nullptr;
    }

    if (pFullyRentedState != nullptr) {
        delete pFullyRentedState;
        pFullyRentedState = nullptr;
    }

    pCurentState = nullptr;
}

void RentalRobot::getForm() {
    pCurentState->getForm();
}

void RentalRobot::checkForm() {
    pCurentState->checkForm();
}

void RentalRobot::rentApartment() {
    pCurentState->rentApartment();
}

void RentalRobot::setState(IState* state) {
    pCurentState = state;
}

IState* RentalRobot::getState() {
    return pCurentState;
}

IState* RentalRobot::getWaitingState() {
    return pWaitingState;
}

IState* RentalRobot::getReceivingFormState() {
    return pReceivingFormState;
}

IState* RentalRobot::getRentApartmentState() {
    return pRentApartmentState;
}

IState* RentalRobot::getFullyRentedState() {
    return pFullyRentedState;
}

int RentalRobot::getCount() {
    return count;
}

void RentalRobot::setCount(int nof_room) {
    count = nof_room;
}