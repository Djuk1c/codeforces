#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll arr[3];
    for (ll i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    ll res = (int)ceil((double)arr[0]/(double)arr[2]) * ceil((double)arr[1]/(double)arr[2]);

    printf("%lld", res);

    return 0;
}