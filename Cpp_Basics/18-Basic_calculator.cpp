#include <iostream>
using namespace std;

/* The aim of this challenge is to design a calculator that takes 
   operands in its input and performs one of the following operations on them:

Addition
Subtraction
Multiplication
Division */

double test(double number1, char operate, double number2) {
    double result;

    if (operate == '+')
        result = number1 + number2;
    else if (operate == '-')
        result = number1 - number2;
    else if (operate == '*')
        result = number1 * number2;
    else if (operate == '/')
        result = number1 / number2;
    else
        result = -1;
    
    return result;
}

int main(){
    double number1, number2, result;
    char operate;

    cout << "Write the first number, the operator and the second number to get the result:\n";
    cin >> number1 >> operate >> number2;

    result = test(number1, operate, number2);
    
    cout << "Result:\n\n" << number1 << " " << operate << " " << number2 << " = " << result << endl;

    return 0;
}