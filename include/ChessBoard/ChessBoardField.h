#pragma once

#include "ChessPieces/ChessPiece.h"

namespace Chess
{
	class ChessBoardField
	{
	public:
		ChessBoardField(char letter, int number);

		void SetChessPiece(ChessPiece* chessPiece);

	private:
		char _letter;
		int _number;
		bool _isOccupied = false;
		ChessPiece* _chessPiece;
	};
}