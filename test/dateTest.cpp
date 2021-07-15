//
// Created by maruko on 15/07/21.
//
#include "gtest/gtest.h"

#include "../Date.h"

TEST(Date, VerifyValidDate) {
    Date data(27, 2, 2021);
    ASSERT_EQ(27, data.getDay());
    ASSERT_EQ(2, data.getMonth());
    ASSERT_EQ(2021, data.getYear());
}

TEST(Date, VerifyValidDateOverflow) {
    Date data(30, 2, 2021);
    ASSERT_EQ(1, data.getDay());
    ASSERT_EQ(1, data.getMonth());
    ASSERT_EQ(1920, data.getYear());
}
