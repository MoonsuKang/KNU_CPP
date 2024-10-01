//
//  Ram.cpp
//  KNU_CPP
//
//  Created by kang on 9/26/24.
//

#include "Ram.h"
#include <stdexcept>

// 생성자
Ram::Ram() {
    size = sizeof(mem);
}

// 소멸자
Ram::~Ram(){ };
// 주어진 주소에서 데이터 읽기
char Ram::read(int address) {
    if (address < 0 || address >= size) {
        // 유효하지 않은 주소 접근에 대한 오류 처리
        throw std::out_of_range("Invalid address");
    }
    return mem[address];
}

// 주어진 주소에 데이터 쓰기
void Ram::write(int address, char value) {
    if (address < 0 || address >= size) {
        // 유효하지 않은 주소 접근에 대한 오류 처리
        throw std::out_of_range("Invalid address");
    }
    mem[address] = value; // 메모리에 값 쓰기
}
