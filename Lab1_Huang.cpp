/*
Kevin Huang
Aug 27th, 2025
Lab #1, Iostream
*/
// C++ library

#include<iostream>
using namespace std;

int main() 
{
    cout << "------- Example 1: cout data -------" <<endl;
    cout <<"This is a C++ code" <<endl;
    //variables = temporary storage of data
    //declare a variables first
    string username = "peterpan123";
    cout <<"\nWelcome to C++ \t\t" <<username<<endl;
    
    cout << " ------- Example 2: cin data -------"<<endl;
    cout <<"Enter a new username" <<endl;
    cin >> username;
    cout <<"New user is "<<username<<endl<<endl;
    
    cout << " ------- Example 3: data type -------"<<endl;
    //declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout <<"Given symbol = " <<sym<<endl;
    cout <<"Given distance = " <<distance<<endl;
    cout <<"Given number = " <<number<<endl<<endl;

    cout << "------ Exercise ------"<<endl;
    //declare variables (4 lines)
    string country;
    char gender;
    int zipcode;
    float rate;

    // collect data
    cout <<"Enter a country you want to visit: ";
    cin >> country;

    cout <<"Enter your gender(f for female, m for male, and o for others): ";
    cin >> gender;

    cout <<"Enter your zipcode: ";
    cin >> zipcode;

    cout <<"Enter the sales tax for NY: ";
    cin >> rate;
    
    //print result
    cout <<"Entered country: " <<country<<endl;
    cout <<"Selected gender: " <<gender<<endl;
    cout <<"Zip code:\t " <<zipcode<<endl;
    cout <<"Tax rate:\t " <<rate<<endl;

    return 0;
}