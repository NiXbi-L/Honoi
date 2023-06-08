#pragma once
#include "Game.h"
#using <System.dll>

namespace HonoITowers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Media;
	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	private: int rls;

	private: static  array<System::Drawing::Point>^ TowerCord_1 = gcnew array<System::Drawing::Point>(5)
	{
		System::Drawing::Point(50, 152),
			System::Drawing::Point(50, 134),
			System::Drawing::Point(50, 116),
			System::Drawing::Point(50, 97),
			System::Drawing::Point(50, 79)
	};
	private: static  array<System::Drawing::Point>^ TowerCord_3 = gcnew array<System::Drawing::Point>(5)
	{
		System::Drawing::Point(115, 152),
			System::Drawing::Point(115, 134),
			System::Drawing::Point(115, 116),
			System::Drawing::Point(115, 97),
			System::Drawing::Point(115, 79)
	};
	private: static  array<System::Drawing::Point>^ TowerCord_2 = gcnew array<System::Drawing::Point>(5)
	{
		System::Drawing::Point(188, 152),
			System::Drawing::Point(188, 134),
			System::Drawing::Point(188, 116),
			System::Drawing::Point(188, 97),
			System::Drawing::Point(188, 79)
	};

	private: bool GamerStatus = 0; // 0 - Выбор кольца 1 - Выбор столба

	private: System::Collections::Generic::List<int>^ tower1 = gcnew System::Collections::Generic::List<int>;
	private: System::Collections::Generic::List<int>^ tower2 = gcnew System::Collections::Generic::List<int>;
	private: System::Collections::Generic::List<int>^ tower3 = gcnew System::Collections::Generic::List<int>;

	public:
		Game(int rolss)
		{
			rls = rolss;
			InitializeComponent();
			printigRols();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ Two;
	private: System::Windows::Forms::PictureBox^ Three;


	private: System::Windows::Forms::PictureBox^ One;
	private: System::Windows::Forms::PictureBox^ Four;
	private: System::Windows::Forms::PictureBox^ Five;

	private: int score = 0; //кол во ходов

	private: int buff = 0;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Two = (gcnew System::Windows::Forms::PictureBox());
			this->Three = (gcnew System::Windows::Forms::PictureBox());
			this->One = (gcnew System::Windows::Forms::PictureBox());
			this->Four = (gcnew System::Windows::Forms::PictureBox());
			this->Five = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Two))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Three))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->One))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Four))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Five))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Controls->Add(this->Two);
			this->groupBox1->Controls->Add(this->Three);
			this->groupBox1->Controls->Add(this->One);
			this->groupBox1->Controls->Add(this->Four);
			this->groupBox1->Controls->Add(this->Five);
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Location = System::Drawing::Point(112, 116);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(235, 242);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"playing field";
			// 
			// Two
			// 
			this->Two->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Two->Location = System::Drawing::Point(32, 97);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(36, 12);
			this->Two->TabIndex = 6;
			this->Two->TabStop = false;
			this->Two->Click += gcnew System::EventHandler(this, &Game::Two_Click);
			// 
			// Three
			// 
			this->Three->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Three->Location = System::Drawing::Point(25, 116);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(49, 12);
			this->Three->TabIndex = 5;
			this->Three->TabStop = false;
			this->Three->Click += gcnew System::EventHandler(this, &Game::Three_Click);
			// 
			// One
			// 
			this->One->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->One->Location = System::Drawing::Point(37, 79);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(27, 12);
			this->One->TabIndex = 5;
			this->One->TabStop = false;
			this->One->Click += gcnew System::EventHandler(this, &Game::One_Click);
			// 
			// Four
			// 
			this->Four->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Four->Location = System::Drawing::Point(19, 134);
			this->Four->Name = L"Four";
			this->Four->Size = System::Drawing::Size(60, 12);
			this->Four->TabIndex = 4;
			this->Four->TabStop = false;
			this->Four->Click += gcnew System::EventHandler(this, &Game::Four_Click);
			// 
			// Five
			// 
			this->Five->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Five->Location = System::Drawing::Point(13, 152);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(72, 12);
			this->Five->TabIndex = 3;
			this->Five->TabStop = false;
			this->Five->Click += gcnew System::EventHandler(this, &Game::Five_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox4->Location = System::Drawing::Point(181, 37);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(15, 125);
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Game::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Location = System::Drawing::Point(108, 37);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(15, 125);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Game::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Location = System::Drawing::Point(42, 37);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(15, 125);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Game::pictureBox2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Moves: 0";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(358, 379);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Game";
			this->Text = L"Game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Two))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Three))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->One))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Four))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Five))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void printigRols() {
		switch (rls)
		{
		case 1:
			this->One->Hide();
			this->Two->Hide();
			this->Three->Hide();
			this->Four->Hide();
			break;
		case 2:
			this->One->Hide();
			this->Two->Hide();
			this->Three->Hide();
			break;
		case 3:
			this->One->Hide();
			this->Two->Hide();
			break;
		case 4:
			this->One->Hide();
			break;
		}
	}
	private: bool RollCheck(int list,int buff) {
		switch (list)
		{
		case 1:
			if (tower1->Count == 0) return 1;
			else if (tower1[tower1->Count - 1] < buff) return 1;
			else return 0;
		case 2:
			if (tower2->Count - 1 == 0) return 1;
			else if (tower2[tower2->Count - 1] < buff) return 1;
			else return 0;
		case 3:
			if (tower3->Count - 1 == 0) return 1;
			else if (tower3[tower3->Count - 1] < buff) return 1;
			else return 0;
			break;
		}
	
	}
	private: void IfGameEnd() {
		if (tower3->Count == rls) {
			MessageBox::Show("Кол во ходов: " + System::Convert::ToString(score));
			Application::Exit();
		}
	}
	private: System::Void One_Click(System::Object^ sender, System::EventArgs^ e) { //1 кольцо
		if (!GamerStatus){
			GamerStatus = 1;
			buff = 1;
		}
	}
	private: System::Void Two_Click(System::Object^ sender, System::EventArgs^ e) { //2 кольцо
		if (!GamerStatus) {
			GamerStatus = 1;
			buff = 1;
		}
	}
	private: System::Void Three_Click(System::Object^ sender, System::EventArgs^ e) { //3 кольцо
		if (!GamerStatus) {
			GamerStatus = 1;
			buff = 1;
		}
	}
	private: System::Void Four_Click(System::Object^ sender, System::EventArgs^ e) { //4 кольцо
		if (!GamerStatus) {
			GamerStatus = 1;
			buff = 1;
		}
	}
	private: System::Void Five_Click(System::Object^ sender, System::EventArgs^ e) { //5 кольцо
		if (!GamerStatus) {
			GamerStatus = 1;
			buff = 1;
		}
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (GamerStatus)
			if (RollCheck(1,buff)) {
			GamerStatus = 0;
			System::Drawing::Point p = TowerCord_1[tower1->Count];
			switch (buff)
			{
			case 1: 
				p.X -= (int)this->One->Width / 2;
				this->One->Location = p;
				break;
			case 2:
				p.X -= (int)this->Two->Width / 2;
				this->One->Location = p;
				break;
			case 3:
				p.X -= (int)this->Three->Width / 2;
				this->One->Location = p;
				break;
			case 4:
				p.X -= (int)this->Four->Width / 2;
				this->One->Location = p;
				break;
			case 5:
				p.X -= (int)this->Five->Width / 2;
				this->One->Location = p;
				break;
			}
			IfGameEnd();
		}
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (GamerStatus)
			if (RollCheck(1, buff)) {
				GamerStatus = 0;
				System::Drawing::Point p = TowerCord_1[tower1->Count];
				switch (buff)
				{
				case 1:
					p.X -= (int)this->One->Width / 2;
					this->One->Location = p;
					break;
				case 2:
					p.X -= (int)this->Two->Width / 2;
					this->One->Location = p;
					break;
				case 3:
					p.X -= (int)this->Three->Width / 2;
					this->One->Location = p;
					break;
				case 4:
					p.X -= (int)this->Four->Width / 2;
					this->One->Location = p;
					break;
				case 5:
					p.X -= (int)this->Five->Width / 2;
					this->One->Location = p;
					break;
				}
				IfGameEnd();
			}
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
