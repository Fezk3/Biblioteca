#include "Control.h"
#include <string> 

void Control::MenuInicioS()
{
	int Finalizar = 0;
	string ID ;

	Usuario* Cliente;

	do {
		cout << "===============================\n";
		cout << "Digite una Identificacion\n";
		cout << "ID: "; cin >> ID; cout << "\n";
		cout << "===============================\n";
		system("pause");
		system("cls");
		Cliente = Global.TraerUsuario(ID);
		if (Cliente !=NULL) {
			system("pause");
			system("cls");
			SubMenu(Cliente);
			Finalizar=1;
		}
		else {
			cout << "===============================\n";
			cout << "\nEl usuario no existe o lo digito mal\n";
			cout << "\n===============================\n";
			system("pause");
			system("cls");
			Finalizar = 1;
		}
	} while (Finalizar != 1);
	Finalizar = 0;

}

void Control::MenuLibros(Usuario* U)
{

	Usuario* Cliente = U;

	int Finalizar =0, FinalizarSub=0;
	do {
		string ID;
		string parametros;
		string Comprobar;
		cout << "============(" << Cliente->getNombre() << ")============\n";
		cout << "\n1. Mostar Libros\n";
		cout << "2. Mostar Libro Especifico\n";
		cout << "3. Ver lista de libros mediante busqueda de (Autores/Materia/Titulo)\n";
		cout << "4. Ver cantidad total de unidades de un libro\n";
		cout << "5. Ver Disponibilidad para prestamos de un Libro\n";
		cout << "6. Ver lista materias\n";
		cout << "7. Mostrar cantidad total de libros disponibles\n";
		cout << "8. Agregar Libro\n";
		cout << "9. Eliminar Libro\n";
		cout << "10. Salir\n";
		cout << "\n==================================\n";
		cout << "Digite un numero: "; cin>>Comprobar; cout << "\n";
		system("pause");
		system("cls");
		try
		{
			if (Comprobar != "1" && Comprobar != "2" && Comprobar != "3" && Comprobar != "4" && Comprobar != "5" && Comprobar != "6" && Comprobar != "7" && Comprobar != "8" && Comprobar != "9" && Comprobar != "10") {
				throw Comprobar;
			}
			else {
				string titulo, autor , materia ,anno , descripcion, filtrodebusqueda;
				do {
					switch (stoi(Comprobar)) {
					case 1:
						cout << "===============================\n";
						Global.MostarLibros();
						cout << "\n===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 2:
						cout << "===============================\n";
						cout << "Digite el ID: ";
						cin >> ID;
						cout << " \n";
						cout << "===============================\n";
						Global.MostarLibro(ID);
						cout << "===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 3:
						cout << "===============================\n";
						cin.ignore();
						cout << "Escriba el criterio de busqueda (Materia,Titulo,Autor)\n";
						getline(cin, filtrodebusqueda);
						Global.Coleccion.mostrarListaFiltrada(filtrodebusqueda);
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 4:
						cout << "===============================\n";
						cin.ignore();
						cout << "Digite un nombre: ";
						getline(cin, parametros);
						cout << " \n";
						cout << "===============================\n";
						Global.MostrarCantidadLibrosEspc(parametros);
						cout << "===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 5:
						cout << "===============================\n";
						cin.ignore();
						cout << "Digite un nombre: ";
						getline(cin, parametros);
						cout << " \n";
						cout << "===============================\n";
						//cout << "La cantidad de libros disponibles es de: ";
						Global.MostrarDisp(parametros); cout << "\n";
						cout << "\n===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 6:
						cout << "==============================\n";
						cout << "\nLas materias son: \n\n";
						Global.MostarMaterias();
						cout << "\n=================================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 7:
						cout << "==============================\n";
						cout << "\nEl numero de libros totales son: " << Global.Coleccion.cantidadTotalNodos() << "\n";
						cout << "\n=================================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 8:
						cout << "===============================\n";
						cout << "Digite el Titulo: " << endl;
						fflush(stdin);
						cin.ignore();
						getline(cin, titulo);
						cout << "Digite el Autor/Autores" << endl;
						getline(cin, autor);
						cout << "Digite la materia:" << endl;
						getline(cin, materia);
						cout << "Digite el Anno: " << endl;
						getline(cin, anno);
						cout << "Digite la descripcion: " << endl;
						getline(cin, descripcion);
						cout << " \n";
						cout << "===============================\n";
						Libro* Nuevo;
						Nuevo = new Libro(titulo, autor, materia, anno, descripcion, 1);
						Global.AgregarLibro(Nuevo);
						cout << "El libro ha sido creado exitosamente\n";
						cout << Nuevo->toString();
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 9:
						cout << "===============================\n";
						cout << "Digite el ID: ";
						cin >> ID;
						cout << "\n===============================\n";
						if (Global.EliminarLibro(ID) == false) {

							cout << "\nEl libro no existe\n\n";

						}
						else {

							cout << "\nEl libro a sido eliminado con exito\n\n";

						}
						cout << "===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 10:
						cout << "===============================\n";
						cout << "Cerrando el Menu \n";
						cout << "===============================\n";
						Finalizar = 1;
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					}
				} while (FinalizarSub != 1);
				FinalizarSub = 0;
			}


		}
		catch (string Comprobar)
		{
			cout << "===============================\n";
			cout << "\nEl numero que digito  es incorrecto, vuelva a intentar\n\n";
			cout << "===============================\n";
			system("pause");
			system("cls");
		}
	} while (Finalizar != 1);
	Finalizar = 0;
}

