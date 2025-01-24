#include "ChessEngine/ChessEngine.hpp"
#include "ChessLib/ChessLib.hpp"
#include <GLFW/glfw3.h>

int main() {
  ChessEngine engine = ChessEngine();
  ChessLib chess = ChessLib();
  chess.PrintBoard();
}
