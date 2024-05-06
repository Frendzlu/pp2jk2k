#include <iostream>

#include "Vector2d.h"

int main()
{
    std::cout << "\n#### Test 3 ####" << std::endl;
    {
        Vector2d::compEpsilon(0.0001);\
        double a = 1.0;
        a++;
        std::cout << a << std::endl;

 
        const Vector2d v1(2, 3);
        const Vector2d v2(2.1, 3.1);
        const Vector2d v3 = (v2 - v1) * 0.001;
        const Vector2d v4 = Vector2d(v1);
        Vector2d v5;
        v5 = v3;
 
        std::cout << "v4: " << v4 << std::endl;
        std::cout << "v3: " << v3 << std::endl;
        std::cout << "v5: " << v5 << std::endl;

        std::cout << "v3 == v4: " << std::boolalpha << (v3 == v4) << std::endl;
        std::cout << "v3 != v4: " << std::boolalpha << (v3 != v4) << std::endl;
 
        Vector2d::compEpsilon(0.01);
        std::cout << "v3 == v4: " << std::boolalpha << (v3 == v4) << std::endl;
        std::cout << "v3 != v4: " << std::boolalpha << (v3 != v4) << std::endl;
    }
    std::cout << "\n#### Test X ####" << std::endl;
    {

        const Vector2d v1(2, 3);

        std::cout << "v1[0]: " << v1[0] << std::endl;
        std::cout << "v1[1]: " << v1[1] << std::endl;
        std::cout << "v1[2]: " << v1[2] << std::endl;
        std::cout << "v1[3]: " << v1[3] << std::endl;
        std::cout << "v1[4]: " << v1[4] << std::endl;
        Vector2d v2(2, 3);
        v2[0] = 5.8;
        v2[11] = 11.2;

        std::cout << "v2[0]: " << v2[0] << std::endl;
        std::cout << "v2[1]: " << v2[1] << std::endl;
        std::cout << "v2[2]: " << v2[2] << std::endl;
        std::cout << "v2[3]: " << v2[3] << std::endl;
        std::cout << "v2[4]: " << v2[4] << std::endl;
    }
 
    return 0;
}
