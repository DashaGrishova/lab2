#include"NoteBook.h"

NoteBook::NoteBook():NoteBook("Model", "CPU", 0){}

NoteBook::NoteBook(const char* Model,const char* CPU, int Memory)
{
    this ->Model = NULL;
    setModel(Model);
    this ->CPU = NULL;
    setCPU(CPU);
    if(!setMemory(Memory))
    {
        this-> Memory = 0;
    }
};
void NoteBook :: print()
{
    std::cout << "Model = " << Model <<  ",";
    std::cout << "CPU = " << CPU <<  ",";
    std::cout << "Memory = " << Memory <<  "\n";
}

NoteBook::~NoteBook()
{
    delete [] Model;
    delete [] CPU;
}

void NoteBook:: setModel(const char * Model){

delete [] this -> Model;
int len = strlen(Model);
this-> Model = new char[len]+1;
strcpy (this -> Model, Model);
}

void NoteBook:: setCPU(const char * CPU){
delete [] this -> CPU;
int len = strlen(CPU);
this-> CPU = new char[len]+1;
strcpy (this -> CPU, CPU);
}

bool NoteBook::setMemory(int Memory){
if (Memory >=0 && Memory < 400){
    this -> Memory=Memory;
    return true;
}
  return false;
}

char* NoteBook::getCPU(char* CPU)
{
    strcpy(CPU, this-> CPU);
    return CPU;
}
char* NoteBook::getModel(char* Model)
{
    strcpy(Model, this->Model);
    return Model;
}
int NoteBook::getMemory()
{
    return Memory;
}


bool NoteBook::operator> (const NoteBook & a) const
{
    return(Memory > a.Memory);
}

bool NoteBook::operator< (const NoteBook & a) const
{
    return(Memory < a.Memory);
}

bool NoteBook::operator>= (const NoteBook & a) const
{
    return !(*this < a);
}

bool NoteBook::operator<= (const NoteBook & a) const
{
    return !(*this > a);
}

bool NoteBook::operator== (const NoteBook & a) const
{
    return(Memory == a.Memory);
}

bool NoteBook::operator!= (const NoteBook & a) const
{
    return !(*this == a);
}

NoteBook&NoteBook::operator=(NoteBook &a)
{
    this ->Model = NULL;
    setModel(a.Model);
    this ->CPU = NULL;
    setCPU(a.CPU);
    this-> Memory = a.Memory;
    return *this;
}
void NoteBook::operator++()
{
    this->Memory ++;
}
void NoteBook::operator--()
{
    this->Memory --;
}
ostream& operator<< (ostream &out, const NoteBook &a)
{
    out << " Memory: " << a.Memory << " Model: " << a.Model << " CPU: " << a.CPU;
    return out;
}
istream& operator>> (istream &in, NoteBook &a)
{
    in >> a.Model;
    in >> a.CPU;
    in >> a.Memory;
    return  in;
}
