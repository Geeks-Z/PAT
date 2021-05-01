/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 15:59:26
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 17:33:32
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double r1, p1, r2, p2, A, B;
  cin >> r1 >> p1 >> r2 >> p2;
  A = r1 * r2 * cos(p1) * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
  B = r1 * r2 * cos(p1) * sin(p2) + r1 * r2 * sin(p1) * cos(p2);
  //当A或者B小于0但是大于-0.005(比如-0.00001)时候，
  //如果按照A>=0的判断，会输出“-0.00”这样的结果,事实上应该输出“0.00”【B同理，应该输出“+0.00i”】
  if (A + 0.005 >= 0 && A < 0)
    printf("0.00");
  else
    printf("%.2f", A);
  if (B >= 0)
    printf("+%.2fi", B);
  else if (B + 0.005 >= 0 && B < 0)
    printf("+0.00i");
  else
    printf("%.2fi", B);
  return 0;
}