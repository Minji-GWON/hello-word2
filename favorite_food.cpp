#include <iostream>

using namespace std;

class test{
    public:
        test(){
            cout << "Constructor called" << endl;
        }
        ~test(){
            cout << "Destructor called" << endl;
        } 
    private:
        int a;
}