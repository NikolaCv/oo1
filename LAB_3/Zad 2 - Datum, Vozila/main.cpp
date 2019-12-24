#include "myExceptions.h"
#include "Lista.h"

#include <iostream>

using namespace std;

void testLista()
{
	Lista<int> list;
	list += 1;
	list += 2;
	list += 3;
	cout << list.doesCurrentExist() << endl << endl;
	//list.getCurrentData();
	//list.deleteCurrent();

	cout << list << endl;

	list.moveCurrentAtStart();
	list.moveCurrent();
	//list.moveCurrent();

	cout << list.getCurrentData() <<endl<<endl;

	list.deleteCurrent();

	cout << list << endl;

}
int main()
{
	try
	{
		testLista();
	}
	catch (myExceptions::CurrentElementDoesntExist& p) { cout << p; }



	system("pause");
	return 0;
}