/*
Kevin Huang
Oct 26th, 2025
Homework 5, functions
*/

#include<iostream>
#include<cmath>
using namespace std;

//Program 1
int speed(){
    int s;
    do{
        cout<<"Enter a windspeed: ";
        cin>>s;
        if(s<=0 || s>=100)
        cout<<"Windspeed must be positive number and less than 100"<<endl;
    }
    while (s<=0 || s>=100);
    return s;
}

float temp(){
    float t;
    do{
        cout<<"Enter a temperature: ";
        cin>>t;
        if(t>10 || t<=-90)
            cout<<"Temperature must be less or equal to 10 and greater than -90"<<endl;
    }
    while(t>10 || t<=-90);
    return t;
}

float windspeed(int s, float temp){
    float windchill = 33 - (10 * sqrt(s) - s + 10.5) * (33 - temp);
    return windchill;
}

void prompt_result(float windspeed) {
    cout<<"The wind speed index is "<<windspeed<<endl;
}



//Program 2
int collectNumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}

bool inOrder(int n1, int n2, int n3){
    if(n1>n2 && n2 > n3)
        return true;
    else
        return false;
}

void order_result(int n1, int n2, int n3, bool desc_order) {
    if(desc_order)
    cout<<""<<n1<<", "<<n2<<", "<<n3<<" are in descending order"<<endl;
    else
    cout<<""<<n1<<", "<<n2<<", "<<n3<<" are NOT in descending order"<<endl;

    char choice;
    cout<<"Do you want to run the program again? (Y or N): ";
    cin>>choice;

    if (choice == 'Y') {
        int num1 = collectNumber();
        int num2 = collectNumber();
        int num3 = collectNumber();
        bool desc_order = inOrder(num1, num2, num3);
        order_result(num1, num2, num3, desc_order);
    }
}
