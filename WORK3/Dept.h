//
//  Dept.h
//  KNU_CPP
//
//  Created by kang on 10/18/24.
//

#ifndef DEPT_H
#define DEPT_H

class Dept {
private:
    int size; // 학생 수
    int* scores; // 학생 성적 배열

public:
    Dept(int size); // 생성자
    ~Dept(); // 소멸자
    int getSize(); // 학생 수 반환
    void read(); // 성적 입력
    bool isOver60(int index); // 60점 이상인지 확인
};

#endif // DEPT_H
