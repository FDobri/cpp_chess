#include "ChessPieces/Queen.h"

namespace Chess
{
	Queen::Queen(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition) :
		ChessPiece(playerType, pieceType, piecePosition)
	{

	}

	bool Queen::TryMove(ChessPiecePosition position)
	{
		return false;
	}
}