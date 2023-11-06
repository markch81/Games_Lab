#include <iostream>
#include <vector>
#include <dice.h>
#include <gtest/gtest.h>

using namespace std;

TEST(DiceTest, Test_ONE)
{
    cout << "Running test one" << endl;
    MSC_GamesLib::libChance::Die die(20);
    std::vector<int> result(20,0);

    for(int i=0;i<1000000;i++)
    {
        int roll = die.fRoll();
        if(roll >= 1 && roll <= 20)
        {
            result[roll-1]++;
        }
        else
        {
            FAIL() << "incorrect roll happened";
        }
    }

    cout << "distribution of rolls" << endl;
    for(size_t ui=0U;ui<result.size();ui++)
    {
        cout << result[ui] << " ";
    }
}

int main(int argc, char **argv)
{
    cout << "Starting Tests" << endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}