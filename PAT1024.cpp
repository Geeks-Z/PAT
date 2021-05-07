/*
 * @Descripttion: 科学计数法
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-26 21:12:23
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 20:50:29
 */
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  string str, digitalSub;
  cin >> str;
  if (str[0] == '-')
  {
    cout << str[0];
  }
  digitalSub = str.substr(1, str.find("E") - 1);
  //处理指数部分
  int pow = 0, base = 1;
  for (int i = str.length() - 1; i >= 0; i--)
  {
    if (str[i] != '+' && str[i] != '-')
    {
      pow = pow + (str[i] - '0') * base;
      base *= 10;
    }
    else
    {
      if (str[i] == '-')
      {
        pow = -pow;
      }
      break;
    }
  }
  if (pow == 0)
  {
    cout << digitalSub;
  }
  else if (pow > 0)
  {
    //后移
    //不需要补0
    if (pow < (digitalSub.length() - 2))
    {
      digitalSub.insert(pow + 2, ".");
      //删除原有小数点
      digitalSub.erase(digitalSub.begin() + digitalSub.find("."));
    }
    else if (pow == (digitalSub.length() - 2))
    {
      //删除原有小数点
      digitalSub.erase(digitalSub.begin() + digitalSub.find("."));
    }
    else
    {
      //补0
      int diff0 = pow - (digitalSub.length() - 2);
      for (int i = 0; i < diff0; i++)
      {
        digitalSub.insert(digitalSub.length(), "0");
      }
      //删除原有小数点
      digitalSub.erase(digitalSub.begin() + digitalSub.find("."));
    }
  }
  else
  {
    //将指数变为整数
    pow = -pow;
    digitalSub.erase(digitalSub.begin() + 1);
    for (int i = 0; i < pow; i++)
    {
      digitalSub.insert(0, "0");
    }
    digitalSub.insert(1, ".");
  }
  cout << digitalSub;
  return 0;
}