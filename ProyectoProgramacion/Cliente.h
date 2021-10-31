#pragma once
#include "Bdd.h"


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


	private: System::Windows::Forms::Button^ btnDelCli;
	private: System::Windows::Forms::DataGridView^ dataGridCli;

	private: Bdd^ data;
	private: System::Windows::Forms::Button^ btnCliEdit;
	private: System::Windows::Forms::TextBox^ txtCliNewName;
	private: System::Windows::Forms::TextBox^ txtCliNewSecond;
	private: System::Windows::Forms::TextBox^ txtCliNewMail;
	private: System::Windows::Forms::TextBox^ txtCliNewDni;
	private: System::Windows::Forms::TextBox^ txtCliNewAdress;
	private: System::Windows::Forms::TextBox^ txtCliNewTel;







	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

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
			this->btnDelCli = (gcnew System::Windows::Forms::Button());
			this->dataGridCli = (gcnew System::Windows::Forms::DataGridView());
			this->btnCliEdit = (gcnew System::Windows::Forms::Button());
			this->txtCliNewName = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewSecond = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewMail = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewDni = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewAdress = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewTel = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->btnNewCli->BackColor = System::Drawing::Color::LimeGreen;
			this->btnNewCli->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewCli->Location = System::Drawing::Point(133, 34);
			this->btnNewCli->Name = L"btnNewCli";
			this->btnNewCli->Size = System::Drawing::Size(129, 37);
			this->btnNewCli->TabIndex = 1;
			this->btnNewCli->Text = L"Nuevo";
			this->btnNewCli->UseVisualStyleBackColor = false;
			this->btnNewCli->Click += gcnew System::EventHandler(this, &Cliente::btnNewCli_Click);
			// 
			// btnDelCli
			// 
			this->btnDelCli->BackColor = System::Drawing::Color::Red;
			this->btnDelCli->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelCli->Location = System::Drawing::Point(403, 34);
			this->btnDelCli->Name = L"btnDelCli";
			this->btnDelCli->Size = System::Drawing::Size(129, 37);
			this->btnDelCli->TabIndex = 3;
			this->btnDelCli->Text = L"Eliminar";
			this->btnDelCli->UseVisualStyleBackColor = false;
			this->btnDelCli->Click += gcnew System::EventHandler(this, &Cliente::btnDelCli_Click);
			// 
			// dataGridCli
			// 
			this->dataGridCli->AllowUserToOrderColumns = true;
			this->dataGridCli->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCli->Location = System::Drawing::Point(16, 240);
			this->dataGridCli->Name = L"dataGridCli";
			this->dataGridCli->ReadOnly = true;
			this->dataGridCli->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridCli->Size = System::Drawing::Size(526, 122);
			this->dataGridCli->TabIndex = 4;
			// 
			// btnCliEdit
			// 
			this->btnCliEdit->BackColor = System::Drawing::Color::Gold;
			this->btnCliEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliEdit->Location = System::Drawing::Point(268, 34);
			this->btnCliEdit->Name = L"btnCliEdit";
			this->btnCliEdit->Size = System::Drawing::Size(129, 37);
			this->btnCliEdit->TabIndex = 5;
			this->btnCliEdit->Text = L"Editar";
			this->btnCliEdit->UseVisualStyleBackColor = false;
			// 
			// txtCliNewName
			// 
			this->txtCliNewName->Location = System::Drawing::Point(133, 94);
			this->txtCliNewName->Name = L"txtCliNewName";
			this->txtCliNewName->Size = System::Drawing::Size(129, 20);
			this->txtCliNewName->TabIndex = 6;
			// 
			// txtCliNewSecond
			// 
			this->txtCliNewSecond->Location = System::Drawing::Point(133, 149);
			this->txtCliNewSecond->Name = L"txtCliNewSecond";
			this->txtCliNewSecond->Size = System::Drawing::Size(129, 20);
			this->txtCliNewSecond->TabIndex = 7;
			// 
			// txtCliNewMail
			// 
			this->txtCliNewMail->Location = System::Drawing::Point(133, 200);
			this->txtCliNewMail->Name = L"txtCliNewMail";
			this->txtCliNewMail->Size = System::Drawing::Size(129, 20);
			this->txtCliNewMail->TabIndex = 8;
			// 
			// txtCliNewDni
			// 
			this->txtCliNewDni->Location = System::Drawing::Point(403, 94);
			this->txtCliNewDni->Name = L"txtCliNewDni";
			this->txtCliNewDni->Size = System::Drawing::Size(129, 20);
			this->txtCliNewDni->TabIndex = 9;
			// 
			// txtCliNewAdress
			// 
			this->txtCliNewAdress->Location = System::Drawing::Point(403, 149);
			this->txtCliNewAdress->Name = L"txtCliNewAdress";
			this->txtCliNewAdress->Size = System::Drawing::Size(129, 20);
			this->txtCliNewAdress->TabIndex = 10;
			// 
			// txtCliNewTel
			// 
			this->txtCliNewTel->Location = System::Drawing::Point(403, 200);
			this->txtCliNewTel->Name = L"txtCliNewTel";
			this->txtCliNewTel->Size = System::Drawing::Size(129, 20);
			this->txtCliNewTel->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(46, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 21);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Mail";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(287, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 21);
			this->label5->TabIndex = 15;
			this->label5->Text = L"DNI";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(287, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 21);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Direccion";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(287, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 21);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Telefono";
			// 
			// Cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCliNewTel);
			this->Controls->Add(this->txtCliNewAdress);
			this->Controls->Add(this->txtCliNewDni);
			this->Controls->Add(this->txtCliNewMail);
			this->Controls->Add(this->txtCliNewSecond);
			this->Controls->Add(this->txtCliNewName);
			this->Controls->Add(this->btnCliEdit);
			this->Controls->Add(this->dataGridCli);
			this->Controls->Add(this->btnDelCli);
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
	this->data->abrirConexion();
	this->data->insertarCliente(this->txtCliNewName->Text, this->txtCliNewSecond->Text, this->txtCliNewMail->Text, this->txtCliNewDni->Text, this->txtCliNewAdress->Text, this->txtCliNewTel->Text);
	this->data->cerrarConexion();

	this->Consulta();
}

private: System::Void btnDelCli_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}

public: void Consulta() {
	this->data->abrirConexion();
	this->dataGridCli->DataSource = this->data->getData();
	this->data->cerrarConexion();
}
/*
private: System::Void dataGridCli_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = Convert::ToString(dataGridCli->SelectedRows[0]->Cells[1]->Value);
	String^ apellido = Convert::ToString(dataGridCli->SelectedRows[0]->Cells[2]->Value);
	String^ mail = Convert::ToString(dataGridCli->SelectedRows[0]->Cells[3]->Value);
	String^ dni = Convert::ToString(dataGridCli->SelectedRows[0]->Cells[4]->Value);
	String^ direccion = Convert::ToString(dataGridCli->SelectedRows[0]->Cells[5]->Value);
	String^ telefono = Convert::ToString(dataGridCli->SelectedRows[0]->Cells[6]->Value);
	ProyectoProgramacion::ClienteEditar^ clienteEditar = gcnew ProyectoProgramacion::ClienteEditar();	
}
*/
};
}
