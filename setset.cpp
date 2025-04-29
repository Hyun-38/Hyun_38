#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, x;
    string cmd;
    bool s[21] = {false};

    cin >> m;
    while (m--) {
        cin >> cmd;

        if (cmd == "add") {
            cin >> x;
            s[x] = true;
        } 
        else if (cmd == "remove") {
            cin >> x;
            s[x] = false;
        } 
        else if (cmd == "check") {
            cin >> x;
            cout << s[x] << '\n';
        } 
        else if (cmd == "toggle") {
            cin >> x;
            s[x] = !s[x];
        } 
        else if (cmd == "all") {
            for (int i = 1; i <= 20; ++i) s[i] = true;
        } 
        else if (cmd == "empty") {
            for (int i = 1; i <= 20; ++i) s[i] = false;
        }
    }

    return 0;
}
