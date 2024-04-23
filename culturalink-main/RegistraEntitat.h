#pragma once
#include "TxRegistraEntitat.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistraEntitat
	/// </summary>
	public ref class RegistraEntitat : public System::Windows::Forms::Form
	{
	public:
		RegistraEntitat(void)
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
		~RegistraEntitat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(122, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrar Entitat";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"contrasenya";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"correu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(69, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"telefon";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(148, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(148, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(148, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(148, 220);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(284, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistraEntitat::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(379, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistraEntitat::button2_Click);
			// 
			// RegistraEntitat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 335);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegistraEntitat";
			this->Text = L"RegistraEntitat";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom = this->textBox1->Text;
	String^ contrasenya = this->textBox2->Text;
	String^ correu = this->textBox3->Text;
	String^ telefon = this->textBox4->Text;

	if (nom->Length == 0 || contrasenya->Length == 0 || correu->Length == 0 || telefon->Length == 0)
	{
		MessageBox::Show("Omple tots els camps",
			"Un o mes camps buits", MessageBoxButtons::OK);
		return;
	}
	
    //NOM EXCEPCIONS
	bool encontrado = false;
	for (int i = 0; i < nom->Length && encontrado == false; i++)
	{
		if (47 < nom[i] && nom[i] < 58) encontrado = true;
	}
	if (encontrado == true)
	{
		MessageBox::Show("Revisa el camp 'nom' no té el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}

	//CONTRASENYA EXCEPCIONS
	if (contrasenya->Length < 8)
	{
		MessageBox::Show("Revisa el camp 'contrasenya' ha de tenir com a mínim 8 caracters",
			"Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}

	encontrado = false;
	for (int i = 0; i < contrasenya->Length && encontrado == false; i++)
	{
		if (64 < contrasenya[i] && contrasenya[i] < 91) encontrado = true;
	}
	if (encontrado == false)
	{
		MessageBox::Show("Revisa el camp 'contrasenya' no té el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}

	encontrado = false;
	for (int i = 0; i < contrasenya->Length && encontrado == false; i++)
	{
		if (47 < contrasenya[i] && contrasenya[i] < 58) encontrado = true;
	}
	if (encontrado == false)
	{
		MessageBox::Show("Revisa el camp 'contrasenya' no té el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}


	//TELEFON EXCEPCIONS
	encontrado = false;
	for (int i = 0; i < telefon->Length && encontrado == false; i++)
	{
		if (!(47 < telefon[i] && telefon[i] < 58)) encontrado = true;
	}
	if (encontrado == true)
	{
		MessageBox::Show("Revisa el camp 'telefon' no té el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}
	TxRegistraEntitat tx1(nom, contrasenya, correu, Convert::ToInt32(telefon), 0);
	tx1.executar();
	this->Close();
}
};
}
