#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;

void solve()
{
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        stack<char> st;
        string str;
        cin >> str;
        int flag = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                st.push(str[i]);
            }
            else
            {
                if (str[i] == ')')
                {
                    if (st.empty())
                    {
                        flag = 1;
                        break;
                    }
                    else if (st.top() == '(')
                    {
                        st.pop();
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
                else if (str[i] == '}')
                {
                    if (st.empty())
                    {
                        flag = 1;
                        break;
                    }
                    else if (st.top() == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
                else if (str[i] == ']')
                {
                    if (st.empty())
                    {
                        flag = 1;
                        break;
                    }
                    else if (st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO"
                 << "\n";
        }
        else if (!st.empty())
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }

    return 0;
}