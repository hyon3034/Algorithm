#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100000];


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    // 양의 정수 3개
    // 음의 정수 2개 양의 정수 1개
    int a = max(arr[0] * arr[1] * arr[n-1], arr[n-1] * arr[n-2] * arr[n-3]);
    cout << a;
    return 0;

}