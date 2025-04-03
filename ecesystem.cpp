#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
map<string, double> m;
vector<string> word;

int main(void)
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout << fixed;
	cout.precision(4);

	string s;
	int n=0;
	while (getline(cin,s)){
    if(s == "")
      break;
    n++;
    if (m[s] == 0){
      word.push_back(s);
    }
    m[s]++;
  }

  sort(word.begin(), word.end());

  for(auto a : word){
    cout << a << " " << (m[a] / n) * 100 << endl;
  }
}