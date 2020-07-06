#pragma once

#include "ChessPieces/ChessPiece.h"

namespace Chess
{
	class ChessBoardField
	{
	public:
		ChessBoardField();

		ChessBoardField(ChessPiecePosition position);

		void SetChessPiece(ChessPiece* chessPiece);

	private:
		ChessPiecePosition _position;
		bool _isOccupied = false;
		ChessPiece* _chessPiece;
	};
}