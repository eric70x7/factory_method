// Copyright 2022 Eric Jones

#ifndef CREATORB_H_
#define CREATORB_H_

#include <iostream>
#include <memory>
#include <string>
#include "./creator.h"

#pragma once

class creatorB : public creator {
 public:
    creatorB();
    ~creatorB();

 protected:
    product createProduct(int type) override;

 private:
};

#endif  // CREATORB_H_
