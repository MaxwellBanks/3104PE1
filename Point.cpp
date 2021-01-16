#include "Point.h"

Point::Point(){
    x_coordinate_ = 0;
    y_coordinate_ = 0;
}

Point::Point(int x_input, int y_input){
    x_coordinate_ = x_input;
    y_coordinate_ = y_input;
}

int Point::GetXCoordinate(){
    return x_coordinate_;
}

int Point::SetXCoordinate(int new_x){
    x_coordinate_ = new_x;
}

int Point::GetYCoordinate(){
    return y_coordinate_;
}

int Point::SetYCoordinate(int new_y){
    y_coordinate_ = new_y;
}

float Point::Distance(Point second_point);

void Point::Translate(int translation_value);