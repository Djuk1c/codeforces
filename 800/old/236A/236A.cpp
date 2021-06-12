#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    cin >> a;
    list<char> seen;
    int counter = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (find(begin(seen), end(seen), a[i]) == end(seen))
        {
            seen.push_back(a[i]);
            counter++;
        }
    }

    if (counter % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        "IGNORE HIM!";
    }

    return 0;
}
