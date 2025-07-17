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

    if (N==3)
    {
        ans = 0;

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(grid[i][j])
                {
                   ans++; 
                }
            }
        }

        cout << ans;
        return 0;
    }

    for (int i = 0; i < N-3; i++) {
        for (int j = 0; j < N-3; j++) {
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
