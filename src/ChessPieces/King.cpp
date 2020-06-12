#include "ChessPieces/King.h"

namespace Chess
{
	King::King(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition) :
		ChessPiece(playerType, pieceType, piecePosition)
	{

	}

	bool King::TryMove(ChessPiecePosition position)
	{
		return false;
	}
}