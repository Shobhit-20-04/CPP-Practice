#include <iostream>
using namespace std;
int main()
{
    char color;
    cout << "Choose any color from R, G or B: ";
    cin >> color;
    if (color == 'R' || color == 'r')
        cout << "You have chosen Red Color";
    else if (color == 'G' || color == 'g')
        cout << "You have chosen Green Color";
    else if (color == 'B' || color == 'b')
        cout << "You have chosen Blue Color";
    else
        cout << "You have entered invalid color";
    return 0;
}