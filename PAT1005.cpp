/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-21 09:19:05
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-21 09:55:03
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

const int maxn = 10010;

bool vis[maxn] = {false};
vector<int> vi;

bool cmp(int a, int b)
{
  return a > b;
}

void think(int n)
{
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
      vis[n] = true;
    }
    else
    {
      n = (3 * n + 1) / 2;
      vis[n] = true;
    }
  }
}

int main()
{
  // freopen("input.txt", "r", stdin);
  int n;
  scanf("%d", &n);
  int arr[maxn];
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &arr[i]);
    think(arr[i]);
  }

  for (int i = 1; i <= n; i++)
  {
    if (vis[arr[i]] == false)
    {
      vi.push_back(arr[i]);
    }
  }
  sort(vi.begin(), vi.end(), cmp);
  for (int i = 0; i < vi.size(); i++)
  {
    if (i < vi.size() - 1)
    {
      printf("%d ", vi[i]);
    }
    else
    {
      printf("%d", vi[i]);
    }
  }

  return 0;
}