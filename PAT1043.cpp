/*
 * @Descripttion: 输出PATest--参考https://www.liuchuo.net/archives/579
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 20:45:32
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 20:33:01
 */
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

using namespace std;
int main()
{
  int map[128] = {0}, c;
  while ((c = cin.get()) != EOF)
    map[c]++;
  while (map['P'] > 0 || map['A'] > 0 || map['T'] > 0 || map['e'] > 0 || map['s'] > 0 || map['t'] > 0)
  {
    if (map['P']-- > 0)
      cout << 'P';
    if (map['A']-- > 0)
      cout << 'A';
    if (map['T']-- > 0)
      cout << 'T';
    if (map['e']-- > 0)
      cout << 'e';
    if (map['s']-- > 0)
      cout << 's';
    if (map['t']-- > 0)
      cout << 't';
  }
  return 0;
}