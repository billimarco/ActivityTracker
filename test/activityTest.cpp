//
// Created by maruko on 15/07/21.
//
#include "gtest/gtest.h"

#include "../Activity.h"

TEST(Activity, VerifyActivityTimes) {
    Time timeA(1, 59);
    Time timeB(2, 30);
    Activity actA("Marco", timeA, timeB);
    Activity actB("Giacomo", timeB, timeA);
    ASSERT_EQ(1, actA.getStartTime().getHour());
    ASSERT_EQ(59, actA.getStartTime().getMinutes());
    ASSERT_EQ(2, actA.getEndTime().getHour());
    ASSERT_EQ(30, actA.getEndTime().getMinutes());
    ASSERT_EQ(0, actB.getStartTime().getHour());
    ASSERT_EQ(0, actB.getStartTime().getMinutes());
    ASSERT_EQ(0, actB.getEndTime().getHour());
    ASSERT_EQ(0, actB.getEndTime().getMinutes());
}

