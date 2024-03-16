#pragma once

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegistrarAjuntament
	/// </summary>
	public ref class RegistrarAjuntament : public System::Windows::Forms::Form
	{
	public:
		RegistrarAjuntament(void)
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
		~RegistrarAjuntament()
		{
			if (components)
			{
				delete components;
			}
		}












	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ OK;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ CorreuA;
	private: System::Windows::Forms::TextBox^ TelefonA;
	private: System::Windows::Forms::TextBox^ PoblacioA;
	private: System::Windows::Forms::TextBox^ Clau;
	private: System::Windows::Forms::TextBox^ NomA;






	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrarAjuntament::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CorreuA = (gcnew System::Windows::Forms::TextBox());
			this->TelefonA = (gcnew System::Windows::Forms::TextBox());
			this->PoblacioA = (gcnew System::Windows::Forms::TextBox());
			this->Clau = (gcnew System::Windows::Forms::TextBox());
			this->NomA = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->OK);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->CorreuA);
			this->groupBox1->Controls->Add(this->TelefonA);
			this->groupBox1->Controls->Add(this->PoblacioA);
			this->groupBox1->Controls->Add(this->Clau);
			this->groupBox1->Controls->Add(this->NomA);
			this->groupBox1->Location = System::Drawing::Point(107, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(421, 287);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Insereix dades Ajuntament";
			// 
			// OK
			// 
			this->OK->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OK.Image")));
			this->OK->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->OK->Location = System::Drawing::Point(340, 258);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(75, 23);
			this->OK->TabIndex = 1;
			this->OK->Text = L"Accepta";
			this->OK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->OK->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Correu de contacte";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Telefon de contacte";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Població";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Codi Postal(Clau)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nom";
			// 
			// CorreuA
			// 
			this->CorreuA->Location = System::Drawing::Point(6, 200);
			this->CorreuA->Name = L"CorreuA";
			this->CorreuA->Size = System::Drawing::Size(294, 20);
			this->CorreuA->TabIndex = 4;
			// 
			// TelefonA
			// 
			this->TelefonA->Location = System::Drawing::Point(6, 161);
			this->TelefonA->Name = L"TelefonA";
			this->TelefonA->Size = System::Drawing::Size(294, 20);
			this->TelefonA->TabIndex = 3;
			// 
			// PoblacioA
			// 
			this->PoblacioA->Location = System::Drawing::Point(6, 122);
			this->PoblacioA->Name = L"PoblacioA";
			this->PoblacioA->Size = System::Drawing::Size(294, 20);
			this->PoblacioA->TabIndex = 2;
			// 
			// Clau
			// 
			this->Clau->Location = System::Drawing::Point(6, 83);
			this->Clau->Name = L"Clau";
			this->Clau->Size = System::Drawing::Size(294, 20);
			this->Clau->TabIndex = 1;
			// 
			// NomA
			// 
			this->NomA->Location = System::Drawing::Point(6, 44);
			this->NomA->Name = L"NomA";
			this->NomA->Size = System::Drawing::Size(294, 20);
			this->NomA->TabIndex = 0;
			this->NomA->Tag = L"";
			// 
			// RegistrarAjuntament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 380);
			this->Controls->Add(this->groupBox1);
			this->Name = L"RegistrarAjuntament";
			this->Text = L"RegistrarAjuntament";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
