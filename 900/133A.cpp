#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool y = false;
    for (char& c : s)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            cout << "YES\n";
            y = true;
            break;
        }
    }

    if (!y)
    {
        cout << "NO\n";
    }

    return 0;
}
