#pragma once
#include "TxEsborraCiutada.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EsborraFormCiutada
	/// </summary>
	public ref class EsborraFormCiutada : public System::Windows::Forms::Form
	{
	public:
		EsborraFormCiutada(void)
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
		~EsborraFormCiutada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ nickname;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ esborra;
	private: System::Windows::Forms::Button^ cancela;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nickname = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->esborra = (gcnew System::Windows::Forms::Button());
			this->cancela = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->label1->Location = System::Drawing::Point(14, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"nickname";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->label2->Location = System::Drawing::Point(14, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"contrasenya";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(96, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Esborra Usuari";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// nickname
			// 
			this->nickname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->nickname->Location = System::Drawing::Point(164, 123);
			this->nickname->Name = L"nickname";
			this->nickname->Size = System::Drawing::Size(180, 30);
			this->nickname->TabIndex = 3;
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->password->Location = System::Drawing::Point(164, 185);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(180, 30);
			this->password->TabIndex = 4;
			// 
			// esborra
			// 
			this->esborra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->esborra->Location = System::Drawing::Point(142, 246);
			this->esborra->Name = L"esborra";
			this->esborra->Size = System::Drawing::Size(93, 39);
			this->esborra->TabIndex = 5;
			this->esborra->Text = L"Esborra";
			this->esborra->UseVisualStyleBackColor = true;
			this->esborra->Click += gcnew System::EventHandler(this, &EsborraFormCiutada::esborra_Click);
			// 
			// cancela
			// 
			this->cancela->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->cancela->Location = System::Drawing::Point(284, 246);
			this->cancela->Name = L"cancela";
			this->cancela->Size = System::Drawing::Size(93, 39);
			this->cancela->TabIndex = 6;
			this->cancela->Text = L"Cancela";
			this->cancela->UseVisualStyleBackColor = true;
			this->cancela->Click += gcnew System::EventHandler(this, &EsborraFormCiutada::cancela_Click);
			// 
			// EsborraFormCiutada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(405, 297);
			this->Controls->Add(this->cancela);
			this->Controls->Add(this->esborra);
			this->Controls->Add(this->password);
			this->Controls->Add(this->nickname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EsborraFormCiutada";
			this->Text = L"EsborraFormCiutada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void cancela_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void esborra_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nick = this->nickname->Text;
	String^ contra = this->password->Text;

	TxEsborraCiutada tx(nick, contra);
	tx.executar();
	MessageBox::Show("Nickname i contrasenya correctes!", "Login");
	this->Close();
}
};
}
