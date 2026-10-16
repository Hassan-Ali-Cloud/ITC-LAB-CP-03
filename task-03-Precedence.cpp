//Roll no. : L1F26BSCS0297 
//Name :  Hassan Ali 
// Task-03 (Precedence)


#include <iostream>
using namespace std;

int main() {
    cout << "Expression 1: " << 10 + 5 * 2 << endl;
    
    cout  << "Expression 2: "   << (10 + 5) * 2 << endl;
    cout<< "Expression 3: " << 20 - 5 - 3 << endl;

    cout  << "Expression 4: "  << 100 / 7 << endl;
    cout << "Expression 5: " << 100 % 7 << endl;
    
    
    cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl;

    // Actual Output:
    // 1: 20
    // 2: 30
    // 3: 12
    // 4: 14
    // 5: 2
    // 6: 7

    // Expression 3: Operators are evaluated left-to-right
    // because subtraction has left-to-right associativity.

    // Expression 6 with brackets to make the result 8:
    // 2 * (3 + 8 / 4) - 1 = 9
    // (2 * 3) + (8 / 4) = 8

    return 0;
}
