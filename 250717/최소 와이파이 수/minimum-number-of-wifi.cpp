#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = 0;
    bool check = false;
    int count = 0;
    int ans = 0;

    while(index < n)
    {
        if (arr[index])
        {
            check = true;
            count++;
        }
        else if(check)
        {
            count++;
        }

        if(count == (2*m+1))
        {
            ans++;
            check = false;
            count = 0;
        }

        index++;
    }

    if (count > 0)
        ans++;

    cout << ans;

    return 0;
}