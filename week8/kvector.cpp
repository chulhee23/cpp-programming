#include <iostream>

using namespace std;

class KVector
{
  int *m;
  int len;

public:
  KVector(int = 0, int = 0);
  KVector(const KVector &v);
  ~KVector();
  void print();
  void clear();
  int size();
};

// constructor
KVector::KVector(int a, int b) : len(a) {
  cout << this << " : KVector(int)" << endl;
  m = new int[a];
  for (int i = 0; i < a; i++)
  {
    m[i] = b;
  }
}

// deep copy constructor
KVector::KVector(const KVector &v) {
  cout << this << " : KVector(KVector&)" << endl;
  m = new int[v.len];
  len = v.len;
  int val = v.m[0];

  for (int i = 0; i < v.len; i++)
    m[i] = val;
}

KVector::~KVector(){
  cout << this << " : ~KVector() " << endl;
  // 동적 할당한 m delete 해서 메모리 누수 제거
  delete[] m;
}

void KVector::print(){
  for (int i = 0; i < len; i++)
  {
    cout << m[i] << " ";
  }
  cout << endl;
}

void KVector::clear() {
  delete[] m;
  m = NULL;
  len = 0;
}

int KVector::size()
{
  return len;
}

int main()
{
  KVector v1(3);
  v1.print();

  KVector v2(2, 9);
  v2.print();

  KVector v3(v2);
  v3.print();

  v2.clear();
  v2.print();
  v3.print();
}


