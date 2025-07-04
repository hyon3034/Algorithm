#include <iostream>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;
    int ans = -9999;

    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= 1000; j++)
        {
            int temp = A*i + B*j;

            if (temp <= C)
                ans = max(ans, temp);
        }
    }

    cout << ans;
    return 0;
}