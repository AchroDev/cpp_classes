#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Class with the name of 'Player'
class Player
{
    // int x and y for storing player position
    int x, y;
    // int speed for storing player speed
    int speed;
};

int main()
{
    // Using the 'Player' class we create a 'Player' variable with the type 'player'
    Player player;
    
    LOG("This is going to be about classes!");
    std::cin.get();
}