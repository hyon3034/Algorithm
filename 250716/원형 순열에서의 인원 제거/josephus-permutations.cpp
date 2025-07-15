#include <iostream>
#include <queue>

using namespace std;

int N, K;

int main() {
    cin >> N >> K;
    queue<int> q;

    for(int i = 1; i <= N; i++)
    {
        q.push(i);    
    }

    while(!q.empty())
    {
        for(int j = 1; j < K; j++)
        {
            int top = q.front();
            q.pop();
            q.push(top);
        }

        int answer = q.front();
        q.pop();
        cout << answer << " ";
    }

    return 0;
}
