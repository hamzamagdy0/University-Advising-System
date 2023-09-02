#pragma once
bool CheckCourseClash(System::String^ course, System::String^ day, System::String^ time);
#include <fstream>
#include <string>
#include <Windows.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <sstream>
#include <vector>

namespace guifinal {
	using namespace msclr::interop;
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
	private: System::Windows::Forms::Panel^ head;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ main_menu;
	private: System::Windows::Forms::Panel^ admin_login;
	private: System::Windows::Forms::Panel^ student_login;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_admin_pass;

	private: System::Windows::Forms::TextBox^ textBox_admin_name;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Login_button;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_student_name;
	private: System::Windows::Forms::TextBox^ textBox_student_id;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ admin;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox_year;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ year1s1;


	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ year2s1;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ year3s1;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Panel^ year4s1;









	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;


private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::ComboBox^ comboBox13;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::ComboBox^ comboBox14;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ comboBox15;
private: System::Windows::Forms::ComboBox^ comboBox16;
private: System::Windows::Forms::ComboBox^ comboBox17;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Panel^ year3s2;

private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::ComboBox^ comboBox10;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::ComboBox^ comboBox11;
private: System::Windows::Forms::ComboBox^ comboBox12;
private: System::Windows::Forms::ComboBox^ comboBox18;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Panel^ year4s2;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::ComboBox^ comboBox19;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::ComboBox^ comboBox20;
private: System::Windows::Forms::ComboBox^ comboBox21;
private: System::Windows::Forms::ComboBox^ comboBox22;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Panel^ year1s2;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::ComboBox^ comboBox23;
private: System::Windows::Forms::ComboBox^ comboBox24;
private: System::Windows::Forms::ComboBox^ comboBox25;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Panel^ year2s2;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::ComboBox^ comboBox26;
private: System::Windows::Forms::ComboBox^ comboBox27;
private: System::Windows::Forms::ComboBox^ comboBox28;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::ComboBox^ comboBox_sem;

private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Panel^ StudentOptions;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button37;

private: System::Windows::Forms::Button^ button39;

private: System::Windows::Forms::Panel^ StudentViewData;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::ComboBox^ comboBox29;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Panel^ StudentViewSchedule;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Label^ label_schedule;


























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->main_menu = (gcnew System::Windows::Forms::Panel());
			this->admin_login = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_admin_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_admin_pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Login_button = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->student_login = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->comboBox29 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_student_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_student_id = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->admin = (gcnew System::Windows::Forms::Panel());
			this->comboBox_sem = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox_year = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->year1s1 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->year2s1 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->year3s1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->year4s1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->year3s2 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->year4s2 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->year1s2 = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->comboBox23 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox25 = (gcnew System::Windows::Forms::ComboBox());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->year2s2 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->comboBox26 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox27 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox28 = (gcnew System::Windows::Forms::ComboBox());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->StudentOptions = (gcnew System::Windows::Forms::Panel());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->StudentViewData = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->StudentViewSchedule = (gcnew System::Windows::Forms::Panel());
			this->label_schedule = (gcnew System::Windows::Forms::Label());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->head->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->main_menu->SuspendLayout();
			this->admin_login->SuspendLayout();
			this->student_login->SuspendLayout();
			this->panel1->SuspendLayout();
			this->admin->SuspendLayout();
			this->year1s1->SuspendLayout();
			this->year2s1->SuspendLayout();
			this->year3s1->SuspendLayout();
			this->year4s1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->year3s2->SuspendLayout();
			this->year4s2->SuspendLayout();
			this->year1s2->SuspendLayout();
			this->year2s2->SuspendLayout();
			this->StudentOptions->SuspendLayout();
			this->StudentViewData->SuspendLayout();
			this->StudentViewSchedule->SuspendLayout();
			this->SuspendLayout();
			// 
			// head
			// 
			this->head->BackColor = System::Drawing::Color::Transparent;
			this->head->Controls->Add(this->label1);
			this->head->Controls->Add(this->pictureBox1);
			this->head->Dock = System::Windows::Forms::DockStyle::Top;
			this->head->Location = System::Drawing::Point(0, 0);
			this->head->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(613, 70);
			this->head->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 20);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(427, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Computer Science Academic Advising Center";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(399, 4);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(212, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(377, 228);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 82);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Student";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(99, 228);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 82);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Admin";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(249, 81);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Main Menu";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// main_menu
			// 
			this->main_menu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"main_menu.BackgroundImage")));
			this->main_menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->main_menu->Controls->Add(this->button2);
			this->main_menu->Controls->Add(this->label2);
			this->main_menu->Controls->Add(this->button3);
			this->main_menu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_menu->Location = System::Drawing::Point(0, 70);
			this->main_menu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->main_menu->Name = L"main_menu";
			this->main_menu->Size = System::Drawing::Size(613, 382);
			this->main_menu->TabIndex = 3;
			// 
			// admin_login
			// 
			this->admin_login->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->admin_login->Controls->Add(this->label4);
			this->admin_login->Controls->Add(this->textBox_admin_name);
			this->admin_login->Controls->Add(this->textBox_admin_pass);
			this->admin_login->Controls->Add(this->label3);
			this->admin_login->Controls->Add(this->button1);
			this->admin_login->Controls->Add(this->Login_button);
			this->admin_login->Controls->Add(this->label5);
			this->admin_login->Location = System::Drawing::Point(2, 70);
			this->admin_login->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->admin_login->Name = L"admin_login";
			this->admin_login->Size = System::Drawing::Size(613, 382);
			this->admin_login->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(238, 138);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name";
			// 
			// textBox_admin_name
			// 
			this->textBox_admin_name->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox_admin_name->Location = System::Drawing::Point(238, 169);
			this->textBox_admin_name->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_admin_name->Name = L"textBox_admin_name";
			this->textBox_admin_name->Size = System::Drawing::Size(150, 20);
			this->textBox_admin_name->TabIndex = 2;
			this->textBox_admin_name->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox_admin_pass
			// 
			this->textBox_admin_pass->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox_admin_pass->Location = System::Drawing::Point(238, 236);
			this->textBox_admin_pass->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_admin_pass->Name = L"textBox_admin_pass";
			this->textBox_admin_pass->PasswordChar = '*';
			this->textBox_admin_pass->Size = System::Drawing::Size(150, 20);
			this->textBox_admin_pass->TabIndex = 2;
			this->textBox_admin_pass->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(260, 101);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Admin login";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"main menu";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Login_button
			// 
			this->Login_button->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Login_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Login_button->Location = System::Drawing::Point(287, 291);
			this->Login_button->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Login_button->Name = L"Login_button";
			this->Login_button->Size = System::Drawing::Size(56, 19);
			this->Login_button->TabIndex = 4;
			this->Login_button->Text = L"Login";
			this->Login_button->UseVisualStyleBackColor = true;
			this->Login_button->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(238, 202);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Password";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// student_login
			// 
			this->student_login->Controls->Add(this->panel1);
			this->student_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->student_login->Location = System::Drawing::Point(0, 70);
			this->student_login->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->student_login->Name = L"student_login";
			this->student_login->Size = System::Drawing::Size(613, 382);
			this->student_login->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label48);
			this->panel1->Controls->Add(this->comboBox29);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox_student_name);
			this->panel1->Controls->Add(this->textBox_student_id);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(613, 382);
			this->panel1->TabIndex = 4;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(237, 221);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(29, 13);
			this->label48->TabIndex = 6;
			this->label48->Text = L"Year";
			// 
			// comboBox29
			// 
			this->comboBox29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox29->FormattingEnabled = true;
			this->comboBox29->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Year 1", L"Year 2", L"Year 3", L"Year 4" });
			this->comboBox29->Location = System::Drawing::Point(238, 246);
			this->comboBox29->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox29->Name = L"comboBox29";
			this->comboBox29->Size = System::Drawing::Size(150, 21);
			this->comboBox29->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(238, 110);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Name";
			// 
			// textBox_student_name
			// 
			this->textBox_student_name->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox_student_name->Location = System::Drawing::Point(238, 132);
			this->textBox_student_name->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_student_name->Name = L"textBox_student_name";
			this->textBox_student_name->Size = System::Drawing::Size(150, 20);
			this->textBox_student_name->TabIndex = 2;
			this->textBox_student_name->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_student_name_TextChanged);
			// 
			// textBox_student_id
			// 
			this->textBox_student_id->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox_student_id->Location = System::Drawing::Point(238, 193);
			this->textBox_student_id->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_student_id->Name = L"textBox_student_id";
			this->textBox_student_id->Size = System::Drawing::Size(150, 20);
			this->textBox_student_id->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(260, 72);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Student login";
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 28);
			this->button4->TabIndex = 0;
			this->button4->Text = L"main menu";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(284, 292);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 25);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Login";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(238, 174);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"ID";
			// 
			// admin
			// 
			this->admin->Controls->Add(this->comboBox_sem);
			this->admin->Controls->Add(this->button10);
			this->admin->Controls->Add(this->button6);
			this->admin->Controls->Add(this->label10);
			this->admin->Controls->Add(this->comboBox_year);
			this->admin->Controls->Add(this->label9);
			this->admin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->admin->Location = System::Drawing::Point(0, 70);
			this->admin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->admin->Name = L"admin";
			this->admin->Size = System::Drawing::Size(613, 382);
			this->admin->TabIndex = 3;
			// 
			// comboBox_sem
			// 
			this->comboBox_sem->FormattingEnabled = true;
			this->comboBox_sem->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"semester 1", L"semester 2" });
			this->comboBox_sem->Location = System::Drawing::Point(173, 173);
			this->comboBox_sem->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_sem->Name = L"comboBox_sem";
			this->comboBox_sem->Size = System::Drawing::Size(260, 21);
			this->comboBox_sem->TabIndex = 5;
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(55, 15);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(56, 19);
			this->button10->TabIndex = 4;
			this->button10->Text = L"logout";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(270, 213);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 19);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Choose";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(173, 107);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 17);
			this->label10->TabIndex = 2;
			this->label10->Text = L"choose a year :";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// comboBox_year
			// 
			this->comboBox_year->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox_year->FormattingEnabled = true;
			this->comboBox_year->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Year 1", L"Year 2", L"Year 3", L"Year 4" });
			this->comboBox_year->Location = System::Drawing::Point(173, 138);
			this->comboBox_year->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_year->Name = L"comboBox_year";
			this->comboBox_year->Size = System::Drawing::Size(260, 21);
			this->comboBox_year->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(223, 46);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 28);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Add schedule ";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// year1s1
			// 
			this->year1s1->Controls->Add(this->label46);
			this->year1s1->Controls->Add(this->button8);
			this->year1s1->Controls->Add(this->label19);
			this->year1s1->Controls->Add(this->button9);
			this->year1s1->Controls->Add(this->label12);
			this->year1s1->Controls->Add(this->label11);
			this->year1s1->Controls->Add(this->comboBox2);
			this->year1s1->Controls->Add(this->comboBox1);
			this->year1s1->Controls->Add(this->comboBox3);
			this->year1s1->Controls->Add(this->button7);
			this->year1s1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year1s1->Location = System::Drawing::Point(0, 70);
			this->year1s1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year1s1->Name = L"year1s1";
			this->year1s1->Size = System::Drawing::Size(613, 382);
			this->year1s1->TabIndex = 4;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(249, 59);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(91, 22);
			this->label46->TabIndex = 12;
			this->label46->Text = L"Semester 1";
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(266, 314);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(59, 19);
			this->button8->TabIndex = 7;
			this->button8->Text = L"confirm";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(262, 33);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(73, 22);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Year 1";
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(39, 33);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 19);
			this->button9->TabIndex = 5;
			this->button9->Text = L"back";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(263, 160);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"choose day";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(263, 234);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"choose time";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox2->Location = System::Drawing::Point(158, 266);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(263, 21);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(158, 123);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(263, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox3->Location = System::Drawing::Point(158, 196);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(263, 21);
			this->comboBox3->TabIndex = 3;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(244, 86);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 19);
			this->button7->TabIndex = 1;
			this->button7->Text = L"show courses";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// year2s1
			// 
			this->year2s1->Controls->Add(this->label44);
			this->year2s1->Controls->Add(this->label22);
			this->year2s1->Controls->Add(this->button11);
			this->year2s1->Controls->Add(this->label13);
			this->year2s1->Controls->Add(this->label14);
			this->year2s1->Controls->Add(this->comboBox4);
			this->year2s1->Controls->Add(this->comboBox5);
			this->year2s1->Controls->Add(this->comboBox6);
			this->year2s1->Controls->Add(this->button12);
			this->year2s1->Controls->Add(this->button13);
			this->year2s1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year2s1->Location = System::Drawing::Point(0, 70);
			this->year2s1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year2s1->Name = L"year2s1";
			this->year2s1->Size = System::Drawing::Size(613, 382);
			this->year2s1->TabIndex = 5;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(249, 58);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(91, 22);
			this->label44->TabIndex = 12;
			this->label44->Text = L"Semester 1";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(262, 33);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(73, 22);
			this->label22->TabIndex = 7;
			this->label22->Text = L"Year 2";
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Location = System::Drawing::Point(39, 33);
			this->button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(56, 19);
			this->button11->TabIndex = 5;
			this->button11->Text = L"back";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(263, 160);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"choose day";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(263, 234);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"choose time";
			// 
			// comboBox4
			// 
			this->comboBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox4->Location = System::Drawing::Point(158, 196);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(263, 21);
			this->comboBox4->TabIndex = 3;
			// 
			// comboBox5
			// 
			this->comboBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox5->Location = System::Drawing::Point(158, 266);
			this->comboBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(263, 21);
			this->comboBox5->TabIndex = 3;
			// 
			// comboBox6
			// 
			this->comboBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(158, 123);
			this->comboBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(263, 21);
			this->comboBox6->TabIndex = 3;
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Location = System::Drawing::Point(248, 321);
			this->button12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(97, 19);
			this->button12->TabIndex = 1;
			this->button12->Text = L"confirm";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Location = System::Drawing::Point(244, 86);
			this->button13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(97, 19);
			this->button13->TabIndex = 1;
			this->button13->Text = L"show courses";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// year3s1
			// 
			this->year3s1->Controls->Add(this->comboBox9);
			this->year3s1->Controls->Add(this->label36);
			this->year3s1->Controls->Add(this->button17);
			this->year3s1->Controls->Add(this->label21);
			this->year3s1->Controls->Add(this->button14);
			this->year3s1->Controls->Add(this->label23);
			this->year3s1->Controls->Add(this->label15);
			this->year3s1->Controls->Add(this->label16);
			this->year3s1->Controls->Add(this->comboBox7);
			this->year3s1->Controls->Add(this->comboBox8);
			this->year3s1->Controls->Add(this->comboBox13);
			this->year3s1->Controls->Add(this->button15);
			this->year3s1->Controls->Add(this->button16);
			this->year3s1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year3s1->Location = System::Drawing::Point(0, 70);
			this->year3s1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year3s1->Name = L"year3s1";
			this->year3s1->Size = System::Drawing::Size(613, 382);
			this->year3s1->TabIndex = 6;
			this->year3s1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::year3_Paint);
			// 
			// comboBox9
			// 
			this->comboBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(158, 160);
			this->comboBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(263, 21);
			this->comboBox9->TabIndex = 3;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(257, 33);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(91, 22);
			this->label36->TabIndex = 11;
			this->label36->Text = L"Semester 1";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(322, 126);
			this->button17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(97, 19);
			this->button17->TabIndex = 8;
			this->button17->Text = L"clear courses";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click_1);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(262, 11);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(73, 22);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Year 3";
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Location = System::Drawing::Point(39, 33);
			this->button14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(56, 19);
			this->button14->TabIndex = 5;
			this->button14->Text = L"back";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(263, 58);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(70, 13);
			this->label23->TabIndex = 4;
			this->label23->Text = L"choose major";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(263, 196);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"choose day";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(263, 263);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(64, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"choose time";
			// 
			// comboBox7
			// 
			this->comboBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox7->Location = System::Drawing::Point(158, 228);
			this->comboBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(263, 21);
			this->comboBox7->TabIndex = 3;
			// 
			// comboBox8
			// 
			this->comboBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox8->Location = System::Drawing::Point(158, 290);
			this->comboBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(263, 21);
			this->comboBox8->TabIndex = 3;
			// 
			// comboBox13
			// 
			this->comboBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"computer science", L"data information system",
					L"software engineering"
			});
			this->comboBox13->Location = System::Drawing::Point(158, 86);
			this->comboBox13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(263, 21);
			this->comboBox13->TabIndex = 3;
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Location = System::Drawing::Point(248, 321);
			this->button15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(97, 19);
			this->button15->TabIndex = 1;
			this->button15->Text = L"confirm";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(162, 126);
			this->button16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(97, 19);
			this->button16->TabIndex = 1;
			this->button16->Text = L"show courses";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// year4s1
			// 
			this->year4s1->Controls->Add(this->panel2);
			this->year4s1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year4s1->Location = System::Drawing::Point(0, 0);
			this->year4s1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year4s1->Name = L"year4s1";
			this->year4s1->Size = System::Drawing::Size(613, 452);
			this->year4s1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label35);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->comboBox14);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->comboBox15);
			this->panel2->Controls->Add(this->comboBox16);
			this->panel2->Controls->Add(this->comboBox17);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(613, 452);
			this->panel2->TabIndex = 8;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(257, 32);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(91, 22);
			this->label35->TabIndex = 10;
			this->label35->Text = L"Semester 1";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(322, 124);
			this->button18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(97, 19);
			this->button18->TabIndex = 8;
			this->button18->Text = L"clear courses";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// comboBox14
			// 
			this->comboBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(158, 160);
			this->comboBox14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(263, 21);
			this->comboBox14->TabIndex = 3;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(262, 11);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(73, 22);
			this->label24->TabIndex = 7;
			this->label24->Text = L"Year 4";
			// 
			// button20
			// 
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->Location = System::Drawing::Point(39, 33);
			this->button20->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(56, 19);
			this->button20->TabIndex = 5;
			this->button20->Text = L"back";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(263, 58);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 13);
			this->label25->TabIndex = 4;
			this->label25->Text = L"choose major";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(263, 196);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"choose day";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(263, 263);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(64, 13);
			this->label27->TabIndex = 4;
			this->label27->Text = L"choose time";
			// 
			// comboBox15
			// 
			this->comboBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox15->Location = System::Drawing::Point(158, 228);
			this->comboBox15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(263, 21);
			this->comboBox15->TabIndex = 3;
			// 
			// comboBox16
			// 
			this->comboBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox16->Location = System::Drawing::Point(158, 290);
			this->comboBox16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(263, 21);
			this->comboBox16->TabIndex = 3;
			// 
			// comboBox17
			// 
			this->comboBox17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"computer science", L"data information system",
					L"software engineering"
			});
			this->comboBox17->Location = System::Drawing::Point(158, 86);
			this->comboBox17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(263, 21);
			this->comboBox17->TabIndex = 3;
			// 
			// button21
			// 
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->Location = System::Drawing::Point(248, 321);
			this->button21->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(97, 19);
			this->button21->TabIndex = 1;
			this->button21->Text = L"confirm";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->Location = System::Drawing::Point(158, 123);
			this->button22->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(97, 19);
			this->button22->TabIndex = 1;
			this->button22->Text = L"show courses";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// year3s2
			// 
			this->year3s2->Controls->Add(this->label29);
			this->year3s2->Controls->Add(this->button19);
			this->year3s2->Controls->Add(this->comboBox10);
			this->year3s2->Controls->Add(this->label17);
			this->year3s2->Controls->Add(this->button23);
			this->year3s2->Controls->Add(this->label18);
			this->year3s2->Controls->Add(this->label20);
			this->year3s2->Controls->Add(this->label28);
			this->year3s2->Controls->Add(this->comboBox11);
			this->year3s2->Controls->Add(this->comboBox12);
			this->year3s2->Controls->Add(this->comboBox18);
			this->year3s2->Controls->Add(this->button24);
			this->year3s2->Controls->Add(this->button25);
			this->year3s2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year3s2->Location = System::Drawing::Point(0, 70);
			this->year3s2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year3s2->Name = L"year3s2";
			this->year3s2->Size = System::Drawing::Size(613, 382);
			this->year3s2->TabIndex = 8;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(257, 32);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(91, 22);
			this->label29->TabIndex = 9;
			this->label29->Text = L"Semester 2";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(322, 126);
			this->button19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(97, 19);
			this->button19->TabIndex = 8;
			this->button19->Text = L"clear courses";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// comboBox10
			// 
			this->comboBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(158, 160);
			this->comboBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(263, 21);
			this->comboBox10->TabIndex = 3;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(264, 11);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 22);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Year 3";
			// 
			// button23
			// 
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->Location = System::Drawing::Point(39, 33);
			this->button23->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(56, 19);
			this->button23->TabIndex = 5;
			this->button23->Text = L"back";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(263, 58);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(70, 13);
			this->label18->TabIndex = 4;
			this->label18->Text = L"choose major";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(263, 196);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"choose day";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(263, 263);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(64, 13);
			this->label28->TabIndex = 4;
			this->label28->Text = L"choose time";
			// 
			// comboBox11
			// 
			this->comboBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox11->Location = System::Drawing::Point(158, 228);
			this->comboBox11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(263, 21);
			this->comboBox11->TabIndex = 3;
			// 
			// comboBox12
			// 
			this->comboBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox12->Location = System::Drawing::Point(158, 290);
			this->comboBox12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(263, 21);
			this->comboBox12->TabIndex = 3;
			// 
			// comboBox18
			// 
			this->comboBox18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"computer science", L"data information system",
					L"software engineering"
			});
			this->comboBox18->Location = System::Drawing::Point(158, 86);
			this->comboBox18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(263, 21);
			this->comboBox18->TabIndex = 3;
			// 
			// button24
			// 
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->Location = System::Drawing::Point(248, 321);
			this->button24->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(97, 19);
			this->button24->TabIndex = 1;
			this->button24->Text = L"confirm";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(162, 126);
			this->button25->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(97, 19);
			this->button25->TabIndex = 1;
			this->button25->Text = L"show courses";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// year4s2
			// 
			this->year4s2->Controls->Add(this->label30);
			this->year4s2->Controls->Add(this->button26);
			this->year4s2->Controls->Add(this->comboBox19);
			this->year4s2->Controls->Add(this->label31);
			this->year4s2->Controls->Add(this->button27);
			this->year4s2->Controls->Add(this->label32);
			this->year4s2->Controls->Add(this->label33);
			this->year4s2->Controls->Add(this->label34);
			this->year4s2->Controls->Add(this->comboBox20);
			this->year4s2->Controls->Add(this->comboBox21);
			this->year4s2->Controls->Add(this->comboBox22);
			this->year4s2->Controls->Add(this->button28);
			this->year4s2->Controls->Add(this->button29);
			this->year4s2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year4s2->Location = System::Drawing::Point(0, 0);
			this->year4s2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year4s2->Name = L"year4s2";
			this->year4s2->Size = System::Drawing::Size(613, 452);
			this->year4s2->TabIndex = 9;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(257, 32);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(91, 22);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Semester 2";
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(322, 126);
			this->button26->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(97, 19);
			this->button26->TabIndex = 8;
			this->button26->Text = L"clear courses";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// comboBox19
			// 
			this->comboBox19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->Location = System::Drawing::Point(158, 160);
			this->comboBox19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(263, 21);
			this->comboBox19->TabIndex = 3;
			this->comboBox19->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox19_SelectedIndexChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(264, 11);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(73, 22);
			this->label31->TabIndex = 7;
			this->label31->Text = L"Year 4";
			// 
			// button27
			// 
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->Location = System::Drawing::Point(39, 33);
			this->button27->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(56, 19);
			this->button27->TabIndex = 5;
			this->button27->Text = L"back";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(263, 58);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(70, 13);
			this->label32->TabIndex = 4;
			this->label32->Text = L"choose major";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(263, 196);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(62, 13);
			this->label33->TabIndex = 4;
			this->label33->Text = L"choose day";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(263, 263);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(64, 13);
			this->label34->TabIndex = 4;
			this->label34->Text = L"choose time";
			// 
			// comboBox20
			// 
			this->comboBox20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox20->Location = System::Drawing::Point(158, 228);
			this->comboBox20->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(263, 21);
			this->comboBox20->TabIndex = 3;
			// 
			// comboBox21
			// 
			this->comboBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox21->FormattingEnabled = true;
			this->comboBox21->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox21->Location = System::Drawing::Point(158, 290);
			this->comboBox21->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox21->Name = L"comboBox21";
			this->comboBox21->Size = System::Drawing::Size(263, 21);
			this->comboBox21->TabIndex = 3;
			// 
			// comboBox22
			// 
			this->comboBox22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox22->FormattingEnabled = true;
			this->comboBox22->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"computer science", L"data information system",
					L"software engineering"
			});
			this->comboBox22->Location = System::Drawing::Point(158, 86);
			this->comboBox22->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox22->Name = L"comboBox22";
			this->comboBox22->Size = System::Drawing::Size(263, 21);
			this->comboBox22->TabIndex = 3;
			// 
			// button28
			// 
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->Location = System::Drawing::Point(248, 321);
			this->button28->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(97, 19);
			this->button28->TabIndex = 1;
			this->button28->Text = L"confirm";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(162, 126);
			this->button29->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(97, 19);
			this->button29->TabIndex = 1;
			this->button29->Text = L"show courses";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// year1s2
			// 
			this->year1s2->Controls->Add(this->label45);
			this->year1s2->Controls->Add(this->button30);
			this->year1s2->Controls->Add(this->label37);
			this->year1s2->Controls->Add(this->button31);
			this->year1s2->Controls->Add(this->label38);
			this->year1s2->Controls->Add(this->label39);
			this->year1s2->Controls->Add(this->comboBox23);
			this->year1s2->Controls->Add(this->comboBox24);
			this->year1s2->Controls->Add(this->comboBox25);
			this->year1s2->Controls->Add(this->button32);
			this->year1s2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year1s2->Location = System::Drawing::Point(0, 70);
			this->year1s2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year1s2->Name = L"year1s2";
			this->year1s2->Size = System::Drawing::Size(613, 382);
			this->year1s2->TabIndex = 10;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(249, 58);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(91, 22);
			this->label45->TabIndex = 12;
			this->label45->Text = L"Semester 2";
			// 
			// button30
			// 
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->Location = System::Drawing::Point(266, 314);
			this->button30->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(59, 19);
			this->button30->TabIndex = 7;
			this->button30->Text = L"confirm";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(262, 33);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(73, 22);
			this->label37->TabIndex = 6;
			this->label37->Text = L"Year 1";
			// 
			// button31
			// 
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->Location = System::Drawing::Point(39, 33);
			this->button31->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(56, 19);
			this->button31->TabIndex = 5;
			this->button31->Text = L"back";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(263, 160);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(62, 13);
			this->label38->TabIndex = 4;
			this->label38->Text = L"choose day";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(263, 234);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(64, 13);
			this->label39->TabIndex = 4;
			this->label39->Text = L"choose time";
			// 
			// comboBox23
			// 
			this->comboBox23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox23->FormattingEnabled = true;
			this->comboBox23->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox23->Location = System::Drawing::Point(158, 266);
			this->comboBox23->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox23->Name = L"comboBox23";
			this->comboBox23->Size = System::Drawing::Size(263, 21);
			this->comboBox23->TabIndex = 3;
			// 
			// comboBox24
			// 
			this->comboBox24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox24->FormattingEnabled = true;
			this->comboBox24->Location = System::Drawing::Point(158, 123);
			this->comboBox24->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox24->Name = L"comboBox24";
			this->comboBox24->Size = System::Drawing::Size(263, 21);
			this->comboBox24->TabIndex = 3;
			this->comboBox24->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox24_SelectedIndexChanged);
			// 
			// comboBox25
			// 
			this->comboBox25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox25->FormattingEnabled = true;
			this->comboBox25->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox25->Location = System::Drawing::Point(158, 196);
			this->comboBox25->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox25->Name = L"comboBox25";
			this->comboBox25->Size = System::Drawing::Size(263, 21);
			this->comboBox25->TabIndex = 3;
			// 
			// button32
			// 
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->Location = System::Drawing::Point(244, 86);
			this->button32->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(97, 19);
			this->button32->TabIndex = 1;
			this->button32->Text = L"show courses";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// year2s2
			// 
			this->year2s2->Controls->Add(this->label43);
			this->year2s2->Controls->Add(this->label40);
			this->year2s2->Controls->Add(this->button33);
			this->year2s2->Controls->Add(this->label41);
			this->year2s2->Controls->Add(this->label42);
			this->year2s2->Controls->Add(this->comboBox26);
			this->year2s2->Controls->Add(this->comboBox27);
			this->year2s2->Controls->Add(this->comboBox28);
			this->year2s2->Controls->Add(this->button34);
			this->year2s2->Controls->Add(this->button35);
			this->year2s2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->year2s2->Location = System::Drawing::Point(0, 70);
			this->year2s2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->year2s2->Name = L"year2s2";
			this->year2s2->Size = System::Drawing::Size(613, 382);
			this->year2s2->TabIndex = 11;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(249, 58);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(91, 22);
			this->label43->TabIndex = 10;
			this->label43->Text = L"Semester 2";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(262, 33);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(73, 22);
			this->label40->TabIndex = 7;
			this->label40->Text = L"Year 2";
			// 
			// button33
			// 
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->Location = System::Drawing::Point(39, 33);
			this->button33->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(56, 19);
			this->button33->TabIndex = 5;
			this->button33->Text = L"back";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(263, 160);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(62, 13);
			this->label41->TabIndex = 4;
			this->label41->Text = L"choose day";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(263, 234);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(64, 13);
			this->label42->TabIndex = 4;
			this->label42->Text = L"choose time";
			// 
			// comboBox26
			// 
			this->comboBox26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox26->FormattingEnabled = true;
			this->comboBox26->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"saterday", L"sunday", L"monday", L"tuesday",
					L"wednesday", L"thursday"
			});
			this->comboBox26->Location = System::Drawing::Point(158, 196);
			this->comboBox26->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox26->Name = L"comboBox26";
			this->comboBox26->Size = System::Drawing::Size(263, 21);
			this->comboBox26->TabIndex = 3;
			// 
			// comboBox27
			// 
			this->comboBox27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox27->FormattingEnabled = true;
			this->comboBox27->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"9:00 - 10:30", L"10:30 - 12:00", L"12:00 - 1:30",
					L"1:30 - 3:00", L"3:00 - 4:30", L"4:30 - 6:00"
			});
			this->comboBox27->Location = System::Drawing::Point(158, 266);
			this->comboBox27->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox27->Name = L"comboBox27";
			this->comboBox27->Size = System::Drawing::Size(263, 21);
			this->comboBox27->TabIndex = 3;
			// 
			// comboBox28
			// 
			this->comboBox28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox28->FormattingEnabled = true;
			this->comboBox28->Location = System::Drawing::Point(158, 123);
			this->comboBox28->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox28->Name = L"comboBox28";
			this->comboBox28->Size = System::Drawing::Size(263, 21);
			this->comboBox28->TabIndex = 3;
			// 
			// button34
			// 
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->Location = System::Drawing::Point(248, 321);
			this->button34->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(97, 19);
			this->button34->TabIndex = 1;
			this->button34->Text = L"confirm";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->Location = System::Drawing::Point(244, 86);
			this->button35->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(97, 19);
			this->button35->TabIndex = 1;
			this->button35->Text = L"show courses";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// StudentOptions
			// 
			this->StudentOptions->Controls->Add(this->button38);
			this->StudentOptions->Controls->Add(this->button37);
			this->StudentOptions->Controls->Add(this->button39);
			this->StudentOptions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StudentOptions->Location = System::Drawing::Point(0, 70);
			this->StudentOptions->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->StudentOptions->Name = L"StudentOptions";
			this->StudentOptions->Size = System::Drawing::Size(613, 382);
			this->StudentOptions->TabIndex = 5;
			// 
			// button38
			// 
			this->button38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(365, 113);
			this->button38->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(140, 141);
			this->button38->TabIndex = 2;
			this->button38->Text = L"View Schedule";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button37
			// 
			this->button37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(118, 113);
			this->button37->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(140, 141);
			this->button37->TabIndex = 1;
			this->button37->Text = L"View Data";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click_1);
			// 
			// button39
			// 
			this->button39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button39->Location = System::Drawing::Point(17, 17);
			this->button39->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(77, 19);
			this->button39->TabIndex = 3;
			this->button39->Text = L"Main Menu";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// StudentViewData
			// 
			this->StudentViewData->Controls->Add(this->label47);
			this->StudentViewData->Controls->Add(this->button40);
			this->StudentViewData->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StudentViewData->Location = System::Drawing::Point(0, 70);
			this->StudentViewData->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->StudentViewData->Name = L"StudentViewData";
			this->StudentViewData->Size = System::Drawing::Size(613, 382);
			this->StudentViewData->TabIndex = 5;
			// 
			// label47
			// 
			this->label47->BackColor = System::Drawing::Color::White;
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label47->Enabled = false;
			this->label47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(38, 86);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(489, 247);
			this->label47->TabIndex = 1;
			this->label47->Click += gcnew System::EventHandler(this, &MyForm::label47_Click_1);
			// 
			// button40
			// 
			this->button40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button40->Location = System::Drawing::Point(38, 32);
			this->button40->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(126, 19);
			this->button40->TabIndex = 0;
			this->button40->Text = L"Back To Choices";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// StudentViewSchedule
			// 
			this->StudentViewSchedule->Controls->Add(this->label_schedule);
			this->StudentViewSchedule->Controls->Add(this->button36);
			this->StudentViewSchedule->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StudentViewSchedule->Location = System::Drawing::Point(0, 70);
			this->StudentViewSchedule->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->StudentViewSchedule->Name = L"StudentViewSchedule";
			this->StudentViewSchedule->Size = System::Drawing::Size(613, 382);
			this->StudentViewSchedule->TabIndex = 4;
			this->StudentViewSchedule->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::StudentViewSchedule_Paint);
			// 
			// label_schedule
			// 
			this->label_schedule->Location = System::Drawing::Point(17, 32);
			this->label_schedule->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_schedule->Name = L"label_schedule";
			this->label_schedule->Size = System::Drawing::Size(586, 333);
			this->label_schedule->TabIndex = 1;
			this->label_schedule->Click += gcnew System::EventHandler(this, &MyForm::Label_Click);
			// 
			// button36
			// 
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->Location = System::Drawing::Point(17, 8);
			this->button36->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(56, 19);
			this->button36->TabIndex = 0;
			this->button36->Text = L"Back";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 452);
			this->Controls->Add(this->main_menu);
			this->Controls->Add(this->StudentViewSchedule);
			this->Controls->Add(this->student_login);
			this->Controls->Add(this->StudentOptions);
			this->Controls->Add(this->StudentViewData);
			this->Controls->Add(this->year1s2);
			this->Controls->Add(this->year1s1);
			this->Controls->Add(this->year2s2);
			this->Controls->Add(this->year2s1);
			this->Controls->Add(this->year3s2);
			this->Controls->Add(this->year3s1);
			this->Controls->Add(this->admin);
			this->Controls->Add(this->admin_login);
			this->Controls->Add(this->head);
			this->Controls->Add(this->year4s2);
			this->Controls->Add(this->year4s1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->head->ResumeLayout(false);
			this->head->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->main_menu->ResumeLayout(false);
			this->main_menu->PerformLayout();
			this->admin_login->ResumeLayout(false);
			this->admin_login->PerformLayout();
			this->student_login->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->admin->ResumeLayout(false);
			this->admin->PerformLayout();
			this->year1s1->ResumeLayout(false);
			this->year1s1->PerformLayout();
			this->year2s1->ResumeLayout(false);
			this->year2s1->PerformLayout();
			this->year3s1->ResumeLayout(false);
			this->year3s1->PerformLayout();
			this->year4s1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->year3s2->ResumeLayout(false);
			this->year3s2->PerformLayout();
			this->year4s2->ResumeLayout(false);
			this->year4s2->PerformLayout();
			this->year1s2->ResumeLayout(false);
			this->year1s2->PerformLayout();
			this->year2s2->ResumeLayout(false);
			this->year2s2->PerformLayout();
			this->StudentOptions->ResumeLayout(false);
			this->StudentViewData->ResumeLayout(false);
			this->StudentViewSchedule->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	
			
		
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	admin_login->BringToFront();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	main_menu->BringToFront();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox_admin_name->Text=="admin"&& textBox_admin_pass->Text=="pass")
	{
		admin->BringToFront();
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::String^ name = textBox_student_name->Text;
	System::String^ id = textBox_student_id->Text;
	bool found = false;
	bool studentFound = false;

	// Convert the name and ID to std::string
	std::string nameStr = msclr::interop::marshal_as<std::string>(name);
	std::string idStr = msclr::interop::marshal_as<std::string>(id);

	std::string fileName;

	// Check the value of comboBox29 and set the appropriate file name
	if (comboBox29->SelectedItem->ToString() == "Year 1") {
		fileName = "studentData1.txt";
	}
	else if (comboBox29->SelectedItem->ToString() == "Year 2") {
		fileName = "studentData2.txt";
	}
	else if (comboBox29->SelectedItem->ToString() == "Year 3") {
		fileName = "studentData3.txt";
	}
	else if (comboBox29->SelectedItem->ToString() == "Year 4") {
		fileName = "studentData4.txt";
	}

	// Open the text file for reading
	std::ifstream file(fileName);
	if (file.is_open()) {
		std::string line;
		std::string extractedLines;
		bool nameMatched = false;

		while (std::getline(file, line)) {
			if (line == nameStr) {
				// Read the next line (ID)
				if (!std::getline(file, line)) {
					break;  // Break if there is no ID line
				}
				if (line == idStr) {
					extractedLines += nameStr + "\n" + line + "\n";

					// Read the next 6 lines
					for (int i = 0; i < 6; i++) {
						if (!std::getline(file, line)) {
							break;  // Break if there are not enough lines remaining
						}
						extractedLines += line + "\n";
					}

					found = true;
					nameMatched = true;
					studentFound = true;
					break;
				}
			}
		}

		// Close the file
		file.close();

		if (nameMatched) {
			// Update the label text with the extracted lines
			System::String^ extractedText = gcnew System::String(extractedLines.c_str());
			label47->Text = extractedText;
			StudentOptions->BringToFront();
			
		}
	}

	if (found) {
		MessageBox::Show("Student is found.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Name and ID combination not found in the selected file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	main_menu->BringToFront();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	student_login->BringToFront();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_year->Text=="Year 1"&&comboBox_sem->Text=="semester 1")
	{
		year1s1->BringToFront();
	}
	if (comboBox_year->Text == "Year 2" && comboBox_sem->Text == "semester 1")
	{
		year2s1->BringToFront();
	}
	if (comboBox_year->Text == "Year 3" && comboBox_sem->Text == "semester 1")
	{
		year3s1->BringToFront();
	}
	if (comboBox_year->Text == "Year 4" && comboBox_sem->Text == "semester 1")
	{
		year4s1->BringToFront();
	}
	if (comboBox_year->Text == "Year 1" && comboBox_sem->Text == "semester 2")
	{
		year1s2->BringToFront();
	}
	if (comboBox_year->Text == "Year 2" && comboBox_sem->Text == "semester 2")
	{
		year2s2->BringToFront();
	}
	if (comboBox_year->Text == "Year 3" && comboBox_sem->Text == "semester 2")
	{
		year3s2->BringToFront();
	}
	if (comboBox_year->Text == "Year 4" && comboBox_sem->Text == "semester 2")
	{
		year4s2->BringToFront();
	}
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file("year1new.txt");

	if (file.is_open()) {
		// Read the file contents
		std::string line;
		System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
		int lineCounter = 0;

		while (std::getline(file, line)) {
			// Add the line to the ComboBox
			comboBox1->Items->Add(gcnew System::String(line.c_str()));

			// Skip the next 8 lines
			for (int i = 0; i < 8; i++) {
				if (!std::getline(file, line)) {
					break;  // Break if end of file is reached before skipping 8 lines
				}
			}
		}

		// Close the file
		file.close();

		// Display the first item in the ComboBox by default
		if (comboBox1->Items->Count > 0) {
			comboBox1->SelectedIndex = 0;
		}
	}
	else {
		// Handle file open error
		MessageBox::Show("Failed to open the file.");
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	admin_login->BringToFront();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ course = comboBox6->SelectedItem->ToString();
	String^ day = comboBox4->SelectedItem->ToString();
	String^ time = comboBox5->SelectedItem->ToString();

	if (course != nullptr && day != nullptr && time != nullptr)
	{

		{
			std::ofstream file("scheduleyear2.txt", std::ios_base::app);

			if (file.is_open())
			{
				file << marshal_as<std::string>(course) << " "
					<< marshal_as<std::string>(day) << " "
					<< marshal_as<std::string>(time) << std::endl;

				file.close();

				MessageBox::Show("Course added successfully!", "Success");
				comboBox6->Items->Remove(comboBox6->SelectedItem); //removes the selected items from the combobox.

			}
			else
			{
				MessageBox::Show("Failed to open schedule file!", "Error");
			}

		}
	}
	else
	{
		MessageBox::Show("Please select course, day, and time.", "Input Error");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ course = comboBox1->SelectedItem->ToString();
	String^ day = comboBox3->SelectedItem->ToString();
	String^ time = comboBox2->SelectedItem->ToString();

	if (course != nullptr && day != nullptr && time != nullptr)
	{
	
		{
			std::ofstream file("schedule.txt", std::ios_base::app);

			if (file.is_open())
			{
				file << marshal_as<std::string>(course) << " "
					<< marshal_as<std::string>(day) << " "
					<< marshal_as<std::string>(time) << std::endl;

				file.close();

				MessageBox::Show("Course added successfully!", "Success");
				comboBox1->Items->Remove(comboBox1->SelectedItem); //removes the selected items from the combobox.

			}
			else
			{
				MessageBox::Show("Failed to open schedule file!", "Error");
			}

		}
	}
	else
	{
		MessageBox::Show("Please select course, day, and time.", "Input Error");
	}


}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file("year2new.txt");

	if (file.is_open()) {
		// Read the file contents
		std::string line;
		System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
		int lineCounter = 0;

		while (std::getline(file, line)) {
			// Add the line to the ComboBox
			comboBox6->Items->Add(gcnew System::String(line.c_str()));

			// Skip the next 8 lines
			for (int i = 0; i < 8; i++) {
				if (!std::getline(file, line)) {
					break;  // Break if end of file is reached before skipping 8 lines
				}
			}
		}

		// Close the file
		file.close();
		 
		
		
	// Display the first item in the ComboBox by default
		if (comboBox1->Items->Count > 0) {
			comboBox1->SelectedIndex = 0;
		}
	}
	else {
		// Handle file open error
		MessageBox::Show("Failed to open the file.");
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (comboBox13->Text == "software engineering") {
		std::ifstream file("year3SEnew.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox9->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox9->Items->Count > 0) {
				comboBox9->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox13->Text == "computer science") {
		std::ifstream file("year3CSnew.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox9->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox9->Items->Count > 0) {
				comboBox9->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox13->Text == "data information system") {
		std::ifstream file("year3DISnew.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox9->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox9->Items->Count > 0) {
				comboBox9->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file;
	if (comboBox13->Text == "computer science")
	{
		std::ifstream file("year4CSnew.txt");
	}
	if (comboBox13->Text == "data information system")
	{
		std::ifstream file("year4DISnew.txt");
	}
	if (comboBox13->Text == "software engineering")
	{
		std::ifstream file("year4SEnew.txt");
	}

	if (file.is_open()) {
		// Read the file contents
		std::string line;
		System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
		int lineCounter = 0;

		while (std::getline(file, line)) {
			// Add the line to the ComboBox
			comboBox14->Items->Add(gcnew System::String(line.c_str()));

			// Skip the next 8 lines
			for (int i = 0; i < 8; i++) {
				if (!std::getline(file, line)) {
					break;  // Break if end of file is reached before skipping 8 lines
				}
			}
		}

		// Close the file
		file.close();

		// Display the first item in the ComboBox by default
		if (comboBox14->Items->Count > 0) {
			comboBox14->SelectedIndex = 0;
		}
	}
	else {
		// Handle file open error
		MessageBox::Show("Failed to open the file.");
	}
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox17->Text == "software engineering") {
		std::ifstream file("year4SEnew.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox14->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox14->Items->Count > 0) {
				comboBox14->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox17->Text == "computer science") {
		std::ifstream file("year3CSnew.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox14->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox14->Items->Count > 0) {
				comboBox14->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox17->Text == "data information system") {
		std::ifstream file("year3DISnew.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox9->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox14->Items->Count > 0) {
				comboBox14->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {
	comboBox9->Items->Clear();
}
private: System::Void year3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedText = comboBox13->Text;

	if (selectedText == "computer science") {
		String^ course = comboBox9->SelectedItem->ToString();
		String^ day = comboBox7->SelectedItem->ToString();
		String^ time = comboBox8->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear3cs.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox9->Items->Remove(comboBox9->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}

		
		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}
	
	}
	if (selectedText == "data information system") {
		String^ course = comboBox9->SelectedItem->ToString();
		String^ day = comboBox7->SelectedItem->ToString();
		String^ time = comboBox8->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear3dis.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox9->Items->Remove(comboBox9->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	if (selectedText == "software engineering") {
		String^ course = comboBox9->SelectedItem->ToString();
		String^ day = comboBox7->SelectedItem->ToString();
		String^ time = comboBox8->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear3se.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox9->Items->Remove(comboBox9->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	else {
		
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox14->Items->Clear();
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedText = comboBox17->Text;

	if (selectedText == "computer science") {
		String^ course = comboBox14->SelectedItem->ToString();
		String^ day = comboBox15->SelectedItem->ToString();
		String^ time = comboBox16->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear4cs.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox14->Items->Remove(comboBox14->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	if (selectedText == "data information system") {
		String^ course = comboBox14->SelectedItem->ToString();
		String^ day = comboBox15->SelectedItem->ToString();
		String^ time = comboBox16->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear4dis.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox14->Items->Remove(comboBox14->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	if (selectedText == "software engineering") {
		String^ course = comboBox14->SelectedItem->ToString();
		String^ day = comboBox15->SelectedItem->ToString();
		String^ time = comboBox16->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear4se.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox14->Items->Remove(comboBox14->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	else {
		
	}
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox18->Text == "software engineering") {
		std::ifstream file("year3SEs2.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox10->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox10->Items->Count > 0) {
				comboBox10->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox18->Text == "computer science") {
		std::ifstream file("year3CSs2.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox10->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox10->Items->Count > 0) {
				comboBox10->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox18->Text == "data information system") {
		std::ifstream file("year3DISs2.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox10->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox10->Items->Count > 0) {
				comboBox10->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file("year1s2.txt");

	if (file.is_open()) {
		// Read the file contents
		std::string line;
		System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
		int lineCounter = 0;

		while (std::getline(file, line)) {
			// Add the line to the ComboBox
			comboBox24->Items->Add(gcnew System::String(line.c_str()));

			// Skip the next 8 lines
			for (int i = 0; i < 8; i++) {
				if (!std::getline(file, line)) {
					break;  // Break if end of file is reached before skipping 8 lines
				}
			}
		}

		// Close the file
		file.close();

		// Display the first item in the ComboBox by default
		if (comboBox24->Items->Count > 0) {
			comboBox24->SelectedIndex = 0;
		}
	}
	else {
		// Handle file open error
		MessageBox::Show("Failed to open the file.");
	}
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file("year2s2.txt");

	if (file.is_open()) {
		// Read the file contents
		std::string line;
		System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
		int lineCounter = 0;

		while (std::getline(file, line)) {
			// Add the line to the ComboBox
			comboBox28->Items->Add(gcnew System::String(line.c_str()));

			// Skip the next 8 lines
			for (int i = 0; i < 8; i++) {
				if (!std::getline(file, line)) {
					break;  // Break if end of file is reached before skipping 8 lines
				}
			}
		}

		// Close the file
		file.close();

		// Display the first item in the ComboBox by default
		if (comboBox28->Items->Count > 0) {
			comboBox28->SelectedIndex = 0;
		}
	}
	else {
		// Handle file open error
		MessageBox::Show("Failed to open the file.");
	}
}
private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e) {
	comboBox10->Items->Clear();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedText = comboBox18->Text;

	if (selectedText == "computer science") {
		String^ course = comboBox10->SelectedItem->ToString();
		String^ day = comboBox11->SelectedItem->ToString();
		String^ time = comboBox12->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear3csS2.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox10->Items->Remove(comboBox10->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	if (selectedText == "data information system") {
		String^ course = comboBox10->SelectedItem->ToString();
		String^ day = comboBox11->SelectedItem->ToString();
		String^ time = comboBox12->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear3disS2.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox10->Items->Remove(comboBox10->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	if (selectedText == "software engineering") {
		String^ course = comboBox10->SelectedItem->ToString();
		String^ day = comboBox11->SelectedItem->ToString();
		String^ time = comboBox12->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear3seS2.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox10->Items->Remove(comboBox10->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	else {

	}
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox22->Text == "software engineering") {
		std::ifstream file("year4SEs2.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox19->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox19->Items->Count > 0) {
				comboBox19->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox22->Text == "computer science") {
		std::ifstream file("year4CSs2.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox19->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox19->Items->Count > 0) {
				comboBox19->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
	if (comboBox22->Text == "data information system") {
		std::ifstream file("year4DISs2.txt");

		if (file.is_open()) {
			// Read the file contents
			std::string line;
			System::Text::StringBuilder^ fileContent = gcnew System::Text::StringBuilder();
			int lineCounter = 0;

			while (std::getline(file, line)) {
				// Add the line to the ComboBox
				comboBox19->Items->Add(gcnew System::String(line.c_str()));

				// Skip the next 8 lines
				for (int i = 0; i < 8; i++) {
					if (!std::getline(file, line)) {
						break;  // Break if end of file is reached before skipping 8 lines
					}
				}
			}

			// Close the file
			file.close();

			// Display the first item in the ComboBox by default
			if (comboBox19->Items->Count > 0) {
				comboBox19->SelectedIndex = 0;
			}
		}
		else {
			// Handle file open error
			MessageBox::Show("Failed to open the file.");
		}
	}
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox19->Items->Clear();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedText = comboBox22->Text;

	if (selectedText == "computer science") {
		String^ course = comboBox19->SelectedItem->ToString();
		String^ day = comboBox20->SelectedItem->ToString();
		String^ time = comboBox21->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear4csS2.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox19->Items->Remove(comboBox19->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	if (selectedText == "data information system") {
		String^ course = comboBox19->SelectedItem->ToString();
		String^ day = comboBox20->SelectedItem->ToString();
		String^ time = comboBox21->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear4disS2.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox19->Items->Remove(comboBox19->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	if (selectedText == "software engineering") {
		String^ course = comboBox19->SelectedItem->ToString();
		String^ day = comboBox20->SelectedItem->ToString();
		String^ time = comboBox21->SelectedItem->ToString();

		if (course != nullptr && day != nullptr && time != nullptr)
		{

			{
				std::ofstream file("scheduleyear4seS2.txt", std::ios_base::app);

				if (file.is_open())
				{
					file << marshal_as<std::string>(course) << " "
						<< marshal_as<std::string>(day) << " "
						<< marshal_as<std::string>(time) << std::endl;

					file.close();

					MessageBox::Show("Course added successfully!", "Success");
					comboBox19->Items->Remove(comboBox19->SelectedItem); //removes the selected items from the combobox.

				}
				else
				{
					MessageBox::Show("Failed to open schedule file!", "Error");
				}

			}
		}


		else
		{
			MessageBox::Show("Please select course, day, and time.", "Input Error");
		}

	}
	else {

	}
}
private: System::Void comboBox19_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_student_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void comboBox29_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	admin->BringToFront();
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	main_menu->BringToFront();
}
private: System::Void button37_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name = textBox_student_name->Text;
	System::String^ id = textBox_student_id->Text;
	bool found = false;

	// Convert the name and ID to std::string
	std::string nameStr = msclr::interop::marshal_as<std::string>(name);
	std::string idStr = msclr::interop::marshal_as<std::string>(id);

	std::vector<std::string> fileNames = { "studentData4.txt", "studentData3.txt", "studentData2.txt", "studentData1.txt" };

	for (const std::string& fileName : fileNames) {
		// Open the text file for reading
		std::ifstream file(fileName);
		if (file.is_open()) {
			std::string line;
			std::string extractedLines;
			bool nameMatched = false;

			while (std::getline(file, line)) {
				if (line == nameStr) {
					// Read the next line (ID)
					if (!std::getline(file, line)) {
						break;  // Break if there is no ID line
					}
					if (line == idStr) {
						extractedLines += nameStr + "\n" + line + "\n";

						// Read the next 6 lines
						for (int i = 0; i < 6; i++) {
							if (!std::getline(file, line)) {
								break;  // Break if there are not enough lines remaining
							}
							extractedLines += line + "\n";
						}

						found = true;
						nameMatched = true;
						break;
					}
				}
			}

			// Close the file
			file.close();

			if (nameMatched) {
				// Update the label text with the extracted lines
				System::String^ extractedText = gcnew System::String(extractedLines.c_str());
				label47->Text = extractedText;
				StudentViewData->BringToFront();
				break;  // Break the loop if a match is found
			}
		}
	}

	if (!found) {
		MessageBox::Show("Name and ID combination not found in any file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentOptions->BringToFront();
}
private: System::Void label47_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
	   // Function to split a string into a vector of substrings based on a delimiter
	   std::vector<std::string> split(const std::string& str, char delimiter) {
		   std::vector<std::string> tokens;
		   std::string token;
		   std::istringstream tokenStream(str);

		   while (std::getline(tokenStream, token, delimiter)) {
			   tokens.push_back(token);
		   }

		   return tokens;
	   }

	   // Function to generate the schedule output based on the student's courses and the schedule lines
	   std::string generateScheduleOutput(const std::vector<std::string>& courses,
		   const std::vector<std::string>& scheduleLines) {
		   std::string scheduleOutput;

		   for (const std::string& course : courses) {
			   for (const std::string& scheduleLine : scheduleLines) {
				   std::vector<std::string> scheduleTokens = split(scheduleLine, ',');
				   std::string courseName = scheduleTokens[0];
				   std::string time = scheduleTokens[1];

				   if (courseName == course) {
					   scheduleOutput += "Course: " + courseName + ". Time: " + time + ".\n";
					   break;
				   }
			   }
		   }

		   return scheduleOutput;
	   }

private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentViewSchedule->BringToFront();

	System::String^ name = textBox_student_name->Text;
	System::String^ id = textBox_student_id->Text;

	// Convert the name and ID to std::string
	std::string nameStr = msclr::interop::marshal_as<std::string>(name);
	std::string idStr = msclr::interop::marshal_as<std::string>(id);

	// Open the student data file for reading
	std::ifstream studentDataFile("studentData1.txt");
	if (studentDataFile.is_open()) {
		std::string line;
		bool found = false;

		while (std::getline(studentDataFile, line)) {
			if (line == nameStr) {
				// Read the next line (ID)
				if (!std::getline(studentDataFile, line)) {
					break;  // Break if there is no ID line
				}
				if (line == idStr) {
					// Read the course list line
					if (!std::getline(studentDataFile, line)) {
						break;  // Break if there is no course list line
					}

					// Split the line into individual courses
					std::vector<std::string> courses;
					std::stringstream ss(line);
					std::string course;
					while (std::getline(ss, course, ',')) {
						courses.push_back(course);
					}

					// Open the schedule file for reading
					std::ifstream scheduleFile("schedule.txt");
					if (scheduleFile.is_open()) {
						std::string scheduleLine;
						std::string extractedSchedule;

						// Iterate through the schedule file
						while (std::getline(scheduleFile, scheduleLine)) {
							// Check if the course is found in the schedule
							for (const std::string& course : courses) {
								if (scheduleLine.find(course) != std::string::npos) {
									extractedSchedule += "Course: " + course + ". Time: " + scheduleLine + "\n";
									break;
								}
							}
						}

						// Close the schedule file
						scheduleFile.close();

						if (!extractedSchedule.empty()) {
							// Update the label text with the extracted schedule
							System::String^ extractedText = gcnew System::String(extractedSchedule.c_str());
							label47->Text = extractedText;
							StudentViewData->BringToFront();
							found = true;
						}
					}

					break;
				}
			}
		}

		// Close the student data file
		studentDataFile.close();

		if (!found) {
			MessageBox::Show("Name and ID combination not found in the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Failed to open the student data file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void StudentViewSchedule_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button36_Click_1(System::Object^ sender, System::EventArgs^ e) {
	StudentOptions->BringToFront();
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ course = comboBox6->SelectedItem->ToString();
	String^ day = comboBox4->SelectedItem->ToString();
	String^ time = comboBox5->SelectedItem->ToString();

	if (course != nullptr && day != nullptr && time != nullptr)
	{

		{
			std::ofstream file("scheduleyear2.txt", std::ios_base::app);

			if (file.is_open())
			{
				file << marshal_as<std::string>(course) << " "
					<< marshal_as<std::string>(day) << " "
					<< marshal_as<std::string>(time) << std::endl;

				file.close();

				MessageBox::Show("Course added successfully!", "Success");
				comboBox6->Items->Remove(comboBox6->SelectedItem); //removes the selected items from the combobox.

			}
			else
			{
				MessageBox::Show("Failed to open schedule file!", "Error");
			}

		}
	}
	else
	{
		MessageBox::Show("Please select course, day, and time.", "Input Error");
	}
}

private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ course = comboBox24->SelectedItem->ToString();
	String^ day = comboBox25->SelectedItem->ToString();
	String^ time = comboBox23->SelectedItem->ToString();

	if (course != nullptr && day != nullptr && time != nullptr)
	{

		{
			std::ofstream file("scheduleyear2.txt", std::ios_base::app);

			if (file.is_open())
			{
				file << marshal_as<std::string>(course) << " "
					<< marshal_as<std::string>(day) << " "
					<< marshal_as<std::string>(time) << std::endl;

				file.close();

				MessageBox::Show("Course added successfully!", "Success");
				comboBox24->Items->Remove(comboBox6->SelectedItem); //removes the selected items from the combobox.

			}
			else
			{
				MessageBox::Show("Failed to open schedule file!", "Error");
			}

		}
	}
	else
	{
		MessageBox::Show("Please select course, day, and time.", "Input Error");
	}
}
private: System::Void comboBox24_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
