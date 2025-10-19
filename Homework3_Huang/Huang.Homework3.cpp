/*
Kevin Huang
Homework 3 - for loop
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ Program 1 ------"<<endl;
    int number;
    int positiveNum = 0;
    int negativeNum = 0;
    int zeroNum = 0;

    cout<<"\nEnter 10 numbers:"<<endl;
    for (int n = 1; n<=10; n++){
        cout<<"Number "<<n<<": ";
        cin>>number;

        if (number>0){
            positiveNum++;
        }
        else if (number<0){
            negativeNum++;
        }
        else {
            zeroNum++;
        }
    }
    cout<<"\nTotal positive numbers = "<<positiveNum<<endl;
    cout<<"\nTotal negative numbers = "<<negativeNum<<endl;
    cout<<"\nTotal zeros = "<<zeroNum<<endl;


    cout<<"\n------ Program 2 ------"<<endl;
    int days = 0;
    float sales = 0;
    float totalSales = 0;

    cout<<"Enter the number of days: "<<endl;
    cin>>days;

    for (int d = 1; d<=days; d++){
        cout<<"Enter daily sales for day "<<d<<": $";
        cin>>sales;
        totalSales += sales;
    }

    float averageSales = totalSales/days;

    cout<<"\nTotal sales $ "<<totalSales<<" for "<<days<<" days." ;
    cout<<"Average daily sales $ "<<averageSales<<endl;
 
 
    return 0;
}