void Control::MenuUsuarios(Usuario* U)
{
	Usuario* Cliente = U;

	int Finalizar = 0, FinalizarSub=0;
	do {
		string ID;
		string Comprobar;
		cout << "============(" << Cliente->getNombre() << ")============\n\n";
		cout << "1. Agregar Usuario\n";
		cout << "2. Mostar Usuarios\n";
		cout << "3. Mostar Usuario Especifico\n";
		cout << "4. Eliminar Usuario\n";
		cout << "5. Realizar Prestamo\n";
		cout << "6. Ver mis prestamos\n";
		cout << "7. Ver mi cantidad de prestamos\n";
		cout << "8. Ver mi Usuario\n";
		cout << "9. Salir\n\n";
		cout << "==================================\n";
		cout << "Digite un numero: ";
		cin >> Comprobar;
		system("pause");
		system("cls");
		try
		{
			if (Comprobar != "1" && Comprobar != "2" && Comprobar != "3" && Comprobar != "4" && Comprobar != "5" && Comprobar != "6" && Comprobar != "7" && Comprobar != "8" && Comprobar != "9") {
				throw Comprobar;
			}
			else {
				string Nombre; bool Estado = false; int Cantidad = 0; 
				do {
					switch (stoi(Comprobar)) {
					case 1:
						cout << "===============================\n";
						cin.ignore();
						cout << "\nDigite el Nombre: \n";
						getline(cin, Nombre);
						cout << "\n\n===============================\n";
						Usuario* Nuevo;
						Nuevo = new Usuario(Nombre, 1);
						Global.AgregarUsuario(Nuevo);
						cout << "El usuario ha sido creado exitosamente\n";
						cout << Nuevo->toString();
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 2:
						cout << "===============================\n";
						Global.MostarUsuarios();
						cout << "===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
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
						system("pause");
						system("cls");
						break;
					case 4:
						cout << "===============================\n";
						cout << "Digite el ID: ";
						cin >> ID;
						cout << "\n===============================\n";
						if (Global.EliminarUsuario(ID) == false) {

							cout << "\nEl usuario no existe\n\n";

						}
						else {

							cout << "\nUsuario a sido eliminado con exito\n\n";

						}
						cout << "===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 5:
						MenuPrestamo(Cliente);
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 6:
						cout << "===============================\n";
						Cliente->mostrarPrestamos();
						cout << "===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 7:
						cout << "===============================\n";
						cout << "La cantidad de prestamos del usuario " << Cliente->getNombre() << " es de: ";
						cout<<Cliente->cantidadPrestamos();
						cout << "\n===============================\n";
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 8:
						cout << "Su usuario es: \n";
						cout<<Cliente->toString();
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 9:
						cout << "===============================\n";
						cout << "\nCerrando el Menu \n\n";
						cout << "===============================\n";
						Finalizar = 1;
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					}
				} while (FinalizarSub != 1);
				FinalizarSub = 0;
			}

		}
		catch (string Comprobar)
		{
			cout << "===============================\n";
			cout << "\nEl numero que digito  es incorrecto, vuelva a intentar\n\n";
			cout << "===============================\n";
			system("pause");
			system("cls");
		}
	} while (Finalizar != 1);
	Finalizar = 0;
}

