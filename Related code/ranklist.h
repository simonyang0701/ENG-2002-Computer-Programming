#pragma once
#include<iostream>
#include<fstream>
#include"string"
#include<string.h>
using namespace std;
using namespace System::Runtime::InteropServices;
namespace miniprojectfirstassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ranklist
	/// </summary>
	public ref class ranklist : public System::Windows::Forms::Form
	{
	public:
		ranklist(void)
		{
			InitializeComponent();

			ifstream q("Final.txt");
			char ch1[45],ch2[45],ch3[45],ch4[45],ch5[45],ch6[45],ch7[45],ch8[45],ch9[45],ch10[45],ch111[45];
			q.getline(ch1,45);
			q.getline(ch2,45);
			q.getline(ch3,45);
			q.getline(ch4,45);
			q.getline(ch5,45);
			q.getline(ch6,45);
			q.getline(ch7,45);
			q.getline(ch8,45);
			q.getline(ch9,45);
			q.getline(ch10,45);
			q.getline(ch111,45);
			q.close();
			String^ch11=Marshal::PtrToStringAnsi((IntPtr)ch1);
						String^ch22=Marshal::PtrToStringAnsi((IntPtr)ch2);
									String^ch33=Marshal::PtrToStringAnsi((IntPtr)ch3);
												String^ch44=Marshal::PtrToStringAnsi((IntPtr)ch4);
															String^ch55=Marshal::PtrToStringAnsi((IntPtr)ch5);
																		String^ch66=Marshal::PtrToStringAnsi((IntPtr)ch6);
																					String^ch77=Marshal::PtrToStringAnsi((IntPtr)ch7);
																								String^ch88=Marshal::PtrToStringAnsi((IntPtr)ch8);
																											String^ch99=Marshal::PtrToStringAnsi((IntPtr)ch9);
			String^ch100=Marshal::PtrToStringAnsi((IntPtr)ch10);
					String^ch1111=Marshal::PtrToStringAnsi((IntPtr)ch111);
			label1->Text=ch22;			label2->Text=ch33;			label3->Text=ch44;			label4->Text=ch55;			label5->Text=ch66;
			label6->Text=ch77;			label7->Text=ch88;			label8->Text=ch99;			label9->Text=ch100;			label10->Text=ch1111;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ranklist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ranklist::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(122, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(122, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(122, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(122, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(122, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(600, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(600, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(600, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 19);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(600, 230);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(600, 280);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"PMingLiU", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(443, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(257, 35);
			this->label11->TabIndex = 10;
			this->label11->Text = L"History Score List";
			// 
			// ranklist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 411);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"ranklist";
			this->Text = L"ranklist";
			this->Load += gcnew System::EventHandler(this, &ranklist::ranklist_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ranklist_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
