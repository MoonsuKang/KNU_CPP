//
//  GamblingGame.cpp
//  KNU_CPP
//
//  Created by kang on 10/9/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "GamblingGame.h"
using namespace std;

GamblingGame::GamblingGame(const string& player1Name, const string& player2Name) // 생성자 정의
    : players{ Player(player1Name), Player(player2Name) }, currentPlayerIndex(0) {
    srand(static_cast<unsigned int>(time(0))); // 랜덤 시드 초기화
    scores[0] = 0; // 첫 번째 플레이어 점수
    scores[1] = 0; // 두 번째 플레이어 점수
}

void GamblingGame::play() { // 게임 메서드
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    cout << "첫번째 선수 이름 >> " << players[0].getName() << endl;
    cout << "두번째 선수 이름 >> " << players[1].getName() << endl;

    while (true) {
        cout << players[currentPlayerIndex].getName() << ":<Enter> 키 입력" << endl; // 지금 플레이어 차례
        cin.ignore(); // 엔터키 기다리기

        // 랜덤숫자 생성
        int num1 = rand() % 3;
        int num2 = rand() % 3;
        int num3 = rand() % 3;

        cout << players[currentPlayerIndex].getName() << ": " << num1 << " " << num2 << " " << num3 << endl;

        // 숫자가 같은 지 확인
        if (num1 == num2 && num2 == num3) {
            scores[currentPlayerIndex]++; // 점수 증가
            cout << players[currentPlayerIndex].getName() << " 승리!!" << endl;
            break; // 게임 종료
        } else {
            cout << "아쉽군요!" << endl;
        }

        // 현재 점수 출력
        cout << players[0].getName() << ": " << scores[0] << endl;
        cout << players[1].getName() << ": " << scores[1] << endl;

        currentPlayerIndex = (currentPlayerIndex + 1) % 2; // 다음 플레이어로
    }
}
