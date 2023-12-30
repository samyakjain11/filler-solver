#ifndef GAMEINFO_H
#define GAMEINFO_H

#include <string>

class GameInfo {
public:
    GameInfo(const std::string& opponentColor, const std::string& myColor, int opponentScore, int myScore);
    // Add any methods or additional functionality here

    // Member variables
    std::string opponentColor;
    std::string myColor;
    int opponentScore;
    int myScore;
};

#endif /* GAMEINFO_H */
