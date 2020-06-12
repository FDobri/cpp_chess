#include "ChessPieces/Pawn.h"

namespace Chess
{
	Pawn::Pawn(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition) :
		ChessPiece(playerType, pieceType, piecePosition)
	{

	}

	bool Pawn::TryMove(ChessPiecePosition position)
	{
		return false;
	}
}