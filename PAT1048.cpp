/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 10:38:29
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 11:04:24
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  string a, b, c;
  cin >> a >> b;
  int lena = a.length(), lenb = b.length();
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  if (lena > lenb)
    b.append(lena - lenb, '0');
  else
    a.append(lenb - lena, '0');
  char str[14] = {"0123456789JQK"};
  for (int i = 0; i < a.length(); i++)
  {
    if (i % 2 == 0)
    {
      c += str[(a[i] - '0' + b[i] - '0') % 13];
    }
    else
    {
      int temp = b[i] - a[i];
      if (temp < 0)
        temp = temp + 10;
      c += str[temp];
    }
  }
  for (int i = c.length() - 1; i >= 0; i--)
    cout << c[i];
  return 0;
}