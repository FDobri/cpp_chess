#pragma once
#include "ChessData/ChessPieceDataRecord.h"
#include "ChessPieces/ChessPiece.h"

namespace Chess
{
	class ChessPieceFactory
	{
	public:
		ChessPiece* CreatePiece(const ChessPieceDataRecord& data);
	};
}