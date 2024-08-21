#include <iostream>
#include <chrono>
#include "Database.h"
#include "Visitor.h"
#include "Timemanager.h"
#include "Company.h"
#include <Windows.h>
using namespace std::chrono;



int main() {
    srand(time(NULL));
    Company fitnessClub;
    Database visitorDb("resources/Visitor.txt");
    for (int i = 0; i < 10; i++) {
        Visitor* visitor = Visitor::generateVisitor();
        visitorDb.addLine(visitor->toString());
        fitnessClub.inclomeVisitor(visitor);
        Sleep(3);
    }
    for (int i = 1; i <= 10; i++) {
        fitnessClub.outcomeVisitor(i);
        Sleep(3);
    }

}