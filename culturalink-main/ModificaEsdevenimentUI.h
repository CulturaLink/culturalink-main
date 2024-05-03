#pragma once

#include "CtrlModificaEsdeveniment.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificaEsdevenimentUI
	/// </summary>
	public ref class ModificaEsdevenimentUI : public System::Windows::Forms::Form
	{
	public:
		ModificaEsdevenimentUI(void)
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
		~ModificaEsdevenimentUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cerca Esdeveniment";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Preu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Descripció";
			this->label2->Click += gcnew System::EventHandler(this, &ModificaEsdevenimentUI::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Tipus";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Aforament";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Preu Punts Descompte";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 207);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Data";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Punts Descompte Otorgats";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ModificaEsdevenimentUI::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(75, 115);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(75, 141);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(158, 172);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(158, 204);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(158, 234);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(298, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Modifica";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificaEsdevenimentUI::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(202, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Error: Preu Negatiu";
			this->label3->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(202, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Error: Preu Negatiu";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(264, 175);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Error: Preu Negatiu";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(264, 237);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Error: Preu Negatiu";
			this->label11->Visible = false;
			// 
			// ModificaEsdevenimentUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 325);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"ModificaEsdevenimentUI";
			this->Text = L"ModificaEsdevenimentUI";
			this->Load += gcnew System::EventHandler(this, &ModificaEsdevenimentUI::ModificaEsdevenimentUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModificaEsdevenimentUI_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {



	String^ PreuIntro = this->textBox2->Text;
	float preu = Convert::ToSingle(PreuIntro);
	String^ DescIntro = this->textBox3->Text;
	String^ TipusIntro = this->textBox5->Text;
	String^ AforamentIntro = this->textBox6->Text;
	int aforament = Convert::ToInt32(AforamentIntro);
	String^ PuntsCostIntro = this->textBox7->Text;
	int puntosCost = Convert::ToInt32(PuntsCostIntro);
	String^ DataIntro = this->textBox8->Text;
	String^ PuntsDescIntro = this->textBox9->Text;
	int puntosDesc = Convert::ToInt32(PuntsDescIntro);

	if (preu < 0 || aforament <= 0 || puntosCost < 0 || puntosDesc) {

		if (preu < 0) {
			this->label3->Text = "Error: Preu Negatiu\n";
			this->label3->Visible = true;
		}
		if (aforament <= 0) {
			this->label9->Text = "Error: Aforament Negatiu o menor que 0\n";
			this->label9->Visible = true;
		}
		if (puntosCost < 0) {
			this->label10->Text = "Error: Punts Cost Negatiu\n";
			this->label10->Visible = true;
		}
		if (puntosDesc < 0) {
			this->label11->Text = "Error: Punts Descompte Negatiu\n";
			this->label11->Visible = true;
		}
	}
	else {
		CtrlModificaEsdeveniment^ ctrlModEsdev = gcnew CtrlModificaEsdeveniment();

		String^ ESDEV = this->textBox1->Text;

		ctrlModEsdev->modificaEsdeveniment(ESDEV, preu, DescIntro, TipusIntro, aforament, puntosCost, DataIntro, puntosDesc);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
