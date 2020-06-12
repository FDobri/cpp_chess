#include "ChessManager/ChessManager.h"

namespace Chess
{
	ChessManager::ChessManager(ChessData& data, ChessPieceFactory& factory) :
		_chessData(data),
		_chessPieceFactory(factory)
	{

	}

	void ChessManager::Init()
	{
		_chessData.InitData();
		CreateAllPieces();
	}

	void ChessManager::CreateAllPieces()
	{
		const std::vector<ChessPieceDataRecord>& dataRecords = _chessData.GetChessPieceData();
		for (auto& chessPieceData : dataRecords)
		{
			if (chessPieceData.player == Player::Black)
			{
				blackChessPieces.push_back(_chessPieceFactory.CreatePiece(chessPieceData));
			}
			else
			{
				whiteChessPieces.push_back(_chessPieceFactory.CreatePiece(chessPieceData));
			}
		}
	}
}