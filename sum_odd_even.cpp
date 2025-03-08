#include <iostream>
using namespace std;
int main()
{
    int start, stop, sumodd = 0, sumeven = 0;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> stop;
    while (start <= stop)
    {
        if (start % 2 == 0)
            sumeven += start;
        else if (start % 2 == 1)
            sumodd += start;
        start++;
    }
    cout << "Sum of all even numbers are: " << sumeven;
    cout << "\nSum of all odd numbers are: " << sumodd;
}