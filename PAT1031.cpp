/*
 * @Descripttion: 查验身份证
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-28 21:06:36
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 09:37:43
 */
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
using namespace std;

map<int, char> check;
int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char code[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
//标记身份证号为全正确
int flag = 1;

void isRight(string str)
{
  int sum = 0;
  string subString = str.substr(0, 17);
  for (int i = 0; i < 17; i++)
  {
    sum += (subString[i] - '0') * weight[i];
  }
  if (subString.find('X') != string ::npos || code[sum % 11] != str[17])
  {
    flag = 0;
    cout << str << endl;
  }
}
int main()
{
  freopen("input.txt", "r", stdin);
  int n;
  scanf("%d", &n);
  string str;
  for (int i = 0; i < n; i++)
  {
    cin >> str;
    isRight(str);
  }
  if (flag)
  {
    cout << "All passed";
  }
  return 0;
}