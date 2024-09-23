#pragma once
#include <iostream>
#include <memory>
#include <utility>
#include "_Allocator.h"
#include "Memory.h"
using int32 = int32_t;
using namespace std;;

// new operator overloading (Global)
// new 및 delete 를 오버로딩으로 가로챌수있다.
/*void* operator new(size_t size) {
    cout << "new! " << size << endl;
    void* ptr = malloc(size);
    return ptr;
}*/

/*void operator delete(void* ptr) {
    cout << "delete!" << endl;
    free(ptr);
}*/

void* operator new[](size_t size) {
    cout << "new[]! " << size << endl;
    void* ptr = malloc(size);
    return ptr;
}

void operator delete[](void* ptr) {
    cout << "delete[]!" << endl;
    free(ptr);
}

class Knight
{
public:
    Knight() { cout << "knight()" << endl; };
    ~Knight() { cout << "~Knight" << endl; };
    Knight(int32 hp) : _hp(hp) { cout << "Knight(hp)" << endl; };

    int32_t _hp = 100;
    int32_t _mp = 100;
    //new나 delete는 static을 하지않아도  stiatic 처럼 사용 할수 있다고 한다. 여기서는 가시성을위해 선언
   /* static void* operator new(size_t size) {
        cout << "new! " << size << endl;
        void* ptr = malloc(size);
        return ptr;
    }

    static void operator delete(void* ptr) {
        cout << "delete!" << endl;
        free(ptr);
    }*/
private:
};


int main()
{
    int32_t* number = xnew<int32_t>(100);
    Knight* knight = xnew<Knight>(100);

    

    delete(knight);
    delete(number);

}

