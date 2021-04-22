/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-21 10:25:45
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-21 10:44:54
 */
#include <stdio.h>

int main()
{
  int data;
  scanf("%d", &data);
  int hundred = data / 100, ten = data % 100 / 10, individual = data % 10;
  for (int i = 0; i < hundred; i++)
  {
    printf("B");
  }
  for (int i = 0; i < ten; i++)
  {
    printf("S");
  }
  for (int i = 0; i < individual; i++)
  {
    printf("%d", i + 1);
  }

  return 0;
}
