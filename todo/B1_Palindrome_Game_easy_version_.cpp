#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int alice = 0;
    int bob = 0;
    
    bool isAliceTurn = true;
    bool lastReverse = false;
    
    if (s == "0")
    {
        cout << "BOB" << endl;
        return;
    }

    while (count(s.begin(), s.end(), '0') != 0)
    {
        // If string is not a palindrome, reverse   
        string temp = s;
        reverse(s.begin(), s.end());
        if (s == temp && !lastReverse)
        {
            //cout << "Reversed, ";
            lastReverse = true;
            isAliceTurn = !isAliceTurn;
        }
        else
        {
            s = temp;
            //cout << "First: ";
            // Else, do first operation
            auto f = s.find('0');
            if (f != std::string::npos)
            {
                s[f] = '1';
                if (isAliceTurn)
                    alice++;
                else
                    bob++;
                lastReverse = false;
                isAliceTurn = !isAliceTurn;
            }
        }
        //cout << s << "\n";
        //printf("Alice: %i, Bob: %i\n", alice, bob);
    }

    if (bob > alice)
        cout << "ALICE";
    else if (alice > bob)
        cout << "BOB";
    else
        cout << "BOB"; // ????????????
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}