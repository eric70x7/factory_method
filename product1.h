// Copyright 2022 Eric Jones

#ifndef PRODUCT1_H_
#define PRODUCT1_H_

#include <string>
#include "./product.h"

#pragma once

class product1 : public product {
 public:
    explicit product1(std::string);
    ~product1();

    void abfun() override {};
 private:
};

#endif  // PRODUCTA_H_
