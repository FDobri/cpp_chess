#include "ChessBoard/ChessBoardField.h"

namespace Chess
{
	ChessBoardField::ChessBoardField() :
		_chessPiece(nullptr)
	{

	}

	ChessBoardField::ChessBoardField(ChessPiecePosition position) :
		_position(position),
		_chessPiece(nullptr)
	{

	}

	void ChessBoardField::SetChessPiece(ChessPiece* chessPiece)
	{
		_chessPiece = chessPiece;
	}
}