#include<iostream>
#include<cmath>
using namespace std;



//Given the following functions, fill-in the blank of the main() function after the program is run.
void printvalue(string v){
    cout<<"Pass value = "<<v<<endl;
}
void passref(string& v){
    cout<<"Pass refernce = "<<v<<endl;
    v = "Good Morning";
}
void passmemory(string* v){
    cout<<"Pass refernce = "<<v<<endl;
}

int main(){
    string something = "ET575";
    printvalue(something);	// result in Terminal = 			
    passref(something); 	// result in Terminal = 			
    printvalue(something);	// result in Terminal = 			
    passmemory(&something);	// result in Terminal = 			
    return 0;
}

