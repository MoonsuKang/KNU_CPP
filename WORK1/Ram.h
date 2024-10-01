//
//  Ram.h
//  KNU_CPP
//
//  Created by kang on 9/26/24.
//

#ifndef RAM_H
#define RAM_H

class Ram {
    char mem[100 * 1024]; // 메모리 공간
    int size; // 메모리 크기

public:
    Ram(); // 생성자
    ~Ram(); // 소멸자
    char read(int address); // 주어진 주소에서 데이터 읽기
    void write(int address, char value); // 주어진 주소에 데이터 쓰기
};

#endif // RAM_H
