#ifndef HUB_H
#define HUB_H

#include "head/map/map.h"
#include <bits/stdc++.h>
using namespace std;


class Pub
{
public:
    void show_Pub();
    void get_soldior();
private:
    //Shero shero
};

void Pub::get_soldior()
{

}

void Pub:: show_Pub()
{
    char choose[500];
    int mark = 1;

    while(mark){
        gets(choose);
        if(strlen(choose) > 1){
            continue;
        }
        switch(choose[0]){
            case '1':
                mark = 1;
                get_soldior();
                break;
            case '2':
                mark = 1;
                //shero.talk;
                break;
            default:
                break;
        }
    }


}


#endif HUB_H
