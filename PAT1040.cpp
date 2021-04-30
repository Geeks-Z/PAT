/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 14:40:53
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-30 15:02:45
 */
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
const int mod = 1000000007;
const int maxn = 100010;
int main()
{
  // freopen("input.txt", "r", stdin);
  string str;
  cin >> str;
  int pNum[maxn] = {0}, res = 0;
  if (str[0] == 'P')
  {
    pNum[0] = 1;
  }
  for (int i = 1; i < str.length(); i++)
  {
    if (str[i] == 'P')
    {
      pNum[i] = pNum[i - 1] + 1;
    }
    else
    {
      pNum[i] = pNum[i - 1];
    }
  }
  int tNum = 0;
  for (int i = str.length() - 1; i >= 0; i--)
  {
    if (str[i] == 'T')
    {
      tNum++;
    }
    if (str[i] == 'A')
    {
      res = (res + pNum[i] * tNum) % mod;
    }
  }

  cout << res;
  return 0;
}