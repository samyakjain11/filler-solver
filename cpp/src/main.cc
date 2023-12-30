#include "GameInfo.h"
#include "BacktrackingSolver.h"

int main() {
    // Create an instance of GameInfo
    GameInfo game("red", "blue", 10, 15);

    // Use BacktrackingSolver to solve
    BacktrackingSolver::solve(game);

    return 0;
}
