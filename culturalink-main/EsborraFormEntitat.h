#pragma once
#include "TxEsborraEntitat.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EsborraFormEntitat
	/// </summary>
	public ref class EsborraFormEntitat : public System::Windows::Forms::Form
	{
	public:
		EsborraFormEntitat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EsborraFormEntitat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ esborra;
	private: System::Windows::Forms::Button^ cancela;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->esborra = (gcnew System::Windows::Forms::Button());
			this->cancela = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(68, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(333, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Confirmar esborrar l\'usuari";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &EsborraFormEntitat::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->label2->Location = System::Drawing::Point(12, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"contrasenya";
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->password->Location = System::Drawing::Point(151, 112);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(180, 30);
			this->password->TabIndex = 7;
			// 
			// esborra
			// 
			this->esborra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->esborra->Location = System::Drawing::Point(202, 234);
			this->esborra->Name = L"esborra";
			this->esborra->Size = System::Drawing::Size(93, 39);
			this->esborra->TabIndex = 8;
			this->esborra->Text = L"Esborra";
			this->esborra->UseVisualStyleBackColor = true;
			this->esborra->Click += gcnew System::EventHandler(this, &EsborraFormEntitat::esborra_Click);
			// 
			// cancela
			// 
			this->cancela->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->cancela->Location = System::Drawing::Point(336, 234);
			this->cancela->Name = L"cancela";
			this->cancela->Size = System::Drawing::Size(93, 39);
			this->cancela->TabIndex = 9;
			this->cancela->Text = L"Cancela";
			this->cancela->UseVisualStyleBackColor = true;
			this->cancela->Click += gcnew System::EventHandler(this, &EsborraFormEntitat::cancela_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 300);
			this->Controls->Add(this->cancela);
			this->Controls->Add(this->esborra);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &EsborraFormEntitat::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void esborra_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ contra = this->password->Text;
	TxEsborraEntitat tx(contra);
	try {
		tx.executar();
		MessageBox::Show("Contrasenya correcta", "Esborrar");
		this->Close();
	}
	catch (const std::exception& e) {
		String^ mensajeError = gcnew String(e.what());
		MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void cancela_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
