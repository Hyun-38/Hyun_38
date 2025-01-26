#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int num;
  cin >> num;
  cin.ignore();

  for (int i = 0; i < num; i++)
  {
    string s, ans, tmp;
    stack<string> s1;
    getline(cin, s);

    for (int j = 0; j < s.length(); j++)
    {
      if (s[j] == ' ')
      {
        s1.push(tmp);
        s1.push(" ");
        tmp.clear();
      }
      else
        tmp += s[j];
    }
    s1.push(tmp);
    while (!s1.empty())
    {
      ans += s1.top();
      s1.pop();
    }
    cout << "Case #" << i + 1 << ": " << ans << "\n";
  }
}