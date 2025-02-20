#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks < 33 && marks >= 0)
        cout << "Fail";
    else if (marks >= 33 && marks < 45)
        cout << "3rd Division";
    else if (marks >= 45 && marks < 60)
        cout << "2nd Division";
    else if (marks >= 60 && marks <= 100)
        cout << "1st Division";
    else
        cout << "You entered invalid marks.";
    return 0;
}