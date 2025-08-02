#include <iostream>
#include <fstream>
using std::cout;
using std::cin;

void startseq(){
  std::cout << " Welcome to wordle but better, wordle++" << '\n';
}

int main(){

  int chanceCount = 0;
  int characterCount = 0;

  startseq();
  cout << "how many characters would you like in your word?" << '\n' << "0 for default" << '\n';
  cin >> characterCount;
  if (characterCount == 0){
    characterCount = 5;
  }

  cout << "how many chances would you like?" << '\n' << "0 for default" << '\n';
  cin >> chanceCount;
  if (chanceCount == 0){
    chanceCount = 5;
  }


/*
main game
  gets random word from word.txt file
  for loop of guesses 
*/

for (int i = chanceCount; i >= 0; i--){
  cout << "Chances to guess : " << i << '\n';
}

cout << "Game Over!"<< '\n';


/*
"death" seq
  ends game, asks to play again
*/

return 0;
}