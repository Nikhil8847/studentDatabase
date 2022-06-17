#pragma once

namespace studentDatabase {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::ComboBox^ cboModule6;
	private: System::Windows::Forms::ComboBox^ cboModule8;


	private: System::Windows::Forms::ComboBox^ cboModule3;
	private: System::Windows::Forms::ComboBox^ cboModule5;
	private: System::Windows::Forms::ComboBox^ cboModule7;



	private: System::Windows::Forms::ComboBox^ cboModule2;
	private: System::Windows::Forms::TextBox^ txtScore8;


	private: System::Windows::Forms::TextBox^ txtScore6;

	private: System::Windows::Forms::TextBox^ txtScore3;
	private: System::Windows::Forms::TextBox^ txtScore5;
	private: System::Windows::Forms::TextBox^ txtScore7;



	private: System::Windows::Forms::ComboBox^ cboModule4;
	private: System::Windows::Forms::TextBox^ txtScore2;
	private: System::Windows::Forms::TextBox^ txtScore4;



	private: System::Windows::Forms::ComboBox^ cboModule1;
	private: System::Windows::Forms::TextBox^ txtScore1;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ lblDate;

	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::Label^ lblRanking;




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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->cboModule6 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule8 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule3 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule5 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule7 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule2 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore8 = (gcnew System::Windows::Forms::TextBox());
			this->txtScore6 = (gcnew System::Windows::Forms::TextBox());
			this->txtScore3 = (gcnew System::Windows::Forms::TextBox());
			this->txtScore5 = (gcnew System::Windows::Forms::TextBox());
			this->txtScore7 = (gcnew System::Windows::Forms::TextBox());
			this->cboModule4 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore2 = (gcnew System::Windows::Forms::TextBox());
			this->txtScore4 = (gcnew System::Windows::Forms::TextBox());
			this->cboModule1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore1 = (gcnew System::Windows::Forms::TextBox());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblRanking = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1925, 1050);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LightBlue;
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->panel7);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Size = System::Drawing::Size(1917, 1017);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"University System";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(22, 609);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(614, 384);
			this->panel1->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Control;
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(657, 840);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(846, 153);
			this->panel7->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Location = System::Drawing::Point(1106, 488);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(398, 328);
			this->panel6->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(657, 488);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(414, 328);
			this->panel4->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->cboModule6);
			this->panel5->Controls->Add(this->cboModule8);
			this->panel5->Controls->Add(this->cboModule3);
			this->panel5->Controls->Add(this->cboModule5);
			this->panel5->Controls->Add(this->cboModule7);
			this->panel5->Controls->Add(this->cboModule2);
			this->panel5->Controls->Add(this->txtScore8);
			this->panel5->Controls->Add(this->txtScore6);
			this->panel5->Controls->Add(this->txtScore3);
			this->panel5->Controls->Add(this->txtScore5);
			this->panel5->Controls->Add(this->txtScore7);
			this->panel5->Controls->Add(this->cboModule4);
			this->panel5->Controls->Add(this->txtScore2);
			this->panel5->Controls->Add(this->txtScore4);
			this->panel5->Controls->Add(this->cboModule1);
			this->panel5->Controls->Add(this->txtScore1);
			this->panel5->Controls->Add(this->lblDate);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->lblTotal);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->lblRanking);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Location = System::Drawing::Point(1522, 22);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(386, 971);
			this->panel5->TabIndex = 0;
			// 
			// cboModule6
			// 
			this->cboModule6->AccessibleName = L"cboModule1";
			this->cboModule6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule6->FormattingEnabled = true;
			this->cboModule6->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule6->Location = System::Drawing::Point(74, 631);
			this->cboModule6->Name = L"cboModule6";
			this->cboModule6->Size = System::Drawing::Size(180, 48);
			this->cboModule6->TabIndex = 3;
			// 
			// cboModule8
			// 
			this->cboModule8->AccessibleName = L"cboModule1";
			this->cboModule8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule8->FormattingEnabled = true;
			this->cboModule8->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule8->Location = System::Drawing::Point(74, 760);
			this->cboModule8->Name = L"cboModule8";
			this->cboModule8->Size = System::Drawing::Size(180, 48);
			this->cboModule8->TabIndex = 3;
			// 
			// cboModule3
			// 
			this->cboModule3->AccessibleName = L"cboModule1";
			this->cboModule3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule3->FormattingEnabled = true;
			this->cboModule3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule3->Location = System::Drawing::Point(74, 432);
			this->cboModule3->Name = L"cboModule3";
			this->cboModule3->Size = System::Drawing::Size(180, 48);
			this->cboModule3->TabIndex = 3;
			// 
			// cboModule5
			// 
			this->cboModule5->AccessibleName = L"cboModule1";
			this->cboModule5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule5->FormattingEnabled = true;
			this->cboModule5->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule5->Location = System::Drawing::Point(74, 565);
			this->cboModule5->Name = L"cboModule5";
			this->cboModule5->Size = System::Drawing::Size(180, 48);
			this->cboModule5->TabIndex = 3;
			// 
			// cboModule7
			// 
			this->cboModule7->AccessibleName = L"cboModule1";
			this->cboModule7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule7->FormattingEnabled = true;
			this->cboModule7->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule7->Location = System::Drawing::Point(74, 695);
			this->cboModule7->Name = L"cboModule7";
			this->cboModule7->Size = System::Drawing::Size(180, 48);
			this->cboModule7->TabIndex = 3;
			// 
			// cboModule2
			// 
			this->cboModule2->AccessibleName = L"cboModule1";
			this->cboModule2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule2->FormattingEnabled = true;
			this->cboModule2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule2->Location = System::Drawing::Point(74, 368);
			this->cboModule2->Name = L"cboModule2";
			this->cboModule2->Size = System::Drawing::Size(180, 48);
			this->cboModule2->TabIndex = 3;
			// 
			// txtScore8
			// 
			this->txtScore8->AccessibleName = L"txtScore1";
			this->txtScore8->Enabled = false;
			this->txtScore8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore8->Location = System::Drawing::Point(260, 760);
			this->txtScore8->Name = L"txtScore8";
			this->txtScore8->Size = System::Drawing::Size(100, 48);
			this->txtScore8->TabIndex = 2;
			this->txtScore8->Text = L"0";
			// 
			// txtScore6
			// 
			this->txtScore6->AccessibleName = L"txtScore1";
			this->txtScore6->Enabled = false;
			this->txtScore6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore6->Location = System::Drawing::Point(260, 631);
			this->txtScore6->Name = L"txtScore6";
			this->txtScore6->Size = System::Drawing::Size(100, 48);
			this->txtScore6->TabIndex = 2;
			this->txtScore6->Text = L"0";
			// 
			// txtScore3
			// 
			this->txtScore3->AccessibleName = L"txtScore1";
			this->txtScore3->Enabled = false;
			this->txtScore3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore3->Location = System::Drawing::Point(260, 432);
			this->txtScore3->Name = L"txtScore3";
			this->txtScore3->Size = System::Drawing::Size(100, 48);
			this->txtScore3->TabIndex = 2;
			this->txtScore3->Text = L"0";
			// 
			// txtScore5
			// 
			this->txtScore5->AccessibleName = L"txtScore1";
			this->txtScore5->Enabled = false;
			this->txtScore5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore5->Location = System::Drawing::Point(260, 565);
			this->txtScore5->Name = L"txtScore5";
			this->txtScore5->Size = System::Drawing::Size(100, 48);
			this->txtScore5->TabIndex = 2;
			this->txtScore5->Text = L"0";
			// 
			// txtScore7
			// 
			this->txtScore7->AccessibleName = L"txtScore1";
			this->txtScore7->Enabled = false;
			this->txtScore7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore7->Location = System::Drawing::Point(260, 695);
			this->txtScore7->Name = L"txtScore7";
			this->txtScore7->Size = System::Drawing::Size(100, 48);
			this->txtScore7->TabIndex = 2;
			this->txtScore7->Text = L"0";
			// 
			// cboModule4
			// 
			this->cboModule4->AccessibleName = L"cboModule1";
			this->cboModule4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule4->FormattingEnabled = true;
			this->cboModule4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule4->Location = System::Drawing::Point(74, 498);
			this->cboModule4->Name = L"cboModule4";
			this->cboModule4->Size = System::Drawing::Size(180, 48);
			this->cboModule4->TabIndex = 3;
			// 
			// txtScore2
			// 
			this->txtScore2->AccessibleName = L"txtScore1";
			this->txtScore2->Enabled = false;
			this->txtScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore2->Location = System::Drawing::Point(260, 368);
			this->txtScore2->Name = L"txtScore2";
			this->txtScore2->Size = System::Drawing::Size(100, 48);
			this->txtScore2->TabIndex = 2;
			this->txtScore2->Text = L"0";
			// 
			// txtScore4
			// 
			this->txtScore4->AccessibleName = L"txtScore1";
			this->txtScore4->Enabled = false;
			this->txtScore4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore4->Location = System::Drawing::Point(260, 498);
			this->txtScore4->Name = L"txtScore4";
			this->txtScore4->Size = System::Drawing::Size(100, 48);
			this->txtScore4->TabIndex = 2;
			this->txtScore4->Text = L"0";
			// 
			// cboModule1
			// 
			this->cboModule1->AccessibleName = L"cboModule1";
			this->cboModule1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule1->FormattingEnabled = true;
			this->cboModule1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Visual C++ Programming", L"Python Programming",
					L"Java Programming"
			});
			this->cboModule1->Location = System::Drawing::Point(74, 300);
			this->cboModule1->Name = L"cboModule1";
			this->cboModule1->Size = System::Drawing::Size(180, 48);
			this->cboModule1->TabIndex = 3;
			// 
			// txtScore1
			// 
			this->txtScore1->AccessibleName = L"txtScore1";
			this->txtScore1->Enabled = false;
			this->txtScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore1->Location = System::Drawing::Point(260, 300);
			this->txtScore1->Name = L"txtScore1";
			this->txtScore1->Size = System::Drawing::Size(100, 48);
			this->txtScore1->TabIndex = 2;
			this->txtScore1->Text = L"0";
			// 
			// lblDate
			// 
			this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(176, 928);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(184, 42);
			this->lblDate->TabIndex = 1;
			this->lblDate->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(14, 928);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 40);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Date";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(14, 757);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 42);
			this->label8->TabIndex = 1;
			this->label8->Text = L"8";
			// 
			// lblTotal
			// 
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(176, 818);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(184, 42);
			this->lblTotal->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(14, 818);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 40);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Total";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 628);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 42);
			this->label7->TabIndex = 1;
			this->label7->Text = L"6";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 498);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 42);
			this->label4->TabIndex = 1;
			this->label4->Text = L"4";
			// 
			// lblRanking
			// 
			this->lblRanking->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblRanking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRanking->Location = System::Drawing::Point(176, 872);
			this->lblRanking->Name = L"lblRanking";
			this->lblRanking->Size = System::Drawing::Size(184, 42);
			this->lblRanking->TabIndex = 1;
			this->lblRanking->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(14, 872);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(156, 40);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Ranking";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 695);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 42);
			this->label6->TabIndex = 1;
			this->label6->Text = L"7";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 368);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 565);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 42);
			this->label5->TabIndex = 1;
			this->label5->Text = L"5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 432);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 42);
			this->label3->TabIndex = 1;
			this->label3->Text = L"3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->monthCalendar1);
			this->panel8->Location = System::Drawing::Point(14, 15);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(352, 264);
			this->panel8->TabIndex = 0;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->monthCalendar1->Location = System::Drawing::Point(3, 5);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowWeekNumbers = true;
			this->monthCalendar1->TabIndex = 0;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(657, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(846, 447);
			this->panel3->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(22, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(614, 567);
			this->panel2->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Size = System::Drawing::Size(1916, 1016);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Student Database";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
