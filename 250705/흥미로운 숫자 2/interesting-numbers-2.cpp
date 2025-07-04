#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;
    int ans = 0;

    for(int i = X; i <= Y; i++)
    {
        int temp = i;
        int num[10] = {};
        int prev = i % 10;

        while(temp != 0)
        {
            num[temp % 10]++;

            temp = temp / 10;
        }

        int cnt = 0;
        bool flag = false;

        for (int i = 0; i < 10; i++)
        {
            if (num[i] > 0)
            {
                cnt++;
                
                if (num[i] == 1)
                    flag = true;
            }
        }

        if (cnt == 2 && flag)
            ans++;
    }

    cout << ans;

    return 0;
}