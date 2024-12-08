#ifndef _BOARD_H
#define _BOARD_H

#include <iostream>
#include <stdlib.h> 

struct Point{
    int x, y;
    
    Point(int _x, int _y) : x(_x), y(_y) {};
};

class Board{
    int n;
    Point player;
    Point buck;

private:
    void draw(){
        
        std::cout << " ";
        for (int i = 0; i < n; i++){
            std::cout << "   " << i;
        }
        std::cout << "  \n  ";
        for (int i = 0; i < n; i++){
            std::cout << "+---";
        }
        std::cout << "+\n";

        for (int i = 0; i < n; i++)
        {
            std::cout << i << " " ;
            for (int j = 0; j < n; j++)
            {
                std::cout << "| " << ( (i == player.x && j == player.y) ? '!' : 
                (i == buck.x && j == buck.y) ? '$' : ' ') << " ";
            }
            std::cout << "|" << "\n  ";
            for (int i = 0; i < n; i++){
                std::cout << "+---";
            }
            std::cout << "+\n";
        }
    }

public:
    int move_count = 0;

    Board(int size, Point player, Point buck) : n(size), player(player), buck(buck) {
        draw();
    }

    bool is_game_over(){
        return (player.x == buck.x) && (player.y == buck.y);
    }

    bool move_up(){
        if(player.x > 0){
            player.x -= 1;
            move_count++;
            return true;
        }
        return false;
    }

    bool move_down(){
        if(player.x < n){
            player.x += 1;
            move_count++;
            return true;
        }
        return false;
    }

    bool move_right(){
        if(player.y < n){
            player.y += 1;
            move_count++;
            return true;
        }
        return false;
    }

    bool move_left(){
        if(player.y > 0){
            player.y -= 1;
            move_count++;
            return true;
        }
        return false;
    }

    void move_buck(){


        int r = rand()%8;

        if(r == 0 || r == 4 || r == 6){
            if(buck.x > 0)
                buck.x -= 1;
            else
                buck.x = n;
        }

        if(r == 1 || r == 5 || r == 7){
            if(buck.x < n)
                buck.x += 1;
            else
                buck.x = 0;
        }

        if(r == 2 || r == 4 || r == 7){
            if(buck.y < n)
                buck.y += 1;
            else
                buck.y = 0;
        }

        if(r == 3 || r == 5 || r == 6){
            if(buck.y > 0)
                buck.y -= 1;
            else
                buck.y = n;
        }
        
        draw();
    }
};

#endif