#include "chessEngine/chessEngine.hpp"
#include "chessLib/chessLib.hpp"
#include "window.hpp"

int main() {
    ChessEngine engine = ChessEngine();
    ChessLib chess = ChessLib();
    chess.PrintBoard();
    Window window = Window();
    window.Init("Chess");
    window.Play();
    return 0;
}
