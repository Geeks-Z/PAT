/*
 * @Descripttion: 互评成绩计算
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-05 14:58:42
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-05 16:21:25
 */
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int count, m, stuScore;
  scanf("%d%d", &count, &m);
  int teacher[count];
  vector<int> vi[count];
  for (int i = 0; i < count; i++)
  {
    scanf("%d", &teacher[i]);
    for (int j = 0; j < count - 1; j++)
    {
      scanf("%d", &stuScore);
      if (stuScore >= 0 && stuScore <= m)
      {
        vi[i].push_back(stuScore);
      }
    }
  }

  for (int i = 0; i < count; i++)
  {
    int stuSum = 0, stuAve = 0;
    sort(vi[i].begin(), vi[i].end());
    for (int j = 1; j < vi[i].size() - 1; j++)
    {
      stuSum += vi[i][j];
    }
    stuAve = stuSum / (vi[i].size() - 2);
    cout << round(1.0 * (teacher[i] + stuAve) / 2) << endl;
  }

  return 0;
}