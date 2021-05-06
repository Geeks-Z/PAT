/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-06 20:23:51
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-06 20:33:26
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int m;
  cin >> m;
  while (m--)
  {
    int k, flag = 0;
    cin >> k;
    for (int n = 1; n < 10; n++)
    {
      int mul = n * k * k;
      string smul = to_string(mul), sk = to_string(k);
      string smulend = smul.substr(smul.length() - sk.length());
      if (smulend == sk)
      {
        printf("%d %d\n", n, mul);
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      printf("No\n");
  }
  return 0;
}