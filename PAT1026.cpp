/*
 * @Descripttion: 程序运行时间
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-29 08:56:30
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-29 08:56:32
 */
#include <stdio.h>

int main()
{
  //两个时钟打点数
  long long c1, c2;
  scanf("%lld%lld", &c1, &c2);
  long long time = c2 - c1;
  //四舍五入操作
  if (time % 100 >= 50)
  {
    time = time / 100 + 1;
  }
  else
  {
    time = time / 100;
  }
  //运行时间的时分秒
  int hh, mm, ss;
  hh = time / (60 * 60);
  mm = (time % (60 * 60)) / 60;
  ss = time % 60;
  printf("%02d:%02d:%02d\n", hh, mm, ss);
  return 0;
}