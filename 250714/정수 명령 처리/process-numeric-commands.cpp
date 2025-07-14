#include <iostream>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;
    int index = 0;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[index++];
        }
        else if(command[i] =="size"){
            cout << index << endl;
        }
        else if(command[i] =="empty"){
            if (index == 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(command[i] =="pop"){
            cout << value[--index] << endl;
        }
        else if(command[i] =="top"){
            cout << value[index-1] << endl;
        }
    }

    return 0;
}
