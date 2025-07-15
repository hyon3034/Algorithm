#include <iostream>
#include <string>

using namespace std;

int N;
string cmd[10000];
int num[30000];

int main() {
    cin >> N;
    int front = 15000;
    int back = 15000;

    for (int i = 0; i < N; i++) {
        cin >> cmd[i];

        if(cmd[i] == "push_front")
        {
            cin >> num[front];
            front--;
        }
        else if(cmd[i] == "push_back")
        {
            cin >> num[++back];
        }
        else if(cmd[i] =="pop_front"){
            cout << num[front+1] << endl;
            front++;
        }
        else if(cmd[i] =="pop_back"){
            cout << num[back] << endl;
            back--;
        }
        else if(cmd[i] =="front"){
            cout << num[front+1] << endl;
        }
        else if(cmd[i] =="back"){
            cout << num[back] << endl;
        }
        else if(cmd[i] =="size"){
            cout << back-front << endl;
        }
        else if(cmd[i] =="empty"){
            if (front == back) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}
