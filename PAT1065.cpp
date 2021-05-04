/*
 * @Descripttion: 单身狗
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-04 08:25:53
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-04 09:19:01
 */
#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
const int maxn = 100000;
int main()
{
  freopen("input.txt", "r", stdin);
  //默认没有对象
  int person[maxn] = {0};
  //默认没有出席
  bool isCome[maxn] = {false};
  int count, a, b;
  scanf("%d", &count);
  for (int i = 0; i < count; i++)
  {
    scanf("%d%d", &a, &b);
    person[a] = b;
    person[b] = a;
  }

  int onPerson;
  scanf("%d", &onPerson);
  //到场人员
  int guest[onPerson];
  set<int> st;
  for (int i = 0; i < onPerson; i++)
  {
    //获取出席的id
    scanf("%d", &guest[i]);
    isCome[guest[i]] = true;
  }
  for (int i = 0; i < onPerson; i++)
  {
    if (!isCome[person[guest[i]]])
    {
      st.insert(guest[i]);
    }
  }
  set<int>::iterator it;
  cout << st.size() << endl;
  int flag = 0;
  for (it = st.begin(); it != st.end(); it++)
  {
    if (flag++ != 0)
    {
      cout << ' ';
    }
    printf("%05d", *it);
  }

  return 0;
}