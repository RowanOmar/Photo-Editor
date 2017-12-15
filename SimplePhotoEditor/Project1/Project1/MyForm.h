#pragma once
#include <cmath>
#include <String>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cvaux.hpp>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace cv;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::IO;


	
	using namespace std;
	

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


	
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  open;

	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;



	private: System::Windows::Forms::PictureBox^  pictureBox1;




	private: System::Windows::Forms::ToolStripMenuItem^  open1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  save;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;







	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;








	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button28;







	public: static System::Drawing::Bitmap^ result;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;

	private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::TrackBar^  trackBar1;
private: System::Windows::Forms::ComboBox^  comboBox4;
	public:






	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		//System::Drawing::Bitmap result;
		//System::Drawing::Bitmap PictureToHide = Null;
		//System::Drawing::Bitmap PictureEncoded = Null;
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->open1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1087, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->open,
					this->save, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// open
			// 
			this->open->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->open1 });
			this->open->Name = L"open";
			this->open->Size = System::Drawing::Size(143, 22);
			this->open->Text = L"Open Picture";
			this->open->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
			// 
			// open1
			// 
			this->open1->Name = L"open1";
			this->open1->Size = System::Drawing::Size(103, 22);
			this->open1->Text = L"Open";
			this->open1->Click += gcnew System::EventHandler(this, &MyForm::open1_Click);
			// 
			// save
			// 
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(143, 22);
			this->save->Text = L"save";
			this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(26, 88);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(0, 0);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(799, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 29);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Reduce Size";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(940, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(799, 130);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(98, 23);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Red";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(894, 130);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(97, 23);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Green";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(987, 130);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(86, 23);
			this->button12->TabIndex = 21;
			this->button12->Text = L"Blue";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(799, 159);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(98, 23);
			this->button13->TabIndex = 22;
			this->button13->Text = L"Negative(RG)";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(894, 159);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 23);
			this->button14->TabIndex = 23;
			this->button14->Text = L"Negative(RB)";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(987, 159);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(87, 23);
			this->button15->TabIndex = 24;
			this->button15->Text = L"Negative(BG)";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(861, 276);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 14);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Gray level transformations";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(799, 308);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(134, 51);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Contrast Stretching";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(959, 308);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 22);
			this->textBox2->TabIndex = 27;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(1026, 308);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 22);
			this->textBox3->TabIndex = 28;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(934, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 14);
			this->label3->TabIndex = 29;
			this->label3->Text = L"r1";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(997, 316);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 14);
			this->label4->TabIndex = 30;
			this->label4->Text = L"s1";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(934, 346);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 14);
			this->label5->TabIndex = 31;
			this->label5->Text = L"r2";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(956, 338);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 22);
			this->textBox4->TabIndex = 32;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1000, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 14);
			this->label6->TabIndex = 33;
			this->label6->Text = L"s2";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(1026, 338);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(32, 22);
			this->textBox5->TabIndex = 34;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(798, 365);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(134, 29);
			this->button17->TabIndex = 35;
			this->button17->Text = L"Image Negatives";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(939, 365);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(134, 29);
			this->button18->TabIndex = 36;
			this->button18->Text = L"Log";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(799, 400);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(134, 29);
			this->button19->TabIndex = 37;
			this->button19->Text = L"Power";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(936, 413);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 14);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Gamma";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(989, 408);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 22);
			this->textBox6->TabIndex = 39;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button27->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(799, 235);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(121, 29);
			this->button27->TabIndex = 48;
			this->button27->Text = L"Gray Shades";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(940, 240);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(133, 22);
			this->textBox7->TabIndex = 49;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button28->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(799, 27);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(273, 29);
			this->button28->TabIndex = 50;
			this->button28->Text = L"Undo";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Minimum", L"Maximum", L"Median", L"smoothing",
					L"weighted", L"Midpoint"
			});
			this->comboBox1->Location = System::Drawing::Point(799, 202);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 22);
			this->comboBox1->TabIndex = 53;
			this->comboBox1->Text = L"Spatial Filters";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Averaging", L"Desaturation", L"Luminosity BT 709",
					L"Luminosity BT 601", L"Decomposition max", L"Decomposition min", L"single channel"
			});
			this->comboBox2->Location = System::Drawing::Point(951, 202);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 22);
			this->comboBox2->TabIndex = 54;
			this->comboBox2->Text = L"Grayscale";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Arithmetic mean" });
			this->comboBox3->Location = System::Drawing::Point(799, 445);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(133, 22);
			this->comboBox3->TabIndex = 55;
			this->comboBox3->Text = L"Mean filters";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Laplacian +ve", L"Laplacian -ve", L"Sobel" });
			this->comboBox5->Location = System::Drawing::Point(939, 445);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 22);
			this->comboBox5->TabIndex = 57;
			this->comboBox5->Text = L"Laplacian +ve";
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(799, 496);
			this->trackBar1->Maximum = 360;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(261, 45);
			this->trackBar1->SmallChange = 45;
			this->trackBar1->TabIndex = 58;
			this->trackBar1->Value = 45;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Neglect", L"Averaging" });
			this->comboBox4->Location = System::Drawing::Point(799, 66);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(273, 22);
			this->comboBox4->TabIndex = 59;
			this->comboBox4->Text = L"Resolution";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1087, 634);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Photoshop";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}

 private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


	 Mat mat;
	 msclr::interop::marshal_context context;
	 std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	 //
	 mat = imread(s, IMREAD_COLOR);

	 int GVal1, GVal2, GVal3;
	 Mat NewMat = Mat::zeros(mat.size(), mat.type());

	 for (int i = 1;i<mat.rows;i += 2)
		 for (int j = 1;j < mat.cols;j += 2) {
			 GVal1 = mat.at<Vec3b>(i, j)[0];
			 GVal2 = mat.at<Vec3b>(i, j)[2];
			 GVal3 = mat.at<Vec3b>(i, j)[1];

			 NewMat.at<Vec3b>(i, j)[0] = NewMat.at<Vec3b>(i - 1, j)[0] = NewMat.at<Vec3b>(i, j - 1)[0] = NewMat.at<Vec3b>(i - 1, j - 1)[0] = GVal1;
			 NewMat.at<Vec3b>(i, j)[2] = NewMat.at<Vec3b>(i - 1, j)[2] = NewMat.at<Vec3b>(i, j - 1)[2] = NewMat.at<Vec3b>(i - 1, j - 1)[2] = GVal2;
			 NewMat.at<Vec3b>(i, j)[1] = NewMat.at<Vec3b>(i - 1, j)[1] = NewMat.at<Vec3b>(i, j - 1)[1] = NewMat.at<Vec3b>(i - 1, j - 1)[1] = GVal3;


		 }
	 System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	 System::IntPtr ptr(NewMat.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewMat.cols, NewMat.rows, NewMat.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	 System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
	 graphics->DrawImage(this->result, rect);
	 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	 {
		 try
		 {
			 System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			 System::String ^text = file_info->Extension;
			 if (text->Equals(".png"))
			 {
				 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			 }
			 else if (text->Equals(".bmp"))
			 {
				 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			 }
			 else if (text->Equals(".gif"))
			 {
				 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			 }
			 else if (text->Equals(".tiff") || text->Equals(".tif"))
			 {
				 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			 }
			 else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			 {
				 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			 }
		 }
		 catch (System::Exception^ ex)
		 {
			 MessageBox::Show(ex->Message);
		 }
	 }

		 }
