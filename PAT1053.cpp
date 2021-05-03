/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 17:58:38
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 18:35:25
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  //   freopen("input.txt", "r", stdin);
  int count, day, mayEmpty = 0, empty = 0, n;
  double e;
  cin >> count >> e >> day;
  getchar();
  for (int i = 0; i < count; i++)
  {
    scanf("%d", &n);
    int low = 0;
    double temp;
    for (int j = 0; j < n; j++)
    {
      cin >> temp;
      if (temp < e)
      {
        low++;
      }
    }
    if (low > (n / 2))
    {
      n > day ? empty++ : mayEmpty++;
    }
  }
  printf("%.1f%% %.1f%%", 100.0 * mayEmpty / count, 100.0 * empty / count);
  return 0;
}