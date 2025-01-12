#include <iostream>
#include <string>

using namespace std;

int main(){
  int num;
  string word;
  int count = 0;

  cin>>num;

  for(int i = 0; i < num; i++){
    cin>>word;

    bool alpha[26] = {false, }; 
    alpha[(int)(word[0]-97)] = true;

      for(int i = 1; i < word.size(); i++){
        if(word[i] == word[i-1]){
          continue;
        }

        else if(word[i] != word[i-1] && alpha[(int)(word[i])-97] == true){
          count++;
          break;
        }

        else{
          alpha[(int)(word[i]-97)] = true;
        }
      }
  }
  cout<<num - count<<"\n";
}
