#pragma once



class Circle
{
    const double PI =3.141592653589793;
    
    private:
    //private variables
    double radius;

    public:
    //Constructor
    Circle(double m_radius) : radius(m_radius) {}

    //Member functions
    double circle_Area(double radius);
    double circle_Circum(double radius);
    


};


class Rectangle
{
private:
    float l,w;
    
public:
    
    //Constructor
    Rectangle(float pl, float pw): l(pl),w(pl) {}
    
    //Member functions
    float rect_Area(float l,float w);
    

};
