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
		System::ComponentModel::Container^ components;

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
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 18);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1283, 682);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tabControl1->TabIndex = 0;
			this->tabControl1->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
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
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabPage1->Size = System::Drawing::Size(1275, 656);
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
			this->panel1->Location = System::Drawing::Point(15, 396);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(410, 250);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(6, 129);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(145, 29);
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
			this->txtMobile1->Location = System::Drawing::Point(163, 166);
			this->txtMobile1->Margin = System::Windows::Forms::Padding(2);
			this->txtMobile1->Name = L"txtMobile1";
			this->txtMobile1->Size = System::Drawing::Size(240, 35);
			this->txtMobile1->TabIndex = 2;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(6, 54);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(141, 29);
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
			this->label39->Location = System::Drawing::Point(6, 204);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(109, 29);
			this->label39->TabIndex = 1;
			this->label39->Text = L"Address";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(6, 167);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(141, 29);
			this->label36->TabIndex = 1;
			this->label36->Text = L"Mobile No.";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtAddress1
			// 
			this->txtAddress1->AccessibleName = L"txtScore1";
			this->txtAddress1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress1->Location = System::Drawing::Point(163, 204);
			this->txtAddress1->Margin = System::Windows::Forms::Padding(2);
			this->txtAddress1->Name = L"txtAddress1";
			this->txtAddress1->Size = System::Drawing::Size(240, 35);
			this->txtAddress1->TabIndex = 2;
			// 
			// txtFirstName1
			// 
			this->txtFirstName1->AccessibleName = L"txtScore1";
			this->txtFirstName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName1->Location = System::Drawing::Point(163, 52);
			this->txtFirstName1->Margin = System::Windows::Forms::Padding(2);
			this->txtFirstName1->Name = L"txtFirstName1";
			this->txtFirstName1->Size = System::Drawing::Size(240, 35);
			this->txtFirstName1->TabIndex = 2;
			// 
			// txtOccupation
			// 
			this->txtOccupation->AccessibleName = L"txtScore1";
			this->txtOccupation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOccupation->Location = System::Drawing::Point(163, 128);
			this->txtOccupation->Margin = System::Windows::Forms::Padding(2);
			this->txtOccupation->Name = L"txtOccupation";
			this->txtOccupation->Size = System::Drawing::Size(240, 35);
			this->txtOccupation->TabIndex = 2;
			// 
			// txtLastName1
			// 
			this->txtLastName1->AccessibleName = L"txtScore1";
			this->txtLastName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastName1->Location = System::Drawing::Point(163, 90);
			this->txtLastName1->Margin = System::Windows::Forms::Padding(2);
			this->txtLastName1->Name = L"txtLastName1";
			this->txtLastName1->Size = System::Drawing::Size(240, 35);
			this->txtLastName1->TabIndex = 2;
			// 
			// txtGuardian
			// 
			this->txtGuardian->AccessibleName = L"txtScore1";
			this->txtGuardian->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGuardian->Location = System::Drawing::Point(163, 14);
			this->txtGuardian->Margin = System::Windows::Forms::Padding(2);
			this->txtGuardian->Name = L"txtGuardian";
			this->txtGuardian->Size = System::Drawing::Size(240, 35);
			this->txtGuardian->TabIndex = 2;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(6, 18);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(119, 29);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Guardian";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(6, 92);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(137, 29);
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
			this->panel7->Location = System::Drawing::Point(438, 546);
			this->panel7->Margin = System::Windows::Forms::Padding(2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(565, 100);
			this->panel7->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(421, 23);
			this->btnExit->Margin = System::Windows::Forms::Padding(2);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(100, 49);
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
			this->btnResult->Location = System::Drawing::Point(296, 23);
			this->btnResult->Margin = System::Windows::Forms::Padding(2);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(100, 49);
			this->btnResult->TabIndex = 0;
			this->btnResult->Text = L"Result";
			this->btnResult->UseVisualStyleBackColor = true;
			// 
			// btnReset
			// 
			this->btnReset->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(170, 23);
			this->btnReset->Margin = System::Windows::Forms::Padding(2);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 49);
			this->btnReset->TabIndex = 0;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			// 
			// btnAddNew
			// 
			this->btnAddNew->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnAddNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddNew->Location = System::Drawing::Point(44, 23);
			this->btnAddNew->Margin = System::Windows::Forms::Padding(2);
			this->btnAddNew->Name = L"btnAddNew";
			this->btnAddNew->Size = System::Drawing::Size(100, 49);
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
			this->panel6->Location = System::Drawing::Point(746, 317);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(257, 214);
			this->panel6->TabIndex = 0;
			// 
			// nudBacklogs
			// 
			this->nudBacklogs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudBacklogs->Location = System::Drawing::Point(171, 83);
			this->nudBacklogs->Margin = System::Windows::Forms::Padding(2);
			this->nudBacklogs->Name = L"nudBacklogs";
			this->nudBacklogs->Size = System::Drawing::Size(73, 35);
			this->nudBacklogs->TabIndex = 2;
			this->nudBacklogs->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// nudSiblings
			// 
			this->nudSiblings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudSiblings->Location = System::Drawing::Point(171, 46);
			this->nudSiblings->Margin = System::Windows::Forms::Padding(2);
			this->nudSiblings->Name = L"nudSiblings";
			this->nudSiblings->Size = System::Drawing::Size(73, 35);
			this->nudSiblings->TabIndex = 2;
			this->nudSiblings->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(13, 122);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(139, 29);
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
			this->label15->Location = System::Drawing::Point(13, 86);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 29);
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
			this->label17->Location = System::Drawing::Point(13, 47);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(108, 29);
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
			this->label20->Location = System::Drawing::Point(13, 158);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(139, 29);
			this->label20->TabIndex = 1;
			this->label20->Text = L"12th Board";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(13, 12);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(98, 29);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Income";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtIncome
			// 
			this->txtIncome->AccessibleName = L"txtScore1";
			this->txtIncome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIncome->Location = System::Drawing::Point(171, 7);
			this->txtIncome->Margin = System::Windows::Forms::Padding(2);
			this->txtIncome->Name = L"txtIncome";
			this->txtIncome->Size = System::Drawing::Size(74, 35);
			this->txtIncome->TabIndex = 2;
			this->txtIncome->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoard2
			// 
			this->txtBoard2->AccessibleName = L"txtScore1";
			this->txtBoard2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoard2->Location = System::Drawing::Point(171, 157);
			this->txtBoard2->Margin = System::Windows::Forms::Padding(2);
			this->txtBoard2->Name = L"txtBoard2";
			this->txtBoard2->Size = System::Drawing::Size(74, 35);
			this->txtBoard2->TabIndex = 2;
			this->txtBoard2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoard1
			// 
			this->txtBoard1->AccessibleName = L"txtScore1";
			this->txtBoard1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoard1->Location = System::Drawing::Point(171, 120);
			this->txtBoard1->Margin = System::Windows::Forms::Padding(2);
			this->txtBoard1->Name = L"txtBoard1";
			this->txtBoard1->Size = System::Drawing::Size(74, 35);
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
			this->panel4->Location = System::Drawing::Point(438, 317);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(304, 214);
			this->panel4->TabIndex = 0;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(13, 122);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(119, 29);
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
			this->label12->Location = System::Drawing::Point(13, 47);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 29);
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
			this->cboScholarship->Location = System::Drawing::Point(180, 160);
			this->cboScholarship->Margin = System::Windows::Forms::Padding(2);
			this->cboScholarship->Name = L"cboScholarship";
			this->cboScholarship->Size = System::Drawing::Size(111, 37);
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
			this->cboHosteller->Location = System::Drawing::Point(180, 124);
			this->cboHosteller->Margin = System::Windows::Forms::Padding(2);
			this->cboHosteller->Name = L"cboHosteller";
			this->cboHosteller->Size = System::Drawing::Size(111, 37);
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
			this->cboOverseas->Location = System::Drawing::Point(180, 86);
			this->cboOverseas->Margin = System::Windows::Forms::Padding(2);
			this->cboOverseas->Name = L"cboOverseas";
			this->cboOverseas->Size = System::Drawing::Size(111, 37);
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
			this->cboDayScholar->Location = System::Drawing::Point(180, 12);
			this->cboDayScholar->Margin = System::Windows::Forms::Padding(2);
			this->cboDayScholar->Name = L"cboDayScholar";
			this->cboDayScholar->Size = System::Drawing::Size(111, 37);
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
			this->cboOtherState->Location = System::Drawing::Point(180, 49);
			this->cboOtherState->Margin = System::Windows::Forms::Padding(2);
			this->cboOtherState->Name = L"cboOtherState";
			this->cboOtherState->Size = System::Drawing::Size(111, 37);
			this->cboOtherState->TabIndex = 3;
			this->cboOtherState->Text = L"Choose";
			this->cboOtherState->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(13, 160);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(151, 29);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Scholarship";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(13, 12);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 29);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Day Scholar";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(13, 84);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(124, 29);
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
			this->panel5->Location = System::Drawing::Point(1015, 14);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(258, 632);
			this->panel5->TabIndex = 0;
			// 
			// cboModule6
			// 
			this->cboModule6->AccessibleName = L"cboModule1";
			this->cboModule6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule6->FormattingEnabled = true;
			this->cboModule6->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"Object Oriented Design", L"Software Testing",
					L"Procedural Programming"
			});
			this->cboModule6->Location = System::Drawing::Point(49, 410);
			this->cboModule6->Margin = System::Windows::Forms::Padding(2);
			this->cboModule6->Name = L"cboModule6";
			this->cboModule6->Size = System::Drawing::Size(139, 37);
			this->cboModule6->TabIndex = 3;
			this->cboModule6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule6_SelectedIndexChanged);
			// 
			// cboModule8
			// 
			this->cboModule8->AccessibleName = L"cboModule1";
			this->cboModule8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule8->FormattingEnabled = true;
			this->cboModule8->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Computer gaming", L"Animation", L"Graphics designing" });
			this->cboModule8->Location = System::Drawing::Point(49, 494);
			this->cboModule8->Margin = System::Windows::Forms::Padding(2);
			this->cboModule8->Name = L"cboModule8";
			this->cboModule8->Size = System::Drawing::Size(139, 37);
			this->cboModule8->TabIndex = 3;
			this->cboModule8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule8_SelectedIndexChanged);
			// 
			// cboModule3
			// 
			this->cboModule3->AccessibleName = L"cboModule1";
			this->cboModule3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule3->FormattingEnabled = true;
			this->cboModule3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"", L"System Analysis and Design", L"Information Technology",
					L"Network Management"
			});
			this->cboModule3->Location = System::Drawing::Point(49, 281);
			this->cboModule3->Margin = System::Windows::Forms::Padding(2);
			this->cboModule3->Name = L"cboModule3";
			this->cboModule3->Size = System::Drawing::Size(139, 37);
			this->cboModule3->TabIndex = 3;
			this->cboModule3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule3_SelectedIndexChanged);
			// 
			// cboModule5
			// 
			this->cboModule5->AccessibleName = L"cboModule1";
			this->cboModule5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule5->FormattingEnabled = true;
			this->cboModule5->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"JavaScript", L"Website Development", L"PHP Programming" });
			this->cboModule5->Location = System::Drawing::Point(49, 367);
			this->cboModule5->Margin = System::Windows::Forms::Padding(2);
			this->cboModule5->Name = L"cboModule5";
			this->cboModule5->Size = System::Drawing::Size(139, 37);
			this->cboModule5->TabIndex = 3;
			this->cboModule5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule5_SelectedIndexChanged);
			// 
			// cboModule7
			// 
			this->cboModule7->AccessibleName = L"cboModule1";
			this->cboModule7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule7->FormattingEnabled = true;
			this->cboModule7->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Cyber Security", L"Raspberry Pi", L"MATLAB" });
			this->cboModule7->Location = System::Drawing::Point(49, 452);
			this->cboModule7->Margin = System::Windows::Forms::Padding(2);
			this->cboModule7->Name = L"cboModule7";
			this->cboModule7->Size = System::Drawing::Size(139, 37);
			this->cboModule7->TabIndex = 3;
			this->cboModule7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule7_SelectedIndexChanged);
			// 
			// cboModule2
			// 
			this->cboModule2->AccessibleName = L"cboModule1";
			this->cboModule2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule2->FormattingEnabled = true;
			this->cboModule2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Excel Spreadsheet", L"Database", L"SQL" });
			this->cboModule2->Location = System::Drawing::Point(49, 239);
			this->cboModule2->Margin = System::Windows::Forms::Padding(2);
			this->cboModule2->Name = L"cboModule2";
			this->cboModule2->Size = System::Drawing::Size(139, 37);
			this->cboModule2->TabIndex = 3;
			this->cboModule2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule2_SelectedIndexChanged);
			// 
			// txtScore8
			// 
			this->txtScore8->AccessibleName = L"txtScore1";
			this->txtScore8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore8->Location = System::Drawing::Point(195, 494);
			this->txtScore8->Margin = System::Windows::Forms::Padding(2);
			this->txtScore8->Name = L"txtScore8";
			this->txtScore8->Size = System::Drawing::Size(54, 35);
			this->txtScore8->TabIndex = 2;
			this->txtScore8->Text = L"0";
			this->txtScore8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore8->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// txtScore6
			// 
			this->txtScore6->AccessibleName = L"txtScore1";
			this->txtScore6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore6->Location = System::Drawing::Point(195, 410);
			this->txtScore6->Margin = System::Windows::Forms::Padding(2);
			this->txtScore6->Name = L"txtScore6";
			this->txtScore6->Size = System::Drawing::Size(54, 35);
			this->txtScore6->TabIndex = 2;
			this->txtScore6->Text = L"0";
			this->txtScore6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore6->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// txtScore3
			// 
			this->txtScore3->AccessibleName = L"txtScore1";
			this->txtScore3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore3->Location = System::Drawing::Point(195, 281);
			this->txtScore3->Margin = System::Windows::Forms::Padding(2);
			this->txtScore3->Name = L"txtScore3";
			this->txtScore3->Size = System::Drawing::Size(54, 35);
			this->txtScore3->TabIndex = 2;
			this->txtScore3->Text = L"0";
			this->txtScore3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore3->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// txtScore5
			// 
			this->txtScore5->AccessibleName = L"txtScore1";
			this->txtScore5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore5->Location = System::Drawing::Point(195, 367);
			this->txtScore5->Margin = System::Windows::Forms::Padding(2);
			this->txtScore5->Name = L"txtScore5";
			this->txtScore5->Size = System::Drawing::Size(54, 35);
			this->txtScore5->TabIndex = 2;
			this->txtScore5->Text = L"0";
			this->txtScore5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore5->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// txtScore7
			// 
			this->txtScore7->AccessibleName = L"txtScore1";
			this->txtScore7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore7->Location = System::Drawing::Point(195, 452);
			this->txtScore7->Margin = System::Windows::Forms::Padding(2);
			this->txtScore7->Name = L"txtScore7";
			this->txtScore7->Size = System::Drawing::Size(54, 35);
			this->txtScore7->TabIndex = 2;
			this->txtScore7->Text = L"0";
			this->txtScore7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore7->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModule4
			// 
			this->cboModule4->AccessibleName = L"cboModule1";
			this->cboModule4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModule4->FormattingEnabled = true;
			this->cboModule4->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"", L"Machine Learning", L"Artificial Intelligence",
					L"Data Science", L"Satistics"
			});
			this->cboModule4->Location = System::Drawing::Point(49, 324);
			this->cboModule4->Margin = System::Windows::Forms::Padding(2);
			this->cboModule4->Name = L"cboModule4";
			this->cboModule4->Size = System::Drawing::Size(139, 37);
			this->cboModule4->TabIndex = 3;
			this->cboModule4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule4_SelectedIndexChanged);
			// 
			// txtScore2
			// 
			this->txtScore2->AccessibleName = L"txtScore1";
			this->txtScore2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore2->Location = System::Drawing::Point(195, 239);
			this->txtScore2->Margin = System::Windows::Forms::Padding(2);
			this->txtScore2->Name = L"txtScore2";
			this->txtScore2->Size = System::Drawing::Size(54, 35);
			this->txtScore2->TabIndex = 2;
			this->txtScore2->Text = L"0";
			this->txtScore2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore2->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// txtScore4
			// 
			this->txtScore4->AccessibleName = L"txtScore1";
			this->txtScore4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore4->Location = System::Drawing::Point(195, 324);
			this->txtScore4->Margin = System::Windows::Forms::Padding(2);
			this->txtScore4->Name = L"txtScore4";
			this->txtScore4->Size = System::Drawing::Size(54, 35);
			this->txtScore4->TabIndex = 2;
			this->txtScore4->Text = L"0";
			this->txtScore4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore4->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
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
			this->cboModule1->Location = System::Drawing::Point(49, 195);
			this->cboModule1->Margin = System::Windows::Forms::Padding(2);
			this->cboModule1->Name = L"cboModule1";
			this->cboModule1->Size = System::Drawing::Size(139, 37);
			this->cboModule1->TabIndex = 3;
			this->cboModule1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// txtScore1
			// 
			this->txtScore1->AccessibleName = L"txtScore1";
			this->txtScore1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore1->Location = System::Drawing::Point(195, 195);
			this->txtScore1->Margin = System::Windows::Forms::Padding(2);
			this->txtScore1->Name = L"txtScore1";
			this->txtScore1->Size = System::Drawing::Size(54, 35);
			this->txtScore1->TabIndex = 2;
			this->txtScore1->Text = L"0";
			this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore1->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// lblDate
			// 
			this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(92, 596);
			this->lblDate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(158, 29);
			this->lblDate->TabIndex = 1;
			this->lblDate->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(14, 598);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 29);
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
			this->label8->Location = System::Drawing::Point(9, 496);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 31);
			this->label8->TabIndex = 1;
			this->label8->Text = L"8";
			// 
			// lblTotal
			// 
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(92, 536);
			this->lblTotal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(158, 29);
			this->lblTotal->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(8, 536);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 29);
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
			this->label7->Location = System::Drawing::Point(9, 412);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 31);
			this->label7->TabIndex = 1;
			this->label7->Text = L"6";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 326);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 31);
			this->label4->TabIndex = 1;
			this->label4->Text = L"4";
			// 
			// lblPercentage
			// 
			this->lblPercentage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblPercentage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPercentage->Location = System::Drawing::Point(92, 567);
			this->lblPercentage->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPercentage->Name = L"lblPercentage";
			this->lblPercentage->Size = System::Drawing::Size(158, 27);
			this->lblPercentage->TabIndex = 1;
			this->lblPercentage->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(8, 565);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 29);
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
			this->label6->Location = System::Drawing::Point(9, 454);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 31);
			this->label6->TabIndex = 1;
			this->label6->Text = L"7";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 241);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 370);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 31);
			this->label5->TabIndex = 1;
			this->label5->Text = L"5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 283);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 31);
			this->label3->TabIndex = 1;
			this->label3->Text = L"3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 197);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->monthCalendar1);
			this->panel8->Location = System::Drawing::Point(2, 10);
			this->panel8->Margin = System::Windows::Forms::Padding(2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(252, 172);
			this->panel8->TabIndex = 0;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->monthCalendar1->Location = System::Drawing::Point(2, 3);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(6);
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
			this->panel3->Location = System::Drawing::Point(438, 14);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(565, 291);
			this->panel3->TabIndex = 0;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(13, 125);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(198, 29);
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
			this->label25->Location = System::Drawing::Point(13, 51);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(129, 29);
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
			this->label22->Location = System::Drawing::Point(13, 87);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(96, 29);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Faculty";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(13, 237);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(182, 29);
			this->label42->TabIndex = 1;
			this->label42->Text = L"Difficulty Level";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(13, 199);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(197, 29);
			this->label40->TabIndex = 1;
			this->label40->Text = L"Course Medium";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(13, 161);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(185, 29);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Course Mentor";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(13, 16);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(97, 29);
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
			this->cboDifficultyLevel->Location = System::Drawing::Point(215, 235);
			this->cboDifficultyLevel->Margin = System::Windows::Forms::Padding(2);
			this->cboDifficultyLevel->Name = L"cboDifficultyLevel";
			this->cboDifficultyLevel->Size = System::Drawing::Size(337, 37);
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
			this->cboCourseMedium->Location = System::Drawing::Point(215, 197);
			this->cboCourseMedium->Margin = System::Windows::Forms::Padding(2);
			this->cboCourseMedium->Name = L"cboCourseMedium";
			this->cboCourseMedium->Size = System::Drawing::Size(337, 37);
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
			this->cboCourse->Location = System::Drawing::Point(215, 10);
			this->cboCourse->Margin = System::Windows::Forms::Padding(2);
			this->cboCourse->Name = L"cboCourse";
			this->cboCourse->Size = System::Drawing::Size(337, 37);
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
			this->txtCourseMentor->Location = System::Drawing::Point(215, 159);
			this->txtCourseMentor->Margin = System::Windows::Forms::Padding(2);
			this->txtCourseMentor->Name = L"txtCourseMentor";
			this->txtCourseMentor->Size = System::Drawing::Size(337, 35);
			this->txtCourseMentor->TabIndex = 2;
			// 
			// txtDeanOfFaculty
			// 
			this->txtDeanOfFaculty->AccessibleName = L"txtScore1";
			this->txtDeanOfFaculty->Enabled = false;
			this->txtDeanOfFaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDeanOfFaculty->Location = System::Drawing::Point(215, 122);
			this->txtDeanOfFaculty->Margin = System::Windows::Forms::Padding(2);
			this->txtDeanOfFaculty->Name = L"txtDeanOfFaculty";
			this->txtDeanOfFaculty->Size = System::Drawing::Size(337, 35);
			this->txtDeanOfFaculty->TabIndex = 2;
			// 
			// txtFaculty
			// 
			this->txtFaculty->AccessibleName = L"txtScore1";
			this->txtFaculty->Enabled = false;
			this->txtFaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFaculty->Location = System::Drawing::Point(215, 84);
			this->txtFaculty->Margin = System::Windows::Forms::Padding(2);
			this->txtFaculty->Name = L"txtFaculty";
			this->txtFaculty->Size = System::Drawing::Size(337, 35);
			this->txtFaculty->TabIndex = 2;
			// 
			// txtCourseID
			// 
			this->txtCourseID->AccessibleName = L"txtScore1";
			this->txtCourseID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCourseID->Enabled = false;
			this->txtCourseID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCourseID->Location = System::Drawing::Point(215, 47);
			this->txtCourseID->Margin = System::Windows::Forms::Padding(2);
			this->txtCourseID->Name = L"txtCourseID";
			this->txtCourseID->Size = System::Drawing::Size(337, 35);
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
			this->panel2->Location = System::Drawing::Point(15, 14);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(410, 369);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(7, 323);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(111, 29);
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
			this->label33->Location = System::Drawing::Point(7, 236);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(89, 29);
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
			this->label31->Location = System::Drawing::Point(6, 153);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(109, 29);
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
			this->label30->Location = System::Drawing::Point(6, 64);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(141, 29);
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
			this->txtFirstName->Location = System::Drawing::Point(159, 64);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(2);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(244, 35);
			this->txtFirstName->TabIndex = 2;
			this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// txtStudentID
			// 
			this->txtStudentID->AccessibleName = L"txtStudentID";
			this->txtStudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStudentID->Location = System::Drawing::Point(159, 22);
			this->txtStudentID->Margin = System::Windows::Forms::Padding(2);
			this->txtStudentID->Name = L"txtStudentID";
			this->txtStudentID->Size = System::Drawing::Size(244, 35);
			this->txtStudentID->TabIndex = 2;
			this->txtStudentID->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(6, 111);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(137, 29);
			this->label29->TabIndex = 1;
			this->label29->Text = L"Last Name";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtDOB
			// 
			this->txtDOB->AccessibleName = L"txtScore1";
			this->txtDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDOB->Location = System::Drawing::Point(159, 233);
			this->txtDOB->Margin = System::Windows::Forms::Padding(2);
			this->txtDOB->Name = L"txtDOB";
			this->txtDOB->Size = System::Drawing::Size(244, 35);
			this->txtDOB->TabIndex = 2;
			// 
			// txtMobile
			// 
			this->txtMobile->AccessibleName = L"txtScore1";
			this->txtMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMobile->Location = System::Drawing::Point(159, 277);
			this->txtMobile->Margin = System::Windows::Forms::Padding(2);
			this->txtMobile->Name = L"txtMobile";
			this->txtMobile->Size = System::Drawing::Size(244, 35);
			this->txtMobile->TabIndex = 2;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(7, 280);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(141, 29);
			this->label32->TabIndex = 1;
			this->label32->Text = L"Mobile No.";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtLastName
			// 
			this->txtLastName->AccessibleName = L"txtLastName";
			this->txtLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastName->Location = System::Drawing::Point(159, 108);
			this->txtLastName->Margin = System::Windows::Forms::Padding(2);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(244, 35);
			this->txtLastName->TabIndex = 2;
			// 
			// txtEmail
			// 
			this->txtEmail->AccessibleName = L"txtScore1";
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(159, 319);
			this->txtEmail->Margin = System::Windows::Forms::Padding(2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(244, 35);
			this->txtEmail->TabIndex = 2;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(6, 195);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(100, 29);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Gender";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtAddress
			// 
			this->txtAddress->AccessibleName = L"txtScore1";
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->Location = System::Drawing::Point(159, 149);
			this->txtAddress->Margin = System::Windows::Forms::Padding(2);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(244, 35);
			this->txtAddress->TabIndex = 2;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(6, 22);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(134, 29);
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
			this->cboGender->Location = System::Drawing::Point(159, 191);
			this->cboGender->Margin = System::Windows::Forms::Padding(2);
			this->cboGender->Name = L"cboGender";
			this->cboGender->Size = System::Drawing::Size(244, 37);
			this->cboGender->TabIndex = 3;
			this->cboGender->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1275, 656);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Student Database";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 8);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(1261, 642);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1283, 682);
			this->Controls->Add(this->tabControl1);
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

	private: System::Void studentUpload() {
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


	private: System::Void cboModule1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule1->Text == "")
		{
			txtScore1->Text = "0";
			txtScore1->Enabled = false;
		}
		else
		{
			txtScore1->Enabled = true;
			txtScore1->Text = " ";
			txtScore1->Focus();

		}
	}
	private: System::Void cboModule2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule2->Text == "")
		{
			txtScore2->Text = "0";
			txtScore2->Enabled = false;
		}
		else
		{
			txtScore2->Enabled = true;
			txtScore2->Text = "";
			txtScore2->Focus();

		}
	}
	private: System::Void cboModule3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule3->Text == "")
		{
			txtScore3->Text = "0";
			txtScore3->Enabled = false;
		}
		else
		{
			txtScore3->Enabled = true;
			txtScore3->Text = "";
			txtScore3->Focus();

		}
	}
	private: System::Void cboModule4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule4->Text == "")
		{
			txtScore4->Text = "0";
			txtScore4->Enabled = false;
		}
		else
		{
			txtScore4->Enabled = true;
			txtScore4->Text = "";
			txtScore4->Focus();

		}
	}
	private: System::Void cboModule5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule5->Text == "")
		{
			txtScore5->Text = "0";
			txtScore5->Enabled = false;
		}
		else
		{
			txtScore5->Enabled = true;
			txtScore5->Text = "";
			txtScore5->Focus();

		}
	}
	private: System::Void cboModule6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule6->Text == "")
		{
			txtScore6->Text = "0";
			txtScore6->Enabled = false;
		}
		else
		{
			txtScore6->Enabled = true;
			txtScore6->Text = "";
			txtScore6->Focus();

		}
	}
	private: System::Void cboModule7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule7->Text == "")
		{
			txtScore7->Text = "0";
			txtScore7->Enabled = false;
		}
		else
		{
			txtScore7->Enabled = true;
			txtScore7->Text = "";
			txtScore7->Focus();

		}
	}
	private: System::Void cboModule8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboModule8->Text == "")
		{
			txtScore8->Text = "0";
			txtScore8->Enabled = false;
		}
		else
		{
			txtScore8->Enabled = true;
			txtScore8->Text = "";
			txtScore8->Focus();

		}
	}
	private: System::Void MLeaves(System::Object^ sender, System::EventArgs^ e) {
		TextBox^ c = safe_cast<TextBox^>(sender);
		if (c->Text == "") {
			c->Text = "0";
		}
	}
	};
}
