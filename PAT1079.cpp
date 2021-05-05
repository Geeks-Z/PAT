/*
 * @Descripttion: 延迟的回文数
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-05 16:10:23
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-05 16:19:32
 */
#include <iostream>
#include <algorithm>
using namespace std;
string rev(string s)
{
  reverse(s.begin(), s.end());
  return s;
}
string add(string s1, string s2)
{
  string s = s1;
  int carry = 0;
  for (int i = s1.size() - 1; i >= 0; i--)
  {
    s[i] = (s1[i] - '0' + s2[i] - '0' + carry) % 10 + '0';
    carry = (s1[i] - '0' + s2[i] - '0' + carry) / 10;
  }
  if (carry > 0)
    s = "1" + s;
  return s;
}
int main()
{
  string s, sum;
  int n = 10;
  cin >> s;
  if (s == rev(s))
  {
    cout << s << " is a palindromic number.\n";
    return 0;
  }
  while (n--)
  {
    sum = add(s, rev(s));
    cout << s << " + " << rev(s) << " = " << sum << endl;
    if (sum == rev(sum))
    {
      cout << sum << " is a palindromic number.\n";
      return 0;
    }
    s = sum;
  }
  cout << "Not found in 10 iterations.\n";
  return 0;
}