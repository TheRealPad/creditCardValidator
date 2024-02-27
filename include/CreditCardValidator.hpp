#pragma once

#include <vector>

namespace CreditCardValidator {
    class CreditCardValidator {
        public:
            CreditCardValidator();
            ~CreditCardValidator();
            bool isValid(std::string const &card);
            void doubleSecondDigits(std::vector<unsigned int> &numbers);
            unsigned int addAllSecondDigits(std::vector<unsigned int> &numbers);
            unsigned int addAllOddDigits(std::vector<unsigned int> &numbers);
            bool isDivisibleByTen(unsigned int val);
            unsigned int bitwiseAdd(unsigned int a, unsigned int b);

        private:
            std::vector<unsigned int> stringToVector(std::string const &str);
    };
};
