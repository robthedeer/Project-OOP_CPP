
#include "calc.hpp"
#include <math.h>

//Circle operations

using namespace std;

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

string Employee::getName()
{
    return name;
}

string Employee::getSurname()
{
    return surname;
}

int Employee::getAge()
{
    return age;
}

string Employee::getID()
{
    return ID;
}
