#ifndef POINT_H
#define POINT_H

class Point{
    public:
        //Constructors
        Point();
        Point(float x_input, float y_input);

        float get_x_coordinate();
        void SetXCoordinate(float new_x);

        float get_y_coordinate();
        void SetYCoordinate(float new_y);

        float Distance(Point second_point);

        void Translate(float translation_value);

    private:
        float x_coordinate_;
        float y_coordinate_;
};


#endif