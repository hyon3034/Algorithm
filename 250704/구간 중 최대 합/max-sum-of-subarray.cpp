#include <iostream>

using namespace std;

int n, k;
int arr[100];
int sum[100];
int ans = -99999;

int main() {
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1] + arr[i];
    }

    for (int j = k; j < n; ++j)
    {
        ans = max(ans, sum[j] - sum[j-k]);
    }

    cout << ans;

    return 0;
}