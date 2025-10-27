/*
Kevin Huang
Oct 26th, 2025
Homework 5, functions
*/

#include<iostream>
#include "Homework5_functions.cpp"
using namespace std;

int main(){
    cout<<"----- PROGRAM 1 ------ "<<endl;
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s,t));

    
    
    cout<<"\n\n----- PROGRAM 2 ------ "<<endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();

    bool desc_order = inOrder(num1, num2, num3);
    
    order_result(num1, num2, num3, desc_order);



    return 0;
}