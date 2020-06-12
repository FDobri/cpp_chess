#pragma once

#include "ChessPiece.h"

namespace Chess
{
	class Queen : public ChessPiece
	{
	public:
		Queen(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition);

		bool TryMove(ChessPiecePosition position) override;
	};
}