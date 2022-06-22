#pragma once

namespace studentDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
        MySqlConnection^ sqlConn = gcnew MySqlConnection();
        MySqlCommand^ sqlCmd = gcnew MySqlCommand();
        MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
        DataTable^ sqlDt = gcnew DataTable();
        MySqlDataReader^ sqlRd;
        DataSet^ DS = gcnew DataSet();
        String^ sqlQuery;
        String^ server = "localhost";
        String^ username = "root";
        String^ password = "tarul123@";
        String^ database = "studentdb";
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::TextBox^ txtMobile1;

    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::TextBox^ txtAddress1;

    private: System::Windows::Forms::TextBox^ txtFirstName1;
    private: System::Windows::Forms::TextBox^ txtOccupation;


    private: System::Windows::Forms::TextBox^ txtLastName1;


    private: System::Windows::Forms::TextBox^ txtGuardian;

    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Button^ btnResult;
    private: System::Windows::Forms::Button^ btnReset;
    private: System::Windows::Forms::Button^ btnAddNew;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::NumericUpDown^ nudBacklogs;

    private: System::Windows::Forms::NumericUpDown^ nudSiblings;

    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ txtIncome;
    private: System::Windows::Forms::TextBox^ txtBoard2;


    private: System::Windows::Forms::TextBox^ txtBoard1;

    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::ComboBox^ cboScholarship;

    private: System::Windows::Forms::ComboBox^ cboHosteller;

    private: System::Windows::Forms::ComboBox^ cboOverseas;

    private: System::Windows::Forms::ComboBox^ cboDayScholar;
    private: System::Windows::Forms::ComboBox^ cboOtherState;


    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Panel^ panel5;
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
    private: System::Windows::Forms::Label^ lblDate;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ lblTotal;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ lblPercentage;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::ComboBox^ cboDifficultyLevel;

private: System::Windows::Forms::ComboBox^ cboCourseMedium;

private: System::Windows::Forms::ComboBox^ cboCourse;
private: System::Windows::Forms::TextBox^ txtCourseMentor;


private: System::Windows::Forms::TextBox^ txtDeanOfFaculty;

private: System::Windows::Forms::TextBox^ txtFaculty;

private: System::Windows::Forms::TextBox^ txtCourseID;

    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label31;


    private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ txtStudentID;

    private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ txtDOB;
private: System::Windows::Forms::TextBox^ txtMobile;


    private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ txtLastName;
private: System::Windows::Forms::TextBox^ txtEmail;


    private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ txtAddress;

    private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ txtFirstName;

private: System::Windows::Forms::ComboBox^ cboGender;

           
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

	private: System::Windows::Forms::TabPage^ tabPage2;






















































    private: System::Windows::Forms::Label^ lblRanking;














































































