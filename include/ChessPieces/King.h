#pragma once

#include "ChessPiece.h"

namespace Chess
{
	class King : public ChessPiece
	{
	public:
		King(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition);

		bool TryMove(ChessPiecePosition position) override;
	};
}