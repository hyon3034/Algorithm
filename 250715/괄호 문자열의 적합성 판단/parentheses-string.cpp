#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;

    stack<char> s;

    for(int i = 0; i < str.length(); i++)
    {
        if (s.empty()) s.push(str[i]);
        else if (s.top() == '(')
        {
            if (str[i] == ')') s.pop();
            else s.push(str[i]);
        }
    }

    if (s.empty()) cout << "Yes";
    else cout << "No";
    return 0;
}

 