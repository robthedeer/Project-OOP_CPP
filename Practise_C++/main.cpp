#include<iostream>
#include"calc.hpp"
#include"calc.cpp"

using namespace std;



int main()
{
    //Circle object
    double radius;
    cout<<"Enter radius:";
    cin>>radius;

    Circle circle(radius);

    cout<<"Area of the circle: "<<circle.circle_Area(radius);
    cout<<"\n";
    
    //Rectangle object
    float l,w;
    cout<<"Enter length:";
    cin>>l;
    cout<<"Enter width:";
    cin>>w;
    
    Rectangle rect(l,w);
    
    cout<<"Area of Rectangle ="<<rect.rect_Area(l, w)<<"\n";
    


    return 0;
}
