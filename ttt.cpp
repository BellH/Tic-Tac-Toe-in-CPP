#include <iostream>
#include <vector>
#include "ttt.hpp"

int main() {
  //game intro
  greet();

  //array & var creation
  std::vector<char> symbols = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };

  int turns = 0;
  bool p1turn = true;
  bool hasWon = false;

  std::string  place;


  //while someone has won == false && turns <= 9 do:
  while (hasWon == false && turns <= 9) {
    //draw the current board w/ x's and o's
    board(symbols);

    //check for win condition
    if (winCheck(symbols) == true) {
      //if yes has won == true
      hasWon = true;
    } else {
      //player one please take your turn 
      //at the end of the if statement - var turns to player two's turn
      if (p1turn == true) {
        std::cout << "Player 1, please pick a square to place an x.";
        std::cin >> place;
        symbols[placer(place)] = 'x';
        p1turn = false;
      } else {
        std::cout << "Player 2, please pick a square to place an O.";
        std::cin >> place;
        symbols[placer(place)] = 'O';      
        p1turn = true;
      }
    }

    turns++;
  }

//if haswon == false
//sorry it's a draw!

  if (hasWon == false) {
    std::cout << "It's a draw!\n";
  }


}

