#include <iostream>
using namespace std;
int main()
{
    int num, var, revNum = 0, var1;
    cout << "Enter any number=";
    cin >> num;
    var = num;
    while (var > 0)
    {
        var1 = var % 10;
        revNum = revNum * 10 + var1;
        var /= 10;
    }
    cout << num;
    cout << revNum;
    if (num == revNum)
        cout << "Number is Palindrome";
    else
        cout << "Number is not Palindrome";
    return 0;
}