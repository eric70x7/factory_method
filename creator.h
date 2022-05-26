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

 protected:
     virtual product createProduct(int type) = 0;
 private:
};

#endif  // CREATOR_H_
