#pragma once

#include "ChessBoardField.h"
#include <vector>

namespace Chess
{
	class ChessBoard
	{
	public:
		void InitChessBoard();
	
	public:
		std::vector<ChessBoardField> chessBoardFiels;

	private:
		const std::vector<char> CHARS_VECTOR = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
		const std::vector<int> NUMBERS_VECTOR = { 1, 2, 3, 4, 5, 6, 7, 8 };
	};
}