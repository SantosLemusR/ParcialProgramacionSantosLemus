
#include <iostream>
#include <string>

using namespace std;
	
class Algodon{
	public:

		string nombre;
		string marca;
		string usos;
		string capacidad;


			Algodon(string _nombre, string _marca, string _usos, string _capacidad) {
				nombre= _nombre;
				marca= _marca;
				usos= _usos;
				capacidad= _capacidad;
			

			cout<<"Se almacenaron Algodones"<<endl;
			}

			void tirar()
			{
				cout<<"El objeto desechable fue utilizado y desechado correctamente "<<endl;
			}
};

class Jeringa{
	public:

		string nombre;
		string marca;
		string usos;
		string capacidad;


			Jeringa(string _nombre, string _marca, string _usos, string _capacidad) {
				nombre= _nombre;
				marca= _marca;
				usos= _usos;
				capacidad= _capacidad;
			

			cout<<"Se almacenaron jeringas"<<endl;
			}

			void tirar()
			{
				cout<<"El objeto desechable fue utilizado y desechado correctamente "<<endl;
			}
};

class Venda{
	public:

		string nombre;
		string marca;
		string usos;
		string capacidad;


			Venda(string _nombre, string _marca, string _usos, string _capacidad) {
				nombre= _nombre;
				marca= _marca;
				usos= _usos;
				capacidad= _capacidad;
			

			cout<<"Se guardaron vendas"<<endl;
			}

			void tirar()
			{
				cout<<"El objeto desechable fue utilizado y desechado correctamente "<<endl;
			}
};

class Guantes{
	public:

		string nombre;
		string marca;
		string usos;
		string capacidad;


			Guantes(string _nombre, string _marca, string _usos, string _capacidad) {
				nombre= _nombre;
				marca= _marca;
				usos= _usos;
				capacidad= _capacidad;
			

			cout<<"Se guardaron Guantes"<<endl;
			}

			void tirar()
			{
				cout<<"El objeto desechable fue utilizado y desechado correctamente "<<endl;
			}
};

class Mascarilla{
	public:

		string nombre;
		string marca;
		string usos;
		string capacidad;


			Mascarilla(string _nombre, string _marca, string _usos, string _capacidad) {
				nombre= _nombre;
				marca= _marca;
				usos= _usos;
				capacidad= _capacidad;
			

			cout<<"Se guardaron Mascarillas"<<endl;
			}

			void tirar()
			{
				cout<<"El objeto desechable fue utilizado y desechado correctamente "<<endl;
			}
};


int main()
{
	
	Algodon algodon("Algodon","AidKit","Desinfectar","30 usos");
	algodon.tirar();

	cout << " " << endl;
	
	Jeringa jeringa("Jeringa","AidKit","Injectar","1 uso");
	jeringa.tirar();

	cout << " " << endl;
	
	Venda venda("Venda","AidKit","Cubrir","2 usos");
	venda.tirar();

	cout << " " << endl;
	
	Guantes guantes("Guantes","AidKit","Proteger","1 uso");
	guantes.tirar();

	cout << " " << endl;
	
	Mascarilla mascarilla("Mascarilla","AidKit","proteger","10 usos");
	mascarilla.tirar();

	cout << " " << endl;
	
	return 0;
	
};