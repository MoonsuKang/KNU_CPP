//
//  GraphicEditor.h
//  KNU_CPP1014
//
//  Created by kang on 11/25/24.
//

#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <vector>
#include "Shape.h"

class GraphicEditor {
private:
    vector<Shape*> shapes; // 도형을 관리하는 벡터

public:
    void insertShape(int shapeType);  // 도형 삽입
    void deleteShape(int index);      // 도형 삭제
    void showAllShapes() const;       // 모든 도형 출력
    ~GraphicEditor();                 // 소멸자
};

#endif // GRAPHICEDITOR_H

