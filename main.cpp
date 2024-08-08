#include <iostream>
#include "Pointer.cpp"
using namespace std;
struct Rectangle
        {
    int length;
    int breadth;
        };

struct complex{
    int real, img;
};

// Struct for Student for example wih properties
struct Student{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

struct Card{
    int face, shape, color;
};



//int main() {
//  struct Rectangle r = {10,5};
//  struct Card deck[52];
//  cout << "Length of Rectangle is: "  << r.length << endl;
//  cout << "Breadth of Rectangle is: "  << r.breadth << endl;
//
//
//    Pointer ptr(10);
//    cout<< ptr.getValue() << endl;
//    return 0;
//
//}
