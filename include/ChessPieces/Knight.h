#pragma once

#include "ChessPiece.h"

namespace Chess
{
	class Knight : public ChessPiece
	{
	public:
		Knight(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition);

		bool TryMove(ChessPiecePosition position) override;
	};
}