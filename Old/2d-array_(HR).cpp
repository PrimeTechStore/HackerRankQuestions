#include <bits/stdc++.h>
using namespace std;

int hourglassSum(vector<vector<int>> arr)
{
    int ans{0};

    for (int i{0}; i < 4; i++)
        for (int j{0}; j < 4; j++)
        {
            int temmax = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                         arr[i + 1][j + 1] +
                         arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            ans = max(temmax, ans);
        }

    return ans;
}

int main()
{

    return 0;
}