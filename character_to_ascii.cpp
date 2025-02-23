#include <iostream>
using namespace std;
int main()
{
    char ch;
    int asci;
    cout << "Enter any character: ";
    cin >> ch;
    asci = ch;
    cout << "ASCII value of entered character is " << asci << endl;
    if (asci <= 90 && asci >= 65)
        cout << "Entered Character is capital";
    else if (asci <= 122 && asci >= 97)
        cout << "Entered Character is small";
    else if (asci <= 57 && asci >= 48)
        cout << "Entered Character is numeric";
    else
        cout << "Entered Character is special symbol";
    return 0;
}