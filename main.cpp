#include <iostream>

#include "GameController.h"
#include "actions.h"

using namespace std;
int main() {
    string processo = "zsnesw.exe";
    GameController controller(processo);
    controller.ExecuteProgram();


}