#include <iostream>
using namespace std;

int main()
{
    int divisibl = 1;
    
    while (!(//mientras no sea divisible con ninguno de ellos, va a seguir incrementandose , de lo contrario se detiene
        (divisibl % 11 == 0) &&
        (divisibl % 12 == 0) && // 4, 3, 6, y 2
        (divisibl % 13 == 0) &&
        (divisibl % 14 == 0) && // 7 
        (divisibl % 15 == 0) && // 5
        (divisibl % 16 == 0) && // 8 
        (divisibl % 17 == 0) &&
        (divisibl % 18 == 0) && // 9 
        (divisibl % 19 == 0) &&
        (divisibl % 20 == 0)    // 10 
        // 1 es divisible con todos
    ))
    {
        divisibl++;
    }
    
    cout << divisibl;
}