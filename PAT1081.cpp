/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 09:25:39
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 09:54:17
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int count;
  scanf("%d", &count);
  getchar();
  string str;
  for (int i = 0; i < count; i++)
  {
    int digitalNum = 0, alphaNum = 0, pointNum = 0;
    getline(cin, str);
    if (str.length() < 6)
    {
      cout << "Your password is tai duan le." << endl;
      continue;
    }
    for (int j = 0; j < str.length(); j++)
    {
      if (isdigit(str[j]))
      {
        digitalNum++;
      }
      else if (isalpha(str[j]))
      {
        alphaNum++;
      }
      else if (str[j] == '.')
      {
        pointNum++;
      }
      else
      {
        break;
      }
    }
    if (digitalNum + alphaNum + pointNum < str.length())
    {
      cout << "Your password is tai luan le." << endl;
    }
    else if (alphaNum == 0)
    {
      cout << "Your password needs zi mu." << endl;
    }
    else if (digitalNum == 0)
    {
      cout << "Your password needs shu zi." << endl;
    }
    else
    {
      cout << "Your password is wan mei." << endl;
    }
  }

  return 0;
}