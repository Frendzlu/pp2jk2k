//
// Created by kuba on 25.03.24.
//

#include "DynamicArrayD.h"
#include <algorithm>
#include <iostream>

DynamicArrayD::DynamicArrayD(const size_t size): _arr(new double[size]()), _size(size) {
}

DynamicArrayD::DynamicArrayD(const size_t size, const double value): _arr(new double[size]()), _size(size) {
    std::fill_n(_arr, size, value);
}

DynamicArrayD::DynamicArrayD(const DynamicArrayD &dynamic_array_d): _arr(new double[dynamic_array_d.size()]), _size(dynamic_array_d.size()) {
    std::copy_n(dynamic_array_d._arr, dynamic_array_d._size, _arr);
}

DynamicArrayD::DynamicArrayD(DynamicArrayD &&dynamic_array_d) noexcept : _arr(dynamic_array_d._arr), _size(dynamic_array_d.size()) {
    dynamic_array_d._arr = nullptr;
    dynamic_array_d._size = 0;
}

DynamicArrayD::~DynamicArrayD() {
    delete[] _arr;
}

DynamicArrayD & DynamicArrayD::operator=(const DynamicArrayD &d) {
    if (this == &d)
        return *this;
    delete[] _arr;
    _size = d.size();
    _arr = new double[_size]();
    std::copy_n(d._arr, d._size, _arr);
    return *this;
}

DynamicArrayD & DynamicArrayD::operator=(DynamicArrayD &&d)  noexcept {
    if (this == &d)
        return *this;
    delete[] _arr;
    _size = d.size();
    _arr = d._arr;
    d._arr = nullptr;
    d._size = 0;
    return *this;
}

double & DynamicArrayD::operator[](const size_t index) {
    return _arr[index];
}

double const & DynamicArrayD::operator[](const size_t index) const {
    return _arr[index];
}

double DynamicArrayD::get(const size_t index) const {
    return _arr[index];
}

void DynamicArrayD::set(const size_t index, const double value) {
    _arr[index] = value;
}

double & DynamicArrayD::setGet(const size_t index) {
    return _arr[index];
}
double const & DynamicArrayD::setGet(const size_t index) const {
    return _arr[index];
}

size_t DynamicArrayD::size() const {
    return _size;
}

std::ostream & operator<<(std::ostream &os, const DynamicArrayD &d) {
    for (int i = 0; i < d.size(); i++) {
        os << d.get(i);
        if(i != d.size() - 1) {
            os << ", ";
        }
    }
    return os;
}
