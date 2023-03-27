# Konik-szachowy-January-2021
## Task
Finding a way of knight on the chessboard n*n, which visits every chequer exactly once.

# Program description
Input: integer N
Output: path of a knight on the chessboard N x N, which visits every chequer exactly once

Declaration of essential variables, where N stands for dimention of the chessboard N x N, the array h will be the chessboard, and the arrays a,b keep differences of coordinates.

The function 'print' of void type prints the chessboard in the visual way.

The function 'jump' of integer type is a key function for the programme. Local variables pos_x, pos_y of integer type are declared, they will be used for marking coordinates of the next chequer on the chessboard. In every attempt of making a move, the variable 'counter' of integer type will be increased by 1. This variable will help in remembering the number of visited chequers so far. This number will be saved in h array. The variables x, y will be used for identifying the current position of the knight. If the knight visited all chequers on the chessboard, the function returns TRUE. Otherwise, it starts choosing new candidates. To set the coordinates of the next chequer on the chessboard depending on x and y, the function will add the differences of coordinates kept in a, b arrays. If coordinates of the next chequer on the chessboard don't go beyond the chessboard and weren't visited by knight before, the knight makes a move. If the move is possible, the function returns TRUE, otherwise the candidate is being deleted from the partial solution and the function returns FALSE. 

int try to make the next move
{
    increase by 1 the number of the next potential move;
    save the potential move in the array;
    if (knight visited all chequers on the chessboard, N*N moves were made)
        return true;
    start choosing candidates
    {
        choose the potential next chequer;
        if (the potential chequer can be chosen)
            if (the move is possible to be made)
            {
                return true;
            }
        }
    }
    delete the candidate from the partial solution;
    return false;
}

The possible moves of the knight on the chessboard are defined in the main function. The h array is filled with 0s, only the start position of the knight is marked by 1. If the procedure 'jump' returns TRUE, the programme induces the function 'print(h)'. Otherwise the programme prints the message "There is no solution!".
