#include <iostream>

using namespace std;

struct {
	int myNum[];
} arrayStatic;

class MakeDynamicArr
{
	MakeDynamicArr()
	{
		
	}
};

int main()
{

	int someArr[3] = { 1,2,3 };
	int *someArr2[] = &someArr;
	/*MakeDynamicArr dynamicArr;
	for (int i : someArr)
	{
		cout << i << endl;
	}*/
	return 0;
}