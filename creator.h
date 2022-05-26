// Copyright 2022 Eric Jones

#ifndef CREATOR_H_
#define CREATOR_H_

#include <memory>
#include <string>
#include "./product.h"

#pragma once

class creator {
 public:
    creator();
    ~creator();

    std::string processProduct(int type);

    std::shared_ptr<product> makeProduct(int type);

 protected:
     virtual std::shared_ptr<product> createProduct(int type) = 0;
 private:
};

#endif  // CREATOR_H_
