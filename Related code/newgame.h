#pragma once
#include <stdlib.h>   
#include <time.h>

namespace miniprojectfirstassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for newgame
	/// </summary>
	public ref class newgame : public System::Windows::Forms::Form
	{
	public:
		newgame(int * cget,int gain3)
		{
		
			InitializeComponent();

			gain=cget;
			gain4=gain3*2;
			label6->Text=""+gain4;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~newgame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		int gain4;
			int * gain;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(newgame::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(275, 120);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(312, 131);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"select your choice";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton2->Location = System::Drawing::Point(51, 84);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(170, 31);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"small number";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton1->Location = System::Drawing::Point(51, 32);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(148, 31);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"big number";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(820, 179);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"PLAY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &newgame::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(853, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(72, 97);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(27, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"2,3,4,5,6,7 is small number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(27, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(242, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"8,9,10,j,q,k is big number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(324, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(310, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"If you guess rightly, you will get:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(326, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(313, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"If you guess wrong, wou will get:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(657, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(657, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 24);
			this->label6->TabIndex = 8;
			this->label6->Text = L"label6";
			// 
			// newgame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 411);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"newgame";
			this->Text = L"newgame";
			this->Load += gcnew System::EventHandler(this, &newgame::newgame_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void newgame_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	srand((unsigned)time(0));
int n=rand()%11 + 2; //from 2 to 13
if(n==2)
pictureBox1->Image = Image::FromFile("cards\\c2.gif");
if(n==3)
pictureBox1->Image = Image::FromFile("cards\\c3.gif");
if(n==4)
pictureBox1->Image = Image::FromFile("cards\\c4.gif");
if(n==5)
pictureBox1->Image = Image::FromFile("cards\\c5.gif");
if(n==6)
pictureBox1->Image = Image::FromFile("cards\\c6.gif");
if(n==7)
pictureBox1->Image = Image::FromFile("cards\\c7.gif");
if(n==8)
pictureBox1->Image = Image::FromFile("cards\\c8.gif");
if(n==9)
pictureBox1->Image = Image::FromFile("cards\\c9.gif");
if(n==10)
pictureBox1->Image = Image::FromFile("cards\\c10.gif");
if(n==11)
pictureBox1->Image = Image::FromFile("cards\\cj.gif");
if(n==12)
pictureBox1->Image = Image::FromFile("cards\\cq.gif");
if(n==13)
pictureBox1->Image = Image::FromFile("cards\\ck.gif");

if (((radioButton1->Checked)&&(n<8))||((radioButton2->Checked)&&(n>7)))
{*gain=0;}
if (((radioButton2->Checked)&&(n<8))||((radioButton1->Checked)&&(n>7)))
{*gain=2;}
  	 
				 
	 button1->Enabled=false;

		 }
	
};
}
