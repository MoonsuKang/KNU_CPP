//
//  main.cpp
//  KNU_CPP
//
//  Created by kang on 9/26/24.
//

#include <iostream>
#include "GamblingGame.h"
using namespace std;

int main() {
    string player1Name, player2Name;

    // 플레이어 이름 입력
    cout << "첫번째 선수 이름을 입력하세요: ";
    getline(cin, player1Name);
    cout << "두번째 선수 이름을 입력하세요: ";
    getline(cin, player2Name);

    GamblingGame game(player1Name, player2Name); // 게임 시작
    game.play(); // 게임 실행

    return 0; // 소멸
}
