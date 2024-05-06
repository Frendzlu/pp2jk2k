#include <iostream>

#include "A.h"
#include "DynamicArrayD.h"

int test();

int main() {
    DynamicArrayD d{.size = 2u};

    std::cout << "#### Test 1 ####" << std::endl;
    {
        DynamicArrayD da1(6u);
        DynamicArrayD da2(4u, 2.);

        std::cout << "da2[3]: " << da2.get(3u) << std::endl;

        da1.set(2u, 12.);

        da2.set(2u, 22.);

        std::cout << "da1 size: " << da1.size() << ", elements: " << da1 << std::endl;
        std::cout << "da2 size: " << da2.size() << ", elements: " << da2 << std::endl;
    }

    std::cout << "\n#### Test 2 ####" << std::endl;
    {
        DynamicArrayD da1(4u, 2.);
        DynamicArrayD da2 = da1;
        const DynamicArrayD da3 = da1;

        da1.set(2u, 12.);

        da2.set(2u, 22.);
        da2.set(3u, 23.);

        std::cout << "da1 size: " << da1.size() << ", elements: " << da1 << std::endl;
        std::cout << "da2 size: " << da2.size() << ", elements: " << da2 << std::endl;
        std::cout << "da3 size: " << da3.size() << ", elements: " << da3 << std::endl;
    }

    std::cout << "\n#### Test 3 ####" << std::endl;
    {
        DynamicArrayD da1(4u);
        DynamicArrayD da2(6u, 3.);
        const DynamicArrayD da3 = da2;

        da2.set(0u, 0.);
        da2.set(2u, 2.);

        da1 = da2;
        da1.set(1u, 11.);

        da2.set(1u, 21.);

        std::cout << "da1 size: " << da1.size() << ", elements: " << da1 << std::endl;
        std::cout << "da2 size: " << da2.size() << ", elements: " << da2 << std::endl;
        std::cout << "da3 size: " << da3.size() << ", elements: " << da3 << std::endl;
    }

    std::cout << "\n#### Test 4 ####" << std::endl;
    {
        DynamicArrayD da1(4u);
        DynamicArrayD da2(6u, 3.);
        const DynamicArrayD da3 = da2;

        da2.setGet(0u) = 0.;
        da2.setGet(1u) = 1.;

        da1 = da3;
        da1.setGet(1u) = 11.;

        std::cout << "da1[0]: " << da1.setGet(0u) << std::endl;
        std::cout << "da2[0]: " << da2.setGet(0u) << std::endl;
        std::cout << "da3[0]: " << da3.setGet(0u) << std::endl;

        std::cout << "da1 size: " << da1.size() << ", elements: " << da1 << std::endl;
        std::cout << "da2 size: " << da2.size() << ", elements: " << da2 << std::endl;
        std::cout << "da3 size: " << da3.size() << ", elements: " << da3 << std::endl;
    }
    std::cout << "\n#### Test 5 ####" << std::endl;
    {
        DynamicArrayD da1(4u);
        DynamicArrayD da2(6u, 3.);
        const DynamicArrayD da3 = da2;
        DynamicArrayD da4(10u);

        da2[0u] = 0.;
        da2[1u] = 1.;

        da1 = da4 = da3;
        da1[1u] = 11.;

        std::cout << "da1[0]: " << da1[0u] << std::endl;
        std::cout << "da2[0]: " << da2[0u] << std::endl;
        std::cout << "da3[0]: " << da3[0u] << std::endl;

        std::cout << "da1 size: " << da1.size() << ", elements: " << da1 << std::endl;
        std::cout << "da2 size: " << da2.size() << ", elements: " << da2 << std::endl;
        std::cout << "da3 size: " << da3.size() << ", elements: " << da3 << std::endl;
        std::cout << "da4 size: " << da4.size() << ", elements: " << da4 << std::endl;
    }

    return 0;
}

int test() {
    A a;
    A a2 = a; {
        A a3;
    }
    a = a2;
    // B b;
    A *w = &a;
    A &r = a;


    A *p = new A();
    delete p;

    A *p2 = new A[10];
    delete[] p2;
}
