/*
 * @Descripttion: 统计同成绩学生
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 14:13:13
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 11:25:44
 */
#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 10010;
int main()
{
  // freopen("input.txt", "r", stdin);
  int res[maxn] = {0};
  int n, temp;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &temp);
    res[temp]++;
  }
  //需要查询的数量  需要查询的数字
  int retrieveNum, retrieve;
  scanf("%d", &retrieveNum);
  for (int i = 0; i < retrieveNum; i++)
  {
    scanf("%d", &retrieve);
    if (i < retrieveNum - 1)
    {
      cout << res[retrieve] << ' ';
    }
    else
    {
      cout << res[retrieve];
    }
  }

  return 0;
}