private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::Windows::Forms::DataGridView^ dataGridView1;




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
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->txtMobile1 = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->txtAddress1 = (gcnew System::Windows::Forms::TextBox());
            this->txtFirstName1 = (gcnew System::Windows::Forms::TextBox());
            this->txtOccupation = (gcnew System::Windows::Forms::TextBox());
            this->txtLastName1 = (gcnew System::Windows::Forms::TextBox());
            this->txtGuardian = (gcnew System::Windows::Forms::TextBox());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnResult = (gcnew System::Windows::Forms::Button());
            this->btnReset = (gcnew System::Windows::Forms::Button());
            this->btnAddNew = (gcnew System::Windows::Forms::Button());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->nudBacklogs = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudSiblings = (gcnew System::Windows::Forms::NumericUpDown());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->txtIncome = (gcnew System::Windows::Forms::TextBox());
            this->txtBoard2 = (gcnew System::Windows::Forms::TextBox());
            this->txtBoard1 = (gcnew System::Windows::Forms::TextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->cboScholarship = (gcnew System::Windows::Forms::ComboBox());
            this->cboHosteller = (gcnew System::Windows::Forms::ComboBox());
            this->cboOverseas = (gcnew System::Windows::Forms::ComboBox());
            this->cboDayScholar = (gcnew System::Windows::Forms::ComboBox());
            this->cboOtherState = (gcnew System::Windows::Forms::ComboBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
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
            this->lblPercentage = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->cboDifficultyLevel = (gcnew System::Windows::Forms::ComboBox());
            this->cboCourseMedium = (gcnew System::Windows::Forms::ComboBox());
            this->cboCourse = (gcnew System::Windows::Forms::ComboBox());
            this->txtCourseMentor = (gcnew System::Windows::Forms::TextBox());
            this->txtDeanOfFaculty = (gcnew System::Windows::Forms::TextBox());
            this->txtFaculty = (gcnew System::Windows::Forms::TextBox());
            this->txtCourseID = (gcnew System::Windows::Forms::TextBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
            this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->txtDOB = (gcnew System::Windows::Forms::TextBox());
            this->txtMobile = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->txtLastName = (gcnew System::Windows::Forms::TextBox());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->txtAddress = (gcnew System::Windows::Forms::TextBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->cboGender = (gcnew System::Windows::Forms::ComboBox());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBacklogs))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSiblings))->BeginInit();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel2->SuspendLayout();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Location = System::Drawing::Point(0, 28);
            this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1924, 1049);
            this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
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
            this->tabPage1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->tabPage1->Size = System::Drawing::Size(1916, 1016);
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
            this->panel1->Controls->Add(this->txtMobile1);
            this->panel1->Controls->Add(this->label37);
            this->panel1->Controls->Add(this->label39);
            this->panel1->Controls->Add(this->label36);
            this->panel1->Controls->Add(this->txtAddress1);
            this->panel1->Controls->Add(this->txtFirstName1);
            this->panel1->Controls->Add(this->txtOccupation);
            this->panel1->Controls->Add(this->txtLastName1);
            this->panel1->Controls->Add(this->txtGuardian);
            this->panel1->Controls->Add(this->label35);
            this->panel1->Controls->Add(this->label34);
            this->panel1->Location = System::Drawing::Point(22, 609);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(614, 384);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(9, 198);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(209, 40);
            this->label38->TabIndex = 1;
            this->label38->Text = L"Occupation";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label38->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // txtMobile1
            // 
            this->txtMobile1->AccessibleName = L"txtScore1";
            this->txtMobile1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtMobile1->Location = System::Drawing::Point(244, 255);
            this->txtMobile1->Name = L"txtMobile1";
            this->txtMobile1->Size = System::Drawing::Size(358, 48);
            this->txtMobile1->TabIndex = 2;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(9, 83);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(203, 40);
            this->label37->TabIndex = 1;
            this->label37->Text = L"First Name";
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label37->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(9, 314);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(156, 40);
            this->label39->TabIndex = 1;
            this->label39->Text = L"Address";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(9, 257);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(199, 40);
            this->label36->TabIndex = 1;
            this->label36->Text = L"Mobile No.";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtAddress1
            // 
            this->txtAddress1->AccessibleName = L"txtScore1";
            this->txtAddress1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtAddress1->Location = System::Drawing::Point(244, 314);
            this->txtAddress1->Name = L"txtAddress1";
            this->txtAddress1->Size = System::Drawing::Size(358, 48);
            this->txtAddress1->TabIndex = 2;
            // 
            // txtFirstName1
            // 
            this->txtFirstName1->AccessibleName = L"txtScore1";
            this->txtFirstName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtFirstName1->Location = System::Drawing::Point(244, 80);
            this->txtFirstName1->Name = L"txtFirstName1";
            this->txtFirstName1->Size = System::Drawing::Size(358, 48);
            this->txtFirstName1->TabIndex = 2;
            // 
            // txtOccupation
            // 
            this->txtOccupation->AccessibleName = L"txtScore1";
            this->txtOccupation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtOccupation->Location = System::Drawing::Point(244, 197);
            this->txtOccupation->Name = L"txtOccupation";
            this->txtOccupation->Size = System::Drawing::Size(358, 48);
            this->txtOccupation->TabIndex = 2;
            // 
            // txtLastName1
            // 
            this->txtLastName1->AccessibleName = L"txtScore1";
            this->txtLastName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtLastName1->Location = System::Drawing::Point(244, 138);
            this->txtLastName1->Name = L"txtLastName1";
            this->txtLastName1->Size = System::Drawing::Size(358, 48);
            this->txtLastName1->TabIndex = 2;
            // 
            // txtGuardian
            // 
            this->txtGuardian->AccessibleName = L"txtScore1";
            this->txtGuardian->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtGuardian->Location = System::Drawing::Point(244, 22);
            this->txtGuardian->Name = L"txtGuardian";
            this->txtGuardian->Size = System::Drawing::Size(358, 48);
            this->txtGuardian->TabIndex = 2;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(9, 28);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(173, 40);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Guardian";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(9, 142);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(200, 40);
            this->label34->TabIndex = 1;
            this->label34->Text = L"Last Name";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            // btnExit
            // 
            this->btnExit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnExit->Location = System::Drawing::Point(632, 35);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(150, 75);
            this->btnExit->TabIndex = 0;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = true;
            this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
            // 
            // btnResult
            // 
            this->btnResult->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnResult->Location = System::Drawing::Point(444, 35);
            this->btnResult->Name = L"btnResult";
            this->btnResult->Size = System::Drawing::Size(150, 75);
            this->btnResult->TabIndex = 0;
            this->btnResult->Text = L"Result";
            this->btnResult->UseVisualStyleBackColor = true;
            // 
            // btnReset
            // 
            this->btnReset->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnReset->Location = System::Drawing::Point(255, 35);
            this->btnReset->Name = L"btnReset";
            this->btnReset->Size = System::Drawing::Size(150, 75);
            this->btnReset->TabIndex = 0;
            this->btnReset->Text = L"Reset";
            this->btnReset->UseVisualStyleBackColor = true;
            // 
            // btnAddNew
            // 
            this->btnAddNew->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->btnAddNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddNew->Location = System::Drawing::Point(66, 35);
            this->btnAddNew->Name = L"btnAddNew";
            this->btnAddNew->Size = System::Drawing::Size(150, 75);
            this->btnAddNew->TabIndex = 0;
            this->btnAddNew->Text = L"Add";
            this->btnAddNew->UseVisualStyleBackColor = true;
            this->btnAddNew->Click += gcnew System::EventHandler(this, &MyForm::btnAddNew_Click);
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::SystemColors::Control;
            this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->nudBacklogs);
            this->panel6->Controls->Add(this->nudSiblings);
            this->panel6->Controls->Add(this->label21);
            this->panel6->Controls->Add(this->label15);
            this->panel6->Controls->Add(this->label17);
            this->panel6->Controls->Add(this->label20);
            this->panel6->Controls->Add(this->label16);
            this->panel6->Controls->Add(this->txtIncome);
            this->panel6->Controls->Add(this->txtBoard2);
            this->panel6->Controls->Add(this->txtBoard1);
            this->panel6->Location = System::Drawing::Point(1119, 488);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(384, 328);
            this->panel6->TabIndex = 0;
            // 
            // nudBacklogs
            // 
            this->nudBacklogs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nudBacklogs->Location = System::Drawing::Point(256, 128);
            this->nudBacklogs->Name = L"nudBacklogs";
            this->nudBacklogs->Size = System::Drawing::Size(110, 48);
            this->nudBacklogs->TabIndex = 2;
            this->nudBacklogs->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudSiblings
            // 
            this->nudSiblings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nudSiblings->Location = System::Drawing::Point(256, 71);
            this->nudSiblings->Name = L"nudSiblings";
            this->nudSiblings->Size = System::Drawing::Size(110, 48);
            this->nudSiblings->TabIndex = 2;
            this->nudSiblings->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(20, 188);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(203, 40);
            this->label21->TabIndex = 1;
            this->label21->Text = L"10th Board";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label21->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(20, 132);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(171, 40);
            this->label15->TabIndex = 1;
            this->label15->Text = L"Backlogs";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label15->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(20, 72);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(151, 40);
            this->label17->TabIndex = 1;
            this->label17->Text = L"Siblings";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label17->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
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
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(20, 18);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(140, 40);
            this->label16->TabIndex = 1;
            this->label16->Text = L"Income";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtIncome
            // 
            this->txtIncome->AccessibleName = L"txtScore1";
            this->txtIncome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtIncome->Location = System::Drawing::Point(256, 11);
            this->txtIncome->Name = L"txtIncome";
            this->txtIncome->Size = System::Drawing::Size(109, 48);
            this->txtIncome->TabIndex = 2;
            this->txtIncome->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtBoard2
            // 
            this->txtBoard2->AccessibleName = L"txtScore1";
            this->txtBoard2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtBoard2->Location = System::Drawing::Point(256, 242);
            this->txtBoard2->Name = L"txtBoard2";
            this->txtBoard2->Size = System::Drawing::Size(109, 48);
            this->txtBoard2->TabIndex = 2;
            this->txtBoard2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtBoard1
            // 
            this->txtBoard1->AccessibleName = L"txtScore1";
            this->txtBoard1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtBoard1->Location = System::Drawing::Point(256, 185);
            this->txtBoard1->Name = L"txtBoard1";
            this->txtBoard1->Size = System::Drawing::Size(109, 48);
            this->txtBoard1->TabIndex = 2;
            this->txtBoard1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::SystemColors::Control;
            this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->label19);
            this->panel4->Controls->Add(this->label12);
            this->panel4->Controls->Add(this->cboScholarship);
            this->panel4->Controls->Add(this->cboHosteller);
            this->panel4->Controls->Add(this->cboOverseas);
            this->panel4->Controls->Add(this->cboDayScholar);
            this->panel4->Controls->Add(this->cboOtherState);
            this->panel4->Controls->Add(this->label18);
            this->panel4->Controls->Add(this->label13);
            this->panel4->Controls->Add(this->label14);
            this->panel4->Location = System::Drawing::Point(657, 488);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(455, 328);
            this->panel4->TabIndex = 0;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(20, 188);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(168, 40);
            this->label19->TabIndex = 1;
            this->label19->Text = L"Hosteller";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(20, 72);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(212, 40);
            this->label12->TabIndex = 1;
            this->label12->Text = L"Other State";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label12->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // cboScholarship
            // 
            this->cboScholarship->AccessibleName = L"cboModule1";
            this->cboScholarship->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboScholarship->FormattingEnabled = true;
            this->cboScholarship->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes ", L"No" });
            this->cboScholarship->Location = System::Drawing::Point(270, 246);
            this->cboScholarship->Name = L"cboScholarship";
            this->cboScholarship->Size = System::Drawing::Size(164, 48);
            this->cboScholarship->TabIndex = 3;
            this->cboScholarship->Text = L"Choose";
            this->cboScholarship->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // cboHosteller
            // 
            this->cboHosteller->AccessibleName = L"cboModule1";
            this->cboHosteller->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboHosteller->FormattingEnabled = true;
            this->cboHosteller->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes ", L"No" });
            this->cboHosteller->Location = System::Drawing::Point(270, 191);
            this->cboHosteller->Name = L"cboHosteller";
            this->cboHosteller->Size = System::Drawing::Size(164, 48);
            this->cboHosteller->TabIndex = 3;
            this->cboHosteller->Text = L"Choose";
            this->cboHosteller->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // cboOverseas
            // 
            this->cboOverseas->AccessibleName = L"cboModule1";
            this->cboOverseas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboOverseas->FormattingEnabled = true;
            this->cboOverseas->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes ", L"No" });
            this->cboOverseas->Location = System::Drawing::Point(270, 132);
            this->cboOverseas->Name = L"cboOverseas";
            this->cboOverseas->Size = System::Drawing::Size(164, 48);
            this->cboOverseas->TabIndex = 3;
            this->cboOverseas->Text = L"Choose";
            this->cboOverseas->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // cboDayScholar
            // 
            this->cboDayScholar->AccessibleName = L"cboModule1";
            this->cboDayScholar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboDayScholar->FormattingEnabled = true;
            this->cboDayScholar->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes ", L"No" });
            this->cboDayScholar->Location = System::Drawing::Point(270, 18);
            this->cboDayScholar->Name = L"cboDayScholar";
            this->cboDayScholar->Size = System::Drawing::Size(164, 48);
            this->cboDayScholar->TabIndex = 3;
            this->cboDayScholar->Text = L"Choose";
            this->cboDayScholar->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // cboOtherState
            // 
            this->cboOtherState->AccessibleName = L"cboModule1";
            this->cboOtherState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboOtherState->FormattingEnabled = true;
            this->cboOtherState->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes ", L"No" });
            this->cboOtherState->Location = System::Drawing::Point(270, 75);
            this->cboOtherState->Name = L"cboOtherState";
            this->cboOtherState->Size = System::Drawing::Size(164, 48);
            this->cboOtherState->TabIndex = 3;
            this->cboOtherState->Text = L"Choose";
            this->cboOtherState->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(20, 246);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(216, 40);
            this->label18->TabIndex = 1;
            this->label18->Text = L"Scholarship";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(20, 18);
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
            this->label14->Location = System::Drawing::Point(20, 129);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(179, 40);
            this->label14->TabIndex = 1;
            this->label14->Text = L"Overseas";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->panel5->Controls->Add(this->lblPercentage);
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
            this->cboModule6->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Object Oriented Design", L"Software Testing",
                    L"Procedural Programming"
            });
            this->cboModule6->Location = System::Drawing::Point(74, 631);
            this->cboModule6->Name = L"cboModule6";
            this->cboModule6->Size = System::Drawing::Size(206, 48);
            this->cboModule6->TabIndex = 3;
            // 
            // cboModule8
            // 
            this->cboModule8->AccessibleName = L"cboModule1";
            this->cboModule8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule8->FormattingEnabled = true;
            this->cboModule8->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Computer gaming", L"Animation", L"Graphics designing" });
            this->cboModule8->Location = System::Drawing::Point(74, 760);
            this->cboModule8->Name = L"cboModule8";
            this->cboModule8->Size = System::Drawing::Size(206, 48);
            this->cboModule8->TabIndex = 3;
            // 
            // cboModule3
            // 
            this->cboModule3->AccessibleName = L"cboModule1";
            this->cboModule3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule3->FormattingEnabled = true;
            this->cboModule3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"System Analysis and Design", L"Information Technology",
                    L"Network Management"
            });
            this->cboModule3->Location = System::Drawing::Point(74, 432);
            this->cboModule3->Name = L"cboModule3";
            this->cboModule3->Size = System::Drawing::Size(206, 48);
            this->cboModule3->TabIndex = 3;
            // 
            // cboModule5
            // 
            this->cboModule5->AccessibleName = L"cboModule1";
            this->cboModule5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule5->FormattingEnabled = true;
            this->cboModule5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"JavaScript", L"Website Development", L"PHP Programming" });
            this->cboModule5->Location = System::Drawing::Point(74, 565);
            this->cboModule5->Name = L"cboModule5";
            this->cboModule5->Size = System::Drawing::Size(206, 48);
            this->cboModule5->TabIndex = 3;
            // 
            // cboModule7
            // 
            this->cboModule7->AccessibleName = L"cboModule1";
            this->cboModule7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule7->FormattingEnabled = true;
            this->cboModule7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Cyber Security", L"Raspberry Pi", L"MATLAB" });
            this->cboModule7->Location = System::Drawing::Point(74, 695);
            this->cboModule7->Name = L"cboModule7";
            this->cboModule7->Size = System::Drawing::Size(206, 48);
            this->cboModule7->TabIndex = 3;
            // 
            // cboModule2
            // 
            this->cboModule2->AccessibleName = L"cboModule1";
            this->cboModule2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule2->FormattingEnabled = true;
            this->cboModule2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Excel Spreadsheet", L"Database", L"SQL" });
            this->cboModule2->Location = System::Drawing::Point(74, 368);
            this->cboModule2->Name = L"cboModule2";
            this->cboModule2->Size = System::Drawing::Size(206, 48);
            this->cboModule2->TabIndex = 3;
            // 
            // txtScore8
            // 
            this->txtScore8->AccessibleName = L"txtScore1";
            this->txtScore8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore8->Location = System::Drawing::Point(292, 760);
            this->txtScore8->Name = L"txtScore8";
            this->txtScore8->Size = System::Drawing::Size(80, 48);
            this->txtScore8->TabIndex = 2;
            this->txtScore8->Text = L"0";
            this->txtScore8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtScore6
            // 
            this->txtScore6->AccessibleName = L"txtScore1";
            this->txtScore6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore6->Location = System::Drawing::Point(292, 631);
            this->txtScore6->Name = L"txtScore6";
            this->txtScore6->Size = System::Drawing::Size(80, 48);
            this->txtScore6->TabIndex = 2;
            this->txtScore6->Text = L"0";
            this->txtScore6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtScore3
            // 
            this->txtScore3->AccessibleName = L"txtScore1";
            this->txtScore3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore3->Location = System::Drawing::Point(292, 432);
            this->txtScore3->Name = L"txtScore3";
            this->txtScore3->Size = System::Drawing::Size(80, 48);
            this->txtScore3->TabIndex = 2;
            this->txtScore3->Text = L"0";
            this->txtScore3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtScore5
            // 
            this->txtScore5->AccessibleName = L"txtScore1";
            this->txtScore5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore5->Location = System::Drawing::Point(292, 565);
            this->txtScore5->Name = L"txtScore5";
            this->txtScore5->Size = System::Drawing::Size(80, 48);
            this->txtScore5->TabIndex = 2;
            this->txtScore5->Text = L"0";
            this->txtScore5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtScore7
            // 
            this->txtScore7->AccessibleName = L"txtScore1";
            this->txtScore7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore7->Location = System::Drawing::Point(292, 695);
            this->txtScore7->Name = L"txtScore7";
            this->txtScore7->Size = System::Drawing::Size(80, 48);
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
                L"Machine Learning", L"Artificial Intelligence",
                    L"Data Science", L"Satistics"
            });
            this->cboModule4->Location = System::Drawing::Point(74, 498);
            this->cboModule4->Name = L"cboModule4";
            this->cboModule4->Size = System::Drawing::Size(206, 48);
            this->cboModule4->TabIndex = 3;
            // 
            // txtScore2
            // 
            this->txtScore2->AccessibleName = L"txtScore1";
            this->txtScore2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore2->Location = System::Drawing::Point(292, 368);
            this->txtScore2->Name = L"txtScore2";
            this->txtScore2->Size = System::Drawing::Size(80, 48);
            this->txtScore2->TabIndex = 2;
            this->txtScore2->Text = L"0";
            this->txtScore2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtScore4
            // 
            this->txtScore4->AccessibleName = L"txtScore1";
            this->txtScore4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore4->Location = System::Drawing::Point(292, 498);
            this->txtScore4->Name = L"txtScore4";
            this->txtScore4->Size = System::Drawing::Size(80, 48);
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
            this->cboModule1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Visual C++ Programming", L"Python Programming",
                    L"Java Programming"
            });
            this->cboModule1->Location = System::Drawing::Point(74, 300);
            this->cboModule1->Name = L"cboModule1";
            this->cboModule1->Size = System::Drawing::Size(206, 48);
            this->cboModule1->TabIndex = 3;
            // 
            // txtScore1
            // 
            this->txtScore1->AccessibleName = L"txtScore1";
            this->txtScore1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore1->Location = System::Drawing::Point(292, 300);
            this->txtScore1->Name = L"txtScore1";
            this->txtScore1->Size = System::Drawing::Size(80, 48);
            this->txtScore1->TabIndex = 2;
            this->txtScore1->Text = L"0";
            this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lblDate
            // 
            this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDate->Location = System::Drawing::Point(138, 917);
            this->lblDate->Name = L"lblDate";
            this->lblDate->Size = System::Drawing::Size(236, 44);
            this->lblDate->TabIndex = 1;
            this->lblDate->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(21, 920);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(97, 40);
            this->label11->TabIndex = 1;
            this->label11->Text = L"Date";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(14, 763);
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
            this->lblTotal->Location = System::Drawing::Point(138, 825);
            this->lblTotal->Name = L"lblTotal";
            this->lblTotal->Size = System::Drawing::Size(236, 44);
            this->lblTotal->TabIndex = 1;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(12, 825);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(102, 40);
            this->label10->TabIndex = 1;
            this->label10->Text = L"Total";
            this->label10->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(14, 634);
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
            this->label4->Location = System::Drawing::Point(14, 502);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(40, 42);
            this->label4->TabIndex = 1;
            this->label4->Text = L"4";
            // 
            // lblPercentage
            // 
            this->lblPercentage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblPercentage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblPercentage->Location = System::Drawing::Point(138, 872);
            this->lblPercentage->Name = L"lblPercentage";
            this->lblPercentage->Size = System::Drawing::Size(236, 40);
            this->lblPercentage->TabIndex = 1;
            this->lblPercentage->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(12, 869);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(113, 40);
            this->label9->TabIndex = 1;
            this->label9->Text = L"%age";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(14, 698);
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
            this->label2->Location = System::Drawing::Point(14, 371);
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
            this->label5->Location = System::Drawing::Point(14, 569);
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
            this->label3->Location = System::Drawing::Point(14, 435);
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
            this->label1->Location = System::Drawing::Point(14, 303);
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
            this->panel8->Location = System::Drawing::Point(3, 15);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(377, 264);
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
            this->panel3->Controls->Add(this->cboDifficultyLevel);
            this->panel3->Controls->Add(this->cboCourseMedium);
            this->panel3->Controls->Add(this->cboCourse);
            this->panel3->Controls->Add(this->txtCourseMentor);
            this->panel3->Controls->Add(this->txtDeanOfFaculty);
            this->panel3->Controls->Add(this->txtFaculty);
            this->panel3->Controls->Add(this->txtCourseID);
            this->panel3->Location = System::Drawing::Point(657, 22);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(846, 447);
            this->panel3->TabIndex = 0;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(20, 192);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(292, 40);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Dean Of Faculty";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label26->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(20, 78);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(187, 40);
            this->label25->TabIndex = 1;
            this->label25->Text = L"Course ID";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label25->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(20, 134);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(140, 40);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Faculty";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(20, 365);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(265, 40);
            this->label42->TabIndex = 1;
            this->label42->Text = L"Difficulty Level";
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(20, 306);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(284, 40);
            this->label40->TabIndex = 1;
            this->label40->Text = L"Course Medium";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(20, 248);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(268, 40);
            this->label24->TabIndex = 1;
            this->label24->Text = L"Course Mentor";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(20, 25);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(139, 40);
            this->label23->TabIndex = 1;
            this->label23->Text = L"Course";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cboDifficultyLevel
            // 
            this->cboDifficultyLevel->AccessibleName = L"cboModule1";
            this->cboDifficultyLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboDifficultyLevel->FormattingEnabled = true;
            this->cboDifficultyLevel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Easy", L"Moderate", L"Difficult" });
            this->cboDifficultyLevel->Location = System::Drawing::Point(322, 362);
            this->cboDifficultyLevel->Name = L"cboDifficultyLevel";
            this->cboDifficultyLevel->Size = System::Drawing::Size(504, 48);
            this->cboDifficultyLevel->TabIndex = 3;
            this->cboDifficultyLevel->Text = L" - Select-";
            this->cboDifficultyLevel->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // cboCourseMedium
            // 
            this->cboCourseMedium->AccessibleName = L"cboModule1";
            this->cboCourseMedium->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboCourseMedium->FormattingEnabled = true;
            this->cboCourseMedium->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"English", L"Hindi", L"Punjabi" });
            this->cboCourseMedium->Location = System::Drawing::Point(322, 303);
            this->cboCourseMedium->Name = L"cboCourseMedium";
            this->cboCourseMedium->Size = System::Drawing::Size(504, 48);
            this->cboCourseMedium->TabIndex = 3;
            this->cboCourseMedium->Text = L"-Select a Language-";
            this->cboCourseMedium->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // cboCourse
            // 
            this->cboCourse->AccessibleName = L"cboModule1";
            this->cboCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboCourse->FormattingEnabled = true;
            this->cboCourse->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"<None>", L"BCA ( Bachelor of Computer Applications )",
                    L"B.Sc. in Information Technology", L"B.Tech. Computer Science and Engg.", L"B.Tech. Computer Engg and Communications"
            });
            this->cboCourse->Location = System::Drawing::Point(322, 15);
            this->cboCourse->Name = L"cboCourse";
            this->cboCourse->Size = System::Drawing::Size(504, 48);
            this->cboCourse->TabIndex = 3;
            this->cboCourse->Text = L"-Select a Course-";
            this->cboCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // txtCourseMentor
            // 
            this->txtCourseMentor->AccessibleName = L"txtScore1";
            this->txtCourseMentor->Enabled = false;
            this->txtCourseMentor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCourseMentor->Location = System::Drawing::Point(322, 245);
            this->txtCourseMentor->Name = L"txtCourseMentor";
            this->txtCourseMentor->Size = System::Drawing::Size(504, 48);
            this->txtCourseMentor->TabIndex = 2;
            // 
            // txtDeanOfFaculty
            // 
            this->txtDeanOfFaculty->AccessibleName = L"txtScore1";
            this->txtDeanOfFaculty->Enabled = false;
            this->txtDeanOfFaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDeanOfFaculty->Location = System::Drawing::Point(322, 188);
            this->txtDeanOfFaculty->Name = L"txtDeanOfFaculty";
            this->txtDeanOfFaculty->Size = System::Drawing::Size(504, 48);
            this->txtDeanOfFaculty->TabIndex = 2;
            // 
            // txtFaculty
            // 
            this->txtFaculty->AccessibleName = L"txtScore1";
            this->txtFaculty->Enabled = false;
            this->txtFaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtFaculty->Location = System::Drawing::Point(322, 130);
            this->txtFaculty->Name = L"txtFaculty";
            this->txtFaculty->Size = System::Drawing::Size(504, 48);
            this->txtFaculty->TabIndex = 2;
            // 
            // txtCourseID
            // 
            this->txtCourseID->AccessibleName = L"txtScore1";
            this->txtCourseID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtCourseID->Enabled = false;
            this->txtCourseID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCourseID->Location = System::Drawing::Point(322, 72);
            this->txtCourseID->Name = L"txtCourseID";
            this->txtCourseID->Size = System::Drawing::Size(504, 48);
            this->txtCourseID->TabIndex = 2;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::Control;
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->label41);
            this->panel2->Controls->Add(this->label33);
            this->panel2->Controls->Add(this->label31);
            this->panel2->Controls->Add(this->label30);
            this->panel2->Controls->Add(this->txtFirstName);
            this->panel2->Controls->Add(this->txtStudentID);
            this->panel2->Controls->Add(this->label29);
            this->panel2->Controls->Add(this->txtDOB);
            this->panel2->Controls->Add(this->txtMobile);
            this->panel2->Controls->Add(this->label32);
            this->panel2->Controls->Add(this->txtLastName);
            this->panel2->Controls->Add(this->txtEmail);
            this->panel2->Controls->Add(this->label28);
            this->panel2->Controls->Add(this->txtAddress);
            this->panel2->Controls->Add(this->label27);
            this->panel2->Controls->Add(this->cboGender);
            this->panel2->Location = System::Drawing::Point(22, 22);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(614, 567);
            this->panel2->TabIndex = 0;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(10, 497);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(160, 40);
            this->label41->TabIndex = 1;
            this->label41->Text = L"Email ID";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label41->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(10, 363);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(131, 40);
            this->label33->TabIndex = 1;
            this->label33->Text = L"D.O.B.";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label33->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(9, 235);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(156, 40);
            this->label31->TabIndex = 1;
            this->label31->Text = L"Address";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label31->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(9, 98);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(203, 40);
            this->label30->TabIndex = 1;
            this->label30->Text = L"First Name";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label30->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // txtFirstName
            // 
            this->txtFirstName->AccessibleName = L"txtStudentID";
            this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtFirstName->Location = System::Drawing::Point(238, 98);
            this->txtFirstName->Name = L"txtFirstName";
            this->txtFirstName->Size = System::Drawing::Size(364, 48);
            this->txtFirstName->TabIndex = 2;
            this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
            // 
            // txtStudentID
            // 
            this->txtStudentID->AccessibleName = L"txtStudentID";
            this->txtStudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtStudentID->Location = System::Drawing::Point(238, 34);
            this->txtStudentID->Name = L"txtStudentID";
            this->txtStudentID->Size = System::Drawing::Size(364, 48);
            this->txtStudentID->TabIndex = 2;
            this->txtStudentID->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(9, 171);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(200, 40);
            this->label29->TabIndex = 1;
            this->label29->Text = L"Last Name";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtDOB
            // 
            this->txtDOB->AccessibleName = L"txtScore1";
            this->txtDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDOB->Location = System::Drawing::Point(238, 358);
            this->txtDOB->Name = L"txtDOB";
            this->txtDOB->Size = System::Drawing::Size(364, 48);
            this->txtDOB->TabIndex = 2;
            // 
            // txtMobile
            // 
            this->txtMobile->AccessibleName = L"txtScore1";
            this->txtMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtMobile->Location = System::Drawing::Point(238, 426);
            this->txtMobile->Name = L"txtMobile";
            this->txtMobile->Size = System::Drawing::Size(364, 48);
            this->txtMobile->TabIndex = 2;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(10, 431);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(199, 40);
            this->label32->TabIndex = 1;
            this->label32->Text = L"Mobile No.";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtLastName
            // 
            this->txtLastName->AccessibleName = L"txtLastName";
            this->txtLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtLastName->Location = System::Drawing::Point(238, 166);
            this->txtLastName->Name = L"txtLastName";
            this->txtLastName->Size = System::Drawing::Size(364, 48);
            this->txtLastName->TabIndex = 2;
            // 
            // txtEmail
            // 
            this->txtEmail->AccessibleName = L"txtScore1";
            this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtEmail->Location = System::Drawing::Point(238, 491);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(364, 48);
            this->txtEmail->TabIndex = 2;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(9, 300);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(143, 40);
            this->label28->TabIndex = 1;
            this->label28->Text = L"Gender";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtAddress
            // 
            this->txtAddress->AccessibleName = L"txtScore1";
            this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtAddress->Location = System::Drawing::Point(238, 229);
            this->txtAddress->Name = L"txtAddress";
            this->txtAddress->Size = System::Drawing::Size(364, 48);
            this->txtAddress->TabIndex = 2;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(9, 34);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(196, 40);
            this->label27->TabIndex = 1;
            this->label27->Text = L"Student ID";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label27->Click += gcnew System::EventHandler(this, &MyForm::label27_Click);
            // 
            // cboGender
            // 
            this->cboGender->AccessibleName = L"cboModule1";
            this->cboGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboGender->FormattingEnabled = true;
            this->cboGender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Female", L"Male", L"Other" });
            this->cboGender->Location = System::Drawing::Point(238, 294);
            this->cboGender->Name = L"cboGender";
            this->cboGender->Size = System::Drawing::Size(364, 48);
            this->cboGender->TabIndex = 3;
            this->cboGender->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->dataGridView1);
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Size = System::Drawing::Size(1916, 1016);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Student Database";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(12, 12);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->Size = System::Drawing::Size(1892, 988);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1924, 1049);
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
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBacklogs))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSiblings))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

        private: System::Void studentUpload(){
            sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" +
                password + ";" + "database=" + database;
            
            sqlConn->Open();
            sqlCmd->Connection = sqlConn;
            sqlCmd->CommandText = "select * from studentdb";

            sqlRd = sqlCmd->ExecuteReader();
            sqlDt->Load(sqlRd);
            sqlRd->Close();
            sqlConn->Close();
            dataGridView1->DataSource = sqlDt;
        }

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

    studentUpload();
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
    if (cboCourse->Text == "<None>")
    {
        txtCourseID->Text = "<None>";
        txtFaculty->Text = "<None>";
        txtDeanOfFaculty->Text = "<None>";
        txtCourseMentor->Text = "<None>";
        cboCourseMedium->Text = "N.A.";
        cboDifficultyLevel->Text = "N.A.";
    }
    else if (cboCourse->Text == "BCA ( Bachelor of Computer Applications )")
    {
        txtCourseID->Text = "BCA079870";
        txtFaculty->Text = "School of Computer Applications";
        txtDeanOfFaculty->Text = "Prof. Ajay Thakur";
        txtCourseMentor->Text = "Dr. Aman Tripathi";
    }
    else if (cboCourse->Text == "B.Sc. in Information Technology")
    {
        txtCourseID->Text = "BSc054062";
        txtFaculty->Text = "School of Information Technologies";
        txtDeanOfFaculty->Text = "Prof. Srikant Dwidedi";
        txtCourseMentor->Text = "Dr. Sarita Pathak";
    }
    else if (cboCourse->Text == "B.Tech. Computer Science and Engg.")
    {
        txtCourseID->Text = "BTech043125";
        txtFaculty->Text = "School of Computer Science Engineering";
        txtDeanOfFaculty->Text = "Prof. Rajesh Sarmal";
        txtCourseMentor->Text = "Dr. Hina Seth";
    }
    else if (cboCourse->Text == "B.Tech. Computer Engg and Communications")
    {
        txtCourseID->Text = "BTech043126";
        txtFaculty->Text = "School of Computer Engineering";
        txtDeanOfFaculty->Text = "Prof. Sunita Sharma";
        txtCourseMentor->Text = "Dr. Akshay Dhar";
    }
    
    
}

