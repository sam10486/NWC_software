#include <iostream>
#include "NWC_math.h"
#include "BitOperate.h"
#include "math.h"
#include "NWC.h"

void top_tb();
void AE();
void test_file();
void check_in_place_NWC();
void R16_BU();
void test_file_in_place();
void barrett();
void test_mem();


int main(){
    while (true)
    {
        cout << "+---------------------------------------------------------+" << endl;
        cout << "| The following examples should be executed while reading |" << endl;
        cout << "| comments in associated files in src.                    |" << endl;
        cout << "+---------------------------------------------------------+" << endl;
        cout << "| Examples                   | Source Files               |" << endl;
        cout << "+----------------------------+----------------------------+" << endl;
        cout << "| 1. top_tb                  | top_tb.cpp                 |" << endl;
        cout << "| 2. AE                      | AE.cpp                     |" << endl;
        cout << "| 3. test_file               | test_file.cpp              |" << endl;
        cout << "| 4. check_mem_out           | check_in_place_NWC.cpp     |" << endl;
        cout << "| 5. R16_BU                  | R16_BU.cpp                 |" << endl;
        cout << "| 6. test_file_in_place      | test_file_in_place.cpp     |" << endl;
        cout << "| 7. barrett                 | barrett.cpp                |" << endl;
        cout << "| 8. test_mem                | test_mem.cpp               |" << endl;
        cout << "+----------------------------+----------------------------+" << endl;

        int input_parameter = 8;
        int selection = 0;
        bool valid = true;
        do
        {
            cout << endl << "> Run example (1 ~ " << input_parameter << ") or exit (0): ";
            if (!(cin >> selection)) {
                valid = false;
            }
            else if (selection < 0 || selection > input_parameter) {
                valid = false;
            }
            else {
                valid = true;
            }
            if (!valid) {
                cout << "  [Beep~~] valid option: type 0 ~ 8" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (!valid);

        switch (selection) {
        case 1:
            top_tb();
            break;

        case 2:
            AE();
            break;

        case 3:
            test_file();
            break;

        case 4:
            check_in_place_NWC();
            break;

        case 5:
            R16_BU();
            break;

        case 6:
            test_file_in_place();
            break;

        case 7:
            barrett();
            break;

        case 8:
            test_mem();
            break;

        case 0:
            return 0;
        }
    }
    return 0;
}