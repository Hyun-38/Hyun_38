#include <iostream>

using namespace std;

int main(){
  int a = 1, b = 1;

  while (true){
    cin >> a >> b;
    if(a == 0 && b == 0)
      break;
    else if(a % b == 0 && b != 0)
      cout << "multiple" << "\n";
    else if(b % a == 0 && a != 0)
      cout << "factor" << "\n";
    else
      cout << "neither" << "\n";
  }
}