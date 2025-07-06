#include <iostream>

using namespace std;

int n;
int blocks[10000];

int main() {
    int sum = 0;
    int ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
        sum += blocks[i];
    }

    int block = sum / n;

    for (int i = 0; i < n; i++) 
    {
        if ( block - blocks[i] > 0 )
            ans += block - blocks[i];
    }

    cout << ans;

    return 0;
}