private: System::Void open_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void open1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Mat img;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		openFileDialog1->Filter = "JPEG files (*.jpg)|*.jpg|Bitmap files (*.bmp)|*.bmp";
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	//
	img = imread(s, CV_LOAD_IMAGE_COLOR);
		
		try {
			//PictureToHideIn = new System::Drawing::Bitmap(openFileDialog1->FileName);
                pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
				int wid = std::fmax(this->ClientSize.Width,
					pictureBox1->Bounds.Right + pictureBox1->Left);
				int hgt = std::fmax(this->ClientSize.Height,
					pictureBox1->Bounds.Bottom + pictureBox1->Left);
				this->ClientSize = System::Drawing::Size(wid, hgt);
		}
		
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		
	/*	System::IO::StreamReader ^ sr = gcnew
			System::IO::StreamReader(openFileDialog1->FileName);
		MessageBox::Show(sr->ReadToEnd());
		sr->Close();*/
	}

	//namedWindow("image", CV_WINDOW_AUTOSIZE);
	//imshow("image", img);
	//waitKey(0);
}



private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	//if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	//{
	//	System::IO::StreamReader ^ sr = gcnew
	//		System::IO::StreamReader(openFileDialog1->FileName);
	//	MessageBox::Show(sr->ReadToEnd());
	//	sr->Close();
	//}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	int GVal1, GVal2, GVal3;
		Mat NewMat = Mat::zeros(mat.size(), mat.type());



		for (int i = 1;i<mat.rows;i += 2)
			for (int j = 1;j<mat.cols;j += 2) {

				
				   //Reduce resolution by averaging the four pixels
					GVal1 = (mat.at<Vec3b>(i, j)[0] + mat.at<Vec3b>(i-1, j)[0] + mat.at<Vec3b>(i, j-1)[0] + mat.at<Vec3b>(i-1, j-1)[0]) / 4;
					NewMat.at<Vec3b>(i, j)[0] = NewMat.at<Vec3b>(i - 1, j)[0] = NewMat.at<Vec3b>(i, j - 1)[0] = NewMat.at<Vec3b>(i - 1, j - 1)[0] = GVal1;

					GVal2 = (mat.at<Vec3b>(i, j)[2] + mat.at<Vec3b>(i - 1, j)[2] + mat.at<Vec3b>(i, j - 1)[2] + mat.at<Vec3b>(i - 1, j - 1)[2]) / 4;
					NewMat.at<Vec3b>(i, j)[2] = NewMat.at<Vec3b>(i - 1, j)[2] = NewMat.at<Vec3b>(i, j - 1)[2] = NewMat.at<Vec3b>(i - 1, j - 1)[2] = GVal2;

					GVal3 = (mat.at<Vec3b>(i, j)[1] + mat.at<Vec3b>(i - 1, j)[1] + mat.at<Vec3b>(i, j - 1)[1] + mat.at<Vec3b>(i - 1, j - 1)[1]) / 4;
					NewMat.at<Vec3b>(i, j)[1] = NewMat.at<Vec3b>(i - 1, j)[1] = NewMat.at<Vec3b>(i, j - 1)[1] = NewMat.at<Vec3b>(i - 1, j - 1)[1] = GVal3;
					
				
			}
		
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewMat.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewMat.cols, NewMat.rows, NewMat.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		//namedWindow("image2", CV_WINDOW_AUTOSIZE);
		//imshow("image2", NewMat);
		//waitKey(0);

}

	

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	double r = double::Parse(textBox1->Text);

	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	//
	mat = imread(s, IMREAD_COLOR);

	Mat img2 = Mat::zeros(mat.rows * r, mat.cols * r, mat.type());
	int gval;
	for (int i = 1; i < mat.rows; i += 2)
	{
		for (int j = 1; j < mat.cols; j += 2)
		{

			img2.at<Vec3b>(i* r, j* r)[0] = mat.at<Vec3b>(i, j)[0];
			img2.at<Vec3b>(i* r, j* r)[1] = mat.at<Vec3b>(i, j)[1];
			img2.at<Vec3b>(i* r, j* r)[2] = mat.at<Vec3b>(i, j)[2];

		}
	}

	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(img2.ptr());
	this->result = gcnew System::Drawing::Bitmap(img2.cols, img2.rows, img2.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);	
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int GVal1,GVal2,GVal3, i = 0;
	float sum1,sum2,sum3, min, max;
	for (int y = 1; y < mat.rows - 1; y++) {
		for (int x = 1; x < mat.cols - 1; x++) {
			sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0; i = 0;
			GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];
			sum1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			sum2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			sum3 = mat.at<Vec3b>(y - 1, x - 1)[1];

			for (int k = -1; k <= 1;k++) {
				for (int j = -1; j <= 1; j++) {
					GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
					GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
					GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

					if (sum1 > GVal1 || sum2 > GVal2 || sum3 > GVal3) {
						sum1 = GVal1;
						sum2 = GVal2;
						sum3 = GVal3;


					}
				}
			}
			NewImg.at<Vec3b>(y, x)[0] = sum1;
			NewImg.at<Vec3b>(y, x)[2] = sum2;
			NewImg.at<Vec3b>(y, x)[1] = sum3;
		}
	}

	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int GVal1, GVal2, GVal3;
	float sum1, sum2, sum3;
	for (int y = 1; y < mat.rows - 1; y++) {
		for (int x = 1; x < mat.cols - 1; x++) {
			sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0; 
			GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];
			sum1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			sum2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			sum3 = mat.at<Vec3b>(y - 1, x - 1)[1];

			for (int k = -1; k <= 1;k++) {
				for (int j = -1; j <= 1; j++) {
					GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
					GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
					GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

					if (sum1 < GVal1 || sum2 < GVal2 || sum3 < GVal3) {
						sum1 = GVal1;
						sum2 = GVal2;
						sum3 = GVal3;


					}
				}
			}
			NewImg.at<Vec3b>(y, x)[0] = sum1;
			NewImg.at<Vec3b>(y, x)[2] = sum2;
			NewImg.at<Vec3b>(y, x)[1] = sum3;
		}
	}

	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int GVal1, GVal2, GVal3, i = 0,w=0,n=0,Med1[9], Med2[9], Med3[9];

	for (int y = 1; y < mat.rows - 1; y++) {
		for (int x = 1; x < mat.cols - 1; x++) {
			i = 0; w = 0; n = 0;
			GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];


			for (int k = -1; k <= 1;k++) {
				for (int j = -1; j <= 1; j++) {
					GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
					GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
					GVal3 = mat.at<Vec3b>(y + j, x + k)[1];
					Med1[i++] = GVal1;
					Med2[w++] = GVal2;
					Med3[n++] = GVal3;




				}
			}
			NewImg.at<Vec3b>(y, x)[0] = MyMedian(Med1, 9);
			NewImg.at<Vec3b>(y, x)[2] = MyMedian(Med2, 9);
			NewImg.at<Vec3b>(y, x)[1] = MyMedian(Med3, 9);

		}
	}

	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}


	private: int  MyMedian(int Arrayy[], int Length) {
			 int temp;
			 for (int i = 0; i < Length - 1; i++)
				 for (int j = 0; j < Length - i - 1; j++) {
					 if (Arrayy[j] > Arrayy[j + 1]) {
						 temp = Arrayy[j];
						 Arrayy[j] = Arrayy[j + 1];
						 Arrayy[j + 1] = temp;
					 } 
				 }
			 return(Arrayy[Length / 2]);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int GVal1, GVal2, GVal3;
	float sum1, sum2, sum3;
	float Smooth[3][3] = {
		{ 1 / 9.0, 1 / 9.0, 1 / 9.0 },
		{ 1 / 9.0, 1 / 9.0, 1 / 9.0 },
		{ 1 / 9.0, 1 / 9.0, 1 / 9.0 }
	};
	for (int y = 1; y < mat.rows - 1; y++) {
		for (int x = 1; x < mat.cols - 1; x++) {
			sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0;
			GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];


			for (int k = -1; k <= 1;k++) {
				for (int j = -1; j <= 1; j++) {
					GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
					GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
					GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

					sum1 = sum1 + Smooth[j + 1][k + 1] * GVal1;
					sum2 = sum2 + Smooth[j + 1][k + 1] * GVal2;
					sum3 = sum3 + Smooth[j + 1][k + 1] * GVal3;


				}
			}
			NewImg.at<Vec3b>(y, x)[0] = sum1;
			NewImg.at<Vec3b>(y, x)[2] = sum2;
			NewImg.at<Vec3b>(y, x)[1] = sum3;
		}
	}

	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {


	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int GVal1, GVal2, GVal3;
	float sum1, sum2, sum3;
	float WeightedSmooth[3][3] = {
		{ 1 / 16.0, 2 / 16.0, 1 / 16.0 },
		{ 2 / 16.0, 4 / 16.0, 2 / 16.0 },
		{ 1 / 16.0, 2 / 16.0, 1 / 16.0 }
	};
	for (int y = 1; y < mat.rows - 1; y++) {
		for (int x = 1; x < mat.cols - 1; x++) {
			sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0;
			GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];


			for (int k = -1; k <= 1;k++) {
				for (int j = -1; j <= 1; j++) {
					GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
					GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
					GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

					sum1 = sum1 + WeightedSmooth[j + 1][k + 1] * GVal1;
					sum2 = sum2 + WeightedSmooth[j + 1][k + 1] * GVal2;
					sum3 = sum3 + WeightedSmooth[j + 1][k + 1] * GVal3;


				}
			}
			NewImg.at<Vec3b>(y, x)[0] = sum1;
			NewImg.at<Vec3b>(y, x)[2] = sum2;
			NewImg.at<Vec3b>(y, x)[1] = sum3;
		}
	}

	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int GVal1, GVal2, GVal3, i = 0;
	float  min1,min2,min3, max1,max2,max3;
	for (int y = 1; y < mat.rows - 1; y++) {
		for (int x = 1; x < mat.cols - 1; x++) {
			 i = 0;
			GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];
			min1 = max1 = mat.at<Vec3b>(y - 1, x - 1)[0];
			min2 = max2 = mat.at<Vec3b>(y - 1, x - 1)[2];
			min3 = max3 = mat.at<Vec3b>(y - 1, x - 1)[1];




			for (int k = -1; k <= 1;k++) {
				for (int j = -1; j <= 1; j++) {
					GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
					GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
					GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

					if (min1 > GVal1 || min2 > GVal2 || min3 > GVal3) {
					min1 = GVal1;
					min2 = GVal2;
					min3 = GVal3;

				}
					if (max1 < GVal1 || max2 < GVal2 || max3 < GVal3)
					{
						max1 = GVal1;
						max2 = GVal2;
						max3 = GVal3;


					}

				}
			}
			NewImg.at<Vec3b>(y, x)[0] = (1 / 2.0)*(min1 + max1);
			NewImg.at<Vec3b>(y, x)[2] = (1 / 2.0)*(min2 + max2);
			NewImg.at<Vec3b>(y, x)[1] = (1 / 2.0)*(min3 + max3);


		}
	}

	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.cols; j++)
		{
			NewImg.at<Vec3b>(i, j)[0] = 0;
			NewImg.at<Vec3b>(i, j)[1] = 0;
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.cols; j++)
		{
			NewImg.at<Vec3b>(i, j)[1] = -NewImg.at<Vec3b>(i, j)[1];
			NewImg.at<Vec3b>(i, j)[0] = -NewImg.at<Vec3b>(i, j)[0];
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.cols; j++)
		{
			NewImg.at<Vec3b>(i, j)[0] = 0;
			NewImg.at<Vec3b>(i, j)[2] = 0;
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.cols; j++)
		{
			NewImg.at<Vec3b>(i, j)[1] = 0;
			NewImg.at<Vec3b>(i, j)[2] = 0;
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.cols; j++)
		{
			NewImg.at<Vec3b>(i, j)[1] = -NewImg.at<Vec3b>(i, j)[1];
			NewImg.at<Vec3b>(i, j)[2] = -NewImg.at<Vec3b>(i, j)[2];
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.cols; j++)
		{
			NewImg.at<Vec3b>(i, j)[0] = -NewImg.at<Vec3b>(i, j)[0];
			NewImg.at<Vec3b>(i, j)[2] = -NewImg.at<Vec3b>(i, j)[2];
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
	public:   System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Bitmap ^img = gcnew Bitmap(this->pictureBox1->Width, this->pictureBox1->Height);
			 //this->pictureBox1->DrawToBitmap(img, this->pictureBox1->ClientRectangle);
		System::Drawing::Bitmap ^ bitmapFrame = safe_cast< System::Drawing::Bitmap ^ >(pictureBox1->Image);


			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 try
				 {
					 System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
					 System::String ^text = file_info->Extension;
					 if (text->Equals(".png"))
					 {
						 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
					 }
					 else if (text->Equals(".bmp"))
					 {
						 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

					 }
					 else if (text->Equals(".gif"))
					 {
						 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

					 }
					 else if (text->Equals(".tiff") || text->Equals(".tif"))
					 {
						 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

					 }
					 else if (text->Equals(".jpg") || text->Equals(".jpeg"))
					 {
						 result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

					 }
				 }
				 catch (System::Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }

		 }


