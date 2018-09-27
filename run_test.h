#ifndef RUN_TEST_H
#define RUN_TEST_H

//
// Created by Lee Chang Jun
//
// SNU-ID: 2013-10972
//
// Homework 01-prob4
//
// In this homework we will solve several problems related to vectors,
// using the vector object from the standard template library (STL)
// in the std (standard) namespace.

#include <iostream>
#include <vector>
#include <math.h>
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include "func4.h"
#include <functional>

using namespace std;


bool test_f1() {
    vector<int> a {2,4,6,8,10};
    return  func1() == a;
}

bool test_f2() {
    return  func2() == 55;
}


bool test_f3() {
    vector <double> b{-0.12,-0.06,-0.00,0.06,0.12,0.18,0.24,0.30,0.36,0.42};
    return  func3() == b;
}

bool test_f4() {

    return  func4() == 2;
}


// Run tests on a function and named input
bool run_test( bool fnc(), string function_name)
{
    bool val = fnc();
    if (val){
        std::cout << "[OK] : test of function PASSED -> " << function_name << '\n';
    } else {
        std::cout << "[XX] : test of function FAILED -> " << function_name << '\n';
    }
    return val;
}


void run_all_tests() {

    vector<bool> results;

    results.push_back( run_test(test_f1, "test f1") );
    results.push_back( run_test(test_f2, "test f2") );
    results.push_back( run_test(test_f3, "test f3") );
    results.push_back( run_test(test_f4, "test f4") );



    bool least_one_is_false = false;
    for ( int i=0; i< results.size(); ++i) {
        if (! results[i]) { least_one_is_false = true; }
    }

    if (!least_one_is_false) {
        std::cout << "all tests passed\n";
    } else {
        std::cout << "There was a failure\n";
    }
}


#endif // RUN_TEST_H
