#include <iostream>
using namespace std;
int main()
{
    int i, j;
    // Forward Loop
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
            cout << j;
        cout << "\n";
    }
    cout << "\n"; // New Line
    // Backward Loop
    for (i = 5; i >= 1; i--)
    {
        for (j = 6 - i; j <= 5; j++)
            cout << j;
        cout << "\n";
    }
    return 0;
}