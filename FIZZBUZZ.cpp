#include <iostream>
#include <string>

using namespace std;

void FIZZBUZZ(int N)
{
	if (N % 3 == 0 && N % 5 == 0)
	{
		cout << "FizzBuzz" << "\n";
	}
	else if (N % 3 == 0)
	{
		cout << "Fizz" << "\n";
	}
	else if (N % 5 == 0)
	{
		cout << "Buzz" << "\n";
	}
	else
	{
		cout << N << "\n";
	}
}

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

   for (int i = 0; i < 3; ++i)
    {
        string a,b,c;
        cin>>a>>b>>c;

    if (c != "FizzBuzz" && c != "Fizz" && c != "Buzz")
    {
      FIZZBUZZ(stoi(c) + 1);
    }
	else if (b != "FizzBuzz" && b != "Fizz" && b != "Buzz")
    {
      FIZZBUZZ(stoi(b) + 2);
    }
	else
    {
      FIZZBUZZ(stoi(a) + 3);
    }    
    return 0;
  }
}