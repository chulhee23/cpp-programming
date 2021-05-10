#include <iostream>

using namespace std;

class Kvector
{
protected:
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
  int &operator[](int idx);
  const int& operator[](int idx) const {return m[idx];}
  friend ostream &operator<<(ostream &os, const Kvector &v);
  void print();
  void clear();
  int size() const;
};
