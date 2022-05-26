// Copyright 2022 Eric Jones

#include "./test_factory_method.h"
#include <gtest/gtest.h>
#include <iostream>
#include <memory>
#include "./creatorA.h"
#include "./creatorB.h"
#include "./product.h"

test_factory_method::test_factory_method() {
}

test_factory_method::~test_factory_method() {
}

TEST(FactoryMethodSuite, ProcessProducts) {
    creatorA cA;
    creatorB cB;

    EXPECT_EQ(cA.processProduct(1), "A1");
    EXPECT_EQ(cA.processProduct(2), "A2");
    EXPECT_EQ(cB.processProduct(1), "B1");
    EXPECT_EQ(cB.processProduct(2), "B2");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
