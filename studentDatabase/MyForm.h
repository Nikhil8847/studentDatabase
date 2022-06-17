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





	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;





	private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ btnExit;
private: System::Windows::Forms::Button^ btnResult;
private: System::Windows::Forms::Button^ btnReset;
private: System::Windows::Forms::Button^ btnAddNew;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::ComboBox^ comboBox9;
private: System::Windows::Forms::ComboBox^ comboBox8;
private: System::Windows::Forms::Label^ label41;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;




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
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->btnAddNew = (gcnew System::Windows::Forms::Button());
            this->btnReset = (gcnew System::Windows::Forms::Button());
            this->btnResult = (gcnew System::Windows::Forms::Button());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
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
            this->panel1->Controls->Add(this->label38);
            this->panel1->Controls->Add(this->textBox17);
            this->panel1->Controls->Add(this->label37);
            this->panel1->Controls->Add(this->label39);
            this->panel1->Controls->Add(this->label36);
            this->panel1->Controls->Add(this->textBox16);
            this->panel1->Controls->Add(this->textBox13);
            this->panel1->Controls->Add(this->textBox15);
            this->panel1->Controls->Add(this->textBox12);
            this->panel1->Controls->Add(this->textBox14);
            this->panel1->Controls->Add(this->label35);
            this->panel1->Controls->Add(this->label34);
            this->panel1->Location = System::Drawing::Point(22, 609);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(614, 384);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::SystemColors::Control;
            this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Controls->Add(this->btnExit);
            this->panel7->Controls->Add(this->btnResult);
            this->panel7->Controls->Add(this->btnReset);
            this->panel7->Controls->Add(this->btnAddNew);
            this->panel7->Location = System::Drawing::Point(657, 840);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(846, 153);
            this->panel7->TabIndex = 0;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::SystemColors::Control;
            this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->label19);
            this->panel4->Controls->Add(this->label12);
            this->panel4->Controls->Add(this->comboBox5);
            this->panel4->Controls->Add(this->comboBox4);
            this->panel4->Controls->Add(this->comboBox3);
            this->panel4->Controls->Add(this->comboBox7);
            this->panel4->Controls->Add(this->comboBox2);
            this->panel4->Controls->Add(this->label18);
            this->panel4->Controls->Add(this->label13);
            this->panel4->Controls->Add(this->label14);
            this->panel4->Location = System::Drawing::Point(657, 488);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(423, 328);
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
            this->txtScore8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->txtScore6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->txtScore3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->txtScore5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->txtScore7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->txtScore2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->txtScore4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lblDate
            // 
            this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDate->Location = System::Drawing::Point(176, 926);
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
            this->label9->Size = System::Drawing::Size(113, 40);
            this->label9->TabIndex = 1;
            this->label9->Text = L"%age";
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
            this->panel3->Controls->Add(this->label26);
            this->panel3->Controls->Add(this->label25);
            this->panel3->Controls->Add(this->label22);
            this->panel3->Controls->Add(this->label42);
            this->panel3->Controls->Add(this->label40);
            this->panel3->Controls->Add(this->label24);
            this->panel3->Controls->Add(this->label23);
            this->panel3->Controls->Add(this->comboBox9);
            this->panel3->Controls->Add(this->comboBox8);
            this->panel3->Controls->Add(this->comboBox1);
            this->panel3->Controls->Add(this->textBox4);
            this->panel3->Controls->Add(this->textBox3);
            this->panel3->Controls->Add(this->textBox2);
            this->panel3->Controls->Add(this->textBox1);
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
            this->panel2->Controls->Add(this->label41);
            this->panel2->Controls->Add(this->label33);
            this->panel2->Controls->Add(this->label31);
            this->panel2->Controls->Add(this->textBox6);
            this->panel2->Controls->Add(this->label30);
            this->panel2->Controls->Add(this->textBox5);
            this->panel2->Controls->Add(this->label29);
            this->panel2->Controls->Add(this->textBox11);
            this->panel2->Controls->Add(this->textBox10);
            this->panel2->Controls->Add(this->label32);
            this->panel2->Controls->Add(this->textBox7);
            this->panel2->Controls->Add(this->textBox9);
            this->panel2->Controls->Add(this->label28);
            this->panel2->Controls->Add(this->textBox8);
            this->panel2->Controls->Add(this->label27);
            this->panel2->Controls->Add(this->comboBox6);
            this->panel2->Location = System::Drawing::Point(22, 22);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(614, 567);
            this->panel2->TabIndex = 0;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // tabPage2
            // 
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Size = System::Drawing::Size(1917, 1017);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Student Database";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(19, 73);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(212, 40);
            this->label12->TabIndex = 1;
            this->label12->Text = L"Other State";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label12->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(19, 19);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(224, 40);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Day Scholar";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(19, 129);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(179, 40);
            this->label14->TabIndex = 1;
            this->label14->Text = L"Overseas";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(19, 187);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(168, 40);
            this->label19->TabIndex = 1;
            this->label19->Text = L"Hosteller";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(19, 134);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(140, 40);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Faculty";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(19, 24);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(139, 40);
            this->label23->TabIndex = 1;
            this->label23->Text = L"Course";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(19, 248);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(268, 40);
            this->label24->TabIndex = 1;
            this->label24->Text = L"Course Mentor";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(19, 78);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(187, 40);
            this->label25->TabIndex = 1;
            this->label25->Text = L"Course ID";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label25->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(19, 192);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(292, 40);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Dean Of Faculty";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label26->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->AccessibleName = L"cboModule1";
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"", L"BCA ( Bachelor of Computer Applications )",
                    L"B.Sc. in Information Technology ", L"B.Tech. Computer Science and Engg", L"B.Tech. Computer Engg and Communications"
            });
            this->comboBox1->Location = System::Drawing::Point(322, 16);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(504, 48);
            this->comboBox1->TabIndex = 3;
            this->comboBox1->Text = L"-Select a Course-";
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // comboBox2
            // 
            this->comboBox2->AccessibleName = L"cboModule1";
            this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes ", L"No" });
            this->comboBox2->Location = System::Drawing::Point(241, 73);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(164, 48);
            this->comboBox2->TabIndex = 3;
            this->comboBox2->Text = L"Choose";
            this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // comboBox3
            // 
            this->comboBox3->AccessibleName = L"cboModule1";
            this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes ", L"No" });
            this->comboBox3->Location = System::Drawing::Point(241, 130);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(164, 48);
            this->comboBox3->TabIndex = 3;
            this->comboBox3->Text = L"Choose";
            this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // comboBox4
            // 
            this->comboBox4->AccessibleName = L"cboModule1";
            this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes ", L"No" });
            this->comboBox4->Location = System::Drawing::Point(241, 187);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(164, 48);
            this->comboBox4->TabIndex = 3;
            this->comboBox4->Text = L"Choose";
            this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // comboBox5
            // 
            this->comboBox5->AccessibleName = L"cboModule1";
            this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox5->FormattingEnabled = true;
            this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes ", L"No" });
            this->comboBox5->Location = System::Drawing::Point(241, 243);
            this->comboBox5->Name = L"comboBox5";
            this->comboBox5->Size = System::Drawing::Size(164, 48);
            this->comboBox5->TabIndex = 3;
            this->comboBox5->Text = L"Choose";
            this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // textBox1
            // 
            this->textBox1->AccessibleName = L"txtScore1";
            this->textBox1->Enabled = false;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(322, 72);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(504, 48);
            this->textBox1->TabIndex = 2;
            // 
            // textBox2
            // 
            this->textBox2->AccessibleName = L"txtScore1";
            this->textBox2->Enabled = false;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(322, 130);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(504, 48);
            this->textBox2->TabIndex = 2;
            // 
            // textBox3
            // 
            this->textBox3->AccessibleName = L"txtScore1";
            this->textBox3->Enabled = false;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(322, 187);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(504, 48);
            this->textBox3->TabIndex = 2;
            // 
            // textBox4
            // 
            this->textBox4->AccessibleName = L"txtScore1";
            this->textBox4->Enabled = false;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(322, 245);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(504, 48);
            this->textBox4->TabIndex = 2;
            // 
            // textBox5
            // 
            this->textBox5->AccessibleName = L"txtScore1";
            this->textBox5->Enabled = false;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(245, 52);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(348, 48);
            this->textBox5->TabIndex = 2;
            // 
            // textBox6
            // 
            this->textBox6->AccessibleName = L"txtScore1";
            this->textBox6->Enabled = false;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(245, 110);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(348, 48);
            this->textBox6->TabIndex = 2;
            // 
            // textBox7
            // 
            this->textBox7->AccessibleName = L"txtScore1";
            this->textBox7->Enabled = false;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->Location = System::Drawing::Point(245, 167);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(348, 48);
            this->textBox7->TabIndex = 2;
            // 
            // textBox8
            // 
            this->textBox8->AccessibleName = L"txtScore1";
            this->textBox8->Enabled = false;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(245, 224);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(348, 48);
            this->textBox8->TabIndex = 2;
            // 
            // comboBox6
            // 
            this->comboBox6->AccessibleName = L"cboModule1";
            this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox6->FormattingEnabled = true;
            this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Female", L"Male", L"Other" });
            this->comboBox6->Location = System::Drawing::Point(245, 283);
            this->comboBox6->Name = L"comboBox6";
            this->comboBox6->Size = System::Drawing::Size(348, 48);
            this->comboBox6->TabIndex = 3;
            this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(3, 61);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(196, 40);
            this->label27->TabIndex = 1;
            this->label27->Text = L"Student ID";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(3, 285);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(143, 40);
            this->label28->TabIndex = 1;
            this->label28->Text = L"Gender";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(3, 171);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(200, 40);
            this->label29->TabIndex = 1;
            this->label29->Text = L"Last Name";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(3, 115);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(203, 40);
            this->label30->TabIndex = 1;
            this->label30->Text = L"First Name";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label30->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(3, 229);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(156, 40);
            this->label31->TabIndex = 1;
            this->label31->Text = L"Address";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label31->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // textBox9
            // 
            this->textBox9->AccessibleName = L"txtScore1";
            this->textBox9->Enabled = false;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->Location = System::Drawing::Point(245, 459);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(348, 48);
            this->textBox9->TabIndex = 2;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(3, 407);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(199, 40);
            this->label32->TabIndex = 1;
            this->label32->Text = L"Mobile No.";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox10
            // 
            this->textBox10->AccessibleName = L"txtScore1";
            this->textBox10->Enabled = false;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->Location = System::Drawing::Point(245, 401);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(348, 48);
            this->textBox10->TabIndex = 2;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(3, 348);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(131, 40);
            this->label33->TabIndex = 1;
            this->label33->Text = L"D.O.B.";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label33->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // textBox11
            // 
            this->textBox11->AccessibleName = L"txtScore1";
            this->textBox11->Enabled = false;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->Location = System::Drawing::Point(245, 342);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(348, 48);
            this->textBox11->TabIndex = 2;
            // 
            // textBox12
            // 
            this->textBox12->AccessibleName = L"txtScore1";
            this->textBox12->Enabled = false;
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->Location = System::Drawing::Point(245, 138);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(348, 48);
            this->textBox12->TabIndex = 2;
            // 
            // textBox13
            // 
            this->textBox13->AccessibleName = L"txtScore1";
            this->textBox13->Enabled = false;
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox13->Location = System::Drawing::Point(245, 80);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(348, 48);
            this->textBox13->TabIndex = 2;
            // 
            // textBox14
            // 
            this->textBox14->AccessibleName = L"txtScore1";
            this->textBox14->Enabled = false;
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox14->Location = System::Drawing::Point(245, 21);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(348, 48);
            this->textBox14->TabIndex = 2;
            // 
            // textBox15
            // 
            this->textBox15->AccessibleName = L"txtScore1";
            this->textBox15->Enabled = false;
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox15->Location = System::Drawing::Point(245, 197);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(348, 48);
            this->textBox15->TabIndex = 2;
            // 
            // textBox16
            // 
            this->textBox16->AccessibleName = L"txtScore1";
            this->textBox16->Enabled = false;
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox16->Location = System::Drawing::Point(245, 314);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(348, 48);
            this->textBox16->TabIndex = 2;
            // 
            // textBox17
            // 
            this->textBox17->AccessibleName = L"txtScore1";
            this->textBox17->Enabled = false;
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox17->Location = System::Drawing::Point(245, 256);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(348, 48);
            this->textBox17->TabIndex = 2;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(3, 145);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(200, 40);
            this->label34->TabIndex = 1;
            this->label34->Text = L"Last Name";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(3, 35);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(173, 40);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Guardian";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(3, 259);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(199, 40);
            this->label36->TabIndex = 1;
            this->label36->Text = L"Mobile No.";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(3, 89);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(203, 40);
            this->label37->TabIndex = 1;
            this->label37->Text = L"First Name";
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label37->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(3, 203);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(209, 40);
            this->label38->TabIndex = 1;
            this->label38->Text = L"Occupation";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label38->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(3, 314);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(156, 40);
            this->label39->TabIndex = 1;
            this->label39->Text = L"Address";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // btnAddNew
            // 
            this->btnAddNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddNew->Location = System::Drawing::Point(66, 48);
            this->btnAddNew->Name = L"btnAddNew";
            this->btnAddNew->Size = System::Drawing::Size(150, 48);
            this->btnAddNew->TabIndex = 0;
            this->btnAddNew->Text = L"Add";
            this->btnAddNew->UseVisualStyleBackColor = true;
            // 
            // btnReset
            // 
            this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnReset->Location = System::Drawing::Point(255, 48);
            this->btnReset->Name = L"btnReset";
            this->btnReset->Size = System::Drawing::Size(150, 48);
            this->btnReset->TabIndex = 0;
            this->btnReset->Text = L"Reset";
            this->btnReset->UseVisualStyleBackColor = true;
            // 
            // btnResult
            // 
            this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnResult->Location = System::Drawing::Point(444, 48);
            this->btnResult->Name = L"btnResult";
            this->btnResult->Size = System::Drawing::Size(150, 48);
            this->btnResult->TabIndex = 0;
            this->btnResult->Text = L"Result";
            this->btnResult->UseVisualStyleBackColor = true;
            // 
            // btnExit
            // 
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnExit->Location = System::Drawing::Point(632, 48);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(150, 48);
            this->btnExit->TabIndex = 0;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = true;
            // 
            // comboBox7
            // 
            this->comboBox7->AccessibleName = L"cboModule1";
            this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox7->FormattingEnabled = true;
            this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes ", L"No" });
            this->comboBox7->Location = System::Drawing::Point(241, 16);
            this->comboBox7->Name = L"comboBox7";
            this->comboBox7->Size = System::Drawing::Size(164, 48);
            this->comboBox7->TabIndex = 3;
            this->comboBox7->Text = L"Choose";
            this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(3, 465);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(160, 40);
            this->label41->TabIndex = 1;
            this->label41->Text = L"Email ID";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label41->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(19, 306);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(284, 40);
            this->label40->TabIndex = 1;
            this->label40->Text = L"Course Medium";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // comboBox8
            // 
            this->comboBox8->AccessibleName = L"cboModule1";
            this->comboBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox8->FormattingEnabled = true;
            this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"English", L"Hindi", L"Punjabi" });
            this->comboBox8->Location = System::Drawing::Point(322, 303);
            this->comboBox8->Name = L"comboBox8";
            this->comboBox8->Size = System::Drawing::Size(504, 48);
            this->comboBox8->TabIndex = 3;
            this->comboBox8->Text = L"-Select a Language-";
            this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // comboBox9
            // 
            this->comboBox9->AccessibleName = L"cboModule1";
            this->comboBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox9->FormattingEnabled = true;
            this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Easy", L"Moderate", L"Difficult" });
            this->comboBox9->Location = System::Drawing::Point(322, 362);
            this->comboBox9->Name = L"comboBox9";
            this->comboBox9->Size = System::Drawing::Size(504, 48);
            this->comboBox9->TabIndex = 3;
            this->comboBox9->Text = L" - Select-";
            this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(19, 365);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(265, 40);
            this->label42->TabIndex = 1;
            this->label42->Text = L"Difficulty Level";
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox18
            // 
            this->textBox18->AccessibleName = L"txtScore1";
            this->textBox18->Enabled = false;
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox18->Location = System::Drawing::Point(257, 11);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(120, 48);
            this->textBox18->TabIndex = 2;
            this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(20, 19);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(140, 40);
            this->label16->TabIndex = 1;
            this->label16->Text = L"Income";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(20, 243);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(203, 40);
            this->label20->TabIndex = 1;
            this->label20->Text = L"12th Board";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(20, 73);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(151, 40);
            this->label17->TabIndex = 1;
            this->label17->Text = L"Siblings";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label17->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(20, 187);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(203, 40);
            this->label21->TabIndex = 1;
            this->label21->Text = L"10th Board";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label21->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown2->Location = System::Drawing::Point(257, 70);
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(120, 48);
            this->numericUpDown2->TabIndex = 2;
            this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::SystemColors::Control;
            this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->numericUpDown1);
            this->panel6->Controls->Add(this->numericUpDown2);
            this->panel6->Controls->Add(this->label21);
            this->panel6->Controls->Add(this->label15);
            this->panel6->Controls->Add(this->label17);
            this->panel6->Controls->Add(this->label20);
            this->panel6->Controls->Add(this->label16);
            this->panel6->Controls->Add(this->textBox18);
            this->panel6->Controls->Add(this->textBox20);
            this->panel6->Controls->Add(this->textBox19);
            this->panel6->Location = System::Drawing::Point(1094, 488);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(410, 328);
            this->panel6->TabIndex = 0;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(19, 246);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(216, 40);
            this->label18->TabIndex = 1;
            this->label18->Text = L"Scholarship";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(20, 133);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(171, 40);
            this->label15->TabIndex = 1;
            this->label15->Text = L"Backlogs";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label15->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown1->Location = System::Drawing::Point(257, 127);
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(120, 48);
            this->numericUpDown1->TabIndex = 2;
            this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox19
            // 
            this->textBox19->AccessibleName = L"txtScore1";
            this->textBox19->Enabled = false;
            this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox19->Location = System::Drawing::Point(257, 184);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(120, 48);
            this->textBox19->TabIndex = 2;
            this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox20
            // 
            this->textBox20->AccessibleName = L"txtScore1";
            this->textBox20->Enabled = false;
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox20->Location = System::Drawing::Point(257, 241);
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(120, 48);
            this->textBox20->TabIndex = 2;
            this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
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
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
