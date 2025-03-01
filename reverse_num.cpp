#include <iostream>
using namespace std;
int main()
{
    int revnum = 0, num, var;
    cout << "Enter any number: ";
    cin >> num;
    while (num > 0)
    {
        var = num % 10;
        revnum = revnum * 10 + var;
        num = num / 10;
    }
    cout << "Reverse of number entered is " << revnum;
    return 0;
}