#include "ChessPieces/Bishop.h"

namespace Chess
{
	Bishop::Bishop(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition) :
		ChessPiece(playerType, pieceType, piecePosition)
	{

	}

	bool Bishop::TryMove(ChessPiecePosition position)
	{
		return false;
	}
}
