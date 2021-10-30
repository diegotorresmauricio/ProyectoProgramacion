#pragma once

namespace ProyectoProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ClienteAlta
	/// </summary>
	public ref class ClienteAlta : public System::Windows::Forms::Form
	{
	public:
		ClienteAlta(void)
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
		~ClienteAlta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnNewCliSave;
	protected:
	private: System::Windows::Forms::Button^ btnCliNewCancel;
	private: System::Windows::Forms::TextBox^ txtCliNewName;
	private: System::Windows::Forms::TextBox^ txtCliNewSecond;
	private: System::Windows::Forms::TextBox^ txtCliNewMail;
	private: System::Windows::Forms::TextBox^ txtCliNewDni;
	private: System::Windows::Forms::TextBox^ txtCliNewAdress;
	private: System::Windows::Forms::TextBox^ txtCliNewTelephone;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			this->btnNewCliSave = (gcnew System::Windows::Forms::Button());
			this->btnCliNewCancel = (gcnew System::Windows::Forms::Button());
			this->txtCliNewName = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewSecond = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewMail = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewDni = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewAdress = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNewTelephone = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnNewCliSave
			// 
			this->btnNewCliSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewCliSave->Location = System::Drawing::Point(282, 375);
			this->btnNewCliSave->Name = L"btnNewCliSave";
			this->btnNewCliSave->Size = System::Drawing::Size(107, 36);
			this->btnNewCliSave->TabIndex = 0;
			this->btnNewCliSave->Text = L"Guardar";
			this->btnNewCliSave->UseVisualStyleBackColor = true;
			this->btnNewCliSave->Click += gcnew System::EventHandler(this, &ClienteAlta::btnNewCliSave_Click);
			// 
			// btnCliNewCancel
			// 
			this->btnCliNewCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliNewCancel->Location = System::Drawing::Point(432, 375);
			this->btnCliNewCancel->Name = L"btnCliNewCancel";
			this->btnCliNewCancel->Size = System::Drawing::Size(110, 36);
			this->btnCliNewCancel->TabIndex = 1;
			this->btnCliNewCancel->Text = L"Cancelar";
			this->btnCliNewCancel->UseVisualStyleBackColor = true;
			this->btnCliNewCancel->Click += gcnew System::EventHandler(this, &ClienteAlta::btnCliNewCancel_Click);
			// 
			// txtCliNewName
			// 
			this->txtCliNewName->Location = System::Drawing::Point(12, 123);
			this->txtCliNewName->Name = L"txtCliNewName";
			this->txtCliNewName->Size = System::Drawing::Size(166, 20);
			this->txtCliNewName->TabIndex = 3;
			// 
			// txtCliNewSecond
			// 
			this->txtCliNewSecond->Location = System::Drawing::Point(12, 206);
			this->txtCliNewSecond->Name = L"txtCliNewSecond";
			this->txtCliNewSecond->Size = System::Drawing::Size(166, 20);
			this->txtCliNewSecond->TabIndex = 4;
			// 
			// txtCliNewMail
			// 
			this->txtCliNewMail->Location = System::Drawing::Point(12, 290);
			this->txtCliNewMail->Name = L"txtCliNewMail";
			this->txtCliNewMail->Size = System::Drawing::Size(166, 20);
			this->txtCliNewMail->TabIndex = 5;
			// 
			// txtCliNewDni
			// 
			this->txtCliNewDni->Location = System::Drawing::Point(282, 123);
			this->txtCliNewDni->Name = L"txtCliNewDni";
			this->txtCliNewDni->Size = System::Drawing::Size(166, 20);
			this->txtCliNewDni->TabIndex = 6;
			// 
			// txtCliNewAdress
			// 
			this->txtCliNewAdress->Location = System::Drawing::Point(282, 206);
			this->txtCliNewAdress->Name = L"txtCliNewAdress";
			this->txtCliNewAdress->Size = System::Drawing::Size(166, 20);
			this->txtCliNewAdress->TabIndex = 7;
			// 
			// txtCliNewTelephone
			// 
			this->txtCliNewTelephone->Location = System::Drawing::Point(282, 290);
			this->txtCliNewTelephone->Name = L"txtCliNewTelephone";
			this->txtCliNewTelephone->Size = System::Drawing::Size(166, 20);
			this->txtCliNewTelephone->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Nuevo Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Apellido";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Mail";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(279, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"DNI";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(279, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Direccion";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(279, 255);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Telefono";
			// 
			// ClienteAlta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtCliNewTelephone);
			this->Controls->Add(this->txtCliNewAdress);
			this->Controls->Add(this->txtCliNewDni);
			this->Controls->Add(this->txtCliNewMail);
			this->Controls->Add(this->txtCliNewSecond);
			this->Controls->Add(this->txtCliNewName);
			this->Controls->Add(this->btnCliNewCancel);
			this->Controls->Add(this->btnNewCliSave);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ClienteAlta";
			this->Text = L"ClienteAlta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void btnNewCliSave_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
}
private: System::Void btnCliNewCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
}
};
}
