#include "ChessPieces/ChessPiece.h"

namespace Chess
{
	ChessPiece::ChessPiece(PlayerType playerType, PieceType pieceType, ChessPiecePosition piecePosition) :
		_playerType(playerType),
		_pieceType(pieceType),
		_piecePosition(piecePosition)
	{

	}
}