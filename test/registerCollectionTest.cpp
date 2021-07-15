//
// Created by maruko on 15/07/21.
//
#include "gtest/gtest.h"

#include "../RegisterCollection.h"

TEST(Collection, VerifyAttachAndDetachRegister) {
    Date currentData(1, 1, 2010);
    Register regA(currentData);
    RegisterCollection colA;
    colA.attachRegister(&regA);
    ASSERT_FALSE(colA.getCollection().empty());
    colA.detachRegister(currentData.toString());
    ASSERT_TRUE(colA.getCollection().empty());
}

