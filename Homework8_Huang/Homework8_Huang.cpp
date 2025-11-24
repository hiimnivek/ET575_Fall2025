/*
Kevin Huang
Homework 8, 2D array
Nov 23th, 2025
*/

#include<iostream> 
using namespace std; 
const int ROWCOL_ARRAY = 4; 
// define a function to search for a value in a 2D array 
void searchValue (int ar[][ROWCOL_ARRAY], int value, int result[]){
    for (int r = 0; r <ROWCOL_ARRAY; r++){
        for(int c = 0; c < ROWCOL_ARRAY; c++){
            if(ar[r][c] == value){
                result[0] = r;
                result[1] = c;
                return;
            }        
        }
    }
    result[0] = -1;
    result[1] = -1;
}

// define a function to display a message 
void displayMessage(int value, int result[]){
    if(result[0] != -1){
        cout<<"Number "<<value<<" was found in row "<<result[0]<<" and column "<<result[1]<<" ."<<endl;
    }
    else{
        cout<<"Number "<<value<<" was not found."<<endl;
    }
}

int main(){ 

    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] ={ 

        {1,2,3,4}, 

        {5,6,7,8}, 

        {9,10,11,12}, 

        {13,14,15,16} 

    }; 

    int target;
    cout<<"Enter a number to search: ";
    cin>>target;
    
    int result[2];

// call function to search for a value in a 2D array 
searchValue(ar, target, result);
 

// call function to display a message 
displayMessage(target, result);
 

    return 0; 

} 

 // This homework was quite confusing so I used AI to help out