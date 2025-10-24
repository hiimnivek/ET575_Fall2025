/*
Kevin Huang
Oct 24th, 2025
Lab 12, scooping, and predefined functions
*/

#include<iostream>
#include<cmath>
using namespace std;

//example 1:function that calculates and returns the sum of two numbers

int add(int num1,int num2){
    int sum = num1 + num2;  //sum is a local variable in function add()
    cout<<"The sum in function add() is \t"<<sum<<endl;
    return sum;
}

//example 2:
void doSomething(){
    //global variable
    num += 20;
    cout<<"num in doSomething function: "<<num<<endl;
}

//example 3: c++ predefine functions
//function passes two arguments and returns the hypotenuse of a right triangle.
float hyp(float side1, float side2){
    return sqrt(pow(side1, 2)+pow(side2, 2));

}

//function to print result
void printhyp(float s1, float s2, float h){
    cout<<"The hypotenuse of side "<<s1<<" and "<<s2<<" is "<<h<<endl;
}

//EXERCISE

// function to collect a number greater than 0

// function to calculate the distance of four point

//function to print the result