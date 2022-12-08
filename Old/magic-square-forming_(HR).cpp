#include <bits/stdc++.h>

using namespace std;

int formingMagicSquare(vector<vector<int>> s)
{
    int result = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += s[j][i];
        }
        result += abs(15 - sum);
    }
    return result;
}

int main()
{
    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++)
    {
        s[i].resize(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> s[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int result = 0;
    // result = formingMagicSquare(s);
    cout << result << "\n";
    return 0;
}