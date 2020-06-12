#include "ChessPieces/Knight.h"

namespace Chess
{
	Knight::Knight(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition) :
		ChessPiece(playerType, pieceType, piecePosition)
	{

	}

	bool Knight::TryMove(ChessPiecePosition position)
	{
		return false;
	}
}