#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int counter = 0;
    char last;
    bool yes = false;
    for (char& c : input)
    {
        if (last == c)
        {
            counter++;
        }
        else
        {
            last = c;
            counter = 1;
        }

        if (counter == 7)
        {
            yes = true;
            cout << "YES\n";
            break;
        }
    }
    // XD
    if (!yes)
    {
        cout << "NO\n";
    }
    return 0;
}
