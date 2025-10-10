/*
Kevin Huang
Oct 10, 2025
Lab AI part 2
*/

//1: Use AI to Generate the Code
//Prompt AI with: "Write a C++ code that converts a temperature from Celsius to Fahrenheit."

#include <iostream>
using namespace std;

int main() {
    /*-----CHATGPT GENERATED-----
    double celsius, fahrenheit;

    // Ask the user for temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
*/

//Part 2: Review and Understand
// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// I used ChatGPT for this prompt and yes, it was able to write a code similar to the one we would work with in class.

// 2. Are there any issues or improvements you noticed? Explain.
// Yes there was an issue with this code. Since ChatGPT set both the variables for celsius and fahrenheit as double, you can enter letters, characters, symbols and the answers will always be 32°F. 
// Both celsius and fahrenheit needs to be set as int variable since we're dealing with float(number and decimals) values here.

// 3. What test cases did you try, and why? Explain.
// I used numbers, symbols, words, sentence, etc -- while the numbers would be converted to the appropriate Fahrenheit; everything else would automatically print 32°F regardless of what I entered.

    //--------- MY CODE -----------
    //PART 3: ADD USER INPUT
    float celsius;
    cout<<"Enter temperature in Celsius: ";
    cin>>celsius;
    float fahrenheit = (1.8 * celsius)+32;
    cout<<"\n"<<celsius<<" °C is "<<fahrenheit<<" °F"<<endl;

    //PART 4: ADD CONVERSION CHOICE
    cout<<"\nChoose conversion type:"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    int conversion;
    cout<<"\nEnter choice: ";
    cin>>conversion;
    float temp1;

  switch(conversion)
    {
    case 1:
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temp1;
        cout<<"\n"<<temp1<<" °C is "<<(temp1*9/5)+32<<" °F"<<endl;
        break;
    case 2:
        cout<<"Enter temperature in Celsius: ";
        cin>>temp1;
        cout<<"\n"<<temp1<<" °F is "<<(temp1-32)*5/9<<" °C"<<endl;
        break;
   default:
        cout<<"ERROR: Invalid input"<<endl;
        break;
    }

    return 0;
}



























