/*
 * @Descripttion: 万绿丛中一点红
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-04 15:31:22
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-04 15:58:03
 */
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int m, n, tol;
vector<vector<int>> v;
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
bool judge(int i, int j)
{
  for (int k = 0; k < 8; k++)
  {
    int tx = i + dir[k][0];
    int ty = j + dir[k][1];
    if (tx >= 0 && tx < n && ty >= 0 && ty < m && v[i][j] - v[tx][ty] >= 0 - tol && v[i][j] - v[tx][ty] <= tol)
      return false;
  }
  return true;
}
int main()
{
  // freopen("input.txt", "r", stdin);
  int cnt = 0, x = 0, y = 0;
  scanf("%d%d%d", &m, &n, &tol);
  v.resize(n, vector<int>(m));
  //题目要求“红”必须唯一
  map<int, int> mapp;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &v[i][j]);
      mapp[v[i][j]]++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mapp[v[i][j]] == 1 && judge(i, j) == true)
      {
        cnt++;
        x = i + 1;
        y = j + 1;
      }
    }
  }
  if (cnt == 1)
    printf("(%d, %d): %d", y, x, v[x - 1][y - 1]);
  else if (cnt == 0)
    printf("Not Exist");
  else
    printf("Not Unique");
  return 0;
}