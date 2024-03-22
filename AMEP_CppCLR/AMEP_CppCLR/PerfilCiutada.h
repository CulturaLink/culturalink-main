#pragma once
#include "UsuariIniciat.h"
#include "PassarelaCiutada.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PerfilCiutada
	/// </summary>
	public ref class PerfilCiutada : public System::Windows::Forms::Form
	{
	public:
		PerfilCiutada(void)
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
		~PerfilCiutada()
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nickname:";
			this->label1->Click += gcnew System::EventHandler(this, &PerfilCiutada::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom complet:";
			this->label2->Click += gcnew System::EventHandler(this, &PerfilCiutada::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(107, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correu:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(111, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Diners:";
			this->label4->Click += gcnew System::EventHandler(this, &PerfilCiutada::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(177, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &PerfilCiutada::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(177, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(177, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(177, 97);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(117, 117);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Punts:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(177, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 20);
			this->label9->TabIndex = 9;
			this->label9->Text = L"label9";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 77);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 20);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Data de naixement:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(177, 77);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 20);
			this->label12->TabIndex = 11;
			this->label12->Text = L"label12";
			// 
			// PerfilCiutada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSalmon;
			this->ClientSize = System::Drawing::Size(508, 167);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PerfilCiutada";
			this->Text = L"PerfilCiutada";
			this->Load += gcnew System::EventHandler(this, &PerfilCiutada::PerfilCiutada_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void PerfilCiutada_Load(System::Object^ sender, System::EventArgs^ e) {
	UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
	Object^ usuariIniciat = usuari->getUsuari();
	TipoPassarela tipusUsuari = usuari->getTipoPassarela();
	// Verificar si el tipo de passarela es Ciutada
	if (tipusUsuari == TipoPassarela::Ciutada) {
		// Convertir el objeto de passarela al tipo PassarelaCiutada^
		PassarelaCiutada^ passarelaCiutada = safe_cast<PassarelaCiutada^>(usuariIniciat);

		// Utilizar los métodos y propiedades específicos de PassarelaCiutada
		label5->Text = passarelaCiutada->getNickname();
		label6->Text = passarelaCiutada->getNomComplet();
		label7->Text = passarelaCiutada->getCorreu();
		label12->Text = passarelaCiutada->getDataNaix();
		label8->Text = passarelaCiutada->getDiners()->ToString();
		label9->Text = passarelaCiutada->getPunts()->ToString();
	}

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
