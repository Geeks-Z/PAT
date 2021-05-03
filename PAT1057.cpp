/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 10:22:48
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 10:38:19
 */
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  string str;
  getline(cin, str);
  int sum = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      sum += (str[i] - 'A' + 1);
    }
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      sum += (str[i] - 'a' + 1);
    }
  }
  int num0 = 0;
  int num1 = 0;
  while (sum != 0)
  {
    switch (sum % 2)
    {
    case 0:
      num0++;
      break;
    case 1:
      num1++;
      break;
    default:
      break;
    }
    sum = sum / 2;
  }
  cout << num0 << ' ' << num1;
  return 0;
}