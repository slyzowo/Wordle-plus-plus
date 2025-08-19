#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::cin;
using std::string;
using std::ifstream;

int chanceCount;
int characterCount;

void startseq(){
  cout << " Welcome to wordle but better, wordle++" << '\n' << "[ please type in UPPERcase ]" << '\n' << '\n';
}

int chanceSelector(){
  cout << "how many chances would you like?" << '\n' << "[ 0 for default ]" << '\n' << '\n';
  cin >> chanceCount;
  if (chanceCount == 0){
    chanceCount = 5;
  }
return chanceCount;
}

int wordLengthSelector(){
  cout << "how many characters would you like in your word?" << '\n' << "[ 0 for default ]" << '\n' << '\n';
  cin >> characterCount;
  if (characterCount == 0){
    characterCount = 5;
  }
return characterCount;
}

int main(){
  string userGuess = "";
  string secretWord = "";
  int randnum;

  startseq();
  wordLengthSelector();
  chanceSelector();

  ifstream file("wordlist.txt");

  srand(time(0));
  int target = rand() % 5662 + 1;

    for (int i = 1; i <= target; i++) {
      getline(file, secretWord);
    }

  for (int i = chanceCount; i >= 0; i--){
// main gameplay with a multidimensional array

  cout << "Chances to guess : " << i << '\n';
  cout << "DEBUG secret word : " << secretWord << '\n';
  cin >> userGuess;

  if (i == 0){
    cout << "Game Over!"<< '\n';
  }

  else if(userGuess != secretWord){
    continue;
  }

  else if (userGuess == secretWord){
    cout << "You Win!"<< '\n';
    break;
  }
}

return 0;
}