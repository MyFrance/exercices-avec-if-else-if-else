/*
Nous allons écrire le programme suivant :
Un magasin facture 0,30 € les dix premières photocopies, 
0,25 € les vingt suivantes et 0,20 € au-delà. 
Ecrire un programme qui demande à l’utilisateur le nombre
de photocopies effectuées et qui affiche la facture correspondante.
*/

#include <iostream>
using namespace std;

int main()
{
	int N(0);
	cout << "Entrer la valeur de N" << endl;
	cin >> N;

	cin.ignore();

	double prix(0); 

	if (N <= 10)
	{
		prix = N * 0.3;

		cout << "Vous etes dans la tranche a 0.3 centimes, Vous nous devez " << prix << " euro" << endl;
	}

	else if (N <= 35)
	{
		prix = ((10 * 0.3 + (N-10) * 0.25));

		cout << " Les 10 premières sont a 30 centimes et le reste a 25 centimes" << endl; 
		cout << " Vous nous devez " << prix << " euros " << endl;
		cout << " Vous economisez donc " << ( prix - (10 * 0.3)) << " euros " << endl;

	} 

	else if (N > 35)
	{
		prix = ((10 * 0.3) + (25 * 0.25) + (N-35) * 0.2);
		cout << " Les 10 premières sont a 30 centimes " << 10*0.3 <<" euros " << endl;
		cout << " les 25  suivantes sont 25 centimes " << 25 * 0.25 << " euros" << endl;
		cout << " Au dela de 35 copies le prix est de 20 centimes" << endl;
		cout << " Vous nous devez " << prix << " euros" << endl;
		cout << " Vous economisez donc " << (prix - ((10 * 0.3) + 25 *0.25)) << " euros " << endl;
	}

	else
	{
		cout << " Nous n'avons pas cette configuration" << endl;
	}
	return 0;
}
