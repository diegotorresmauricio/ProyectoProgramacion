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
	DataTable^ getDataRep();
	DataTable^ getDataPres();
	DataTable^ getDataKnow();
	void abrirConexion();
	void cerrarConexion();
	void insertarCliente(String^, String^, String^, String^, String^, String^);
	void editarCliente(String^, String^, String^, String^, String^, String^, String^);
	void eliminarCliente(String^, String^, String^, String^, String^, String^, String^);
	void insertarRepuesto(String^, String^, String^);
	void editarRepuesto(String^, String^, String^, String^);
	void eliminarRepuesto(String^, String^, String^, String^);
	void insertarPresupuesto(String^ idCli, String^ idRep, String^ mdo, String^ total);
	void editarPresupuesto(String^ idCli, String^ idRep, String^ mdo, String^ total, String^);
	void eliminarPresupuesto(String^ idCli, String^ idRep, String^ mdo, String^ total, String^);
	void insertarConocimiento(String^, String^);
	void editarConocimiento(String^, String^, String^);
	void eliminarConocimiento(String^, String^, String^);
};

