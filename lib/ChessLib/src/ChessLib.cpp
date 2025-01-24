#include "ChessLib/ChessLib.hpp"
#include <iostream>

ChessLib::ChessLib() { std::cout << "Initialising Chess Library" << std::endl; }

ChessLib::~ChessLib() { std::cout << "Destructing Chess Library" << std::endl; }

void ChessLib::PrintBoard() {
  std::cout << "Printing Chess Board" << std::endl;
}
