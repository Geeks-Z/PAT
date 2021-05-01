/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 09:49:23
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 10:31:44
 */
#include <iostream>
using namespace std;
int main()
{
  int n, t, num, score;
  cin >> n;
  int team[1001] = {0};
  for (int i = 1; i <= n; i++)
  {
    scanf("%d-%d %d", &t, &num, &score);
    team[t] += score;
  }
  int max = 0;
  for (int i = 0; i < 1001; i++)
  {
    if (team[max] < team[i])
      max = i;
  }
  cout << max << " " << team[max];
  return 0;
}