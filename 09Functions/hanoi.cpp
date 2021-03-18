// 정수 삼각형
#include <iostream>
using namespace std;

int cnt = 0;
void moveHanoi(char a, char b, char c, int n);

int main()
{
  int n;

  cout << "A, B, C 탑. A에서 C로 이동! " << endl;
  cout << "하노이 탑에서 옮기려는 원반 수는? " << endl;
  cin >> n;

  moveHanoi('A', 'B', 'C', n);

  return 0;
}

void moveHanoi(char from, char tmp, char to, int n)
{

  if (n == 1){
    cnt++;
    cout << cnt << ": 말뚝 " << from << " -> " << to << "로 원반 1 이동" << endl;
    
  } else {
    moveHanoi(from, to, tmp, n-1);
    cnt++;
    cout << cnt << ": 말뚝 " << from << " -> " << to << "로 원반" << n << " 이동" << endl;
    moveHanoi(tmp, from, to, n-1);
    cout << endl;
  }

}