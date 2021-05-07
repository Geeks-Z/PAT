/*
 * @Descripttion: 个位数统计
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-24 10:58:06
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-24 11:05:28
 */
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{

  int res[10] = {0};
  string str;
  cin >> str;
  for (int i = 0; i < str.length(); i++)
  {
    res[str[i] - '0']++;
  }

  for (int i = 0; i < 10; i++)
  {
    if (res[i] != 0)
    {
      cout << i << ":" << res[i] << endl;
    }
  }
  return 0;
}
