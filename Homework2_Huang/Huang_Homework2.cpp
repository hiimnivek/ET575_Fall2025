/* 
Kevin Huang
Sep 24, 2025
Homework 2: Branching 
*/ 

#include<iostream>
#include<string>

using namespace std;

int main (){
    cout<<"\n ------ Program 1: age eligibility ------ "<<endl;
    int age;
    cout<<"\nEnter your age: ";
    cin>>age;

    if (age<13){
    cout<<"\nNot eligible for any activities"<<endl;
    }
    else if (age >= 13 && age <=17){
    cout<<"\nEligible for youth activities"<<endl;
    }
    else if (age >= 18 && age <= 64){
    cout<<"\nEligible for adult activities"<<endl;
    }
    else if (age >= 65 && age <=119){
    cout<<"\nEligible for senior activities"<<endl;
    }
    else{
    cout<<"\nInvalid age. Please enter a valid age"<<endl;
    }



    cout<<"\n ------ Program 2: age eligibility ------ "<<endl;
    int num1, num2;
    cout<<"\nEnter your first number: ";
    cin>>num1;
    cout<<"\nEnter your second number: ";
    cin>>num2;
    int num3 = num1+num2;
    
    if (num3 <= 0){
        cout<<"\nFalse alarm! The sum is "<<num3<<""<<endl;
    }
    else if(num3 >= 1 && num3 <=100){
        if (num3%5==0)
            cout<<"\n"<<num3<<" is a pentagon"<<endl;
        else if(num3%2!=0)
            cout<<"\n"<<num3<<" is an odd guess"<<endl;
        else
            cout<<"\n"<<num3<<" is an even guess"<<endl;
    }
    else if(num3 >= 101 && num3 <= 200){
        cout<<"\nThe new lucky number is "<<num3<<""<<endl;
    }
    else if(num3 >= 201 && num3 <= 999){
        cout<<"\n"<<num3<<" is a dreaming number"<<endl;
    }
    else{
        if(num3%2==0)
            cout<<"\n"<<num3<<" approaches to the inifinite evenly!"<<endl;
        else if(num3%2!=0)
            cout<<"\n"<<num3<<" approaches to the inifinite oddly!"<<endl;
        else if(num3 >= 2000)
            cout<<"\n"<<num3<<" approaches to the infinite and beyond!"<<endl;
        else{
            cout<<"\n"<<num3<<" is your number!"<<endl;
        }
    }
    
    

    cout<<"\n ------ Program 3: temperature converter ------ "<<endl;
    int temp;
    cout<<"\n1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fanhrenheit to Celsius"<<endl;
    cout<<"3. Kelvin to Celsius"<<endl;
    cout<<"4. Kelvin to Fahrenheit"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"\nChoose an option from 1 to 5: ";
    cin>>temp;

    float temp1;
    cout<<"\nEnter a temperature to be converted: "<<endl;
    cin>>temp1;
    

    switch(temp)
    {
    case 1:
        cout<<"\n"<<temp1<<" Celsius is equal to "<<(temp1*9/5)+32<<" Fahrenheit"<<endl;
        break;
    case 2:
        cout<<"\n"<<temp1<<" Fahrenheit is equal to "<<(temp1-32)*5/9<<" Celsius"<<endl;
        break;
    case 3:
        cout<<"\n"<<temp1<<" Kelvin is equal to "<<temp1-273.15<<" Celsius"<<endl;
        break;
    case 4:
        cout<<"\n"<<temp1<<" Kelvin is equal to "<<(temp1-273.15)*9/5+32<<" Fahrenheit"<<endl;
        break;
    case 5:
        cout<<"\nYou have exited the program"<<endl;
        break;
    default:
        cout<<"\nERROR: INVALID INPUT"<<endl;
        break;
    }


return 0;
}