/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 09:48:13
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 09:48:14
 */
#include <stdio.h>

int main()
{
  int num, aSay, aShow, bSay, bShow;
  int aResult = 0, bResult = 0;
  scanf("%d", &num);
  while (num--)
  {
    scanf("%d%d%d%d", &aSay, &aShow, &bSay, &bShow);
    if (aShow == bShow)
    {
      continue;
    }
    else if (aShow == aSay + bSay)
    {
      bResult++;
    }
    else if (bShow == aSay + bSay)
    {
      aResult++;
    }
    else
    {
      continue;
    }
  }

  printf("%d %d\n", aResult, bResult);
}