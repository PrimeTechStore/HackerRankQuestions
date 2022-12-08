#include <bits/stdc++.h>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3)
{
    vector<int> val1(h1.size()), val2(h2.size()), val3(h3.size());
    unordered_map<int, int> mp;

    reverse(h1.begin(), h1.end());
    reverse(h2.begin(), h2.end());
    reverse(h3.begin(), h3.end());

    partial_sum(h1.begin(), h1.end(), val1.begin());
    partial_sum(h2.begin(), h2.end(), val2.begin());
    partial_sum(h3.begin(), h3.end(), val3.begin());

    for (int i{0}; i < val1.size(); i++)
        mp[val1[i]]++;
    for (int i{0}; i < val2.size(); i++)
        mp[val2[i]]++;
    for (int i{0}; i < val3.size(); i++)
        mp[val3[i]]++;

    int res = INT_MIN;

    for (auto i : mp)
        if (i.second == 3)
            if (res < i.first)
                res = i.first;

    return res;
}

int main()
{
    vector<int> h1{3, 2, 1, 1, 1}, h2{4, 3, 2}, h3{1, 1, 4, 1};
    cout << equalStacks(h1, h2, h3);

    return 0;
}