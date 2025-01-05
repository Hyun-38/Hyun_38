#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;

    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 10; i++){
      cin>>num;
      v1.push_back(num);
    }

    for(int i = 0; i < 10; i++){
      cin>>num;
      v2.push_back(num);
    }

    sort(v1.begin(),v1.end(), greater<>());
    sort(v2.begin(),v2.end(), greater<>());

    cout<<v1[0]+v1[1]+v1[2]<<" "<< v2[0]+v2[1]+v2[2]<<endl;
}