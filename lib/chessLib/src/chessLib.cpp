#include <iostream>

#include "chessLib/chessLib.hpp"

ChessLib::ChessLib() { std::cout << "Initialising Chess Library" << std::endl; }

ChessLib::~ChessLib() { std::cout << "Destructing Chess Library" << std::endl; }

void ChessLib::PrintBoard() { std::cout << "Printing Chess Board" << std::endl; }
