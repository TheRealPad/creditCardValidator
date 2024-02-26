#include <iostream>
#include "CreditCardValidator.hpp"

int main(int ac, char **ag) {
    CreditCardValidator::CreditCardValidator test;

    if (test.isValid(""))
        std::cout << "Your credit card is valid" << std::endl;
    else
        std::cout << "Your credit card is not valid" << std::endl;
    return 0;
}
