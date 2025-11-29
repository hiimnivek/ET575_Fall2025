/*
Kevin Huang
Nov 28th, 2025
lab 18, array application 
*/

#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int collectnumber(int ar[], int maxSize){
    int n;
    int count = 0;

    cout<<"Enter up to 5 non-zero integers (0 to stop): "<<endl;

    while(count < maxSize){
        cout<<"Enter number # "<<(count+1)<<" : ";
        cin >> n;

    if(n==0){

        break;
    }

    ar[count] = n;
    count++;

    }

    return count;
}



float Averagenumber(int ar[], int s){
    if (s==0) 
        return 0;

    int sum = 0;
    for(int i = 0; i < s; i++){
        sum += ar[i];
    }

    return sum/s;
}


int Closestmean(int ar[], int s, float avg){
    if(s==0)
        return 0;

    float smallestDiff = abs(ar[0] - avg);
    int closest = ar[0];

    for (int i = 1; i < s; i++){
        float diff = abs(ar[i]-avg);
        if(diff < smallestDiff){
            smallestDiff = diff;
            closest = ar[i];
        }
    }
    
    return closest;
}



void Printresult(float avg, int closeNum){
    cout<<"\nThe closest number to average "<<avg<<" is "<<closeNum<<" ."<<endl;
}



