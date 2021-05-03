/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 20:15:47
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 20:48:56
 */
#include <cstdio>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  else
  {
    return gcd(b, a % b);
  }
}

int main()
{
  // freopen("input.txt", "r", stdin);
  int n1, m1, n2, m2, k, flag = 0;
  scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
  if (1.0 * n1 / m2 > 1.0 * n2 / m2)
  { //分数1可能大于分数2，所以两个分数的值要进行交换。
    swap(n1, n2);
    swap(m1, m2);
  }
  for (int i = 1; i < k; ++i)
  {
    if (gcd(i, k) == 1)
    {
      if (1.0 * i / k > 1.0 * n1 / m1 && 1.0 * i / k < 1.0 * n2 / m2)
      { //分数必须在开区间内选择（分数1，分数2）。
        if (flag++ == 0)
          printf("%d/%d", i, k);
        else
          printf(" %d/%d", i, k);
      }
    }
  }

  return 0;
}