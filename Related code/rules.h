#pragma once

namespace miniprojectfirstassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for rules
	/// </summary>
	public ref class rules : public System::Windows::Forms::Form
	{
	public:
		rules(void)
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
		~rules()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(rules::typeid));
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(3, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1104, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Royal Flush         A, K, Q, J, 10 all of the same suit.                         " 
				L"                                             10000";
			this->label1->Click += gcnew System::EventHandler(this, &rules::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(3, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1102, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Straight Flush      Five cards of the same suit in a sequence.                   " 
				L"                                          4000";
			this->label2->Click += gcnew System::EventHandler(this, &rules::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(3, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1086, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Four of a Kind     Four cards of the same rank, plus an unmatched card.          " 
				L"                                 800";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkGreen;
			this->label4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Location = System::Drawing::Point(3, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1084, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Full House           Three cards of the same rank, and another two cards of the s" 
				L"ame rank.                  200";
			this->label4->Click += gcnew System::EventHandler(this, &rules::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DarkGreen;
			this->label5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label5->Location = System::Drawing::Point(3, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1084, 27);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Flush                   Five cards of the same suit not in a sequence.           " 
				L"                                           150";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::DarkGreen;
			this->label6->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label6->Location = System::Drawing::Point(3, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1081, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Straight                Five cards in sequence, but in more than one suit.       " 
				L"                                        100";
			this->label6->Click += gcnew System::EventHandler(this, &rules::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::DarkGreen;
			this->label7->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label7->Location = System::Drawing::Point(3, 300);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1077, 27);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Three of a Kind    Three cards of the same rank, plus two unmatched cards.       " 
				L"                               60";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::DarkGreen;
			this->label8->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label8->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label8->Location = System::Drawing::Point(3, 340);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1118, 27);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Two Pairs   Two cards of the same rank and another two cards of the same rank,plu" 
				L"s an unmatched card. 40";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::DarkGreen;
			this->label9->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label9->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label9->Location = System::Drawing::Point(3, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(1117, 27);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Combination        Meaning                                                       " 
				L"                                             Credits won";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::DarkGreen;
			this->label10->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(3, 375);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(1080, 27);
			this->label10->TabIndex = 9;
			this->label10->Text = L"One Pair               Two cards of the same rank, plus three unmatched cards.   " 
				L"                                   20";
			// 
			// rules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1158, 411);
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
			this->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Name = L"rules";
			this->Text = L"rules";
			this->Load += gcnew System::EventHandler(this, &rules::rules_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rules_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
