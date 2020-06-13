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
		InitChessBoard();
	}

	void ChessManager::CreateAllPieces()
	{
		const std::vector<ChessPieceDataContainer>& dataRecords = _chessData.GetChessPieceData();
		for (auto& chessPieceData : dataRecords)
		{
			activeChessPieces.push_back(_chessPieceFactory.CreatePiece(chessPieceData));
		}
	}

	void ChessManager::InitChessBoard()
	{
		_chessBoard.InitChessBoard();
		for (ChessBoardField field : _chessBoard.chessBoardFiels)
		{

		}
	}
}