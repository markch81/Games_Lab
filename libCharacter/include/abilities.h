#pragma once

namespace MSC_GamesLib::libCharacter
{
    class Abilities
    {
    public:
        Abilities(const int &str,
                  const int &dex,
                  const int &con,
                  const int &intel,
                  const int &wis,
                  const int &cha):
                f_str(str)
              , f_dex(dex)
              , f_con(con)
              , f_int(intel)
              , f_wis(wis)
              , f_cha(cha)
        {}

        int fGetStr() const {return f_str;}
        int fGetDex() const {return f_dex;}
        int fGetCon() const {return f_con;}
        int fGetInt() const {return f_int;}
        int fGetWis() const {return f_wis;}
        int fGetCha() const {return f_cha;}
    private:
        int f_str, f_dex, f_con, f_int, f_wis, f_cha;
    };
}