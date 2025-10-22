/*
Kevin Huang
Oct 22nd, 2025
Lab 11, functions
*/

#include<iostream>
using namespace std;

//void function does not return any value
void printhello(){
    cout<<"Hello function!"<<endl;
    return;
}

//void function with paramenters
void greeting(string name){
    cout<<"Good afternoon "<<name<<endl;
    return;
}

//example 3: function that returns an intereger(whole number)
int returnfive(){
    return 5;
}

//example 4: any code after the return will not be executed
void printsome(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;
}

int somenumber(){
    int num = 10;
    return num;
    num *= 2;
    return num;
}

//example 5, function that calculates and returns the area of a square
float areasquare(float side){
    float area = side*side;
    return area;
}

//example 6, function that calculates and returns the product of two numbers
float product(int n1, int n2){
    return n1*n2;
}

//example 7, function that calculates and returns the fahrenheit temperature
double fah(double celsius){
    return celsius*1.8 + 32;
}

void printfah(double f){
    cout<<"The Fahreheit temperature is: "<<f<<endl;
}

//example 8: check a number
string checknumber(int number){
    if(number==0){
        return "zero";
    }
    else if(number>=0){
        return "positive";
    }
    else 
        return "negative";
}

void printnumber(string n){
    cout<<"The number is "<<n<<endl;
}

//EXERCISE 
bool even(int number){
    if(number%2==0){
        return true;
    }
    else
        return false;
    }  

void printeven(bool e){
    cout<<e<<endl;
}

