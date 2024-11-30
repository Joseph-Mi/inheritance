//
//  Rectangle.h
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>
#include <string>
using namespace std;


// This class implements the rectangle Shape objects.
// ECE244 Student: Write the definition of the class here.

#include "Shape.h"

class Rectangle : public Shape {
private:
    float width;
    float height;

public: 
    //constructor 
    Rectangle (string n, float xcent, float ycent, float width, float height);

    virtual ~Rectangle();

    // gets
    float getHeight() const;
    float getWidth() const;

    // sets
    void setHeight(float h);
    void setWidth(float w);

    virtual void draw() const;

    virtual float computeArea() const;

    virtual Shape* clone() const; // clone

};

#endif /* Rectangle_h */


