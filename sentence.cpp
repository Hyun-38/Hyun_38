#include <iostream>
#include <vector>
#include <string>

using namespace std;

string one = [ “one”, “two”, “three”, “four”, “five”, “six”, “seven”, “eight”, “nine”, “ten” ];
string ten = [ “eleven”, “twelve”, “thirteen”, “fourteen”, “fifteen”, “sixteen”, “seventeen”, “eighteen”, “nineteen” ];
string tens = "ty";
string hund = "hundred";

int main(){
  vector<string> v;
  int num;
  cin >> num;
  string s;

  for (int i = 0; i < num; i++){
    cin >> s;
    v.push_back(s);
  }
  int cnt = 0;
  for (int i = 0; i < num; i++){
    cnt += v[i].size();
  }
  cnt -= 1;
  if(cnt.size())
}