/*
Kevin Huang
Oct 22nd, 2025
Lab 11, functions
*/

#include<iostream>
#include "Lab11_function.cpp"

using namespace std;

int main(){
    cout<<"\n------ Example 1: Void Function ------"<<endl;
    printhello();
    printhello();
    printhello();

    cout<<"\n------ Example 2: Void Function with arguments ------"<<endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);
    greeting("Carl");

    cout<<"\n------ Example 3: Void Function with returning value ------"<<endl;
    int savefive = returnfive();
    cout<<"The returning value is "<<savefive<<endl;
    savefive +=2;
    cout<<"The returning value after += 2 =  "<<savefive<<endl;
    
    cout<<"\n------ Example 4: code after the return ------"<<endl;
    printsome();
    int n = somenumber();
    cout<<"Some number \t "<<n<<endl;

    cout<<"\n------ Example 5: calculate the area of the square ------"<<endl;
    float area_square = areasquare(2.5);
    cout<<"The area of a square is \t"<<area_square<<endl;

    cout<<"\n------ Example 6: product of two numbers ------"<<endl;
    int p = product(2,3);
    cout<<"The product is \t"<<p<<endl;
    
    cout<<"\n------ Example 7: calculate the fahrenheit temperature ------"<<endl;
    double f = fah(12.5);
    printfah(f);

    cout<<"\n------ Example 8: check a number ------"<<endl;
    string checknum = checknumber(3);
    printnumber(checknum);

    cout<<"\n------ EXERCISE ------"<<endl;
    int random = 3;
    bool checkeven = even(random);
    cout<<"Is "<<random<<" even? ";
    printeven(checkeven);

    return 0;
}