// 최대 20자의 name(이름), int형의 id(학번), float 형의 score(점수)로 구성된 STUDENT(학생) 자료 구조를 정의하고
// 최대 50명의 학생 자료를 처리하는 프로그램을 작성하여 아래 작업을 수행하라.

// 1. 5명 이상의 학생 자료를 입력
// 2. 학생 자료를 이름순으로 정렬하여 출력
// 3. 학생 자료를 성적순으로 정렬하여 출력

#include <iostream>
using namespace std;

#define student_size 50
struct Student
{
  string name;
  int id;
  float score;
};

void SortByName(Student *, int);
void SortByScore(Student *, int);

void printStudents(Student *students){
  for (int i = 0; i < student_size; i++)
  {
    cout << "이름 : " << students[i].name << " / 성적 : " << students[i].score << endl;
  }
}

int main(int argc, char const *argv[])
{
  srand((unsigned)time(0));
  Student students[student_size];
  int num = 0;
  cout << "입력하고 싶은 학생의 수 (최소 5, 최대 50)" << endl;
  cin >> num;
  if(num < 5){
    num = 5;
  }
  
  if(num > 50){
    num = 50;
  }

  
  cout << "이름, 학번, 점수를 입력하세요" << endl;
  for (int i = 0; i < num; i++){
    cin >> students[i].name >> students[i].id >> students[i].score;
  }


  for (int i = num; i < student_size - num; i++){
    string first_name[] = {"김", "이", "박", "홍", "백", "연", "강", "하"};
    string last_name[] = {"길동", "아무개", "로버트", "뭉치", "응팔"};
    string name = first_name[i%7] + last_name[i%5];
    students[i].name = name;
    students[i].id = i + 1;
    students[i].score = rand() % 100;
    cout << "이름: " << students[i].name << " / 학번: " << students[i].id << " / 성적: " << students[i].score << endl;
  }


  int instruct;
  do
  {
    cout << "=======" << endl;
    cout << "이름 순 정렬 : 1" << endl;
    cout << "성적 순 정렬 : 2" << endl;
    cin >> instruct;
    switch (instruct)
    {
    case 1:
      cout << "이름 순 정렬";
      SortByName(students, student_size);
      printStudents(students);
      break;
    case 2:
      cout << "성적 순 정렬";
      SortByScore(students, student_size);
      printStudents(students);
      break;
    
    default:
      return 0;
    }
  } while ( instruct != 0);
  
  

  
  return 0;
}

void swap(Student *a, Student *b){
  Student temp;
  temp = *b;
  *b = *a;
  *a = temp;
}

void SortByName(Student *students, int size)
{
  for(int i = 0; i < size; i++)
  {
    for (int j = 0 ; j < size -1 - i; j++)
    {
      if (students[j].name > students[j+1].name)
      {
        swap(&students[j], &students[j+1]);
      }
    }
  }
}
void SortByScore(Student *students, int size)
{
  for(int i = 0; i < size; i++)
  {
    for (int j = 0 ; j < size -1 - i; j++)
    {
      if (students[j].score > students[j+1].score)
      {
        swap(&students[j], &students[j+1]);
      }
    }
  }
}