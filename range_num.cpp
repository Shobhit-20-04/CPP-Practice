#include <iostream>
using namespace std;
int main()
{
    int start, stop;
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> stop;
    if (start < stop)
    {
        while (start <= stop)
        {
            cout << start << " ";
            start++;
        }
    }
    else if (stop < start)
    {
        while (start >= stop)
        {
            cout << start << " ";
            start--;
        }
    }
    else
        cout << start;
    return 0;
}