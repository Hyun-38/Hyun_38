#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin >> s;

  int n;
  cin >> n;

  stack<char> left, right;

  for (char c : s) {
    left.push(c);
  }

  while (n--) {
    char cmd;
    cin >> cmd;

    if (cmd == 'L') {
      if (!left.empty()) {
        right.push(left.top());
        left.pop();
      }
    }
    else if (cmd == 'D') {
      if (!right.empty()) {
        left.push(right.top());
        right.pop();
      }
    }
    else if (cmd == 'B') {
      if (!left.empty()) {
        left.pop();
      }
    }
    else if (cmd == 'P') {
      char x;
      cin >> x;
      left.push(x);
    }
  }

  while (!left.empty()) {
    right.push(left.top());
    left.pop();
  }

  while (!right.empty()) {
    cout << right.top();
    right.pop();
  }

  cout << '\n';
  return 0;
}
