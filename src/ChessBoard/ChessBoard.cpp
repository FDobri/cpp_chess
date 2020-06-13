#include "ChessBoard/ChessBoard.h"

namespace Chess
{
	void ChessBoard::InitChessBoard()
	{
		for (char letter : CHARS_VECTOR)
		{
			for (int number : NUMBERS_VECTOR)
			{
				chessBoardFiels.push_back(ChessBoardField(letter, number));
			}
		}
	}
}