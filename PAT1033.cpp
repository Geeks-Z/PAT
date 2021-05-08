/*
 * @Descripttion: 旧键盘打字
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-29 08:57:14
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 09:42:53
 */
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  string error, input;
  getline(cin, error);
  getline(cin, input);
  //cin 有一个测试点未通过
  // cin >> error >> input;
  for (int i = 0; i < input.length(); i++)
  {
    if (error.find(toupper(input[i])) != string ::npos)
    {
      continue;
    }
    if (isupper(input[i]) && error.find("+") != string ::npos)
    {
      continue;
    }
    cout << input[i];
  }
  return 0;
}