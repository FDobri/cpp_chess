#pragma once

#include "ChessData/ChessPieceDataContainer.h"
#include <vector>

namespace Chess
{
	class ChessData
	{
	public:
		void InitData();
		const std::vector<ChessPieceDataContainer>& GetChessPieceData() const;

	private:
		std::vector<ChessPieceDataContainer> _database;
	};
}