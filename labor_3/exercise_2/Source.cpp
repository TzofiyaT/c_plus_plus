#include <iostream>
using namespace std;
#include "Vector.h"
enum options
{
	stop, assignment, isEqual, mult, add, clear, delLast
	//      0   1:=    2:== 3:* 4:+ 5   6  
};

int main()
{
	Vector  v1(10), v2(10), v3;
	int*pointer1 = v1.get_data();        // keep the adress of first place in the array
	int*pointer2 = v2.get_data();
	for (int i = 1; i <= 4; i++)
	{
		int*y = v1.get_data();
		v1.insert(i);
		v2.insert(i + 4);
	}
	v1.set_data(pointer1);       // piont to the firsr data array adress
	v2.set_data(pointer2);
	int choice, val;
	cout << "enter your choice 0-6\n"; cin >> choice;
	while (choice)
	{
		switch (choice)
		{
		case assignment:; v3 = v1;
			break;
		case isEqual:   if (v1 == v2) cout << "v1==v2\n"; else cout << "v1!=v2\n";
			break;
		case mult:      cout << "v1*v2=" << v1*v2 << endl;
			break;
		case add:       v3 = v1 + v2;
			break;
		case clear:     v1.clear();
			break;
		case delLast:   v2.delLast();
			break;
		default: cout << "ERROR";
		}
		cout << endl;
		v1.print(); cout << endl; ; v2.print();    cout << endl;   v3.print();
		cout << endl << "enter your choice 0-6\n"; cin >> choice;
	}
	//system ("pause");
	return 0;
}


//enter your choice 0-6
//2
//v1!=v2
//
//capacity: 10 size: 4 val: 1 2 3 4
//
//capacity: 10 size: 4 val: 5 6 7 8
//
//capacity: 10 size: 0 val:
//
//enter your choice 0-6
//1
//
//capacity: 10 size: 4 val: 1 2 3 4
//
//capacity: 10 size: 4 val: 5 6 7 8
//
//capacity: 10 size: 4 val: 1 2 3 4
//
//enter your choice 0-6
//3
//v1*v2=70
//
//capacity: 10 size: 4 val: 1 2 3 4
//
//capacity: 10 size: 4 val: 5 6 7 8
//
//capacity: 10 size: 4 val: 1 2 3 4
//
//enter your choice 0-6
//4
//
//capacity: 10 size: 4 val: 1 2 3 4
//
//capacity: 10 size: 4 val: 5 6 7 8
//
//capacity: 10 size: 8 val: 1 2 3 4 5 6 7 8
//
//enter your choice 0-6
//5
//
//capacity: 10 size: 0 val:
//
//capacity: 10 size: 4 val: 5 6 7 8
//
//capacity: 10 size: 8 val: 1 2 3 4 5 6 7 8
//
//enter your choice 0-6
//6
//
//capacity: 10 size: 0 val:
//
//capacity: 10 size: 3 val: 5 6 7
//
//capacity: 10 size: 8 val: 1 2 3 4 5 6 7 8
//
//enter your choice 0-6
//2
//v1!=v2
//
//capacity: 10 size: 0 val:
//
//capacity: 10 size: 3 val: 5 6 7
//
//capacity: 10 size: 8 val: 1 2 3 4 5 6 7 8
//
//enter your choice 0-6
//0
