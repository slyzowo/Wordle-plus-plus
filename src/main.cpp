#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::cin;

int chanceCount;
int characterCount;

void startseq(){
  std::cout << " Welcome to wordle but better, wordle++" << '\n';
}

int chanceSelector(){
  cout << "how many chances would you like?" << '\n' << "[ 0 for default ]" << '\n';
  cin >> chanceCount;
  if (chanceCount == 0){
    chanceCount = 5;
  }
return chanceCount;
}

int characterSelector(){
  cout << "how many characters would you like in your word?" << '\n' << "[ 0 for default ]" << '\n';
  cin >> characterCount;
  if (characterCount == 0){
    characterCount = 5;
  }
return characterCount;
}

int main(){
  std::string userGuess = "";
  std::string randword = "";

  startseq();
  characterSelector();
  chanceSelector();

/*
main game
  gets random word from word.txt file
  compares the strings
*/

// random number gen + get random word from file

for (int i = chanceCount; i >= 0; i--){
// main gameplay with a multidimensional array

  cout << "Chances to guess : " << i << '\n';
  cin >> userGuess;

// compare secret word to users word and return results

}

cout << "Game Over!"<< '\n';


/*
"death" seq
  ends game, asks to play again
*/

return 0;
}