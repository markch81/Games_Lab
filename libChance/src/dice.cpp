#define PY_SSIZE_T_CLEAN
#include <python3.10/Python.h>

#include "dice.h"
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>


using namespace MSC_GamesLib::libChance;
using namespace std;

boost::random::mt19937 gen;

Die::Die(const int &sides):
    f_sides(sides)
{

}

int Die::fRoll()
{
    boost::random::uniform_int_distribution<> dist(1, f_sides);
    return dist(gen);
}

DiceCup::DiceCup(const std::vector<int> &dice_sides)
{
    f_dice.resize(dice_sides.size());
    for(size_t ui=0;ui<dice_sides.size();ui++)
    {
        f_dice[ui] = Die(dice_sides[ui]);
    }
}

int DiceCup::fRoll(std::vector<int> *results)
{
    vector<int> rolls(f_dice.size(),0);
    int sum = 0;

    for(size_t ui=0;ui<f_dice.size();ui++)
    {
        sum += rolls[ui] = f_dice[ui].fRoll();
    }

    if(results != nullptr)
    {
        *results = rolls;
    }

    return sum;
}