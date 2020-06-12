#include "ChessManager/ChessManager.h"
#include <iostream>

int main()
{
	Chess::ChessData data;
	Chess::ChessPieceFactory factory;
	Chess::ChessManager chessManager(data, factory);
	chessManager.Init();

	int x;
	std::cin >> x;
	return 1;
}