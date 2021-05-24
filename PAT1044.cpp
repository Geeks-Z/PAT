/*
 * @Descripttion: 火星数字--参考https://www.liuchuo.net/archives/581
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 08:35:43
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 20:32:42
 */
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string high[13] = {"false", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void earth2mars(int val)
{
  if (val / 13)
  {
    cout << high[val / 13];
  }
  if ((val / 13) && (val % 13))
  {
    cout << ' ';
  }
  //从低位获取
  if ((val % 13) || (val == 0))
    cout << low[val % 13];
}

void mars2earth(string str)
{
  string s1, s2;
  int highVal = 0, lowVal = 0;
  s1 = str.substr(0, 3);
  if (str.length() > 4)
  {
    s2 = str.substr(4, 3);
  }
  for (int i = 0; i < 13; i++)
  {
    if (s1 == high[i])
    {
      highVal = i;
    }
    if (s2 == low[i] || s1 == low[i])
    {
      lowVal = i;
    }
  }
  cout << highVal * 13 + lowVal;
}

int main()
{
  // freopen("input.txt", "r", stdin);
  string str;
  int count;
  scanf("%d", &count);
  //换行符
  getchar();
  for (int i = 0; i < count; i++)
  {
    getline(cin, str);
    if (str[0] >= '0' && str[0] <= '9')
    {
      earth2mars(stoi(str));
    }
    else
    {
      mars2earth(str);
    }
    cout << endl;
  }

  return 0;
}