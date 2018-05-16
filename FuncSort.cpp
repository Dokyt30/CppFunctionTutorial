#include <iostream>
using namespace std;

// ŠÖ”“àƒNƒ‰ƒX
void sorttest() {
	struct mginfo {
		int number;
		int order;
		void print() {
			cout << "number:" << number << ", order:" << order << endl;
		}
	};
	mginfo a,b;
	a.number = 1;
	a.order = 10;
	b.number = 2;
	b.order = 3;

	a.print();
	b.print();
}

int main()
{
	sorttest();
    return 0;
}

