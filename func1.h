#ifndef FUNC1_H
#define FUNC1_H

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

//sum_vector() simply sum up two distinct vector x,y
//by setting vector s inside, such s[i]=x[i]+y[i]. and return it to sum_vector

vector<int> sum_vector(const vector<int> &x,const vector<int> &y){

    vector<int> s(x.size());
    for (unsigned int i = 0; i < x.size(); ++i) {
                s[i] = x[i]+y[i];
            }

    return s;
    }

vector<int> func1()
{

    const vector<int> x{1,2,3,4,5};
    const vector<int> y{1,2,3,4,5};

    //call sum_vector

    vector <int> sum = sum_vector(x,y);
    return sum;


}






#endif // FUNC1_H
