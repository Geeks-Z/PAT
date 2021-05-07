/*
 * @Descripttion: 部分 A + B
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-23 20:39:04
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 15:39:53
 */

#include <stdio.h>

int main()
{
  long long a, da, b, db;
  long long pa = 0, pb = 0;
  scanf("%lld%lld%lld%lld", &a, &da, &b, &db);
  while (a != 0)
  {
    if (a % 10 == da)
      pa = pa * 10 + da;
    a = a / 10;
  }

  while (b != 0)
  {
    if (b % 10 == db)
      pb = pb * 10 + db;
    b = b / 10;
  }

  printf("%lld\n", pa + pb);

  return 0;
}