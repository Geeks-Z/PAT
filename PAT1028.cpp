/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-28 11:05:02
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-28 11:24:35
 */
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
const int maxn = 10010;

int main()
{
  int n, cnt = 0;
  cin >> n;
  //处理输入
  // char name[maxn];
  // int year, month, day;
  // scanf("%s %d/%d/%d",&name,&year,&month,&day);
  string name, birth, maxname, minname, maxbirth = "1814/09/06", minbirth = "2014/09/06";
  for (int i = 0; i < n; i++)
  {
    cin >> name >> birth;
    if (birth >= "1814/09/06" && birth <= "2014/09/06")
    {
      cnt++;
      if (birth >= maxbirth)
      {
        maxbirth = birth;
        maxname = name;
      }
      if (birth <= minbirth)
      {
        minbirth = birth;
        minname = name;
      }
    }
  }
  cout << cnt;
  if (cnt != 0)
    cout << " " << minname << " " << maxname;
  return 0;
}