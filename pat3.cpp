#include <iostream>
using namespace std;
int main()
{
    int i, j;
    // Forward Loop
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
            cout << j;
        cout << "\n";
    }
    cout << "\n"; // New Line
    // Backward Loop
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= 6 - i; j--)
            cout << j;
        cout << "\n";
    }
    return 0;
}