/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 14:30:57
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-30 14:36:36
 */
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  string all, part;
  cin >> all >> part;
  int lack = 0;
  for (int i = 0; i < part.length(); i++)
  {
    if (all.find(part[i]) == string::npos)
    {
      lack++;
    }
    else
    {
      all.erase(all.begin() + all.find(part[i]));
    }
  }
  if (lack)
  {
    cout << "No" << ' ' << lack;
  }
  else
  {
    cout << "Yes" << ' ' << all.length();
  }
  return 0;
}