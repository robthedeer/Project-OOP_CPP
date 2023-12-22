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

Employee empl;
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

void setPersonalInfo()
{
    string name,surname,ID;
    int age;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your surname:";
    cin>>surname;
    cout<<"Enter your Age:";
    cin>>age;
    cout<<"Enter your ID:";
    cin>>ID;
    empl.setName(name);
    empl.setSurname(surname);
    empl.setAge(age);
    empl.setID(ID);
    
    
    cout<<"Name :"<<empl.getName();
    cout<<"\nSurname:"<<empl.getSurname();
    cout<<"\nAge"<<empl.getAge();
    cout<<"\nID no."<<empl.getID()<<"\n";
    
    
    
}
