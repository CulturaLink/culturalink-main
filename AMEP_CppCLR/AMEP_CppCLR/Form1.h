#pragma once
#include "Ciutada.h";
#include "Form2.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace AMEP_CppCLR;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menu1ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ holaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ opcio2ToolStripMenuItem;
	private: System::Windows::Forms::Button^ btnEnter;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbNick;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbContrasenya;

	private: System::Windows::Forms::ToolStripMenuItem^ ajuntamentToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menu1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->holaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcio2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajuntamentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbNick = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menu1ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menu1ToolStripMenuItem
			// 
			this->menu1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->holaToolStripMenuItem,
					this->opcio2ToolStripMenuItem, this->ajuntamentToolStripMenuItem
			});
			this->menu1ToolStripMenuItem->Name = L"menu1ToolStripMenuItem";
			this->menu1ToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->menu1ToolStripMenuItem->Text = L"Inicia sessió";
			// 
			// holaToolStripMenuItem
			// 
			this->holaToolStripMenuItem->Name = L"holaToolStripMenuItem";
			this->holaToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->holaToolStripMenuItem->Text = L"Ciutada";
			this->holaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::holaToolStripMenuItem_Click);
			// 
			// opcio2ToolStripMenuItem
			// 
			this->opcio2ToolStripMenuItem->Name = L"opcio2ToolStripMenuItem";
			this->opcio2ToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->opcio2ToolStripMenuItem->Text = L"Entitat";
			// 
			// ajuntamentToolStripMenuItem
			// 
			this->ajuntamentToolStripMenuItem->Name = L"ajuntamentToolStripMenuItem";
			this->ajuntamentToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->ajuntamentToolStripMenuItem->Text = L"Ajuntament";
			// 
			// btnEnter
			// 
			this->btnEnter->Location = System::Drawing::Point(197, 226);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(75, 23);
			this->btnEnter->TabIndex = 1;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nickname";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// tbNick
			// 
			this->tbNick->Location = System::Drawing::Point(12, 43);
			this->tbNick->Name = L"tbNick";
			this->tbNick->Size = System::Drawing::Size(100, 20);
			this->tbNick->TabIndex = 3;
			this->tbNick->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contrasenya";
			// 
			// tbContrasenya
			// 
			this->tbContrasenya->Location = System::Drawing::Point(12, 97);
			this->tbContrasenya->Name = L"tbContrasenya";
			this->tbContrasenya->Size = System::Drawing::Size(100, 20);
			this->tbContrasenya->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->tbContrasenya);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbNick);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void holaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nick = this->tbNick->Text;
	String^ contra = this->tbContrasenya->Text;
	if (nick->Length == 0) {
		MessageBox::Show("Nickname buit. Introdueixi el seu nickname siusplau.", "Nickname buit");
		return;
	}
	Ciutada logged(nick);
	if (logged.getContrasenya() != contra) {
		//MessageBox::Show("DB: "+ logged.getContrasenya()+", ENTRAT: "+contra, "Debuh");
		MessageBox::Show("Nickname o contrasenya incorrectes, siusplau torna-ho a intentar.", "Nickname o contrasenya incorrectes");
	}
	else {
		MessageBox::Show("Nickname i contrasenya correctes!", "Login");
		// Ocultar el formulario actual
		this->Hide();

		// Crear una instancia del nuevo formulario
		Form2^ form2 = gcnew Form2();

		// Mostrar el nuevo formulario
		form2->Show();
	}
}
};
}
