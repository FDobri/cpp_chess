#include "ChessManager/ChessManager.h"

namespace Chess
{
	ChessManager::ChessManager(ChessData& data, ChessPieceFactory& factory, ChessBoard& chessBoard) :
		_chessData(data),
		_chessPieceFactory(factory),
		_chessBoard(chessBoard)
	{

	}

	void ChessManager::Init()
	{
		_chessData.InitData();
		CreateAllPieces();
		InitChessBoardPieces();
	}

	void ChessManager::CreateAllPieces()
	{
		const std::vector<ChessPieceDataContainer>& dataRecords = _chessData.GetChessPieceData();
		for (auto& chessPieceData : dataRecords)
		{
			activeChessPieces.push_back(_chessPieceFactory.CreatePiece(chessPieceData));
		}
	}

	void ChessManager::InitChessBoardPieces()
	{
		_chessBoard.InitChessBoard();
		// for numbers 1 to 8
			// for letters A to whatever
				// fill chess board map with empty fields
		// assign hardcoded pawns onto the fields
	}
}