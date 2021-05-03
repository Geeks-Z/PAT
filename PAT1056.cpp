/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 10:04:26
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 10:20:14
 */
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int temp;
  int sum = 0;
  vector<int> vi;
  int count;
  scanf("%d", &count);
  while (count--)
  {
    scanf("%d", &temp);
    vi.push_back(temp);
    sum += temp;
  }
  cout << sum * 10 * (vi.size() - 1) + sum * (vi.size() - 1);

  return 0;
}