/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 20:57:52
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 20:57:53
 */
#include <iostream>
using namespace std;
int main()
{
  string s1, s2, s;
  int hash[200] = {0};
  getline(cin, s1);
  getline(cin, s2);
  s = s1 + s2;
  for (int i = 0; i < s.size(); i++)
  {
    if (hash[s[i]] == 0)
      cout << s[i];
    hash[s[i]] = 1;
  }
  return 0;
}