#pragma once
#include "TxRegisterCiutada.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterFormCiutada
	/// </summary>
	public ref class RegisterFormCiutada : public System::Windows::Forms::Form
	{
	public:
		RegisterFormCiutada(void)
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
		~RegisterFormCiutada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbCorreu;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbFullName;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Label^ date;


	private: System::Windows::Forms::TextBox^ tbDate;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbCorreu = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbFullName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->date = (gcnew System::Windows::Forms::Label());
			this->tbDate = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(766, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registre Ciutada";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuari";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(329, 135);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(432, 31);
			this->tbName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Correu Electronic";
			// 
			// tbCorreu
			// 
			this->tbCorreu->Location = System::Drawing::Point(329, 180);
			this->tbCorreu->Name = L"tbCorreu";
			this->tbCorreu->Size = System::Drawing::Size(432, 31);
			this->tbCorreu->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Nom Complert";
			// 
			// tbFullName
			// 
			this->tbFullName->Location = System::Drawing::Point(329, 225);
			this->tbFullName->Name = L"tbFullName";
			this->tbFullName->Size = System::Drawing::Size(432, 31);
			this->tbFullName->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Contrasenya";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(329, 268);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(432, 31);
			this->tbPassword->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 316);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(227, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Confirma Contranenya";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(329, 312);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(432, 31);
			this->tbConfirmPassword->TabIndex = 2;
			// 
			// date
			// 
			this->date->AutoSize = true;
			this->date->Location = System::Drawing::Point(15, 360);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(195, 25);
			this->date->TabIndex = 1;
			this->date->Text = L"Data de Naixament";
			// 
			// tbDate
			// 
			this->tbDate->Location = System::Drawing::Point(329, 357);
			this->tbDate->Name = L"tbDate";
			this->tbDate->Size = System::Drawing::Size(432, 31);
			this->tbDate->TabIndex = 2;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(329, 423);
			this->btnOK->Name = L"btnOK";
			this->btnOK->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnOK->Size = System::Drawing::Size(151, 50);
			this->btnOK->TabIndex = 3;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterFormCiutada::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(485, 423);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(276, 49);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterFormCiutada::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(696, 494);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(65, 25);
			this->llLogin->TabIndex = 5;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterFormCiutada::llLogin_LinkClicked);
			// 
			// RegisterFormCiutada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 528);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbDate);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbFullName);
			this->Controls->Add(this->tbCorreu);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->date);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Name = L"RegisterFormCiutada";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterFormCiutada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbCorreu->Text;
		String^ fullName = tbFullName->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;
		String^ date = tbDate->Text;

		if (name->Length == 0 || email->Length == 0
			|| fullName->Length == 0 || password->Length == 0
			|| date->Length == 0)
		{
			MessageBox::Show("Omple tots els camps", 
				"Un o mes camps buits", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0)
		{
			MessageBox::Show("Les contrasenyes no coincideixen", 
				"Password error", MessageBoxButtons::OK);
			return;
		}

		//Conneccio a la db
		try
		{
			TxRegisterCiutada tx(name, email, fullName, password, date);
			tx.executar();
			MessageBox::Show("Dades correctes!", "Usuari registrat");
		}
		catch (const std::exception& e)
		{
			// Convertir la excepción de C++ a System::String^
			String^ mensajeError = gcnew String(e.what());
			MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
};
}
