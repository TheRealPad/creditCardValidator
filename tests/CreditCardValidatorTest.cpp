#include <gtest/gtest.h>
#include "CreditCardValidator.hpp"

TEST(CreditCardValidatorTest, YourActualTests) {
    CreditCardValidator::CreditCardValidator validator;

    const bool isValid = validator.isValid("");
    EXPECT_EQ(isValid, true);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
