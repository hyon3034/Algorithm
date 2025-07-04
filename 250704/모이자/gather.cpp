#include <iostream>

using namespace std;

int n;
int A[100];
int ans = 999999999;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            if ( i == j ) continue;

            sum += A[j] * abs(j-i);
        }

        ans = min(sum, ans);
    }

    cout << ans;


    return 0;
}