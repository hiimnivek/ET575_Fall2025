/*
Kevin Huang
lab 17, 2D array
Nov 19th, 2025
*/

#include<iostream>
#include "lab17_function_Huang.cpp"

using namespace std;
int main(){
    cout<<"\n ------ example 1: array declaration ------"<<endl;
    array_dec();

    cout<<"\n ------ example 2: print each value in a 2D array ------"<<endl;
    const int NUMCOLS = 5;
    int ar[3][NUMCOLS] ={
        {5,10},
        {-2,-9},
        {6}
    };

    print2d(ar,3);
    
    cout<<"\n ------ example 3: populating an array with numbers ------"<<endl;
    // declare a 2D array
    int arr_num[2][3];

    //call the function
    populate_array(arr_num, 2, 3);
    print_array(arr_num,2,3);


    cout<<"\n ------ example 4: sum of all numbers in a 2D array -------"<<endl;
    int s = sum_all(arr_num, 2, 3);
    cout<<"The total sum "<<s<<endl;
    
    
    cout<<"\n ------ example 5: odd numbers in a 2D array -------"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers = "<<c<<endl;
    
    
    cout<<"\n ------- EXERCISE ---------"<<endl;
    char again = 'y';
    
    while (again == 'y' || again == 'Y')
    {
    int arr_number[3][4];
    populate(arr_number, 3, 4);

    for (int row = 0; row <3; row++){
        for (int col = 0; col <4; col++){
            cout<<arr_number[row][col]<<"\t";
        }
        cout<<endl;
    }

    double a = average(arr_number, 2, 3);
    cout<<"Total average of 12 numbers is "<<a<<endl;

    cout<<"Another run? (Y or N): ";
    cin>>again;
    cout<<endl;
    }

    return 0;
}