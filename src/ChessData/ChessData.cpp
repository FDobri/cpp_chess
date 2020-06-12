#include "ChessData/ChessData.h"

namespace Chess
{
	void ChessData::InitData()
	{
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('A', 2)));
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('B', 2)));
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('C', 2)));
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('D', 2)));
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('E', 2)));
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('F', 2)));
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('G', 2)));
		_database.push_back(ChessPieceDataRecord(PlayerType::White, PieceType::Pawn, ChessPiecePosition('H', 2)));

		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('A', 7)));
		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('B', 7)));
		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('C', 7)));
		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('D', 7)));
		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('E', 7)));
		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('F', 7)));
		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('G', 7)));
		_database.push_back(ChessPieceDataRecord(PlayerType::Black, PieceType::Pawn, ChessPiecePosition('H', 7)));
	}

	const std::vector<ChessPieceDataRecord>& ChessData::GetChessPieceData() const
	{
		return _database;
	}
}