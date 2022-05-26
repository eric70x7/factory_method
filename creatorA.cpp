// Copyright 2022 Eric Jones

#include "./creatorA.h"
#include <memory>
#include "./product1.h"
#include "./product2.h"

creatorA::creatorA() {
}

creatorA::~creatorA() {
}

std::shared_ptr<product> creatorA::createProduct(int type) {
    std::shared_ptr<product> rval;
    std::string created_by("A");

    switch (type) {
    case 1:
        rval = std::shared_ptr<product>(new product1(created_by));
        break;
    case 2:
        rval = std::shared_ptr<product>(new product2(created_by));
        break;
    default:
        // TODO(ej): handle unknown product type
        break;
    }
    return rval;
}
