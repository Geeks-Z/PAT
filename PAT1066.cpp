/*
 * @Descripttion: 图像过滤
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-04 09:19:21
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-04 10:01:29
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int row, col, m, n, val;
  scanf("%d%d%d%d%d", &row, &col, &m, &n, &val);
  int arr[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &arr[i][j]);
      if (j > 0)
      {
        cout << ' ';
      }
      if (arr[i][j] >= m && arr[i][j] <= n)
      {
        printf("%03d", val);
      }
      else
      {
        printf("%03d", arr[i][j]);
      }
    }
    cout << endl;
  }

  return 0;
}