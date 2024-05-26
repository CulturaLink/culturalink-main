#pragma once

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModificaEntitatUI
	/// </summary>
	public ref class ModificaEntitatUI : public System::Windows::Forms::Form
	{
	public:
		ModificaEntitatUI(void)
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
		~ModificaEntitatUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PANELModificaEntitat;
	private: System::Windows::Forms::Button^ btn_atrasMODENT;
	private: System::Windows::Forms::Button^ btn_modificaMODENT;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txt_contrasenya_MODENT;

	private: System::Windows::Forms::TextBox^ txt_correu_MODENT;

	private: System::Windows::Forms::TextBox^ txt_telefon_MODENT;


	private: System::Windows::Forms::TextBox^ txt_nom_MODENT;
	private: System::Windows::Forms::Label^ lbl_contrasenya_MODENT;



	private: System::Windows::Forms::Panel^ BlackPartMODENT;
	private: System::Windows::Forms::Panel^ panel_nom_MODENT;


	private: System::Windows::Forms::Label^ lbl_nom_MODENT;
	private: System::Windows::Forms::Panel^ panel_contrasenya_MODENT;





	private: System::Windows::Forms::Panel^ panel_telefon_MODENT;

	private: System::Windows::Forms::Label^ lbl_telefon_MODENT;
	private: System::Windows::Forms::Panel^ panel_correu_MODENT;


	private: System::Windows::Forms::Label^ lbl_correu_MODENT;



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
			this->PANELModificaEntitat = (gcnew System::Windows::Forms::Panel());
			this->btn_atrasMODENT = (gcnew System::Windows::Forms::Button());
			this->btn_modificaMODENT = (gcnew System::Windows::Forms::Button());
			this->txt_contrasenya_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->txt_correu_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->txt_telefon_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->lbl_contrasenya_MODENT = (gcnew System::Windows::Forms::Label());
			this->BlackPartMODENT = (gcnew System::Windows::Forms::Panel());
			this->panel_nom_MODENT = (gcnew System::Windows::Forms::Panel());
			this->lbl_nom_MODENT = (gcnew System::Windows::Forms::Label());
			this->panel_contrasenya_MODENT = (gcnew System::Windows::Forms::Panel());
			this->panel_telefon_MODENT = (gcnew System::Windows::Forms::Panel());
			this->lbl_telefon_MODENT = (gcnew System::Windows::Forms::Label());
			this->panel_correu_MODENT = (gcnew System::Windows::Forms::Panel());
			this->lbl_correu_MODENT = (gcnew System::Windows::Forms::Label());
			this->PANELModificaEntitat->SuspendLayout();
			this->panel_nom_MODENT->SuspendLayout();
			this->panel_telefon_MODENT->SuspendLayout();
			this->panel_correu_MODENT->SuspendLayout();
			this->SuspendLayout();
			// 
			// PANELModificaEntitat
			// 
			this->PANELModificaEntitat->Controls->Add(this->btn_atrasMODENT);
			this->PANELModificaEntitat->Controls->Add(this->btn_modificaMODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_contrasenya_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_correu_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_telefon_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_nom_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->lbl_contrasenya_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->BlackPartMODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_nom_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_contrasenya_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_telefon_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_correu_MODENT);
			this->PANELModificaEntitat->Location = System::Drawing::Point(12, 12);
			this->PANELModificaEntitat->Name = L"PANELModificaEntitat";
			this->PANELModificaEntitat->Size = System::Drawing::Size(1030, 568);
			this->PANELModificaEntitat->TabIndex = 1;
			// 
			// btn_atrasMODENT
			// 
			this->btn_atrasMODENT->BackColor = System::Drawing::SystemColors::Control;
			this->btn_atrasMODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btn_atrasMODENT->Location = System::Drawing::Point(765, 470);
			this->btn_atrasMODENT->Name = L"btn_atrasMODENT";
			this->btn_atrasMODENT->Size = System::Drawing::Size(75, 23);
			this->btn_atrasMODENT->TabIndex = 14;
			this->btn_atrasMODENT->Text = L"Atras";
			this->btn_atrasMODENT->UseVisualStyleBackColor = false;
			// 
			// btn_modificaMODENT
			// 
			this->btn_modificaMODENT->BackColor = System::Drawing::SystemColors::Control;
			this->btn_modificaMODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btn_modificaMODENT->Location = System::Drawing::Point(859, 470);
			this->btn_modificaMODENT->Name = L"btn_modificaMODENT";
			this->btn_modificaMODENT->Size = System::Drawing::Size(75, 23);
			this->btn_modificaMODENT->TabIndex = 13;
			this->btn_modificaMODENT->Text = L"Modifica";
			this->btn_modificaMODENT->UseVisualStyleBackColor = false;
			// 
			// txt_contrasenya_MODENT
			// 
			this->txt_contrasenya_MODENT->Location = System::Drawing::Point(421, 356);
			this->txt_contrasenya_MODENT->Name = L"txt_contrasenya_MODENT";
			this->txt_contrasenya_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_contrasenya_MODENT->TabIndex = 12;
			// 
			// txt_correu_MODENT
			// 
			this->txt_correu_MODENT->Location = System::Drawing::Point(421, 298);
			this->txt_correu_MODENT->Name = L"txt_correu_MODENT";
			this->txt_correu_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_correu_MODENT->TabIndex = 11;
			// 
			// txt_telefon_MODENT
			// 
			this->txt_telefon_MODENT->Location = System::Drawing::Point(421, 241);
			this->txt_telefon_MODENT->Name = L"txt_telefon_MODENT";
			this->txt_telefon_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_telefon_MODENT->TabIndex = 10;
			// 
			// txt_nom_MODENT
			// 
			this->txt_nom_MODENT->Location = System::Drawing::Point(421, 181);
			this->txt_nom_MODENT->Name = L"txt_nom_MODENT";
			this->txt_nom_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_nom_MODENT->TabIndex = 5;
			// 
			// lbl_contrasenya_MODENT
			// 
			this->lbl_contrasenya_MODENT->AutoSize = true;
			this->lbl_contrasenya_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_contrasenya_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_contrasenya_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_contrasenya_MODENT->Location = System::Drawing::Point(271, 358);
			this->lbl_contrasenya_MODENT->Name = L"lbl_contrasenya_MODENT";
			this->lbl_contrasenya_MODENT->Size = System::Drawing::Size(84, 17);
			this->lbl_contrasenya_MODENT->TabIndex = 4;
			this->lbl_contrasenya_MODENT->Text = L"Contrasenya";
			// 
			// BlackPartMODENT
			// 
			this->BlackPartMODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BlackPartMODENT->Location = System::Drawing::Point(3, 3);
			this->BlackPartMODENT->Name = L"BlackPartMODENT";
			this->BlackPartMODENT->Size = System::Drawing::Size(1024, 83);
			this->BlackPartMODENT->TabIndex = 0;
			// 
			// panel_nom_MODENT
			// 
			this->panel_nom_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_nom_MODENT->Controls->Add(this->lbl_nom_MODENT);
			this->panel_nom_MODENT->Location = System::Drawing::Point(221, 181);
			this->panel_nom_MODENT->Name = L"panel_nom_MODENT";
			this->panel_nom_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_nom_MODENT->TabIndex = 6;
			// 
			// lbl_nom_MODENT
			// 
			this->lbl_nom_MODENT->AutoSize = true;
			this->lbl_nom_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_nom_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_nom_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nom_MODENT->Location = System::Drawing::Point(78, 2);
			this->lbl_nom_MODENT->Name = L"lbl_nom_MODENT";
			this->lbl_nom_MODENT->Size = System::Drawing::Size(38, 17);
			this->lbl_nom_MODENT->TabIndex = 0;
			this->lbl_nom_MODENT->Text = L"Nom";
			// 
			// panel_contrasenya_MODENT
			// 
			this->panel_contrasenya_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_contrasenya_MODENT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_contrasenya_MODENT->Location = System::Drawing::Point(221, 356);
			this->panel_contrasenya_MODENT->Name = L"panel_contrasenya_MODENT";
			this->panel_contrasenya_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_contrasenya_MODENT->TabIndex = 8;
			// 
			// panel_telefon_MODENT
			// 
			this->panel_telefon_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_telefon_MODENT->Controls->Add(this->lbl_telefon_MODENT);
			this->panel_telefon_MODENT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_telefon_MODENT->Location = System::Drawing::Point(221, 241);
			this->panel_telefon_MODENT->Name = L"panel_telefon_MODENT";
			this->panel_telefon_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_telefon_MODENT->TabIndex = 7;
			// 
			// lbl_telefon_MODENT
			// 
			this->lbl_telefon_MODENT->AutoSize = true;
			this->lbl_telefon_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_telefon_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_telefon_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_telefon_MODENT->Location = System::Drawing::Point(66, 3);
			this->lbl_telefon_MODENT->Name = L"lbl_telefon_MODENT";
			this->lbl_telefon_MODENT->Size = System::Drawing::Size(51, 17);
			this->lbl_telefon_MODENT->TabIndex = 2;
			this->lbl_telefon_MODENT->Text = L"Telefon";
			// 
			// panel_correu_MODENT
			// 
			this->panel_correu_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_correu_MODENT->Controls->Add(this->lbl_correu_MODENT);
			this->panel_correu_MODENT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_correu_MODENT->Location = System::Drawing::Point(221, 298);
			this->panel_correu_MODENT->Name = L"panel_correu_MODENT";
			this->panel_correu_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_correu_MODENT->TabIndex = 8;
			// 
			// lbl_correu_MODENT
			// 
			this->lbl_correu_MODENT->AutoSize = true;
			this->lbl_correu_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_correu_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_correu_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_correu_MODENT->Location = System::Drawing::Point(66, 3);
			this->lbl_correu_MODENT->Name = L"lbl_correu_MODENT";
			this->lbl_correu_MODENT->Size = System::Drawing::Size(49, 17);
			this->lbl_correu_MODENT->TabIndex = 3;
			this->lbl_correu_MODENT->Text = L"Correu";
			// 
			// ModificaEntitatUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1053, 587);
			this->Controls->Add(this->PANELModificaEntitat);
			this->Name = L"ModificaEntitatUI";
			this->Text = L"ModificaEntitatUI";
			this->PANELModificaEntitat->ResumeLayout(false);
			this->PANELModificaEntitat->PerformLayout();
			this->panel_nom_MODENT->ResumeLayout(false);
			this->panel_nom_MODENT->PerformLayout();
			this->panel_telefon_MODENT->ResumeLayout(false);
			this->panel_telefon_MODENT->PerformLayout();
			this->panel_correu_MODENT->ResumeLayout(false);
			this->panel_correu_MODENT->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
