#ifndef POINT_H
#define POINT_H

class Point{
    public:
        //Constructors
        Point();
        Point(int x_coordinate, int y_coordinate);

        int GetXCoordinate();
        int SetXCoordinate(int new_x);

        int GetYCoordinate();
        int SetYCoordinate(int new_y);

        float Distance(Point second_point);

        void Translate(int translation_value);

    private:
        int x_coordinate_;
        int y_coordinate_;
}


#endif