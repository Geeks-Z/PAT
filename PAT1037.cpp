/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 11:03:45
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-30 11:50:01
 */
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  int payG, payS, payK;
  scanf("%d.%d.%d", &payG, &payS, &payK);
  int accountG, accountS, accountK;
  scanf("%d.%d.%d", &accountG, &accountS, &accountK);
  //交换大小
  if (payG > accountG || (payG == accountG && payS > accountS) || (payG == accountG && payS == accountS && payK > accountK))
  {
    swap(payG, accountG);
    swap(payS, accountS);
    swap(payK, accountK);
    cout << '-';
  }

  int restG, restS, restK;
  if (accountK - payK < 0)
  {
    accountK += 29;
    accountS--;
  }
  restK = accountK - payK;
  if (accountS - payS < 0)
  {
    accountS += 17;
    accountG--;
  }
  restS = accountS - payS;
  restG = accountG - payG;
  cout << restG << '.' << restS << '.' << restK;
  return 0;
}