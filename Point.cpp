#include "Point.h"
#include "math.h"

Point::Point(){
    x_coordinate_ = 0;
    y_coordinate_ = 0;
}

Point::Point(float x_input, float y_input){
    x_coordinate_ = x_input;
    y_coordinate_ = y_input;
}

float Point::GetXCoordinate(){
    return x_coordinate_;
}

float Point::SetXCoordinate(float new_x){
    x_coordinate_ = new_x;
}

float Point::GetYCoordinate(){
    return y_coordinate_;
}

float Point::SetYCoordinate(float new_y){
    y_coordinate_ = new_y;
}

float PythagoreanTheorem(float x_distance, float y_distance){
    return sqrt((x_distance ** 2) + (y_distance ** 2))
}

float Point::Distance(Point second_point){
    second_x = second_point.GetXCoordinate();
    second_y = second_point.GetYCoordinate();

    x_distance = std::abs(x_coordinate_ - second_x);
    y_distance = std::abs(y_coordinate_ - second_y);

    return PythagoreanTheorem(x_distance, y_distance);
}

void Point::Translate(float translation_value){
    x_coordinate_ += translation_value;
    y_coordinate_ += translation_value;
}