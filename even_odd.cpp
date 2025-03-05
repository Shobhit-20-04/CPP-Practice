#include <iostream>
using namespace std;
int main()
{
    int start, stop, i;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> stop;
    i = start;
    cout << "Even numbers are ";
    while (i <= stop)
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    }
    cout << "\nOdd numbers are ";
    while (start <= stop)
    {
        if (start % 2 == 1)
            cout << start << " ";
        start++;
    }
    return 0;
}