#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#include "Inicio.h"
#include "Cliente.h"
#include "Conocimiento.h"
#include "Presupuesto.h"
#include "Repuesto.h"


namespace ProyectoProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelIzquierdo;
	protected:

	protected:
	private: System::Windows::Forms::Button^ buttonSalir;
	private: System::Windows::Forms::Button^ buttonConocimiento;
	private: System::Windows::Forms::Button^ buttonPresupuesto;
	private: System::Windows::Forms::Button^ buttonRepuesto;
	private: System::Windows::Forms::Button^ buttonCliente;
	private: System::Windows::Forms::Button^ buttonInicio;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelGeneral;
	private: System::Windows::Forms::Label^ label2;


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
			this->panelIzquierdo = (gcnew System::Windows::Forms::Panel());
			this->buttonSalir = (gcnew System::Windows::Forms::Button());
			this->buttonConocimiento = (gcnew System::Windows::Forms::Button());
			this->buttonPresupuesto = (gcnew System::Windows::Forms::Button());
			this->buttonRepuesto = (gcnew System::Windows::Forms::Button());
			this->buttonCliente = (gcnew System::Windows::Forms::Button());
			this->buttonInicio = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelGeneral = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelIzquierdo->SuspendLayout();
			this->panelGeneral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelIzquierdo
			// 
			this->panelIzquierdo->BackColor = System::Drawing::Color::MidnightBlue;
			this->panelIzquierdo->Controls->Add(this->buttonSalir);
			this->panelIzquierdo->Controls->Add(this->buttonConocimiento);
			this->panelIzquierdo->Controls->Add(this->buttonPresupuesto);
			this->panelIzquierdo->Controls->Add(this->buttonRepuesto);
			this->panelIzquierdo->Controls->Add(this->buttonCliente);
			this->panelIzquierdo->Controls->Add(this->buttonInicio);
			this->panelIzquierdo->Controls->Add(this->label1);
			this->panelIzquierdo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelIzquierdo->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelIzquierdo->Location = System::Drawing::Point(0, 0);
			this->panelIzquierdo->Name = L"panelIzquierdo";
			this->panelIzquierdo->Size = System::Drawing::Size(200, 423);
			this->panelIzquierdo->TabIndex = 0;
			// 
			// buttonSalir
			// 
			this->buttonSalir->BackColor = System::Drawing::Color::MidnightBlue;
			this->buttonSalir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonSalir->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->buttonSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSalir->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSalir->ForeColor = System::Drawing::Color::Lavender;
			this->buttonSalir->Location = System::Drawing::Point(57, 379);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(137, 32);
			this->buttonSalir->TabIndex = 6;
			this->buttonSalir->Text = L"Salir";
			this->buttonSalir->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonSalir->UseVisualStyleBackColor = false;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &MyForm::buttonSalir_Click);
			// 
			// buttonConocimiento
			// 
			this->buttonConocimiento->BackColor = System::Drawing::Color::MidnightBlue;
			this->buttonConocimiento->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonConocimiento->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonConocimiento->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->buttonConocimiento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConocimiento->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConocimiento->ForeColor = System::Drawing::Color::Lavender;
			this->buttonConocimiento->Location = System::Drawing::Point(44, 277);
			this->buttonConocimiento->Name = L"buttonConocimiento";
			this->buttonConocimiento->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonConocimiento->Size = System::Drawing::Size(150, 32);
			this->buttonConocimiento->TabIndex = 5;
			this->buttonConocimiento->Text = L"Conocimiento";
			this->buttonConocimiento->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonConocimiento->UseVisualStyleBackColor = false;
			this->buttonConocimiento->Click += gcnew System::EventHandler(this, &MyForm::buttonConocimiento_Click);
			// 
			// buttonPresupuesto
			// 
			this->buttonPresupuesto->BackColor = System::Drawing::Color::MidnightBlue;
			this->buttonPresupuesto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonPresupuesto->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPresupuesto->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->buttonPresupuesto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPresupuesto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPresupuesto->ForeColor = System::Drawing::Color::Lavender;
			this->buttonPresupuesto->Location = System::Drawing::Point(44, 228);
			this->buttonPresupuesto->Name = L"buttonPresupuesto";
			this->buttonPresupuesto->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonPresupuesto->Size = System::Drawing::Size(150, 32);
			this->buttonPresupuesto->TabIndex = 4;
			this->buttonPresupuesto->Text = L"Presupuestos";
			this->buttonPresupuesto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPresupuesto->UseVisualStyleBackColor = false;
			this->buttonPresupuesto->Click += gcnew System::EventHandler(this, &MyForm::buttonPresupuesto_Click);
			// 
			// buttonRepuesto
			// 
			this->buttonRepuesto->BackColor = System::Drawing::Color::MidnightBlue;
			this->buttonRepuesto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonRepuesto->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRepuesto->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->buttonRepuesto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRepuesto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRepuesto->ForeColor = System::Drawing::Color::Lavender;
			this->buttonRepuesto->Location = System::Drawing::Point(44, 181);
			this->buttonRepuesto->Name = L"buttonRepuesto";
			this->buttonRepuesto->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonRepuesto->Size = System::Drawing::Size(150, 32);
			this->buttonRepuesto->TabIndex = 3;
			this->buttonRepuesto->Text = L"Repuestos";
			this->buttonRepuesto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonRepuesto->UseVisualStyleBackColor = false;
			this->buttonRepuesto->Click += gcnew System::EventHandler(this, &MyForm::buttonRepuesto_Click);
			// 
			// buttonCliente
			// 
			this->buttonCliente->BackColor = System::Drawing::Color::MidnightBlue;
			this->buttonCliente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonCliente->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCliente->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->buttonCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCliente->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCliente->ForeColor = System::Drawing::Color::Lavender;
			this->buttonCliente->Location = System::Drawing::Point(44, 134);
			this->buttonCliente->Name = L"buttonCliente";
			this->buttonCliente->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonCliente->Size = System::Drawing::Size(150, 32);
			this->buttonCliente->TabIndex = 2;
			this->buttonCliente->Text = L"Clientes";
			this->buttonCliente->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonCliente->UseVisualStyleBackColor = false;
			this->buttonCliente->Click += gcnew System::EventHandler(this, &MyForm::buttonCliente_Click);
			// 
			// buttonInicio
			// 
			this->buttonInicio->BackColor = System::Drawing::Color::MidnightBlue;
			this->buttonInicio->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonInicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonInicio->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->buttonInicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonInicio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonInicio->ForeColor = System::Drawing::Color::Lavender;
			this->buttonInicio->Location = System::Drawing::Point(44, 87);
			this->buttonInicio->Name = L"buttonInicio";
			this->buttonInicio->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonInicio->Size = System::Drawing::Size(150, 32);
			this->buttonInicio->TabIndex = 1;
			this->buttonInicio->Text = L"Inicio";
			this->buttonInicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonInicio->UseVisualStyleBackColor = false;
			this->buttonInicio->Click += gcnew System::EventHandler(this, &MyForm::buttonInicio_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(55, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Taller V1.0b1";
			// 
			// panelGeneral
			// 
			this->panelGeneral->Controls->Add(this->label2);
			this->panelGeneral->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelGeneral->Location = System::Drawing::Point(200, 0);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(563, 423);
			this->panelGeneral->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(157, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Bienvenidos a gestión de taller";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 423);
			this->Controls->Add(this->panelGeneral);
			this->Controls->Add(this->panelIzquierdo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panelIzquierdo->ResumeLayout(false);
			this->panelIzquierdo->PerformLayout();
			this->panelGeneral->ResumeLayout(false);
			this->panelGeneral->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		template<class T>
		void AbrirPanel(T Formhijo) {
			if (this->panelGeneral->Controls->Count > 0)
				this->panelGeneral->Controls->Clear();
			Formhijo->TopLevel = false;
			Formhijo->Dock = DockStyle::Fill;
			this->panelGeneral->Controls->Add(Formhijo);
			this->panelGeneral->Tag = Formhijo;
			Formhijo->Show();
		}


private: System::Void buttonInicio_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoProgramacion::MyForm1);
}
private: System::Void buttonCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoProgramacion::Cliente);
}
private: System::Void buttonRepuesto_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoProgramacion::Repuesto);
}
private: System::Void buttonPresupuesto_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoProgramacion::Presupuesto);
}
private: System::Void buttonConocimiento_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoProgramacion::Conocimiento);
}
private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
};
}
