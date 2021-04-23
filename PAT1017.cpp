/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-23 20:39:28
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-23 21:18:57
 */
#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;

const int maxn = 1010;
char str[maxn];
vector<int> vi;

int main()
{
  freopen("input.txt", "r", stdin);
  int b;
  scanf("%s%d", &str, &b);
  //特判 只有一位
  if (strlen(str) == 1)
  {
    printf("%d %d", (str[0] - '0') / b, (str[0] - '0') % b);
  }
  else
  {
    int remain = 0;
    for (int i = 0; i < strlen(str); i++)
    {
      int temp = remain * 10 + str[i] - '0';
      vi.push_back(temp / b);
      remain = temp % b;
    }
    //去掉vi前边的0
    int index = 0;
    while (vi[index] == 0)
    {
      index++;
    }
    for (int i = index; i < vi.size(); i++)
    {
      printf("%d", vi[i]);
    }
    printf(" %d", remain);
  }
}
