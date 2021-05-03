/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 15:56:00
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 16:22:20
 */
#include <iostream>
#include <algorithm>
using namespace std;
int a[1000000];
bool cmp1(int a, int b)
{
  return a > b;
}
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);
  sort(a + 1, a + n + 1, cmp1);
  //p表示最大的骑车天数
  int ans = 0, p = 1;
  while (ans <= n && a[p] > p)
  {
    ans++;
    p++;
  }
  printf("%d", ans);
  return 0;
}