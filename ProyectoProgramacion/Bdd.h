#pragma once
using namespace std;
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

ref class Bdd
{
private:
	String^ connectionString;
	MySqlConnection^ conn;

public:
	Bdd();
	DataTable^ getData();
	void abrirConexion();
	void cerrarConexion();
};