private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnAddNew_Click(System::Object^ sender, System::EventArgs^ e) {
    
    sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" +
        password + ";" + "database=" + database;
    try
    {
        sqlConn->Open();
        sqlQuery = "insert into studentdb (StudentID, FirstName, LastName, Address, Gender, DOB, Mobile, Email, Course, " +
            "CourseID, CourseMedium, DifficultyLevel, DayScholar, OtherState, Overseas, Hosteller, Scholarship, Income, " +
            "Siblings, Backlogs, 10thBoard, 12thBoard, Module1, Module2, Module3, Module4, Module5, Module6, Module7, Module8, " +
            "Score1, Score2, Score3, Score4, Score5, Score6, Score7, Score8, TotalScore, Percentage, Date)" +
            "values ('" + txtStudentID->Text + " ',' " + txtFirstName->Text + " ',' " + txtLastName->Text + " ',' " +
            txtAddress->Text + " ',' " + cboGender->Text + " ',' " + txtDOB->Text + " ',' " + txtMobile->Text + " ',' " +
            txtEmail->Text + " ',' " + cboCourse->Text + " ',' " + txtCourseID->Text + " ',' " + cboCourseMedium->Text + " ',' " +
            cboDifficultyLevel->Text + " ',' " + cboDayScholar->Text + " ',' " + cboOtherState->Text + " ',' " +
            cboOverseas->Text + " ',' " + cboHosteller->Text + " ',' " + cboScholarship->Text + " ',' " + txtIncome->Text + " ',' " +
            nudSiblings->Text + " ',' " + nudBacklogs->Text + " ',' " + txtBoard1->Text + " ',' " + txtBoard2->Text + " ',' " +
            cboModule1->Text + " ',' " + cboModule2->Text + " ',' " + cboModule3->Text + " ',' " + cboModule4->Text + " ',' " +
            cboModule5->Text + " ',' " + cboModule6->Text + " ',' " + cboModule7->Text + " ',' " + cboModule8->Text + " ',' " +
            txtScore1->Text + " ',' " + txtScore2->Text + " ',' " + txtScore3->Text + " ',' " + txtScore4->Text + " ',' " +
            txtScore5->Text + " ',' " + txtScore6->Text + " ',' " + txtScore7->Text + " ',' " + txtScore8->Text + " ',' " +
            lblTotal->Text + " ',' " + lblPercentage->Text + " ',' " + lblDate + "');";
        sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
        sqlRd = sqlCmd->ExecuteReader();
        sqlConn->Close();


    }

    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
    finally
    {
        sqlConn->Close();
    }
    MessageBox::Show("Student Management System Updated ");
    studentUpload();
     }

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult iExit;
    iExit = MessageBox::Show("Confirm if you want to exit", "Student Management System",
        MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (iExit == System::Windows::Forms::DialogResult::Yes)
    {
        Application::Exit();
    }
}


};
}
