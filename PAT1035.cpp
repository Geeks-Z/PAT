/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-29 20:51:29
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-24 15:53:55
 */
#include <stdio.h>
#include <algorithm>

void insertSort(int arr[], int len)
{
  for (int i = 1; i < len; i++)
  {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j] = temp;
  }
}

int isinsertion(int n, int num[], int half[]);
int nextmerge(int n, int num[], int half[]);

int comp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int main()
{
  freopen("input.txt", "r", stdin);
  int n, num[100], half[100];
  int i;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);
  for (i = 0; i < n; i++)
    scanf("%d", &half[i]);

  if (isinsertion(n, num, half))
    nextmerge(n, num, half);

  for (i = 0; i < n; i++)
  {
    printf("%d%c", num[i], i == n - 1 ? '\n' : ' ');
  }
  return 0;
}

int isinsertion(int n, int num[], int half[])
{
  int i, lenth;
  for (i = 0; i < n - 1 && half[i] <= half[i + 1]; i++)
  {
    continue;
  }
  for (i++, lenth = i; i < n && half[i] == num[i]; i++)
  {
    continue;
  }
  if (i < n)
    return 1;
  printf("Insertion Sort\n");
  lenth++;
  qsort(num, lenth, sizeof(int), comp);
  return 0;
}

int nextmerge(int n, int num[], int half[])
{
  int i, j, lenth;
  printf("Merge Sort\n");
  for (lenth = 1, i = 0; i < n && lenth <= n; lenth *= 2)
  {
    for (i = 0; i < n && num[i] == half[i]; i++)
      ;
    for (j = 0; j < n / lenth; j++)
    {
      qsort(num + j * lenth, lenth, sizeof(int), comp);
    }
    qsort(num + j * lenth, n % lenth, sizeof(int), comp);
  }
  return 0;
}