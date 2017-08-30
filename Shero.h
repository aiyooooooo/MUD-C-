#ifndef SHERO_H
#define SHERO_H

#include "Role.h"
#include "head\game\Find_Cow.h"
#include "head\game\Strategy.h"

class Shero: public Role
{
public:
    void ini();

    void talk();

    void show_likability(); ///查询好感度
    void play_game();   ///玩游戏
    void get_task();    ///领取任务
    void buy_gift();    ///买礼物

private:
    int likability;     ///好感度

    Find_cow find_cow;  ///游戏1
    Strategy strategy;
};

void Shero::ini()
{
    likability = 0;
}

void Shero::show_likability()
{
    cout << likability << endl;
}

/*
void Shero::talk()
{
    char choose[50];
    int mark = 1;

    while(mark){
        cin >> choose;
        if(){

        }
        else if(){

        }
        else if(){

        }
    }
}


void Shero::play_game()
{

    char choose[50];
    int mark = 1;

    while(mark){
        cin >> choose;
        if(){

        }
        else if(){

        }
        else if(){

        }
    }
}

void Shero::get_task()
{

}

void Shero::buy_gift()
{

}
*/
#endif SHERO_H
