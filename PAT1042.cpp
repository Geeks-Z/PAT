/*
 * @Descripttion: 字符统计
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 20:28:20
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-30 20:36:15
 */
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(int a, int b)
{
  return a > b;
}

int main()
{
  // freopen("input.txt", "r", stdin);
  string str;
  getline(cin, str);
  int count[26] = {0};
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      count[str[i] - 'a']++;
    }
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      count[str[i] - 'A']++;
    }
  }
  int max = 0, index = 0;
  for (int i = 0; i < 26; i++)
  {
    if (count[i] > max)
    {
      max = count[i];
      index = i;
    }
  }
  cout << (char)('a' + index) << ' ' << max;
  return 0;
}