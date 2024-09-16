#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Class with the name of 'Player'
class Player
{
// defines the data in the class as public so objects outside of the class can read them.
public:
    // int x and y for storing player position
    int x, y;
    // int speed for storing player speed
    int speed;
    
// Move method using a reference of the Player class
void Move(int xa, int ya)
{
    // Updates the players x variable relative to the speed
    x += xa * speed;
    // Updates the players y variable relative to the speed
    y += ya * speed;
}
};



int main()
{
    Player player; // Using the 'Player' class we create a 'Player' variable with the type 'player'
    player.x = 5; // setting a value for the 'x' variable
    player.y = 6; // setting a value for the 'y' variable
    player.speed = 1; // setting a value for the 'speed' variable
    
    player.Move(1, -1); // move the player +1 x and -1 y
    
    LOG("This is going to be about classes!");
    std::cin.get();
}