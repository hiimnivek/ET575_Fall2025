/*
Kevin Huang
Nov 28th, 2025
lab 18, array application 
*/

#include<iostream>
#include<fstream>
#include"lab18_function.cpp"
using namespace std;

int main(){
    const int SIZE = 5;
    int numbers[SIZE];

    cout<<"------ EXERCISE -------"<<endl;

    int count = collectnumber(numbers, SIZE);

    float avg = Averagenumber(numbers, count);

    int closeNum = Closestmean(numbers, count, avg);

    Printresult(avg, closeNum);

    return 0;
}