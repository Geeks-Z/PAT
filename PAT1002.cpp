/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-20 18:03:00
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-01 22:22:25
 */
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int ans;
string str;
vector<int> vi;
string resStr[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int main()
{
  // freopen("input.txt", "r", stdin);
  //也可以用while((num = getchar())!='\n')
  cin >> str;
  int strLen = str.length();
  for (int i = 0; i < strLen; i++)
  {
    ans += (str[i] - '0');
  }
  /* while (ans != 0)
  {
    vi.push_back(ans % 10);
    ans = ans / 10;
  }
  // vector<int>::iterator it;
  for (int it = vi.size() - 1; it >= 0; it--)
  {
    if (it > 0)
    {
      cout << resStr[vi[it]] << ' ';
    }
    else
    {
      cout << resStr[vi[it]] << endl;
    }
  } */
  string ansString = to_string(ans);
  for (int i = 0; i < ansString.length(); i++)
  {
    if (i > 0)
      cout << ' ';
    cout << resStr[ansString[i] - '0'];
  }

  return 0;
}