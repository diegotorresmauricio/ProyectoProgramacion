#include "Bdd.h"

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

//datos repuesto
DataTable^ Bdd::getDataRep() {
	String^ sql = "select * from repuesto";
	MySqlCommand^ cursor1 = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data1 = gcnew MySqlDataAdapter(cursor1);
	DataTable^ tabla1 = gcnew DataTable();
	data1->Fill(tabla1);
	return tabla1;
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



//datos conocimiento
DataTable^ Bdd::getDataKnow() {
	String^ sql = "select * from conocimiento";
	MySqlCommand^ cursor3 = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data3 = gcnew MySqlDataAdapter(cursor3);
	DataTable^ tabla3 = gcnew DataTable();
	data3->Fill(tabla3);
	return tabla3;
}