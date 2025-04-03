#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
  string subject, score;
  double sc, total = 0, div = 0;
  map<string, double> m;

  for (int i = 0; i < 20; i++){
    cin >> subject >> sc >> score;
    if(score != "P"){
      div += sc;
      if(score == "A+") total += sc * 4.5;
      else if(score == "A0") total += sc * 4.0;
      else if(score == "B+") total += sc * 3.5;
      else if(score == "B0") total += sc * 3.0;
      else if(score == "C+") total += sc * 2.5;
      else if(score == "C0") total += sc * 2.0;
      else if(score == "D+") total += sc * 1.5;
      else if(score == "D0") total += sc * 1.0;
      else if(score == "F") total += sc * 0.0;
   }
  }
  cout << fixed;
  cout.precision(6);
  cout << total / div;
}