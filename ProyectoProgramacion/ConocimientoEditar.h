#pragma once

namespace ProyectoProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConocimientoEditar
	/// </summary>
	public ref class ConocimientoEditar : public System::Windows::Forms::Form
	{
	public:
		ConocimientoEditar(void)
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
		~ConocimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnEditKnowCancel;

	private: System::Windows::Forms::Button^ btnEditKnowSave;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->btnEditKnowCancel = (gcnew System::Windows::Forms::Button());
			this->btnEditKnowSave = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Editar Conocimiento";
			// 
			// btnEditKnowCancel
			// 
			this->btnEditKnowCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditKnowCancel->Location = System::Drawing::Point(420, 375);
			this->btnEditKnowCancel->Name = L"btnEditKnowCancel";
			this->btnEditKnowCancel->Size = System::Drawing::Size(110, 36);
			this->btnEditKnowCancel->TabIndex = 12;
			this->btnEditKnowCancel->Text = L"Cancelar";
			this->btnEditKnowCancel->UseVisualStyleBackColor = true;
			this->btnEditKnowCancel->Click += gcnew System::EventHandler(this, &ConocimientoEditar::btnEditKnowCancel_Click);
			// 
			// btnEditKnowSave
			// 
			this->btnEditKnowSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditKnowSave->Location = System::Drawing::Point(270, 375);
			this->btnEditKnowSave->Name = L"btnEditKnowSave";
			this->btnEditKnowSave->Size = System::Drawing::Size(107, 36);
			this->btnEditKnowSave->TabIndex = 11;
			this->btnEditKnowSave->Text = L"Guardar";
			this->btnEditKnowSave->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Descripción";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Link";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(481, 20);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(481, 20);
			this->textBox1->TabIndex = 17;
			// 
			// ConocimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnEditKnowCancel);
			this->Controls->Add(this->btnEditKnowSave);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConocimientoEditar";
			this->Text = L"ConocimientoEditar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEditKnowCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
	}
};
}
