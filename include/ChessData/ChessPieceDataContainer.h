#pragma once

namespace Chess
{
	struct ChessPiecePosition
	{
		ChessPiecePosition() :
			letter('A'),
			number(1)
		{

		}

		ChessPiecePosition(char let, int num) :
			letter(let),
			number(num)
		{

		}

		ChessPiecePosition(const ChessPiecePosition& other)
		{
			this->letter = other.letter;
			this->number = other.number;
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

	struct ChessPieceDataContainer
	{
		ChessPieceDataContainer(PlayerType player, PieceType type, ChessPiecePosition position) :
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