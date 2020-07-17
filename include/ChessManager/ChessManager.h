#pragma once

#include "ChessData/ChessData.h"
#include "ChessData/ChessPieceFactory.h"
#include "ChessPieces/ChessPiece.h"
#include "ChessBoard/ChessBoard.h"
#include <vector>

namespace Chess
{
	class ChessManager
	{
	public:
		ChessManager(ChessData& data, ChessPieceFactory& factory, ChessBoard& chessBoard);

		void Init();

	private:
		ChessData& _chessData;
		ChessPieceFactory& _chessPieceFactory;
		ChessBoard& _chessBoard;
	};
}