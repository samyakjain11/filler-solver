# filler-solver

## initial thoughts
- we are dealing with a matrix of colors (represented as numbers for simplicity)
- we have to optimize with the ideation that both users will only make perfect moves
- some form of flooding (?)
- each square has potential from previous moves so we must determine best move per square given previous history
- both players start in top right and bottom left corner
- instead of doing backtracking, every square with its own "ideal" history 


## game mechanics to consider
- players can not be the same color -> this means that we have to track the other players current color to make the optimal move
- flooding algorithm to some sense

waht the fuck are we tracking in subproblem???
- i dont think we can dp this, what would the problem divide into??