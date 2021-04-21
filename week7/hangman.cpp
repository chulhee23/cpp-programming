#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
  
  string answer = "program";
  string current = "-------";
  string guess;
  vector<string> guessed;

  while (answer != current)
  {
    cout << "current state : " << current << endl;

    cout << "guess a letter : ";
    cin >> guess;

    if(find(guessed.begin(), guessed.end(), guess) != guessed.end()){
      cout << guess << " was guessed previously!!" << endl;
      continue;
    } else {
      guessed.push_back(guess);
      for(int i = 0; i < answer.size(); i++)
      {
        if(answer[i] == guess[0])
        {
          current[i] = guess[0];
        }
      }

    }
    cout << endl;


  }

  cout << "answer is " << current << endl;




  return 0;
}
