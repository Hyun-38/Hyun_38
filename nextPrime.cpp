#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n < 2) 
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin>>num;

    for(int i = 0; i < num; i++){
      while(1){
        
      }
    }
    
    
    return 0;
}
