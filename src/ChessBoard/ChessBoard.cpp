#include "ChessBoard/ChessBoard.h"
#include "ChessBoard/ChessBoardField.h"

namespace Chess
{
	void ChessBoard::InitChessBoard()
	{
		for (char letter : CHARS_VECTOR)
		{
			for (int number : NUMBERS_VECTOR)
			{
				ChessPiecePosition position = ChessPiecePosition(letter, number);
				chessBoardFields.emplace(position, std::make_shared<ChessBoardField>(position));
				int x = 0;
			}
		}
	}
}