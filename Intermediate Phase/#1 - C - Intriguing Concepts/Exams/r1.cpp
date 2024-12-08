#include <iostream>
#include "Board.h"

using namespace std;

int main(int argc, char* argv[]){
    Point player(2,1);
    Point buck(4,3);
    int n = 6;

    if(argc > 1){
        n = atoi(argv[1]);

        if(argc == 6){
            player.x = atoi(argv[2]);
            player.y = atoi(argv[3]);
            buck.x   = atoi(argv[4]);
            buck.y   = atoi(argv[5]);
        } else if(argc != 2) {
            cout << "Number of input arguments undefined, exiting\n";
            exit(EXIT_FAILURE);
        } else if(n < 4){
            cout << "Board size must be at least 4 if positions are not specified.\n";
            exit(EXIT_FAILURE);
        }
    }

    Board b(n, player, buck);
    bool moved = false;

    while(!b.is_game_over()){
        char c;
        cin >> c;

        switch (c)
        {
            case 'w':
            case 'W':
                moved = b.move_up();
                break;
            case 's':
            case 'S':
                moved = b.move_down();
                break;
            case 'a':
            case 'A':
                moved = b.move_left();
                break;
            case 'd':
            case 'D':
                moved = b.move_right();
                break;
            default:
                break;
        }

        if(!moved){
            cout << "Can't move that way, try again\n";
        } else {
            b.move_buck();
        }
    }

    cout << "Congratulations! Hit in " << b.move_count << " moves.\n";
}