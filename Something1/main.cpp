/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * Thought I would try something here
 */

/* 
 * File:   main.cpp
 * Author: jessica
 *
 * Created on November 23, 2017, 10:24 AM
 */

#include <iostream>
#include "custom.h"

int main() {
    int x = 15;
    int y = 5;

    /*        35            7             8       3                  */
    int ans = multiply (y, (subtract (x, (add (y, divide (x, y))))));

    std::cout << "Hello World, your answer is " << ans;
    return 0;
}