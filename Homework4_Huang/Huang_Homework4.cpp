/*
Kevin Huang
Homework 3 - loops
*/

#include<iostream>

using namespace std;


int main(){

    cout<<"\n------ Question 1: ------"<<endl;
    int num;
    do{
        cout<<"\nEnter a number greater than or equal to 10: ";
        cin>>num;
        if(num<10){
            cout<<""<<num<<" is invalid! Please enter a number greater than 10: ";
        }
    }
    while(num<10);
    cout<<""<<num<<" is a valid number!"<<endl;


    
    cout<<"\n------ Question 2: ------"<<endl;
    int num1, num2, min, max;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1 <= num2){
        min = num1;
        max = num2;
    }
    else {
        min = num2;
        max = num1;
    }

    cout<<"Result = ";

    int n = min;
    while(n<=max) {
        cout<<n<<" ";
        n++;
    }
    cout<<endl;



    cout<<"\n------ Question 3: ------"<<endl;
    int dimension = 11;
    for(int row = 1; row<=dimension; row++){
        for(int col = 1; col<=dimension; col++){
            if((5 >= col && col >= 4 && 10>=row && row>=3) || (col>=5 && col<=6 && row>=4 && row<=5) || (col>=7 && col<=8 && row>=4 && row<=5))
            cout<<" % ";
            else
            cout<<" . ";
        }
        cout<<endl;
    }


    return 0;
}