#pragma once

namespace winform {

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
	private: System::Windows::Forms::Button^  ExitCalculator;
	protected:

	private: System::Windows::Forms::Label^  CalcDisplay;
	private: System::Windows::Forms::Button^  number1;
	private: System::Windows::Forms::Button^  number2;
	private: System::Windows::Forms::Button^  number3;
	private: System::Windows::Forms::Button^  number4;
	private: System::Windows::Forms::Button^  number8;





	private: System::Windows::Forms::Button^  number7;

	private: System::Windows::Forms::Button^  number6;

	private: System::Windows::Forms::Button^  number5;
	private: System::Windows::Forms::Button^  DivideBy;


	private: System::Windows::Forms::Button^  clear;

	private: System::Windows::Forms::Button^  number0;

	private: System::Windows::Forms::Button^  number9;
	private: System::Windows::Forms::Button^  EqualsTo;


	private: System::Windows::Forms::Button^  Add;

	private: System::Windows::Forms::Button^  Multiply;
	private: System::Windows::Forms::Button^  Subtract;



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
			this->ExitCalculator = (gcnew System::Windows::Forms::Button());
			this->CalcDisplay = (gcnew System::Windows::Forms::Label());
			this->number1 = (gcnew System::Windows::Forms::Button());
			this->number2 = (gcnew System::Windows::Forms::Button());
			this->number3 = (gcnew System::Windows::Forms::Button());
			this->number4 = (gcnew System::Windows::Forms::Button());
			this->number8 = (gcnew System::Windows::Forms::Button());
			this->number7 = (gcnew System::Windows::Forms::Button());
			this->number6 = (gcnew System::Windows::Forms::Button());
			this->number5 = (gcnew System::Windows::Forms::Button());
			this->DivideBy = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->number0 = (gcnew System::Windows::Forms::Button());
			this->number9 = (gcnew System::Windows::Forms::Button());
			this->EqualsTo = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Multiply = (gcnew System::Windows::Forms::Button());
			this->Subtract = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ExitCalculator
			// 
			this->ExitCalculator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ExitCalculator->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ExitCalculator->Location = System::Drawing::Point(121, 391);
			this->ExitCalculator->Name = L"ExitCalculator";
			this->ExitCalculator->Size = System::Drawing::Size(108, 34);
			this->ExitCalculator->TabIndex = 0;
			this->ExitCalculator->Text = L"Exit";
			this->ExitCalculator->UseVisualStyleBackColor = true;
			this->ExitCalculator->Click += gcnew System::EventHandler(this, &MyForm::ExitCalculator_Click);
			// 
			// CalcDisplay
			// 
			this->CalcDisplay->BackColor = System::Drawing::Color::White;
			this->CalcDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CalcDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CalcDisplay->Location = System::Drawing::Point(13, 18);
			this->CalcDisplay->Name = L"CalcDisplay";
			this->CalcDisplay->Size = System::Drawing::Size(306, 51);
			this->CalcDisplay->TabIndex = 1;
			this->CalcDisplay->Text = L"0";
			this->CalcDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// number1
			// 
			this->number1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number1->Location = System::Drawing::Point(21, 82);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(70, 62);
			this->number1->TabIndex = 2;
			this->number1->Text = L"1";
			this->number1->UseVisualStyleBackColor = true;
			this->number1->Click += gcnew System::EventHandler(this, &MyForm::number1_Click);
			// 
			// number2
			// 
			this->number2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number2->Location = System::Drawing::Point(97, 82);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(70, 62);
			this->number2->TabIndex = 3;
			this->number2->Text = L"2";
			this->number2->UseVisualStyleBackColor = true;
			this->number2->Click += gcnew System::EventHandler(this, &MyForm::number2_Click);
			// 
			// number3
			// 
			this->number3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number3->Location = System::Drawing::Point(173, 82);
			this->number3->Name = L"number3";
			this->number3->Size = System::Drawing::Size(70, 62);
			this->number3->TabIndex = 4;
			this->number3->Text = L"3";
			this->number3->UseVisualStyleBackColor = true;
			this->number3->Click += gcnew System::EventHandler(this, &MyForm::number3_Click_1);
			// 
			// number4
			// 
			this->number4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number4->Location = System::Drawing::Point(249, 82);
			this->number4->Name = L"number4";
			this->number4->Size = System::Drawing::Size(70, 62);
			this->number4->TabIndex = 5;
			this->number4->Text = L"4";
			this->number4->UseVisualStyleBackColor = true;
			this->number4->Click += gcnew System::EventHandler(this, &MyForm::number4_Click_1);
			// 
			// number8
			// 
			this->number8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number8->Location = System::Drawing::Point(249, 163);
			this->number8->Name = L"number8";
			this->number8->Size = System::Drawing::Size(70, 62);
			this->number8->TabIndex = 9;
			this->number8->Text = L"8";
			this->number8->UseVisualStyleBackColor = true;
			this->number8->Click += gcnew System::EventHandler(this, &MyForm::number8_Click);
			// 
			// number7
			// 
			this->number7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number7->Location = System::Drawing::Point(173, 163);
			this->number7->Name = L"number7";
			this->number7->Size = System::Drawing::Size(70, 62);
			this->number7->TabIndex = 8;
			this->number7->Text = L"7";
			this->number7->UseVisualStyleBackColor = true;
			this->number7->Click += gcnew System::EventHandler(this, &MyForm::number7_Click);
			// 
			// number6
			// 
			this->number6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number6->Location = System::Drawing::Point(97, 163);
			this->number6->Name = L"number6";
			this->number6->Size = System::Drawing::Size(70, 62);
			this->number6->TabIndex = 7;
			this->number6->Text = L"6";
			this->number6->UseVisualStyleBackColor = true;
			this->number6->Click += gcnew System::EventHandler(this, &MyForm::number6_Click_1);
			// 
			// number5
			// 
			this->number5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number5->Location = System::Drawing::Point(21, 163);
			this->number5->Name = L"number5";
			this->number5->Size = System::Drawing::Size(70, 62);
			this->number5->TabIndex = 6;
			this->number5->Text = L"5";
			this->number5->UseVisualStyleBackColor = true;
			this->number5->Click += gcnew System::EventHandler(this, &MyForm::number5_Click_1);
			// 
			// DivideBy
			// 
			this->DivideBy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivideBy->Location = System::Drawing::Point(249, 242);
			this->DivideBy->Name = L"DivideBy";
			this->DivideBy->Size = System::Drawing::Size(70, 62);
			this->DivideBy->TabIndex = 13;
			this->DivideBy->Text = L"/";
			this->DivideBy->UseVisualStyleBackColor = true;
			this->DivideBy->Click += gcnew System::EventHandler(this, &MyForm::DivideBy_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(173, 242);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(70, 62);
			this->clear->TabIndex = 12;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click_1);
			// 
			// number0
			// 
			this->number0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number0->Location = System::Drawing::Point(97, 242);
			this->number0->Name = L"number0";
			this->number0->Size = System::Drawing::Size(70, 62);
			this->number0->TabIndex = 11;
			this->number0->Text = L"0";
			this->number0->UseVisualStyleBackColor = true;
			this->number0->Click += gcnew System::EventHandler(this, &MyForm::number0_Click_1);
			// 
			// number9
			// 
			this->number9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number9->Location = System::Drawing::Point(21, 242);
			this->number9->Name = L"number9";
			this->number9->Size = System::Drawing::Size(70, 62);
			this->number9->TabIndex = 10;
			this->number9->Text = L"9";
			this->number9->UseVisualStyleBackColor = true;
			this->number9->Click += gcnew System::EventHandler(this, &MyForm::number9_Click_1);
			// 
			// EqualsTo
			// 
			this->EqualsTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualsTo->Location = System::Drawing::Point(249, 323);
			this->EqualsTo->Name = L"EqualsTo";
			this->EqualsTo->Size = System::Drawing::Size(70, 62);
			this->EqualsTo->TabIndex = 17;
			this->EqualsTo->Text = L"=";
			this->EqualsTo->UseVisualStyleBackColor = true;
			this->EqualsTo->Click += gcnew System::EventHandler(this, &MyForm::EqualsTo_Click);
			// 
			// Add
			// 
			this->Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->Location = System::Drawing::Point(173, 323);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(70, 62);
			this->Add->TabIndex = 16;
			this->Add->Text = L"+";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// Multiply
			// 
			this->Multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multiply->Location = System::Drawing::Point(97, 323);
			this->Multiply->Name = L"Multiply";
			this->Multiply->Size = System::Drawing::Size(70, 62);
			this->Multiply->TabIndex = 15;
			this->Multiply->Text = L"*";
			this->Multiply->UseVisualStyleBackColor = true;
			this->Multiply->Click += gcnew System::EventHandler(this, &MyForm::Multiply_Click_1);
			// 
			// Subtract
			// 
			this->Subtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Subtract->Location = System::Drawing::Point(21, 323);
			this->Subtract->Name = L"Subtract";
			this->Subtract->Size = System::Drawing::Size(70, 62);
			this->Subtract->TabIndex = 14;
			this->Subtract->Text = L"-";
			this->Subtract->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 431);
			this->Controls->Add(this->EqualsTo);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->Multiply);
			this->Controls->Add(this->Subtract);
			this->Controls->Add(this->DivideBy);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->number0);
			this->Controls->Add(this->number9);
			this->Controls->Add(this->number8);
			this->Controls->Add(this->number7);
			this->Controls->Add(this->number6);
			this->Controls->Add(this->number5);
			this->Controls->Add(this->number4);
			this->Controls->Add(this->number3);
			this->Controls->Add(this->number2);
			this->Controls->Add(this->number1);
			this->Controls->Add(this->CalcDisplay);
			this->Controls->Add(this->ExitCalculator);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
		int firstnum;
		int secondnum;
		int Result;
		char operation;
