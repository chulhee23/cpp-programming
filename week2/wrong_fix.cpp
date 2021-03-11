#include <iostream>

int main()
{
   int a, b, c, sum;
   float d, e;

   a = 12;
   b = 5678;
   c = 123456;
   sum = a + b + c;
   std::cout << a << b << c;
   std::cout <<  sum;
   
}


// 1. namespace 오류
// 추가 학습: namespace를 글로벌하게 사용하는 것은 다른 cpp 파일과 충돌할 수 있다.
// 출처 : https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice

// 2. ; 로 라인 종료 선언 안함 오류


// 원본
// #include <iostream>

// int Main();
// {
//   short a, b, c, sum;
//   float d, e

//                a = 12;
//   b = 5678;
//   c = 123456;
//   sum = a + b + c cout << a << b << c;
//   std::out << sum
// }
