/*
 * @Descripttion: 狼人杀-简单版
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 15:28:15
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 15:30:51
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  // 每个人说的数字保存在v数组中，i从1～n、j从i+1～n遍历，分别假设i和j是狼人
  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      //a数组表示该人是狼人还是好人，等于1表示是好人，等于-1表示是狼人
      vector<int> lie, a(n + 1, 1);
      a[i] = a[j] = -1;
      for (int k = 1; k <= n; k++)
        //k从1～n分别判断k所说的话是真是假，k说的话和真实情况不同（即v[k] * a[abs(v[k])] < 0）
        //则表示k在说谎，则将k放在lie数组中
        if (v[k] * a[abs(v[k])] < 0)
          lie.push_back(k);
      //遍历完成后判断lie数组，如果说谎人数等于2并且这两个说谎的人一个是好人一个是狼人（即a[lie[0]] + a[lie[1]] == 0）
      if (lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0)
      {
        cout << i << " " << j;
        return 0;
      }
    }
  }
  cout << "No Solution";
  return 0;
}