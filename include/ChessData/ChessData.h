#pragma once

#include "ChessData/ChessPieceDataRecord.h"
#include <vector>

namespace Chess
{
	class ChessData
	{
	public:
		void InitData();
		const std::vector<ChessPieceDataRecord>& GetChessPieceData() const;

	private:
		std::vector<ChessPieceDataRecord> _database;
	};
}