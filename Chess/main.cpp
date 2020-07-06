#include "ChessManager/ChessManager.h"
#include <iostream>

int main()
{
	Chess::ChessData data;
	Chess::ChessPieceFactory factory;
	Chess::ChessBoard board;
	Chess::ChessManager chessManager(data, factory, board);
	chessManager.Init();

	int x;
	std::cin >> x;
	return 1;
}