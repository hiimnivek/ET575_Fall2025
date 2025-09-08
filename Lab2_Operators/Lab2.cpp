/* 
Kevin Huang
Lab 2, operators
Sept 3, 2025
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n------- example 1: arithmetic operator ------- "<<endl;
    //set number format
    cout.setf(ios::fixed);
    cout.precision(3);
    // calculate the height of a free falling object
    // free_fall = 0.5*gravity*time*time
    // declare the variables
    // declare ta constant variable named 'gravity'
    const float GRAVITY = 9.8;
    //declare variable height and time
    float height=0, time=0;
    //collect the falling time
    cout<<"Enter a falling time in seconds: ";
    cin>>time; 
    // calculate the height of a free fall object
    height = 0.5*GRAVITY*time*time;
    //print results 
    cout<<"The height of a free fall object at "<<time<<" seconds is "<<height<<"meters"<<endl;


    cout<<"\n------- example 2: assignment operator ------- "<<endl;
    int number1 = 10;
    int number2 = 3;
    cout<<"original number1 = "<<number1<<endl;
    number1 ++;
    cout<<"updated number1 = "<<number1<<endl;
    cout<<"original number2 = "<<number2<<endl;
    number2 --;
    cout<<"updated number2 = "<<number2<<endl;
    number2 += 5;
    cout<<"updated number2 by 5 = "<<number2<<endl;
    number1 *=2 ;
    cout<<"updated number1 using *=2 = "<<number1<<endl;

    cout<<"The remainder of "<<number1<<" and "<<number2<<" is "<<number1%number2<<endl;
    cout<<"number 1 = "<<number1<<endl;
    cout<<"number 2 = "<<number2<<endl;

    number1 %= number2;
    cout<<"after %=, number1 = "<<number1<<endl;
    cout<<"after %=, number2 = "<<number2<<endl;


    cout<<"\n------- example 3: comparison operator ------- "<<endl;
    cout<<"0 is false, 1 is true" <<endl;
    cout<<"Is number1 equal to number2? " <<(number1 == number2)<< endl;
    cout<<"Is number1 greater than number2? "<<(number1 > number2)<<endl;
    cout<<"Is number1 less than number2 "<<(number1 < number2)<<endl;
    cout<<"Is number1 not equal to number2? "<<(number1 != number2)<<endl;

<<<<<<< HEAD
    cout<<"\n------- example 4: logical operator ------"<<endl;
=======
        cout<<"\n------- example 4: logical operator ------"<<endl;
>>>>>>> c6cdacf00fe9fd146d11ae70e980c1e6697fb700
    // And operator
    bool check_numbers = (number1 != number2) && (number1 < number2) && (number1>5);
    // number1 != number2 ---> true
    // number1 < number 2 ---> true
    // number 1 > 5 ---> false
    // check_numbers = true && true && false = false
    cout<<"The result of check_number is "<<check_numbers<<endl;

    // OR operator
    bool check_or = (number2 > 10) || (number2 != 3) || (number2 <number1);
    //number2 > 10 --> false
    //number2 !=3 --> true
    //number2<number1 --> false
    // flase || true || false = true
    cout<<"The result of check_number is "<<check_or<<endl;

    cout<<"\n ------- example 5: casting -------"<<endl;
    int n = 5;
    float m = n/2.0; 

    cout<<"implicit casting = "<<m<<endl;
<<<<<<< HEAD

    
    cout<<"\n------ Exercise -------"<<endl;
    
    int a, b;

    cout<<"Enter the first number (a): ";
    cin>> a;
    
    cout<<"Enter the second number (b): ";
    cin>> b;  
    
    cout<<"\nArithmetic Operations: " <<endl;
    cout<<"a + b = "<<a + b<<endl;
    cout<<"a - b = "<<a - b<<endl;
    cout<<"a * b = "<<a * b<<endl;
    cout<<"a / b = "<<a / b<<endl;
    cout <<"a % b = "<< a % b<<endl;

    cout<<"\nAfter assignment operations: "<<endl;
    a = a + b;
    b = a - b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    cout<<"\nBoolean Operations: "<<endl;
    cout<<"Is a greater than b? "<<((a > b) ? "true" : "false")<<endl; 
    cout<<"Is a equal to b? "<<((a == b) ? "true" : "false")<<endl;
    cout<<"Is a not equal to b? "<<((a =! b) ? "true" : "false")<<endl;
    cout<<"Are both a and b positive? "<<((a > 0 && b >0) ? "true" : "false")<<endl;
    cout<<"Is either a or b negative? "<<((a > 0 && b > 0) ? "true" : "false")<<endl;
    cout<<"Is a not greater than b? "<<(!(a > b) ? "true" : "false")<<endl;

    //Originally I got 0s and 1s as my "true" and "false" but I looked up how to convert the 0s and 1s into true and false.

=======
>>>>>>> c6cdacf00fe9fd146d11ae70e980c1e6697fb700
    return 0;

    cout<<\"n------ Exercise -------"<<endl;
    cout<<"Enter the first number (a): ";
    cin>>a;
    cout<<"Enter the second number (b): ";
    cin>>b;  
   /* 
Kevin Huang
Lab 2, operators
Sept 3, 2025
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n------- example 1: arithmetic operator ------- "<<endl;
    //set number format
    cout.setf(ios::fixed);
    cout.precision(3);
    // calculate the height of a free falling object
    // free_fall = 0.5*gravity*time*time
    // declare the variables
    // declare ta constant variable named 'gravity'
    const float GRAVITY = 9.8;
    //declare variable height and time
    float height=0, time=0;
    //collect the falling time
    cout<<"Enter a falling time in seconds: ";
    cin>>time; 
    // calculate the height of a free fall object
    height = 0.5*GRAVITY*time*time;
    //print results 
    cout<<"The height of a free fall object at "<<time<<" seconds is "<<height<<"meters"<<endl;


    cout<<"\n------- example 2: assignment operator ------- "<<endl;
    int number1 = 10;
    int number2 = 3;
    cout<<"original number1 = "<<number1<<endl;
    number1 ++;
    cout<<"updated number1 = "<<number1<<endl;
    cout<<"original number2 = "<<number2<<endl;
    number2 --;
    cout<<"updated number2 = "<<number2<<endl;
    number2 += 5;
    cout<<"updated number2 by 5 = "<<number2<<endl;
    number1 *=2 ;
    cout<<"updated number1 using *=2 = "<<number1<<endl;

    cout<<"The remainder of "<<number1<<" and "<<number2<<" is "<<number1%number2<<endl;
    cout<<"number 1 = "<<number1<<endl;
    cout<<"number 2 = "<<number2<<endl;

    number1 %= number2;
    cout<<"after %=, number1 = "<<number1<<endl;
    cout<<"after %=, number2 = "<<number2<<endl;


    cout<<"\n------- example 3: comparison operator ------- "<<endl;
    cout<<"0 is false, 1 is true" <<endl;
    cout<<"Is number1 equal to number2? " <<(number1 == number2)<< endl;
    cout<<"Is number1 greater than number2? "<<(number1 > number2)<<endl;
    cout<<"Is number1 less than number2 "<<(number1 < number2)<<endl;
    cout<<"Is number1 not equal to number2? "<<(number1 != number2)<<endl;

    cout<<"\n------- example 4: logical operator ------"<<endl;
    // And operator
    bool check_numbers = (number1 != number2) && (number1 < number2) && (number1>5);
    // number1 != number2 ---> true
    // number1 < number 2 ---> true
    // number 1 > 5 ---> false
    // check_numbers = true && true && false = false
    cout<<"The result of check_number is "<<check_numbers<<endl;

    // OR operator
    bool check_or = (number2 > 10) || (number2 != 3) || (number2 <number1);
    //number2 > 10 --> false
    //number2 !=3 --> true
    //number2<number1 --> false
    // flase || true || false = true
    cout<<"The result of check_number is "<<check_or<<endl;

    cout<<"\n ------- example 5: casting -------"<<endl;
    int n = 5;
    float m = n/2.0; 

    cout<<"implicit casting = "<<m<<endl;

    
    cout<<"\n----cout<<\"n------ Exercise -------"<<endl;
    int a, b;
    cout<<"Enter the first number (a): ";
    cin>>a;
    cout<<"Enter the second number (b): ";
    cin>>b;  

    cout<<"\nArithmetic Operations: " <<endl;
    cout<<"a + b = "<<a + b<<endl;
    cout<<"a - b = "<<a - b<<endl;
    cout<<"a * b = "<<a * b<<endl;
    cout<<"a / b = "<<a / b<<endl;
    cout <<"a % b = "<< a % b<<endl;

    cout<<"\nAfter assignment operations: "<<endl;
    a = a + b;
    b = a - b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    cout<<"\nBoolean Operations: "<<endl;
    cout<<"Is a greater than b? "<<((a > b) ? "true" : "false")<<endl; 
    cout<<"Is a equal to b? "<<((a == b) ? "true" : "false")<<endl;
    cout<<"Is a not equal to b? "<<((a =! b) ? "true" : "false")<<endl;
    cout<<"Are both a and b positive? "<<((a > 0 && b >0) ? "true" : "false")<<endl;
    cout<<"Is either a or b negative? "<<((a > 0 && b > 0) ? "true" : "false")<<endl;
    cout<<"Is a not greater than b? "<<(!(a > b) ? "true" : "false")<<endl;

    //Originally I got 0s and 1s as my "true" and "false" but I looked up how to convert the 0s and 1s into true and false.

    return 0;
}

