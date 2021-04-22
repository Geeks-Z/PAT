/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-20 21:42:08
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-20 21:57:27
 */
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100010;
int n;
struct Student
{
  char name[20];
  char id[20];
  int score;
} stu[maxn];

bool cmp(Student a, Student b)
{
  return a.score > b.score;
}

int main()
{
  // freopen("input.txt", "r", stdin);
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%s%s%d", &stu[i].name, &stu[i].id, &stu[i].score);
  }
  sort(stu, stu + n, cmp);
  cout << stu[0].name << ' ' << stu[0].id << endl;
  cout << stu[n - 1].name << ' ' << stu[n - 1].id << endl;

  return 0;
}