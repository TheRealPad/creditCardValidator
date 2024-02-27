#include <iostream>
#include "CreditCardValidator.hpp"

CreditCardValidator::CreditCardValidator::CreditCardValidator()
{
}

CreditCardValidator::CreditCardValidator::~CreditCardValidator()
{
}

unsigned int CreditCardValidator::CreditCardValidator::bitwiseAdd(unsigned int a, unsigned int b)
{
    while (b) {
        const unsigned int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

void CreditCardValidator::CreditCardValidator::doubleSecondDigits(std::vector<unsigned int> &numbers)
{
    for (int i = numbers.size() - 1; i > 0; i -= 2) {
        unsigned int result = this->bitwiseAdd(numbers[i], numbers[i]);
        numbers[i] = result >= 10 ? 1 + (result - 10) : result;
    }
}

unsigned int CreditCardValidator::CreditCardValidator::addAllSecondDigits(std::vector<unsigned int> &numbers)
{
    unsigned int total = 0;

    for (unsigned int i = 0; i < numbers.size(); i += 2)
        total = this->bitwiseAdd(total, numbers[i]);
    return total;
}

unsigned int CreditCardValidator::CreditCardValidator::addAllOddDigits(std::vector<unsigned int> &numbers)
{
    unsigned int total = 0;

    for (unsigned int i = 1; i < numbers.size(); i += 2)
        total = this->bitwiseAdd(total, numbers[i]);
    return total;
}

bool CreditCardValidator::CreditCardValidator::isDivisibleByTen(unsigned int val)
{
    return val % 10 == 0;
}

std::vector<unsigned int> CreditCardValidator::CreditCardValidator::stringToVector(std::string const &str)
{
    std::vector<unsigned int> numbers;

    for (unsigned int i = 0; i < str.size(); ++i)
        numbers.push_back(str[i] - '0');
    return numbers;
}

bool CreditCardValidator::CreditCardValidator::isValid(std::string const &card)
{
    std::vector<unsigned int> numbers = this->stringToVector(card);

    this->doubleSecondDigits(numbers);
    const unsigned int evenPosNumbers = this->addAllSecondDigits(numbers);
    const unsigned int oddPosNumbers = this->addAllOddDigits(numbers);
    return this->isDivisibleByTen(evenPosNumbers + oddPosNumbers);
}
