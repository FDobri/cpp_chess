#include "ChessBoard/ChessBoard.h"

namespace Chess
{
	void ChessBoard::InitChessBoard()
	{
		for (char letter : CHARS_VECTOR)
		{
			for (int number : NUMBERS_VECTOR)
			{
				ChessPiecePosition position(letter, number);
				_chessBoard.push_back(ChessBoardField(position));
			}
		}
	}
}