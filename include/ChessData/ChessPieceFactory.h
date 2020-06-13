#pragma once
#include "ChessData/ChessPieceDataContainer.h"
#include "ChessPieces/ChessPiece.h"

namespace Chess
{
	class ChessPieceFactory
	{
	public:
		ChessPiece* CreatePiece(const ChessPieceDataContainer& data);
	};
}