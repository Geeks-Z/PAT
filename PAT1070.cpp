/*
 * @Descripttion: 结绳
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-04 17:28:38
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-04 17:29:27
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int n;
  scanf("%d", &n);
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  //每次选取最短的两个进行连接
  sort(v.begin(), v.end());
  int result = v[0];
  for (int i = 1; i < n; i++)
    result = (result + v[i]) / 2;
  printf("%d", result);
  return 0;
}
