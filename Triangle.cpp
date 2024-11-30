//
//  Triangle.cpp
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student: Write the implementation of the class Triangle here


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "Shape.h"
#include "Triangle.h"

// Constructor
Triangle::Triangle(string n, float x1p, float y1p, 
                             float x2p, float y2p, 
                             float x3p, float y3p) 
    : Shape(n, (x1p + x2p + x3p) / 3.0, (y1p + y2p + y3p) / 3.0) {
    x1 = x1p;
    y1 = y1p;
    x2 = x2p;
    y2 = y2p;
    x3 = x3p;
    y3 = y3p;

    x_centre = (x1p + x2p + x3p) / 3.0;
    y_centre = (y1p + y2p + y3p) / 3.0;
}

// Destructor
Triangle::~Triangle() {
    // Nothing to do
}

// Getters
float Triangle::getX1() const { return x1; }
float Triangle::getY1() const { return y1; }
float Triangle::getX2() const { return x2; }
float Triangle::getY2() const { return y2; }
float Triangle::getX3() const { return x3; }
float Triangle::getY3() const { return y3; }

// Setters
void Triangle::setX1(float x1p) { x1 = x1p; x_centre = (x1 + x2 + x3) / 3.0;}
void Triangle::setY1(float y1p) { y1 = y1p; y_centre = (y1 + y2 + y3) / 3.0;}
void Triangle::setX2(float x2p) { x2 = x2p; x_centre = (x1 + x2 + x3) / 3.0;}
void Triangle::setY2(float y2p) { y2 = y2p; y_centre = (y1 + y2 + y3) / 3.0;}
void Triangle::setX3(float x3p) { x3 = x3p; x_centre = (x1 + x2 + x3) / 3.0;}
void Triangle::setY3(float y3p) { y3 = y3p; y_centre = (y1 + y2 + y3) / 3.0;}

float Triangle::getXCentre() const { return x_centre; }
float Triangle::getYCentre() const { return y_centre; }

// Draw method
void Triangle::draw() const {
    // Set floating point printing to fixed point with 2 decimals
    cout << std::fixed;
    cout << std::setprecision(2);
   
    // Print the information
    cout << "triangle: " << name << " "
         << getXCentre() << " " << getYCentre()
         << " " << x1 << " " << y1
         << " " << x2 << " " << y2
         << " " << x3 << " " << y3
         << " " << computeArea()
         << endl;
}

// Compute Area method (using Heron's formula)
float Triangle::computeArea() const {
    // Area calculation using coordinate geometry formula
    return (0.5 * abs(x1 * (y2 - y3) + 
                      x2 * (y3 - y1) + 
                      x3 * (y1 - y2)));
}

// Clone method
Shape* Triangle::clone() const {
    return (new Triangle(*this));
}