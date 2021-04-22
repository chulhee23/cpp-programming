#include <iostream>

using namespace std;

class Time
{
  static int count;

public:
  static int getCount();
  Time();
  ~Time();
};

int Time::count = 0;

Time::Time()
{
  count += 1;
  cout << "Creating: " << count << endl;
}

Time::~Time()
{
  count -= 1;
  cout << "Deleting: " << count << endl;
}

int main()
{
  Time t;
  Time t2;
  Time t3;
  Time t4;
}
