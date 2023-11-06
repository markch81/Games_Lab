#include "gamemaster.h"

#include "game.h"

using namespace MSC_GamesLib::libGame;

GameMaster::GameMaster():
    f_game(new Game())
{

}

GameMaster::~GameMaster()
{
    delete f_game;
    f_game = nullptr;
}