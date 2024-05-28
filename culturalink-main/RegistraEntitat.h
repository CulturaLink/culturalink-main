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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~RegistraEntitat()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox1->Location = System::Drawing::Point(201, 135);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(545, 31);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RegistraEntitat::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox2->Location = System::Drawing::Point(201, 184);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(545, 31);
			this->textBox2->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox4->Location = System::Drawing::Point(201, 306);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(545, 31);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox3->Location = System::Drawing::Point(201, 255);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(545, 31);
			this->textBox3->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->button1->Location = System::Drawing::Point(380, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 50);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistraEntitat::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->button2->Location = System::Drawing::Point(586, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 49);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistraEntitat::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Tel�fon";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 25);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Correu Electr�nic";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 25);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Contrasenya";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 25);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Nom Entitat";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(766, 60);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Registre Entitat";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &RegistraEntitat::label1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label6->Location = System::Drawing::Point(14, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(267, 24);
			this->label6->TabIndex = 20;
			this->label6->Text = L"min 8 char amb 1 maj. i 1 num,";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label7->Location = System::Drawing::Point(15, 331);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 24);
			this->label7->TabIndex = 21;
			this->label7->Text = L"9 numeros";
			// 
			// RegistraEntitat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 418);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"RegistraEntitat";
			this->Text = L"RegistraEntitat";
			this->Load += gcnew System::EventHandler(this, &RegistraEntitat::RegistraEntitat_Load);
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
		MessageBox::Show("Revisa el camp 'nom' no t� el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}

	//CONTRASENYA EXCEPCIONS
	if (contrasenya->Length < 8)
	{
		MessageBox::Show("Revisa el camp 'contrasenya' ha de tenir com a m�nim 8 caracters",
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
		MessageBox::Show("Revisa el camp 'contrasenya' no t� el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}

	encontrado = false;
	for (int i = 0; i < contrasenya->Length && encontrado == false; i++)
	{
		if (47 < contrasenya[i] && contrasenya[i] < 58) encontrado = true;
	}
	if (encontrado == false)
	{
		MessageBox::Show("Revisa el camp 'contrasenya' no t� el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
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
		MessageBox::Show("Revisa el camp 'telefon' no t� el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}
	TxRegistraEntitat tx1(nom, contrasenya, correu, Convert::ToInt32(telefon), 0);
	tx1.executar();
	this->Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistraEntitat_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}


};
}
