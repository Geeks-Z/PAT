/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-05 08:43:05
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-05 16:22:02
 */
/*
 * @Descripttion: 宇宙无敌加法器
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-05 08:43:05
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-05 10:32:56
 */
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  string decimal, a, b;
  cin >> decimal >> a >> b;
  int aIndex = a.length() - 1, bIndex = b.length() - 1;
  int decimalIndex = decimal.length() - 1;
  vector<int> vi;
  int sum, carry = 0, mod = 0;
  while (aIndex >= 0 && bIndex >= 0)
  {
    mod = decimal[decimalIndex] == '0' ? 10 : (decimal[decimalIndex] - '0');
    sum = (carry + (a[aIndex] - '0') + (b[bIndex] - '0')) % mod;
    carry = (carry + (a[aIndex] - '0') + (b[bIndex] - '0')) / mod;
    vi.push_back(sum);
    aIndex--;
    bIndex--;
    decimalIndex--;
  }
  while (aIndex >= 0)
  {
    mod = decimal[decimalIndex] == '0' ? 10 : (decimal[decimalIndex] - '0');
    sum = (carry + a[aIndex] - '0') % mod;
    carry = (carry + a[aIndex] - '0') / mod;
    vi.push_back(sum);
    aIndex--;
    decimalIndex--;
  }
  while (bIndex >= 0)
  {
    mod = decimal[decimalIndex] == '0' ? 10 : (decimal[decimalIndex] - '0');
    sum = (carry + b[bIndex] - '0') % mod;
    carry = (carry + b[bIndex] - '0') / mod;
    vi.push_back(sum);
    bIndex--;
    decimalIndex--;
  }
  if (carry != 0)
  {
    vi.push_back(carry);
  }
  int index = vi.size() - 1;
  while (index >= 1 && vi[index] == 0)
  {
    index--;
  }
  for (int i = index; i >= 0; i--)
  {
    cout << vi[i];
  }

  return 0;
}