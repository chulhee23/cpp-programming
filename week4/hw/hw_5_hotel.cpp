#include <iostream>
using namespace std;


int main()
{
  int h, w, n;

  cin >> h >> w >> n;

  n--;
  int room_num;
  room_num = n / h;
  room_num++;
  
  int floor;
  floor = n % h;
  floor++;

  
  if (room_num < 10)
  {
    cout << floor << "0" << room_num;
  }
  else
  {
    cout << floor << room_num;

  }
} 
