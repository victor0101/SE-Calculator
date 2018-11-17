//
// Created by Victor Alexandru on 17/11/2018.
//

#include <gtest/gtest.h>
#include "../Calculator.h"

Calculator calculator;

TEST(sum, integer) {
    ASSERT_EQ(calculator.sum(2, 3), 5);
}

TEST(sum, double) {
    ASSERT_EQ(calculator.sum(2.2, 3.2), 5.4);
}

TEST(sub, integer) {
    ASSERT_EQ(calculator.sub(5, 2), 3);
}

TEST(sub, double) {
    ASSERT_EQ(calculator.sub(5.3, 2.1), 3.2);
}

TEST(mult, integer) {
    ASSERT_EQ(calculator.mult(2, 3), 6);
}

TEST(mult, double) {
    ASSERT_EQ(calculator.mult(2.2, 3.2), 7.04);
}

TEST(div, integer) {
    ASSERT_EQ(calculator.div(6, 3), 2);
}

TEST(div, double) {
    ASSERT_EQ(calculator.div(6.2, 3.2), 1.9375);
}

TEST(sqrt, double) {
    ASSERT_EQ(calculator.sqrt(9), 3);
}