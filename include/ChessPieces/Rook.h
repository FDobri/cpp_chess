#pragma once

#include "ChessPiece.h"

namespace Chess
{
	class Rook : public ChessPiece
	{
	public:
		Rook(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition);

		bool TryMove(ChessPiecePosition position) override;
	};
}