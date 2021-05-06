/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 08:29:21
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 08:52:25
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
struct node
{
  string name;
  int gp, gm, gf, g;
};
bool cmp(node a, node b)
{
  return a.g != b.g ? a.g > b.g : a.name < b.name;
}
//名字 存储在vector中的坐标（为了避免与“不存在”混淆，保存下标+1（cnt从1开始）
//当为0时表示该学生的姓名在v中不存在）
map<string, int> idx;
int main()
{
  int p, m, n, score, cnt = 1;
  cin >> p >> m >> n;
  vector<node> v, ans;
  string s;
  for (int i = 0; i < p; i++)
  {
    cin >> s >> score;
    if (score >= 200)
    {
      v.push_back(node{s, score, -1, -1, 0});
      idx[s] = cnt++;
    }
  }
  //更新期中成绩
  for (int i = 0; i < m; i++)
  {
    cin >> s >> score;
    if (idx[s] != 0)
      v[idx[s] - 1].gm = score;
  }
  //更新总评成绩
  for (int i = 0; i < n; i++)
  {
    cin >> s >> score;
    if (idx[s] != 0)
    {
      int temp = idx[s] - 1;
      v[temp].gf = v[temp].g = score;
      if (v[temp].gm > v[temp].gf)
        v[temp].g = int(v[temp].gm * 0.4 + v[temp].gf * 0.6 + 0.5); //+0.5是为了四舍五入
    }
  }
  for (int i = 0; i < v.size(); i++)
    if (v[i].g >= 60)
      ans.push_back(v[i]);
  sort(ans.begin(), ans.end(), cmp);
  for (int i = 0; i < ans.size(); i++)
    printf("%s %d %d %d %d\n", ans[i].name.c_str(), ans[i].gp, ans[i].gm, ans[i].gf, ans[i].g);
  return 0;
}