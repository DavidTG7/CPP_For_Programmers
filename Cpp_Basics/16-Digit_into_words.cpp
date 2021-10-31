#include <iostream>
using namespace std;

/* Your task is to write a function digit_text. In the function parameter, 
   you will pass the value of type int, and it will return a string in the output. */

string digit_text(int number){
    string result;

    switch (number){
        case 0:
        result = "Zero.\n";
        break;
        case 1:
        result = "One.\n";
        break;
        case 2:
        result = "Two.\n";
        break;
        case 3:
        result = "Three.\n";
        break;
        case 4:
        result = "Four.\n";
        break;
        case 5:
        result = "Five.\n";
        break;
        
        default:
        result = "Invalid number.\n";        
    }
    return result;
}

int main(){
    int number;
    
    cout << "Write the number from 0 to 5 to convert into word:\n";
    cin >> number;
    cout << digit_text(number);
}