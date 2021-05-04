/*
 * @Descripttion: 小赌怡情
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-04 17:32:04
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-04 17:48:13
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int T, K;
  scanf("%d%d", &T, &K);
  int n1, b, t, n2;
  for (int i = 0; i < K; i++)
  {
    scanf("%d%d%d%d", &n1, &b, &t, &n2);
    if (t > T)
    {
      cout << "Not enough tokens.  Total = " << T << "." << endl;
      continue;
    }
    //赢
    if ((n2 > n1 && b == 1) || (n2 < n1 && b == 0))
    {
      T += t;
      printf("Win %d!  Total = %d.\n", t, T);
    }
    else
    {
      T -= t;
      printf("Lose %d.  Total = %d.\n", t, T);
      if (T == 0)
      {
        cout << "Game Over." << endl;
        break;
      }
    }
  }

  return 0;
}