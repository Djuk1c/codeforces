#include <iostream>
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input
    int n;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int sum = 0;
    for (int& coin : coins)
    {
        sum+= coin;
    }

    // Sort array
    sort(coins, coins + n, greater<int>());

    int counter = 0;
    int nSum = 0;
    for (int& coin : coins)
    {
        nSum += coin;
        counter++;
        if (nSum > (sum - nSum))
        {
            break;
        }
    }

    cout << counter;
    return 0;
}
