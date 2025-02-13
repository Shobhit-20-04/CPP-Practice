#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 35)
    {
        cout << "You're Passed" << endl
             << "Congrats!";
    }
    else
    {
        cout << "You're Failed" << endl
             << "Better luck next time!";
    }
    return 0;
}