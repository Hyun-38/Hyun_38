#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
  int arrX[3];
  int arrY[3];
  int Dis[3];
  double A[3];

  for (int i = 0; i < 3; i++){
    cin >> arrX[i] >> arrY[i];
  }

  Dis[0] = (pow((arrX[1] - arrX[0]),2) + pow((arrY[1] - arrY[0]),2));
  Dis[1] = (pow((arrX[2] - arrX[1]),2) + pow((arrY[2] - arrY[1]),2));
  Dis[2] = (pow((arrX[2] - arrX[0]),2) + pow((arrY[2] - arrY[0]),2));
  sort(Dis, Dis + 3);

  int dx1 = arrX[1] - arrX[0];
  int dy1 = arrY[1] - arrY[0];
  int dx2 = arrX[2] - arrX[0];
  int dy2 = arrY[2] - arrY[0];

  if (dx1 * dy2 == dx2 * dy1) {
      cout << "X" << endl;
      return 0;
  }

  if(Dis[0] + Dis[1] == Dis[2]){
    if(Dis[0] == Dis[1])
      cout << "Jikkak2Triangle" << "\n";
    else
      cout << "JikkakTriangle" << "\n";
  }
  else if(Dis[0] + Dis[1] > Dis[2]){
    if(((Dis[0] == Dis[1])||(Dis[1] == Dis[2]))||(Dis[0] == Dis[2]))
      cout << "Yeahkak2Triangle" << "\n";
    else
      cout << "YeahkakTriangle" << "\n";
  }
  else if(Dis[0] + Dis[1] < Dis[2]){
    if(((Dis[0] == Dis[1])||(Dis[1] == Dis[2]))||(Dis[0] == Dis[2]))
      cout << "Dunkak2Triangle" << "\n";
    else
      cout << "DunkakTriangle" << "\n";
  }
  return 0;
}