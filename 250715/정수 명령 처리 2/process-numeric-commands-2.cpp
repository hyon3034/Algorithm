#include <iostream>
#include <string>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    int front = 0;
    int back = 0;

    for (int i = 0; i < N; i++) {
        cin >> command[i];

        if (command[i] == "push") {
            cin >> A[back++];
        }
        else if(command[i] =="size"){
            cout << back-front << endl;
        }
        else if(command[i] =="empty"){
            if (front == back) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(command[i] =="pop"){
            cout << A[front++] << endl;
        }
        else if(command[i] =="front"){
            cout << A[front] << endl;
        }
    }

    // Please write your code here.

    return 0;
}