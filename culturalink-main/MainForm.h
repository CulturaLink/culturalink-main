#pragma once
#include "Login.h"

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
	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panelMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->panel1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(172, 240);
			this->panelMenu->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(172, 81);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(25, 7);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 41);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::White;
			this->panelTitleBar->Controls->Add(this->pictureBox2);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(172, 0);
			this->panelTitleBar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(246, 49);
			this->panelTitleBar->TabIndex = 1;
			// 
			// panelDesktop
			// 
			this->panelDesktop->BackColor = System::Drawing::SystemColors::Menu;
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(172, 49);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(246, 191);
			this->panelDesktop->TabIndex = 2;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(185, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 46);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 240);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelTitleBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		Login^ login = gcnew Login();
		login->ShowDialog();
	
	}
};
}
