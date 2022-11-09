#include "Stack.h"


int main()
{
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

//////////////////////////////////////////
	// Stack a;
	// a.print();
	// for (int i = 0; i < 5; ++i)
	// {
	// 	int j = (i + 3) * 2;
	// 	a.push(j);	
	// }
    //
	// a.print();
	// a.push(156);
	// a.print();
	// a.reset();
	// a.print();
	return 0;
}
