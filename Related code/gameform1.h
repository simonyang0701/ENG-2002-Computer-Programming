#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<fstream>
#include"cardshow.h"
#include"rank.h"
#include"123.h"
#include"doyouwant.h"
#pragma once
using namespace std;
namespace miniprojectfirstassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for gameform1
	/// </summary>
	public ref class gameform1 : public System::Windows::Forms::Form
	{
	public:
		gameform1(char*username1,int score1)
		{
			x = 0;//the x position of the car
			
			InitializeComponent();

this->SetStyle(static_cast<ControlStyles>(
			ControlStyles::AllPaintingInWmPaint |
			ControlStyles::DoubleBuffer |
			ControlStyles::UserPaint), true);
			this->UpdateStyles();


				srand((unsigned)time(NULL));
				username=username1;
				String^ Username=Marshal::PtrToStringAnsi((IntPtr)username);
	
score=score1;
				
	label4->Text=""+score;// show the score if the player has logined before.
		button2->Enabled=false;//unable some buttons
					 button3->Enabled=false; 
					 		 button4->Enabled=false; 
							 		 button5->Enabled=false; 
									 	

			//TODO: Add the constructor code here
			//

		}

	protected:

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gameform1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;


	private:
		int x;//the x position of the car

		int creditget;
	
		int sw1;//the cards have been selected
		int getdouble;//double the score or not
		int score;//the score you have
		int scorepaid;//the score you paid for one round
		int nu1,nu2,nu3,nu4,nu5,nu6,nu7,nu8,nu9;//different random numbers
		int Score;
		int swap;
		int car1,car2,car3,car4,car5,car6;//cards numbers
		char *a,*b,*c,*d,*f,*g,*h,*i,*j;//address of different cards
		char *username;
		bool acl, bcl, ccl, dcl, fcl;//testing the card is upward or downword
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::ComponentModel::IContainer^  components;
			 /// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(gameform1::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(478, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Swap";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &gameform1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(674, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 43);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Extra";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &gameform1::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(89, 94);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(72, 97);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &gameform1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(242, 94);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 97);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &gameform1::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(415, 94);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(72, 97);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &gameform1::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(571, 94);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(72, 97);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &gameform1::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(731, 94);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(72, 97);
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &gameform1::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(932, 94);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(72, 97);
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(885, 302);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 42);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Play";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &gameform1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button6->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(503, 362);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(117, 27);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Save and Quit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &gameform1::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(648, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"20";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &gameform1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(589, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 19);
			this->label1->TabIndex = 15;
			this->label1->Text = L"paid";
			this->label1->Click += gcnew System::EventHandler(this, &gameform1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(147, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 15);
			this->label2->TabIndex = 30;
			this->label2->Text = L"you can only choose 3 pictures to swap";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(869, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 19);
			this->label3->TabIndex = 31;
			this->label3->Text = L"score";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(938, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 19);
			this->label4->TabIndex = 32;
			this->label4->Text = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &gameform1::label4_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(89, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 44);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gameform1::button1_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(149, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(338, 15);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Please enter the paid score and press start to start the game";
			this->label5->Click += gcnew System::EventHandler(this, &gameform1::label5_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &gameform1::timer1_Tick);
			// 
			// button2
			// 
			this->button2->AccessibleDescription = L"";
			this->button2->AccessibleName = L"";
			this->button2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(273, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 44);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Change";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &gameform1::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(273, 362);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 12);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Pay 40 for a new set";
			// 
			// gameform1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 411);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Name = L"gameform1";
			this->Text = L"gameform1";
			this->Load += gcnew System::EventHandler(this, &gameform1::gameform1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &gameform1::Form1_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (dcl == false)
			 {
				 if (swap <3)
				 {
					 pictureBox4->Image = Image::FromFile("cards\\b1fv.gif");
					 dcl = true;
					 swap += 1;
				 }
				 else
				 {

				 }
			 }
			 else
			 {
				 pictureBox4->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)d));
				 dcl = false;
				 swap -= 1;
			 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		 
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void gameform1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (acl == false)
			 {
				 if (swap <3)
				 {
					 pictureBox1->Image = Image::FromFile("cards\\b1fv.gif");
					 acl = true;
					 swap += 1;
				 }
				 else
				 {

				 }
			 }
			 else
			 {
				 pictureBox1->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)a));
				 acl = false;
				 swap -= 1;
			 }
			 
			 
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (bcl == false)
			 {
				 if (swap <3)
				 {
					 pictureBox2->Image = Image::FromFile("cards\\b1fv.gif");
					 bcl = true;
					 swap += 1;
				 }
				 else
				 {

				 }
			 }
			 else
			 {
				 pictureBox2->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)b));
				 bcl = false;
				 swap -= 1;
			 }
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ccl == false)
			 {
				 if (swap <3)
				 {
					 pictureBox3->Image = Image::FromFile("cards\\b1fv.gif");
					 ccl = true;
					 swap += 1;
				 }
				 else
				 {

				 }
			 }
			 else
			 {
				 pictureBox3->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)c));
				 ccl = false;
				 swap -= 1;
			 }
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (fcl == false)
			 {
				 if (swap <3)
				 {
					 pictureBox5->Image = Image::FromFile("cards\\b1fv.gif");
					 fcl = true;
					 swap += 1;
				 }
				 else
				 {

				 }
			 }
			 else
			 {
				 pictureBox5->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)f));
				 fcl = false;
				 swap -= 1;
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 button2->Enabled=false;
  if(acl==true)
      { pictureBox1->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)h));
    sw1+=1; car1=nu6;}
  else{}
         if(bcl==true)
		  if (sw1==0)
		   {pictureBox2->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)h));sw1+=1; car2=nu6;}
			else  {pictureBox2->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)i)); sw1+=1;car2=nu7;}
		 else{}
			 


		          if(ccl==true){
				   if(sw1==0)
					  {pictureBox3->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)h));sw1+=1; car3=nu6;}
				  else  if((sw1==1))
					  {pictureBox3->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)i)); sw1+=1; car3=nu7;}
				  else if(sw1==2)
				  {pictureBox3->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)j));sw1+=1;car3=nu8;}
				  else{}}
				  else{}



				  if(dcl==true){
					  if(sw1==0)
					  {pictureBox4->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)h));sw1+=1;car4=nu6;}
				    else if(sw1==1)
					{pictureBox4->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)i));sw1+=1;car4=nu7;}
					else if(sw1==2)
					{pictureBox4->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)j));sw1+=1;car4=nu8;}
					else{}
				  }
				  else{}


				  if(fcl==true)
				  {if(sw1==0)
				  {pictureBox5->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)j));sw1+=1;car5=nu8;}
				  else if(sw1==1)
				  {pictureBox5->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)i));sw1+=1;car5=nu7;}
				  else  if(sw1==2)
				  {pictureBox5->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)j));sw1+=1;car5=nu8;}
				  else{}}
				  else{}

				 button3->Enabled=false; 
				 		 button4->Enabled=true;
						 		 button1->Enabled=false; 
		 
			 
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox6->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)g));
			 pictureBox6->Visible=true;
			 button4->Enabled=false;
			 		 button5->Enabled=true; 
		 }
		 private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
  
