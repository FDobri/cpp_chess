#include "ChessData/ChessPieceFactory.h"
#include "ChessPieces/Bishop.h"
#include "ChessPieces/ChessPiece.h"
#include "ChessPieces/King.h"
#include "ChessPieces/Knight.h"
#include "ChessPieces/Pawn.h"
#include "ChessPieces/Queen.h"
#include "ChessPieces/Rook.h"
#include <exception>

namespace Chess
{
	ChessPiece* ChessPieceFactory::CreatePiece(const ChessPieceDataContainer& data)
	{
		switch (data.type)
		{
		case PieceType::Bishop:
		{
			return new Bishop(data.player, data.type, data.position);
			break;
		}
		case PieceType::King:
		{
			return new King(data.player, data.type, data.position);
			break;
		}
		case PieceType::Knight:
		{
			return new Knight(data.player, data.type, data.position);
		}
		case PieceType::Pawn:
		{
			return new Pawn(data.player, data.type, data.position);
		}
		case PieceType::Queen:
		{
			return new Queen(data.player, data.type, data.position);
		}
		case PieceType::Rook:
		{
			return new Rook(data.player, data.type, data.position);
		}
		default:
			throw std::exception("Invalid Chess Piece Creation.");
			break;
		}
		return nullptr;
	}
}