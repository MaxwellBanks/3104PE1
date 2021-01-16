#ifndef POINT_H
#define POINT_H

class Point{
    public:
        //Constructors
        Point();
        Point(float x_input, float y_input);

        float GetXCoordinate();
        float SetXCoordinate(float new_x);

        float GetYCoordinate();
        float SetYCoordinate(float new_y);

        float Distance(Point second_point);

        void Translate(float translation_value);

    private:
        float x_coordinate_;
        float y_coordinate_;
}


#endif