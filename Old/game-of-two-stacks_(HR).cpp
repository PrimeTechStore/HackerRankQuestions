#include <bits/stdc++.h>
using namespace std;

int twoStacks(int maxSum, vector<int> a, vector<int> b)
{
    int i{0}, j{0}, sum{0}, count{0};
    while (i < a.size() && sum + a[i] <= maxSum)
    {
        sum += a[i];
        i++;
    }
    count = i;
    while (j < b.size() && i >= 0)
    {
        sum += b[j];
        j++;
        while (sum > maxSum && i > 0)
        {
            i--;
            sum -= a[i];
        }
        if (sum <= maxSum && i + j > count)
        {
            count = i + j;
        }
    }
    return count;
}

int main()
{
    int t{0};
    cin >> t;
    while (t--)
    {
        int m{0}, n{0}, x{0};
        cin >> n >> m >> x;
        vector<int> a(n);
        vector<int> b(m);
        for (int i{0}; i < n; i++)
            cin >> a[i];

        for (int i{0}; i < m; i++)
            cin >> b[i];

        cout << twoStacks(x, a, b) << endl;
    }

    return 0;
}