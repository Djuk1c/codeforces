#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<int> nums;

void recursion(int i, int j, int depth)
{
    if (i > j) return;

    int index = 0;
    int val = 0;

    // Find largest num between i and j
    for (int k = i; k <= j; k++)
    {
        if (nums[k] > val)
        {
            val = nums[k];
            index = k;
        }
    }

    ans[index] = depth;

    recursion(i, index-1, depth+1);
    recursion(index+1, j, depth+1);
}

void solve()
{
    int n;
    cin >> n;
    ans.resize(n);
    nums.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    recursion(0, n-1, 0);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}