#include <iostream>
using namespace std;
void patA()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 3 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patB()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 3 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patC()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 3 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
int main()
{
    char ch;

    do
    {
        cout << "Enter any character or Q to quit : ";
        cin >> ch;
        if (ch == 'a' || ch == 'A')
            patA();
        if (ch == 'b' || ch == 'B')
            patB();
    } while (ch != 'Q');
    return 0;
}