#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<string> board;

int getMaxCandy()
{
  int maxCandy = 1;

  for (int i = 0; i < N; i++)
  {
    int count = 1;
    for (int j = 1; j < N; j++)
    {
      if (board[i][j] == board[i][j - 1])
      {
        count++;
        maxCandy = max(maxCandy, count);
      }
      else
      {
        count = 1;
      }
    }
  }

  for (int j = 0; j < N; j++)
  {
    int count = 1;
    for (int i = 1; i < N; i++)
    {
      if (board[i][j] == board[i - 1][j])
      {
        count++;
        maxCandy = max(maxCandy, count);
      }
      else
      {
        count = 1;
      }
    }
  }

  return maxCandy;
}

int main()
{
  cin >> N;
  board.resize(N);
  for (int i = 0; i < N; i++)
  {
    cin >> board[i];
  }

  int maxCandy = getMaxCandy();

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {

      if (j + 1 < N && board[i][j] != board[i][j + 1])
      {
        swap(board[i][j], board[i][j + 1]);
        maxCandy = max(maxCandy, getMaxCandy());
        swap(board[i][j], board[i][j + 1]);
      }

      if (i + 1 < N && board[i][j] != board[i + 1][j])
      {
        swap(board[i][j], board[i + 1][j]);
        maxCandy = max(maxCandy, getMaxCandy());
        swap(board[i][j], board[i + 1][j]);
      }
    }
  }

  cout << maxCandy << endl;
  return 0;
}
