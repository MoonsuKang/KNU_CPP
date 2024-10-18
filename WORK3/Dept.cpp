//
//  Dept.cpp
//  KNU_CPP
//
//  Created by kang on 10/18/24.
//
#include <iostream>
#include "Dept.h"
using namespace std;

// 생성자: 학생 수를 받아 scores 배열을 동적 할당
Dept::Dept(int size) {
    this->size = size;
    scores = new int[size]; // 동적 메모리 할당
}

// 소멸자: 동적 할당된 메모리를 해제
Dept::~Dept() {
    delete[] scores; // 메모리 해제
}

// 학생 수 반환
int Dept::getSize() {
    return size;
}

// 학생 성적 입력
void Dept::read() {
    cout << size << "개 점수 입력>> ";
    for (int i = 0; i < size; i++) {
        cin >> scores[i]; // 성적 입력
    }
}

// 특정 인덱스의 성적이 60 이상인지 확인
bool Dept::isOver60(int index) {
    return scores[index] >= 60; // 60점 이상이면 true 리턴
}
