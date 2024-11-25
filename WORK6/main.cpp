//
//  main.cpp
//  KNU_CPP1014
//
//  Created by kang on 10/14/24.
//

#include "GraphicEditor.h"
#include <iostream>
using namespace std;

int main() {
    GraphicEditor editor;
    int choice;

    cout << "그래픽 에디터입니다." << endl;

    while (true) {
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        cin >> choice;

        if (choice == 1) { // 도형 삽입
            int shapeType;
            cout << "선:1, 원:2, 사각형:3 >> ";
            cin >> shapeType;
            editor.insertShape(shapeType);
        } else if (choice == 2) { // 도형 삭제
            int index;
            cout << "삭제하고자 하는 도형의 인덱스 >> ";
            cin >> index;
            editor.deleteShape(index);
        } else if (choice == 3) { // 모든 도형 보기
            editor.showAllShapes();
        } else if (choice == 4) { // 종료
            cout << "프로그램을 종료합니다." << endl;
            break;
        } else {
            cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
        }
    }

    return 0;
}
