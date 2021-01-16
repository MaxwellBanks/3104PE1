#include "Point.h"
#include "math.h"

/*
Initializes an instance of Point with coordinates at (0,0) (i.e. the origin)
*/
Point::Point(){
    x_coordinate_ = 0;
    y_coordinate_ = 0;
}

/*
Initializes an instance of Point with coordinates at the given values

@param x_input
    The x value for the newly initialized point
@param y_input
    The y value for the newly initialized point
*/
Point::Point(float x_input, float y_input){
    x_coordinate_ = x_input;
    y_coordinate_ = y_input;
}

/*
Returns the x value of the point
*/
float Point::GetXCoordinate(){
    return x_coordinate_;
}

/*
Sets the x coordinate of the point to the given value

@param new_x
    The new x value of the point
*/
void Point::SetXCoordinate(float new_x){
    x_coordinate_ = new_x;
}

/*
Returns the y value of the point
*/
float Point::GetYCoordinate(){
    return y_coordinate_;
}

/*
Sets the y coordinate of the point to the given value

@param new_y
    The new y value of the point
*/
void Point::SetYCoordinate(float new_y){
    y_coordinate_ = new_y;
}

/*
Calculates the hypotenuse of a right triangle given the base and height
This relies on the fact that a right triangle can be drawn based on any
two points such that each point makes up one of the end vertices of the
hypotenuse

@param base
    The x distance between two points, which forms the base of a triangle
    where the distance between the two points is the hypotenuse
@param height
    The y distance between two points, which forms the height of a triangle
    where the distance between the two points is the hypotenuse
@return
    The distance between two points that together form each vertice of a
    right triangle's hypotenuse
*/
float PythagoreanTheorem(float base, float heigh){
    return sqrt(pow(base, 2) + pow(height, 2));
}

/*
Calculates the distance between this point and a second point

@param second_point
    The point whose distance from this one is calculated
@return
    The distance between this point and second_point
*/
float Point::Distance(Point second_point){
    //std::abs() is used to ensure the difference between coordinates is always positive
    float x_distance = std::abs(x_coordinate_ - second_point.GetXCoordinate());
    float y_distance = std::abs(y_coordinate_ - second_point.GetYCoordinate());

    return PythagoreanTheorem(x_distance, y_distance);
}

/*
Translates the point by the given value

@param translation_value
    The value by which this function translates the point's X and Y coordinates
*/
void Point::Translate(float translation_value){
    x_coordinate_ += translation_value;
    y_coordinate_ += translation_value;
}