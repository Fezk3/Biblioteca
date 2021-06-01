#include "Control.h"
#include <string> 

void Control::MenuInicioS()
{

	int Finalizar = 0;
	string Comprobar = "";

	Usuario* User;

	do {
		cout << "===============================\n";
		cout << "Digite una Identificacion\n";
		cout << "ID: "; cin >> Comprobar; cout << "\n";
		cout << "===============================\n";
		User = Global.TraerUsuario(stoi(Comprobar));
		if (User!=NULL) {
			SubMenu(User);
		}
		else {
			cout << "===============================\n";
			cout << "El usuario no existe o lo digito mal\n";
			cout << "===============================\n";
			Finalizar = 1;
		}
	} while (Finalizar != 1);

}

void Control::MenuLibros(Usuario* U)
{
}

void Control::MenuUsuarios(Usuario* U)
{
	Usuario* User = U;

	string Nombre; bool Estado; int Cantidad;

	int Finalizar = 0;
	string Comprobar = "";

	do {
		cout << "============(" << User->getNombre() << ")============\n";
		cout << "1. Agregar Usuario\n";
		cout << "2. Mostar Usuarios\n";
		cout << "3. Mostar Usuario Especifico\n";
		cout << "4. Eliminar Usuario\n";
		cout << "5. Salir\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		try
		{
			if (Comprobar != "1" || Comprobar != "2" || Comprobar != "3" || Comprobar != "4" || Comprobar != "5") {
				do {
					switch (stoi(Comprobar))
					{
					case 1:
						cout << "===============================\n";
						cout << "Digite el Nombre: "; cin >> Nombre;cout<<" \n";
						cout << "===============================\n";
						Usuario* New = new Usuario(Nombre,1);
						Global.AgregarUsuario(New);
						break;
					case 2:
						MenuPrestamo(User);
						break;
					case 3:
						MenuUsuarios(User);
						break;
					case 4:
						MenuUsuarios(User);
						break;
					case 5:
						cout << "===============================\n";
						cout << "Cerrando el programa\n";
						cout << "===============================\n";
						Finalizar = 1;
						break;
					}
				} while (Finalizar != 1);
			}
			else {
				throw Comprobar;
			}

		}
		catch (string Comprobar)
		{
			cout << "===============================\n";
			cout << "El numero que digito  es incorrecto, vuelva a intentar\n";
			cout << "===============================\n";
		}
	} while (Finalizar != 1);

}

void Control::MenuPrestamo(Usuario* U)
{
}

void Control::MenuPrincipal()
{

	int Finalizar = 0, FinalizarSub = 0, ID = 0;
	string Comprobar = "", Comprobar2 = "";

	do {
		cout << "============Bienvenido============\n";
		cout << "1. Iniciar secion\n";
		cout << "2. Salir\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		try
		{
			if (Comprobar!="1"||Comprobar!="2") {
				do {
					switch (stoi(Comprobar))
					{
					case 1:
						MenuInicioS();
						break;
					case 2:
						cout << "===============================\n";
						cout << "Cerrando el programa\n";
						cout << "===============================\n";
						Finalizar = 1;
						break;
					}
				} while (Finalizar != 1);
			}
			else {
				throw Comprobar;
			}

		}
		catch (string Comprobar)
		{
			cout << "===============================\n";
			cout << "El numero que digito  es incorrecto, vuelva a intentar\n";
			cout << "===============================\n";
		}
	} while (Finalizar != 1);

}

void Control::SubMenu(Usuario* U)
{

	Usuario* User = U;

	int Finalizar = 0;
	string Comprobar = "";

	do {
		cout << "============("<<User->getNombre()<<")============\n";
		cout << "1. Menu Libros\n";
		cout << "2. Menu Prestamos\n";
		cout << "3. Menu Usuarios\n";
		cout << "4. Salir\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		try
		{
			if (Comprobar != "1" || Comprobar != "2"|| Comprobar != "3" || Comprobar != "4") {
				do {
					switch (stoi(Comprobar))
					{
					case 1:
						MenuLibros(User);
						break;
					case 2:
						MenuPrestamo(User);
						break;
					case 3:
						MenuUsuarios(User);
						break;
					case 4:
						cout << "===============================\n";
						cout << "Cerrando el programa\n";
						cout << "===============================\n";
						Finalizar = 1;
						break;
					}
				} while (Finalizar != 1);
			}
			else {
				throw Comprobar;
			}

		}
		catch (string Comprobar)
		{
			cout << "===============================\n";
			cout << "El numero que digito  es incorrecto, vuelva a intentar\n";
			cout << "===============================\n";
		}
	} while (Finalizar != 1);


}
