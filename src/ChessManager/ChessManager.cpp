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
		_chessBoard.InitChessBoard();
	}
}