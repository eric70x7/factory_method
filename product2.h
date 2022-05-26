// Copyright 2022 Eric Jones

#ifndef PRODUCT2_H_
#define PRODUCT2_H_

#include <string>
#include "./product.h"

#pragma once

class product2 : public product {
 public:
    explicit product2(std::string);
    ~product2();
    void abfun() override {};
 private:
};

#endif  // PRODUCTA_H_
