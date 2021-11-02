#include <iostream>
using namespace std;


class Func {
private: 
    int count;
public:
    Func():count {0}{count = count;};
    void operator()(int count) {
        count++;
        printf("Func (%p) works. Count: %d\n", this, count);
        
    }
    
};

int main()
{
    setlocale(LC_ALL, "Ru");

    Func func1, func2;
    func1(10);
    func2(20);
    func1(11);
    func1(12);
    func2(21);

}


