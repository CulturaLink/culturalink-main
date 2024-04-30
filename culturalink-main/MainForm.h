#pragma once
#include "InfoAjuntament.h"
#include "Login.h"
#include "InfoEntitat.h"
#include "TxConsultaEntitat.h"
#include "UsuariIniciat.h"
#include "InfoCiutada.h"
#include "RegistrarEsdevenimentUI.h"
#include "ConsultaEsdevenimentUI.h"
#include "ProvesUI.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;


	private: System::Windows::Forms::Panel^ panelDesktop;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: System::Windows::Forms::PictureBox^ logInIcon;
	private: System::Windows::Forms::PictureBox^ menuIcon;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ infoUsuariIcon;
	private: System::Diagnostics::EventLog^ eventLog1;
	private: System::Windows::Forms::Button^ button5;





	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->infoUsuariIcon = (gcnew System::Windows::Forms::PictureBox());
			this->menuIcon = (gcnew System::Windows::Forms::PictureBox());
			this->logInIcon = (gcnew System::Windows::Forms::PictureBox());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->panelDesktop->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->infoUsuariIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logInIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelDesktop
			// 
			this->panelDesktop->AutoSize = true;
			this->panelDesktop->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelDesktop->BackColor = System::Drawing::Color::LightSalmon;
			this->panelDesktop->Controls->Add(this->button5);
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->panelDesktop->Location = System::Drawing::Point(156, 49);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(0, 0);
			this->panelDesktop->TabIndex = 4;
			this->panelDesktop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panelDesktop_Paint);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button5->Location = System::Drawing::Point(541, 357);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Proves";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->button4);
			this->panelMenu->Controls->Add(this->button3);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 49);
			this->panelMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(156, 0);
			this->panelMenu->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button4->Location = System::Drawing::Point(0, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Reg. Esdev.";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button3->Location = System::Drawing::Point(0, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Cons. Esdev.";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button2->Location = System::Drawing::Point(0, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Homepage";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Homepage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::White;
			this->panelTitleBar->Controls->Add(this->infoUsuariIcon);
			this->panelTitleBar->Controls->Add(this->menuIcon);
			this->panelTitleBar->Controls->Add(this->logInIcon);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(0, 0);
			this->panelTitleBar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(148, 49);
			this->panelTitleBar->TabIndex = 3;
			// 
			// infoUsuariIcon
			// 
			this->infoUsuariIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->infoUsuariIcon->Dock = System::Windows::Forms::DockStyle::Right;
			this->infoUsuariIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"infoUsuariIcon.Image")));
			this->infoUsuariIcon->Location = System::Drawing::Point(50, 0);
			this->infoUsuariIcon->Name = L"infoUsuariIcon";
			this->infoUsuariIcon->Size = System::Drawing::Size(49, 49);
			this->infoUsuariIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->infoUsuariIcon->TabIndex = 2;
			this->infoUsuariIcon->TabStop = false;
			this->infoUsuariIcon->Visible = false;
			this->infoUsuariIcon->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
			// 
			// menuIcon
			// 
			this->menuIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuIcon->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuIcon.Image")));
			this->menuIcon->Location = System::Drawing::Point(0, 0);
			this->menuIcon->Name = L"menuIcon";
			this->menuIcon->Size = System::Drawing::Size(49, 49);
			this->menuIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->menuIcon->TabIndex = 1;
			this->menuIcon->TabStop = false;
			this->menuIcon->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// logInIcon
			// 
			this->logInIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logInIcon->Dock = System::Windows::Forms::DockStyle::Right;
			this->logInIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logInIcon.Image")));
			this->logInIcon->Location = System::Drawing::Point(99, 0);
			this->logInIcon->Name = L"logInIcon";
			this->logInIcon->Size = System::Drawing::Size(49, 49);
			this->logInIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logInIcon->TabIndex = 0;
			this->logInIcon->TabStop = false;
			this->logInIcon->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click_1);
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(148, 46);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelTitleBar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panelDesktop->ResumeLayout(false);
			this->panelMenu->ResumeLayout(false);
			this->panelTitleBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->infoUsuariIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logInIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Login^ formLog = gcnew Login;
	formLog->ShowDialog();
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	if (usuario->getUsuari() != nullptr) {
		this->infoUsuariIcon->Visible = true;
		this->logInIcon->Visible = false;
	}
	if (usuario->getTipoPassarela() == TipoPassarela::Entitat)
		this->button4->Visible = true;

	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMenu->Visible = !panelMenu->Visible;
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	Object^ usuarioAlmacenado = usuario->getUsuari();
	TipoPassarela tipoUsuario = usuario->getTipoPassarela();

	// Verificar el tipo de usuario y actuar en consecuencia
	if (tipoUsuario == TipoPassarela::Ciutada) {
		InfoCiutada^ forminfoC = gcnew InfoCiutada;
		this->Hide();
		forminfoC->ShowDialog();
		this->Show();
	}
	else if (tipoUsuario == TipoPassarela::Entitat) {
		InfoEntitat^ forminfoE = gcnew InfoEntitat();
		this->Visible = false;
		forminfoE->ShowDialog();
		this->Visible = true;
	}
	else if (tipoUsuario == TipoPassarela::Ajuntament) {
		InfoAjuntament^ forminfoA = gcnew InfoAjuntament;
		this->Hide();
		forminfoA->ShowDialog();
		this->Show();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	RegistrarEsdevenimentUI^ formLog = gcnew RegistrarEsdevenimentUI;
	formLog->ShowDialog();
	/*UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	if (usuario->getTipoPassarela() == TipoPassarela::Entitat) {
		this->button4->Visible = true;
	}*/

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultaEsdevenimentUI^ formLog = gcnew ConsultaEsdevenimentUI;
	formLog->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelDesktop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	/*ProvesUI^ formLog = gcnew ProvesUI;
	formLog->ShowDialog();*/
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
