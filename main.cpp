/*
Maxwell Banks
Programming Exercise 1
This program creates three points and calculates the distances between them initially and after translations
It takes no command line arguments
*/


#include "Point.h"
#include <iostream>

/*
Prints the coordinates of all points

@param point1
    The first point instance
@param point2
    The second point instance
@param point3
    The third point instance
*/
void PrintPointCoordinates(Point point1, Point point2, Point point3){
    std::cout << "Point Coordinates" << std::endl;
    std::cout << "Point 1: (" << point1.get_x_coordinate() << "," << point1.get_y_coordinate() << ")" << std::endl;
    std::cout << "Point 2: (" << point2.get_x_coordinate() << "," << point2.get_y_coordinate() << ")" << std::endl;
    std::cout << "Point 3: (" << point3.get_x_coordinate() << "," << point3.get_y_coordinate() << ")" << std::endl;
    std::cout << std::endl;
}

/*
Prints the distances between each pair of points

@param point1
    The first point instance
@param point2
    The second point instance
@param point3
    The third point instance
*/
void PrintPointDistances(Point point1, Point point2, Point point3){
    std::cout << "Distance between Points:" << std::endl;
    std::cout << "1 and 2: " << point1.Distance(point2) << std::endl;
    std::cout << "2 and 3: " << point2.Distance(point3) << std::endl;
    std::cout << "3 and 1: " << point3.Distance(point1) << std::endl;
    std::cout << std::endl;
}

/*
The driver function

Initializes three points, then prints them and the distance between them
Then translates the first point by 7 before printing the new coordinates and distances
Finally translates the first point by -3.6 before printing the new coordinates and distances
*/
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