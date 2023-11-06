#pragma once

namespace MSC_GamesLib::libGame
{
    class Game;

    class GameMaster
    {
    public:
        GameMaster();
        ~GameMaster();
    private:
        Game *f_game;
    };
}