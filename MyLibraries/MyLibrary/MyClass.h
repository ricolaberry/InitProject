#ifndef MYCLASS_H
#define MYCLASS_H

class IMyClass
{
	virtual int add(int a, int b) =0;
};

class MyClass : IMyClass
{
public:
	MyClass() {

	}

	int add(int a, int b) {
		return (a + b);
	}
};

#endif // MYCLASS_H