void Control::MenuPrestamo(Usuario* U)
{
	Usuario* Cliente = U;
	int Finalizar = 0, FinalizarSub = 0;
	string Comprobar = "", Comprobar2 = "";

	do {
		cout << "============"<<Cliente->getNombre()<<"============\n";
		cout << "1. Solocitar\n";
		cout << "2. Devolucion\n";
		cout << "3. Salir\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		system("pause");
		system("cls");
		try
		{
			if (Comprobar != "1" && Comprobar != "2" && Comprobar != "3") {
				throw Comprobar;
			}
			else {
				
				do {
					string titulo, diaInicial, diaVencimiento, id, idprestamo, libroadevolver;
					switch (stoi(Comprobar))
					{
					case 1:
						if (Cliente->cantidadPrestamos() < 8 && Cliente->getEstado() == true) {
							cout << "==================================\n";
							cin.ignore();
							cout << "Digite el titulo del libro que desea: " << endl;
							getline(cin, titulo);
							id = Global.Coleccion.LibroDisponible(titulo);

							if (id == "0") {
								cout << "\nEl libro no se encuentra disponible\n\n";
								cout << "==================================\n";
								system("pause");
								system("cls");
								FinalizarSub = 1;
								break;
							}
							else {
								cout << "Digite le fecha inicial:\n";
								getline(cin, diaInicial);
								cout << "Digite el dia el fecha de vencimiento(3 dias despues)\n";
								getline(cin, diaVencimiento);
								cout << "==================================\n";
								system("pause");
								system("cls");
								Prestamo* prestamoNuevo;
								prestamoNuevo = new Prestamo(id, Cliente->getId(), diaInicial, diaVencimiento);
								Global.Coleccion.cambioEstado(id);//Pasando el estado del libro de true a false
								Cliente->prestamo(prestamoNuevo);
								cout << "==================================\n";
								cout << "Prestamo realizado exitosamente:\n";
								Cliente->prestamos.mostrarEspecifico(prestamoNuevo->getId());
								system("pause");
								system("cls");
							}
						} else
						{
							cout << "El usuario ya tiene el maximo numero de prestamos permitidos\n";
							system("pause");
							system("cls");
						}
						FinalizarSub = 1;
						break;
					case 2:

						cout<<"Digite el id del prestamo que desea devolver:\n";
						cin >> idprestamo;
						if (Cliente->checkPrestamo(idprestamo) == false) {
							cout << "No tiene prestamos disponibles para devolver" << endl;
							system("pause");
							system("cls");
							FinalizarSub = 1;
							break;
						}
						else {
							
							libroadevolver = Cliente->devolver(idprestamo);
							Global.Coleccion.cambioEstado(libroadevolver);
							cout << "El libro ha sido devuelto con exito\n";
							system("pause");
							system("cls");
							FinalizarSub = 1;
							break;
						}
						break;
					case 3:
						cout << "===============================\n";
						cout << "\nCerrando el menu\n\n";
						cout << "===============================\n";
						FinalizarSub = 1;
						Finalizar = 1;
						system("pause");
						system("cls");
						break;
					}
				} while (FinalizarSub != 1);
				FinalizarSub = 0;
			}

		}
		catch (string Comprobar)
		{
			cout << "===============================\n";
			cout << "\nEl numero que digito  es incorrecto, vuelva a intentar\n\n";
			cout << "===============================\n";
			system("pause");
			system("cls");
		}
	} while (Finalizar != 1);


}

