//
// Created by kuba on 25.03.24.
//

#include "A.h"

#include <iostream>

A::A() {
    std::cout << "A c-tor" << std::endl;
}

A::A(const A &a) {
    std::cout << "A cc-tor" << std::endl;
}

A::~A() {
    std::cout << "A d-tor" << std::endl;
}

A & A::operator=(const A &c) {
    std::cout << "A op =" << std::endl;
    return *this;
}
