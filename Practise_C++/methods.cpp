//
//  methods.cpp
//  Practise_C++
//
//  Created by Sofia on 22.12.2023.
//
#include <iostream>
#include "calc.hpp"
#include <math.h>

using namespace std;
//Variables for the circle
double radius;
//Object for the Circle
Circle c(radius);

//Variables for the Rectangle
float l,w;
//Object for Rectangle
Rectangle rect(l,w);


void calcAreaOfcircle()
{
    
    cout<<"Enter radius:";
    cin>>radius;
    

    cout<<"Area of Circle="<<c.circle_Area(radius);
    
}

void calcCircumOfCircle()
{
    cout<<"\nCircum of circle="<<c.circle_Circum(radius);
}

void calcAreaofRect()
{
    
    cout<<"\nEnter length:";
    cin>>l;
    cout<<"Enter width:";
    cin>>w;
    
    cout<<"Area of Rectangle ="<<rect.rect_Area(l, w)<<"\n";
    
}
