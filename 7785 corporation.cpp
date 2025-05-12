#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string, greater<string>> S;
    int n;
    cin >> n;
    string name, status;

    for (int i = 0; i < n; i++) {
        cin >> name >> status;
        if (status == "enter") {
            S.insert(name);
        } else if (status == "leave") {
            S.erase(name);
        }
    }

    for (string person : S) {
        cout << person << "\n";
    }

    return 0;
}