void Control::MenuPrincipal()
{
	int Finalizar = 0, FinalizarSub = 0, Numero = 0;
	string Comprobar = "", Comprobar2 = "";

	do {
		cout << "============Bienvenido============\n";
		cout << "\n1. Iniciar secion\n";
		cout << "2. Salir\n\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		system("pause");
		system("cls");
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
						system("pause");
						system("cls");
						break;
					case 2:
						cout << "===============================\n";
						cout << "Cerrando el Programa\n";
						cout << "===============================\n";
						FinalizarSub = 1;
						Finalizar = 1;
						system("pause");
						system("cls");
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
			system("pause");
			system("cls");
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
		cout << "\n1. Menu Libros\n";
		cout << "2. Menu Usuarios\n";
		cout << "3. Salir\n\n";
		cout << "==================================\n";
		cout << "Digite un numero: "; cin >> Comprobar; cout << "\n";
		system("pause");
		system("cls");
		try
		{
			if (Comprobar != "1" && Comprobar != "2"&& Comprobar != "3") {
				throw Comprobar;
				
			}
			else {
				do {
					switch (stoi(Comprobar))
					{
					case 1:
						MenuLibros(User);
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 2:
						MenuUsuarios(User);
						FinalizarSub = 1;
						system("pause");
						system("cls");
						break;
					case 3:
						cout << "===============================\n";
						cout << "\nCerrando el menu\n";
						cout << "===============================\n";
						FinalizarSub = 1;
						Finalizar=1;
						system("pause");
						system("cls");
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
			system("pause");
			system("cls");
		}
	} while (Finalizar != 1);

}
void Control::LlenaListas() {

		Libro* l1 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 1);
		Libro* l2 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 0);
		Libro* l3 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 1);
		Libro* l4 = new Libro("Vida Marina", "Bob Gibbons", "Biologia", "2003", "Todo sobre los ecosistemas marinos", 1);

		Libro* l5 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 1);
		Libro* l6 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 0);
		Libro* l7 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 1);
		Libro* l8 = new Libro("Mort", "Terry Pratchett", "Novela", "2001", "Una novela de Discomundo", 0);

		Libro* l9 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 1);
		Libro* l10 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 1);
		Libro* l11 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 1);
		Libro* l12 = new Libro("Quimica General", "Kenneth A. Goldsby", "Quimica", "2011", "Todo sobre quimica general", 0);

		Libro* l13 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);
		Libro* l14 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);
		Libro* l15 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);
		Libro* l16 = new Libro("Hunter x Hunter", "Yoshihiro Togashi", "Manga", "1997", "Historia de ficcion", 1);

		Usuario* u1 = new Usuario("Victor Segura", 1);
		Usuario* u2 = new Usuario("Kevin Montero", 0);

		Global.AgregarUsuario(u1); Global.AgregarUsuario(u2);
		Global.AgregarLibro(l1); Global.AgregarLibro(l2); Global.AgregarLibro(l3); Global.AgregarLibro(l4);
		Global.AgregarLibro(l5); Global.AgregarLibro(l6); Global.AgregarLibro(l7); Global.AgregarLibro(l8);
		Global.AgregarLibro(l9); Global.AgregarLibro(l10); Global.AgregarLibro(l11); Global.AgregarLibro(l12);
		Global.AgregarLibro(l13); Global.AgregarLibro(l14); Global.AgregarLibro(l15); Global.AgregarLibro(l16);

}
