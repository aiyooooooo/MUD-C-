#ifndef SEIGE_H
#define SEIGE_H

void Car_Soldier::ini()
{
    string nname = "Siege Car";

    get_name(nname);
    level = 1;
    update_base(100, 100, 100);
    cnt = 0;
}

void Car_Soldier::upgrade()

{
    level ++;
    update_base(show_HP() / (level - 1) * level, show_power() / (level - 1) * level, show_armor() / (level - 1) * level);
}

///计算数值
void Car_Soldier::get_ability()
{
    update_ability(cnt * (show_HP() + show_power() + show_armor() * 0.618));
}

void Car_Soldier::add_cnt(int num)
{
    cnt += num;
}

#endif SEIGE_H