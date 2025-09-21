/*
Kevin Huang
Sep 21, 2025
Lab 7, branching mechanism using switch-case statement
*/

#include<iostream>
#include<string>

using namespace std;

int main (){
    cout<<"\n ------ Exercise ------ "<<endl;
    float num1, num2;
    cout<<"\nEnter your first number: "<<endl;
    cin>>num1;
    cout<<"\nEnter your second number: "<<endl;
    cin>>num2;

    cout<<"\nChoose an operation by entering one of the following characters:"<<endl;
    char operation;
    cout<<"+ for addition"<<endl;
    cout<<"- for subtraction"<<endl;
    cout<<"* for multiplication"<<endl;
    cout<<"/ for division"<<endl;
    cout<<"'%' for modulus, which returns the remainder of the division"<<endl;
    cout<<"q or Q to quit the program"<<endl;
    cout<<"Enter your operation(+,-,*,/,%,q or Q): ";
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<""<<num1<<" + "<<num2<<" = "<<num1+num2<<""<<endl;
        break;
    case '-':
        cout<<""<<num1<<" - "<<num2<<" = "<<num1-num2<<""<<endl;
        break;
    case '*':
        cout<<""<<num1<<" * "<<num2<<" = "<<num1*num2<<""<<endl;
        break;  
    case '/':
        if(num2 != 0){
        cout<<""<<num1<<" / "<<num2<<" = "<<num1/num2<<""<<endl;
        }
            else {
            cout<<""<<num1<<" divided by 0 is 0"<<endl;
            }
        break;
    case '%':
        if(num2 != 0){
        int number1 = float(num1);
        int number2 = float(num2);
        cout<<""<<number1<<" % "<<number2<<" = "<<number1%number2<<""<<endl;
        }
            else {
            cout<<"ERROR: "<<num1<<" '%' 0 is UNDEFINED"<<endl;
            }
        break;
    case 'q': case 'Q':
        cout<<"You have quit the program"<<endl;
        break;
    default:
        cout<<"ERROR: Invalid input"<<endl;
    }

return 0;
}
