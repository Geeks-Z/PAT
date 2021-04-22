/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-22 16:07:00
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-22 16:08:18
 */
#include <stdio.h>
int main()
{

  int val, res = 0;
  scanf("%d", &val);
  while (val != 1)
  {

    if (val % 2 == 0)
      val = val / 2;
    else
      val = (3 * val + 1) / 2;
    res++;
  }
  printf("%d\n", res);
  return 0;
}