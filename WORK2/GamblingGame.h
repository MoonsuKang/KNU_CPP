//
//  GamblingGame.h
//  KNU_CPP
//
//  Created by kang on 10/9/24.
//
#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H

#include "Player.h"

class GamblingGame {
private:
    Player players[2]; // 플레이어 인원 수
    int currentPlayerIndex; // 현재 플레이어의 Index넘버
    int scores[2]; // 각 플레이어 점수

public:
    GamblingGame(const string& player1Name, const string& player2Name); // 생성자, 플레이어 이름을 인자로
    void play(); // 게임 시작
};

#endif
