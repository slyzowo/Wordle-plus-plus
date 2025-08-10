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

int wordLengthSelector(){
  cout << "how many characters would you like in your word?" << '\n' << "[ 0 for default ]" << '\n';
  cin >> characterCount;
  if (characterCount == 0){
    characterCount = 5;
  }
return characterCount;
}

int main(){
  std::string userGuess = "";
  std::string secretWord = "";

  startseq();
  wordLengthSelector();
  chanceSelector();

  std::ifstream wordlistFile("wordlist.txt");

// random number + forloop for line

  while (getline(wordlistFile, secretWord)){
    cout << "Secret Word : " << secretWord << '\n';
  }

// random number gen + get random word from file

  for (int i = chanceCount; i >= 0; i--){
// main gameplay with a multidimensional array

  cout << "Chances to guess : " << i << '\n';
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