#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, temp;
    cout << "Enter any number: ";
    cin >> n;
    temp = n;
    while (n >= i)
    {
        cout << n << " ";
        n--;
    }
    cout << endl;
    for (i = 1; temp >= i; temp--)
    {
        cout << temp << " ";
    }
    return 0;
}