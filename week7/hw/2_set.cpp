#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(const vector<int> &vec)
{
  cout << vec.size() << " ";
  for(int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
  cout << endl;
}

int main(int argc, char const *argv[])
{
  // 개수 + 교집합
  // 개수 + 합집합
  // 개수 + 차집합

  vector<int> a;
  vector<int> b;
  int a_n;
  cin >> a_n;
  for(int i = 0; i < a_n; i++){
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }

  int b_n;
  cin >> b_n;
  for(int i = 0; i < b_n; i++){
    int tmp;
    cin >> tmp;
    b.push_back(tmp);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  vector<int> inter_section;
  inter_section.resize(a.size() + b.size());
  vector<int>::iterator inter_iter = set_intersection(a.begin(), a.end(), b.begin(), b.end(), inter_section.begin());
  // 공간 제거
  inter_section.erase(inter_iter, inter_section.end());
  printVec(inter_section);


  vector<int> union_set;
  union_set.resize(a.size() + b.size());
  vector<int>::iterator union_iter = set_union(a.begin(), a.end(), b.begin(), b.end(), union_set.begin());
  // 공간 제거
  union_set.erase(union_iter, union_set.end());
  printVec(union_set);

  
  vector<int> diff_set;
  diff_set.resize(a.size() + b.size());
  vector<int>::iterator diff_iter = set_difference(a.begin(), a.end(), b.begin(), b.end(), diff_set.begin());
  // 공간 제거
  diff_set.erase(diff_iter, diff_set.end());
  printVec(diff_set);


  
  

  return 0;
}
