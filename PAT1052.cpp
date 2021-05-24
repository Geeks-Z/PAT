/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-01 17:24:44
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-24 16:30:24
 */
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  string str;
  vector<vector<string>> vi;
  for (int i = 0; i < 3; i++)
  {
    getline(cin, str);
    vector<string> symbol;
    int index = 0;
    while (index < str.length())
    {
      if (str[index] == '[')
      {
        int subIndex = index;
        while (subIndex++ < str.length())
        {
          if (str[subIndex] == ']')
          {
            symbol.push_back(str.substr(index + 1, subIndex - index - 1));
            break;
          }
        }
      }
      index++;
    }
    vi.push_back(symbol);
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a > vi[0].size() || b > vi[1].size() || c > vi[2].size() || d > vi[1].size() || e > vi[0].size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1)
    {
      cout << "Are you kidding me? @\\/@" << endl;
      continue;
    }
    cout << vi[0][a - 1] << "(" << vi[1][b - 1] << vi[2][c - 1] << vi[1][d - 1] << ")" << vi[0][e - 1] << endl;
  }
  return 0;
}