judge a;
int gain=a.Fcredit(car1,car2,car3,car4,car5,car6)*scorepaid/20;
label4->Text=""+score;
if (gain>0)
{int gd;
gd=getdouble;
	doyouwant ^f1=gcnew doyouwant(gain,&gd);
f1->ShowDialog();
getdouble=gd;
score=score+gain*getdouble;
label4->Text=""+score;
button1->Enabled=true;
button5->Enabled=false;}
else if(score==0)
{ ofstream a(username,ios::in);
  a.seekp(20);
  char n0[7]={"000000"};
  a<<n0;
  a.close();
  this->Close();
}
else
{button1->Enabled=true;
button5->Enabled=false;}
			 pictureBox1->Visible=false; 
		 	 pictureBox2->Visible=false; 
			 pictureBox3->Visible=false; 
			 pictureBox4->Visible=false; 
			 pictureBox5->Visible=false; 
			 pictureBox6->Visible=false; 
		 }

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 	acl = false;
				bcl = false;
				ccl = false;
				dcl = false;
				fcl = false;
			 sw1=0;	
				swap = 0;
 			 nu1=rand()%53;
		do {nu2=rand()%53;}
			while(nu1==nu2);
			do {nu3=rand()%53;}
			while(nu3==nu2||nu3==nu1);
			do {nu4=rand()%53;}
			while(nu4==nu3||nu4==nu2||nu4==nu1);
			do {nu5=rand()%53;}
			while(nu5==nu4||nu5==nu3||nu5==nu2||nu5==nu1);
			do {nu6=rand()%53;}
			while(nu6==nu5||nu6==nu4||nu6==nu3||nu6==nu2||nu6==nu1);
			do {nu7=rand()%53;}
			while(nu7==nu6||nu7==nu5||nu7==nu4||nu7==nu3||nu7==nu2||nu7==nu1);
			do {nu8=rand()%53;}
			while(nu8==nu7||nu8==nu6||nu8==nu5||nu8==nu4||nu8==nu3||nu8==nu2||nu8==nu1);
			do {nu9=rand()%53;}
			while(nu9==nu8||nu9==nu7||nu9==nu6||nu9==nu5||nu9==nu4||nu9==nu3||nu9==nu2||nu9==nu1);
	       
			 	showcard n1;
 			a=n1.address(nu1);
			pictureBox1->Visible = false;pictureBox2->Visible = false;pictureBox3->Visible = false;pictureBox4->Visible = false;pictureBox5->Visible = false;

			
			showcard n2;
			b=n2.address(nu2);
			showcard n3;
			c=n3.address(nu3);
			showcard n4;
			d=n4.address(nu4);
			showcard n5;
			f=n5.address(nu5);
			showcard n6;
			h=n6.address(nu6);
			showcard n7;
			i=n7.address(nu7);
			showcard n8;
			j=n8.address(nu8);
			showcard n9;
			g=n9.address(nu9);
			car6=nu9; car1=nu1; car2=nu2; car3=nu3; car4=nu4; car5=nu5;
			 String^ scoreyoupaid=textBox1->Text;
