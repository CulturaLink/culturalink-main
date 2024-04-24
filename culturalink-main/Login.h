#pragma once
#include "RegistraEntitat.h"
#include "TxIniciaSessio.h"
#include "TxLoginCiutada.h"
#include "TxLoginAjuntament.h"
#include "RegisterFormCiutada.h"


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
			this->TBUsr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->TBUsr->Location = System::Drawing::Point(95, 82);
			this->TBUsr->Margin = System::Windows::Forms::Padding(2);
			this->TBUsr->Name = L"TBUsr";
			this->TBUsr->Size = System::Drawing::Size(448, 31);
			this->TBUsr->TabIndex = 1;
			// 
			// TBpwd
			// 
			this->TBpwd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->TBpwd->Location = System::Drawing::Point(155, 122);
			this->TBpwd->Margin = System::Windows::Forms::Padding(2);
			this->TBpwd->Name = L"TBpwd";
			this->TBpwd->PasswordChar = '*';
			this->TBpwd->Size = System::Drawing::Size(388, 31);
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
			this->label1->Size = System::Drawing::Size(531, 61);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label2->Location = System::Drawing::Point(16, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Usuari";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label3->Location = System::Drawing::Point(16, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contrasenya";
			// 
			// buttonOK
			// 
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->buttonOK->Location = System::Drawing::Point(259, 177);
			this->buttonOK->Margin = System::Windows::Forms::Padding(2);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(284, 53);
			this->buttonOK->TabIndex = 6;
			this->buttonOK->Text = L"Inicia Sesió";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &Login::buttonOK_Click);
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->cancel->Location = System::Drawing::Point(420, 234);
			this->cancel->Margin = System::Windows::Forms::Padding(2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(123, 53);
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
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->groupBox1->Location = System::Drawing::Point(20, 170);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(234, 118);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccionar tipus d\'usuari";
			// 
			// RBajt
			// 
			this->RBajt->AutoSize = true;
			this->RBajt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->RBajt->Location = System::Drawing::Point(6, 89);
			this->RBajt->Name = L"RBajt";
			this->RBajt->Size = System::Drawing::Size(138, 29);
			this->RBajt->TabIndex = 2;
			this->RBajt->Text = L"Ajuntament";
			this->RBajt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBajt->UseVisualStyleBackColor = true;
			this->RBajt->CheckedChanged += gcnew System::EventHandler(this, &Login::RBajt_CheckedChanged);
			// 
			// RBent
			// 
			this->RBent->AutoSize = true;
			this->RBent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->RBent->Location = System::Drawing::Point(6, 54);
			this->RBent->Name = L"RBent";
			this->RBent->Size = System::Drawing::Size(91, 29);
			this->RBent->TabIndex = 1;
			this->RBent->Text = L"Entitat";
			this->RBent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBent->UseVisualStyleBackColor = true;
			this->RBent->CheckedChanged += gcnew System::EventHandler(this, &Login::RBent_CheckedChanged);
			// 
			// RBcit
			// 
			this->RBcit->AutoSize = true;
			this->RBcit->Checked = true;
			this->RBcit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->RBcit->Location = System::Drawing::Point(6, 19);
			this->RBcit->Name = L"RBcit";
			this->RBcit->Size = System::Drawing::Size(104, 29);
			this->RBcit->TabIndex = 0;
			this->RBcit->TabStop = true;
			this->RBcit->Text = L"Ciutada";
			this->RBcit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBcit->UseVisualStyleBackColor = true;
			this->RBcit->CheckedChanged += gcnew System::EventHandler(this, &Login::RBcit_CheckedChanged);
			// 
			// registre
			// 
			this->registre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->registre->Location = System::Drawing::Point(259, 234);
			this->registre->Margin = System::Windows::Forms::Padding(2);
			this->registre->Name = L"registre";
			this->registre->Size = System::Drawing::Size(157, 53);
			this->registre->TabIndex = 9;
			this->registre->Text = L"Registra\'t";
			this->registre->UseVisualStyleBackColor = true;
			this->registre->Click += gcnew System::EventHandler(this, &Login::registre_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 307);
			this->Controls->Add(this->registre);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TBpwd);
			this->Controls->Add(this->TBUsr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
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
			this->Close();
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
		catch (const std::exception& e)
		{
			// Convertir la excepción de C++ a System::String^
			String^ mensajeError = gcnew String(e.what());
			MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void RBajt_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (RBajt->Checked) {
		registre->Visible = false;
		label2->Text = "Clau";
	}
	else registre->Visible = true;
}
private: System::Void registre_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RBcit->Checked) {
		RegisterFormCiutada^ registerCiutada = gcnew RegisterFormCiutada();
		this->Hide();
		registerCiutada->ShowDialog();
		this->Show();
	}
	else if (RBent->Checked) {
		RegistraEntitat^ reg = gcnew RegistraEntitat();
		this->Visible = false;
		reg->ShowDialog();
		this->Visible = true;
	}
}
private: System::Void RBent_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (RBent->Checked) label2->Text = "Correu";
}

private: System::Void RBcit_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (RBcit->Checked) label2->Text = "Usuari";
}
};
}
