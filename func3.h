#ifndef FUNC3_H
#define FUNC3_H



//
// Created by Lee Chang Jun
//
// SNU-ID: 2013-10972
//
// Homework 01-prob5
//
// In this homework we will solve several problems related to vectors,
// using the vector object from the standard template library (STL)
// in the std (standard) namespace.
//

#include <iostream>
#include <vector>


using namespace std;

//linespce function produces n(such n=num_points) points that evenly divide line segment connecting two point 'start' and 'stop'
//and assign each point to vector's each component

const vector<double> linspace(const double &start,\
                                   const double &stop,\
                              const int &num_points){

    //s will be the vector, which component will be dividing points
    vector<double> s(num_points);

    for (unsigned int i = 0; i < num_points ; ++i) {
                s[i] = start + i*(stop-start)/(num_points);
            }
    //return to linspace
    return s;
}



vector <double> func3()
{
    double start = -0.12;
    double stop = 0.48;
    unsigned int num_points = 10;

    vector <double> A =  linspace(start, stop, num_points);
    return A;

   }

#endif // FUNC3_H
