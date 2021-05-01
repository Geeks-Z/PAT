/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 14:47:06
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 14:56:04
 */
/**
 *分析：将数列中的每个数字读取到temp中 假设我们选取的片段中包括temp
 且这个片段的首尾指针分别为p和q，那么对于p，有i种选择，
 即12…i，对于q，有n-i+1种选择，即i, i+1, … n，
 所以p和q组合形成的首尾片段有i * (n-i+1)种，因为每个里面都会出现temp，
 所以temp引起的总和为temp * i * (n – i + 1)；
 遍历完所有数字，将每个temp引起的总和都累加到sum中，最后输出sum的值 
 */
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  long long sum = 0;
  double temp;
  for (int i = 1; i <= n; i++)
  {
    cin >> temp;
    //放大1000倍是为了避免累加和带来的误差
    sum += (long long)(temp * 1000) * i * (n - i + 1);
  }
  printf("%.2f", sum / 1000.0);
  return 0;
}