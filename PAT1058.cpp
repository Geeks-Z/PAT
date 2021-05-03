/*
 * @Descripttion: 选择题
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-03 14:33:49
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-03 15:46:27
 */
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct Question
{
  int fullMarks;
  int optionsNum;
  string rightOptions;
} que[100];

int main()
{
  freopen("input.txt", "r", stdin);
  int n, m;
  //学生人数  题目数量
  scanf("%d%d", &n, &m);
  int stuScore[n] = {0};
  int queErrorNum[m] = {0};
  //处理题目
  for (int i = 0; i < m; i++)
  {
    scanf("%d%d ", &que[i].fullMarks, &que[i].optionsNum);
    getline(cin, que[i].rightOptions);
  }
  //处理学生答题情况
  for (int i = 0; i < n; i++)
  {
    string str;
    int index;
    int quesId = 0;
    getline(cin, str);
    for (int j = 0; j < str.length(); j++)
    {
      index = j;
      if (str[j] == '(')
      {
        while (str[index] != ')')
        {
          index++;
        }
        string substring = str.substr(j + 1, index - j - 1);
        if (substring == que[quesId].rightOptions)
        {
          stuScore[i] += que[quesId].fullMarks;
        }
        else
        {
          queErrorNum[quesId]++;
        }
        quesId++;
        j = index;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << stuScore[i] << endl;
  }
  int maxNum = 0;
  for (int i = 0; i < m; i++)
  {
    if (queErrorNum[i] > maxNum)
    {
      maxNum = queErrorNum[i];
    }
  }
  if (maxNum == 0)
  {
    cout << "Too simple";
  }
  else
  {
    cout << maxNum;
    for (int i = 0; i < m; i++)
    {

      if (queErrorNum[i] == maxNum)
      {
        cout << ' ' << i + 1;
      }
    }
  }

  return 0;
}