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
    cout<<"\nWelcome to C++ \t\t" <<username<<endl;
    
    cout << " ------- Example 2: cin data -------"<<endl;
    cout<<"Enter a new username" <<endl;
    cin >> username;
    cout<<"New user is "<<username<<endl;
    
    cout << " ------- Example 3: data type -------"<<endl;
    //declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout <<"Given symbol = " <<sym<<endl;
    cout <<"Given disatance = " <<distance<<endl;
    cout <<"Given number = " <<number<<endl;

    cout << "------ Exercise ------"<<endl;
    //declare variables (4 lines)


    // collect data (4 values)

    //print result (values)
    
    return 0;
}