#include <iostream>
#include <string>

using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  bool b = false;
  int halfnum = 0, dotnum = 0; 
  int num = 0;

  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      char s;
      cin >> s;
      if(s == '/'){
        if(b == true)
          b = false;
        else if(b == false)
          b = true;
        halfnum += 1;
      }

      if(s == '\\'){
        if(b == true)
          b = false;
        else if(b == false)
          b = true;
        halfnum += 1;
      }

      if(s == '.'){
        if(b == true)
          dotnum += 1;
      }
    }
  }
  cout << halfnum / 2 + dotnum;
}