int m=System::Convert::ToInt32(scoreyoupaid);scorepaid=m;
if (m>20||m==20)

 {
int cc=score-scorepaid;//deduct the scorepaid from the score
if(cc>0||cc==0)
{pictureBox1->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)a));
//			Marshal::FreeHGlobal((IntPtr)a);

			pictureBox2->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)b));
//			Marshal::FreeHGlobal((IntPtr)b);

			pictureBox3->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)c));
//			Marshal::FreeHGlobal((IntPtr)c);

			pictureBox4->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)d));
//			Marshal::FreeHGlobal((IntPtr)d);

			pictureBox5->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)f));
//			Marshal::FreeHGlobal((IntPtr)e);
			//
	pictureBox1->Visible = true;	pictureBox2->Visible = true;	pictureBox3->Visible = true;	
	pictureBox4->Visible = true;	pictureBox5->Visible = true; 		 button3->Enabled=true;  button1->Enabled=false;
	button2->Enabled=true; score=score-scorepaid;
	label4->Text=""+score;
}
 else{String^title="warning";//do not have enough score
String^message="you do not have enough score";
	MessageBox::Show(message,title,MessageBoxButtons::OK);}
}
else
{String^title="warning";//you input must be greater or equal to 20
String^message="you input must be greater or equal to 20";
	MessageBox::Show(message,title,MessageBoxButtons::OK);}


			
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 char sscore[7];			 
			 ofstream a(username,ios::in);
			 a.seekp(20);
			 itoa(score,sscore,10);//store score to the file, fill in the blank position with '0'

				 if (score<10)//score is one digit
				 {char a1[7]={"00000"};
			 strcat(a1,sscore);

			 a<<a1;
		}
				 else if(score<100&&score>9)//two digits
				 {
					 char a2[7]={"0000"};
					 strcat(a2,sscore);

			 a<<a2;
			}
				 else if(score<1000&&score>99)//three digits
				 {
					 char a3[7]={"000"};
					 strcat(a3,sscore);

			 a<<a3;
			 }
				 else if (score<10000&&score>999)//four digits
				 {
					 char a4[7]={"00"};
					 strcat(a4,sscore);			

			 a<<a4;
			}
				 else if (score<100000&&score>9999)//five digits
				 {
					 char a5[7]={"0"};
					 strcat(a5,sscore);			 

			 a<<a5;}
				 else if (score<1000000&&score>99999)//six digits
				 {

			 }

				 	 a.close();
					 char array1[21]={"--------------------"};
					 int m=0;
					 for(m;m<(strlen(username)-4);m++)
					 {
						 array1[m]=username[m];
					 }
					 list mm;
					 mm.gg(array1,score);//set up the rank list
			/*		 char usernamewrite[20];
					 strcpy(usernamewrite,username);
					 list m;
					 m.gg(usernamewrite,score);*/
				 
				 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }



