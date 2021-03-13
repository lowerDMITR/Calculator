#include <math.h>
#pragma once

namespace Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:



	protected:




	private: System::Windows::Forms::Button^ button7;





	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;



	private: System::Windows::Forms::Button^ buttonMLT;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Button^ buttonMN;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::Button^ buttonPL;


	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonCM;



	private: System::Windows::Forms::Button^ buttonEQL;
	private: System::Windows::Forms::Label^ lbShowOp;







	private: System::Windows::Forms::Button^ buttonC;


	private: System::Windows::Forms::Button^ buttonPM;
	private: System::Windows::Forms::TextBox^ Display;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ buttonBCSP;

	private: System::Windows::Forms::Button^ buttonRMV;
	private: System::Windows::Forms::Button^ buttonCE;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ exitbutton;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ hideButton;





	private: System::ComponentModel::IContainer^ components;












	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonMLT = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buttonMN = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonPL = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonCM = (gcnew System::Windows::Forms::Button());
			this->buttonEQL = (gcnew System::Windows::Forms::Button());
			this->lbShowOp = (gcnew System::Windows::Forms::Label());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonPM = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->buttonBCSP = (gcnew System::Windows::Forms::Button());
			this->buttonRMV = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->exitbutton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->hideButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button7->FlatAppearance->BorderSize = 3;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(2, 272);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 70);
			this->button7->TabIndex = 1;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button8->FlatAppearance->BorderSize = 3;
			this->button8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(102, 272);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(105, 70);
			this->button8->TabIndex = 1;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button9->FlatAppearance->BorderSize = 3;
			this->button9->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(200, 272);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(105, 70);
			this->button9->TabIndex = 1;
			this->button9->Text = L"9";
			this->button9->UseMnemonic = false;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// buttonMLT
			// 
			this->buttonMLT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonMLT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMLT->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonMLT->FlatAppearance->BorderSize = 3;
			this->buttonMLT->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonMLT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMLT->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMLT->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonMLT->Location = System::Drawing::Point(301, 272);
			this->buttonMLT->Name = L"buttonMLT";
			this->buttonMLT->Size = System::Drawing::Size(105, 70);
			this->buttonMLT->TabIndex = 1;
			this->buttonMLT->Text = L"x";
			this->buttonMLT->UseVisualStyleBackColor = false;
			this->buttonMLT->Click += gcnew System::EventHandler(this, &Calculator::Arifmetic_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button4->FlatAppearance->BorderSize = 3;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(2, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 70);
			this->button4->TabIndex = 1;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button5->FlatAppearance->BorderSize = 3;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(102, 336);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 70);
			this->button5->TabIndex = 1;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button6->FlatAppearance->BorderSize = 3;
			this->button6->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(200, 336);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 70);
			this->button6->TabIndex = 1;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// buttonMN
			// 
			this->buttonMN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonMN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMN->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonMN->FlatAppearance->BorderSize = 3;
			this->buttonMN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonMN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMN->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMN->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonMN->Location = System::Drawing::Point(301, 335);
			this->buttonMN->Name = L"buttonMN";
			this->buttonMN->Size = System::Drawing::Size(105, 70);
			this->buttonMN->TabIndex = 1;
			this->buttonMN->Text = L"-";
			this->buttonMN->UseVisualStyleBackColor = false;
			this->buttonMN->Click += gcnew System::EventHandler(this, &Calculator::Arifmetic_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(2, 403);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 70);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(102, 403);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 71);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(200, 403);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 71);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseMnemonic = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// buttonPL
			// 
			this->buttonPL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonPL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPL->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonPL->FlatAppearance->BorderSize = 3;
			this->buttonPL->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonPL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPL->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPL->Location = System::Drawing::Point(301, 403);
			this->buttonPL->Name = L"buttonPL";
			this->buttonPL->Size = System::Drawing::Size(105, 70);
			this->buttonPL->TabIndex = 1;
			this->buttonPL->Text = L"+";
			this->buttonPL->UseVisualStyleBackColor = false;
			this->buttonPL->Click += gcnew System::EventHandler(this, &Calculator::Arifmetic_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button0->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button0->FlatAppearance->BorderSize = 3;
			this->button0->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button0->Location = System::Drawing::Point(102, 467);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(105, 70);
			this->button0->TabIndex = 1;
			this->button0->Text = L"0";
			this->button0->UseMnemonic = false;
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &Calculator::button_Click);
			// 
			// buttonCM
			// 
			this->buttonCM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->buttonCM->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCM->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonCM->FlatAppearance->BorderSize = 3;
			this->buttonCM->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->buttonCM->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonCM->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonCM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCM->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonCM->Location = System::Drawing::Point(200, 467);
			this->buttonCM->Name = L"buttonCM";
			this->buttonCM->Size = System::Drawing::Size(105, 70);
			this->buttonCM->TabIndex = 1;
			this->buttonCM->Text = L",";
			this->buttonCM->UseVisualStyleBackColor = false;
			this->buttonCM->Click += gcnew System::EventHandler(this, &Calculator::buttonComma_Click);
			// 
			// buttonEQL
			// 
			this->buttonEQL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->buttonEQL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEQL->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonEQL->FlatAppearance->BorderSize = 3;
			this->buttonEQL->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonEQL->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonEQL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEQL->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEQL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonEQL->Location = System::Drawing::Point(301, 467);
			this->buttonEQL->Name = L"buttonEQL";
			this->buttonEQL->Size = System::Drawing::Size(105, 70);
			this->buttonEQL->TabIndex = 1;
			this->buttonEQL->Text = L"=";
			this->buttonEQL->UseVisualStyleBackColor = false;
			this->buttonEQL->Click += gcnew System::EventHandler(this, &Calculator::buttonEQL_Click);
			// 
			// lbShowOp
			// 
			this->lbShowOp->AutoSize = true;
			this->lbShowOp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->lbShowOp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbShowOp->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 8.861538F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbShowOp->Location = System::Drawing::Point(12, 41);
			this->lbShowOp->Name = L"lbShowOp";
			this->lbShowOp->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbShowOp->Size = System::Drawing::Size(0, 21);
			this->lbShowOp->TabIndex = 2;
			this->lbShowOp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonC->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonC->FlatAppearance->BorderSize = 3;
			this->buttonC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonC->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonC->Location = System::Drawing::Point(200, 142);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(105, 70);
			this->buttonC->TabIndex = 1;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &Calculator::buttonC_Click);
			// 
			// buttonPM
			// 
			this->buttonPM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->buttonPM->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPM->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonPM->FlatAppearance->BorderSize = 3;
			this->buttonPM->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->buttonPM->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonPM->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonPM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPM->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPM->Location = System::Drawing::Point(2, 467);
			this->buttonPM->Name = L"buttonPM";
			this->buttonPM->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->buttonPM->Size = System::Drawing::Size(105, 70);
			this->buttonPM->TabIndex = 1;
			this->buttonPM->Text = L"⁺/₋";
			this->buttonPM->UseVisualStyleBackColor = false;
			this->buttonPM->Click += gcnew System::EventHandler(this, &Calculator::buttonPM_Click);
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->Display->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Display->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 29.90769F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->ForeColor = System::Drawing::Color::White;
			this->Display->HideSelection = false;
			this->Display->Location = System::Drawing::Point(2, 70);
			this->Display->Name = L"Display";
			this->Display->ReadOnly = true;
			this->Display->ShortcutsEnabled = false;
			this->Display->Size = System::Drawing::Size(394, 66);
			this->Display->TabIndex = 0;
			this->Display->TabStop = false;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Display->Click += gcnew System::EventHandler(this, &Calculator::Display_Text);
			this->Display->TextChanged += gcnew System::EventHandler(this, &Calculator::Display_Text);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button10->FlatAppearance->BorderSize = 3;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(2, 141);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(105, 70);
			this->button10->TabIndex = 1;
			this->button10->Text = L"%";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::Percent_Click);
			// 
			// button12
			// 
			this->button12->AccessibleDescription = L"";
			this->button12->AccessibleName = L"";
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button12->FlatAppearance->BorderSize = 3;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Location = System::Drawing::Point(2, 205);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(105, 70);
			this->button12->TabIndex = 1;
			this->button12->Text = L"¹/ₓ";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::OneOverXOperator_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button13->FlatAppearance->BorderSize = 3;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(200, 205);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(105, 70);
			this->button13->TabIndex = 1;
			this->button13->Text = L"√x";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Calculator::SqrtXOperator_Click);
			// 
			// buttonBCSP
			// 
			this->buttonBCSP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonBCSP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBCSP->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonBCSP->FlatAppearance->BorderSize = 3;
			this->buttonBCSP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonBCSP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBCSP->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonBCSP->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonBCSP->Location = System::Drawing::Point(301, 141);
			this->buttonBCSP->Name = L"buttonBCSP";
			this->buttonBCSP->Size = System::Drawing::Size(105, 70);
			this->buttonBCSP->TabIndex = 1;
			this->buttonBCSP->Text = L"←";
			this->buttonBCSP->UseVisualStyleBackColor = false;
			this->buttonBCSP->Click += gcnew System::EventHandler(this, &Calculator::buttonBCSP_Click);
			// 
			// buttonRMV
			// 
			this->buttonRMV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonRMV->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRMV->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonRMV->FlatAppearance->BorderSize = 3;
			this->buttonRMV->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonRMV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRMV->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRMV->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonRMV->Location = System::Drawing::Point(301, 205);
			this->buttonRMV->Name = L"buttonRMV";
			this->buttonRMV->Size = System::Drawing::Size(105, 70);
			this->buttonRMV->TabIndex = 1;
			this->buttonRMV->Text = L"/";
			this->buttonRMV->UseVisualStyleBackColor = false;
			this->buttonRMV->Click += gcnew System::EventHandler(this, &Calculator::Arifmetic_Click);
			// 
			// buttonCE
			// 
			this->buttonCE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonCE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCE->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->buttonCE->FlatAppearance->BorderSize = 3;
			this->buttonCE->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonCE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCE->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonCE->Location = System::Drawing::Point(102, 141);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(105, 70);
			this->buttonCE->TabIndex = 1;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = false;
			this->buttonCE->Click += gcnew System::EventHandler(this, &Calculator::buttonCE_Click);
			// 
			// button15
			// 
			this->button15->AccessibleName = L"sqr";
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button15->FlatAppearance->BorderSize = 3;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.95385F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(102, 205);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(105, 70);
			this->button15->TabIndex = 1;
			this->button15->Text = L"x²";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::SqrXOperator_Click);
			// 
			// exitbutton
			// 
			this->exitbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->exitbutton->FlatAppearance->BorderSize = 0;
			this->exitbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->exitbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exitbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitbutton->ForeColor = System::Drawing::Color::Transparent;
			this->exitbutton->Location = System::Drawing::Point(349, 0);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(64, 38);
			this->exitbutton->TabIndex = 3;
			this->exitbutton->Text = L"x";
			this->exitbutton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->exitbutton->UseVisualStyleBackColor = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &Calculator::exit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel1->Controls->Add(this->hideButton);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->exitbutton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(409, 38);
			this->panel1->TabIndex = 4;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::panel1_MouseUp);
			// 
			// hideButton
			// 
			this->hideButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->hideButton->FlatAppearance->BorderSize = 0;
			this->hideButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->hideButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->hideButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hideButton->ForeColor = System::Drawing::Color::Transparent;
			this->hideButton->Location = System::Drawing::Point(291, 0);
			this->hideButton->Name = L"hideButton";
			this->hideButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->hideButton->Size = System::Drawing::Size(62, 38);
			this->hideButton->TabIndex = 5;
			this->hideButton->Text = L"_";
			this->hideButton->UseVisualStyleBackColor = false;
			this->hideButton->Click += gcnew System::EventHandler(this, &Calculator::hideButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Калькулятор";
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(409, 539);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbShowOp);
			this->Controls->Add(this->buttonEQL);
			this->Controls->Add(this->buttonCM);
			this->Controls->Add(this->buttonPL);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonMN);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonMLT);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->buttonPM);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonRMV);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->buttonBCSP);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->Display);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Name = L"Calculator";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double num1 = 0;
		double tewmp;
		double num2 = 0;
		double result = 0;
		double Font = 29.90764F;
		String^ txtOp;
		String^ lbTxtOp;
		String^ newTxtOp;
		bool checkEql = false, checkOp = false;

	private: System::Void Display_Text(System::Object^ sender, System::EventArgs^ e)
	{
		if (Display->Text->Length == 0) Display->Text = "0";

		else if (Display->Text->Length > 15)
		{
			this->Display->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 23.90764F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
		}

	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ Numbers = safe_cast<Button^>(sender);

		if (Display->Text == "0")
		{
			Display->Text = Numbers->Text;
		}

		else if (Display->Text->Length < 12)
		{
			Display->Text = Display->Text + Numbers->Text;
		}
		else if (Display->Text->Length < 15)
		{
			Font -= 1.5;
			this->Display->Font = (gcnew System::Drawing::Font(L"Book Antiqua", Font, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			Display->Text = Display->Text + Numbers->Text;
		}

		else if (Display->Text->Length == 15)
		{
			this->Display->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 23.90764F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
		}

		if (checkEql)
		{
			Display->Text = Numbers->Text;
			lbShowOp->Text = "";
			checkEql = false;
		}
		else if (checkOp)
		{
			Display->Text = Numbers->Text;
			checkOp = false;
		}

	}
	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Display->Text = "0";
		lbShowOp->Text = "";

		Display->Font = (gcnew System::Drawing::Font(L"Book Antiqua", Font = 29.90769F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	private: System::Void buttonCE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkEql)
		{
			lbShowOp->Text = "";
		}
		Display->Text = "0";

		Display->Font = (gcnew System::Drawing::Font(L"Book Antiqua", Font = 29.90769F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	private: System::Void Arifmetic_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ Op = safe_cast<Button^>(sender);
		if (checkEql)
		{
			txtOp = Op->Text;
			lbShowOp->Text = System::Convert::ToString(result) + " " + txtOp;
			num1 = Double::Parse(Display->Text);
			Display->Text = "";
			checkEql = false;
		}
		else if (lbShowOp->Text == "")
		{
			num1 = Double::Parse(Display->Text);
			txtOp = Op->Text;
			lbShowOp->Text = Display->Text + " " + txtOp;
			Display->Text = "";
		}
		else if (checkOp)
		{
			newTxtOp = Op->Text;
			lbShowOp->Text = System::Convert::ToString(temp) + " " + lbTxtOp + " " + System::Convert::ToString(num2) + " " + newTxtOp;
			txtOp = newTxtOp;
		}
		else
		{
			num2 = Double::Parse(Display->Text);
			buttonOper_Click(sender, e);
		}
	}


	private: System::Void buttonEQL_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ eql = safe_cast<Button^>(sender);
		num2 = Double::Parse(Display->Text);

		if (txtOp == "+")
		{
			result = num1 + num2;
			Display->Text = System::Convert::ToString(result);
			lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + "=";
			(eql->Text == "=") ? checkEql = true : checkOp = true;
		}
		else if (txtOp == "-")
		{
			result = num1 - num2;
			Display->Text = System::Convert::ToString(result);
			lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + "=";
			(eql->Text == "=") ? checkEql = true : checkOp = true;
		}
		else if (txtOp == "x")
		{
			result = num1 * num2;
			Display->Text = System::Convert::ToString(result);
			lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + "=";
			(eql->Text == "=") ? checkEql = true : checkOp = true;
		}
		else if (txtOp == "/")
		{
			result = num1 / num2;
			Display->Text = System::Convert::ToString(result);
			lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + "=";
			(eql->Text == "=") ? checkEql = true : checkOp = true;
		}
		Display_Text(sender, e);
	}


	private: System::Void buttonOper_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ Oper = safe_cast<Button^>(sender);
		newTxtOp = Oper->Text;
		lbTxtOp = txtOp;

		if (newTxtOp == txtOp)
		{
			if (txtOp == "+")
			{
				result = num1 + num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + txtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
			else if (txtOp == "-")
			{
				result = num1 - num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + txtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
			else if (txtOp == "x")
			{
				result = num1 * num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + txtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
			else if (txtOp == "/")
			{
				result = num1 / num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + txtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
		}
		else
		{
			if (txtOp == "+")
			{
				result = num1 + num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + newTxtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
			else if (txtOp == "-")
			{
				result = num1 - num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + newTxtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
			else if (txtOp == "x")
			{
				result = num1 * num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + newTxtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
			else if (txtOp == "/")
			{
				result = num1 / num2;
				Display->Text = System::Convert::ToString(result);
				lbShowOp->Text = System::Convert::ToString(num1) + " " + txtOp + " " + System::Convert::ToString(num2) + " " + newTxtOp;
				temp = num1;
				num1 = result;
				checkOp = true;
			}
			txtOp = newTxtOp;
		}
	}
	private: System::Void buttonBCSP_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkEql)
		{
			lbShowOp->Text = "";
		}

		else if (Display->Text->Length >= 12)
		{
			Display->Text = Display->Text->Remove(Display->Text->Length - 1, 1);
			Font += 1.5;
			Display->Font = (gcnew System::Drawing::Font(L"Book Antiqua", Font, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
		}

		else if (Display->Text->Length > 0)
		{
			Display->Text = Display->Text->Remove(Display->Text->Length - 1, 1);
		}


	}
	private: System::Void buttonPM_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkEql)
		{
			lbShowOp->Text = "";
		}

		Display->Text = System::Convert::ToString(Double::Parse(Display->Text) * -1);
	}

	private: System::Void Percent_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (lbShowOp->Text == "")
		{
			num1 = Double::Parse(Display->Text);
			result = num1 / 100.00f;
			Display->Text = System::Convert::ToString(result);
			checkEql = true;
		}
		else
		{
			num2 = Double::Parse(Display->Text);
			result = num1 * num2 / 100.00f;
			lbShowOp->Text = lbShowOp->Text + System::Convert::ToString(result);
			Display->Text = System::Convert::ToString(result);
		}
	}

	private: System::Void buttonComma_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ obj = safe_cast<Button^>(sender);
		if (!(Display->Text->Contains(","))) Display->Text = Display->Text + obj->Text;
	}
	private: System::Void OneOverXOperator_Click(System::Object^ sender, System::EventArgs^ e)
	{

		num1 = Double::Parse(Display->Text);

		lbShowOp->Text = "1" + "/" + System::Convert::ToString(num1);
		result = 1 / num1;
		Display->Text = System::Convert::ToString(result);
		checkEql = true;
	}
	private: System::Void SqrXOperator_Click(System::Object^ sender, System::EventArgs^ e)
	{

		num1 = Double::Parse(Display->Text);

		lbShowOp->Text = "sqr(" + System::Convert::ToString(num1) + ")";
		result = num1 * num1;
		Display->Text = System::Convert::ToString(result);
		checkEql = true;
	}
	private: System::Void SqrtXOperator_Click(System::Object^ sender, System::EventArgs^ e)
	{

		num1 = Double::Parse(Display->Text);

		lbShowOp->Text = "sqrt(" + System::Convert::ToString(num1) + ")";
		result = sqrt(num1);
		Display->Text = System::Convert::ToString(result);
		checkEql = true;
	}








	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}



		Point* lastPoint;
		bool holding = false;
	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (holding)
		{
			this->Left += e->X - lastPoint->X;
			this->Top += e->Y - lastPoint->Y;
		}
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		lastPoint = new Point(e->X, e->Y);
		holding = true;
		panel1_MouseMove(sender,e);
	}
	private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		holding = false;
	}

private: System::Void hideButton_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

}

};
}
