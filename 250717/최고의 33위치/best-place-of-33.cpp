#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = -99999;

    for (int i = 0; i < N-2; i++) {
        for (int j = 0; j < N-2; j++) {
            int count = 0;

            for (int k = i; k < i+3; k++){
                for(int q = j; q < j+3; q++){
                    if(grid[k][q])
                    {
                        count++;
                    }
                }
            }

            ans = max(ans, count);
        }
    }

    cout << ans;

    return 0;
}
