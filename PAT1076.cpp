/*
 * @Descripttion: WiFi密码
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-05 14:46:25
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-05 14:55:19
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int count;
  string str;
  scanf("%d", &count);
  getchar();
  for (int i = 0; i < count; i++)
  {
    getline(cin, str);
    cout << (str[str.find('T') - 2] - 'A' + 1);
  }

  return 0;
}