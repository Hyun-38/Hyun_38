#include <iostream>
#include <queue>

using namespace std;

int main()
{
  int a, b, c, d;
  queue<int> Q;
  cin >> a >> b;

  for (int i = 1; i <= a; i++)
  {
    Q.push(i);
  }

  cout << '<';
  while (!Q.empty())
  {
    for (int i = 1; i < b; i++)
    {
      Q.push(Q.front());
      Q.pop();
    }
    cout<< Q.front();
    Q.pop();

    if (Q.empty())
      cout << '>';
    else
      cout << ", ";
  }
}