// Copyright 2022 Eric Jones

#include "./creatorA.h"
#include <memory>
#include "./product1.h"
#include "./product2.h"

creatorA::creatorA() {
}

creatorA::~creatorA() {
}

product creatorA::createProduct(int type) {
    product* prval;
    std::string created_by("A");

    switch (type) {
    case 1:
        prval = new product1(created_by);
        break;
    case 2:
        prval = new product2(created_by);
        break;
    default:
        // handle unknown product type
        break;
    }
    return *prval;
}