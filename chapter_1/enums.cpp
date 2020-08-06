#include <iostream>

// // normal ENUM, this is unsafe
// enum PieceType {
//     PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10, PieceTypePon
// };

// STRONG ENUM, this is recommended
enum class PieceType
{
    King = 1,
    Queen,
    Rook = 10,
    Pawn
};

int main()
{
    PieceType piece = PieceType::King;
    if (static_cast<int>(PieceType::Queen) == 2) {
        std::cout << "QUEEN!" << std::endl;
    }
    return 0;
}