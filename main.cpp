#include "Point.h"
#include <iostream>

int main(){
    Point point1(5,4);
    Point point2(3,8);
    Point point3(1,9);

    std::cout << "Point 1: (" << point1.GetXCoordinate() << "," << point1.GetYCoordinate() << ")" << std::endl;
    std::cout << "Point 2: (" << point2.GetXCoordinate() << "," << point2.GetYCoordinate() << ")" << std::endl;
    std::cout << "Point 3: (" << point3.GetXCoordinate() << "," << point3.GetYCoordinate() << ")" << std::endl;
    std::cout << std::endl;

    std::cout << "Distance between Points:" << std::endl;
    std::cout << "1 and 2: " << point1.Distance(point2) << std::endl;
    std::cout << "2 and 3: " << point2.Distance(point3) << std::endl;
    std::cout << "3 and 1: " << point3.Distance(point1) << std::endl;
    std::cout << std::endl;

    return 0;
}