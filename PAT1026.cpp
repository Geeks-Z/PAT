/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-28 08:20:49
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-28 09:20:44
 */
#include <stdio.h>
#include <iostream>
using namespace std;
int maxNum = 1;
void print(int n, char c)
{
  //控制字符前空格输出
  for (int i = (maxNum - n) / 2; i > 0; i--)
  {
    cout << ' ';
  }

  for (int i = 0; i < n; i++)
  {
    cout << c;
  }
  cout << endl;
}

int main()
{
  freopen("input.txt", "r", stdin);
  int n;
  char c;
  scanf("%d %c", &n, &c);

  if (n < 7)
  {
    cout << c << endl;
    cout << n - maxNum;
  }
  else
  {
    n = n - 1;

    while ((maxNum + 2) * 2 <= n)
    {
      maxNum += 2;
      n = n - 2 * maxNum;
    }
    for (int i = maxNum; i >= 0; i -= 2)
    {
      print(i, c);
    }
    for (int i = 3; i <= maxNum; i += 2)
    {
      print(i, c);
    }
    cout << n;
  }

  return 0;
}