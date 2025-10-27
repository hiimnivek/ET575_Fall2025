/*
Kevin Huang
Oct 24th, 2025
Lab 12, scooping, and predefined functions
*/

#include<iostream>

//global variable - has to be before lab12_functions 
int num = 8;

#include "Lab12_functions.cpp"
using namespace std;

int main(){
    cout<<"\n----- Example 1: local variables ------"<<endl;
    int sum = add(3,7) + add(1,6); //sum is local variable in the main() function
    cout<<"The total sum in main() is \t"<<sum<<endl;
 
    cout<<"\n----- Example 2: global variables ------"<<endl;
    cout<<"num original value = \t"<<num<<endl;
    doSomething();
    num = 5;
    cout<<"num in main function = \t"<<num<<endl;
 
    cout<<"\n----- Example 3: hypotenuse ------"<<endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1,s2);
    printhyp(s1,s2,h);

    cout<<"\n----- Exercise ------"<<endl;
    int x1 = positive();     //call 1st function
    int y1 = positive();      //call 1st function
    int x2 = positive();      //call 1st function
    int y2 = positive();      //call 1st function

    float d = distance(x1, y1, x2, y2);           //call the 2nd function

    //call the 3rd function
    print(x1,y1,x2,y2,d);

    return 0;
}