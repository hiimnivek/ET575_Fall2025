/*
Kevin Huang
Dec 1st, 2025
Homework 9
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int arraysize(){
    int s;
    do{
        cout<<"Enter an array size between 1 and 100: ";
        cin >> s;

        if (s < 1 || s > 100 ){
            cout<<"Invalid size! Please try again."<<endl;
        }

    }

    while (s < 1 || s > 100);

    return s;
}


void randPopulate(int ar[], int s){
    for (int i = 0; i < s; i++){
        ar[i] = 10 + rand() % 21; 
    }
}


void print(int ar[], int s){
    for (int i = 0; i < s; i++){
        cout<<ar[i]<<"\t";
    }
    cout<<endl;
}


void reverse(int ar[], int s){
    int start = 0;
    int end = s - 1;

    while (start < end){
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;

        start++;
        end--;
    }
}


int main(){

    int sizearray = arraysize();
    int noise[sizearray];

    randPopulate(noise, sizearray);
    cout<<"\nOriginal Set: "<<endl;

    print(noise, sizearray);

    reverse(noise, sizearray);
    cout<<"\nReversed Set: "<<endl;

    print(noise, sizearray);

    return 0;
}