/*
Homework 1: strings, string methods, and numerical variables
Kevin Huang
*/
#include<iostream>
#include<string>
using namespace std;

int main (){
    //ACTIVITY 1
    //Step 1
    string welcome = "Welcome to ";
    string city = "New York City ";
    //Step 2
    string word = "_____";
    cout<<"Enter your name: "<<endl;
    cin>>word;
    //Step 3
    string combine = welcome + city + word;
    //Step 4
    cout<<combine<<endl;
    //Step 5
    int words = combine.length();
    //Step 6
    int index_ma = combine.find("ma"); 
    //Step 7
    //I couldn't figure out how to replace ma if the index is -1 (which is nonexistent)
    //Step 8
    cout<<"\n--------------- RESULT ACTIVITY 1 ---------------"<<endl;
    cout<<"\nconcatenated message:\t\t"<<combine<<endl;
    cout<<"Message length:\t\t\t"<<words<<endl;
    cout<<"Index of character 'ma':\t"<<index_ma<<endl;


    //ACTIVITY 2
    //Step 1
    const float pi = 3.14159;
    //Step 2
    cout<<"\n\n--------------- RESULT ACTIVITY 2 ---------------";
    float radius, height;
    cout<<"\n\nEnter a radius in cm: ";
    cin>>radius;
    cout<<"Enter a height in cm: ";
    cin>>height;
    //Step 3
    bool radiusgreaterthan = (radius > height);
    //Step 4
    bool radiusequalheight = (radius == height);
    //Step 5
    height *= 3;
    radius += 5;
    //Step 6
    bool checkradius = (radius != height && radius > height);
    //Step 7
    float volume = pi * radius * radius * height;
    //Step 8
    cout<<"\nStep 3)Is the radius greater than height?\t\t\t"<<radiusgreaterthan<<endl;
    cout<<"Step 4)Is the radius equal to height?\t\t\t\t"<<radiusequalheight<<endl;
    cout<<"Step 5)Triple height =\t\t\t\t\t\t"<<height<<"cm"<<endl;
    cout<<"Step 5)Increased radius by 5 = \t\t\t\t\t"<<radius<<"cm"<<endl;
    cout<<"Step 6)Is the radius not equal to and greater than height?\t"<<checkradius<<endl;
    cout<<"Step 7)The volume of a right cylinder with radius "<<radius<<"cm and height "<<height<<"cm is = "<<volume<<"cm^3"<<endl;


    return 0;
}

