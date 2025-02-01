#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
  int N, M, B;
  cin >> N >> M >> B;

  vector<int> land(N * M);
  int minHeight = 256, maxHeight = 0;

  for (int i = 0; i < N * M; i++)
  {
    cin >> land[i];
    minHeight = min(minHeight, land[i]);
    maxHeight = max(maxHeight, land[i]);
  }

  int minTime = INT_MAX;
  int bestHeight = 0;

  for (int h = minHeight; h <= maxHeight; h++)
  {
    int removeBlocks = 0, addBlocks = 0;

    for (int i = 0; i < N * M; i++)
    {
      if (land[i] > h)
      {
        removeBlocks += (land[i] - h);
      }
      else if (land[i] < h)
      {
        addBlocks += (h - land[i]);
      }
    }

    if (removeBlocks + B >= addBlocks)
    {
      int time = (removeBlocks * 2) + addBlocks;

      if (time <= minTime)
      {
        minTime = time;
        bestHeight = h;
      }
    }
  }

  cout << minTime << " " << bestHeight << endl;
  return 0;
}
