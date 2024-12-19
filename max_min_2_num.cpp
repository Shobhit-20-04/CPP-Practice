#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 1st number=";
    cin >> a;
    cout << "Enter 2nd number=";
    cin >> b;
    if (a > b)
        cout << a << " is greatest.";
    else
        cout << b << " is greatest.";
    return 0;
}