#include <iostream>
#include <vector>

void greet() {
  std::cout << "Hello! Welcome to Tic-Tac-Toe!\n";
  std::cout << "The goal of this game is to get three of your symbol in a row.\n";
  std::cout << "You can pick squares by typing TL for top left, MM for middle middle, and BR for bottom right. Combining these characters will get your symbol to any square on the board!\n";
  std::cout << "Player 1 will be X's and Player 2 will be O's.\n";
  std::cout << "Good luck!\n";
}

//board drawer
void board(std::vector<char> sym) {
  std::cout << sym[0] << "|" << sym[1] << "|" << sym[2] << "\n";
  std::cout << "-----\n";
  std::cout << sym[3] << "|" << sym[4] << "|" << sym[5] << "\n";
  std::cout << "-----\n";
  std::cout << sym[6] << "|" << sym[7] << "|" << sym[8] << "\n";
}

int placer(std::string pla) {
  int foo = 0;
  if (pla[0] == 'T') {
  } else if (pla[0] == 'M') {
    foo += 3;
  } else if (pla[0] == 'B') {
    foo += 6;
  }
  if (pla[1] == 'L') {
  } else if (pla[1] == 'M') {
    foo += 1;
  } else if (pla[1] == 'R') {
    foo += 2;
  }
  return foo;
}

//win condition checker
bool winCheck(std::vector<char> sym) {
  if (sym[0] == 'x' && sym[1] == 'x' && sym[2] == 'x'
      || sym[3] == 'x' && sym[4] == 'x' && sym[5] == 'x'
      || sym[6] == 'x' && sym[7] == 'x' && sym[8] == 'x'
      || sym[0] == 'x' && sym[3] == 'x' && sym[6] == 'x'
      || sym[1] == 'x' && sym[4] == 'x' && sym[7] == 'x'
      || sym[2] == 'x' && sym[5] == 'x' && sym[8] == 'x'
      || sym[0] == 'x' && sym[4] == 'x' && sym[8] == 'x'
      || sym[2] == 'x' && sym[4] == 'x' && sym[6] == 'x') 
  {
    std::cout << "Player 1 has won!\n";
    return true;
  } else if (sym[0] == 'O' && sym[1] == 'O' && sym[2] == 'O'
      || sym[3] == 'O' && sym[4] == 'O' && sym[5] == 'O'
      || sym[6] == 'O' && sym[7] == 'O' && sym[8] == 'O'
      || sym[0] == 'O' && sym[3] == 'O' && sym[6] == 'O'
      || sym[1] == 'O' && sym[4] == 'O' && sym[7] == 'O'
      || sym[2] == 'O' && sym[5] == 'O' && sym[8] == 'O'
      || sym[0] == 'O' && sym[4] == 'O' && sym[8] == 'O'
      || sym[2] == 'O' && sym[4] == 'O' && sym[6] == 'O') 
  {
    std::cout << "Player 2 has won!\n";
    return true;
  } else {
    return 0;
  }
}