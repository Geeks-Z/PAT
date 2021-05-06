/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 10:33:03
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 10:33:42
 */
#include <iostream>
using namespace std;
int main()
{
  int n, id, x, y;
  int max = -1, maxid = 0, min = 9999, minid = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> id >> x >> y;
    if (x * x + y * y > max)
    {
      max = x * x + y * y;
      maxid = id;
    }
    if (x * x + y * y < min)
    {
      min = x * x + y * y;
      minid = id;
    }
  }
  printf("%04d %04d", minid, maxid);
  return 0;
}