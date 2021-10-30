#pragma once

namespace ProyectoProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ClienteEditar
	/// </summary>
	public ref class ClienteEditar : public System::Windows::Forms::Form
	{
	public:
		ClienteEditar(void)
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
		~ClienteEditar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtCliEditTelephone;

	private: System::Windows::Forms::TextBox^ txtCliEditAdress;
	private: System::Windows::Forms::TextBox^ txtCliEditDni;
	private: System::Windows::Forms::TextBox^ txtCliEditMail;
	private: System::Windows::Forms::TextBox^ txtCliEditSecond;




	private: System::Windows::Forms::TextBox^ txtCliEditName;

	private: System::Windows::Forms::Button^ btnCliEditCancel;
	private: System::Windows::Forms::Button^ btnCliEditSave;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCliEditTelephone = (gcnew System::Windows::Forms::TextBox());
			this->txtCliEditAdress = (gcnew System::Windows::Forms::TextBox());
			this->txtCliEditDni = (gcnew System::Windows::Forms::TextBox());
			this->txtCliEditMail = (gcnew System::Windows::Forms::TextBox());
			this->txtCliEditSecond = (gcnew System::Windows::Forms::TextBox());
			this->txtCliEditName = (gcnew System::Windows::Forms::TextBox());
			this->btnCliEditCancel = (gcnew System::Windows::Forms::Button());
			this->btnCliEditSave = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Editar Cliente";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(309, 255);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Telefono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(309, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Direccion";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(309, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"DNI";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Mail";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Nombre";
			// 
			// txtCliEditTelephone
			// 
			this->txtCliEditTelephone->Location = System::Drawing::Point(312, 290);
			this->txtCliEditTelephone->Name = L"txtCliEditTelephone";
			this->txtCliEditTelephone->Size = System::Drawing::Size(166, 20);
			this->txtCliEditTelephone->TabIndex = 24;
			// 
			// txtCliEditAdress
			// 
			this->txtCliEditAdress->Location = System::Drawing::Point(312, 206);
			this->txtCliEditAdress->Name = L"txtCliEditAdress";
			this->txtCliEditAdress->Size = System::Drawing::Size(166, 20);
			this->txtCliEditAdress->TabIndex = 23;
			// 
			// txtCliEditDni
			// 
			this->txtCliEditDni->Location = System::Drawing::Point(312, 123);
			this->txtCliEditDni->Name = L"txtCliEditDni";
			this->txtCliEditDni->Size = System::Drawing::Size(166, 20);
			this->txtCliEditDni->TabIndex = 22;
			// 
			// txtCliEditMail
			// 
			this->txtCliEditMail->Location = System::Drawing::Point(42, 290);
			this->txtCliEditMail->Name = L"txtCliEditMail";
			this->txtCliEditMail->Size = System::Drawing::Size(166, 20);
			this->txtCliEditMail->TabIndex = 21;
			// 
			// txtCliEditSecond
			// 
			this->txtCliEditSecond->Location = System::Drawing::Point(42, 206);
			this->txtCliEditSecond->Name = L"txtCliEditSecond";
			this->txtCliEditSecond->Size = System::Drawing::Size(166, 20);
			this->txtCliEditSecond->TabIndex = 20;
			// 
			// txtCliEditName
			// 
			this->txtCliEditName->Location = System::Drawing::Point(42, 123);
			this->txtCliEditName->Name = L"txtCliEditName";
			this->txtCliEditName->Size = System::Drawing::Size(166, 20);
			this->txtCliEditName->TabIndex = 19;
			// 
			// btnCliEditCancel
			// 
			this->btnCliEditCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliEditCancel->Location = System::Drawing::Point(462, 375);
			this->btnCliEditCancel->Name = L"btnCliEditCancel";
			this->btnCliEditCancel->Size = System::Drawing::Size(110, 36);
			this->btnCliEditCancel->TabIndex = 18;
			this->btnCliEditCancel->Text = L"Cancelar";
			this->btnCliEditCancel->UseVisualStyleBackColor = true;
			this->btnCliEditCancel->Click += gcnew System::EventHandler(this, &ClienteEditar::btnCliEditCancel_Click);
			// 
			// btnCliEditSave
			// 
			this->btnCliEditSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliEditSave->Location = System::Drawing::Point(312, 375);
			this->btnCliEditSave->Name = L"btnCliEditSave";
			this->btnCliEditSave->Size = System::Drawing::Size(107, 36);
			this->btnCliEditSave->TabIndex = 17;
			this->btnCliEditSave->Text = L"Guardar";
			this->btnCliEditSave->UseVisualStyleBackColor = true;
			this->btnCliEditSave->Click += gcnew System::EventHandler(this, &ClienteEditar::btnCliEditSave_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(312, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(312, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"label2";
			// 
			// ClienteEditar
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
			this->Controls->Add(this->txtCliEditTelephone);
			this->Controls->Add(this->txtCliEditAdress);
			this->Controls->Add(this->txtCliEditDni);
			this->Controls->Add(this->txtCliEditMail);
			this->Controls->Add(this->txtCliEditSecond);
			this->Controls->Add(this->txtCliEditName);
			this->Controls->Add(this->btnCliEditCancel);
			this->Controls->Add(this->btnCliEditSave);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ClienteEditar";
			this->Text = L"ClienteEditar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnCliEditCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
}
private: System::Void btnCliEditSave_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
}
};
}