protected: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			   	 	this->Invalidate();
	 }
private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		
				 if(x<this->Size.Width+400)   {x+=4;}
				 else{x=0;}
				 Bitmap ^ bp=gcnew Bitmap("car.png");
				 e->Graphics->DrawImage(bp,x-450,200);//We tested many times for these numbers.
			 	 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	acl = false;//do the similar thing as button1
				bcl = false;
				ccl = false;
				dcl = false;
				fcl = false;
			 sw1=0;	
				swap = 0;
 			 nu1=rand()%53;
		do {nu2=rand()%53;}
			while(nu1==nu2);
			do {nu3=rand()%53;}
			while(nu3==nu2||nu3==nu1);
			do {nu4=rand()%53;}
			while(nu4==nu3||nu4==nu2||nu4==nu1);
			do {nu5=rand()%53;}
			while(nu5==nu4||nu5==nu3||nu5==nu2||nu5==nu1);
			do {nu6=rand()%53;}
			while(nu6==nu5||nu6==nu4||nu6==nu3||nu6==nu2||nu6==nu1);
			do {nu7=rand()%53;}
			while(nu7==nu6||nu7==nu5||nu7==nu4||nu7==nu3||nu7==nu2||nu7==nu1);
			do {nu8=rand()%53;}
			while(nu8==nu7||nu8==nu6||nu8==nu5||nu8==nu4||nu8==nu3||nu8==nu2||nu8==nu1);
			do {nu9=rand()%53;}
			while(nu9==nu8||nu9==nu7||nu9==nu6||nu9==nu5||nu9==nu4||nu9==nu3||nu9==nu2||nu9==nu1);
	       
			 	showcard n1;
 			a=n1.address(nu1);
			

			
			showcard n2;
			b=n2.address(nu2);
			showcard n3;
			c=n3.address(nu3);
			showcard n4;
			d=n4.address(nu4);
			showcard n5;
			f=n5.address(nu5);
			showcard n6;
			h=n6.address(nu6);
			showcard n7;
			i=n7.address(nu7);
			showcard n8;
			j=n8.address(nu8);
			showcard n9;
			g=n9.address(nu9);
			car6=nu9; car1=nu1; car2=nu2; car3=nu3; car4=nu4; car5=nu5;
			score=score-40;

	if(score>0||score==0)
{pictureBox1->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)a));
//			Marshal::FreeHGlobal((IntPtr)a);

			pictureBox2->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)b));
//			Marshal::FreeHGlobal((IntPtr)b);

			pictureBox3->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)c));
//			Marshal::FreeHGlobal((IntPtr)c);

			pictureBox4->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)d));
//			Marshal::FreeHGlobal((IntPtr)d);

			pictureBox5->Image = Image::FromFile(Marshal::PtrToStringAnsi((IntPtr)f));
//			Marshal::FreeHGlobal((IntPtr)e);
			//
	pictureBox1->Visible = true;	pictureBox2->Visible = true;	pictureBox3->Visible = true;	
	pictureBox4->Visible = true;	pictureBox5->Visible = true; 		 button3->Enabled=true; }
	else
	{String^title="warning";
String^message="you do not have enough score";
	MessageBox::Show(message,title,MessageBoxButtons::OK);score=score+40;}
		 

label4->Text=""+score;
button2->Enabled=false;		 }
};
}