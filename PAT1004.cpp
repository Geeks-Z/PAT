/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-20 21:42:08
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-02 09:34:51
 */

//第一次提交
/* #include <stdio.h>
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
  //题目只需输出最高和最低
  sort(stu, stu + n, cmp);
  cout << stu[0].name << ' ' << stu[0].id << endl;
  cout << stu[n - 1].name << ' ' << stu[n - 1].id << endl;

  return 0;
} */

#include <iostream>
// #include <string>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  int n, max = -1, min = 101, score;
  cin >> n;
  string maxname, minname, maxnum, minnum, name, num;
  for (int i = 0; i < n; i++)
  {
    cin >> name >> num >> score;
    if (max < score)
    {
      max = score;
      maxname = name;
      maxnum = num;
    }
    if (min > score)
    {
      min = score;
      minname = name;
      minnum = num;
    }
  }
  cout << maxname << " " << maxnum << endl
       << minname << " " << minnum;
  return 0;
}