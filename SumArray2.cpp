#include <iostream>

using namespace std;

int main()
{

  int N, M, cnt = 0;
  cin >> N >> M;
  int arr[N][M];
  int sum[N][M];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      int num1;
      cin >> num1;
      arr[i][j] = num1;
    }
  }

  int num2;
  cin >> num2;

  for (int i = 0; i < num2; i++)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int j = a - 1; j < c; j++)
    {
      for (int k = b - 1; k < d; k++)
      {
        cnt += arr[j][k];
      }
    }
    cout << cnt << "\n";
    cnt = 0;
  }
}