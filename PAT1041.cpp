/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: Geeks_Z
 * @Date: 2021-04-30 20:07:26
 * @LastEditors: Geeks_Z
 * @LastEditTime: 2021-04-30 20:18:35
 */
#include <cstdio>
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
}