// Copyright 2021 Krayushkina
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(train, test1) {
    Train train;
    for (int i = 0; i < 100; i++) {
        train.addCageInTrain();
    }
    EXPECT_EQ(100, train.Sum());
}

TEST(train, test2) {
    Cage cage;
    cage.on();
    EXPECT_EQ(true, cage.get());
}

TEST(train, test3) {
    Train train;
    for (int i = 0; i < 1; i++) {
        train.addCageInTrain();
    }
    EXPECT_EQ(1, train.Sum());
}

TEST(train, test4) {
    Train train;
    for (int i = 0; i < 4; i++) {
        train.addCageInTrain();
    }
    EXPECT_EQ(4, train.Sum());
}
