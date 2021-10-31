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
	/// Resumen de Repuesto
	/// </summary>
	public ref class Repuesto : public System::Windows::Forms::Form
	{
	public:
		Repuesto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data1 = gcnew Bdd();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Repuesto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnNewRep;
	private: System::Windows::Forms::Button^ btnEditRep;
	private: System::Windows::Forms::Button^ btnDelRep;
	private: System::Windows::Forms::DataGridView^ dataGridRep;
	private: Bdd^ data1;
	private: System::Windows::Forms::TextBox^ txtNewRepMarca;
	private: System::Windows::Forms::TextBox^ txtNewRepTipo;
	private: System::Windows::Forms::TextBox^ txtNewRepValor;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->btnNewRep = (gcnew System::Windows::Forms::Button());
			this->btnEditRep = (gcnew System::Windows::Forms::Button());
			this->btnDelRep = (gcnew System::Windows::Forms::Button());
			this->dataGridRep = (gcnew System::Windows::Forms::DataGridView());
			this->txtNewRepMarca = (gcnew System::Windows::Forms::TextBox());
			this->txtNewRepTipo = (gcnew System::Windows::Forms::TextBox());
			this->txtNewRepValor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRep))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Repuestos";
			// 
			// btnNewRep
			// 
			this->btnNewRep->BackColor = System::Drawing::Color::LimeGreen;
			this->btnNewRep->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewRep->Location = System::Drawing::Point(133, 34);
			this->btnNewRep->Name = L"btnNewRep";
			this->btnNewRep->Size = System::Drawing::Size(129, 37);
			this->btnNewRep->TabIndex = 2;
			this->btnNewRep->Text = L"Nuevo";
			this->btnNewRep->UseVisualStyleBackColor = false;
			this->btnNewRep->Click += gcnew System::EventHandler(this, &Repuesto::btnNewRep_Click);
			// 
			// btnEditRep
			// 
			this->btnEditRep->BackColor = System::Drawing::Color::Gold;
			this->btnEditRep->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditRep->Location = System::Drawing::Point(268, 34);
			this->btnEditRep->Name = L"btnEditRep";
			this->btnEditRep->Size = System::Drawing::Size(129, 37);
			this->btnEditRep->TabIndex = 3;
			this->btnEditRep->Text = L"Editar";
			this->btnEditRep->UseVisualStyleBackColor = false;
			this->btnEditRep->Click += gcnew System::EventHandler(this, &Repuesto::btnEditRep_Click);
			// 
			// btnDelRep
			// 
			this->btnDelRep->BackColor = System::Drawing::Color::Red;
			this->btnDelRep->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelRep->Location = System::Drawing::Point(403, 34);
			this->btnDelRep->Name = L"btnDelRep";
			this->btnDelRep->Size = System::Drawing::Size(129, 37);
			this->btnDelRep->TabIndex = 4;
			this->btnDelRep->Text = L"Eliminar";
			this->btnDelRep->UseVisualStyleBackColor = false;
			this->btnDelRep->Click += gcnew System::EventHandler(this, &Repuesto::btnDelRep_Click);
			// 
			// dataGridRep
			// 
			this->dataGridRep->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridRep->Location = System::Drawing::Point(16, 240);
			this->dataGridRep->Name = L"dataGridRep";
			this->dataGridRep->Size = System::Drawing::Size(526, 122);
			this->dataGridRep->TabIndex = 5;
			// 
			// txtNewRepMarca
			// 
			this->txtNewRepMarca->Location = System::Drawing::Point(237, 100);
			this->txtNewRepMarca->Name = L"txtNewRepMarca";
			this->txtNewRepMarca->Size = System::Drawing::Size(295, 20);
			this->txtNewRepMarca->TabIndex = 6;
			// 
			// txtNewRepTipo
			// 
			this->txtNewRepTipo->Location = System::Drawing::Point(237, 150);
			this->txtNewRepTipo->Name = L"txtNewRepTipo";
			this->txtNewRepTipo->Size = System::Drawing::Size(295, 20);
			this->txtNewRepTipo->TabIndex = 7;
			// 
			// txtNewRepValor
			// 
			this->txtNewRepValor->Location = System::Drawing::Point(237, 197);
			this->txtNewRepValor->Name = L"txtNewRepValor";
			this->txtNewRepValor->Size = System::Drawing::Size(295, 20);
			this->txtNewRepValor->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(91, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 21);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Marca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(91, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 21);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Tipo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(91, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 21);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Valor";
			// 
			// Repuesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNewRepValor);
			this->Controls->Add(this->txtNewRepTipo);
			this->Controls->Add(this->txtNewRepMarca);
			this->Controls->Add(this->dataGridRep);
			this->Controls->Add(this->btnDelRep);
			this->Controls->Add(this->btnEditRep);
			this->Controls->Add(this->btnNewRep);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Repuesto";
			this->Text = L"Repuesto";
			this->Load += gcnew System::EventHandler(this, &Repuesto::Repuesto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRep))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnNewRep_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data1->abrirConexion();
		this->data1->insertarRepuesto(this->txtNewRepMarca->Text, this->txtNewRepTipo->Text, this->txtNewRepValor->Text);
		this->data1->cerrarConexion();

		this->Consulta1();
	}
	private: System::Void btnEditRep_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnDelRep_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Repuesto_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta1();
}
	public: void Consulta1() {
		this->data1->abrirConexion();
		this->dataGridRep->DataSource = this->data1->getDataRep();
		this->data1->cerrarConexion();
	}
};
}
