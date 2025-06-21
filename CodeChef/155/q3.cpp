#include <bits/stdc++.h>
using namespace std;

void generateMatrix(int rows, int cols)
{
}

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n, m;
    cin >> n >> m;

    int rows = n;
    int cols = m;
    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int r = 0; r < rows; ++r)
    {
      for (int c = 0; c < cols; ++c)
      {

        matrix[r][c] = (r + 2) * (cols + c + 2) + 1;
      }

      for (const auto &row : matrix)
      {
        for (const auto &value : row)
        {
          cout << value << " ";
        }
        cout << endl;
      }
    }
  }
  return 0;
}
