#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton = 0; int danik = 0;

    for (char& c : s)
    {
        if (c == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
        cout << "Anton\n";
    else if (danik > anton)
        cout << "Danik\n";
    else
        cout << "Friendship";
    return 0;
}
