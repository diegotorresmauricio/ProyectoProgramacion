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
	/// Resumen de Presupuesto
	/// </summary>
	public ref class Presupuesto : public System::Windows::Forms::Form
	{
	public:
		Presupuesto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data2 = gcnew Bdd();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Presupuesto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnNewPres;
	private: System::Windows::Forms::Button^ btnEditPres;
	private: System::Windows::Forms::Button^ btnDelPres;
	private: System::Windows::Forms::DataGridView^ dataGridPres;

	private: Bdd^ data2;
	private: System::Windows::Forms::TextBox^ txtValRepNewPres;
	private: System::Windows::Forms::TextBox^ txtMdoNewPres;
	private: System::Windows::Forms::TextBox^ txtTotalNewPres;



	private: System::Windows::Forms::TextBox^ txtCliNewPres;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			this->btnNewPres = (gcnew System::Windows::Forms::Button());
			this->btnEditPres = (gcnew System::Windows::Forms::Button());
			this->btnDelPres = (gcnew System::Windows::Forms::Button());
			this->dataGridPres = (gcnew System::Windows::Forms::DataGridView());
			this->txtValRepNewPres = (gcnew System::Windows::Forms::TextBox());
			this->txtMdoNewPres = (gcnew System::Windows::Forms::TextBox());
			this->txtTotalNewPres = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewPres = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPres))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Presupuestos";
			// 
			// btnNewPres
			// 
			this->btnNewPres->BackColor = System::Drawing::Color::LimeGreen;
			this->btnNewPres->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewPres->Location = System::Drawing::Point(133, 34);
			this->btnNewPres->Name = L"btnNewPres";
			this->btnNewPres->Size = System::Drawing::Size(129, 37);
			this->btnNewPres->TabIndex = 2;
			this->btnNewPres->Text = L"Nuevo";
			this->btnNewPres->UseVisualStyleBackColor = false;
			this->btnNewPres->Click += gcnew System::EventHandler(this, &Presupuesto::btnNewPres_Click);
			// 
			// btnEditPres
			// 
			this->btnEditPres->BackColor = System::Drawing::Color::Gold;
			this->btnEditPres->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditPres->Location = System::Drawing::Point(268, 34);
			this->btnEditPres->Name = L"btnEditPres";
			this->btnEditPres->Size = System::Drawing::Size(129, 37);
			this->btnEditPres->TabIndex = 3;
			this->btnEditPres->Text = L"Editar";
			this->btnEditPres->UseVisualStyleBackColor = false;
			this->btnEditPres->Click += gcnew System::EventHandler(this, &Presupuesto::btnEditPres_Click);
			// 
			// btnDelPres
			// 
			this->btnDelPres->BackColor = System::Drawing::Color::Red;
			this->btnDelPres->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelPres->Location = System::Drawing::Point(403, 34);
			this->btnDelPres->Name = L"btnDelPres";
			this->btnDelPres->Size = System::Drawing::Size(129, 37);
			this->btnDelPres->TabIndex = 4;
			this->btnDelPres->Text = L"Eliminar";
			this->btnDelPres->UseVisualStyleBackColor = false;
			this->btnDelPres->Click += gcnew System::EventHandler(this, &Presupuesto::btnDelPres_Click);
			// 
			// dataGridPres
			// 
			this->dataGridPres->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridPres->Location = System::Drawing::Point(16, 240);
			this->dataGridPres->Name = L"dataGridPres";
			this->dataGridPres->Size = System::Drawing::Size(526, 122);
			this->dataGridPres->TabIndex = 5;
			// 
			// txtValRepNewPres
			// 
			this->txtValRepNewPres->Location = System::Drawing::Point(432, 97);
			this->txtValRepNewPres->Name = L"txtValRepNewPres";
			this->txtValRepNewPres->Size = System::Drawing::Size(100, 20);
			this->txtValRepNewPres->TabIndex = 6;
			// 
			// txtMdoNewPres
			// 
			this->txtMdoNewPres->Location = System::Drawing::Point(432, 150);
			this->txtMdoNewPres->Name = L"txtMdoNewPres";
			this->txtMdoNewPres->Size = System::Drawing::Size(100, 20);
			this->txtMdoNewPres->TabIndex = 7;
			// 
			// txtTotalNewPres
			// 
			this->txtTotalNewPres->Location = System::Drawing::Point(432, 202);
			this->txtTotalNewPres->Name = L"txtTotalNewPres";
			this->txtTotalNewPres->Size = System::Drawing::Size(100, 20);
			this->txtTotalNewPres->TabIndex = 8;
			// 
			// txtCliNewPres
			// 
			this->txtCliNewPres->Location = System::Drawing::Point(133, 97);
			this->txtCliNewPres->Name = L"txtCliNewPres";
			this->txtCliNewPres->Size = System::Drawing::Size(100, 20);
			this->txtCliNewPres->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 21);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Cliente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(280, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 21);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Valor Repuesto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(282, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 21);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Mano de Obra";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(282, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 21);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Total";
			// 
			// Presupuesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCliNewPres);
			this->Controls->Add(this->txtTotalNewPres);
			this->Controls->Add(this->txtMdoNewPres);
			this->Controls->Add(this->txtValRepNewPres);
			this->Controls->Add(this->dataGridPres);
			this->Controls->Add(this->btnDelPres);
			this->Controls->Add(this->btnEditPres);
			this->Controls->Add(this->btnNewPres);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Presupuesto";
			this->Text = L"Presupuesto";
			this->Load += gcnew System::EventHandler(this, &Presupuesto::Presupuesto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPres))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnNewPres_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data2->abrirConexion();
		this->data2->insertarPresupuesto(this->txtCliNewPres->Text, this->txtValRepNewPres->Text, this->txtMdoNewPres->Text, this->txtTotalNewPres->Text);
		this->data2->cerrarConexion();

		this->Consulta();
	}

	private: System::Void btnEditPres_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void btnDelPres_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Presupuesto_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
}
	 public: void Consulta() {
		 this->data2->abrirConexion();
		 this->dataGridPres->DataSource = this->data2->getDataPres();
		 this->data2->cerrarConexion();
	   }


};
}
