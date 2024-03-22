#pragma once
#include "RegistraEntitat.h"
#include "TxIniciaSessio.h"
#include "TxLoginAjuntament.h"
#include "TxLoginCiutada.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TBUsr;
	private: System::Windows::Forms::TextBox^ TBpwd;

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonOK;

	private: System::Windows::Forms::Button^ cancel;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ RBajt;

	private: System::Windows::Forms::RadioButton^ RBent;

	private: System::Windows::Forms::RadioButton^ RBcit;

	private: System::Windows::Forms::Button^ registre;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TBUsr = (gcnew System::Windows::Forms::TextBox());
			this->TBpwd = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RBajt = (gcnew System::Windows::Forms::RadioButton());
			this->RBent = (gcnew System::Windows::Forms::RadioButton());
			this->RBcit = (gcnew System::Windows::Forms::RadioButton());
			this->registre = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TBUsr
			// 
			this->TBUsr->Location = System::Drawing::Point(84, 85);
			this->TBUsr->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TBUsr->Name = L"TBUsr";
			this->TBUsr->Size = System::Drawing::Size(355, 20);
			this->TBUsr->TabIndex = 1;
			this->TBUsr->TextChanged += gcnew System::EventHandler(this, &Login::TBUsr_TextChanged);
			// 
			// TBpwd
			// 
			this->TBpwd->Location = System::Drawing::Point(136, 129);
			this->TBpwd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TBpwd->Name = L"TBpwd";
			this->TBpwd->Size = System::Drawing::Size(303, 20);
			this->TBpwd->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(457, 61);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Usuari";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contrasenya";
			// 
			// buttonOK
			// 
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOK->Location = System::Drawing::Point(214, 170);
			this->buttonOK->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(225, 41);
			this->buttonOK->TabIndex = 6;
			this->buttonOK->Text = L"Inicia Sesió";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &Login::buttonOK_Click);
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->Location = System::Drawing::Point(334, 216);
			this->cancel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(105, 41);
			this->cancel->TabIndex = 7;
			this->cancel->Text = L"Cancela";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->RBajt);
			this->groupBox1->Controls->Add(this->RBent);
			this->groupBox1->Controls->Add(this->RBcit);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(20, 162);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(180, 100);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccionar tipus d\'usuari";
			// 
			// RBajt
			// 
			this->RBajt->AutoSize = true;
			this->RBajt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RBajt->Location = System::Drawing::Point(6, 65);
			this->RBajt->Name = L"RBajt";
			this->RBajt->Size = System::Drawing::Size(99, 22);
			this->RBajt->TabIndex = 2;
			this->RBajt->Text = L"Ajuntament";
			this->RBajt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBajt->UseVisualStyleBackColor = true;
			this->RBajt->CheckedChanged += gcnew System::EventHandler(this, &Login::RBajt_CheckedChanged);
			// 
			// RBent
			// 
			this->RBent->AutoSize = true;
			this->RBent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RBent->Location = System::Drawing::Point(6, 42);
			this->RBent->Name = L"RBent";
			this->RBent->Size = System::Drawing::Size(67, 22);
			this->RBent->TabIndex = 1;
			this->RBent->Text = L"Entitat";
			this->RBent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBent->UseVisualStyleBackColor = true;
			// 
			// RBcit
			// 
			this->RBcit->AutoSize = true;
			this->RBcit->Checked = true;
			this->RBcit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RBcit->Location = System::Drawing::Point(6, 19);
			this->RBcit->Name = L"RBcit";
			this->RBcit->Size = System::Drawing::Size(76, 22);
			this->RBcit->TabIndex = 0;
			this->RBcit->TabStop = true;
			this->RBcit->Text = L"Ciutada";
			this->RBcit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBcit->UseVisualStyleBackColor = true;
			// 
			// registre
			// 
			this->registre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registre->Location = System::Drawing::Point(214, 216);
			this->registre->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->registre->Name = L"registre";
			this->registre->Size = System::Drawing::Size(116, 41);
			this->registre->TabIndex = 9;
			this->registre->Text = L"Registra\'t";
			this->registre->UseVisualStyleBackColor = true;
			this->registre->Click += gcnew System::EventHandler(this, &Login::registre_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 294);
			this->Controls->Add(this->registre);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TBpwd);
			this->Controls->Add(this->TBUsr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nick = this->TBUsr->Text;
	String^ contra = this->TBpwd->Text;
	if (nick->Length == 0) {
		MessageBox::Show("Nickname buit. Introdueixi el seu nickname siusplau.", "Nickname buit");
		return;
	}
	if (RBcit->Checked) {
		try
		{
			TxLoginCiutada tx(nick, contra);
			tx.executar();
			MessageBox::Show("Nickname i contrasenya correctes!", "Login");
		}
		catch (const std::exception& e)
		{
			// Convertir la excepción de C++ a System::String^
			String^ mensajeError = gcnew String(e.what());
			MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else if (RBajt->Checked){

		try
		{
			TxLoginAjuntament tx(nick, contra);
			tx.executar();
			MessageBox::Show("Nickname i contrasenya correctes!", "Login");
			this->Close();
		}
		catch (const std::exception& e)
		{
			// Convertir la excepción de C++ a System::String^
			String^ mensajeError = gcnew String(e.what());
			MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	else if (RBent->Checked){
		try
		{
			TxIniciaSessio txlogin(nick, contra);
			txlogin.executar();
			MessageBox::Show("Correu i contrasenya correctes!", "Login");
			this->Close();
		}
		catch (string er)
		{
			MessageBox::Show("Correu o contrasenya incorrectes, siusplau torna-ho a intentar.", "Correu o contrasenya incorrectes");
		}
	}
}
private: System::Void RBajt_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (RBajt->Checked) registre->Visible = false;
	else registre->Visible = true;
}
private: System::Void TBUsr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void registre_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RBcit->Checked) {}
	else if (RBent->Checked) {
		RegistraEntitat^ reg = gcnew RegistraEntitat();
		this->Visible = false;
		reg->ShowDialog();
		this->Visible = true;
	}
}
};
}
