#include "MyVector.h"


int main()
{
    Vector<int> a;
    Vector<int> b(10, 0);
    Vector<float> c(4, 9.99);

    a.print();
    b.print();
    c.print();

    a.push_back(9);
    a.push_back(2);
    a.push_back(5);

    b.push_back(14);
    b.push_back(98);
    b.push_back(200);

    c.push_back(3.0);
    c.push_back(0.3);
    c.push_back(7.1);

    a.print();
    b.print();
    c.print();

    cout << "<====================================>\n";
    cout << "Size: " << a.getSize() << " last: " << a[a.getSize() - 1] << endl;
    cout << "Size: " << b.getSize() << " last: " << b[b.getSize() - 1] << endl;
    cout << "Size: " << c.getSize() << " last: " << c[c.getSize() - 1] << endl;
}
