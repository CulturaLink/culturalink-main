#pragma once

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModificaAjuntamentUI
	/// </summary>
	public ref class ModificaAjuntamentUI : public System::Windows::Forms::Form
	{
	public:
		ModificaAjuntamentUI(void)
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
		~ModificaAjuntamentUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PANELModificaAjuntament;

	private: System::Windows::Forms::Panel^ BlackPartMODAJUN;




	private: System::Windows::Forms::Label^ lbl_contrasenya_ajuntamentMODAJUN;

	private: System::Windows::Forms::Label^ lbl_correu_electronic_ajuntamentMODAJUN;

	private: System::Windows::Forms::Label^ lbl_telefon_ajuntamentMODAJUN;

	private: System::Windows::Forms::Label^ lbl_poblacio_ajuntamentMODAJUN;
	private: System::Windows::Forms::Label^ lbl_nom_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_nom_ajuntamentMODAJUN;
	private: System::Windows::Forms::TextBox^ txt_nom_ajuntamentMODAJUN;


	private: System::Windows::Forms::Panel^ panel_telefon_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_correu_electronic_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_contrasenya_ajuntamentMODAJUN;



	private: System::Windows::Forms::Panel^ panel_poblacio_ajuntamentMODAJUN;
	private: System::Windows::Forms::TextBox^ txt_contrasenya_ajuntamentMODAJUN;


	private: System::Windows::Forms::TextBox^ txt_correu_electronic_ajuntamentMODAJUN;

	private: System::Windows::Forms::TextBox^ txt_telefon_ajuntamentMODAJUN;

	private: System::Windows::Forms::TextBox^ txt_poblacio_ajuntamentMODAJUN;
	private: System::Windows::Forms::Button^ btn_atrasMODAJUN;
	private: System::Windows::Forms::Button^ btn_modificaMODAJUN;



	protected:





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
			this->PANELModificaAjuntament = (gcnew System::Windows::Forms::Panel());
			this->btn_atrasMODAJUN = (gcnew System::Windows::Forms::Button());
			this->btn_modificaMODAJUN = (gcnew System::Windows::Forms::Button());
			this->txt_contrasenya_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_correu_electronic_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_telefon_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_poblacio_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->lbl_contrasenya_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->BlackPartMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->panel_nom_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_nom_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->panel_poblacio_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_poblacio_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->panel_contrasenya_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->panel_telefon_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_telefon_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->panel_correu_electronic_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_correu_electronic_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->PANELModificaAjuntament->SuspendLayout();
			this->panel_nom_ajuntamentMODAJUN->SuspendLayout();
			this->panel_poblacio_ajuntamentMODAJUN->SuspendLayout();
			this->panel_telefon_ajuntamentMODAJUN->SuspendLayout();
			this->panel_correu_electronic_ajuntamentMODAJUN->SuspendLayout();
			this->SuspendLayout();
			// 
			// PANELModificaAjuntament
			// 
			this->PANELModificaAjuntament->Controls->Add(this->btn_atrasMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->btn_modificaMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_contrasenya_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_correu_electronic_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_telefon_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_poblacio_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_nom_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->lbl_contrasenya_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->BlackPartMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_nom_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_poblacio_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_contrasenya_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_telefon_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_correu_electronic_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Location = System::Drawing::Point(12, 12);
			this->PANELModificaAjuntament->Name = L"PANELModificaAjuntament";
			this->PANELModificaAjuntament->Size = System::Drawing::Size(1030, 568);
			this->PANELModificaAjuntament->TabIndex = 0;
			// 
			// btn_atrasMODAJUN
			// 
			this->btn_atrasMODAJUN->BackColor = System::Drawing::SystemColors::Control;
			this->btn_atrasMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btn_atrasMODAJUN->Location = System::Drawing::Point(765, 470);
			this->btn_atrasMODAJUN->Name = L"btn_atrasMODAJUN";
			this->btn_atrasMODAJUN->Size = System::Drawing::Size(75, 23);
			this->btn_atrasMODAJUN->TabIndex = 14;
			this->btn_atrasMODAJUN->Text = L"Atras";
			this->btn_atrasMODAJUN->UseVisualStyleBackColor = false;
			this->btn_atrasMODAJUN->Click += gcnew System::EventHandler(this, &ModificaAjuntamentUI::button2_Click);
			// 
			// btn_modificaMODAJUN
			// 
			this->btn_modificaMODAJUN->BackColor = System::Drawing::SystemColors::Control;
			this->btn_modificaMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btn_modificaMODAJUN->Location = System::Drawing::Point(859, 470);
			this->btn_modificaMODAJUN->Name = L"btn_modificaMODAJUN";
			this->btn_modificaMODAJUN->Size = System::Drawing::Size(75, 23);
			this->btn_modificaMODAJUN->TabIndex = 13;
			this->btn_modificaMODAJUN->Text = L"Modifica";
			this->btn_modificaMODAJUN->UseVisualStyleBackColor = false;
			// 
			// txt_contrasenya_ajuntamentMODAJUN
			// 
			this->txt_contrasenya_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 389);
			this->txt_contrasenya_ajuntamentMODAJUN->Name = L"txt_contrasenya_ajuntamentMODAJUN";
			this->txt_contrasenya_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_contrasenya_ajuntamentMODAJUN->TabIndex = 12;
			// 
			// txt_correu_electronic_ajuntamentMODAJUN
			// 
			this->txt_correu_electronic_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 331);
			this->txt_correu_electronic_ajuntamentMODAJUN->Name = L"txt_correu_electronic_ajuntamentMODAJUN";
			this->txt_correu_electronic_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_correu_electronic_ajuntamentMODAJUN->TabIndex = 11;
			// 
			// txt_telefon_ajuntamentMODAJUN
			// 
			this->txt_telefon_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 274);
			this->txt_telefon_ajuntamentMODAJUN->Name = L"txt_telefon_ajuntamentMODAJUN";
			this->txt_telefon_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_telefon_ajuntamentMODAJUN->TabIndex = 10;
			// 
			// txt_poblacio_ajuntamentMODAJUN
			// 
			this->txt_poblacio_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 215);
			this->txt_poblacio_ajuntamentMODAJUN->Name = L"txt_poblacio_ajuntamentMODAJUN";
			this->txt_poblacio_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_poblacio_ajuntamentMODAJUN->TabIndex = 9;
			// 
			// txt_nom_ajuntamentMODAJUN
			// 
			this->txt_nom_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 156);
			this->txt_nom_ajuntamentMODAJUN->Name = L"txt_nom_ajuntamentMODAJUN";
			this->txt_nom_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_nom_ajuntamentMODAJUN->TabIndex = 5;
			// 
			// lbl_contrasenya_ajuntamentMODAJUN
			// 
			this->lbl_contrasenya_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_contrasenya_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_contrasenya_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_contrasenya_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_contrasenya_ajuntamentMODAJUN->Location = System::Drawing::Point(271, 391);
			this->lbl_contrasenya_ajuntamentMODAJUN->Name = L"lbl_contrasenya_ajuntamentMODAJUN";
			this->lbl_contrasenya_ajuntamentMODAJUN->Size = System::Drawing::Size(84, 17);
			this->lbl_contrasenya_ajuntamentMODAJUN->TabIndex = 4;
			this->lbl_contrasenya_ajuntamentMODAJUN->Text = L"Contrasenya";
			// 
			// BlackPartMODAJUN
			// 
			this->BlackPartMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BlackPartMODAJUN->Location = System::Drawing::Point(3, 3);
			this->BlackPartMODAJUN->Name = L"BlackPartMODAJUN";
			this->BlackPartMODAJUN->Size = System::Drawing::Size(1024, 83);
			this->BlackPartMODAJUN->TabIndex = 0;
			// 
			// panel_nom_ajuntamentMODAJUN
			// 
			this->panel_nom_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_nom_ajuntamentMODAJUN->Controls->Add(this->lbl_nom_ajuntamentMODAJUN);
			this->panel_nom_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 156);
			this->panel_nom_ajuntamentMODAJUN->Name = L"panel_nom_ajuntamentMODAJUN";
			this->panel_nom_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_nom_ajuntamentMODAJUN->TabIndex = 6;
			// 
			// lbl_nom_ajuntamentMODAJUN
			// 
			this->lbl_nom_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_nom_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_nom_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_nom_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nom_ajuntamentMODAJUN->Location = System::Drawing::Point(78, 2);
			this->lbl_nom_ajuntamentMODAJUN->Name = L"lbl_nom_ajuntamentMODAJUN";
			this->lbl_nom_ajuntamentMODAJUN->Size = System::Drawing::Size(38, 17);
			this->lbl_nom_ajuntamentMODAJUN->TabIndex = 0;
			this->lbl_nom_ajuntamentMODAJUN->Text = L"Nom";
			this->lbl_nom_ajuntamentMODAJUN->Click += gcnew System::EventHandler(this, &ModificaAjuntamentUI::lbl_nom_ajuntamentMODAJUN_Click);
			// 
			// panel_poblacio_ajuntamentMODAJUN
			// 
			this->panel_poblacio_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_poblacio_ajuntamentMODAJUN->Controls->Add(this->lbl_poblacio_ajuntamentMODAJUN);
			this->panel_poblacio_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_poblacio_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 215);
			this->panel_poblacio_ajuntamentMODAJUN->Name = L"panel_poblacio_ajuntamentMODAJUN";
			this->panel_poblacio_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_poblacio_ajuntamentMODAJUN->TabIndex = 8;
			// 
			// lbl_poblacio_ajuntamentMODAJUN
			// 
			this->lbl_poblacio_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_poblacio_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_poblacio_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_poblacio_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_poblacio_ajuntamentMODAJUN->Location = System::Drawing::Point(66, 3);
			this->lbl_poblacio_ajuntamentMODAJUN->Name = L"lbl_poblacio_ajuntamentMODAJUN";
			this->lbl_poblacio_ajuntamentMODAJUN->Size = System::Drawing::Size(59, 17);
			this->lbl_poblacio_ajuntamentMODAJUN->TabIndex = 1;
			this->lbl_poblacio_ajuntamentMODAJUN->Text = L"Poblacio";
			this->lbl_poblacio_ajuntamentMODAJUN->Click += gcnew System::EventHandler(this, &ModificaAjuntamentUI::lbl_poblacio_ajuntamentMODAJUN_Click);
			// 
			// panel_contrasenya_ajuntamentMODAJUN
			// 
			this->panel_contrasenya_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_contrasenya_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_contrasenya_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 389);
			this->panel_contrasenya_ajuntamentMODAJUN->Name = L"panel_contrasenya_ajuntamentMODAJUN";
			this->panel_contrasenya_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_contrasenya_ajuntamentMODAJUN->TabIndex = 8;
			// 
			// panel_telefon_ajuntamentMODAJUN
			// 
			this->panel_telefon_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_telefon_ajuntamentMODAJUN->Controls->Add(this->lbl_telefon_ajuntamentMODAJUN);
			this->panel_telefon_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_telefon_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 274);
			this->panel_telefon_ajuntamentMODAJUN->Name = L"panel_telefon_ajuntamentMODAJUN";
			this->panel_telefon_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_telefon_ajuntamentMODAJUN->TabIndex = 7;
			// 
			// lbl_telefon_ajuntamentMODAJUN
			// 
			this->lbl_telefon_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_telefon_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_telefon_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_telefon_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_telefon_ajuntamentMODAJUN->Location = System::Drawing::Point(66, 3);
			this->lbl_telefon_ajuntamentMODAJUN->Name = L"lbl_telefon_ajuntamentMODAJUN";
			this->lbl_telefon_ajuntamentMODAJUN->Size = System::Drawing::Size(51, 17);
			this->lbl_telefon_ajuntamentMODAJUN->TabIndex = 2;
			this->lbl_telefon_ajuntamentMODAJUN->Text = L"Telefon";
			// 
			// panel_correu_electronic_ajuntamentMODAJUN
			// 
			this->panel_correu_electronic_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_correu_electronic_ajuntamentMODAJUN->Controls->Add(this->lbl_correu_electronic_ajuntamentMODAJUN);
			this->panel_correu_electronic_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_correu_electronic_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 331);
			this->panel_correu_electronic_ajuntamentMODAJUN->Name = L"panel_correu_electronic_ajuntamentMODAJUN";
			this->panel_correu_electronic_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_correu_electronic_ajuntamentMODAJUN->TabIndex = 8;
			// 
			// lbl_correu_electronic_ajuntamentMODAJUN
			// 
			this->lbl_correu_electronic_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_correu_electronic_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_correu_electronic_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_correu_electronic_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_correu_electronic_ajuntamentMODAJUN->Location = System::Drawing::Point(66, 3);
			this->lbl_correu_electronic_ajuntamentMODAJUN->Name = L"lbl_correu_electronic_ajuntamentMODAJUN";
			this->lbl_correu_electronic_ajuntamentMODAJUN->Size = System::Drawing::Size(49, 17);
			this->lbl_correu_electronic_ajuntamentMODAJUN->TabIndex = 3;
			this->lbl_correu_electronic_ajuntamentMODAJUN->Text = L"Correu";
			// 
			// ModificaAjuntamentUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1054, 583);
			this->Controls->Add(this->PANELModificaAjuntament);
			this->Name = L"ModificaAjuntamentUI";
			this->Text = L"ModificaAjuntamentUI";
			this->PANELModificaAjuntament->ResumeLayout(false);
			this->PANELModificaAjuntament->PerformLayout();
			this->panel_nom_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_nom_ajuntamentMODAJUN->PerformLayout();
			this->panel_poblacio_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_poblacio_ajuntamentMODAJUN->PerformLayout();
			this->panel_telefon_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_telefon_ajuntamentMODAJUN->PerformLayout();
			this->panel_correu_electronic_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_correu_electronic_ajuntamentMODAJUN->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_nom_ajuntamentMODAJUN_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lbl_poblacio_ajuntamentMODAJUN_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
