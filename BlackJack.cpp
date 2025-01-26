#include <iostream>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  int arr[101];

  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }

  int card;
  int max = 0;

  for (int i = 0; i < N - 2; i++)
  {
    for (int j = i + 1; j < N - 1; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        card = arr[i] + arr[j] + arr[k];
        if (card <= M && max < card)
          max = card;
      }
    }
  }
  cout << max;
}