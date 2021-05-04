/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-04 17:53:28
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-04 18:00:53
 */
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M; //学生人数和物品种类数
  map<int, int> m;
  int count = 0;
  int thing[M];
  int tmp;
  for (int i = 0; i < M; i++)
  {
    cin >> tmp;
    m[tmp]++;
  }
  string name;
  int tmp_tot;
  int wupin;
  int stu = 0;
  for (int i = 0; i < N; i++)
  {
    tmp_tot = 0;
    vector<int> t;
    cin >> name >> tmp;
    for (int j = 0; j < tmp; j++)
    {
      cin >> wupin;
      if (m[wupin])
      {
        t.push_back(wupin);
        count++;
        tmp_tot++;
      }
    }
    if (tmp_tot != 0)
    {
      //说明有违禁物品
      cout << name << ":";
      stu++;
      for (int i = 0; i < t.size(); i++)
      {
        cout << " ";
        printf("%04d", t[i]);
      }
      cout << endl;
    }
  }
  cout << stu << " " << count;
  return 0;
}