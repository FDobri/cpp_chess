#pragma once

namespace Chess
{
	class ChessPiece
	{
	protected:
		virtual bool TryMove(int x, int y) = 0;
	};
}