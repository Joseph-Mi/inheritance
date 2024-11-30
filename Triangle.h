//
//  Triangle.h
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

#ifndef Triangle_h
#define Triangle_h

#include <iostream>
#include <string>
using namespace std;


// This class implements the triangle Shape objects.
// ECE244 Student: Write the definition of the class here.

#include "Shape.h"

class Triangle : public Shape {
private: 
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float x_centre, y_centre;

public:
    //constr
    Triangle(string n, float x1, float y1, 
                       float x2, float y2, 
                       float x3, float y3);
    
    // Virtual destructor
    virtual ~Triangle();

    // Getters for vertex inates
    float getX1() const;
    float getY1() const;
    float getX2() const;
    float getY2() const;
    float getX3() const;
    float getY3() const;

    // Setters for vertex inates
    void setX1(float x1);
    void setY1(float y1);
    void setX2(float x2);
    void setY2(float y2);
    void setX3(float x3);
    void setY3(float y3);

    //center sinve we dont have
    float getXCentre() const;
    float getYCentre() const;

    // Virtual methods to override from Shape base class
    virtual void draw() const;
    virtual float computeArea() const;
    virtual Shape* clone() const;
};

#endif /* Triangle_h */