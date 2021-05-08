/*
 * @Descripttion: 跟奥巴马一起编程
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 10:53:18
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 11:32:05
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  int n;
  char c;
  scanf("%d %c", &n, &c);
  int row, col = n;
  if (n % 2 == 0)
  {
    row = n / 2;
  }
  else
  {
    row = n / 2 + 1;
  }
  for (int i = 0; i < row; i++)
  {
    if (i == 0 || i == row - 1)
    {
      for (int j = 0; j < col; j++)
      {
        cout << c;
      }
    }
    else
    {
      cout << c;
      for (int j = 0; j < col - 2; j++)
      {
        cout << ' ';
      }
      cout << c;
    }
    cout << endl;
  }

  return 0;
}