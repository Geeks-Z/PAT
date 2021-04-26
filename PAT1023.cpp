/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-24 16:07:09
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-24 16:11:50
 */
#include <stdio.h>

int main()
{
  int digitalNum[10] = {0};
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &digitalNum[i]);
  }
  for (int i = 1; i < 10; i++)
  {
    if (digitalNum[i] != 0)
    {
      printf("%d", i);
      digitalNum[i]--;
      break;
    }
  }
  for (int i = 0; i < 10; i++)
  {
    while (digitalNum[i] != 0)
    {
      printf("%d", i);
      digitalNum[i]--;
    }
  }
  return 0;
}