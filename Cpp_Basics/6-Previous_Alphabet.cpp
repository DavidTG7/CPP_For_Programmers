#include <iostream>
using namespace std;
/*A code that makes the same variable, character, 
now store the character preceding the one originally stored in it.*/

int main (){
    char character = 'B';

    cout << "character = " << character << endl;

    char character_before = character - 1;

    cout << "character_before = " << character_before << endl;
}