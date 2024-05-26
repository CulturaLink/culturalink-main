#pragma once
#include "CtrlModificaCiutada.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: CtrlModificaCiutada ctrlModCit;

	private: System::Windows::Forms::Panel^ PANELModificaCiut;
	private: System::Windows::Forms::Panel^ pnlDataMODCIT;
	protected:

	private: System::Windows::Forms::Panel^ pnlCorrMODCIT;

	private: System::Windows::Forms::Panel^ pnlNomMODCIT;


	private: System::Windows::Forms::Panel^ pnlTitlesMODCIT;
	private: System::Windows::Forms::Label^ lblFormatMODCIT;
	private: System::Windows::Forms::Button^ btnModMODCIT;



	private: System::Windows::Forms::TextBox^ TextBoxRepCtrMODCIT;

	private: System::Windows::Forms::Label^ lblRepCtrMODCIT;

	private: System::Windows::Forms::TextBox^ TextBoxCtrMODCIT;

	private: System::Windows::Forms::Label^ lblCtrMODCIT;

	private: System::Windows::Forms::TextBox^ TextBoxDataMODCIT;

	private: System::Windows::Forms::TextBox^ TextBoxNomMODCIT;
	private: System::Windows::Forms::TextBox^ TextBoxCorrMODCIT;
	private: System::Windows::Forms::Label^ lblDataMODCIT;



	private: System::Windows::Forms::Label^ lblNomMODCIT;
	private: System::Windows::Forms::Label^ lblCorrMODCIT;
	private: System::Windows::Forms::Panel^ pnlRepCtrMODCIT;





	private: System::Windows::Forms::Panel^ pnlCtrMODCIT;
	private: System::Windows::Forms::Label^ lblNomCitMODCIT;


	private: System::Windows::Forms::Button^ btnBackMODCIT;


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
			this->PANELModificaCiut = (gcnew System::Windows::Forms::Panel());
			this->btnBackMODCIT = (gcnew System::Windows::Forms::Button());
			this->pnlRepCtrMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblRepCtrMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlCtrMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblCtrMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlTitlesMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblNomCitMODCIT = (gcnew System::Windows::Forms::Label());
			this->lblFormatMODCIT = (gcnew System::Windows::Forms::Label());
			this->btnModMODCIT = (gcnew System::Windows::Forms::Button());
			this->TextBoxRepCtrMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCtrMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxDataMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCorrMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->pnlNomMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblNomMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlCorrMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblCorrMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlDataMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblDataMODCIT = (gcnew System::Windows::Forms::Label());
			this->PANELModificaCiut->SuspendLayout();
			this->pnlRepCtrMODCIT->SuspendLayout();
			this->pnlCtrMODCIT->SuspendLayout();
			this->pnlTitlesMODCIT->SuspendLayout();
			this->pnlNomMODCIT->SuspendLayout();
			this->pnlCorrMODCIT->SuspendLayout();
			this->pnlDataMODCIT->SuspendLayout();
			this->SuspendLayout();
			// 
			// PANELModificaCiut
			// 
			this->PANELModificaCiut->BackColor = System::Drawing::Color::White;
			this->PANELModificaCiut->Controls->Add(this->btnBackMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlRepCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlTitlesMODCIT);
			this->PANELModificaCiut->Controls->Add(this->lblFormatMODCIT);
			this->PANELModificaCiut->Controls->Add(this->btnModMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxRepCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxDataMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxNomMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxCorrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlNomMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlCorrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlDataMODCIT);
			this->PANELModificaCiut->Location = System::Drawing::Point(243, 37);
			this->PANELModificaCiut->Name = L"PANELModificaCiut";
			this->PANELModificaCiut->Size = System::Drawing::Size(586, 547);
			this->PANELModificaCiut->TabIndex = 15;
			this->PANELModificaCiut->Visible = false;
			// 
			// btnBackMODCIT
			// 
			this->btnBackMODCIT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnBackMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btnBackMODCIT->Location = System::Drawing::Point(347, 473);
			this->btnBackMODCIT->Name = L"btnBackMODCIT";
			this->btnBackMODCIT->Size = System::Drawing::Size(76, 27);
			this->btnBackMODCIT->TabIndex = 38;
			this->btnBackMODCIT->Text = L"Back";
			this->btnBackMODCIT->UseVisualStyleBackColor = true;
			// 
			// pnlRepCtrMODCIT
			// 
			this->pnlRepCtrMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlRepCtrMODCIT->Controls->Add(this->lblRepCtrMODCIT);
			this->pnlRepCtrMODCIT->Location = System::Drawing::Point(69, 217);
			this->pnlRepCtrMODCIT->Name = L"pnlRepCtrMODCIT";
			this->pnlRepCtrMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlRepCtrMODCIT->TabIndex = 37;
			// 
			// lblRepCtrMODCIT
			// 
			this->lblRepCtrMODCIT->AutoSize = true;
			this->lblRepCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblRepCtrMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblRepCtrMODCIT->Location = System::Drawing::Point(31, 3);
			this->lblRepCtrMODCIT->Name = L"lblRepCtrMODCIT";
			this->lblRepCtrMODCIT->Size = System::Drawing::Size(141, 13);
			this->lblRepCtrMODCIT->TabIndex = 30;
			this->lblRepCtrMODCIT->Text = L"Repetir nova Contrasenya:\r\n";
			// 
			// pnlCtrMODCIT
			// 
			this->pnlCtrMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlCtrMODCIT->Controls->Add(this->lblCtrMODCIT);
			this->pnlCtrMODCIT->Location = System::Drawing::Point(69, 164);
			this->pnlCtrMODCIT->Name = L"pnlCtrMODCIT";
			this->pnlCtrMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlCtrMODCIT->TabIndex = 36;
			// 
			// lblCtrMODCIT
			// 
			this->lblCtrMODCIT->AutoSize = true;
			this->lblCtrMODCIT->BackColor = System::Drawing::Color::Transparent;
			this->lblCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblCtrMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblCtrMODCIT->Location = System::Drawing::Point(46, 3);
			this->lblCtrMODCIT->Name = L"lblCtrMODCIT";
			this->lblCtrMODCIT->Size = System::Drawing::Size(103, 13);
			this->lblCtrMODCIT->TabIndex = 28;
			this->lblCtrMODCIT->Text = L"Nova Contrasenya:";
			// 
			// pnlTitlesMODCIT
			// 
			this->pnlTitlesMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlTitlesMODCIT->Controls->Add(this->lblNomCitMODCIT);
			this->pnlTitlesMODCIT->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitlesMODCIT->Location = System::Drawing::Point(0, 0);
			this->pnlTitlesMODCIT->Name = L"pnlTitlesMODCIT";
			this->pnlTitlesMODCIT->Size = System::Drawing::Size(586, 38);
			this->pnlTitlesMODCIT->TabIndex = 32;
			// 
			// lblNomCitMODCIT
			// 
			this->lblNomCitMODCIT->AutoSize = true;
			this->lblNomCitMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblNomCitMODCIT->Location = System::Drawing::Point(33, 12);
			this->lblNomCitMODCIT->Name = L"lblNomCitMODCIT";
			this->lblNomCitMODCIT->Size = System::Drawing::Size(82, 13);
			this->lblNomCitMODCIT->TabIndex = 0;
			this->lblNomCitMODCIT->Text = L"NOM CIUTADA";
			// 
			// lblFormatMODCIT
			// 
			this->lblFormatMODCIT->AutoSize = true;
			this->lblFormatMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblFormatMODCIT->Location = System::Drawing::Point(418, 335);
			this->lblFormatMODCIT->Name = L"lblFormatMODCIT";
			this->lblFormatMODCIT->Size = System::Drawing::Size(87, 13);
			this->lblFormatMODCIT->TabIndex = 33;
			this->lblFormatMODCIT->Text = L"(AAAA-MM-DD)";
			// 
			// btnModMODCIT
			// 
			this->btnModMODCIT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnModMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btnModMODCIT->Location = System::Drawing::Point(429, 473);
			this->btnModMODCIT->Name = L"btnModMODCIT";
			this->btnModMODCIT->Size = System::Drawing::Size(76, 27);
			this->btnModMODCIT->TabIndex = 32;
			this->btnModMODCIT->Text = L"Modifica";
			this->btnModMODCIT->UseVisualStyleBackColor = true;
			this->btnModMODCIT->Click += gcnew System::EventHandler(this, &MyForm::btnModMODCIT_Click);
			// 
			// TextBoxRepCtrMODCIT
			// 
			this->TextBoxRepCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxRepCtrMODCIT->Location = System::Drawing::Point(266, 217);
			this->TextBoxRepCtrMODCIT->Name = L"TextBoxRepCtrMODCIT";
			this->TextBoxRepCtrMODCIT->PasswordChar = '*';
			this->TextBoxRepCtrMODCIT->Size = System::Drawing::Size(239, 21);
			this->TextBoxRepCtrMODCIT->TabIndex = 31;
			// 
			// TextBoxCtrMODCIT
			// 
			this->TextBoxCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxCtrMODCIT->Location = System::Drawing::Point(266, 164);
			this->TextBoxCtrMODCIT->Name = L"TextBoxCtrMODCIT";
			this->TextBoxCtrMODCIT->PasswordChar = '*';
			this->TextBoxCtrMODCIT->Size = System::Drawing::Size(239, 21);
			this->TextBoxCtrMODCIT->TabIndex = 29;
			// 
			// TextBoxDataMODCIT
			// 
			this->TextBoxDataMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxDataMODCIT->Location = System::Drawing::Point(266, 332);
			this->TextBoxDataMODCIT->Name = L"TextBoxDataMODCIT";
			this->TextBoxDataMODCIT->Size = System::Drawing::Size(146, 21);
			this->TextBoxDataMODCIT->TabIndex = 27;
			// 
			// TextBoxNomMODCIT
			// 
			this->TextBoxNomMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxNomMODCIT->Location = System::Drawing::Point(266, 114);
			this->TextBoxNomMODCIT->Name = L"TextBoxNomMODCIT";
			this->TextBoxNomMODCIT->Size = System::Drawing::Size(239, 21);
			this->TextBoxNomMODCIT->TabIndex = 26;
			// 
			// TextBoxCorrMODCIT
			// 
			this->TextBoxCorrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxCorrMODCIT->Location = System::Drawing::Point(266, 269);
			this->TextBoxCorrMODCIT->Name = L"TextBoxCorrMODCIT";
			this->TextBoxCorrMODCIT->Size = System::Drawing::Size(239, 21);
			this->TextBoxCorrMODCIT->TabIndex = 25;
			// 
			// pnlNomMODCIT
			// 
			this->pnlNomMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlNomMODCIT->Controls->Add(this->lblNomMODCIT);
			this->pnlNomMODCIT->Location = System::Drawing::Point(69, 114);
			this->pnlNomMODCIT->Name = L"pnlNomMODCIT";
			this->pnlNomMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlNomMODCIT->TabIndex = 34;
			// 
			// lblNomMODCIT
			// 
			this->lblNomMODCIT->AutoSize = true;
			this->lblNomMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblNomMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblNomMODCIT->Location = System::Drawing::Point(40, 3);
			this->lblNomMODCIT->Name = L"lblNomMODCIT";
			this->lblNomMODCIT->Size = System::Drawing::Size(106, 13);
			this->lblNomMODCIT->TabIndex = 14;
			this->lblNomMODCIT->Text = L"Nou Nom Complet:";
			// 
			// pnlCorrMODCIT
			// 
			this->pnlCorrMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlCorrMODCIT->Controls->Add(this->lblCorrMODCIT);
			this->pnlCorrMODCIT->Location = System::Drawing::Point(69, 269);
			this->pnlCorrMODCIT->Name = L"pnlCorrMODCIT";
			this->pnlCorrMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlCorrMODCIT->TabIndex = 35;
			// 
			// lblCorrMODCIT
			// 
			this->lblCorrMODCIT->AutoSize = true;
			this->lblCorrMODCIT->BackColor = System::Drawing::Color::Transparent;
			this->lblCorrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblCorrMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblCorrMODCIT->Location = System::Drawing::Point(64, 3);
			this->lblCorrMODCIT->Name = L"lblCorrMODCIT";
			this->lblCorrMODCIT->Size = System::Drawing::Size(68, 13);
			this->lblCorrMODCIT->TabIndex = 13;
			this->lblCorrMODCIT->Text = L"Nou Correu:";
			// 
			// pnlDataMODCIT
			// 
			this->pnlDataMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlDataMODCIT->Controls->Add(this->lblDataMODCIT);
			this->pnlDataMODCIT->Location = System::Drawing::Point(69, 332);
			this->pnlDataMODCIT->Name = L"pnlDataMODCIT";
			this->pnlDataMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlDataMODCIT->TabIndex = 35;
			// 
			// lblDataMODCIT
			// 
			this->lblDataMODCIT->AutoSize = true;
			this->lblDataMODCIT->BackColor = System::Drawing::Color::Transparent;
			this->lblDataMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblDataMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblDataMODCIT->Location = System::Drawing::Point(31, 3);
			this->lblDataMODCIT->Name = L"lblDataMODCIT";
			this->lblDataMODCIT->Size = System::Drawing::Size(138, 13);
			this->lblDataMODCIT->TabIndex = 17;
			this->lblDataMODCIT->Text = L"Nova Data de Naixament:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 728);
			this->Controls->Add(this->PANELModificaCiut);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->PANELModificaCiut->ResumeLayout(false);
			this->PANELModificaCiut->PerformLayout();
			this->pnlRepCtrMODCIT->ResumeLayout(false);
			this->pnlRepCtrMODCIT->PerformLayout();
			this->pnlCtrMODCIT->ResumeLayout(false);
			this->pnlCtrMODCIT->PerformLayout();
			this->pnlTitlesMODCIT->ResumeLayout(false);
			this->pnlTitlesMODCIT->PerformLayout();
			this->pnlNomMODCIT->ResumeLayout(false);
			this->pnlNomMODCIT->PerformLayout();
			this->pnlCorrMODCIT->ResumeLayout(false);
			this->pnlCorrMODCIT->PerformLayout();
			this->pnlDataMODCIT->ResumeLayout(false);
			this->pnlDataMODCIT->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnModMODCIT_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextBoxCtrMODCIT->Text == TextBoxRepCtrMODCIT->Text) {
			try {
				ctrlModCit.modificaCiutada(TextBoxNomMODCIT->Text, TextBoxCorrMODCIT->Text, TextBoxDataMODCIT->Text, TextBoxDataMODCIT->Text);
				//this->Close();
				MessageBox::Show("Les dades s'han actualitzat amb èxit!");
			}
			catch (CorreuExisteix^ e1) {
				MessageBox::Show(e1->Message);
			}
		}
		else {
			MessageBox::Show("Els camps de nova contrassenya i repetició no coincideixe, torna a intentar.");
		}
	}
};
}
