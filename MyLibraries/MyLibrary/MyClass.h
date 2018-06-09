#ifndef MYCLASS_H
#define MYCLASS_H

class IMyClass
{
	virtual int add(int a, int b) =0;
};

class MyClass : IMyClass
{
public:
	MyClass()
	{
	}

	int add(int a, int b) {
		return (a + b);
	}

	int cppCheck() {
		char a[10];
		a[10] = 0;
		return 0;
	}
};

#endif // MYCLASS_H
