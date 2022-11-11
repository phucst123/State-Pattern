#include <iostream>


#include "RentalRobot.h"

#include "WaitingState.h"
#include "ReceivingFormState.h"
#include "RentApartmentState.h"
#include "FullyRentedState.h"

//
//#include "WaitingState.h"
//#include "ReceivingFormState.h"
//#include "RentApartmentState.h"
//#include "FullyRentedState.h"


using namespace std;

int main() {
    RentalRobot robot(10);
    robot.getForm();
    robot.checkForm();
    return 0;
}