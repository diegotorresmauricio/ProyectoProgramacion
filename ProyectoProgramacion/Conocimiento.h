#pragma once
#include "Bdd.h"
#include "ConocimientoAlta.h"
#include "ConocimientoEditar.h"
#include "ConocimientoEliminar.h"

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
			this->label1->Size = System::Drawing::Size(242, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Base de conocimiento";
			// 
			// btnNewKnow
			// 
			this->btnNewKnow->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewKnow->Location = System::Drawing::Point(16, 57);
			this->btnNewKnow->Name = L"btnNewKnow";
			this->btnNewKnow->Size = System::Drawing::Size(129, 37);
			this->btnNewKnow->TabIndex = 2;
			this->btnNewKnow->Text = L"Nuevo";
			this->btnNewKnow->UseVisualStyleBackColor = true;
			this->btnNewKnow->Click += gcnew System::EventHandler(this, &Conocimiento::btnNewKnow_Click);
			// 
			// btnEditKnow
			// 
			this->btnEditKnow->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditKnow->Location = System::Drawing::Point(220, 57);
			this->btnEditKnow->Name = L"btnEditKnow";
			this->btnEditKnow->Size = System::Drawing::Size(129, 37);
			this->btnEditKnow->TabIndex = 3;
			this->btnEditKnow->Text = L"Editar";
			this->btnEditKnow->UseVisualStyleBackColor = true;
			this->btnEditKnow->Click += gcnew System::EventHandler(this, &Conocimiento::btnEditKnow_Click);
			// 
			// btnDelKnow
			// 
			this->btnDelKnow->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelKnow->Location = System::Drawing::Point(410, 57);
			this->btnDelKnow->Name = L"btnDelKnow";
			this->btnDelKnow->Size = System::Drawing::Size(129, 37);
			this->btnDelKnow->TabIndex = 4;
			this->btnDelKnow->Text = L"Eliminar";
			this->btnDelKnow->UseVisualStyleBackColor = true;
			this->btnDelKnow->Click += gcnew System::EventHandler(this, &Conocimiento::btnDelKnow_Click);
			// 
			// dataGridKnow
			// 
			this->dataGridKnow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridKnow->Location = System::Drawing::Point(16, 133);
			this->dataGridKnow->Name = L"dataGridKnow";
			this->dataGridKnow->Size = System::Drawing::Size(523, 216);
			this->dataGridKnow->TabIndex = 5;
			// 
			// Conocimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
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
		ProyectoProgramacion::ConocimientoAlta^ conocimientoAlta = gcnew ProyectoProgramacion::ConocimientoAlta();
		conocimientoAlta->Show();
	}

	private: System::Void btnEditKnow_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoProgramacion::ConocimientoEditar^ conocimientoEditar = gcnew ProyectoProgramacion::ConocimientoEditar();
		conocimientoEditar->Show();
	}

	private: System::Void btnDelKnow_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoProgramacion::ConocimientoEliminar^ conocimientoEliminar = gcnew ProyectoProgramacion::ConocimientoEliminar();
		conocimientoEliminar->Show();
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
