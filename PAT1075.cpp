/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-05 10:42:57
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-05 11:14:03
 */
#include <cstdio>
#include <iostream>
using namespace std;
#include <vector>
const int maxn = 100010;
struct Node
{
  int data;
  int next;
} node[maxn];

int main()
{
  // freopen("input.txt", "r", stdin);
  vector<int> vi[3];
  int start, count, k, id;
  scanf("%d%d%d", &start, &count, &k);
  for (int i = 0; i < count; i++)
  {
    scanf("%d", &id);
    scanf("%d%d", &node[id].data, &node[id].next);
  }
  int index = start;
  while (index != -1)
  {
    if (node[index].data < 0)
    {
      vi[0].push_back(index);
    }
    else if (node[index].data >= 0 && node[index].data <= k)
    {
      vi[1].push_back(index);
    }
    else
    {
      vi[2].push_back(index);
    }
    index = node[index].next;
  }

  int flag = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < vi[i].size(); j++)
    {
      if (flag == 0)
      {
        printf("%05d %d ", vi[i][j], node[vi[i][j]].data);
        flag = 1;
      }
      else
      {
        printf("%05d\n%05d %d ", vi[i][j], vi[i][j], node[vi[i][j]].data);
      }
    }
  }
  printf("-1");

  return 0;
}