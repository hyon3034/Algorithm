#include <iostream>
#include <utility> 

using namespace std;

int main() {
    int N;
    int ans = 999999999;
    pair<int,int> arr[100];
    
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int x,y;
        cin >> x >> y;

        arr[i] = {x,y};
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            ans = min(ans, (arr[i].first - arr[j].first) * (arr[i].first - arr[j].first) + (arr[i].second - arr[j].second) * (arr[i].second - arr[j].second));
        }
    }

    cout << ans;

    return 0;
}