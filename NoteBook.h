#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED
#include <iostream>
#include<cstring>
using namespace std;

class NoteBook
{
    char* Model;
    char* CPU;
    int Memory;

public:
    NoteBook();
    NoteBook(const char *Model, const char *CPU, int Memory);
    NoteBook(const NoteBook &a);
    ~NoteBook();
    void print();
    void setModel (const char * Model);
    void setCPU (const char * CPU);
    bool setMemory (int Memory);

    int getMemory();
    char * getModel ( char * Model);
    char * getCPU ( char * CPU);


    bool operator> (const NoteBook & a) const;
    bool operator< (const NoteBook & a) const;
    bool operator>= (const NoteBook & a) const;
    bool operator<= (const NoteBook & a) const;
    bool operator== (const NoteBook & a) const;
    bool operator!= (const NoteBook & a) const;
    NoteBook &operator=(NoteBook &a);
    void operator++();
    void operator--();
    friend ostream& operator<< (ostream &out, const NoteBook &a);
    friend istream& operator>> (istream &in, NoteBook &a);
};


#endif // NOTEBOOK_H_INCLUDED
