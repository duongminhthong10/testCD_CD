#include <iostream>

using namespace std;

void swapPointers(int* ptr1, int* ptr2) {
    //-- Write your code below this line

    int ptr3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = ptr3;
    //-- Write your code above this line
}

int main()
{
    int a {5};
    int b {10};

    int* ptrA = &a;
    int* ptrB = &b;

    swapPointers(ptrA, ptrB);
    cout << "ok";
    return 0;
}