#pragma endregion
	private: System::Void ExitCalculator_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void number1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (CalcDisplay->Text == "0")
		{
			CalcDisplay->Text = "1";
		}
		else
		{
			CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "1";
		}
	}
private: System::Void number2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "2";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "2";
	}
}
private: System::Void number3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "3";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "3";
	}
}
private: System::Void number4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "4";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "4";
	}
}
private: System::Void number5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "5";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "5";
	}
}
private: System::Void number6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "6";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "6";
	}
}
private: System::Void number7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "7";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "7";
	}
}
private: System::Void number8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "8";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "8";
	}
}
private: System::Void number9_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "9";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "9";
	}
}
private: System::Void number0_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (CalcDisplay->Text == "0")
	{
		CalcDisplay->Text = "0";
	}
	else
	{
		CalcDisplay->Text = Convert::ToInt32(CalcDisplay->Text) + "0";
	}
}
private: System::Void clear_Click_1(System::Object^  sender, System::EventArgs^  e) {
		CalcDisplay->Text = "";
		CalcDisplay->Text = "0";	
}
private: System::Void DivideBy_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(CalcDisplay->Text);
	CalcDisplay->Text = "0";
	operation = '/';
}
private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(CalcDisplay->Text);
	CalcDisplay->Text = "0";
	operation = '+';
}
private: System::Void Subtract_Click_1(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(CalcDisplay->Text);
	CalcDisplay->Text = "0";
	operation = '-';
}
private: System::Void Multiply_Click_1(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(CalcDisplay->Text);
	CalcDisplay->Text = "0";
	operation = '*';
}
private: System::Void EqualsTo_Click(System::Object^  sender, System::EventArgs^  e) {
	secondnum = Convert::ToInt32(CalcDisplay->Text);

	switch (operation)
	{
	case '+':
		Result = firstnum + secondnum;
		CalcDisplay->Text = System::Convert::ToString(Result);
		break;
	case '-':
		Result = firstnum - secondnum;
		CalcDisplay->Text = System::Convert::ToString(Result);
		break;
	case '/':
		Result = firstnum / secondnum;
		CalcDisplay->Text = System::Convert::ToString(Result);
		break;
	case '*':
		Result = firstnum * secondnum;
		CalcDisplay->Text = System::Convert::ToString(Result);
		break;
	}
}
};
}
