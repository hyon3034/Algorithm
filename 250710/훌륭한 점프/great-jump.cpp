#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int arr[100];

bool IsPossible(int min_val) {
    int available_indices[100] = {};
    int cnt = 0;

    for(int i = 0; i < n; i++)
        if(arr[i] <= min_val)
            available_indices[cnt++] = i;

    for(int i = 1; i < cnt; i++) {
        int dist = available_indices[i] - available_indices[i - 1];
        if(dist > k)
            return false;
    }

    return true;
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int maximin = 0;
    
    for(int a = 1; a <= 100; a++)
    {
        if(!IsPossible(a))
        {
            maximin = a;
        }
    }

    cout << maximin + 1;

    return 0;
}