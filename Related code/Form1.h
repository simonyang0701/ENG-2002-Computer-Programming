#pragma once
#include "newuser.h"
#include "gameform1.h"
#include "newgame.h"
#include "rules.h"
#include"compare.h"
#include"ranklist.h"
#include<stdlib.h>
#include<fstream>
#include<iostream>
#include<string.h>
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
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile("poker1.jpg");//Background picture.
			pictureBox1->Visible=true;
			pictureBox2->Image = Image::FromFile("456.png");
				pictureBox2->Visible=true;
			//
			int score=0;//TODO: Add the constructor code here
			//
		}

	protected:
		char *p;//get the username from the textbox1.
		char *q;//get the password from the textbox2.

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	protected: 
		int score;
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->Location = System::Drawing::Point(230, 261);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(125, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"USERNAME";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(125, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PASSWORD";
			// 
			// pictureBox1
			// 
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(572, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(391, 292);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->ForeColor = System::Drawing::Color::Cornsilk;
			this->button2->Location = System::Drawing::Point(489, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 45);
			this->button2->TabIndex = 6;
			this->button2->Text = L"The Rules";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button3->ForeColor = System::Drawing::Color::Cornsilk;
			this->button3->Location = System::Drawing::Point(293, 337);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 45);
			this->button3->TabIndex = 7;
			this->button3->Text = L"New User";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button4->ForeColor = System::Drawing::Color::Cornsilk;
			this->button4->Location = System::Drawing::Point(687, 337);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 45);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Start";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button5->ForeColor = System::Drawing::Color::Cornsilk;
			this->button5->Location = System::Drawing::Point(890, 337);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 45);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Quit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(110, 337);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 45);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Rank";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(27, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(517, 158);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 411);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 newuser ^ a = gcnew newuser;
			 a ->ShowDialog();//jump to the newuser form.
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 rules ^ b = gcnew rules;
			 b ->ShowDialog();//show the rules to the player.
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ username2=textBox1->Text;
			 String ^ password2=textBox2->Text;
			 p=(char*)Marshal::StringToHGlobalAnsi(username2).ToPointer();
			 q=(char*)Marshal::StringToHGlobalAnsi(password2).ToPointer();	
			 namepassword b(p,q);
			 //get the username and password to the pointer *p,*q.
			 if(b.compare(p,q)==0)//compare the password
			 {score=b.getscore();//get the score from the file.
	
			 //char nn[6]={'-1','-1','-1','-1','-1','-1'};

			 // for(int i=0;i<6;i++)
			 //{nn[i]= testing[i];
			//  }
			/*  char n0[1],n1[1],n2[1],n3[1],n4[1],n5[1];
			  n0[0]=testing[0];
			  if(n0=="")
			  {score=100;}
			  else{
			  n1[0]=testing[1];
			  if(n1=="")
			  {score=atoi(n0);}
			  else{n2[0]=testing[2];
			  if(n2==""){strcat(n0,n1);
			   score=atoi(n0);}
			  else{
			  n3[0]=testing[3];int testing=stoi(n3);
			  if(n3==""){strcat(n0,n1);strcat(n0,n2); score=atoi(n0);}
			  else{
			  n4[0]=testing[4];
			  if(n4==""){strcat(n0,n1);strcat(n0,n2);strcat(n0,n3);score=stoi(n0);}
			  else{
			  n5[0]=testing[5];
			  if(n5==""){strcat(n0,n1);strcat(n0,n1);strcat(n0,n3);strcat(n0,n4);score=atoi(n0);}
			  }}}}}*/
			/*  int m0; int m1; int m2; int m3; int m4; int m5;
			  m0=int(nn[0])-int("0");
			   m1=int(nn[1])-int("0");
			    m2=int(nn[2])-int("0");
				 m3=int(nn[3])-int("0");
				  m4=int(nn[4])-int("0");
				   m5=int(nn[5])-int("0");
				   */
				
				 gameform1 ^ c = gcnew gameform1(p,score);//transfer the usernmae and the score to the gameform1.
			 c ->ShowDialog();
			 }
			 else
			 {String ^title="warning";
			 String ^ message="wrong!";
			 MessageBox::Show(message,title,MessageBoxButtons::OK);//If the player enter wrong information, it will this window.
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
this->Close();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
 ranklist ^ rank = gcnew ranklist;//show the history score list of the game
			 rank ->ShowDialog();			

		 }
};
}

