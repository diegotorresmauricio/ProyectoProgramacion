#pragma once

namespace ProyectoProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ClienteEliminar
	/// </summary>
	public ref class ClienteEliminar : public System::Windows::Forms::Form
	{
	public:
		ClienteEliminar(void)
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
		~ClienteEliminar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtCliDelTelephone;

	private: System::Windows::Forms::TextBox^ txtCliDelAdress;
	private: System::Windows::Forms::TextBox^ txtCliDelDni;
	private: System::Windows::Forms::TextBox^ txtCliDelMail;
	private: System::Windows::Forms::TextBox^ txtCliDelSecond;




	private: System::Windows::Forms::TextBox^ txtCliDelName;

	private: System::Windows::Forms::Button^ btnCliDelCancel;

	private: System::Windows::Forms::Button^ btnCliDelSave;


	private: System::Windows::Forms::Label^ label1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCliDelTelephone = (gcnew System::Windows::Forms::TextBox());
			this->txtCliDelAdress = (gcnew System::Windows::Forms::TextBox());
			this->txtCliDelDni = (gcnew System::Windows::Forms::TextBox());
			this->txtCliDelMail = (gcnew System::Windows::Forms::TextBox());
			this->txtCliDelSecond = (gcnew System::Windows::Forms::TextBox());
			this->txtCliDelName = (gcnew System::Windows::Forms::TextBox());
			this->btnCliDelCancel = (gcnew System::Windows::Forms::Button());
			this->btnCliDelSave = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(332, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 49;
			this->label2->Text = L"label2";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(332, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 48;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(329, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 47;
			this->label8->Text = L"Telefono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(329, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Direccion";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(329, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 45;
			this->label6->Text = L"DNI";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(62, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Mail";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(62, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Nombre";
			// 
			// txtCliDelTelephone
			// 
			this->txtCliDelTelephone->Location = System::Drawing::Point(332, 289);
			this->txtCliDelTelephone->Name = L"txtCliDelTelephone";
			this->txtCliDelTelephone->Size = System::Drawing::Size(166, 20);
			this->txtCliDelTelephone->TabIndex = 41;
			// 
			// txtCliDelAdress
			// 
			this->txtCliDelAdress->Location = System::Drawing::Point(332, 205);
			this->txtCliDelAdress->Name = L"txtCliDelAdress";
			this->txtCliDelAdress->Size = System::Drawing::Size(166, 20);
			this->txtCliDelAdress->TabIndex = 40;
			// 
			// txtCliDelDni
			// 
			this->txtCliDelDni->Location = System::Drawing::Point(332, 122);
			this->txtCliDelDni->Name = L"txtCliDelDni";
			this->txtCliDelDni->Size = System::Drawing::Size(166, 20);
			this->txtCliDelDni->TabIndex = 39;
			// 
			// txtCliDelMail
			// 
			this->txtCliDelMail->Location = System::Drawing::Point(62, 289);
			this->txtCliDelMail->Name = L"txtCliDelMail";
			this->txtCliDelMail->Size = System::Drawing::Size(166, 20);
			this->txtCliDelMail->TabIndex = 38;
			// 
			// txtCliDelSecond
			// 
			this->txtCliDelSecond->Location = System::Drawing::Point(62, 205);
			this->txtCliDelSecond->Name = L"txtCliDelSecond";
			this->txtCliDelSecond->Size = System::Drawing::Size(166, 20);
			this->txtCliDelSecond->TabIndex = 37;
			// 
			// txtCliDelName
			// 
			this->txtCliDelName->Location = System::Drawing::Point(62, 122);
			this->txtCliDelName->Name = L"txtCliDelName";
			this->txtCliDelName->Size = System::Drawing::Size(166, 20);
			this->txtCliDelName->TabIndex = 36;
			// 
			// btnCliDelCancel
			// 
			this->btnCliDelCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliDelCancel->Location = System::Drawing::Point(482, 374);
			this->btnCliDelCancel->Name = L"btnCliDelCancel";
			this->btnCliDelCancel->Size = System::Drawing::Size(110, 36);
			this->btnCliDelCancel->TabIndex = 35;
			this->btnCliDelCancel->Text = L"Cancelar";
			this->btnCliDelCancel->UseVisualStyleBackColor = true;
			this->btnCliDelCancel->Click += gcnew System::EventHandler(this, &ClienteEliminar::btnCliDelCancel_Click);
			// 
			// btnCliDelSave
			// 
			this->btnCliDelSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliDelSave->Location = System::Drawing::Point(332, 374);
			this->btnCliDelSave->Name = L"btnCliDelSave";
			this->btnCliDelSave->Size = System::Drawing::Size(107, 36);
			this->btnCliDelSave->TabIndex = 34;
			this->btnCliDelSave->Text = L"Guardar";
			this->btnCliDelSave->UseVisualStyleBackColor = true;
			this->btnCliDelSave->Click += gcnew System::EventHandler(this, &ClienteEliminar::btnCliDelSave_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 24);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Eliminar Cliente";
			// 
			// ClienteEliminar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 423);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtCliDelTelephone);
			this->Controls->Add(this->txtCliDelAdress);
			this->Controls->Add(this->txtCliDelDni);
			this->Controls->Add(this->txtCliDelMail);
			this->Controls->Add(this->txtCliDelSecond);
			this->Controls->Add(this->txtCliDelName);
			this->Controls->Add(this->btnCliDelCancel);
			this->Controls->Add(this->btnCliDelSave);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ClienteEliminar";
			this->Text = L"ClienteEliminar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCliDelSave_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
	}
private: System::Void btnCliDelCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
}
};
}
