#include "ChessPieces/Rook.h"

namespace Chess
{
	Rook::Rook(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition) :
		ChessPiece(playerType, pieceType, piecePosition)
	{

	}

	bool Rook::TryMove(ChessPiecePosition position)
	{
		return false;
	}
}