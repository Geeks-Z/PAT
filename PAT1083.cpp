/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 10:44:51
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 11:04:36
 */
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int count, temp;
  scanf("%d", &count);
  map<int, int> mapp;
  for (int i = 1; i <= count; i++)
  {
    cin >> temp;
    mapp[abs(i - temp)]++;
  }
  //reverse_iterator 倒序输出
  map<int, int>::reverse_iterator it;
  for (it = mapp.rbegin(); it != mapp.rend(); it++)
  {
    if (it->second >= 2)
    {
      cout << it->first << ' ' << it->second << endl;
    }
  }

  return 0;
}