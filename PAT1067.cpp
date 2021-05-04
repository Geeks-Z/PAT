/*
 * @Descripttion: 试密码
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-04 10:41:45
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-04 11:06:43
 */
#include <iostream>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  string password, temp;
  int n, cnt = 0;
  cin >> password >> n;
  //换行符 -- cin 与 getline()同时使用 要用getchar()去掉换行符
  getchar();
  while (1)
  {
    getline(cin, temp);
    if (temp == "#")
      break;
    cnt++;
    if (cnt <= n && temp == password)
    {
      cout << "Welcome in";
      break;
    }
    else if (cnt <= n && temp != password)
    {
      cout << "Wrong password: " << temp << endl;
      if (cnt == n)
      {
        cout << "Account locked";
        break;
      }
    }
  }
  return 0;
}