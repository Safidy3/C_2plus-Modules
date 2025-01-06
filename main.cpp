#include <iostream>

// basic syntax
class MyClass
{
	private:
		int privateVar;

	protected:
		int protectedVar;

	public:
		// Constructor
		MyClass() : privateVar(0), protectedVar(0) {}
		
		// Parameterized constructor
		MyClass(int val) : privateVar(val) {}
		
		// Destructor
		~MyClass() {}
		
		// Member functions
		void setVar(int val) { privateVar = val; }
		int getVar() const { return privateVar; }
};

// inheritance
class Base
{
	protected:
		int value;
	public:
		Base(int v = 0) : value(v) {}
		virtual ~Base() {}  // Virtual destructor for proper cleanup
};

