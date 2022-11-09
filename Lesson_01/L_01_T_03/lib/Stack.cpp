#include "Stack.h"

Stack::Stack()
{
	std::cout << "Default constructor" << std::endl;
}

void Stack::reset()
{
	for (int i = 0; i < static_cast<int>(sizeof(arr) / sizeof(int)); ++i)
	{  
	    arr[i] = 0;
    }
    cap = -1;
	std::cout << "The stack was reseted" << std::endl;
}

bool Stack::push(int data)
{
	if (cap < static_cast<int>((sizeof(arr) / sizeof(int))))
    {
		arr[++cap] = data;
		return true;
    }
    else
    {
	    std::cout << "Stack overflow" << std::endl;
        return false;
    }
}
 
int Stack::pop()
{
	if (cap != -1)
    {
		arr[cap] = 0;
		return arr[cap--];
    }
    else
    {
	    std::cout << "Stack is empty" << std::endl;
        cap = -1;
		return 0;
    }
}

void Stack::print()
{   
	if (cap != -1)
    {
		for (int i = static_cast<int>((sizeof(arr) / sizeof(int))) - 1; i >= 0; --i)
        {
		    if (arr[i] == 0)
			{
	            std::cout << "The value of the stack[" << i << "] is \"Empty\"" << std::endl;
            }
            else
            {
		        std::cout << "The value of the stack[" << i << "] is " << arr[i] << std::endl;
			}
        }
    }
    else
    {
	    std::cout << "Stack is empty" << std::endl;
		for (int i = static_cast<int>((sizeof(arr) / sizeof(int))) - 1; i >= 0; --i)
        {
			std::cout << "The value of the stack[" << i << "] is \"Empty\"" << std::endl;
        }
    }
}

Stack::~Stack()
{
	std::cout << "Destructor" << std::endl;
}
