// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: September 13
// This program calculates the area and perimeter of a circle
//     with radius of 15mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "mm^2" << std::endl;
    std::cout << "Perimeter is " << (2*M_PI*15) << "mm" << std::endl;
}
