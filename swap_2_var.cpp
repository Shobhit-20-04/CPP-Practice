#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Before Swap: " << num1 << " " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After first Swap: " << num1 << " " << num2 << endl;
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    cout << "After second Swap: " << num1 << " " << num2 << endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout << "After third Swap: " << num1 << " " << num2 << endl;
    num3 = num1;
    num1 = num2;
    num2 = num3;
    cout << "After fourth Swap using 3rd variable: " << num1 << " " << num2 << endl;
    return 0;
}