/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 16:26:43
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 16:32:26
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int stuNum, queNum;
  scanf("%d%d", &stuNum, &queNum);
  int score[queNum] = {0};
  int answer[queNum] = {0};
  int stuScore[stuNum] = {0};
  for (int i = 0; i < queNum; i++)
  {
    scanf("%d", &score[i]);
  }
  for (int i = 0; i < queNum; i++)
  {
    scanf("%d", &answer[i]);
  }
  int temp;
  for (int i = 0; i < stuNum; i++)
  {
    for (int j = 0; j < queNum; j++)
    {
      scanf("%d", &temp);
      if (temp == answer[j])
      {
        stuScore[i] += score[j];
      }
    }
  }
  for (int i = 0; i < stuNum; i++)
  {
    cout << stuScore[i] << endl;
  }

  return 0;
}