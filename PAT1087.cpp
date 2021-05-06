/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 14:48:36
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 14:53:06
 */
#include <cstdio>
#include <iostream>
#include <map>
#include <math.h>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int N;
  map<int, int> mapp;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    mapp[floor(1.0 * (i / 2 + i / 3 + i / 5))]++;
  }
  cout << mapp.size();
  return 0;
}