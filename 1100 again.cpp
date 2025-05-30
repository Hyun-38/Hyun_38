#include <iostream>
using namespace std;

char mat[100][100];

char rotate(char c) {
  if (c == '.') return '.';
  else if (c == 'O') return 'O';
  else if (c == '-') return '|';
  else if (c == '|') return '-';
  else if (c == '/') return '\\';
  else if (c == '\\') return '/';
  else if (c == '^') return '<';
  else if (c == '<') return 'v';
  else if (c == 'v') return '>';
  else if (c == '>') return '^';
  else return c;
}

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
    }
  }

  for (int i = m - 1; i >= 0; i--) {
    for (int j = 0; j < n; j++) {
      cout << rotate(mat[j][i]);
    }
    cout << '\n';
  }

  return 0;
}
