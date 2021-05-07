/*
 * @Descripttion: 锤子剪刀布
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-23 21:47:12
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-23 22:59:20
 */
#include <stdio.h>

//存储甲乙获胜情况 甲乙 BCJ --相同结果按照字典序升序输出，所以按照BCJ存储
int res[2][3] = {0};

int main()
{
  freopen("input.txt", "r", stdin);
  int n, equal = 0;
  //甲乙出拳情况
  char a, b;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    //去掉末尾换行符
    getchar();
    //%c能识别空格 所以两个%c之间加了空格
    scanf("%c %c", &a, &b);
    if (a == 'C')
    {
      if (b == 'C')
      {
        equal++;
      }
      else if (b == 'J')
      {
        //甲 C获胜
        res[0][1]++;
      }
      else
      {
        //乙 B获胜
        res[1][0]++;
      }
    }
    else if (a == 'J')
    {
      if (b == 'J')
      {
        equal++;
      }
      else if (b == 'B')
      {
        //甲 J获胜
        res[0][2]++;
      }
      else
      {
        //乙 C获胜
        res[1][1]++;
      }
    }
    else
    {
      if (b == 'B')
      {
        equal++;
      }
      else if (b == 'C')
      {
        //甲 B获胜
        res[0][0]++;
      }
      else
      {
        //乙 J获胜
        res[1][2]++;
      }
    }
  }
  int totalA = 0;
  int totalB = 0;
  int maxA = 0, indexA = 0;
  int maxB = 0, indexB = 0;
  for (int i = 0; i < 3; i++)
  {
    totalA += res[0][i];
    totalB += res[1][i];
    if (res[0][i] > maxA)
    {
      indexA = i;
      maxA = res[0][i];
    }
    if (res[1][i] > maxB)
    {
      indexB = i;
      maxB = res[1][i];
    }
  }
  printf("%d %d %d\n", totalA, equal, totalB);
  printf("%d %d %d\n", totalB, equal, totalA);
  char cjb[4] = "BCJ";
  printf("%c %c", cjb[indexA], cjb[indexB]);
  return 0;
}