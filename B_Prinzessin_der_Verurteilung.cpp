#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve()
{
    int t;
    cin >> t;
    string n;
    cin >> n;

    string allLetters = "abcdefghijklmnopqrstuvwxyz";
    string ans = "a";
    int counter = 0;
    int size = 0;
    while (n.find(ans) != string::npos)
    {
        // Ako smo dosli do kraja alphabeta
        if (counter > allLetters.length() - 1)
        {
            if (ans.length() > 2)
            {
                ans[size-1] = allLetters[allLetters.find(ans[size-1]) + 1];
                counter = 0;
            }
            else
            {
                // Dodajemo slovo
                ans = ans + "a";
                // Resetujemo trenutno slovo
                ans[size] = 'a';
                counter = 0;
                size++;
            }

        }
        ans[size] = allLetters[counter];
        counter++;
    }

    cout << ans << endl;
}

// This will probably not work if the answer length is > 3
// But since the max length of answer is 3, it doesnt matter here
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
