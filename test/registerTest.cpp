//
// Created by maruko on 15/07/21.
//
#include "gtest/gtest.h"

#include "../Register.h"

TEST(Register, VerifyAddActivity) {
    Time timeA(1, 59);
    Time timeB(2, 30);
    Time timeC(3, 20);
    Time timeD(4, 0);
    Time timeE(18, 59);
    Time timeF(23, 59);
    Date currentData(1, 1, 2010);
    Register regA(currentData);
    ASSERT_TRUE(regA.addActivity("Marco", timeE, timeF));
    ASSERT_TRUE(regA.addActivity("Giuseppe", timeA, timeB));
    ASSERT_FALSE(regA.addActivity("Paolo", timeB, timeC));
    ASSERT_FALSE(regA.addActivity("Francesco", timeD, timeE));
    ASSERT_TRUE(regA.addActivity("Angiolo", timeC, timeD));
    ASSERT_FALSE(regA.addActivity("Giacomo", timeB, timeD));
}

TEST(Register, VerifyRemoveActivity) {
    Time timeA(1, 59);
    Time timeB(2, 30);
    Date currentData(1, 1, 2010);
    Register regA(currentData);
    regA.addActivity("Marco", timeA, timeB);
    ASSERT_FALSE(regA.removeActivity(1));
    ASSERT_TRUE(regA.removeActivity(0));
}

TEST(Register, VerifyModifyActivity) {
    Time timeA(1, 59);
    Time timeB(2, 30);
    Time timeC(3, 0);
    Date currentData(1, 1, 2010);
    Register regA(currentData);
    regA.addActivity("Marco", timeA, timeB);
    ASSERT_FALSE(regA.modifyActivity(1, "Giuseppe", timeA, timeB));
    ASSERT_FALSE(regA.modifyActivity(0, "Giuseppe", timeC, timeA));
    ASSERT_TRUE(regA.modifyActivity(0, "Giuseppe", timeB, timeC));
}
