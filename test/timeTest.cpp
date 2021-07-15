//
// Created by maruko on 15/07/21.
//
#include "gtest/gtest.h"

#include "../Time.h"

TEST(Time, VerifyValidTime) {
    Time time(23, 59);
    ASSERT_EQ(23, time.getHour());
    ASSERT_EQ(59, time.getMinutes());
}

TEST(Time, VerifyTimeHourOverflow) {
    Time time(24, 59);
    ASSERT_EQ(0, time.getHour());
    ASSERT_EQ(0, time.getMinutes());
}

TEST(Time, VerifyTimeMinutesOverflow) {
    Time time(23, 69);
    ASSERT_EQ(0, time.getHour());
    ASSERT_EQ(0, time.getMinutes());
}
