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


#include<vector>
#include<iostream>

#ifndef FUNC2_H
#define FUNC2_H

using namespace std;



int func2(){

                const vector<int> x{1,2,3,4,5};
                const vector<int> y{1,2,3,4,5};

                int s= 0;
                for (unsigned int i = 0; i < x.size(); ++i) {

                    s = s + x[i]*y[i];
                }

                return s;

}


#endif // FUNC2_H
