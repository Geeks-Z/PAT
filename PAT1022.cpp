/*
 * @Descripttion: D进制的A+B
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-24 15:50:34
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-24 16:05:58
 */
#include <stdio.h>
#include <vector>
using namespace std;

vector<int> vi;

void decimal2P(long long val, int p)
{
  long long res;
  while (val != 0)
  {
    vi.push_back(val % p);
    val = val / p;
  }
}

int main()
{
  long long a, b;
  int p;
  scanf("%lld%lld%d", &a, &b, &p);
  if (a + b == 0)
  {
    printf("0");
  }
  else
  {
    decimal2P(a + b, p);
    for (int i = vi.size() - 1; i >= 0; i--)
    {
      printf("%d", vi[i]);
    }
  }

  return 0;
}