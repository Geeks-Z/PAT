/*
 * @Descripttion: 考试座位号
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 20:07:26
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-05-08 20:01:07
 */
/* #include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct stu
{
  string id;
  int testId;
  int examId;
};

int main()
{
  // freopen("input.txt", "r", stdin);
  vector<stu> vi;
  int count;
  scanf("%d", &count);
  string id;
  stu temp;
  int testId, examId;
  for (int i = 0; i < count; i++)
  {
    cin >> id >> testId >> examId;
    temp.id = id;
    temp.testId = testId;
    temp.examId = examId;
    vi.push_back(temp);
  }
  int search;
  scanf("%d", &search);
  for (int i = 0; i < search; i++)
  {
    cin >> testId;
    int index = 0;
    while (vi[index].testId != testId)
    {
      index++;
    }
    cout << vi[index].id << ' ' << vi[index].examId << endl;
  }

  return 0;
} */

// 参考代码 https://www.liuchuo.net/archives/575
//用字符串二维数组存储 id 考试座位号 数组坐标为试机号
#include <iostream>
using namespace std;
int main()
{
  string stu[1005][2], s1, s2;
  int n, m, t;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> s1 >> t >> s2;
    stu[t][0] = s1;
    stu[t][1] = s2;
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> t;
    cout << stu[t][0] << " " << stu[t][1] << endl;
  }
  return 0;
}