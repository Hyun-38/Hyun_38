#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compareX(const pair<int,int>& a, const pair<int,int>& b){
  if(a.first == b.first)
    return a.second < b.second;
  return a.first < b.first;
}

bool compareY(const pair<int,int>& a, const pair<int,int>& b){
  if(a.second == b.second)
    return a.first < b.first;
  return a.second < b.second;
}


int AnsNum(pair<int,int> &a, const pair<int,int> &b){
  if(a.first == b.first){
    if(a.second<b.second)
      return b.second - a.second;
    else
      return a.second - b.second;
  }
  if(a.second == b.second){
    if(a.first > b.first)
      return a.first - b.first;
    else
      return b.first - a.first;
  }
}

int main(){
  int num;
  cin >> num;
  vector<pair<int, int>> v;

  for(int i = 0; i < num; i++){
    int x, y;
    cin >> x >> y;
    pair<int, int> tmp = make_pair(x, y);
    v.push_back(tmp);
  }

  vector<pair<int,int>> compare_X = v;
  vector<pair<int,int>> compare_Y = v;

  sort(compare_X.begin(), compare_X.end(), compareX);
  sort(compare_Y.begin(), compare_Y.end(), compareY);

  return 0;
}
