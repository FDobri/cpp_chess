#pragma once

#include "ChessData/ChessPieceDataRecord.h"

namespace Chess
{
	class ChessPiece
	{
	protected:
		ChessPiece(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition);
	
	protected:
		virtual bool TryMove(ChessPiecePosition position) = 0;

	protected:
		PlayerType _playerType;
		PieceType _pieceType;
		ChessPiecePosition _piecePosition;
	};
}