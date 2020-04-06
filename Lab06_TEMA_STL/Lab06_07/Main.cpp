#include "Tests.h"
#include <iostream>
#include "UI.h"
using namespace std;


int main()
{
	tests();
	cout << "...teste trecute cu succes!" << endl;
	Repo<Produs> repo;
	Service service = { repo };
	UI ui = { service };
	ui.run();
	
	return 0;
}