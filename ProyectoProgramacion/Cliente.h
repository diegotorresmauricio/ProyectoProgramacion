#pragma once
#include "Bdd.h"

#include "ClienteAlta.h"
#include "ClienteEditar.h"
#include "ClienteEliminar.h"

namespace ProyectoProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Cliente
	/// </summary>
	public ref class Cliente : public System::Windows::Forms::Form
	{
	public:
		Cliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew Bdd();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnNewCli;
	private: System::Windows::Forms::Button^ btnEditCli;

	private: System::Windows::Forms::Button^ btnDelCli;
	private: System::Windows::Forms::DataGridView^ dataGridCli;

	private: Bdd^ data;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnNewCli = (gcnew System::Windows::Forms::Button());
			this->btnEditCli = (gcnew System::Windows::Forms::Button());
			this->btnDelCli = (gcnew System::Windows::Forms::Button());
			this->dataGridCli = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCli))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Clientes";
			// 
			// btnNewCli
			// 
			this->btnNewCli->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewCli->Location = System::Drawing::Point(16, 50);
			this->btnNewCli->Name = L"btnNewCli";
			this->btnNewCli->Size = System::Drawing::Size(129, 37);
			this->btnNewCli->TabIndex = 1;
			this->btnNewCli->Text = L"Nuevo";
			this->btnNewCli->UseVisualStyleBackColor = true;
			this->btnNewCli->Click += gcnew System::EventHandler(this, &Cliente::btnNewCli_Click);
			// 
			// btnEditCli
			// 
			this->btnEditCli->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditCli->Location = System::Drawing::Point(220, 50);
			this->btnEditCli->Name = L"btnEditCli";
			this->btnEditCli->Size = System::Drawing::Size(129, 37);
			this->btnEditCli->TabIndex = 2;
			this->btnEditCli->Text = L"Editar";
			this->btnEditCli->UseVisualStyleBackColor = true;
			this->btnEditCli->Click += gcnew System::EventHandler(this, &Cliente::btnEditCli_Click);
			// 
			// btnDelCli
			// 
			this->btnDelCli->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelCli->Location = System::Drawing::Point(413, 50);
			this->btnDelCli->Name = L"btnDelCli";
			this->btnDelCli->Size = System::Drawing::Size(129, 37);
			this->btnDelCli->TabIndex = 3;
			this->btnDelCli->Text = L"Eliminar";
			this->btnDelCli->UseVisualStyleBackColor = true;
			this->btnDelCli->Click += gcnew System::EventHandler(this, &Cliente::btnDelCli_Click);
			// 
			// dataGridCli
			// 
			this->dataGridCli->AllowUserToOrderColumns = true;
			this->dataGridCli->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCli->Location = System::Drawing::Point(16, 126);
			this->dataGridCli->Name = L"dataGridCli";
			this->dataGridCli->Size = System::Drawing::Size(526, 236);
			this->dataGridCli->TabIndex = 4;
			// 
			// Cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->dataGridCli);
			this->Controls->Add(this->btnDelCli);
			this->Controls->Add(this->btnEditCli);
			this->Controls->Add(this->btnNewCli);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Cliente";
			this->Text = L"Cliente";
			this->Load += gcnew System::EventHandler(this, &Cliente::Cliente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCli))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void btnNewCli_Click(System::Object^ sender, System::EventArgs^ e) {
	ProyectoProgramacion::ClienteAlta^ clienteAlta = gcnew ProyectoProgramacion::ClienteAlta();
	clienteAlta->Show();
}
private: System::Void btnEditCli_Click(System::Object^ sender, System::EventArgs^ e) {
	ProyectoProgramacion::ClienteEditar^ clienteEditar = gcnew ProyectoProgramacion::ClienteEditar();
	clienteEditar->Show();
}
private: System::Void btnDelCli_Click(System::Object^ sender, System::EventArgs^ e) {
	ProyectoProgramacion::ClienteEliminar^ clienteEliminar = gcnew ProyectoProgramacion::ClienteEliminar();
	clienteEliminar->Show();
}
private: System::Void Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}

public: void Consulta() {
	this->data->abrirConexion();
	this->dataGridCli->DataSource = this->data->getData();
	this->data->cerrarConexion();
}

};
}