private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int r1 = int::Parse(textBox2->Text);
	int s1 = int::Parse(textBox3->Text);
	int r2 = int::Parse(textBox4->Text);
	int s2 = int::Parse(textBox5->Text);

	for (int y = 0; y < mat.rows; y++) {
		for (int x = 0; x < mat.cols; x++) {
			for (int c = 0; c < 3; c++) {
				int output = computeOutput(mat.at<Vec3b>(y, x)[c], r1, s1, r2, s2);
				NewImg.at<Vec3b>(y, x)[c] = saturate_cast<uchar>(output);
			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}


private:int computeOutput(int x, int r1, int s1, int r2, int s2) {
			 float result;
			 if (0 <= x && x <= r1) {
				 result = s1 / r1 * x;
			 }
			 else if (r1 < x && x <= r2) {
				 result = ((s2 - s1) / (r2 - r1)) * (x - r1) + s1;
			 }
			 else if (r2 < x && x <= 255) {
				 result = ((255 - s2) / (255 - r2)) * (x - r2) + s2;
			 }
			 return (int)result;
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int maxgray = 256;
	for (int i = 0;i < mat.rows;i++) {
	for (int j = 0;j < mat.cols;j++) {
		for (int k = 0;k < 3; k++) {
			NewImg.at<Vec3b>(i, j)[k] = maxgray - 1 - mat.at<Vec3b>(i, j)[k];
		}

	}
}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	float Constant = 45;
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3; k++) {
				NewImg.at<Vec3b>(i, j)[k] = Constant*log(1 + mat.at<Vec3b>(i, j)[k]);
				if (NewImg.at<Vec3b>(i, j)[k]<0)     NewImg.at<Vec3b>(i, j)[k] = 0;
				if (NewImg.at<Vec3b>(i, j)[k]>255)   NewImg.at<Vec3b>(i, j)[k] = 255;
			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	float Constant_Power = 1.0;
	float Gamma= float::Parse(textBox6->Text);
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3; k++) {
				NewImg.at<Vec3b>(i, j)[k] = Constant_Power*pow((float)mat.at<Vec3b>(i, j)[k], Gamma);
				if (NewImg.at<Vec3b>(i, j)[k]<0)     NewImg.at<Vec3b>(i, j)[k] = 0;
				if (NewImg.at<Vec3b>(i, j)[k]>255)   NewImg.at<Vec3b>(i, j)[k] = 255;
			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	for (int i = 0;i < mat.rows;i++){
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				NewImg.at<Vec3b>(i, j)[k] = (RVal + GVal + BVal) / 3;

			}
		}
}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				NewImg.at<Vec3b>(i, j)[k] = (min(min(RVal, GVal), BVal) + max(max(RVal, GVal), BVal)) / 2;

			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				NewImg.at<Vec3b>(i, j)[k] = (0.2126*RVal) + (0.7152*GVal) + (0.0722*BVal);

			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				NewImg.at<Vec3b>(i, j)[k] = RVal;

			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				NewImg.at<Vec3b>(i, j)[k] = max(RVal,GVal,BVal);

			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				NewImg.at<Vec3b>(i, j)[k] = min(RVal, GVal, BVal);

			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				NewImg.at<Vec3b>(i, j)[k] = (0.299*RVal) + (0.587*GVal) + (0.114*BVal);

			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);

	Mat NewImg;
	NewImg = mat.clone();
	int RVal, GVal, BVal;
	float conversionfactor, average;
	int shade= int::Parse(textBox7->Text);
	conversionfactor = 255 / (shade - 1);
	for (int i = 0;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			for (int k = 0;k < 3;k++) {
				RVal = mat.at<Vec3b>(i, j)[2];
				GVal = mat.at<Vec3b>(i, j)[1];
				BVal = mat.at<Vec3b>(i, j)[0];
				average= (RVal + GVal + BVal) / 3;
				NewImg.at<Vec3b>(i, j)[k] = (int)(((average / conversionfactor) + 0.5)*conversionfactor);

			}
		}
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(mat.ptr());
	this->result = gcnew System::Drawing::Bitmap(mat.cols, mat.rows, mat.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	
}
private: System::Void menuStrip2_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void rotateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}
//private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
//	int angle = int::Parse(textBox8->Text);
//	Mat mat;
//	msclr::interop::marshal_context context;
//	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
//	mat = imread(s, IMREAD_COLOR);
//	Mat NewImg;
//
//	Point2f src_center(mat.cols / 2.0F, mat.rows / 2.0F);
//	Mat rot_mat = getRotationMatrix2D(src_center, angle, 1.0);
//	warpAffine(mat, NewImg, rot_mat, mat.size());
//
//	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
//	System::IntPtr ptr(NewImg.ptr());
//	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
//	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
//	graphics->DrawImage(this->result, rect);
//	//Sleep(500);
//	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
//	{
//		try
//		{
//			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
//			System::String ^text = file_info->Extension;
//			if (text->Equals(".png"))
//			{
//				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
//			}
//			else if (text->Equals(".bmp"))
//			{
//				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
//
//			}
//			else if (text->Equals(".gif"))
//			{
//				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);
//
//			}
//			else if (text->Equals(".tiff") || text->Equals(".tif"))
//			{
//				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);
//
//			}
//			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
//			{
//				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
//
//			}
//		}
//		catch (System::Exception^ ex)
//		{
//			MessageBox::Show(ex->Message);
//		}
//	}
//	
//}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	if (comboBox1->SelectedItem == "Maximum")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int GVal1, GVal2, GVal3;
		float sum1, sum2, sum3;
		for (int y = 1; y < mat.rows - 1; y++) {
			for (int x = 1; x < mat.cols - 1; x++) {
				sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0;
				GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];
				sum1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				sum2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				sum3 = mat.at<Vec3b>(y - 1, x - 1)[1];

				for (int k = -1; k <= 1;k++) {
					for (int j = -1; j <= 1; j++) {
						GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
						GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
						GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

						if (sum1 < GVal1 || sum2 < GVal2 || sum3 < GVal3) {
							sum1 = GVal1;
							sum2 = GVal2;
							sum3 = GVal3;


						}
					}
				}
				NewImg.at<Vec3b>(y, x)[0] = sum1;
				NewImg.at<Vec3b>(y, x)[2] = sum2;
				NewImg.at<Vec3b>(y, x)[1] = sum3;
			}
		}

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	}
	if (comboBox1->SelectedItem == "Minimum")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int GVal1, GVal2, GVal3, i = 0;
		float sum1, sum2, sum3, min, max;
		for (int y = 1; y < mat.rows - 1; y++) {
			for (int x = 1; x < mat.cols - 1; x++) {
				sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0; i = 0;
				GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];
				sum1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				sum2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				sum3 = mat.at<Vec3b>(y - 1, x - 1)[1];

				for (int k = -1; k <= 1;k++) {
					for (int j = -1; j <= 1; j++) {
						GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
						GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
						GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

						if (sum1 > GVal1 || sum2 > GVal2 || sum3 > GVal3) {
							sum1 = GVal1;
							sum2 = GVal2;
							sum3 = GVal3;


						}
					}
				}
				NewImg.at<Vec3b>(y, x)[0] = sum1;
				NewImg.at<Vec3b>(y, x)[2] = sum2;
				NewImg.at<Vec3b>(y, x)[1] = sum3;
			}
		}

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}

	if (comboBox1->SelectedItem == "Median")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int GVal1, GVal2, GVal3, i = 0, w = 0, n = 0, Med1[9], Med2[9], Med3[9];

		for (int y = 1; y < mat.rows - 1; y++) {
			for (int x = 1; x < mat.cols - 1; x++) {
				i = 0; w = 0; n = 0;
				GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];


				for (int k = -1; k <= 1;k++) {
					for (int j = -1; j <= 1; j++) {
						GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
						GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
						GVal3 = mat.at<Vec3b>(y + j, x + k)[1];
						Med1[i++] = GVal1;
						Med2[w++] = GVal2;
						Med3[n++] = GVal3;




					}
				}
				NewImg.at<Vec3b>(y, x)[0] = MyMedian(Med1, 9);
				NewImg.at<Vec3b>(y, x)[2] = MyMedian(Med2, 9);
				NewImg.at<Vec3b>(y, x)[1] = MyMedian(Med3, 9);

			}
		}

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

}
	if (comboBox1->SelectedItem == "smoothing")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int GVal1, GVal2, GVal3;
		float sum1, sum2, sum3;
		float Smooth[3][3] = {
			{ 1 / 9.0, 1 / 9.0, 1 / 9.0 },
			{ 1 / 9.0, 1 / 9.0, 1 / 9.0 },
			{ 1 / 9.0, 1 / 9.0, 1 / 9.0 }
		};
		for (int y = 1; y < mat.rows - 1; y++) {
			for (int x = 1; x < mat.cols - 1; x++) {
				sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0;
				GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];


				for (int k = -1; k <= 1;k++) {
					for (int j = -1; j <= 1; j++) {
						GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
						GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
						GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

						sum1 = sum1 + Smooth[j + 1][k + 1] * GVal1;
						sum2 = sum2 + Smooth[j + 1][k + 1] * GVal2;
						sum3 = sum3 + Smooth[j + 1][k + 1] * GVal3;


					}
				}
				NewImg.at<Vec3b>(y, x)[0] = sum1;
				NewImg.at<Vec3b>(y, x)[2] = sum2;
				NewImg.at<Vec3b>(y, x)[1] = sum3;
			}
		}

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	if (comboBox1->SelectedItem == "weighted")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int GVal1, GVal2, GVal3;
		float sum1, sum2, sum3;
		float WeightedSmooth[3][3] = {
			{ 1 / 16.0, 2 / 16.0, 1 / 16.0 },
			{ 2 / 16.0, 4 / 16.0, 2 / 16.0 },
			{ 1 / 16.0, 2 / 16.0, 1 / 16.0 }
		};
		for (int y = 1; y < mat.rows - 1; y++) {
			for (int x = 1; x < mat.cols - 1; x++) {
				sum1 = 0.0;  sum2 = 0.0; sum3 = 0.0;
				GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];


				for (int k = -1; k <= 1;k++) {
					for (int j = -1; j <= 1; j++) {
						GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
						GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
						GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

						sum1 = sum1 + WeightedSmooth[j + 1][k + 1] * GVal1;
						sum2 = sum2 + WeightedSmooth[j + 1][k + 1] * GVal2;
						sum3 = sum3 + WeightedSmooth[j + 1][k + 1] * GVal3;


					}
				}
				NewImg.at<Vec3b>(y, x)[0] = sum1;
				NewImg.at<Vec3b>(y, x)[2] = sum2;
				NewImg.at<Vec3b>(y, x)[1] = sum3;
			}
		}

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	}
	if (comboBox1->SelectedItem == "Midpoint")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int GVal1, GVal2, GVal3, i = 0;
		float  min1, min2, min3, max1, max2, max3;
		for (int y = 1; y < mat.rows - 1; y++) {
			for (int x = 1; x < mat.cols - 1; x++) {
				i = 0;
				GVal1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				GVal2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				GVal3 = mat.at<Vec3b>(y - 1, x - 1)[1];
				min1 = max1 = mat.at<Vec3b>(y - 1, x - 1)[0];
				min2 = max2 = mat.at<Vec3b>(y - 1, x - 1)[2];
				min3 = max3 = mat.at<Vec3b>(y - 1, x - 1)[1];




				for (int k = -1; k <= 1;k++) {
					for (int j = -1; j <= 1; j++) {
						GVal1 = mat.at<Vec3b>(y + j, x + k)[0];
						GVal2 = mat.at<Vec3b>(y + j, x + k)[2];
						GVal3 = mat.at<Vec3b>(y + j, x + k)[1];

						if (min1 > GVal1 || min2 > GVal2 || min3 > GVal3) {
							min1 = GVal1;
							min2 = GVal2;
							min3 = GVal3;

						}
						if (max1 < GVal1 || max2 < GVal2 || max3 < GVal3)
						{
							max1 = GVal1;
							max2 = GVal2;
							max3 = GVal3;


						}

					}
				}
				NewImg.at<Vec3b>(y, x)[0] = (1 / 2.0)*(min1 + max1);
				NewImg.at<Vec3b>(y, x)[2] = (1 / 2.0)*(min2 + max2);
				NewImg.at<Vec3b>(y, x)[1] = (1 / 2.0)*(min3 + max3);


			}
		}

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	}
}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->SelectedItem == "Averaging")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int RVal, GVal, BVal;
		for (int i = 0;i < mat.rows;i++) {
			for (int j = 0;j < mat.cols;j++) {
				for (int k = 0;k < 3;k++) {
					RVal = mat.at<Vec3b>(i, j)[2];
					GVal = mat.at<Vec3b>(i, j)[1];
					BVal = mat.at<Vec3b>(i, j)[0];
					NewImg.at<Vec3b>(i, j)[k] = (RVal + GVal + BVal) / 3;

				}
			}
		}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	}
	if (comboBox2->SelectedItem == "Desaturation")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int RVal, GVal, BVal;
		for (int i = 0;i < mat.rows;i++) {
			for (int j = 0;j < mat.cols;j++) {
				for (int k = 0;k < 3;k++) {
					RVal = mat.at<Vec3b>(i, j)[2];
					GVal = mat.at<Vec3b>(i, j)[1];
					BVal = mat.at<Vec3b>(i, j)[0];
					NewImg.at<Vec3b>(i, j)[k] = (min(min(RVal, GVal), BVal) + max(max(RVal, GVal), BVal)) / 2;

				}
			}
		}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	if (comboBox2->SelectedItem=="Luminosity BT 709")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int RVal, GVal, BVal;
		for (int i = 0;i < mat.rows;i++) {
			for (int j = 0;j < mat.cols;j++) {
				for (int k = 0;k < 3;k++) {
					RVal = mat.at<Vec3b>(i, j)[2];
					GVal = mat.at<Vec3b>(i, j)[1];
					BVal = mat.at<Vec3b>(i, j)[0];
					NewImg.at<Vec3b>(i, j)[k] = (0.2126*RVal) + (0.7152*GVal) + (0.0722*BVal);

				}
			}
		}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	}
	if (comboBox2->SelectedItem == "Luminosity BT 601")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int RVal, GVal, BVal;
		for (int i = 0;i < mat.rows;i++) {
			for (int j = 0;j < mat.cols;j++) {
				for (int k = 0;k < 3;k++) {
					RVal = mat.at<Vec3b>(i, j)[2];
					GVal = mat.at<Vec3b>(i, j)[1];
					BVal = mat.at<Vec3b>(i, j)[0];
					NewImg.at<Vec3b>(i, j)[k] = (0.299*RVal) + (0.587*GVal) + (0.114*BVal);

				}
			}
		}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	if (comboBox2->SelectedItem == "Decomposition max")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int RVal, GVal, BVal;
		for (int i = 0;i < mat.rows;i++) {
			for (int j = 0;j < mat.cols;j++) {
				for (int k = 0;k < 3;k++) {
					RVal = mat.at<Vec3b>(i, j)[2];
					GVal = mat.at<Vec3b>(i, j)[1];
					BVal = mat.at<Vec3b>(i, j)[0];
					NewImg.at<Vec3b>(i, j)[k] = max(RVal, GVal, BVal);

				}
			}
		}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	if (comboBox2->SelectedItem == "Decomposition min")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int RVal, GVal, BVal;
		for (int i = 0;i < mat.rows;i++) {
			for (int j = 0;j < mat.cols;j++) {
				for (int k = 0;k < 3;k++) {
					RVal = mat.at<Vec3b>(i, j)[2];
					GVal = mat.at<Vec3b>(i, j)[1];
					BVal = mat.at<Vec3b>(i, j)[0];
					NewImg.at<Vec3b>(i, j)[k] = min(RVal, GVal, BVal);

				}
			}
		}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	}
	if (comboBox2->SelectedItem == "single channel")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg;
		NewImg = mat.clone();
		int RVal, GVal, BVal;
		for (int i = 0;i < mat.rows;i++) {
			for (int j = 0;j < mat.cols;j++) {
				for (int k = 0;k < 3;k++) {
					RVal = mat.at<Vec3b>(i, j)[2];
					GVal = mat.at<Vec3b>(i, j)[1];
					BVal = mat.at<Vec3b>(i, j)[0];
					NewImg.at<Vec3b>(i, j)[k] = RVal;

				}
			}
		}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox3->SelectedItem == "Arithmetic mean")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg = ArithmeticMeanFilter(mat);


	
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
			System::String ^text = file_info->Extension;
			if (text->Equals(".png"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			}
			else if (text->Equals(".bmp"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

			}
			else if (text->Equals(".gif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

			}
			else if (text->Equals(".tiff") || text->Equals(".tif"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

			}
			else if (text->Equals(".jpg") || text->Equals(".jpeg"))
			{
				result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}

}
		 int Sum(int Ar[], int Len) {

			 int sum = 0;
			 for (int i = 0; i < Len; i++) {
				 sum += Ar[i];
			 }
			 return sum;
		 }

private: Mat ArithmeticMeanFilter(Mat origImg)
{
	Mat newImg = Mat::zeros(origImg.size(), origImg.type());
	int MedArrB[9];
	int MedArrG[9];
	int MedArrR[9];

	for (int i = 1; i < origImg.rows - 1; i++)
	{
		for (int j = 1; j < origImg.cols - 1; j++)
		{
			MedArrB[0] = origImg.at<Vec3b>(i, j)[2];
			MedArrB[1] = origImg.at<Vec3b>(i, j - 1)[2];
			MedArrB[2] = origImg.at<Vec3b>(i - 1, j - 1)[2];
			MedArrB[3] = origImg.at<Vec3b>(i - 1, j)[2];
			MedArrB[4] = origImg.at<Vec3b>(i - 1, j + 1)[2];
			MedArrB[5] = origImg.at<Vec3b>(i, j + 1)[2];
			MedArrB[6] = origImg.at<Vec3b>(i + 1, j - 1)[2];
			MedArrB[7] = origImg.at<Vec3b>(i + 1, j)[2];
			MedArrB[8] = origImg.at<Vec3b>(i + 1, j + 1)[2];

			newImg.at<Vec3b>(i, j)[2] = Sum(MedArrB, 9) / 9;

			MedArrG[0] = origImg.at<Vec3b>(i, j)[1];
			MedArrG[1] = origImg.at<Vec3b>(i, j - 1)[1];
			MedArrG[2] = origImg.at<Vec3b>(i - 1, j - 1)[1];
			MedArrG[3] = origImg.at<Vec3b>(i - 1, j)[1];
			MedArrG[4] = origImg.at<Vec3b>(i - 1, j + 1)[1];
			MedArrG[5] = origImg.at<Vec3b>(i, j + 1)[1];
			MedArrG[6] = origImg.at<Vec3b>(i + 1, j - 1)[1];
			MedArrG[7] = origImg.at<Vec3b>(i + 1, j)[1];
			MedArrG[8] = origImg.at<Vec3b>(i + 1, j + 1)[1];


			newImg.at<Vec3b>(i, j)[1] = Sum(MedArrG, 9) / 9;

			MedArrR[0] = origImg.at<Vec3b>(i, j)[0];
			MedArrR[1] = origImg.at<Vec3b>(i, j - 1)[0];
			MedArrR[2] = origImg.at<Vec3b>(i - 1, j - 1)[0];
			MedArrR[3] = origImg.at<Vec3b>(i - 1, j)[0];
			MedArrR[4] = origImg.at<Vec3b>(i - 1, j + 1)[0];
			MedArrR[5] = origImg.at<Vec3b>(i, j + 1)[0];
			MedArrR[6] = origImg.at<Vec3b>(i + 1, j - 1)[0];
			MedArrR[7] = origImg.at<Vec3b>(i + 1, j)[0];
			MedArrR[8] = origImg.at<Vec3b>(i + 1, j + 1)[0];


			newImg.at<Vec3b>(i, j)[0] = Sum(MedArrR, 9) / 9;
		}
	}

	for (int j = 0; j < origImg.cols; j++)
	{
		newImg.at<Vec3b>(0, j)[2] = origImg.at<Vec3b>(0, j)[2];
		newImg.at<Vec3b>(0, j)[1] = origImg.at<Vec3b>(0, j)[1];
		newImg.at<Vec3b>(0, j)[0] = origImg.at<Vec3b>(0, j)[0];

	}

	for (int i = 0; i < origImg.rows; i++)
	{
		newImg.at<Vec3b>(i, 0)[2] = origImg.at<Vec3b>(i, 0)[2];
		newImg.at<Vec3b>(i, 0)[1] = origImg.at<Vec3b>(i, 0)[1];
		newImg.at<Vec3b>(i, 0)[0] = origImg.at<Vec3b>(i, 0)[0];

	}


	for (int j = 0; j < origImg.cols; j++)
	{
		newImg.at<Vec3b>(origImg.rows - 1, j)[2] = origImg.at<Vec3b>(origImg.rows - 1, j)[2];
		newImg.at<Vec3b>(origImg.rows - 1, j)[1] = origImg.at<Vec3b>(origImg.rows - 1, j)[1];
		newImg.at<Vec3b>(origImg.rows - 1, j)[0] = origImg.at<Vec3b>(origImg.rows - 1, j)[0];

	}


	for (int i = 0; i < origImg.rows; i++)
	{
		newImg.at<Vec3b>(i, origImg.cols - 1)[2] = origImg.at<Vec3b>(i, origImg.cols - 1)[2];
		newImg.at<Vec3b>(i, origImg.cols - 1)[1] = origImg.at<Vec3b>(i, origImg.cols - 1)[1];
		newImg.at<Vec3b>(i, origImg.cols - 1)[0] = origImg.at<Vec3b>(i, origImg.cols - 1)[0];

	}

	return newImg;

}
		 private: Mat SobelFilter(Mat origImg) {

			 int Smooth[3][3] = {
				 { -1, -2, -1 },
				 { 0, 0, 0 },
				 { 1, 2, 1 }
			 };

			 Mat newImg = Mat::zeros(origImg.size(), origImg.type());

			 for (int i = 1; i < origImg.rows - 1; i++)
			 {
				 for (int j = 1; j < origImg.cols - 1; j++)
				 {
					 newImg.at<Vec3b>(i, j)[2] = ((origImg.at<Vec3b>(i, j)[2] * Smooth[1][1]) + (origImg.at<Vec3b>(i, j - 1)[2] * Smooth[1][0])
						 + (origImg.at<Vec3b>(i - 1, j - 1)[2] * Smooth[0][0]) + (origImg.at<Vec3b>(i - 1, j)[2] * Smooth[0][1])
						 + (origImg.at<Vec3b>(i - 1, j + 1)[2] * Smooth[0][2]) + (origImg.at<Vec3b>(i, j + 1)[2] * Smooth[1][2])
						 + (origImg.at<Vec3b>(i + 1, j - 1)[2] * Smooth[2][0]) + (origImg.at<Vec3b>(i + 1, j)[2] * Smooth[2][1])
						 + (origImg.at<Vec3b>(i + 1, j + 1)[2] * Smooth[2][2]));

					 newImg.at<Vec3b>(i, j)[1] = ((origImg.at<Vec3b>(i, j)[1] * Smooth[1][1]) + (origImg.at<Vec3b>(i, j - 1)[1] * Smooth[1][0])
						 + (origImg.at<Vec3b>(i - 1, j - 1)[1] * Smooth[0][0]) + (origImg.at<Vec3b>(i - 1, j)[1] * Smooth[0][1])
						 + (origImg.at<Vec3b>(i - 1, j + 1)[1] * Smooth[0][2]) + (origImg.at<Vec3b>(i, j + 1)[1] * Smooth[1][2])
						 + (origImg.at<Vec3b>(i + 1, j - 1)[1] * Smooth[2][0]) + (origImg.at<Vec3b>(i + 1, j)[1] * Smooth[2][1])
						 + (origImg.at<Vec3b>(i + 1, j + 1)[1] * Smooth[2][2]));

					 newImg.at<Vec3b>(i, j)[0] = ((origImg.at<Vec3b>(i, j)[0] * Smooth[1][1]) + (origImg.at<Vec3b>(i, j - 1)[0] * Smooth[1][0])
						 + (origImg.at<Vec3b>(i - 1, j - 1)[0] * Smooth[0][0]) + (origImg.at<Vec3b>(i - 1, j)[0] * Smooth[0][1])
						 + (origImg.at<Vec3b>(i - 1, j + 1)[0] * Smooth[0][2]) + (origImg.at<Vec3b>(i, j + 1)[0] * Smooth[1][2])
						 + (origImg.at<Vec3b>(i + 1, j - 1)[0] * Smooth[2][0]) + (origImg.at<Vec3b>(i + 1, j)[0] * Smooth[2][1])
						 + (origImg.at<Vec3b>(i + 1, j + 1)[0] * Smooth[2][2]));
				 }
			 }

			 for (int j = 0; j < origImg.cols; j++)
			 {
				 newImg.at<Vec3b>(0, j)[2] = origImg.at<Vec3b>(0, j)[2];
				 newImg.at<Vec3b>(0, j)[1] = origImg.at<Vec3b>(0, j)[1];
				 newImg.at<Vec3b>(0, j)[0] = origImg.at<Vec3b>(0, j)[0];

			 }

			 for (int i = 0; i < origImg.rows; i++)
			 {
				 newImg.at<Vec3b>(i, 0)[2] = origImg.at<Vec3b>(i, 0)[2];
				 newImg.at<Vec3b>(i, 0)[1] = origImg.at<Vec3b>(i, 0)[1];
				 newImg.at<Vec3b>(i, 0)[0] = origImg.at<Vec3b>(i, 0)[0];

			 }


			 for (int j = 0; j < origImg.cols; j++)
			 {
				 newImg.at<Vec3b>(origImg.rows - 1, j)[2] = origImg.at<Vec3b>(origImg.rows - 1, j)[2];
				 newImg.at<Vec3b>(origImg.rows - 1, j)[1] = origImg.at<Vec3b>(origImg.rows - 1, j)[1];
				 newImg.at<Vec3b>(origImg.rows - 1, j)[0] = origImg.at<Vec3b>(origImg.rows - 1, j)[0];

			 }


			 for (int i = 0; i < origImg.rows; i++)
			 {
				 newImg.at<Vec3b>(i, origImg.cols - 1)[2] = origImg.at<Vec3b>(i, origImg.cols - 1)[2];
				 newImg.at<Vec3b>(i, origImg.cols - 1)[1] = origImg.at<Vec3b>(i, origImg.cols - 1)[1];
				 newImg.at<Vec3b>(i, origImg.cols - 1)[0] = origImg.at<Vec3b>(i, origImg.cols - 1)[0];

			 }

			 return newImg;
		 }
				  private: Mat LaplacianFilter(Mat origImg, int flag) {

					  Mat newImg = Mat::zeros(origImg.size(), origImg.type());

					  if (flag == 1)      //Positive 
					  {
						  int SmoothPos[3][3] = {
							  { 1, 1, 1 },
							  { 1, -8, 1 },
							  { 1, 1, 1 }
						  };

						  for (int i = 1; i < origImg.rows - 1; i++)
						  {
							  for (int j = 1; j < origImg.cols - 1; j++)
							  {
								  newImg.at<Vec3b>(i, j)[2] = ((origImg.at<Vec3b>(i, j)[2] * SmoothPos[1][1]) + (origImg.at<Vec3b>(i, j - 1)[2] * SmoothPos[1][0])
									  + (origImg.at<Vec3b>(i - 1, j - 1)[2] * SmoothPos[0][0]) + (origImg.at<Vec3b>(i - 1, j)[2] * SmoothPos[0][1])
									  + (origImg.at<Vec3b>(i - 1, j + 1)[2] * SmoothPos[0][2]) + (origImg.at<Vec3b>(i, j + 1)[2] * SmoothPos[1][2])
									  + (origImg.at<Vec3b>(i + 1, j - 1)[2] * SmoothPos[2][0]) + (origImg.at<Vec3b>(i + 1, j)[2] * SmoothPos[2][1])
									  + (origImg.at<Vec3b>(i + 1, j + 1)[2] * SmoothPos[2][2]));

								  newImg.at<Vec3b>(i, j)[1] = ((origImg.at<Vec3b>(i, j)[1] * SmoothPos[1][1]) + (origImg.at<Vec3b>(i, j - 1)[1] * SmoothPos[1][0])
									  + (origImg.at<Vec3b>(i - 1, j - 1)[1] * SmoothPos[0][0]) + (origImg.at<Vec3b>(i - 1, j)[1] * SmoothPos[0][1])
									  + (origImg.at<Vec3b>(i - 1, j + 1)[1] * SmoothPos[0][2]) + (origImg.at<Vec3b>(i, j + 1)[1] * SmoothPos[1][2])
									  + (origImg.at<Vec3b>(i + 1, j - 1)[1] * SmoothPos[2][0]) + (origImg.at<Vec3b>(i + 1, j)[1] * SmoothPos[2][1])
									  + (origImg.at<Vec3b>(i + 1, j + 1)[1] * SmoothPos[2][2]));

								  newImg.at<Vec3b>(i, j)[0] = ((origImg.at<Vec3b>(i, j)[0] * SmoothPos[1][1]) + (origImg.at<Vec3b>(i, j - 1)[0] * SmoothPos[1][0])
									  + (origImg.at<Vec3b>(i - 1, j - 1)[0] * SmoothPos[0][0]) + (origImg.at<Vec3b>(i - 1, j)[0] * SmoothPos[0][1])
									  + (origImg.at<Vec3b>(i - 1, j + 1)[0] * SmoothPos[0][2]) + (origImg.at<Vec3b>(i, j + 1)[0] * SmoothPos[1][2])
									  + (origImg.at<Vec3b>(i + 1, j - 1)[0] * SmoothPos[2][0]) + (origImg.at<Vec3b>(i + 1, j)[0] * SmoothPos[2][1])
									  + (origImg.at<Vec3b>(i + 1, j + 1)[0] * SmoothPos[2][2]));
							  }
						  }

						  for (int j = 0; j < origImg.cols; j++)
						  {
							  newImg.at<Vec3b>(0, j)[2] = origImg.at<Vec3b>(0, j)[2];
							  newImg.at<Vec3b>(0, j)[1] = origImg.at<Vec3b>(0, j)[1];
							  newImg.at<Vec3b>(0, j)[0] = origImg.at<Vec3b>(0, j)[0];

						  }

						  for (int i = 0; i < origImg.rows; i++)
						  {
							  newImg.at<Vec3b>(i, 0)[2] = origImg.at<Vec3b>(i, 0)[2];
							  newImg.at<Vec3b>(i, 0)[1] = origImg.at<Vec3b>(i, 0)[1];
							  newImg.at<Vec3b>(i, 0)[0] = origImg.at<Vec3b>(i, 0)[0];

						  }


						  for (int j = 0; j < origImg.cols; j++)
						  {
							  newImg.at<Vec3b>(origImg.rows - 1, j)[2] = origImg.at<Vec3b>(origImg.rows - 1, j)[2];
							  newImg.at<Vec3b>(origImg.rows - 1, j)[1] = origImg.at<Vec3b>(origImg.rows - 1, j)[1];
							  newImg.at<Vec3b>(origImg.rows - 1, j)[0] = origImg.at<Vec3b>(origImg.rows - 1, j)[0];

						  }


						  for (int i = 0; i < origImg.rows; i++)
						  {
							  newImg.at<Vec3b>(i, origImg.cols - 1)[2] = origImg.at<Vec3b>(i, origImg.cols - 1)[2];
							  newImg.at<Vec3b>(i, origImg.cols - 1)[1] = origImg.at<Vec3b>(i, origImg.cols - 1)[1];
							  newImg.at<Vec3b>(i, origImg.cols - 1)[0] = origImg.at<Vec3b>(i, origImg.cols - 1)[0];

						  }

					  }
					  else      //Negative
					  {
						  int SmoothNeg[3][3] = {
							  { -1, -1, -1 },
							  { -1, 8, -1 },
							  { -1, -1, -1 }
						  };


						  for (int i = 1; i < origImg.rows - 1; i++)
						  {
							  for (int j = 1; j < origImg.cols - 1; j++)
							  {
								  newImg.at<Vec3b>(i, j)[2] = ((origImg.at<Vec3b>(i, j)[2] * SmoothNeg[1][1]) + (origImg.at<Vec3b>(i, j - 1)[2] * SmoothNeg[1][0])
									  + (origImg.at<Vec3b>(i - 1, j - 1)[2] * SmoothNeg[0][0]) + (origImg.at<Vec3b>(i - 1, j)[2] * SmoothNeg[0][1])
									  + (origImg.at<Vec3b>(i - 1, j + 1)[2] * SmoothNeg[0][2]) + (origImg.at<Vec3b>(i, j + 1)[2] * SmoothNeg[1][2])
									  + (origImg.at<Vec3b>(i + 1, j - 1)[2] * SmoothNeg[2][0]) + (origImg.at<Vec3b>(i + 1, j)[2] * SmoothNeg[2][1])
									  + (origImg.at<Vec3b>(i + 1, j + 1)[2] * SmoothNeg[2][2]));

								  newImg.at<Vec3b>(i, j)[1] = ((origImg.at<Vec3b>(i, j)[1] * SmoothNeg[1][1]) + (origImg.at<Vec3b>(i, j - 1)[1] * SmoothNeg[1][0])
									  + (origImg.at<Vec3b>(i - 1, j - 1)[1] * SmoothNeg[0][0]) + (origImg.at<Vec3b>(i - 1, j)[1] * SmoothNeg[0][1])
									  + (origImg.at<Vec3b>(i - 1, j + 1)[1] * SmoothNeg[0][2]) + (origImg.at<Vec3b>(i, j + 1)[1] * SmoothNeg[1][2])
									  + (origImg.at<Vec3b>(i + 1, j - 1)[1] * SmoothNeg[2][0]) + (origImg.at<Vec3b>(i + 1, j)[1] * SmoothNeg[2][1])
									  + (origImg.at<Vec3b>(i + 1, j + 1)[1] * SmoothNeg[2][2]));

								  newImg.at<Vec3b>(i, j)[0] = ((origImg.at<Vec3b>(i, j)[0] * SmoothNeg[1][1]) + (origImg.at<Vec3b>(i, j - 1)[0] * SmoothNeg[1][0])
									  + (origImg.at<Vec3b>(i - 1, j - 1)[0] * SmoothNeg[0][0]) + (origImg.at<Vec3b>(i - 1, j)[0] * SmoothNeg[0][1])
									  + (origImg.at<Vec3b>(i - 1, j + 1)[0] * SmoothNeg[0][2]) + (origImg.at<Vec3b>(i, j + 1)[0] * SmoothNeg[1][2])
									  + (origImg.at<Vec3b>(i + 1, j - 1)[0] * SmoothNeg[2][0]) + (origImg.at<Vec3b>(i + 1, j)[0] * SmoothNeg[2][1])
									  + (origImg.at<Vec3b>(i + 1, j + 1)[0] * SmoothNeg[2][2]));
							  }
						  }

						  for (int j = 0; j < origImg.cols; j++)
						  {
							  newImg.at<Vec3b>(0, j)[2] = origImg.at<Vec3b>(0, j)[2];
							  newImg.at<Vec3b>(0, j)[1] = origImg.at<Vec3b>(0, j)[1];
							  newImg.at<Vec3b>(0, j)[0] = origImg.at<Vec3b>(0, j)[0];

						  }

						  for (int i = 0; i < origImg.rows; i++)
						  {
							  newImg.at<Vec3b>(i, 0)[2] = origImg.at<Vec3b>(i, 0)[2];
							  newImg.at<Vec3b>(i, 0)[1] = origImg.at<Vec3b>(i, 0)[1];
							  newImg.at<Vec3b>(i, 0)[0] = origImg.at<Vec3b>(i, 0)[0];

						  }


						  for (int j = 0; j < origImg.cols; j++)
						  {
							  newImg.at<Vec3b>(origImg.rows - 1, j)[2] = origImg.at<Vec3b>(origImg.rows - 1, j)[2];
							  newImg.at<Vec3b>(origImg.rows - 1, j)[1] = origImg.at<Vec3b>(origImg.rows - 1, j)[1];
							  newImg.at<Vec3b>(origImg.rows - 1, j)[0] = origImg.at<Vec3b>(origImg.rows - 1, j)[0];

						  }


						  for (int i = 0; i < origImg.rows; i++)
						  {
							  newImg.at<Vec3b>(i, origImg.cols - 1)[2] = origImg.at<Vec3b>(i, origImg.cols - 1)[2];
							  newImg.at<Vec3b>(i, origImg.cols - 1)[1] = origImg.at<Vec3b>(i, origImg.cols - 1)[1];
							  newImg.at<Vec3b>(i, origImg.cols - 1)[0] = origImg.at<Vec3b>(i, origImg.cols - 1)[0];

						  }


					  }

					  return newImg;
				  }

private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox5->SelectedItem == "Laplacian +ve")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg = LaplacianFilter(mat,1);



		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	if (comboBox5->SelectedItem == "Laplacian -ve")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg = LaplacianFilter(mat, 2);



		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	if (comboBox5->SelectedItem == "Sobel")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		Mat NewImg = SobelFilter(mat);



		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewImg.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	Mat mat;
	msclr::interop::marshal_context context;
	std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
	mat = imread(s, IMREAD_COLOR);
	Mat NewImg = mat.clone();


	int angle = trackBar1->Value;
	Point2f src_center(mat.cols / 2.0F, mat.rows / 2.0F);
	Mat rot_mat = getRotationMatrix2D(src_center, angle, 1.0);
	warpAffine(mat, NewImg, rot_mat, mat.size());



	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(NewImg.ptr());
	this->result = gcnew System::Drawing::Bitmap(NewImg.cols, NewImg.rows, NewImg.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, this->result->Width, this->result->Height);
	graphics->DrawImage(this->result, rect);
	

}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox4->SelectedItem == "Neglect")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		//
		mat = imread(s, IMREAD_COLOR);

		int GVal1, GVal2, GVal3;
		Mat NewMat = Mat::zeros(mat.size(), mat.type());

		for (int i = 1;i<mat.rows;i += 2)
			for (int j = 1;j < mat.cols;j += 2) {
				GVal1 = mat.at<Vec3b>(i, j)[0];
				GVal2 = mat.at<Vec3b>(i, j)[2];
				GVal3 = mat.at<Vec3b>(i, j)[1];

				NewMat.at<Vec3b>(i, j)[0] = NewMat.at<Vec3b>(i - 1, j)[0] = NewMat.at<Vec3b>(i, j - 1)[0] = NewMat.at<Vec3b>(i - 1, j - 1)[0] = GVal1;
				NewMat.at<Vec3b>(i, j)[2] = NewMat.at<Vec3b>(i - 1, j)[2] = NewMat.at<Vec3b>(i, j - 1)[2] = NewMat.at<Vec3b>(i - 1, j - 1)[2] = GVal2;
				NewMat.at<Vec3b>(i, j)[1] = NewMat.at<Vec3b>(i - 1, j)[1] = NewMat.at<Vec3b>(i, j - 1)[1] = NewMat.at<Vec3b>(i - 1, j - 1)[1] = GVal3;


			}
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewMat.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewMat.cols, NewMat.rows, NewMat.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	if (comboBox4->SelectedItem == "Averaging")
	{
		Mat mat;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(openFileDialog1->FileName);
		mat = imread(s, IMREAD_COLOR);

		int GVal1, GVal2, GVal3;
		Mat NewMat = Mat::zeros(mat.size(), mat.type());



		for (int i = 1;i<mat.rows;i += 2)
			for (int j = 1;j<mat.cols;j += 2) {


				//Reduce resolution by averaging the four pixels
				GVal1 = (mat.at<Vec3b>(i, j)[0] + mat.at<Vec3b>(i - 1, j)[0] + mat.at<Vec3b>(i, j - 1)[0] + mat.at<Vec3b>(i - 1, j - 1)[0]) / 4;
				NewMat.at<Vec3b>(i, j)[0] = NewMat.at<Vec3b>(i - 1, j)[0] = NewMat.at<Vec3b>(i, j - 1)[0] = NewMat.at<Vec3b>(i - 1, j - 1)[0] = GVal1;

				GVal2 = (mat.at<Vec3b>(i, j)[2] + mat.at<Vec3b>(i - 1, j)[2] + mat.at<Vec3b>(i, j - 1)[2] + mat.at<Vec3b>(i - 1, j - 1)[2]) / 4;
				NewMat.at<Vec3b>(i, j)[2] = NewMat.at<Vec3b>(i - 1, j)[2] = NewMat.at<Vec3b>(i, j - 1)[2] = NewMat.at<Vec3b>(i - 1, j - 1)[2] = GVal2;

				GVal3 = (mat.at<Vec3b>(i, j)[1] + mat.at<Vec3b>(i - 1, j)[1] + mat.at<Vec3b>(i, j - 1)[1] + mat.at<Vec3b>(i - 1, j - 1)[1]) / 4;
				NewMat.at<Vec3b>(i, j)[1] = NewMat.at<Vec3b>(i - 1, j)[1] = NewMat.at<Vec3b>(i, j - 1)[1] = NewMat.at<Vec3b>(i - 1, j - 1)[1] = GVal3;


			}

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(NewMat.ptr());
		this->result = gcnew System::Drawing::Bitmap(NewMat.cols, NewMat.rows, NewMat.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
		graphics->DrawImage(this->result, rect);
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				System::IO::FileInfo ^ file_info = gcnew System::IO::FileInfo(saveFileDialog1->FileName);
				System::String ^text = file_info->Extension;
				if (text->Equals(".png"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (text->Equals(".bmp"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);

				}
				else if (text->Equals(".gif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Gif);

				}
				else if (text->Equals(".tiff") || text->Equals(".tif"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Tiff);

				}
				else if (text->Equals(".jpg") || text->Equals(".jpeg"))
				{
					result->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
}
};
}
