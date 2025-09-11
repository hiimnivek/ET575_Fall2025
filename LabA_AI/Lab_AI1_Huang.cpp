#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Arithmetic Operations
    cout << "\nArithmetic Operations:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;

    // Check division by zero
    if (b != 0) {
        cout << "a / b = " << (a / b) << endl;
        cout << "a % b = " << (a % b) << endl;
    } else {
        cout << "a / b = Undefined (division by zero)" << endl;
        cout << "a % b = Undefined (modulus by zero)" << endl;
    }

    // Assignment Operations
    a += 10;
    b -= 5;
    cout << "\nAfter assignment operations:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Boolean (Logical) Operations
    cout << "\nBoolean Operations:" << endl;
    cout << "Is a greater than b? " << (a > b ? "true" : "false") << endl;
    cout << "Is a equal to b? " << (a == b ? "true" : "false") << endl;
    cout << "Is a not equal to b? " << (a != b ? "true" : "false") << endl;
    cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "true" : "false") << endl;
    cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "true" : "false") << endl;
    cout << "Is a not greater than b? " << (!(a > b) ? "true" : "false") << endl;

    return 0;
}

//// --- AI Assistant Used: ChatGPT ---
// Was the code correct? (Yes/No) YES
// Was it readable and properly commented? YES
// Were you able to explain each line of code? YES
// Did it use the same programming concepts we learned in class? Yes but it also added some new concepts such as converting 0s and 1s into true and false which we haven't touched upon yet.
// Terminal Output: (Paste the output of your program here)Arithmetic Operations:
/*
a + b = 25
a - b = 5
a * b = 150
a / b = 1
a % b = 5

After assignment operations:
a = 25
b = 5

Boolean Operations:
Is a greater than b? true
Is a equal to b? false
Is a not equal to b? true
Are both a and b positive? true
Is either a or b negative? false
Is a not greater than b? false
*/