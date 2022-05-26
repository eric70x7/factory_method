// Copyright 2022 Eric Jones

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>

#pragma once

class product {
 public:
    product(int, std::string);
    ~product();

    virtual std::string show();

 protected:
    int productId;
    std::string creatorTag;
};

#endif  // PRODUCT_H_
