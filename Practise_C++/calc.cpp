
#include "calc.hpp"
#include <math.h>
//Circle operations
double Circle ::circle_Area(double radius)
{
    return PI * pow(radius, 2.0);
    
}

double Circle::circle_Circum(double radius)
{
    return 2*PI*radius;
}


//Rectangle operations
float Rectangle::rect_Area(float l, float w)
{
    return l*w;
}
