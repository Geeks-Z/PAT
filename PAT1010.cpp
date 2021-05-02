/*
 * @Descripttion: 一元多项式求导
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-21 16:06:48
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-02 10:34:04
 */

#include <iostream>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  int index;
  int expo;
  cin >> expo >> index;
  if (index == 0)
  {
    cout << "0 0";
    return 0;
  }
  else
    cout << index * expo << " " << index - 1;
  while (cin >> expo >> index)
    if (index != 0)
      cout << " " << index * expo << " " << index - 1;
  return 0;
}