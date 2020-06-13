#include "ChessBoard/ChessBoardField.h"

namespace Chess
{
	ChessBoardField::ChessBoardField(char letter, int number) :
		_letter(letter),
		_number(number),
		_chessPiece(nullptr)
	{

	}

	void ChessBoardField::SetChessPiece(ChessPiece* chessPiece)
	{
		_chessPiece = chessPiece;
	}
}