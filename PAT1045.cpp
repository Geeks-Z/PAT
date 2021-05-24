/*
 * @Descripttion: 1045 快速排序
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-05-08 20:22:38
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 20:27:20
 */
//主元的位置和排列之后数组中的位置相同，而且是主元之前的最大数(防止543和123中的3都被sort之后当做主元)
//不是主元，所以还需判断，那个数是不是排序前当前位置最大值
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int a[N], b[N], c[N]; //最好的情况，可能每个数都是主元
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a, a + N);
  int count = 0;
  int temp = 0, max = 0;
  for (int i = 0; i < N; i++)
  {
    if (max < b[i])
      max = b[i]; //把最大值保存下来
    if (a[i] == b[i] && a[i] == max)
    { //如果和排序后的相同位置一样，而且是最大值，则确定是主元
      c[count++] = a[i];
    }
  }
  cout << count << endl;
  if (count == 0)
    cout << endl; //如果主元个数是0，空行还是要输出的
  for (int i = 0; i < count; i++)
  {
    if (i != 0)
      cout << " ";
    cout << c[i];
  }
  return 0;
}