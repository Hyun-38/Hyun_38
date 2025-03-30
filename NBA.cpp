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

  int Amin = totalA / 60;
  int Asec = totalA % 60;
  int Bmin = totalB / 60;
  int Bsec = totalB % 60;

  if(Amin >= 0 && Amin < 10){
    if(Asec >=0 && Asec < 10){
      cout << "0" << Amin << ":" << "0" << Asec<<endl;
    }
    else
      cout << "0" << Amin << ":" << Asec<<endl;
  }
  else{
    if(Asec >=0 && Asec < 10){
      cout << Amin << ":" << "0" << Asec<<endl;
    }
    else
      cout << Amin << ":" << Asec<<endl;
  }
  if(Bmin >= 0 && Bmin < 10){
      if(Bsec >=0 && Bsec < 10){
        cout << "0" << Bmin << ":" << "0" << Bsec;
      }
      else
        cout << "0" << Bmin << ":" << Bsec;
    }
    else{
      if(Bsec >=0 && Bsec < 10){
        cout << Bmin << ":" << "0" << Bsec;
      }
      else
        cout << Bmin << ":" << Bsec;
    }
}