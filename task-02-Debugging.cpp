//Roll no. : L1F26BSCS0297 
//Name :  Hassan Ali 
// Task-02(A) [Debugging]

// Original code
/*
#include <iostream>
int main()
{
cout << "Orientation Day" << endl
cout << "Total students: " 450 << endl;
cout << "Seats left: " << 500 - 450 << endl;
cout << 'Have a nice day << endl;
return 0;
}*/

//Debugged code
#include <iostream>
using namespace std;
int main() {
    cout << "Orientation Day" << endl;
    cout << "Total students: " <<450 << endl;
    cout << "Seats left: " << 500 - 450 << endl;
    cout << "Have a nice day" << endl;

//Errors explanation
/*
No. 1) No namespace library added(line 2)
No. 2) At the end of line no semi-colon was written(line 4)
No. 3) No signs of greater << is written(line 5)
No. 4) the string's decorator was not closed (line 7)
*/

cout << "\n\n\n\n\nTask-02(B)"<<endl;
// TASK-02(B)
// Original code
// cout << "Average: " << 60 + 70 + 80 / 3 << endl;

//Debugged code
cout << "Average: " << (60 + 70 + 80) / 3 << endl;
    return 0;
}

//error explanation
//No. 1) numbers are not written in brackets due to which logical error or sementic error is hapenning