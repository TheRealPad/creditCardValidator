#include <gtest/gtest.h>
#include "CreditCardValidator.hpp"

TEST(CreditCardValidatorTest, ValidNumber) {
    CreditCardValidator::CreditCardValidator validator;

    const bool isValid = validator.isValid("379354508162306");
    EXPECT_EQ(isValid, true);
}

TEST(CreditCardValidatorTest, InValidNumber) {
    CreditCardValidator::CreditCardValidator validator;

    const bool isValid = validator.isValid("4388576018402626");
    EXPECT_EQ(isValid, false);
}

TEST(CreditCardValidatorTest, doubleSecondDigits) {
    CreditCardValidator::CreditCardValidator validator;
    std::vector<unsigned int> vec = {3, 7, 9, 3, 5, 4, 5, 0, 8, 1, 6, 2, 3, 0, 6};

    validator.doubleSecondDigits(vec);
    EXPECT_EQ(vec[0], 3);
    EXPECT_EQ(vec[1], 7);
    EXPECT_EQ(vec[2], 9);
    EXPECT_EQ(vec[3], 3);
    EXPECT_EQ(vec[4], 1);
    EXPECT_EQ(vec[5], 4);
    EXPECT_EQ(vec[6], 1);
    EXPECT_EQ(vec[7], 0);
    EXPECT_EQ(vec[8], 7);
    EXPECT_EQ(vec[9], 1);
    EXPECT_EQ(vec[10], 3);
    EXPECT_EQ(vec[11], 2);
    EXPECT_EQ(vec[12], 6);
    EXPECT_EQ(vec[13], 0);
    EXPECT_EQ(vec[14], 3);
}

TEST(CreditCardValidatorTest, addAllSecondDigits) {
    CreditCardValidator::CreditCardValidator validator;
    std::vector<unsigned int> vec = {3, 7, 9, 3, 5, 4, 5, 0, 8, 1, 6, 2, 3, 0, 6};

    const unsigned int result = validator.addAllSecondDigits(vec);
    EXPECT_EQ(result, 45);
}

TEST(CreditCardValidatorTest, addAllOddDigits) {
    CreditCardValidator::CreditCardValidator validator;
    std::vector<unsigned int> vec = {3, 7, 9, 3, 5, 4, 5, 0, 8, 1, 6, 2, 3, 0, 6};

    const unsigned int result = validator.addAllOddDigits(vec);
    EXPECT_EQ(result, 17);
}

TEST(CreditCardValidatorTest, isDivisibleByTen) {
    CreditCardValidator::CreditCardValidator validator;

    const bool result = validator.isDivisibleByTen(50);
    EXPECT_EQ(result, true);
}

TEST(CreditCardValidatorTest, isNotDivisibleByTen) {
    CreditCardValidator::CreditCardValidator validator;

    const bool result = validator.isDivisibleByTen(51);
    EXPECT_EQ(result, false);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
