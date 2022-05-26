// Copyright 2022 Eric Jones

#include "./creator.h"

creator::creator() {
}

creator::~creator() {
}

std::string creator::processProduct(int type) {
    // subclass creates the product
    std::shared_ptr<product> p(createProduct(type));
    // creator class processes the product
    std::string s = p->show();
    // call pure virtual function to show that we can
    p->abfun();
    return s;
}

std::shared_ptr<product> creator::newProduct(int type) {
    return createProduct(type);
}
