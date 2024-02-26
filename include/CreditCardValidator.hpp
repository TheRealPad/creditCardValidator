#pragma once

namespace CreditCardValidator {
    class CreditCardValidator {
        public:
            CreditCardValidator();
            ~CreditCardValidator();
            bool isValid(std::string const &card);
    };
};
