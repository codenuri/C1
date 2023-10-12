#include <iostream>
#include <type_traits>
#include <typeinfo>
using namespace std;

int main()
{
    int x[5] = {1,2,3};
    
    cout << is_const<decltype(x)>::value << endl;
    cout << is_const<decltype(x)>::value << endl;
    
    cout << typeid(x).name() << endl;
    
}
