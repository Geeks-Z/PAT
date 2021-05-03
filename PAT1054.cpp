/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 19:59:18
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 20:36:20
 */
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
  int n, cnt = 0;
  char a[50], b[50];
  double temp = 0.0, sum = 0.0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    scanf("%s", a);
    sscanf(a, "%lf", &temp);
    sprintf(b, "%.2f", temp);
    int flag = 0;
    for (int j = 0; j < strlen(a); j++)
      if (a[j] != b[j])
        flag = 1;
    if (flag || temp < -1000 || temp > 1000)
    {
      printf("ERROR: %s is not a legal number\n", a);
      continue;
    }
    else
    {
      sum += temp;
      cnt++;
    }
  }
  if (cnt == 1)
    printf("The average of 1 number is %.2f", sum);
  else if (cnt > 1)
    printf("The average of %d numbers is %.2f", cnt, sum / cnt);
  else
    printf("The average of 0 numbers is Undefined");
  return 0;
}