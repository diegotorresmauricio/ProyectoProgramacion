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
	/// Resumen de Conocimiento
	/// </summary>
	public ref class Conocimiento : public System::Windows::Forms::Form
	{
	public:
		Conocimiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data3 = gcnew Bdd();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Conocimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnNewKnow;
	private: System::Windows::Forms::Button^ btnEditKnow;
	private: System::Windows::Forms::Button^ btnDelKnow;
	private: System::Windows::Forms::DataGridView^ dataGridKnow;
	private: Bdd^ data3;
	private: System::Windows::Forms::TextBox^ txtLinkKnow;
	private: System::Windows::Forms::TextBox^ txtDescKnow;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtIDNewKnow;


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
			this->btnNewKnow = (gcnew System::Windows::Forms::Button());
			this->btnEditKnow = (gcnew System::Windows::Forms::Button());
			this->btnDelKnow = (gcnew System::Windows::Forms::Button());
			this->dataGridKnow = (gcnew System::Windows::Forms::DataGridView());
			this->txtLinkKnow = (gcnew System::Windows::Forms::TextBox());
			this->txtDescKnow = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtIDNewKnow = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridKnow))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Conocimiento";
			// 
			// btnNewKnow
			// 
			this->btnNewKnow->BackColor = System::Drawing::Color::LimeGreen;
			this->btnNewKnow->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewKnow->Location = System::Drawing::Point(133, 34);
			this->btnNewKnow->Name = L"btnNewKnow";
			this->btnNewKnow->Size = System::Drawing::Size(129, 37);
			this->btnNewKnow->TabIndex = 2;
			this->btnNewKnow->Text = L"Nuevo";
			this->btnNewKnow->UseVisualStyleBackColor = false;
			this->btnNewKnow->Click += gcnew System::EventHandler(this, &Conocimiento::btnNewKnow_Click);
			// 
			// btnEditKnow
			// 
			this->btnEditKnow->BackColor = System::Drawing::Color::Gold;
			this->btnEditKnow->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditKnow->Location = System::Drawing::Point(268, 34);
			this->btnEditKnow->Name = L"btnEditKnow";
			this->btnEditKnow->Size = System::Drawing::Size(129, 37);
			this->btnEditKnow->TabIndex = 3;
			this->btnEditKnow->Text = L"Editar";
			this->btnEditKnow->UseVisualStyleBackColor = false;
			this->btnEditKnow->Click += gcnew System::EventHandler(this, &Conocimiento::btnEditKnow_Click);
			// 
			// btnDelKnow
			// 
			this->btnDelKnow->BackColor = System::Drawing::Color::Red;
			this->btnDelKnow->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelKnow->Location = System::Drawing::Point(403, 34);
			this->btnDelKnow->Name = L"btnDelKnow";
			this->btnDelKnow->Size = System::Drawing::Size(129, 37);
			this->btnDelKnow->TabIndex = 4;
			this->btnDelKnow->Text = L"Eliminar";
			this->btnDelKnow->UseVisualStyleBackColor = false;
			this->btnDelKnow->Click += gcnew System::EventHandler(this, &Conocimiento::btnDelKnow_Click);
			// 
			// dataGridKnow
			// 
			this->dataGridKnow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridKnow->Location = System::Drawing::Point(16, 240);
			this->dataGridKnow->Name = L"dataGridKnow";
			this->dataGridKnow->Size = System::Drawing::Size(526, 122);
			this->dataGridKnow->TabIndex = 5;
			// 
			// txtLinkKnow
			// 
			this->txtLinkKnow->Location = System::Drawing::Point(176, 124);
			this->txtLinkKnow->Name = L"txtLinkKnow";
			this->txtLinkKnow->Size = System::Drawing::Size(363, 20);
			this->txtLinkKnow->TabIndex = 6;
			// 
			// txtDescKnow
			// 
			this->txtDescKnow->Location = System::Drawing::Point(176, 180);
			this->txtDescKnow->Name = L"txtDescKnow";
			this->txtDescKnow->Size = System::Drawing::Size(363, 20);
			this->txtDescKnow->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 21);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Link";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 21);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Descripcion";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 384);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(142, 21);
			this->label9->TabIndex = 23;
			this->label9->Text = L"ID Conocimiento";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(239, 384);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(312, 21);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Utilizar solo en caso de editar o eliminar";
			// 
			// txtIDNewKnow
			// 
			this->txtIDNewKnow->Location = System::Drawing::Point(176, 384);
			this->txtIDNewKnow->Name = L"txtIDNewKnow";
			this->txtIDNewKnow->Size = System::Drawing::Size(43, 20);
			this->txtIDNewKnow->TabIndex = 21;
			// 
			// Conocimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtIDNewKnow);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtDescKnow);
			this->Controls->Add(this->txtLinkKnow);
			this->Controls->Add(this->dataGridKnow);
			this->Controls->Add(this->btnDelKnow);
			this->Controls->Add(this->btnEditKnow);
			this->Controls->Add(this->btnNewKnow);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Conocimiento";
			this->Text = L"Conocimiento";
			this->Load += gcnew System::EventHandler(this, &Conocimiento::Conocimiento_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridKnow))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnNewKnow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data3->abrirConexion();
		this->data3->insertarConocimiento(this->txtLinkKnow->Text, this->txtDescKnow->Text);
		this->data3->cerrarConexion();

		this->txtLinkKnow->Clear();
		this->txtDescKnow->Clear();

		this->Consulta3();
	}

	private: System::Void btnEditKnow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data3->abrirConexion();
		this->data3->editarConocimiento(this->txtLinkKnow->Text, this->txtDescKnow->Text, this->txtIDNewKnow->Text);
		this->data3->cerrarConexion();

		this->txtLinkKnow->Clear();
		this->txtDescKnow->Clear();
		this->txtIDNewKnow->Clear();

		this->Consulta3();
	}

	private: System::Void btnDelKnow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data3->abrirConexion();
		this->data3->eliminarConocimiento(this->txtLinkKnow->Text, this->txtDescKnow->Text, this->txtIDNewKnow->Text);
		this->data3->cerrarConexion();

		this->txtLinkKnow->Clear();
		this->txtDescKnow->Clear();
		this->txtIDNewKnow->Clear();

		this->Consulta3();
	}

	private: System::Void Conocimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta3();
	}
	public: void Consulta3() {
		this->data3->abrirConexion();
		this->dataGridKnow->DataSource = this->data3->getDataKnow();
		this->data3->cerrarConexion();
	}

};
}
