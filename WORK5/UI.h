//
//  UI.h
//  KNU_CPP
//
//  Created by kang on 11/18/24.
//

#ifndef UI_H
#define UI_H

#include <iostream>
using namespace std;

class UI {
public:
    static int promptShapeType();    // 도형 종류 입력
    static int promptMenuChoice();  // 메뉴 선택 입력
    static int promptDeleteIndex(); // 삭제할 도형 인덱스 입력
};

#endif // UI_H
