#pragma once

#include <vector>

namespace MSC_GamesLib::libChance
{
    class Die
    {
        public:
            Die(const int &sides=6);

            int fRoll();
        private:
            int f_sides;
    };

    class DiceCup
    {
        public:
            DiceCup(const std::vector<int> &dice_sides);

            int fRoll(std::vector<int> *results = nullptr);
        private:
            std::vector<Die> f_dice;
    };
}