#include <iostream>
#include "Kvector.h"

using namespace std;

#define N 3

class Avector : public Kvector
{
  char table[N];

public:
  Avector(int sz = 0, int v = 0, const char *t = "abc") : Kvector(sz, v)
  {
    cout << this << " : Avector(" << sz << "," << v << "," << t << ")\n";
    for (int i = 0; i < N; i++)
      table[i] = t[i];
  }
  void setTable(const char *t)
  {
    for (int i = 0; i < N; i++)
      table[i] = t[i];
  }
  friend ostream &operator<<(ostream &os, const Avector &v);
};

ostream &operator<<(ostream &os, const Avector &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    os << v.table[v.m[i] % 3] << " ";
  }
  return os;
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    cout << "usage : ./avector pqr\n";
    return 1;
  }
  Avector v1(3);
  v1.print();
  Avector v2(2, 1, "xyz");
  v2.print();
  Avector v3(v2);
  v3.print();
  cout << "v1 == v2 " << (v1 == v2) << endl;
  cout << "v3 == v2 " << (v3 == v2) << endl;
  v3 = v2 = v1;
  cout << "v1 : " << v1 << endl;
  v1.print();
  cout << "v2 : " << v2 << endl;
  v2.print();
  cout << "v3 : " << v3 << endl;
  v3.print();
  cout << "v3 != v2 " << (v3 != v2) << endl;
  v1[2] = 2;
  v2[0] = v1[2];
  v1.setTable(argv[1]);
  cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;
  v1.print();
  v2.print();
  v3.print();
}