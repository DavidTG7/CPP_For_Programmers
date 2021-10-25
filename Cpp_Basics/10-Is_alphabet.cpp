#include <iostream>
using namespace std;

/* In this challenge, you are given a character. 
   Your task is to find whether the given character 
   is an upper-case alphabet, a lower-case alphabet, 
   or a non-alphabetic character. */

int main(){
    char character = 'Z';

    if (character >= 'a' && character <= 'z'){
        cout << "lower-case alphabet\n";
    }
    else if (character >= 'A' && character <= 'Z'){
        cout << "upper-case alphabet\n";
    }
    else
        cout << "not an alphabet\n";
}