//
//  main.cpp
//  KNU_CPP
//
//  Created by kang on 10/18/24.
//

#include "GraphicEditor.h"
#include "UI.h"

int main() {
    GraphicEditor editor;
    while (true) {
        int choice = UI::promptMenuChoice();

        if (choice == 1) { // 삽입
            int shapeType = UI::promptShapeType();
            editor.insertShape(shapeType);
        } else if (choice == 2) { // 삭제
            int index = UI::promptDeleteIndex();
            editor.deleteShape(index);
        } else if (choice == 3) { // 모두 보기
            editor.showAllShapes();
        } else if (choice == 4) { // 종료
            cout << "프로그램을 종료합니다." << endl;
            break;
        } else {
            cout << "잘못된 선택입니다. 다시 시도하세요." << endl;
        }
    }

    return 0;
}
