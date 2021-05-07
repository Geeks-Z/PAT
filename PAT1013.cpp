/*
 * @Descripttion: 数素数
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-02 15:41:16
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 15:35:33
 */
#include <stdio.h>
const int maxn = 1000001;
int prime[maxn], primeIndex = 0;
bool isPrime[maxn] = {false};

void findPrime()
{
  for (int i = 2; i < maxn; i++)
  {
    if (isPrime[i] == false)
    {
      prime[primeIndex++] = i;
    }
    for (int j = i + i; j < maxn; j += i)
    {
      isPrime[j] = true;
    }
  }
}

int main()
{
  findPrime();
  int m, n, count;
  scanf("%d%d", &m, &n);
  for (int i = m; i <= n; i++)
  {
    printf("%d", prime[i - 1]);
    count++;
    if (count % 10 != 0 && i < n)
    {
      printf(" ");
    }
    else
    {
      printf("\n");
    }
  }
  return 0;
}