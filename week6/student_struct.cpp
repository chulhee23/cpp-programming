// 최대 20자의 name(이름), int형의 id(학번), float 형의 score(점수)로 구성된 STUDENT(학생) 자료 구조를 정의하고
// 최대 50명의 학생 자료를 처리하는 프로그램을 작성하여 아래 작업을 수행하라.
// 1. 5명 이상의 학생 자료를 입력
// 2. 학생 자료를 이름순으로 정렬하여 출력
// 3. 학생 자료를 성적순으로 정렬하여 출력

#include <iostream>
using namespace std;

struct Student
{
  string name;
  int id;
  float score;
};

int main(int argc, char const *argv[])
{
  Student students[50];
  srand((unsigned)time(0));

  for (int i = 0; i < 50; i++)
  {
    string first_name[] = {"김", "이", "박", "홍", "백", "연", "강", "하"};
    string last_name[] = {"길동", "아무개", "로버트", "뭉치", "응팔"};
    string name = first_name[i%7] + last_name[i%5];

    students[i].name = name;
    students[i].id = i + 1;
    students[i].score = rand() % 100;

    cout << "이름: " << students[i].name << " / 학번: " << students[i].id << " / 성적: " << students[i].score << endl;
  }
  
  return 0;
}
