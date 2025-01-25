#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int num;
  vector<string> v;
  string input_word;
  string word;
  int cnt = 0;

  cin >> input_word >> num;

  for (int i = 0; i < num; i++)
  {
    cin >> word;
    word += word;
    v.push_back(word);
  }

  for (int i = 0; i < num; i++)
  {
    if (v[i].find(input_word) != string::npos)
      cnt++;
  }
  cout << cnt << endl;
}
