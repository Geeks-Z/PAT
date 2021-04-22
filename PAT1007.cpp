/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-21 10:56:41
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-21 11:33:52
 */
#include <stdio.h>
#include <iostream>
using namespace std;

const int maxn = 100010;
bool isPrime[maxn] = {false};
int prime[maxn];
//用于移动prime数组
int index = 0;

/**
 * @Descripttion: 素数打表
 * @param {*}
 * @return {*}
 */
void findPrime()
{

  for (int i = 2; i < maxn; i++)
  {
    if (isPrime[i] == false)
    {
      prime[index++] = i;
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
  int ans = 0;
  int N;
  scanf("%d", &N);
  for (int i = 1; i < index && prime[i] <= N; i++)
  {
    if (prime[i] - prime[i - 1] == 2)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}