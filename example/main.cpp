#include <iostream>
#include "CreditCardValidator.hpp"

void description()
{
    std::cout << "Welcome to credit card validator" << std::endl;
    std::cout << "Enter your credit  card to check if it's valid or not" << std::endl;
    std::cout << "If you want to stop, enter nothing or CTRL+D" << std::endl << std::endl;
}

void checkCreditCards()
{
    CreditCardValidator::CreditCardValidator validator;
    std::string input;

    description();
    while (std::getline(std::cin, input)) {
        if (input.empty()) {
            std::cout << "Input terminated." << std::endl;
            break;
        }
        if (validator.isValid(input))
            std::cout << "✅ Your credit card is valid" << std::endl << std::endl;
        else
            std::cout << "❌ Your credit card is not valid" << std::endl << std::endl;
    }

}

int main(int ac, char **ag)
{
    checkCreditCards();
    return 0;
}
