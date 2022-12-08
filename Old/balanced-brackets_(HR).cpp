#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s)
{
    stack<char> brackets;

    for (int i{0}; i < s.size(); i++)
    {
        if ((brackets.top() == '(' && s[i] == ')') || (brackets.top() == '[' && s[i] == ']') || (brackets.top() == '{' && s[i] == '}'))
            brackets.pop();
        else
            brackets.push(s[i]);
    }

    return brackets.empty() ? "YES" : "NO";
}

int main()
{
    string s = "{[()]}";
    cout << isBalanced(s);

    return 0;
}