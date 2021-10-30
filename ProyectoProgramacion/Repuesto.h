#pragma once

#include "RepuestoAlta.h"
#include "RepuestoEditar.h"
#include "RepuestoEliminar.h"

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
			this->btnNewRep->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewRep->Location = System::Drawing::Point(16, 55);
			this->btnNewRep->Name = L"btnNewRep";
			this->btnNewRep->Size = System::Drawing::Size(129, 37);
			this->btnNewRep->TabIndex = 2;
			this->btnNewRep->Text = L"Nuevo";
			this->btnNewRep->UseVisualStyleBackColor = true;
			this->btnNewRep->Click += gcnew System::EventHandler(this, &Repuesto::btnNewRep_Click);
			// 
			// btnEditRep
			// 
			this->btnEditRep->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditRep->Location = System::Drawing::Point(217, 55);
			this->btnEditRep->Name = L"btnEditRep";
			this->btnEditRep->Size = System::Drawing::Size(129, 37);
			this->btnEditRep->TabIndex = 3;
			this->btnEditRep->Text = L"Editar";
			this->btnEditRep->UseVisualStyleBackColor = true;
			this->btnEditRep->Click += gcnew System::EventHandler(this, &Repuesto::btnEditRep_Click);
			// 
			// btnDelRep
			// 
			this->btnDelRep->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelRep->Location = System::Drawing::Point(406, 55);
			this->btnDelRep->Name = L"btnDelRep";
			this->btnDelRep->Size = System::Drawing::Size(129, 37);
			this->btnDelRep->TabIndex = 4;
			this->btnDelRep->Text = L"Eliminar";
			this->btnDelRep->UseVisualStyleBackColor = true;
			this->btnDelRep->Click += gcnew System::EventHandler(this, &Repuesto::btnDelRep_Click);
			// 
			// Repuesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->btnDelRep);
			this->Controls->Add(this->btnEditRep);
			this->Controls->Add(this->btnNewRep);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Repuesto";
			this->Text = L"Repuesto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnNewRep_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoProgramacion::RepuestoAlta^ repuestoAlta = gcnew ProyectoProgramacion::RepuestoAlta();
		repuestoAlta->Show();
	}
	private: System::Void btnEditRep_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoProgramacion::RepuestoEditar^ repuestoEditar = gcnew ProyectoProgramacion::RepuestoEditar();
		repuestoEditar->Show();
	}
	private: System::Void btnDelRep_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoProgramacion::RepuestoEliminar^ repuestoEliminar = gcnew ProyectoProgramacion::RepuestoEliminar();
		repuestoEliminar->Show();
	}
};
}
