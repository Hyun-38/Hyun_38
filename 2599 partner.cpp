#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int num, number_boy, number_girl;
  cin >> num;
  int AB, AC, BC;

  vector<int> Boy;
  vector<int> Girl;

  int a = 3;
  while(a--){
    cin >> number_boy >> number_girl;
    Boy.push_back(number_boy);
    Girl.push_back(number_girl);
  }

  AB = Boy[0] - Girl[1];
  AC = Boy[0] - Girl[2];
  BC = Boy[1] - Girl[2];

  for (int i = 0; i < 3; i++){
    if(AB > 0){
      cout << Girl[1] << " " << AB << "\n";
    }
  }
}