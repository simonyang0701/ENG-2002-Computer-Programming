#pragma once
#include"newgame.h"

namespace miniprojectfirstassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for doyouwant
	/// </summary>
	public ref class doyouwant : public System::Windows::Forms::Form
	{
	public:
		doyouwant(int gain1,int *mm)
		{
			InitializeComponent();
			label3->Text=""+gain1;
			gain2=gain1;
			getdouble=mm;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~doyouwant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private:
		int gain2;//transfer the score from  gameform1
		int *getdouble;//it is just the getdouble
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(doyouwant::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(400, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Do you want to play a guess game\?";
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(483, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Yes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &doyouwant::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(483, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"No";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &doyouwant::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(88, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"This round you gaet:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(127, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &doyouwant::label3_Click);
			// 
			// doyouwant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 411);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"doyouwant";
			this->Text = L"doyouwant";
			this->Load += gcnew System::EventHandler(this, &doyouwant::doyouwant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void doyouwant_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int mm;//store getdouble

newgame ^ f1= gcnew newgame(&mm,gain2);//transfer the address and the score the user win to newgame form
f1->ShowDialog();
*getdouble=mm;
this->Close();

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
			 *getdouble=1;//return the original score the user gained
		 }
};
}
