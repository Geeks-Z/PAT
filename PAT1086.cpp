/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 14:36:58
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 14:46:53
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int a, b, res[10] = {0};
  scanf("%d%d", &a, &b);
  int cnt = 0, mul;
  mul = a * b;
  while (mul != 0)
  {
    res[cnt++] = mul % 10;
    mul = mul / 10;
  }
  int index = 0;
  while (cnt - index >= 1 && res[index] == 0)
  {
    index++;
  }

  for (int i = index; i < cnt; i++)
  {
    //去掉前边多余的0

    cout << res[i];
  }

  return 0;
}