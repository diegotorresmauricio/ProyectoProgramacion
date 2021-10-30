#pragma once

namespace ProyectoProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConocimientoEliminar
	/// </summary>
	public ref class ConocimientoEliminar : public System::Windows::Forms::Form
	{
	public:
		ConocimientoEliminar(void)
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
		~ConocimientoEliminar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnDelKnowCancel;

	private: System::Windows::Forms::Button^ btnDelKnowSave;
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
			this->btnDelKnowCancel = (gcnew System::Windows::Forms::Button());
			this->btnDelKnowSave = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(239, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Eliminar Conocimiento";
			// 
			// btnDelKnowCancel
			// 
			this->btnDelKnowCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelKnowCancel->Location = System::Drawing::Point(424, 375);
			this->btnDelKnowCancel->Name = L"btnDelKnowCancel";
			this->btnDelKnowCancel->Size = System::Drawing::Size(110, 36);
			this->btnDelKnowCancel->TabIndex = 12;
			this->btnDelKnowCancel->Text = L"Cancelar";
			this->btnDelKnowCancel->UseVisualStyleBackColor = true;
			this->btnDelKnowCancel->Click += gcnew System::EventHandler(this, &ConocimientoEliminar::btnDelKnowCancel_Click);
			// 
			// btnDelKnowSave
			// 
			this->btnDelKnowSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelKnowSave->Location = System::Drawing::Point(274, 375);
			this->btnDelKnowSave->Name = L"btnDelKnowSave";
			this->btnDelKnowSave->Size = System::Drawing::Size(107, 36);
			this->btnDelKnowSave->TabIndex = 11;
			this->btnDelKnowSave->Text = L"Guardar";
			this->btnDelKnowSave->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Descripción";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Link";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 229);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(481, 20);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(481, 20);
			this->textBox1->TabIndex = 17;
			// 
			// ConocimientoEliminar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnDelKnowCancel);
			this->Controls->Add(this->btnDelKnowSave);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConocimientoEliminar";
			this->Text = L"ConocimientoEliminar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDelKnowCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
	}
};
}
