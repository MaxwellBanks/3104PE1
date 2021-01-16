#include "Point.h"
#include <iostream>

void PrintPointCoordinates(Point point1, Point point2, Point point3){
    std::cout << "Point Coordinates" << std::endl;
    std::cout << "Point 1: (" << point1.GetXCoordinate() << "," << point1.GetYCoordinate() << ")" << std::endl;
    std::cout << "Point 2: (" << point2.GetXCoordinate() << "," << point2.GetYCoordinate() << ")" << std::endl;
    std::cout << "Point 3: (" << point3.GetXCoordinate() << "," << point3.GetYCoordinate() << ")" << std::endl;
    std::cout << std::endl;
}

void PrintPointDistances(Point point1, Point point2, Point point3){
    std::cout << "Distance between Points:" << std::endl;
    std::cout << "1 and 2: " << point1.Distance(point2) << std::endl;
    std::cout << "2 and 3: " << point2.Distance(point3) << std::endl;
    std::cout << "3 and 1: " << point3.Distance(point1) << std::endl;
    std::cout << std::endl;
}

int main(){
    Point first_point(5,4);
    Point second_point(3,8);
    Point third_point(1,9);

    PrintPointCoordinates(first_point, second_point, third_point);
    PrintPointDistances(first_point, second_point, third_point);

    std::cout << "Translating point 1 by 7" << std::endl << std::endl;
    first_point.Translate(7);

    PrintPointCoordinates(first_point, second_point, third_point);
    PrintPointDistances(first_point, second_point, third_point);

    std::cout << "Translating point 1 by 7" << std::endl << std::endl;
    first_point.Translate(-3.6);

    PrintPointCoordinates(first_point, second_point, third_point);
    PrintPointDistances(first_point, second_point, third_point);


    return 0;
}