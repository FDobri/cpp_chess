#include "ChessData/ChessPieceFactory.h"

namespace Chess
{
	ChessPiece* ChessPieceFactory::CreatePiece(const ChessPieceDataRecord& data)
	{
		switch (data.type)
		{
		//case PieceType::Pawn:
			//return Pawn(data.player, data.position, data.type);
		default:
			//throw except
			break;
		}
		return nullptr;
	}
}