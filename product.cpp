// Copyright 2022 Eric Jones

#include "./product.h"

product::product(int pId, std::string cTag) :
    productId(pId),
    creatorTag(cTag) {
}

product::~product() {
}

std::string product::show() {
    return creatorTag + std::to_string(productId);
}
