#include "Control.h"
#include <string> 

void Control::MenuInicioS()
{

	int Finalizar = 0;
	string ID = "";

	Usuario* Cliente;

	do {
		cout << "===============================\n";
		cout << "Digite una Identificacion\n";
		cout << "ID: "; cin >> ID; cout << "\n";
		cout << "===============================\n";
		Cliente = Global.TraerUsuario(stoi(ID));
		if (Cliente !=NULL) {
			SubMenu(Cliente);
			Finalizar=1;
		}
		else {
			cout << "===============================\n";
			cout << "El usuario no existe o lo digito mal\n";
			cout << "===============================\n";
			Finalizar = 1;
		}
	} while (Finalizar != 1);
	Finalizar = 0;

}

void Control::MenuLibros(Usuario* U)
{

	int Finalizar = 0, FinalizarSub = 0;
	string Comprobar;

	Usuario *Cliente = U;
	do {
		cout << "============(" << Cliente->getNombre() << ")============\n";
		cout << "1. Agregar Libro\n";
		cout << "2. Mostar Libros\n";
		cout << "3. Mostar Especifico\n";
		cout << "3. Mostar Lista Filtrada\n";
		cout << "3. Mostar Cantidad de libros especificos\n";
		cout << "3. Mostrar disponibilidad\n";
		cout << "4. Eliminar Libro\n";
		cout << "5. Salir\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		try
		{
			if (Comprobar != "1" && Comprobar != "2" && Comprobar != "3" && Comprobar != "4" && Comprobar != "5") {
				throw Comprobar;
			}
			else {
				do {
					switch (stoi(Comprobar)) {
					case 1:
						cout << "===============================\n";
						cout << "Digite el Nombre: ";
						
						cout << " \n";
						cout << "===============================\n";
						/*Usuario* Nuevo;
						Nuevo = new Usuario();
						Global.AgregarUsuario(Nuevo);*/
						/*Nuevo->toString();*/
						FinalizarSub = 1;
						break;
					case 2:
						cout << "===============================\n";
						Global.MostarUsuarios();
						cout << "===============================\n";
						FinalizarSub = 1;
						break;
					case 3:
						cout << "===============================\n";
						cout << "Digite el ID: ";
						
						cout << " \n";
						cout << "===============================\n";
						/*Global.MostrarEspeUsuario(ID);*/
						cout << "===============================\n";
						FinalizarSub = 1;
						break;
					case 4:
						cout << "===============================\n";
						cout << "Digite el ID: ";
						/*cin >> ID;*/
						cout << " \n";
						cout << "===============================\n";
						/*Global.EliminarUsuario(ID);*/
						cout << "===============================\n";
						FinalizarSub = 1;
						break;
					case 5:
						cout << "===============================\n";
						cout << "Cerrando el programa\n";
						cout << "===============================\n";
						FinalizarSub = 1;
						Finalizar = 1;
						break;
					}
				} while (FinalizarSub != 1);
				FinalizarSub = 0;
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

void Control::MenuUsuarios(Usuario* U)
{
	Usuario* Cliente = U;

	int Finalizar = 0, FinalizarSub=0;
	do {
		int ID = 0;
		string Comprobar = "";
		cout << "============(" << Cliente->getNombre() << ")============\n";
		cout << "1. Agregar Usuario\n";
		cout << "2. Mostar Usuarios\n";
		cout << "3. Mostar Usuario Especifico\n";
		cout << "4. Eliminar Usuario\n";
		cout << "5. Salir\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		try
		{
			if (Comprobar != "1" && Comprobar != "2" && Comprobar != "3" && Comprobar != "4" && Comprobar != "5") {
				throw Comprobar;
			}
			else {
				string Nombre = ""; bool Estado = false; int Cantidad = 0;
				do {
					switch (stoi(Comprobar)) {
					case 1:
						cout << "===============================\n";
						cout << "Digite el Nombre: ";
						cin >> Nombre;
						cout << " \n";
						cout << "===============================\n";
						Usuario* Nuevo;
						Nuevo = new Usuario(Nombre, 1);
						Global.AgregarUsuario(Nuevo);
						FinalizarSub = 1;
						break;
					case 2:
						cout << "===============================\n";
						Global.MostarUsuarios();
						cout << "===============================\n";
						FinalizarSub = 1;
						break;
					case 3:
						cout << "===============================\n";
						cout << "Digite el ID: ";
						cin >> ID;
						cout << " \n";
						cout << "===============================\n";
						Global.MostrarEspeUsuario(ID);
						cout << "===============================\n";
						FinalizarSub = 1;
						break;
					case 4:
						cout << "===============================\n";
						cout << "Digite el ID: ";
						cin >> ID;
						cout << " \n";
						cout << "===============================\n";
						Global.EliminarUsuario(ID);
						cout << "===============================\n";
						FinalizarSub = 1;
						break;
					case 5:
						cout << "===============================\n";
						cout << "Cerrando el programa\n";
						cout << "===============================\n";
						Finalizar = 1;
						FinalizarSub = 1;
						break;
					}
				} while (FinalizarSub != 1);
				FinalizarSub = 0;
			}

		}
		catch (string Comprobar)
		{
			cout << "===============================\n";
			cout << "El numero que digito  es incorrecto, vuelva a intentar\n";
			cout << "===============================\n";
		}
	} while (Finalizar != 1);
	Finalizar = 0;

}

void Control::MenuPrestamo(Usuario* U)
{
}

void Control::MenuPrincipal()
{
	
	int Finalizar = 0, FinalizarSub = 0, Numero = 0;
	string Comprobar = "", Comprobar2 = "";

	do {
		cout << "============Bienvenido============\n";
		cout << "1. Iniciar secion\n";
		cout << "2. Salir\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
	
		try
		{
			if (Comprobar!="1"&&Comprobar!="2") {
				throw Comprobar;
			}
			else {
				do {
					switch (stoi(Comprobar))
					{
					case 1:
						MenuInicioS();
						FinalizarSub = 1;
						break;
					case 2:
						cout << "===============================\n";
						cout << "Cerrando el programa\n";
						cout << "===============================\n";
						Finalizar = 1;
						break;
					}
				} while (FinalizarSub != 1);
				FinalizarSub = 0;
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

	int Finalizar = 0, FinalizarSub = 0;
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
			if (Comprobar != "1" && Comprobar != "2"&& Comprobar != "3" && Comprobar != "4") {
				throw Comprobar;
				
			}
			else {
				do {
					switch (stoi(Comprobar))
					{
					case 1:
						MenuLibros(User);
						FinalizarSub = 1;
						break;
					case 2:
						MenuPrestamo(User);
						FinalizarSub = 1;
						break;
					case 3:
						MenuUsuarios(User);
						FinalizarSub = 1;
						break;
					case 4:
						cout << "===============================\n";
						cout << "Cerrando el programa\n";
						cout << "===============================\n";
						FinalizarSub = 1;
						Finalizar=1;
						break;
					}
				} while (FinalizarSub != 1);
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
void Control::LlenaListas() {

		Libro* l1 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 1);
		Libro* l2 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 2);
		Libro* l3 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 1);
		Libro* l4 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 1);

		Libro* l5 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 1);
		Libro* l6 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 2);
		Libro* l7 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 2);
		Libro* l8 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 2);

		Libro* l9 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 1);
		Libro* l10 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 1);
		Libro* l11 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 1);
		Libro* l12 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 2);

		Libro* l13 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);
		Libro* l14 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);
		Libro* l15 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);
		Libro* l16 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);

		Usuario* u1 = new Usuario("Victor Segura", 1);
		Usuario* u2 = new Usuario("Kevin Montero", 2);

		Global.AgregarUsuario(u1); Global.AgregarUsuario(u2);
		Global.AgregarLibro(l1); Global.AgregarLibro(l2); Global.AgregarLibro(l3); Global.AgregarLibro(l4);
		Global.AgregarLibro(l5); Global.AgregarLibro(l6); Global.AgregarLibro(l7); Global.AgregarLibro(l8);
		Global.AgregarLibro(l9); Global.AgregarLibro(l10); Global.AgregarLibro(l11); Global.AgregarLibro(l12);
		Global.AgregarLibro(l13); Global.AgregarLibro(l14); Global.AgregarLibro(l15); Global.AgregarLibro(l16);

}
