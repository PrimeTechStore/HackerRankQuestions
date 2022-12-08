#include <bits/stdc++.h>
using namespace std;

vector<int> getMax(vector<string> operations)
{
    vector<int> res, lis;

    int num = INT_MIN, ma = INT_MIN;
    for (int i{0}; i < operations.size(); i++)
    {
        string op = operations[i];
        switch (op[0])
        {
        case '1':
            num = stoi(op.substr(2));
            if (ma < num)
                ma = num;
            lis.push_back(num);
            break;

        case '2':
            if (ma == lis[lis.size() - 1])
            {
                lis.pop_back();
                if (lis.size() == 0)
                    ma = INT_MIN;
                else
                    ma = *max_element(lis.begin(), lis.end());
            }
            else
                lis.pop_back();
            break;

        case '3':
            res.push_back(ma);
        default:
            break;
        }
    }

    return res;
}

int main()
{
    vector<string> operations{"1 97", "2", "1 20", "2", "1 26", "1 20", "2", "3", "1 91", "3"};
    vector<int> res = getMax(operations);
    for (int i{0}; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}