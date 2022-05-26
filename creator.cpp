// Copyright 2022 Eric Jones

#include "./creator.h"

creator::creator() {
}

creator::~creator() {
}

std::string creator::processProduct(int type) {
    // subclass creates the product
    product p = createProduct(type);
    // creator class processes the product
    std::string s = p.show();
    return s;
}
