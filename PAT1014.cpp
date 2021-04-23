/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-22 20:12:35
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-23 10:23:19
 */

/**
 *易错：判断在某个字符区间：'A' <= str[0][index] && str[0][index] <= 'G'
 * isdigit():检查其参数是否为十进制数字字符--若参数c为阿拉伯数字0~9，则返回非0值，否则返回0。
 * isalpha():检查所传的字符是否是字母
 */
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
const int maxn = 100;

int main()
{
  freopen("input.txt", "r", stdin);
  char str[4][100];
  int index = 0;
  for (int i = 0; i < 4; i++)
  {
    scanf("%s", &str[i]);
  }

  int strLen = strlen(str[0]) < strlen(str[1]) ? strlen(str[0]) : strlen(str[0]);
  //寻找星期几--寻找第一个相同的大写字母
  while (index < strLen)
  {
    if ('A' <= str[0][index] && str[0][index] <= 'G' && str[0][index] == str[1][index])
    {
      cout << day[str[0][index] - 'A'] << ' ';
      break;
    }
    index++;
  }
  index = index + 1;
  //寻找HH--寻找第二个相同的大写字母
  while (index < strLen)
  {
    if ((('A' <= str[0][index] && str[0][index] <= 'N') || isdigit(str[0][index])) && str[0][index] == str[1][index])
    {
      if ('A' <= str[0][index] && str[0][index] <= 'N')
      {
        printf("%02d:", str[0][index] - 'A' + 10);
      }
      else
      {
        printf("%02d:", str[0][index] - '0');
      }
      break;
    }
    index++;
  }
  //寻找MM
  strLen = strlen(str[2]) < strlen(str[3]) ? strlen(str[2]) : strlen(str[3]);
  for (int i = 0; i < strLen; i++)
  {
    if (isalpha(str[2][i]) && str[2][i] == str[3][i])
    {
      printf("%02d", i);
      break;
    }
  }
  return 0;
}
