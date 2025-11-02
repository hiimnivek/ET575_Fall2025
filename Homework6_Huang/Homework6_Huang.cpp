/*
Kevin Huang
Homework 6, functions and introduction to pointers and reference
*/


#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int rose(int n){
    if (n<=0){
        return 1;
    }
    else{
        return (rose(n-1)*n);
    }
}

int rand_side(){
    return 1 + (rand()%20);
}

float hyp(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

void print_result(int side1, int side2, double hypotenuse){
    cout<<"THe hypotenuse of a right triangle with side "<<side1<<" and "<<side2<<" is = "<<hypotenuse<<""<<endl;
}


int main(){

cout<<"\n------ Exercise 1 -------"<<endl;
int* ptr;
int var = 7;
int foo = 21;
ptr = &var;
ptr = &foo;
int& ref = var;

cout<<"Pointer 1 = "<<ptr<<endl;
cout<<"value 1 = "<<*ptr<<endl;
cout<<"Pointer 2 = "<<ptr<<endl;
cout<<"value 2 = "<<*ptr<<endl;
cout<<"ref = "<<&ref<<endl;


cout<<"\n------ Exercise 2 -------"<<endl;
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<"The final answer is "<<rose(num)<<endl;


cout<<"\n------ Exercise 3 -------"<<endl;
int side1 = rand_side();
int side2 = rand_side();
double hypotenuse = hyp(side1, side2);
print_result(side1, side2, hypotenuse);


return 0;
}