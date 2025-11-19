/*
Kevin Huang
lab 16, array in a function
Nov 18th, 2025
*/

#include<iostream>
#include "lab16_function_Huang.cpp"
using namespace std;


int main(){
    cout<<"\n ------ Example 1: collect and populate data into an array ------ "<<endl;
    // initialize variables and array
    int arraysize = 3;
    int arrnum[arraysize];

    //calling functions
    fillup(arraysize, arrnum);
    printarray(arraysize, arrnum);


    cout<<"\n ------ Example 2: program to search a numebr in an array ------ "<<endl;
    //initialize variables and array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;

    //calling functions
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arrnum); // testing if the positive number were properly collected


    cout<<"\n ------ EXERCISE ------ "<<endl;
    // initialize varaibles and array
    int arr_number[] ={6, -10, 9, 12, -3, -8, 5, 7, 4, 0};
    int arrSize = 10;
    int evenSum = sumofEven(arr_number, arrSize);
    cout<<"Sum of all even numbers = "<<evenSum<<endl;

    int negCount= countofNegative(arr_number, arrSize);
    cout<<"Count of negative numbers = "<<negCount<<endl;

    return 0;
}