#pragma once

#include "ChessData/ChessData.h"
#include "ChessData/ChessPieceFactory.h"
#include "ChessPieces/ChessPiece.h"
#include <vector>

namespace Chess
{
	class ChessManager
	{
	public:
		ChessManager(ChessData& data, ChessPieceFactory& factory);

		void Init();

	private:
		void CreateAllPieces();

	private:
		ChessData& _chessData;
		ChessPieceFactory& _chessPieceFactory;

	public:
		std::vector<ChessPiece*> whiteChessPieces;
		std::vector<ChessPiece*> blackChessPieces;
	};
}