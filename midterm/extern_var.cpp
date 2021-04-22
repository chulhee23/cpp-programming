#include <iostream> 
using namespace std;

extern int x; // = 1 처럼 사용 불가. extern 저장 유형 지정자는 컴파일러에게 변수가 다른 곳에서 선언 되었음을 알린다.
int main(int argc, char const *argv[])
{
  cout << x; // 123 출력
}

int x = 123;