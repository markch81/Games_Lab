#pragma once

#include <vector>

namespace MSC_GamesLib::libGame
{
    class Character;

    class Game
    {
    public:
        Game();
        void fAddCharacter(Character *);
    private:
        std::vector<Character *> f_characters;
    };
}