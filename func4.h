#ifndef FUNC4_H
#define FUNC4_H
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
//Write a function to compute the integral (area under y) for two vectors x and y (y = f(x)).

#include <iostream>
#include <vector>
#include <math.h>
//included math.h tp use sine function

using namespace std;

//strategy;
// using linspace from last problem
//  1) produce vector x a linspace from starting point to end point of integral, with sufficiently big n
//  2) produce vector y with its componens are function of x's components
//  3) for each segment of linspace, multiply its length by value of corresponding y components -> yield piecewise rectangular area
//  4) sum them up
//


// produce vector x a linspace from starting point to end point of integral, with sufficiently big n

vector<double> linspace2(const double &start,const double &stop, const int &num_points){

    vector<double> s(num_points);

    for (unsigned int i = 0; i < num_points ; ++i) {
                s[i] = start + i*(stop-start)/(num_points);
            }

    return s;
}


//
//for each segment of linspace, multiply its length by value of corresponding y components -> yield piecewise rectangular area
// and then sum them up in double d
double integral (const vector<double> &y, const double &start,const double &stop, const int &num_points)
    {
        double d = 0.0 ;
        for (unsigned int k = 0; k < num_points ; ++k) {


           d = d + ((stop-start)/(num_points))*y[k];
        }
        return d;
    }

//
//integrating y=sin(x) by x from "0" to "pi". Each retangular area's width = "pi/10000"
//
// produce vector y with its componens a function of x's components
// and call the integrating function from above
//
int func4()
{
    double start = 0.0;
    double stop = M_PI;
    unsigned int num_points = 10000;

    vector <double> x =  linspace2(start, stop, num_points);
    vector <double> y(num_points);
        for(unsigned int j=0 ; j < num_points ;++j){

            y[j] = sin(x[j]);

        }


    double z = integral(y,start,stop,num_points);
    return round(z);


}






#endif // FUNC4_H
