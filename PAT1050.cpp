/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 14:57:07
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 15:55:24
 */

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int cmp(int a, int b) { return a > b; }
int main()
{
  int N, m, n, t = 0;
  scanf("%d", &N);
  for (n = sqrt((double)N); n >= 1; n--)
  {
    if (N % n == 0)
    {
      m = N / n;
      break;
    }
  }
  vector<int> a(N);
  for (int i = 0; i < N; i++)
    scanf("%d", &a[i]);
  sort(a.begin(), a.end(), cmp);
  vector<vector<int>> b(m, vector<int>(n));
  //按照螺旋层数填充 如果m的值为偶数，层数为m/2，如果m为奇数，层数为m/2+1
  int level = m / 2 + m % 2;
  for (int i = 0; i < level; i++)
  {
    //左上-->右上 包含左右端点
    for (int j = i; j <= n - 1 - i && t <= N - 1; j++)
      b[i][j] = a[t++];
    //右上-->右下 不包含两端端点
    for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++)
      b[j][n - 1 - i] = a[t++];
    //右下-->左下 包含左右端点
    for (int j = n - i - 1; j >= i && t <= N - 1; j--)
      b[m - 1 - i][j] = a[t++];
    //左下-->左上 不包含两端端点
    for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--)
      b[j][i] = a[t++];
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d", b[i][j]);
      if (j != n - 1)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}