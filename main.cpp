#include "NoteBook.h"
using namespace std;

int main()
{
    NoteBook a("Model", "CPU", 200);
    NoteBook a1;


    a.print();
    a1.print();

    a1.setModel("Model");
    a1.setCPU("CPU");
    a1.setMemory(12);
    a1.print();
    if((a > a1)== true)
        cout << "a < a1";
    a=a1;
    cout << "\n";
    cout << "\n";
    a.print();
    a1.print();
}


