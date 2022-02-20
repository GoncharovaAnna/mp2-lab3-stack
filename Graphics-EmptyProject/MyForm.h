#pragma once
#include <String>
#include "../Stack/TCalculator.h"
#include <msclr/marshal_cppstd.h>
namespace CppWinForm1 {

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

	protected:











	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;



	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;


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
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(95, 226);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 39);
			this->button13->TabIndex = 12;
			this->button13->Text = L"^";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(148, 271);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(166, 64);
			this->button14->TabIndex = 13;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(233, 226);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(120, 39);
			this->button18->TabIndex = 17;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Black;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(15, 147);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(138, 73);
			this->button19->TabIndex = 18;
			this->button19->Text = L"sin";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Black;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(159, 147);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(138, 73);
			this->button20->TabIndex = 19;
			this->button20->Text = L"cos";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Black;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Location = System::Drawing::Point(303, 147);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(138, 73);
			this->button21->TabIndex = 20;
			this->button21->Text = L"tan";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(15, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(424, 129);
			this->panel1->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(168, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Result";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MidnightBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(0, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(424, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(457, 353);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "3";
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	string infix;
	
	infix = msclr::interop::marshal_as<string>(textBox1->Text);
	TCalculator calc;
	calc.SetExpr(infix);
	double res;
	try {
		res = calc.Calc();
		label1->Text = Convert::ToString(res);
	}
	catch (int a) {
		label1->Text = "uncorrect";
	}
	catch (char b) {
		label1->Text = "uncorrect";
	}
	;
	textBox1->Text = "";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "+";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "-";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "*";
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "/";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "(";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ")";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "^";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "^(1/2)";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "sin(";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "cos(";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "tan(";
}
};
}
