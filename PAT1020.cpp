/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-24 09:46:02
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-24 10:25:00
 */
#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn = 10000;

struct Moon
{
  float total;
  float cost;
  float unitCost;
} moon[maxn];
bool cmp(Moon a, Moon b)
{
  return a.unitCost > b.unitCost;
}
int main()
{
  freopen("input.txt", "r", stdin);
  int n, d;
  scanf("%d%d", &n, &d);
  for (int i = 0; i < n; i++)
  {
    scanf("%f", &moon[i].total);
  }
  for (int i = 0; i < n; i++)
  {
    scanf("%f", &moon[i].cost);
    moon[i].unitCost = moon[i].cost / moon[i].total;
  }
  sort(moon, moon + n, cmp);
  double maxIncome = 0.0;
  int index = 0;
  //不要忘记处理index < n -- 总共n种月饼
  while (d != 0 && index < n)
  {
    if (moon[index].total <= d)
    {
      d -= moon[index].total;
      maxIncome += moon[index++].cost;
    }
    else
    {
      maxIncome += (d * moon[index].unitCost);
      d = 0;
    }
  }
  printf("%.2f", maxIncome);

  return 0;
}