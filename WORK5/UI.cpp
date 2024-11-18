//
//  UI.cpp
//  KNU_CPP
//
//  Created by kang on 11/18/24.
//

#include "UI.h"

int UI::promptShapeType() {
    cout << "선:1, 원:2, 사각형:3 >> ";
    int choice;
    cin >> choice;
    return choice;
}

int UI::promptMenuChoice() {
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    int choice;
    cin >> choice;
    return choice;
}

int UI::promptDeleteIndex() {
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    int index;
    cin >> index;
    return index;
}
