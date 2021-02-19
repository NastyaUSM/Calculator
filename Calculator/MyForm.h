#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ display;
	private: System::Windows::Forms::Button^ ClearLastButton;

	private: System::Windows::Forms::Button^ ClearAllButton;
	private: System::Windows::Forms::Button^ ClearEntryButton;
	private: System::Windows::Forms::Button^ NegateButton;
	private: System::Windows::Forms::Button^ DivisionButton;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ MultiplyButton;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ PlusButton;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ MinusButton;
	private: System::Windows::Forms::Button^ EqualsButton;
	private: System::Windows::Forms::Button^ PointButton;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ EmptyButton;
	private: System::Windows::Forms::Button^ SqrtButton;
	private: System::Windows::Forms::Button^ SquareButton;
	private: System::Windows::Forms::Button^ SquareMinus1Button;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->ClearLastButton = (gcnew System::Windows::Forms::Button());
			this->ClearAllButton = (gcnew System::Windows::Forms::Button());
			this->ClearEntryButton = (gcnew System::Windows::Forms::Button());
			this->NegateButton = (gcnew System::Windows::Forms::Button());
			this->DivisionButton = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->MultiplyButton = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->PlusButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->MinusButton = (gcnew System::Windows::Forms::Button());
			this->EqualsButton = (gcnew System::Windows::Forms::Button());
			this->PointButton = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->EmptyButton = (gcnew System::Windows::Forms::Button());
			this->SqrtButton = (gcnew System::Windows::Forms::Button());
			this->SquareButton = (gcnew System::Windows::Forms::Button());
			this->SquareMinus1Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->display->Location = System::Drawing::Point(10, 9);
			this->display->Multiline = true;
			this->display->Name = L"display";
			this->display->ReadOnly = true;
			this->display->Size = System::Drawing::Size(378, 58);
			this->display->TabIndex = 0;
			this->display->Text = L"0";
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->display->TextChanged += gcnew System::EventHandler(this, &MyForm::display_TextChanged);
			// 
			// ClearLastButton
			// 
			this->ClearLastButton->Font = (gcnew System::Drawing::Font(L"Wingdings", 18.27692F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ClearLastButton->ForeColor = System::Drawing::Color::Black;
			this->ClearLastButton->Location = System::Drawing::Point(12, 73);
			this->ClearLastButton->Name = L"ClearLastButton";
			this->ClearLastButton->Size = System::Drawing::Size(90, 90);
			this->ClearLastButton->TabIndex = 1;
			this->ClearLastButton->Text = L"";
			this->ClearLastButton->UseVisualStyleBackColor = true;
			this->ClearLastButton->Click += gcnew System::EventHandler(this, &MyForm::ClearLastButton_Click);
			// 
			// ClearAllButton
			// 
			this->ClearAllButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearAllButton->Location = System::Drawing::Point(108, 73);
			this->ClearAllButton->Name = L"ClearAllButton";
			this->ClearAllButton->Size = System::Drawing::Size(90, 90);
			this->ClearAllButton->TabIndex = 1;
			this->ClearAllButton->Text = L"C";
			this->ClearAllButton->UseVisualStyleBackColor = true;
			this->ClearAllButton->Click += gcnew System::EventHandler(this, &MyForm::ClearAllButton_Click);
			// 
			// ClearEntryButton
			// 
			this->ClearEntryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ClearEntryButton->Location = System::Drawing::Point(204, 73);
			this->ClearEntryButton->Name = L"ClearEntryButton";
			this->ClearEntryButton->Size = System::Drawing::Size(90, 90);
			this->ClearEntryButton->TabIndex = 1;
			this->ClearEntryButton->Text = L"CE";
			this->ClearEntryButton->UseVisualStyleBackColor = true;
			this->ClearEntryButton->Click += gcnew System::EventHandler(this, &MyForm::ClearEntryButton_Click);
			// 
			// NegateButton
			// 
			this->NegateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NegateButton->Location = System::Drawing::Point(300, 73);
			this->NegateButton->Name = L"NegateButton";
			this->NegateButton->Size = System::Drawing::Size(90, 90);
			this->NegateButton->TabIndex = 1;
			this->NegateButton->Text = L"±";
			this->NegateButton->UseVisualStyleBackColor = true;
			this->NegateButton->Click += gcnew System::EventHandler(this, &MyForm::NegateButton_Click);
			// 
			// DivisionButton
			// 
			this->DivisionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DivisionButton->Location = System::Drawing::Point(300, 265);
			this->DivisionButton->Name = L"DivisionButton";
			this->DivisionButton->Size = System::Drawing::Size(90, 90);
			this->DivisionButton->TabIndex = 2;
			this->DivisionButton->Text = L"/";
			this->DivisionButton->UseVisualStyleBackColor = true;
			this->DivisionButton->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(204, 265);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 90);
			this->button9->TabIndex = 3;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(108, 265);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 90);
			this->button8->TabIndex = 4;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 265);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 90);
			this->button7->TabIndex = 5;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MultiplyButton
			// 
			this->MultiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MultiplyButton->Location = System::Drawing::Point(300, 361);
			this->MultiplyButton->Name = L"MultiplyButton";
			this->MultiplyButton->Size = System::Drawing::Size(90, 90);
			this->MultiplyButton->TabIndex = 6;
			this->MultiplyButton->Text = L"*";
			this->MultiplyButton->UseVisualStyleBackColor = true;
			this->MultiplyButton->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(204, 361);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 90);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(108, 361);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 90);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 361);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 90);
			this->button4->TabIndex = 9;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// PlusButton
			// 
			this->PlusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlusButton->Location = System::Drawing::Point(300, 457);
			this->PlusButton->Name = L"PlusButton";
			this->PlusButton->Size = System::Drawing::Size(90, 90);
			this->PlusButton->TabIndex = 10;
			this->PlusButton->Text = L"+";
			this->PlusButton->UseVisualStyleBackColor = true;
			this->PlusButton->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(204, 457);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 90);
			this->button3->TabIndex = 11;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(108, 457);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 90);
			this->button2->TabIndex = 12;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 457);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 90);
			this->button1->TabIndex = 13;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MinusButton
			// 
			this->MinusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinusButton->Location = System::Drawing::Point(300, 553);
			this->MinusButton->Name = L"MinusButton";
			this->MinusButton->Size = System::Drawing::Size(90, 90);
			this->MinusButton->TabIndex = 14;
			this->MinusButton->Text = L"-";
			this->MinusButton->UseVisualStyleBackColor = true;
			this->MinusButton->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// EqualsButton
			// 
			this->EqualsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EqualsButton->Location = System::Drawing::Point(204, 553);
			this->EqualsButton->Name = L"EqualsButton";
			this->EqualsButton->Size = System::Drawing::Size(90, 90);
			this->EqualsButton->TabIndex = 15;
			this->EqualsButton->Text = L"=";
			this->EqualsButton->UseVisualStyleBackColor = true;
			this->EqualsButton->Click += gcnew System::EventHandler(this, &MyForm::EqualsButton_Click);
			// 
			// PointButton
			// 
			this->PointButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PointButton->Location = System::Drawing::Point(108, 553);
			this->PointButton->Name = L"PointButton";
			this->PointButton->Size = System::Drawing::Size(90, 90);
			this->PointButton->TabIndex = 16;
			this->PointButton->Text = L".";
			this->PointButton->UseVisualStyleBackColor = true;
			this->PointButton->Click += gcnew System::EventHandler(this, &MyForm::PointButton_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(12, 553);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(90, 90);
			this->button0->TabIndex = 17;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// EmptyButton
			// 
			this->EmptyButton->Enabled = false;
			this->EmptyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EmptyButton->Location = System::Drawing::Point(300, 169);
			this->EmptyButton->Name = L"EmptyButton";
			this->EmptyButton->Size = System::Drawing::Size(90, 90);
			this->EmptyButton->TabIndex = 18;
			this->EmptyButton->UseVisualStyleBackColor = true;
			// 
			// SqrtButton
			// 
			this->SqrtButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SqrtButton->Location = System::Drawing::Point(204, 169);
			this->SqrtButton->Name = L"SqrtButton";
			this->SqrtButton->Size = System::Drawing::Size(90, 90);
			this->SqrtButton->TabIndex = 19;
			this->SqrtButton->Text = L"√x";
			this->SqrtButton->UseVisualStyleBackColor = true;
			this->SqrtButton->Click += gcnew System::EventHandler(this, &MyForm::SqrtButton_Click);
			// 
			// SquareButton
			// 
			this->SquareButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SquareButton->Location = System::Drawing::Point(108, 169);
			this->SquareButton->Name = L"SquareButton";
			this->SquareButton->Size = System::Drawing::Size(90, 90);
			this->SquareButton->TabIndex = 20;
			this->SquareButton->Text = L"x²";
			this->SquareButton->UseVisualStyleBackColor = true;
			this->SquareButton->Click += gcnew System::EventHandler(this, &MyForm::SquareButton_Click);
			// 
			// SquareMinus1Button
			// 
			this->SquareMinus1Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SquareMinus1Button->ForeColor = System::Drawing::Color::Black;
			this->SquareMinus1Button->Location = System::Drawing::Point(12, 169);
			this->SquareMinus1Button->Name = L"SquareMinus1Button";
			this->SquareMinus1Button->Size = System::Drawing::Size(90, 90);
			this->SquareMinus1Button->TabIndex = 21;
			this->SquareMinus1Button->Text = L"1/x";
			this->SquareMinus1Button->UseVisualStyleBackColor = true;
			this->SquareMinus1Button->Click += gcnew System::EventHandler(this, &MyForm::SquareMinus1Button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 659);
			this->Controls->Add(this->EmptyButton);
			this->Controls->Add(this->SqrtButton);
			this->Controls->Add(this->SquareButton);
			this->Controls->Add(this->SquareMinus1Button);
			this->Controls->Add(this->MinusButton);
			this->Controls->Add(this->EqualsButton);
			this->Controls->Add(this->PointButton);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->PlusButton);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->MultiplyButton);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->DivisionButton);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->NegateButton);
			this->Controls->Add(this->ClearEntryButton);
			this->Controls->Add(this->ClearAllButton);
			this->Controls->Add(this->ClearLastButton);
			this->Controls->Add(this->display);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

		Button^ Numbers = safe_cast<Button^>(sender);

		if (display->Text == "0")
		{
			display->Text = Numbers->Text;
		}
		else
		{
			display->Text = display->Text + Numbers->Text;
		}
	}
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumbersOp = safe_cast<Button^>(sender);

		firstDigit = Double::Parse(display->Text);
		display->Text = "";
		operators = NumbersOp->Text;
	}
	private: System::Void PointButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!display->Text->Contains("."))
		{
			display->Text = display->Text + ".";
		}
	}
	private: System::Void display_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ClearAllButton_Click(System::Object^ sender, System::EventArgs^ e) {
		firstDigit = 0;
		secondDigit = 0;
		result = 0;
		display->Text = "0";
	}
	private: System::Void EqualsButton_Click(System::Object^ sender, System::EventArgs^ e) {

		secondDigit = Double::Parse(display->Text);

		if (operators == "+")
		{
			result = firstDigit + secondDigit;
			display->Text = System::Convert::ToString(result);
		}
		else if (operators == "-")
		{
			result = firstDigit - secondDigit;
			display->Text = System::Convert::ToString(result);
		}
		else if (operators == "/")
		{
			if (secondDigit == 0) {
				display->Text = "Деление на ноль невозможно";
			}
			else {
				result = firstDigit / secondDigit;
				display->Text = System::Convert::ToString(result);
			}
		}
		else if (operators == "*")
		{
			result = firstDigit * secondDigit;
			display->Text = System::Convert::ToString(result);
		}
	}
	private: System::Void ClearEntryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		display->Text = "0";
	}
	private: System::Void NegateButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (display->Text->Contains("-"))
		{
			display->Text = display->Text->Remove(0, 1);
		}
		else
		{
			display->Text = "-" + display->Text;
		}
	}
	private: System::Void ClearLastButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (display->Text->Length > 0)
		{
			display->Text = display->Text->Remove(display->Text->Length - 1, 1);
		}

		if (display->Text == "")
		{
			display->Text = "0";
		}
	}
	private: System::Void SquareButton_Click(System::Object^ sender, System::EventArgs^ e) {

		firstDigit = Double::Parse(display->Text);
		result = firstDigit * firstDigit;
		display->Text = System::Convert::ToString(result);

	}
	private: System::Void SqrtButton_Click(System::Object^ sender, System::EventArgs^ e) {
		firstDigit = Double::Parse(display->Text);
		result = Math::Sqrt(firstDigit);
		display->Text = System::Convert::ToString(result);
	}
	private: System::Void SquareMinus1Button_Click(System::Object^ sender, System::EventArgs^ e) {
		firstDigit = Double::Parse(display->Text);
		if (firstDigit == 0) {
			display->Text = "Деление на ноль невозможно";
		}
		else {
			result = 1 / firstDigit;
			display->Text = System::Convert::ToString(result);
		}
	}
};
}

