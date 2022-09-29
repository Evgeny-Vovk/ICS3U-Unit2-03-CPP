// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : September 2022
// ICS3U-Unit2-03.cpp File, learning input processing and output in C++.

#include <cmath>
#include <iostream>

int main() {
    // creating variables
    const double TAU = 6.28318530718;
    double radiusOfCircle;

    // input
    std::cout << "Input the radius of the circle in millimeters: ";
    std::cin >> radiusOfCircle;

    // process and output
    std::cout << "The perimeter of the circle is "
              << TAU * radiusOfCircle << "mm.";

    std::cout << "\n\nDone.\n";
}
