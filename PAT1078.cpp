/*
 * @Descripttion: 字符串压缩与解压
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-05 15:23:46
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-05 16:21:43
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  string str;
  char c;
  cin >> c;
  getchar();
  getline(cin, str);
  int count = 1;
  if (c == 'C')
  {
    for (int i = 0; i < str.length(); i++)
    {
      if (i < str.length() - 1 && str[i + 1] == str[i])
      {
        count++;
        continue;
      }
      if (count == 1)
      {
        cout << str[i];
      }
      else
      {
        cout << count << str[i];
        count = 1;
      }
    }
  }
  else if (str.length() != 0)
  {
    string num = "";
    for (int i = 0; i < str.length(); i++)
    {
      if (isdigit(str[i]))
      {
        num += str[i];
      }
      else
      {
        if (num.length() > 0)
        {
          count = stoi(num);
        }
        while (count--)
          cout << str[i];
        count = 1;
        num = "";
      }
    }
  }

  return 0;
}