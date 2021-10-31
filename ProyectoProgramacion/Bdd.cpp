#include "Bdd.h"
using namespace std;

Bdd::Bdd() {

	this->connectionString = "datasource=localhost; username=root; password=""; database=taller; SslMode = none";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void Bdd::abrirConexion() {
	this->conn->Open();
} //linea con error al momento de ejecutar arroja una excepcion //SOLUCIONADO

void Bdd::cerrarConexion() {
	this->conn->Close();
}
										//datos cliente
DataTable^ Bdd::getData() {
	String^ sql = "select * from cliente";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Bdd::insertarCliente(String^ nom, String^ ap, String^ mail, String^ dni, String^ dir, String^ tel) {
	String^ sql = "insert into cliente(Nombre, Apellido, Mail, DNI, Direccion, Telefono) values ('"+nom+"', '"+ap+"', '"+mail+"', '"+dni+"', '"+dir+"', '"+tel+"' )";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e){
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarCliente(String^ nom, String^ ap, String^ mail, String^ dni, String^ dir, String^ tel, String^ id) {
	String^ sql = "update cliente set Nombre = '" + nom + "', Apellido = '" + ap + "', Mail = '" + mail + "', DNI = '" + dni + "', Direccion = '" + dir + "', Telefono = '" + tel + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e){
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarCliente(String^ nom, String^ ap, String^ mail, String^ dni, String^ dir, String^ tel, String^ id) {
	String^ sql = "delete from cliente where IDCliente = '"+id+"'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}
											//datos repuesto
DataTable^ Bdd::getDataRep() {
	String^ sql = "select * from repuesto";
	MySqlCommand^ cursor1 = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data1 = gcnew MySqlDataAdapter(cursor1);
	DataTable^ tabla1 = gcnew DataTable();
	data1->Fill(tabla1);
	return tabla1;
}

void Bdd::insertarRepuesto(String^ marca, String^ tipo, String^ valor){
	String^ sql = "insert into repuesto(Marca, Tipo, Valor) values ('"+marca+"', '"+tipo+"', "+valor+")";
	MySqlCommand^ cursor1 = gcnew MySqlCommand(sql, this->conn);
	try{
		cursor1->ExecuteNonQuery();
	}
	catch (Exception^ e){
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarRepuesto(String^ marca, String^ tipo, String^ valor, String^ idRep) {
	String^ sql = "update repuesto set IDRepuesto = "+idRep+", Marca = '" + marca + "', Tipo = '" + tipo + "', Valor = " + valor + "";
	MySqlCommand^ cursor1 = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor1->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarRepuesto(String^ marca, String^ tipo, String^ valor, String^ idRep) {
	String^sql = "delete from repuesto where IDRepuesto = " + idRep + "";
	MySqlCommand^ cursor1 = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor1->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}



											//datos presupuesto
DataTable^ Bdd::getDataPres() {
	String^ sql = "select * from presupuesto";
	MySqlCommand^ cursor2 = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data2 = gcnew MySqlDataAdapter(cursor2);
	DataTable^ tabla2 = gcnew DataTable();
	data2->Fill(tabla2);
	return tabla2;
}


void Bdd::insertarPresupuesto(String^ idCli, String^ valor, String^ mdo, String^ total) {
	String^ sql = "insert into presupuesto(IDCliente, Valor, ManoObra, Total) values ("+idCli+", "+valor+", "+mdo+", "+total+")";
	MySqlCommand^ cursor2 = gcnew MySqlCommand(sql, this->conn);
	try{
		cursor2->ExecuteNonQuery();
	}
	catch (Exception^ e){
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarPresupuesto(String^ idCli, String^ valor, String^ mdo, String^ total, String^ idPres) {
	String^ sql = "update presupuesto set IDCliente = '"+idCli+"', Valor = '"+valor+"', ManoObra = '"+mdo+"', Total = '"+total+"', "+idPres+"";
	MySqlCommand^ cursor2 = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor2->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarPresupuesto(String^ idCli, String^ valor, String^ mdo, String^ total, String^ idPres) {
	String^ sql = "delete from presupuesto where id = " + idPres + "";
	MySqlCommand^ cursor2 = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor2->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
											//datos conocimiento
DataTable^ Bdd::getDataKnow() {
	String^ sql = "select * from conocimiento";
	MySqlCommand^ cursor3 = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data3 = gcnew MySqlDataAdapter(cursor3);
	DataTable^ tabla3 = gcnew DataTable();
	data3->Fill(tabla3);
	return tabla3;
}

void Bdd::insertarConocimiento(String^ link, String^ desc) {
	String^ sql = "insert into conocimiento(link, descripcion) values ('"+link+"', '"+desc+"')";
	MySqlCommand^ cursor3 = gcnew MySqlCommand(sql, this->conn);
	try{
		cursor3->ExecuteNonQuery();
	}
	catch (Exception^ e){
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarConocimiento(String^ link, String^ desc, String^ idCon) {
	String^ sql = "update conocimiento set ID = "+idCon+", link = '" + link + "', descripcion = '" + desc + "'";
	MySqlCommand^ cursor3 = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor3->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarConocimiento(String^ link, String^ desc, String^ idCon) {
	String^ sql = "delete from conocimiento where ID = "+idCon+"";
	MySqlCommand^ cursor3 = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor3->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}