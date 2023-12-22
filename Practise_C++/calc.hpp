#pragma once
#include <string>
#include <iostream>

using namespace std;

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

//CLASS FOR REACTANGLE OPERATIONS
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

//CLASS FOR EMPOYEE
class Employee
{
private:
    string name;
    string surname;
    int age;
    string ID;
public:
    //Set Setter functions
    void setName(string & n) {name=n;}
    void setSurname(string &s) {surname=s;}
    void setAge(int a){age =a;}
    void setID(string &id){ID=id;}
   
    //Set Getter Functions
    string getName();
    string getSurname();
    int getAge();
    string getID();
};
