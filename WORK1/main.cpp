//
//  main.cpp
//  KNU_CPP
//
//  Created by kang on 9/26/24.
//

#include <iostream>
#include "Ram.h"

using namespace std;

int main() {
    Ram ram; // Ram 객체 생성
    ram.write(100, 20); // 100번지에 20을 저장
    ram.write(101, 30); // 101번지에 30을 저장
    char res = ram.read(100) + ram.read(101); // 100번지와 101번지의 값을 읽고 더하기
    ram.write(102, res);// 결과를 102번지에 저장
    cout << "102 번지의 값 = " << (int)ram.read(102) << endl; // 102번지의 값 출력
}
