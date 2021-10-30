#pragma once
#include "Bdd.h"

#include "PresupuestoAlta.h"
#include "PresupuestoEditar.h"
#include "PresupuestoEliminar.h"

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
			this->btnNewPres->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewPres->Location = System::Drawing::Point(16, 54);
			this->btnNewPres->Name = L"btnNewPres";
			this->btnNewPres->Size = System::Drawing::Size(129, 37);
			this->btnNewPres->TabIndex = 2;
			this->btnNewPres->Text = L"Nuevo";
			this->btnNewPres->UseVisualStyleBackColor = true;
			this->btnNewPres->Click += gcnew System::EventHandler(this, &Presupuesto::btnNewPres_Click);
			// 
			// btnEditPres
			// 
			this->btnEditPres->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditPres->Location = System::Drawing::Point(223, 54);
			this->btnEditPres->Name = L"btnEditPres";
			this->btnEditPres->Size = System::Drawing::Size(129, 37);
			this->btnEditPres->TabIndex = 3;
			this->btnEditPres->Text = L"Editar";
			this->btnEditPres->UseVisualStyleBackColor = true;
			this->btnEditPres->Click += gcnew System::EventHandler(this, &Presupuesto::btnEditPres_Click);
			// 
			// btnDelPres
			// 
			this->btnDelPres->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelPres->Location = System::Drawing::Point(409, 54);
			this->btnDelPres->Name = L"btnDelPres";
			this->btnDelPres->Size = System::Drawing::Size(129, 37);
			this->btnDelPres->TabIndex = 4;
			this->btnDelPres->Text = L"Eliminar";
			this->btnDelPres->UseVisualStyleBackColor = true;
			this->btnDelPres->Click += gcnew System::EventHandler(this, &Presupuesto::btnDelPres_Click);
			// 
			// dataGridPres
			// 
			this->dataGridPres->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridPres->Location = System::Drawing::Point(15, 129);
			this->dataGridPres->Name = L"dataGridPres";
			this->dataGridPres->Size = System::Drawing::Size(523, 216);
			this->dataGridPres->TabIndex = 5;
			// 
			// Presupuesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
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
		ProyectoProgramacion::PresupuestoAlta^ presupuestoAlta = gcnew ProyectoProgramacion::PresupuestoAlta();
		presupuestoAlta->Show();
	}

	private: System::Void btnEditPres_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoProgramacion::PresupuestoEditar^ presupuestoEditar = gcnew ProyectoProgramacion::PresupuestoEditar();
		presupuestoEditar->Show();
	}

	private: System::Void btnDelPres_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoProgramacion::PresupuestoEliminar^ presupuestoEliminar = gcnew ProyectoProgramacion::PresupuestoEliminar();
		presupuestoEliminar->Show();
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
