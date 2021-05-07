/*
 * @Descripttion: 旧键盘-- 参考https://www.liuchuo.net/archives/559
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-28 16:36:11
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-28 17:15:56
 */
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
  string s1, s2, ans;
  cin >> s1 >> s2;
  for (int i = 0; i < s1.length(); i++)
    if (s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos)
      ans += toupper(s1[i]);
  cout << ans;
  return 0;
}