/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-21 16:06:48
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-21 21:42:45
 */

#include <iostream>
using namespace std;
int main()
{
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