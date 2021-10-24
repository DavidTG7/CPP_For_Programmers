#include <iostream>
using namespace std;
/*Swap the Values of Two Variables*/

int main(){
    int var1 = 1, var2 = 2;
    
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl << endl;

    int aux;

    aux = var1;
    var1 = var2;
    var2 = aux;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
}