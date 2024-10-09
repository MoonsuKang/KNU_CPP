//
//  Player.h
//  KNU_CPP
//
//  Created by kang on 10/9/24.
//

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
    string name; // 플레이어 이름

public:
    Player(const string& playerName); // 생성자, 플레이어 이름을 인자로 받는다.
    string getName() const; // 플레이어 이름을 반환
};

#endif
