/*
 * @Descripttion: 有理数四则运算--参考https://www.liuchuo.net/archives/492
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-29 09:54:50
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 10:05:16
 */
#include <cstdio>
#include <iostream>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;
long long a, b, c, d;
long long gcd(long long t1, long long t2)
{
  return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
void func(long long m, long long n)
{
  if (m * n == 0)
  {
    printf("%s", n == 0 ? "Inf" : "0");
    return;
  }
  //判断是否有负号 true表示有负号
  bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
  m = abs(m);
  n = abs(n);
  //整数部分
  long long x = m / n;
  printf("%s", flag ? "(-" : "");
  if (x != 0)
    printf("%lld", x);
  if (m % n == 0)
  {
    if (flag)
      printf(")");
    return;
  }
  if (x != 0)
    printf(" ");
  m = m - x * n;
  long long t = gcd(m, n);
  m = m / t;
  n = n / t;
  printf("%lld/%lld%s", m, n, flag ? ")" : "");
}
int main()
{
  freopen("input.txt", "r", stdin);
  scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
  //加法运算
  func(a, b);
  printf(" + ");
  func(c, d);
  printf(" = ");
  func(a * d + b * c, b * d);
  printf("\n");
  //减法运算
  func(a, b);
  printf(" - ");
  func(c, d);
  printf(" = ");
  func(a * d - b * c, b * d);
  printf("\n");
  // 乘法运算
  func(a, b);
  printf(" * ");
  func(c, d);
  printf(" = ");
  func(a * c, b * d);
  printf("\n");
  // 除法运算
  func(a, b);
  printf(" / ");
  func(c, d);
  printf(" = ");
  func(a * d, b * c);
  return 0;
}