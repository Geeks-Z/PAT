/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-24 09:25:54
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-24 09:42:27
 */
#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[4];
void num2Arr(int num)
{
  int index = 0;
  while (num != 0)
  {
    arr[index++] = num % 10;
    num /= 10;
  }
}

int arr2Num(int arr[])
{
  int res = 0;
  for (int i = 0; i < 4; i++)
  {
    res = res * 10 + arr[i];
  }
  return res;
}

bool cmp(int a, int b)
{
  return a > b;
}

int main()
{
  int n, min, max;
  scanf("%d", &n);
  while (1)
  {
    num2Arr(n);
    sort(arr, arr + 4);
    min = arr2Num(arr);
    sort(arr, arr + 4, cmp);
    max = arr2Num(arr);
    n = max - min;
    printf("%04d - %04d = %04d\n", max, min, n);
    if (n == 0 || n == 6174)
    {
      break;
    }
  }

  return 0;
}