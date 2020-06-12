#pragma once

namespace Chess
{
	struct ChessPiecePosition
	{
		ChessPiecePosition(char let, int num) :
			letter(let),
			number(num)
		{

		}

		char letter;
		int number;
	};

	enum class PlayerType
	{
		White,
		Black
	};

	enum class PieceType
	{
		Pawn,
		Bishop,
		Knight,
		Rook,
		Queen,
		King
	};

	struct ChessPieceDataRecord
	{
		ChessPieceDataRecord(PlayerType player, PieceType type, ChessPiecePosition position) :
			player(player),
			type(type),
			position(position)
		{

		}

		PlayerType player;
		PieceType type;
		ChessPiecePosition position;
	};
}