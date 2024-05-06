//
// Created by kuba on 25.03.24.
//

#ifndef DYNAMICARRAYD_H
#define DYNAMICARRAYD_H
#include <ostream>


class DynamicArrayD {
private:
    double* _arr;
    size_t _size;

public:
    explicit DynamicArrayD(size_t size);
    DynamicArrayD(size_t size, double value);
    DynamicArrayD(const DynamicArrayD& dynamic_array_d);
    DynamicArrayD(DynamicArrayD&& dynamic_array_d) noexcept;

    ~DynamicArrayD();

    DynamicArrayD& operator=(const DynamicArrayD& d);
    DynamicArrayD& operator=(DynamicArrayD&& d) noexcept ;
    double& operator [](size_t index);
    double const& operator [](size_t index) const;

    [[nodiscard]] double get(size_t index) const;
    void set(size_t index, double value);

    double& setGet(size_t index);
    [[nodiscard]] double const& setGet(size_t index) const;

    [[nodiscard]] size_t size() const;


};

std::ostream &operator<<(std::ostream &os, const DynamicArrayD &d);


#endif //DYNAMICARRAYD_H
