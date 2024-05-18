#pragma once
#include "CtrlModificarEntitat.h"
#include <iostream>
#include <string>

using namespace System;

namespace culturalink_main {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModificarEntitat
	/// </summary>
	public ref class ModificarEntitat : public System::Windows::Forms::Form
	{
	public:
		ModificarEntitat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			result = ctrlModEnt.consultaEntitat();
			textBox1->Text = result[1]; // nom
			textBox2->Text = result[0]; // id
			textBox3->Text = result[4]; // telefon
			textBox4->Text = result[2]; // correu
			textBox5->Text = result[3]; // contrasenya
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModificarEntitat()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		CtrlModificaEntitat ctrlModEnt;
		List<String^>^ result;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
		   /// <summary>
		/// Required designer variable.
		/// </summary>
		   System::ComponentModel::Container^ components;

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
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(128, 87);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(36, 16);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Nom";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(128, 125);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(18, 16);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Id";
			   this->label2->Click += gcnew System::EventHandler(this, &ModificarEntitat::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(128, 167);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(53, 16);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Telefon";
			   this->label3->Click += gcnew System::EventHandler(this, &ModificarEntitat::label3_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(128, 208);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(109, 16);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Correu Electronic";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(243, 87);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(100, 22);
			   this->textBox1->TabIndex = 4;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &ModificarEntitat::textBox1_TextChanged);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(243, 125);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->ReadOnly = true;
			   this->textBox2->Size = System::Drawing::Size(100, 22);
			   this->textBox2->TabIndex = 5;
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(243, 167);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(100, 22);
			   this->textBox3->TabIndex = 6;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(243, 208);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(100, 22);
			   this->textBox4->TabIndex = 7;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(131, 386);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(75, 23);
			   this->button1->TabIndex = 8;
			   this->button1->Text = L"Modificar";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &ModificarEntitat::button1_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(128, 251);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(83, 16);
			   this->label5->TabIndex = 9;
			   this->label5->Text = L"Contrasenya";
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(243, 251);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(100, 22);
			   this->textBox5->TabIndex = 10;
			   // 
			   // ModificarEntitat
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(851, 514);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"ModificarEntitat";
			   this->Text = L"ModificarEntitat";
			   this->Load += gcnew System::EventHandler(this, &ModificarEntitat::ModificarEntitat_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void ModificarEntitat_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int number;
		bool isNumeric = Int32::TryParse(textBox3->Text, number);

		if (isNumeric && (Convert::ToInt32(textBox3->Text) > 0))
		{
			//Console::WriteLine("The input is an integer: " + number);
			try {
				ctrlModEnt.modificaEntitat(Convert::ToInt32(result[0]), textBox1->Text, textBox5->Text, textBox3->Text, textBox4->Text);
				this->Close();
			}
			catch (CorreuExisteix^ e1) {
				MessageBox::Show(e1->Message);
			}
		}
		else
		{
			MessageBox::Show("Telefon ha de ser nombre");
		}

		/*
		catch (const std::exception& e)
		{
			// Convertir la excepci?n de C++ a System::String^
			String^ mensajeError = gcnew String(e.what());
			MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		*/
	}
	};
}