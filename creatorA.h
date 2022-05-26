// Copyright 2022 Eric Jones

#ifndef CREATORA_H_
#define CREATORA_H_

#include <iostream>
#include <memory>
#include <string>
#include "./creator.h"
#include "./product1.h"

#pragma once

class creatorA : public creator {
 public:
    creatorA();
    ~creatorA();

 protected:
    std::shared_ptr<product> createProduct(int type) override;

 private:
};

#endif  // CREATORA_H_
