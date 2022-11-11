#pragma once

#include <iostream>


class IState {
public:

    virtual void getForm() = 0;
    virtual void checkForm() = 0;
    virtual void rentApartment() = 0;
    virtual void dispenseKeys() = 0;
};