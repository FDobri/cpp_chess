#pragma once

#include "ChessPiece.h"

namespace Chess
{
	class Bishop : public ChessPiece
	{
	public:
		Bishop(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition);

		bool TryMove(ChessPiecePosition position) override;
	};
}