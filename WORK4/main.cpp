//
//  main.cpp
//  KNU_CPP
//
//  Created by kang on 10/18/24.
//

#include <iostream>
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;

int main() {
    InkJetPrinter* inkJet = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laser = new LaserPrinter("SCX-6X45", "삼성전자", 3, 20);

    char continuePrint;
    int printerChoice, pages;

    do {
        // 프린터 상태 출력
        inkJet->printStatus();
        laser->printStatus();

        // 프린터 선택 및 매수 입력
        cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력>> ";
        cin >> printerChoice >> pages;

        // 프린트 수행
        if (printerChoice == 1) {
            inkJet->printInkJet(pages); // 잉크젯 프린터에서 인쇄
        } else if (printerChoice == 2) {
            laser->printLaser(pages); // 레이저 프린터에서 인쇄
        }

        // 프린트 후 상태 바로 출력
        inkJet->printStatus();
        laser->printStatus();

        // 계속할지 여부 묻기
        cout << "계속 프린트 하시겠습니까(y/n)>> ";
        cin >> continuePrint;

    } while (continuePrint == 'y' || continuePrint == 'Y');

    // 동적 할당 메모리 해제
    delete inkJet;
    delete laser;

    return 0;
}
