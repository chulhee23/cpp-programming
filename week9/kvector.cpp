#include <iostream>
#include <cassert>

using namespace std;

class Kvector
{
  int *m;
  int len;

public:
  Kvector(int = 0, int = 0);
  Kvector(const Kvector &v);
  ~Kvector();
  
  // =, ==, !=, [], <<
  Kvector &operator=(const Kvector &v);
  bool operator==(const Kvector &v);
  bool operator!=(const Kvector &v);
  friend ostream &operator<<(ostream &os, const Kvector &v);
  int &operator[](int idx);


  void print();
  void clear();
  int size();
};

// constructor
Kvector::Kvector(int sz, int value) : len(sz) {
  if (!sz) m = nullptr;
  m = new int[sz];
  for (int i = 0; i < sz; i++)
  {
    m[i] = value;
  }
  cout << this << " : Kvector(int, int)" << endl;
}

// deep copy constructor
Kvector::Kvector(const Kvector &v) {
  cout << this << " : Kvector(Kvector&)" << endl;
  m = new int[v.len];
  len = v.len;
  int val = v.m[0];

  for (int i = 0; i < v.len; i++)
    m[i] = val;
}

Kvector::~Kvector(){
  cout << this << " : ~Kvector() " << endl;
  // 동적 할당한 m delete 해서 메모리 누수 제거
  delete[] m;
}

// (1) =
Kvector& Kvector::operator=(const Kvector& v){
  len = v.len;
  if(!len){
    m = nullptr;
  }
  m = new int[len];
  for(int i = 0; i < len; i++){
    m[i] = v.m[i];
  }
  return *this;
}

bool Kvector::operator==(const Kvector& v){
  if(len != v.len){
    return false;
  }
  for(int i = 0; i < len; i++){
    if(m[i] != v.m[i]){
      return false;
    }
  }
  return true;
}

bool Kvector::operator!=(const Kvector& v){
  // operator== 사용
  return !(*this == v);
}


int& Kvector::operator[](int idx){
  assert(idx < 0 || idx >= len);
  return m[idx];
  // if(idx >= 0 ){
  // } else {
  //   return m[0];
  // }
}

ostream& operator<<(ostream& os, const Kvector& v){
  for(int i = 0; i < v.len; i++){
    os << v.m[i] << " ";
  }
  return os;
}




void Kvector::print(){
  for (int i = 0; i < len; i++)
  {
    cout << m[i] << " ";
  }
  cout << endl;
}

void Kvector::clear() {
  delete[] m;
  m = NULL;
  len = 0;
}

int Kvector::size()
{
  return len;
}

int main()
{
  Kvector v1(3);
  v1.print();
  Kvector v2(2, 9);
  v2.print();
  Kvector v3(v2);
  v3.print();
  cout << (v1 == v2) << endl;
  cout << (v3 == v2) << endl;
  v3 = v2 = v1;
  cout << v1 << endl;
  cout << v2 << endl;
  cout << v3 << endl;
  cout << (v3 != v2) << endl;
  v1[2] = 2;
  v2[0] = v1[2];
  cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;

  return 0;
}


