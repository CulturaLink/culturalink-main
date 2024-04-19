<<<<<<< Updated upstream
#pragma once
=======
ï»¿#pragma once
#include "InfoAjuntament.h"
#include "Login.h"
#include "InfoEntitat.h"
#include "TxConsultaEntitat.h"
#include "UsuariIniciat.h"
#include "PerfilCiutada.h"
#include "RegistrarEsdevenimentUI.h"
#include "ConsultaEsdevenimentUI.h"
>>>>>>> Stashed changes

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
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: System::Windows::Forms::Panel^ panelDesktop;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
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
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->panelMenu->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelTitleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->panel2);
			this->panelMenu->Controls->Add(this->panel1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(230, 428);
			this->panelMenu->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(12, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 55);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(-44, -29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(291, 111);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Homepage";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(230, 100);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 36);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::White;
			this->panelTitleBar->Controls->Add(this->label1);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(230, 0);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(601, 60);
			this->panelTitleBar->TabIndex = 1;
			// 
			// panelDesktop
			// 
			this->panelDesktop->BackColor = System::Drawing::SystemColors::Menu;
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(230, 60);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(601, 368);
			this->panelDesktop->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
<<<<<<< Updated upstream
=======
			this->notifyIcon1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::notifyIcon1_MouseDoubleClick);
			// 
			// panelDesktop
			// 
			this->panelDesktop->AutoSize = true;
			this->panelDesktop->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelDesktop->BackColor = System::Drawing::Color::LightSalmon;
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(169, 60);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(662, 368);
			this->panelDesktop->TabIndex = 4;
			this->panelDesktop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panelDesktop_Paint);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->button4);
			this->panelMenu->Controls->Add(this->button3);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 60);
			this->panelMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(169, 368);
			this->panelMenu->TabIndex = 0;
			this->panelMenu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panelMenu_Paint);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(4, 156);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 42);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Reg. Esdev.";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(4, 107);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Consult. Esdev.";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(4, 58);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Homepage";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(4, 9);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Homepage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::White;
			this->panelTitleBar->Controls->Add(this->pictureBox3);
			this->panelTitleBar->Controls->Add(this->pictureBox1);
			this->panelTitleBar->Controls->Add(this->pictureBox2);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(0, 0);
			this->panelTitleBar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(831, 60);
			this->panelTitleBar->TabIndex = 3;
			this->panelTitleBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panelTitleBar_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(688, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(65, 62);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(65, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(761, -1);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(65, 62);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click_1);
>>>>>>> Stashed changes
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 428);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelTitleBar->ResumeLayout(false);
			this->panelTitleBar->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
<<<<<<< Updated upstream
=======
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
private: System::Void panelDesktop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panelMenu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelTitleBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
>>>>>>> Stashed changes
};
}
