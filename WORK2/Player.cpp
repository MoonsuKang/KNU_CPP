//
//  Player.cpp
//  KNU_CPP
//
//  Created by kang on 10/9/24.
//

#include "Player.h"

Player::Player(const string& playerName) : name(playerName) {} // 플레이어 클래스 생성자 정의

string Player::getName() const { // getName 메서드 정의
    return name;
}
