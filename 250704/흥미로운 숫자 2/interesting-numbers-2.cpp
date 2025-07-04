#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;
    int ans = 0;

    for(int i = X; i <= Y; i++)
    {
        int temp = i;
        bool num[10] = {};
        int prev = i % 10;

        while(temp != 0)
        {
            num[temp % 10] = true;

            temp = temp / 10;
        }

        int cnt = 0;

        for (int i = 0; i < 10; i++)
        {
            if (num[i] == true)
            {
                cnt++;
            }
        }

        if (cnt == 2)
            ans++;
    }

    cout << ans;

    return 0;
}