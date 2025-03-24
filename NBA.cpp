#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
  int N, team, min, sec, time, scoreA = 0, scoreB = 0, totalA = 0, totalB = 0;
  string s;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> team >> s;
    min = stoi(s.substr(0, 2));
    sec = stoi(s.substr(3, 2));
 
    if(scoreA > scoreB){
      totalA = totalA + min * 60 + sec - time;
    }
    else if (scoreA < scoreB){
      totalB = totalB + min * 60 + sec - time;
    }
    if(team == 1)
      scoreA++;
    else
      scoreB++;
    time = (min * 60 + sec);
  }
  
  if(scoreA > scoreB)
    totalA = totalA + (48 * 60) - time;
  else if(scoreA < scoreB)
    totalB = totalB + (48 * 60) - time;
  
  cout << totalA / 60 << ":" << totalA % 60<<endl;
  cout << totalB / 60 << ":" << totalB % 60<<endl;
}