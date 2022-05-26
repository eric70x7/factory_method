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

TEST(FactoryMethodSuite, MakeProducts) {
    creatorA cA;
    creatorB cB;

    auto p = cA.makeProduct(1);
    EXPECT_EQ(p->show(), "A1");
    p = cA.makeProduct(2);
    EXPECT_EQ(p->show(), "A2");
    p = cB.makeProduct(1);
    EXPECT_EQ(p->show(), "B1");
    p = cB.makeProduct(2);
    EXPECT_EQ(p->show(), "B2");
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
