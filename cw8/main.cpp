#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"

void print(const Shape& s)
{
    std::cout << "Perimeter: " << s.perimeter() << "\nSurface area: " << s.surfaceArea() << std::endl;
}
 
int main()
{
    std::cout << "#### Test 1 ####" << std::endl;
    {
        //Shape shape;
        const Circle circle(3);
        const Square square(5);
        const Rectangle rectangle(3.5, 4);

        const Shape& r = circle;
        const Shape* w = &square;
        w = &rectangle;
 
        print(circle);
        print(square);
        print(rectangle);

        std::cout << std::endl << circle << square << rectangle << std::endl;
 
        std::cout << std::endl;
        print(r);
        print(*w);
    }
 
    return 0;
}
