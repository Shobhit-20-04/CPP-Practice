#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter any number: ";
    cin >> n;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}