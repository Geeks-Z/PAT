/*
 * @Descripttion: 反转链表--参考https://www.liuchuo.net/archives/463
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-27 20:09:17
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 22:12:37
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  int first, k, n, nodeId;
  cin >> first >> n >> k;
  int data[100005], next[100005], list[100005];
  for (int i = 0; i < n; i++)
  {
    cin >> nodeId;
    cin >> data[nodeId] >> next[nodeId];
  }
  int sum = 0; //不一定所有的输入的结点都是有用的，加个计数器
  while (first != -1)
  {
    list[sum++] = first;
    first = next[first];
  }
  for (int i = 0; i < (sum - sum % k); i += k)
    reverse(begin(list) + i, begin(list) + i + k);
  for (int i = 0; i < sum - 1; i++)
    printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
  printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
  return 0;
}