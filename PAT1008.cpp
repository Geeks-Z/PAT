/*
 * @Descripttion: 数组右移问题
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-22 11:35:12
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 15:30:47
 */
#include <stdio.h>
#include <algorithm>
using namespace std;

/* void reverse(int arr[], int start, int end)
{
  for (int i = start; i <= (start + end) / 2; i++)
  {
    int tmp = arr[i];
    arr[i] = arr[start + end - i];
    arr[start + end - i] = tmp;
  }
} */

int main()
{
  // freopen("input.txt", "r", stdin);
  //数组长度 右移位数
  int n, m;
  scanf("%d %d", &n, &m);
  //处理m > n的情况
  m %= n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  //整体反转
  reverse(arr, arr + n);
  //反转前m部分
  reverse(arr, arr + m);
  //反转后面部分
  reverse(arr + m, arr + n);

  //左移m位 前m 后n-m 整体
  printf("%d", arr[0]);
  for (int i = 1; i < n; i++)
  {
    printf(" %d", arr[i]);
  }
  printf("\n");
  return 0;
}