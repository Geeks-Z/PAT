/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 20:54:30
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 20:54:51
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  scanf("%d", &n);
  float max = 0;
  for (int i = 0; i < n; i++)
  {
    float a, b, ans;
    scanf("%f%f", &a, &b);
    ans = sqrt(a * a + b * b);
    max = ans > max ? ans : max;
  }
  printf("%.2f", max);
  return 0;
}