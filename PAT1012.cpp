/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-22 16:25:28
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-22 18:01:42
 */
#include <stdio.h>
const int maxn = 1010;
int N, arr[maxn];
int res1, res2, res3, count4, res5;
double res4 = 0.0;
int index = 1;
int main()
{
  scanf("%d", &N);
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
    //能被 5 整除的数字中所有偶数的和
    if (arr[i] % 5 == 0 && arr[i] % 2 == 0)
    {
      res1 += arr[i];
    }
    //将被 5 除后余 1 的数字按给出顺序进行交错求和

    if (arr[i] % 5 == 1)
    {

      if (index % 2 == 0)
      {
        res2 -= arr[i];
      }
      else
      {
        res2 += arr[i];
      }
      index++;
    }
    //被 5 除后余 2 的数字的个数
    if (arr[i] % 5 == 2)
    {
      res3++;
    }
    //被 5 除后余 3 的数字的平均数，精确到小数点后 1 位
    if (arr[i] % 5 == 3)
    {
      res4 += arr[i];
      count4++;
    }

    //被 5 除后余 4 的数字中最大数字
    if (arr[i] % 5 == 4)
    {
      if (arr[i] > res5)
      {
        res5 = arr[i];
      }
    }
  }
  if (res1 == 0)
  {
    printf("N ");
  }
  else
  {
    printf("%d ", res1);
  }
  if (res2 == 0)
  {
    printf("N ");
  }
  else
  {
    printf("%d ", res2);
  }
  if (res3 == 0)
  {
    printf("N ");
  }
  else
  {
    printf("%d ", res3);
  }
  if (count4 == 0)
  {
    printf("N ");
  }
  else
  {
    printf("%.1f ", res4 / count4);
  }
  if (res5 == 0)
  {
    printf("N");
  }
  else
  {
    printf("%d", res5);
  }

  return 0;
}