#include <iostream>
using namespace std;

int main()
{
	int nombre(0);
	cout << " Entrez un nombre " << endl;
	cin >> nombre;

	cin.ignore(); 

	if (nombre % 2 == 0)
	{
		cout << " Vous avez rentrer le nombre " << nombre <<" , ce nombre est pair " << endl; 
	}
	else
	{
		cout << "Vous avez rentrer le nombre " << nombre <<" , ce nombre est impaire" << endl;
	}

	return 0;
}
