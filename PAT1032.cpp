/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-28 21:36:27
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-28 21:36:36
 */
#include <stdio.h>
const int len = 100010;
int school[len] = {0}; //所以从1开始存储
int main()
{
  int num, id, score;
  scanf("%d", &num);
  for (int i = 0; i < num; i++)
  {
    scanf("%d%d", &id, &score);
    school[id] += score;
  }

  int school_num = 1, max = -1;
  for (int j = 0; j <= num; j++)
  {
    if (school[j] > max)
    {
      max = school[j];
      school_num = j;
    }
  }
  printf("%d %d\n", school_num, max);
  return 0;
}