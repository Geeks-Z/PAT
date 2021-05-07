/*
 * @Descripttion: 德才论
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-23 11:18:38
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-07 15:39:25
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int N, L, H;
struct Stu
{
  //id 定义为char id[9]时 -- 段错误
  int id;
  //德分
  int moralityScore;
  //才分
  int talentScore;
};
vector<Stu> vi[4];

bool cmp(Stu a, Stu b)
{
  if ((a.moralityScore + a.talentScore) != (b.moralityScore + b.talentScore))
  {
    return (a.moralityScore + a.talentScore) > (b.moralityScore + b.talentScore);
  }
  else if (a.moralityScore != b.moralityScore)
  {
    return a.moralityScore > b.moralityScore;
  }
  else
  {
    return a.id < b.id;
  }
}
int main()
{
  freopen("input.txt", "r", stdin);
  scanf("%d%d%d", &N, &L, &H);
  int total = N;
  Stu temp;
  for (int i = 0; i < N; i++)
  {
    scanf("%d %d %d", &temp.id, &temp.moralityScore, &temp.talentScore);
    if (temp.moralityScore < L || temp.talentScore < L)
      total--;
    else if (temp.moralityScore >= H && temp.talentScore >= H)
      vi[0].push_back(temp);
    else if (temp.moralityScore >= H && temp.talentScore < H)
      vi[1].push_back(temp);
    else if (temp.moralityScore < H && temp.talentScore < H && temp.moralityScore >= temp.talentScore)
      vi[2].push_back(temp);
    else
      vi[3].push_back(temp);
  }
  printf("%d\n", total);

  for (int i = 0; i < 4; i++)
  {
    sort(vi[i].begin(), vi[i].end(), cmp);
    for (int j = 0; j < vi[i].size(); j++)
      printf("%d %d %d\n", vi[i][j].id, vi[i][j].moralityScore, vi[i][j].talentScore);
  }

  return 0;
}