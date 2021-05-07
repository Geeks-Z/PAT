/*
 * @Descripttion: A+B 和 C
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-03-13 11:28:12
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 15:32:21
 */
#include <stdio.h>

int main()
{
  int num;
  int testCase = 1;
  //输入数据组数
  scanf("%d", &num);
  while (num--)
  {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a + b > c)
      printf("Case #%d: true\n", testCase++);
    else
      printf("Case #%d: false\n", testCase++);
  }

  return 0;
}