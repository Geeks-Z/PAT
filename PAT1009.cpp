/*
 * @Descripttion: 说反话
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-21 15:39:48
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-02 10:27:43
 */
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> vi;

int main()
{
  //可以使用string + stack
  // freopen("input.txt", "r", stdin);
  char temp[80];
  while (scanf("%s", &temp) != EOF)
  {
    vi.push_back(temp);
  }

  for (int i = vi.size() - 1; i >= 0; i--)
  {
    if (i > 0)
    {
      cout << vi[i] << ' ';
    }
    else
    {
      cout << vi[i] << endl;
    }
  }

  return 0;
}