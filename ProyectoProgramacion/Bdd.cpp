#include "Bdd.h"

Bdd::Bdd() {

	this->connectionString = "datasource=localhost; username=root; password=""; database=taller; SslMode = none";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void Bdd::abrirConexion() {
	this->conn->Open();
} //linea con error al momento de ejecutar arroja una excepcion

void Bdd::cerrarConexion() {
	this->conn->Close();
}

DataTable^ Bdd::getData() {
	String^ sql = "select * from cliente";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}