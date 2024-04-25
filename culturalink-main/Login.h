#pragma once
#include "RegistraEntitat.h"
#include "TxIniciaSessio.h"
#include "TxLoginCiutada.h"
#include "TxLoginAjuntament.h"
#include "RegisterFormCiutada.h"

#include "ProvesUI.h"


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



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ RBajt;

	private: System::Windows::Forms::RadioButton^ RBent;

	private: System::Windows::Forms::RadioButton^ RBcit;

	private: System::Windows::Forms::Button^ registre;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ AppIcon;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Button^ btnMaximize;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->TBUsr = (gcnew System::Windows::Forms::TextBox());
			this->TBpwd = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RBajt = (gcnew System::Windows::Forms::RadioButton());
			this->RBent = (gcnew System::Windows::Forms::RadioButton());
			this->RBcit = (gcnew System::Windows::Forms::RadioButton());
			this->registre = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AppIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->btnMaximize = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// TBUsr
			// 
			this->TBUsr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->TBUsr->Location = System::Drawing::Point(97, 18);
			this->TBUsr->Margin = System::Windows::Forms::Padding(2);
			this->TBUsr->Name = L"TBUsr";
			this->TBUsr->Size = System::Drawing::Size(219, 31);
			this->TBUsr->TabIndex = 1;
			// 
			// TBpwd
			// 
			this->TBpwd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->TBpwd->Location = System::Drawing::Point(97, 65);
			this->TBpwd->Margin = System::Windows::Forms::Padding(2);
			this->TBpwd->Name = L"TBpwd";
			this->TBpwd->PasswordChar = '*';
			this->TBpwd->Size = System::Drawing::Size(219, 31);
			this->TBpwd->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 53);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"password";
			// 
			// buttonOK
			// 
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOK->Location = System::Drawing::Point(174, 369);
			this->buttonOK->Margin = System::Windows::Forms::Padding(2);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(120, 30);
			this->buttonOK->TabIndex = 6;
			this->buttonOK->Text = L"Inicia Sesió";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &Login::buttonOK_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->RBajt);
			this->groupBox1->Controls->Add(this->RBent);
			this->groupBox1->Controls->Add(this->RBcit);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(329, 99);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select User Type";
			// 
			// RBajt
			// 
			this->RBajt->AutoSize = true;
			this->RBajt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RBajt->Location = System::Drawing::Point(6, 67);
			this->RBajt->Name = L"RBajt";
			this->RBajt->Size = System::Drawing::Size(109, 24);
			this->RBajt->TabIndex = 2;
			this->RBajt->Text = L"Ajuntament";
			this->RBajt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBajt->UseVisualStyleBackColor = true;
			this->RBajt->CheckedChanged += gcnew System::EventHandler(this, &Login::RBajt_CheckedChanged);
			// 
			// RBent
			// 
			this->RBent->AutoSize = true;
			this->RBent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RBent->Location = System::Drawing::Point(6, 43);
			this->RBent->Name = L"RBent";
			this->RBent->Size = System::Drawing::Size(74, 24);
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
			this->RBcit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RBcit->Location = System::Drawing::Point(6, 19);
			this->RBcit->Name = L"RBcit";
			this->RBcit->Size = System::Drawing::Size(82, 24);
			this->RBcit->TabIndex = 0;
			this->RBcit->TabStop = true;
			this->RBcit->Text = L"Ciutada";
			this->RBcit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RBcit->UseVisualStyleBackColor = true;
			this->RBcit->CheckedChanged += gcnew System::EventHandler(this, &Login::RBcit_CheckedChanged);
			// 
			// registre
			// 
			this->registre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registre->Location = System::Drawing::Point(28, 369);
			this->registre->Margin = System::Windows::Forms::Padding(2);
			this->registre->Name = L"registre";
			this->registre->Size = System::Drawing::Size(120, 30);
			this->registre->TabIndex = 9;
			this->registre->Text = L"Registra\'t";
			this->registre->UseVisualStyleBackColor = true;
			this->registre->Click += gcnew System::EventHandler(this, &Login::registre_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(329, 30);
			this->panel1->TabIndex = 10;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->AppIcon);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(207, 30);
			this->panel3->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(25, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 15);
			this->label4->TabIndex = 1;
			this->label4->Text = L"CulturaLink";
			// 
			// AppIcon
			// 
			this->AppIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.Image")));
			this->AppIcon->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.InitialImage")));
			this->AppIcon->Location = System::Drawing::Point(5, 5);
			this->AppIcon->Name = L"AppIcon";
			this->AppIcon->Size = System::Drawing::Size(35, 30);
			this->AppIcon->TabIndex = 0;
			this->AppIcon->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnMinimize);
			this->panel2->Controls->Add(this->btnMaximize);
			this->panel2->Controls->Add(this->btnClose);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(129, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 30);
			this->panel2->TabIndex = 0;
			// 
			// btnMinimize
			// 
			this->btnMinimize->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(95, 0);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(35, 30);
			this->btnMinimize->TabIndex = 2;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &Login::btnMinimize_Click);
			this->btnMinimize->MouseLeave += gcnew System::EventHandler(this, &Login::btnMinimize_MouseLeave);
			this->btnMinimize->MouseHover += gcnew System::EventHandler(this, &Login::btnMinimize_MouseHover);
			// 
			// btnMaximize
			// 
			this->btnMaximize->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaximize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnMaximize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximize.Image")));
			this->btnMaximize->Location = System::Drawing::Point(130, 0);
			this->btnMaximize->Name = L"btnMaximize";
			this->btnMaximize->Size = System::Drawing::Size(35, 30);
			this->btnMaximize->TabIndex = 1;
			this->btnMaximize->UseVisualStyleBackColor = true;
			this->btnMaximize->Click += gcnew System::EventHandler(this, &Login::btnMaximize_Click);
			this->btnMaximize->MouseLeave += gcnew System::EventHandler(this, &Login::btnMaximize_MouseLeave);
			this->btnMaximize->MouseHover += gcnew System::EventHandler(this, &Login::btnMaximize_MouseHover);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnClose->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(165, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(35, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &Login::btnClose_Click);
			this->btnClose->MouseLeave += gcnew System::EventHandler(this, &Login::bntClose_MouseLeave);
			this->btnClose->MouseHover += gcnew System::EventHandler(this, &Login::bntClose_MouseHover);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 30);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(329, 53);
			this->panel4->TabIndex = 11;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->TBUsr);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->TBpwd);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 83);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(329, 130);
			this->panel5->TabIndex = 12;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->groupBox1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 213);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(329, 150);
			this->panel6->TabIndex = 13;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 410);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->registre);
			this->Controls->Add(this->buttonOK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
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
			ProvesUI^ formLog = gcnew ProvesUI;
			formLog->ShowDialog();
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
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void btnMaximize_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void bntClose_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
}
private: System::Void bntClose_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
		static_cast<System::Int32>(static_cast<System::Byte>(31)));
}
private: System::Void btnMaximize_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
		static_cast<System::Int32>(static_cast<System::Byte>(70)));
}
private: System::Void btnMaximize_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
		static_cast<System::Int32>(static_cast<System::Byte>(31)));
}
private: System::Void btnMinimize_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
		static_cast<System::Int32>(static_cast<System::Byte>(62)));
}
private: System::Void btnMinimize_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
		static_cast<System::Int32>(static_cast<System::Byte>(31)));
}
};
}
