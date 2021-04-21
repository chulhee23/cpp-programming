#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
  stack<char> s;
  string c;

  getline(cin, c);

  for(int i =0; i < c.size(); i++){

    if( c[i] == '(' ){
      s.push(c[i]);
    }

    if(c[i] == ')'){
      if (s.size() > 0 && s.top() == '('){
        s.pop();
      } 
      else {
        s.push(c[i]);
      }
    } 

    
  }


  if (s.size() == 0){
    cout << 1;
  } else {
    cout << 0;
  }
}