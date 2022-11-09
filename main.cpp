#include <iostream>
#include "Point.h"

using namespace std;

int main() {

    Point da;
    cout << da.getSize() << endl;

    int arreglo[] = {8, 9, 11, 5};
    Point da2(arreglo, 4);
    da2.print();
    Point da3 = da2;
    da3.print();

    da2.push_back(20);
    da2.print();
    da2.insert(30, 1);
    da2.print();
    da2.insert(5, 0);
    da2.print();

    da2.insert(100, 6);
    da2.print();

    return 0;
}
