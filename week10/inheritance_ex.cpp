#include <iostream>
#include <string>

using namespace std;


class Employee{
  int rrn;
protected:
  int salary;
public:
  string name;
  void setSalary(int salary);
  int getSalary();

};

void Employee::setSalary(int s){
  this->salary = s;
}
int Employee::getSalary(){
  return salary;
}

class Manager:public Employee{
  int bonus;
public:
  Manager(int b=0):bonus(b){}
  void modify(int s, int b);
  void display();
};

void Manager::modify(int s, int b){
  salary = s;
  bonus = b;
}
void Manager::display(){
  cout << "봉급: " << salary << " 보너스: " << bonus << endl;
  // cout << rrn; //impossible. private member
}

class Car{
  public:
  int getHP(){return 100;}
};
class SportsCar: public Car{
  public: 
  int getHP(){return 300;}
};


int main(int argc, char const *argv[]){
  Manager m;
  m.setSalary(2000);
  m.display();
  m.modify(1320, 1000);
  m.display();

  SportsCar c;
  cout << c.getHP() << endl;
  cout << c.Car::getHP() << endl;
}