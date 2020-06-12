#pragma once

#include "ChessPiece.h"

namespace Chess
{
	class Pawn : public ChessPiece
	{
	public:
		Pawn(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition);

		bool TryMove(ChessPiecePosition position) override;
	};
}