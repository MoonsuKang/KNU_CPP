//
//  main.cpp
//  KNU_CPP
//
//  Created by kang on 10/18/24.
//

#include <iostream>
#include "Dept.h"
using namespace std;

// 60점 이상으로 통과하는 학생의 수를 계산
int countPass(Dept& dept) { // 참조로 전달하여 복사 생성자 사용 안 함
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) count++; // 통과한 학생 수 증가
    }
    return count;
}

int main() {
    Dept com(10); // 총 10명이 있는 학과
    com.read(); // 학생들의 성적 입력
    int n = countPass(com); // 60점 이상으로 통과한 학생의 수 리턴
    cout << "60점 이상은 " << n << "명" << endl; // 결과 출력
    return 0; // 프로그램 종료
}
