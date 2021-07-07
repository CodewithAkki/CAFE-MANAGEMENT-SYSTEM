#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace PBLMINI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Media;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			
			InitializeComponent();
			timer1->Start();
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
	private: System::Windows::Forms::PictureBox^  cafeimage;
	private: System::Windows::Forms::TextBox^  txtusername;
	protected:

	private: System::Windows::Forms::TextBox^  txtpass;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lauser;
	private: System::Windows::Forms::Label^  lapass;
	private: System::Windows::Forms::Label^  lalogin;



	private: System::Windows::Forms::Label^  lamenu;
	private: System::Windows::Forms::Label^  laabout;
	private: System::Windows::Forms::Label^  lacontact;
	private: System::Windows::Forms::Label^  la1login;
	private: System::Windows::Forms::Label^  la1menu;
	private: System::Windows::Forms::Label^  la1contct;
	private: System::Windows::Forms::Label^  la1about;
	private: System::Windows::Forms::PictureBox^  imgabout;
	private: System::Windows::Forms::PictureBox^  imgcontactus;
	private: System::Windows::Forms::PictureBox^  imgpasta;
	private: System::Windows::Forms::PictureBox^  imgdonat;
	private: System::Windows::Forms::PictureBox^  sandwitch;
	private: System::Windows::Forms::PictureBox^  imgsoup;
	private: System::Windows::Forms::PictureBox^  imgburger;
	private: System::Windows::Forms::PictureBox^  imgice;
	private: System::Windows::Forms::PictureBox^  imgtea;
	private: System::Windows::Forms::PictureBox^  imgjuce;
	private: System::Windows::Forms::PictureBox^  imgcake;
	private: System::Windows::Forms::PictureBox^  img;
	private: System::Windows::Forms::TextBox^  txttotal;

	private: System::Windows::Forms::ComboBox^  combosandwitch;

	private: System::Windows::Forms::ComboBox^  combopasta;
	private: System::Windows::Forms::ComboBox^  combodesert;





	private: System::Windows::Forms::ComboBox^  comboburger;

	private: System::Windows::Forms::ComboBox^  combosoup;
	private: System::Windows::Forms::ComboBox^  combotea;
	private: System::Windows::Forms::ComboBox^  comboice;

	private:

	private: System::Windows::Forms::ComboBox^  combocake;





	private: System::Windows::Forms::ComboBox^  combosmothie;
	private: System::Windows::Forms::ComboBox^  combobasked;
	private: System::Windows::Forms::Label^  lacoffee;
	private: System::Windows::Forms::Label^  laburger;
	private: System::Windows::Forms::Label^  lasmothie;
	private: System::Windows::Forms::Label^  laatast;
	private: System::Windows::Forms::Label^  lapizza;
	private: System::Windows::Forms::Label^  laice;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lasoup;
	private: System::Windows::Forms::Label^  ladonat;
	private: System::Windows::Forms::Label^  lafrizz;
	private: System::Windows::Forms::Button^  butbillform;
	private: System::Windows::Forms::Label^  logout;
	private: System::Windows::Forms::TextBox^  Email;
	private: System::Windows::Forms::Label^  laemail;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;







	private:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->cafeimage = (gcnew System::Windows::Forms::PictureBox());
			this->txtusername = (gcnew System::Windows::Forms::TextBox());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lauser = (gcnew System::Windows::Forms::Label());
			this->lapass = (gcnew System::Windows::Forms::Label());
			this->lalogin = (gcnew System::Windows::Forms::Label());
			this->lamenu = (gcnew System::Windows::Forms::Label());
			this->laabout = (gcnew System::Windows::Forms::Label());
			this->lacontact = (gcnew System::Windows::Forms::Label());
			this->la1login = (gcnew System::Windows::Forms::Label());
			this->la1menu = (gcnew System::Windows::Forms::Label());
			this->la1contct = (gcnew System::Windows::Forms::Label());
			this->la1about = (gcnew System::Windows::Forms::Label());
			this->imgabout = (gcnew System::Windows::Forms::PictureBox());
			this->imgcontactus = (gcnew System::Windows::Forms::PictureBox());
			this->imgpasta = (gcnew System::Windows::Forms::PictureBox());
			this->imgdonat = (gcnew System::Windows::Forms::PictureBox());
			this->sandwitch = (gcnew System::Windows::Forms::PictureBox());
			this->imgsoup = (gcnew System::Windows::Forms::PictureBox());
			this->imgburger = (gcnew System::Windows::Forms::PictureBox());
			this->imgice = (gcnew System::Windows::Forms::PictureBox());
			this->imgtea = (gcnew System::Windows::Forms::PictureBox());
			this->imgjuce = (gcnew System::Windows::Forms::PictureBox());
			this->imgcake = (gcnew System::Windows::Forms::PictureBox());
			this->img = (gcnew System::Windows::Forms::PictureBox());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			this->combosandwitch = (gcnew System::Windows::Forms::ComboBox());
			this->combopasta = (gcnew System::Windows::Forms::ComboBox());
			this->combodesert = (gcnew System::Windows::Forms::ComboBox());
			this->comboburger = (gcnew System::Windows::Forms::ComboBox());
			this->combosoup = (gcnew System::Windows::Forms::ComboBox());
			this->combotea = (gcnew System::Windows::Forms::ComboBox());
			this->comboice = (gcnew System::Windows::Forms::ComboBox());
			this->combocake = (gcnew System::Windows::Forms::ComboBox());
			this->combosmothie = (gcnew System::Windows::Forms::ComboBox());
			this->combobasked = (gcnew System::Windows::Forms::ComboBox());
			this->lacoffee = (gcnew System::Windows::Forms::Label());
			this->laburger = (gcnew System::Windows::Forms::Label());
			this->lasmothie = (gcnew System::Windows::Forms::Label());
			this->laatast = (gcnew System::Windows::Forms::Label());
			this->lapizza = (gcnew System::Windows::Forms::Label());
			this->laice = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lasoup = (gcnew System::Windows::Forms::Label());
			this->ladonat = (gcnew System::Windows::Forms::Label());
			this->lafrizz = (gcnew System::Windows::Forms::Label());
			this->butbillform = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->laemail = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cafeimage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgabout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcontactus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgpasta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgdonat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sandwitch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgsoup))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgburger))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgtea))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgjuce))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcake))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->BeginInit();
			this->SuspendLayout();
			// 
			// cafeimage
			// 
			this->cafeimage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cafeimage.Image")));
			this->cafeimage->Location = System::Drawing::Point(-7, 1);
			this->cafeimage->Name = L"cafeimage";
			this->cafeimage->Size = System::Drawing::Size(1381, 599);
			this->cafeimage->TabIndex = 0;
			this->cafeimage->TabStop = false;
			// 
			// txtusername
			// 
			this->txtusername->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtusername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtusername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtusername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->txtusername->Location = System::Drawing::Point(72, 441);
			this->txtusername->Multiline = true;
			this->txtusername->Name = L"txtusername";
			this->txtusername->Size = System::Drawing::Size(196, 31);
			this->txtusername->TabIndex = 1;
			this->txtusername->TextChanged += gcnew System::EventHandler(this, &MyForm::txtusername_TextChanged);
			// 
			// txtpass
			// 
			this->txtpass->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtpass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtpass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->txtpass->Location = System::Drawing::Point(329, 441);
			this->txtpass->Multiline = true;
			this->txtpass->Name = L"txtpass";
			this->txtpass->PasswordChar = '*';
			this->txtpass->Size = System::Drawing::Size(196, 31);
			this->txtpass->TabIndex = 3;
			this->txtpass->TextChanged += gcnew System::EventHandler(this, &MyForm::txtpass_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(325, 468);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(200, 4);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(72, 468);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(196, 4);
			this->textBox4->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(234, 495);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(134, 43);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// lauser
			// 
			this->lauser->AutoSize = true;
			this->lauser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lauser->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lauser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->lauser->Location = System::Drawing::Point(67, 441);
			this->lauser->Name = L"lauser";
			this->lauser->Size = System::Drawing::Size(97, 25);
			this->lauser->TabIndex = 7;
			this->lauser->Text = L"Username";
			this->lauser->Click += gcnew System::EventHandler(this, &MyForm::usernametxt_Click);
			// 
			// lapass
			// 
			this->lapass->AutoSize = true;
			this->lapass->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lapass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lapass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->lapass->Location = System::Drawing::Point(324, 441);
			this->lapass->Name = L"lapass";
			this->lapass->Size = System::Drawing::Size(91, 25);
			this->lapass->TabIndex = 8;
			this->lapass->Text = L"Password";
			this->lapass->Click += gcnew System::EventHandler(this, &MyForm::pass_Click);
			// 
			// lalogin
			// 
			this->lalogin->AutoSize = true;
			this->lalogin->BackColor = System::Drawing::SystemColors::Control;
			this->lalogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lalogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->lalogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lalogin.Image")));
			this->lalogin->Location = System::Drawing::Point(688, 1);
			this->lalogin->Name = L"lalogin";
			this->lalogin->Size = System::Drawing::Size(84, 37);
			this->lalogin->TabIndex = 9;
			this->lalogin->Text = L"Login";
			this->lalogin->Click += gcnew System::EventHandler(this, &MyForm::lalogin_Click);
			// 
			// lamenu
			// 
			this->lamenu->AutoSize = true;
			this->lamenu->BackColor = System::Drawing::SystemColors::Control;
			this->lamenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lamenu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->lamenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lamenu.Image")));
			this->lamenu->Location = System::Drawing::Point(827, 1);
			this->lamenu->Name = L"lamenu";
			this->lamenu->Size = System::Drawing::Size(85, 37);
			this->lamenu->TabIndex = 10;
			this->lamenu->Text = L"Menu";
			this->lamenu->Click += gcnew System::EventHandler(this, &MyForm::lamenu_Click);
			// 
			// laabout
			// 
			this->laabout->AutoSize = true;
			this->laabout->BackColor = System::Drawing::SystemColors::Control;
			this->laabout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->laabout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->laabout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"laabout.Image")));
			this->laabout->Location = System::Drawing::Point(957, 1);
			this->laabout->Name = L"laabout";
			this->laabout->Size = System::Drawing::Size(90, 37);
			this->laabout->TabIndex = 11;
			this->laabout->Text = L"About";
			this->laabout->Click += gcnew System::EventHandler(this, &MyForm::laabout_Click);
			// 
			// lacontact
			// 
			this->lacontact->AutoSize = true;
			this->lacontact->BackColor = System::Drawing::SystemColors::Control;
			this->lacontact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lacontact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->lacontact->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lacontact.Image")));
			this->lacontact->Location = System::Drawing::Point(1100, 1);
			this->lacontact->Name = L"lacontact";
			this->lacontact->Size = System::Drawing::Size(142, 37);
			this->lacontact->TabIndex = 12;
			this->lacontact->Text = L"Contact us";
			this->lacontact->Click += gcnew System::EventHandler(this, &MyForm::lacontact_Click);
			// 
			// la1login
			// 
			this->la1login->AutoSize = true;
			this->la1login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1login->Location = System::Drawing::Point(688, 1);
			this->la1login->Name = L"la1login";
			this->la1login->Size = System::Drawing::Size(84, 37);
			this->la1login->TabIndex = 13;
			this->la1login->Text = L"Login";
			// 
			// la1menu
			// 
			this->la1menu->AutoSize = true;
			this->la1menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1menu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1menu->Location = System::Drawing::Point(827, 1);
			this->la1menu->Name = L"la1menu";
			this->la1menu->Size = System::Drawing::Size(85, 37);
			this->la1menu->TabIndex = 14;
			this->la1menu->Text = L"Menu";
			this->la1menu->Visible = false;
			this->la1menu->Click += gcnew System::EventHandler(this, &MyForm::la1menu_Click);
			// 
			// la1contct
			// 
			this->la1contct->AutoSize = true;
			this->la1contct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1contct->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1contct->Location = System::Drawing::Point(1097, 1);
			this->la1contct->Name = L"la1contct";
			this->la1contct->Size = System::Drawing::Size(142, 37);
			this->la1contct->TabIndex = 15;
			this->la1contct->Text = L"Contact us";
			this->la1contct->Visible = false;
			// 
			// la1about
			// 
			this->la1about->AutoSize = true;
			this->la1about->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1about->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1about->Location = System::Drawing::Point(957, 1);
			this->la1about->Name = L"la1about";
			this->la1about->Size = System::Drawing::Size(90, 37);
			this->la1about->TabIndex = 16;
			this->la1about->Text = L"About";
			this->la1about->Visible = false;
			// 
			// imgabout
			// 
			this->imgabout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgabout.Image")));
			this->imgabout->Location = System::Drawing::Point(-7, 54);
			this->imgabout->Name = L"imgabout";
			this->imgabout->Size = System::Drawing::Size(1371, 526);
			this->imgabout->TabIndex = 17;
			this->imgabout->TabStop = false;
			this->imgabout->Visible = false;
			// 
			// imgcontactus
			// 
			this->imgcontactus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgcontactus.Image")));
			this->imgcontactus->Location = System::Drawing::Point(170, 68);
			this->imgcontactus->Name = L"imgcontactus";
			this->imgcontactus->Size = System::Drawing::Size(1092, 448);
			this->imgcontactus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgcontactus->TabIndex = 18;
			this->imgcontactus->TabStop = false;
			this->imgcontactus->Visible = false;
			// 
			// imgpasta
			// 
			this->imgpasta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgpasta.Image")));
			this->imgpasta->Location = System::Drawing::Point(72, 12);
			this->imgpasta->Name = L"imgpasta";
			this->imgpasta->Size = System::Drawing::Size(252, 226);
			this->imgpasta->TabIndex = 19;
			this->imgpasta->TabStop = false;
			this->imgpasta->Visible = false;
			// 
			// imgdonat
			// 
			this->imgdonat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgdonat.Image")));
			this->imgdonat->Location = System::Drawing::Point(32, 268);
			this->imgdonat->Name = L"imgdonat";
			this->imgdonat->Size = System::Drawing::Size(236, 221);
			this->imgdonat->TabIndex = 20;
			this->imgdonat->TabStop = false;
			this->imgdonat->Visible = false;
			// 
			// sandwitch
			// 
			this->sandwitch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sandwitch.Image")));
			this->sandwitch->Location = System::Drawing::Point(448, 27);
			this->sandwitch->Name = L"sandwitch";
			this->sandwitch->Size = System::Drawing::Size(221, 224);
			this->sandwitch->TabIndex = 21;
			this->sandwitch->TabStop = false;
			this->sandwitch->Visible = false;
			// 
			// imgsoup
			// 
			this->imgsoup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgsoup.Image")));
			this->imgsoup->Location = System::Drawing::Point(285, 325);
			this->imgsoup->Name = L"imgsoup";
			this->imgsoup->Size = System::Drawing::Size(222, 224);
			this->imgsoup->TabIndex = 22;
			this->imgsoup->TabStop = false;
			this->imgsoup->Visible = false;
			// 
			// imgburger
			// 
			this->imgburger->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgburger.Image")));
			this->imgburger->Location = System::Drawing::Point(530, 265);
			this->imgburger->Name = L"imgburger";
			this->imgburger->Size = System::Drawing::Size(216, 245);
			this->imgburger->TabIndex = 23;
			this->imgburger->TabStop = false;
			this->imgburger->Visible = false;
			// 
			// imgice
			// 
			this->imgice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgice.Image")));
			this->imgice->Location = System::Drawing::Point(752, 56);
			this->imgice->Name = L"imgice";
			this->imgice->Size = System::Drawing::Size(218, 219);
			this->imgice->TabIndex = 24;
			this->imgice->TabStop = false;
			this->imgice->Visible = false;
			// 
			// imgtea
			// 
			this->imgtea->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgtea.Image")));
			this->imgtea->Location = System::Drawing::Point(768, 358);
			this->imgtea->Name = L"imgtea";
			this->imgtea->Size = System::Drawing::Size(190, 191);
			this->imgtea->TabIndex = 25;
			this->imgtea->TabStop = false;
			this->imgtea->Visible = false;
			// 
			// imgjuce
			// 
			this->imgjuce->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgjuce.Image")));
			this->imgjuce->Location = System::Drawing::Point(964, 251);
			this->imgjuce->Name = L"imgjuce";
			this->imgjuce->Size = System::Drawing::Size(205, 215);
			this->imgjuce->TabIndex = 26;
			this->imgjuce->TabStop = false;
			this->imgjuce->Visible = false;
			// 
			// imgcake
			// 
			this->imgcake->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgcake.Image")));
			this->imgcake->Location = System::Drawing::Point(1066, 41);
			this->imgcake->Name = L"imgcake";
			this->imgcake->Size = System::Drawing::Size(231, 197);
			this->imgcake->TabIndex = 27;
			this->imgcake->TabStop = false;
			this->imgcake->Visible = false;
			// 
			// img
			// 
			this->img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img.Image")));
			this->img->Location = System::Drawing::Point(1217, 314);
			this->img->Name = L"img";
			this->img->Size = System::Drawing::Size(147, 152);
			this->img->TabIndex = 28;
			this->img->TabStop = false;
			this->img->Visible = false;
			// 
			// txttotal
			// 
			this->txttotal->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txttotal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txttotal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttotal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->txttotal->Location = System::Drawing::Point(1035, 472);
			this->txttotal->Multiline = true;
			this->txttotal->Name = L"txttotal";
			this->txttotal->ReadOnly = true;
			this->txttotal->Size = System::Drawing::Size(196, 31);
			this->txttotal->TabIndex = 29;
			this->txttotal->Text = L"00";
			this->txttotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txttotal->Visible = false;
			// 
			// combosandwitch
			// 
			this->combosandwitch->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combosandwitch->FormattingEnabled = true;
			this->combosandwitch->Location = System::Drawing::Point(473, 27);
			this->combosandwitch->Name = L"combosandwitch";
			this->combosandwitch->Size = System::Drawing::Size(196, 21);
			this->combosandwitch->TabIndex = 30;
			this->combosandwitch->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combosandwitch_SelectedIndexChanged);
			// 
			// combopasta
			// 
			this->combopasta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combopasta->FormattingEnabled = true;
			this->combopasta->Location = System::Drawing::Point(111, 27);
			this->combopasta->Name = L"combopasta";
			this->combopasta->Size = System::Drawing::Size(145, 21);
			this->combopasta->TabIndex = 31;
			this->combopasta->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combopasta_SelectedIndexChanged);
			// 
			// combodesert
			// 
			this->combodesert->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combodesert->FormattingEnabled = true;
			this->combodesert->Location = System::Drawing::Point(43, 270);
			this->combodesert->Name = L"combodesert";
			this->combodesert->Size = System::Drawing::Size(189, 21);
			this->combodesert->TabIndex = 32;
			this->combodesert->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combodesert_SelectedIndexChanged);
			// 
			// comboburger
			// 
			this->comboburger->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboburger->FormattingEnabled = true;
			this->comboburger->Location = System::Drawing::Point(550, 270);
			this->comboburger->Name = L"comboburger";
			this->comboburger->Size = System::Drawing::Size(177, 21);
			this->comboburger->TabIndex = 33;
			this->comboburger->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboburger_SelectedIndexChanged);
			// 
			// combosoup
			// 
			this->combosoup->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combosoup->FormattingEnabled = true;
			this->combosoup->Location = System::Drawing::Point(325, 325);
			this->combosoup->Name = L"combosoup";
			this->combosoup->Size = System::Drawing::Size(182, 21);
			this->combosoup->TabIndex = 34;
			this->combosoup->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combosoup_SelectedIndexChanged);
			// 
			// combotea
			// 
			this->combotea->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combotea->FormattingEnabled = true;
			this->combotea->Location = System::Drawing::Point(815, 369);
			this->combotea->Name = L"combotea";
			this->combotea->Size = System::Drawing::Size(143, 21);
			this->combotea->TabIndex = 35;
			this->combotea->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combotea_SelectedIndexChanged);
			// 
			// comboice
			// 
			this->comboice->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboice->FormattingEnabled = true;
			this->comboice->Location = System::Drawing::Point(776, 56);
			this->comboice->Name = L"comboice";
			this->comboice->Size = System::Drawing::Size(162, 21);
			this->comboice->TabIndex = 36;
			this->comboice->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboice_SelectedIndexChanged);
			// 
			// combocake
			// 
			this->combocake->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combocake->FormattingEnabled = true;
			this->combocake->Location = System::Drawing::Point(1078, 42);
			this->combocake->Name = L"combocake";
			this->combocake->Size = System::Drawing::Size(205, 21);
			this->combocake->TabIndex = 37;
			this->combocake->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combocake_SelectedIndexChanged);
			// 
			// combosmothie
			// 
			this->combosmothie->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combosmothie->FormattingEnabled = true;
			this->combosmothie->Location = System::Drawing::Point(976, 265);
			this->combosmothie->Name = L"combosmothie";
			this->combosmothie->Size = System::Drawing::Size(179, 21);
			this->combosmothie->TabIndex = 38;
			this->combosmothie->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combosmothie_SelectedIndexChanged);
			// 
			// combobasked
			// 
			this->combobasked->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combobasked->FormattingEnabled = true;
			this->combobasked->Location = System::Drawing::Point(1178, 321);
			this->combobasked->Name = L"combobasked";
			this->combobasked->Size = System::Drawing::Size(189, 21);
			this->combobasked->TabIndex = 39;
			this->combobasked->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::combobasked_SelectedIndexChanged);
			// 
			// lacoffee
			// 
			this->lacoffee->AutoSize = true;
			this->lacoffee->BackColor = System::Drawing::Color::White;
			this->lacoffee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lacoffee->Location = System::Drawing::Point(826, 370);
			this->lacoffee->Name = L"lacoffee";
			this->lacoffee->Size = System::Drawing::Size(76, 16);
			this->lacoffee->TabIndex = 40;
			this->lacoffee->Text = L"Coffee type";
			// 
			// laburger
			// 
			this->laburger->AutoSize = true;
			this->laburger->BackColor = System::Drawing::Color::White;
			this->laburger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->laburger->Location = System::Drawing::Point(547, 271);
			this->laburger->Name = L"laburger";
			this->laburger->Size = System::Drawing::Size(77, 16);
			this->laburger->TabIndex = 41;
			this->laburger->Text = L"Burger type";
			// 
			// lasmothie
			// 
			this->lasmothie->AutoSize = true;
			this->lasmothie->BackColor = System::Drawing::Color::White;
			this->lasmothie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lasmothie->Location = System::Drawing::Point(985, 265);
			this->lasmothie->Name = L"lasmothie";
			this->lasmothie->Size = System::Drawing::Size(92, 16);
			this->lasmothie->TabIndex = 42;
			this->lasmothie->Text = L"Smothie Type";
			// 
			// laatast
			// 
			this->laatast->AutoSize = true;
			this->laatast->BackColor = System::Drawing::Color::White;
			this->laatast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->laatast->Location = System::Drawing::Point(1184, 321);
			this->laatast->Name = L"laatast";
			this->laatast->Size = System::Drawing::Size(78, 16);
			this->laatast->TabIndex = 43;
			this->laatast->Text = L"Toast Type";
			// 
			// lapizza
			// 
			this->lapizza->AutoSize = true;
			this->lapizza->BackColor = System::Drawing::Color::White;
			this->lapizza->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lapizza->Location = System::Drawing::Point(1104, 43);
			this->lapizza->Name = L"lapizza";
			this->lapizza->Size = System::Drawing::Size(69, 16);
			this->lapizza->TabIndex = 44;
			this->lapizza->Text = L"Pizza type";
			// 
			// laice
			// 
			this->laice->AutoSize = true;
			this->laice->BackColor = System::Drawing::Color::White;
			this->laice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->laice->Location = System::Drawing::Point(782, 57);
			this->laice->Name = L"laice";
			this->laice->Size = System::Drawing::Size(93, 16);
			this->laice->TabIndex = 45;
			this->laice->Text = L"Icecream type";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(479, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 16);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Sandwitch type";
			// 
			// lasoup
			// 
			this->lasoup->AutoSize = true;
			this->lasoup->BackColor = System::Drawing::Color::White;
			this->lasoup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lasoup->Location = System::Drawing::Point(322, 326);
			this->lasoup->Name = L"lasoup";
			this->lasoup->Size = System::Drawing::Size(69, 16);
			this->lasoup->TabIndex = 47;
			this->lasoup->Text = L"Soup type";
			// 
			// ladonat
			// 
			this->ladonat->AutoSize = true;
			this->ladonat->BackColor = System::Drawing::Color::White;
			this->ladonat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ladonat->Location = System::Drawing::Point(52, 271);
			this->ladonat->Name = L"ladonat";
			this->ladonat->Size = System::Drawing::Size(73, 16);
			this->ladonat->TabIndex = 48;
			this->ladonat->Text = L"Donat type";
			// 
			// lafrizz
			// 
			this->lafrizz->AutoSize = true;
			this->lafrizz->BackColor = System::Drawing::Color::White;
			this->lafrizz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lafrizz->Location = System::Drawing::Point(119, 28);
			this->lafrizz->Name = L"lafrizz";
			this->lafrizz->Size = System::Drawing::Size(70, 16);
			this->lafrizz->TabIndex = 49;
			this->lafrizz->Text = L"Frizzz type";
			// 
			// butbillform
			// 
			this->butbillform->Location = System::Drawing::Point(1275, 493);
			this->butbillform->Name = L"butbillform";
			this->butbillform->Size = System::Drawing::Size(75, 23);
			this->butbillform->TabIndex = 50;
			this->butbillform->Text = L"Billing";
			this->butbillform->UseVisualStyleBackColor = true;
			this->butbillform->Visible = false;
			this->butbillform->Click += gcnew System::EventHandler(this, &MyForm::butbillform_Click);
			// 
			// logout
			// 
			this->logout->AutoSize = true;
			this->logout->BackColor = System::Drawing::SystemColors::Control;
			this->logout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->logout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout.Image")));
			this->logout->Location = System::Drawing::Point(675, 1);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(109, 37);
			this->logout->TabIndex = 51;
			this->logout->Text = L"Log out";
			this->logout->Visible = false;
			this->logout->Click += gcnew System::EventHandler(this, &MyForm::logout_Click);
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::SystemColors::InfoText;
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Email->Location = System::Drawing::Point(1035, 525);
			this->Email->Multiline = true;
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(300, 27);
			this->Email->TabIndex = 52;
			this->Email->Visible = false;
			// 
			// laemail
			// 
			this->laemail->AutoSize = true;
			this->laemail->BackColor = System::Drawing::Color::White;
			this->laemail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->laemail->Location = System::Drawing::Point(964, 525);
			this->laemail->Name = L"laemail";
			this->laemail->Size = System::Drawing::Size(66, 30);
			this->laemail->TabIndex = 53;
			this->laemail->Text = L"Email";
			this->laemail->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(1362, 561);
			this->Controls->Add(this->laemail);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->butbillform);
			this->Controls->Add(this->lafrizz);
			this->Controls->Add(this->ladonat);
			this->Controls->Add(this->lasoup);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->laice);
			this->Controls->Add(this->lapizza);
			this->Controls->Add(this->laatast);
			this->Controls->Add(this->lasmothie);
			this->Controls->Add(this->laburger);
			this->Controls->Add(this->lacoffee);
			this->Controls->Add(this->combobasked);
			this->Controls->Add(this->combosmothie);
			this->Controls->Add(this->combocake);
			this->Controls->Add(this->comboice);
			this->Controls->Add(this->combotea);
			this->Controls->Add(this->combosoup);
			this->Controls->Add(this->comboburger);
			this->Controls->Add(this->combodesert);
			this->Controls->Add(this->combopasta);
			this->Controls->Add(this->combosandwitch);
			this->Controls->Add(this->txttotal);
			this->Controls->Add(this->img);
			this->Controls->Add(this->imgcake);
			this->Controls->Add(this->imgjuce);
			this->Controls->Add(this->imgtea);
			this->Controls->Add(this->imgice);
			this->Controls->Add(this->imgburger);
			this->Controls->Add(this->imgsoup);
			this->Controls->Add(this->sandwitch);
			this->Controls->Add(this->imgdonat);
			this->Controls->Add(this->imgpasta);
			this->Controls->Add(this->imgcontactus);
			this->Controls->Add(this->imgabout);
			this->Controls->Add(this->la1about);
			this->Controls->Add(this->la1contct);
			this->Controls->Add(this->la1menu);
			this->Controls->Add(this->la1login);
			this->Controls->Add(this->lacontact);
			this->Controls->Add(this->laabout);
			this->Controls->Add(this->lamenu);
			this->Controls->Add(this->lalogin);
			this->Controls->Add(this->lapass);
			this->Controls->Add(this->lauser);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->txtpass);
			this->Controls->Add(this->txtusername);
			this->Controls->Add(this->cafeimage);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"CAFE MANAGEMENT";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cafeimage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgabout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcontactus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgpasta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgdonat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sandwitch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgsoup))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgburger))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgtea))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgjuce))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcake))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void pass_Click(System::Object^  sender, System::EventArgs^  e) {
	lapass->Visible = false;
	txtpass->Focus();
}
private: System::Void txtpass_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	lapass->Visible = false;
	txtpass->Focus();
}
private: System::Void usernametxt_Click(System::Object^  sender, System::EventArgs^  e) {
	txtusername->Focus();
	lauser->Visible = false;
}
		 void combo() {
			 laburger->Visible = true;
			 lacoffee->Visible = true;
			 lafrizz->Visible = true;
			 label6->Visible = true;
			 lasoup->Visible = true;
			 ladonat->Visible = true;
			 lacoffee->Visible = true;
			 lasmothie->Visible = true;
			 laatast->Visible = true;
			 lapizza->Visible = true;
			 laice->Visible = true;
			 txttotal->Visible = true;
			 laemail->Visible = true;
			 Email->Visible = true;


			 combopasta->Visible = true;
			 combodesert->Visible = true;
			 combosoup->Visible = true;
			 comboice->Visible = true;
			 combotea->Visible = true;
			 combosmothie->Visible = true;
			 combobasked->Visible = true;
			 comboburger->Visible = true;
			 combosandwitch->Visible = true;
			 combocake->Visible = true;
			 
		 }
		 void nocomo() {

			 laburger->Visible = false;
			 lacoffee->Visible = false;
			 lafrizz->Visible = false;
			 label6->Visible = false;
			 lasoup->Visible = false;
			 ladonat->Visible = false;
			 lacoffee->Visible = false;
			 lasmothie->Visible = false;
			 laatast->Visible = false;
			 lapizza->Visible = false;
			 laice->Visible = false;
			 txttotal->Visible = false;
			 laemail->Visible = false;
			 Email->Visible = false;
			 combopasta->Visible = false;
			 combodesert->Visible = false;
			 combosoup->Visible = false;
			 comboice->Visible = false;
			 combotea->Visible = false;
			 combosmothie->Visible = false;
			 combobasked->Visible = false;
			 comboburger->Visible = false;
			 combosandwitch->Visible = false;
			 combocake->Visible = false;
		
		 }
		 void teacombotext() {

		      ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from coffee",conn);
			 try {
				 conn->Open();
				MySqlDataReader^ dr = s->ExecuteReader();
				while (dr->Read()) {
				    
					combotea->Items->Add(dr->GetString("name"));

				}
				conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }
		 
		 }

		 void potatocombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from potato", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combopasta->Items->Add(dr->GetString("name") );

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 void icecreamcombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from icecream", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 comboice->Items->Add(dr->GetString("name"));

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }

		 void smoothescombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from smoothes", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combosmothie->Items->Add(dr->GetString("name"));

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 void pizzacombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from pizza", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combocake->Items->Add(dr->GetString("name") );

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 void desertcombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from desert", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combodesert->Items->Add(dr->GetString("name") );

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 void burgercombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from burger", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 comboburger->Items->Add(dr->GetString("name"));

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 void sandwitchcombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from sandwitch", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combosandwitch->Items->Add(dr->GetString("name") );

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 void souptxt() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from soup", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combosoup->Items->Add(dr->GetString("name") );

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 		 void baked_toastcombotext() {

			 ////////// 
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 MySqlCommand^ s = gcnew MySqlCommand("select name,price from baked_toast", conn);
			 try {
				 conn->Open();
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combobasked->Items->Add(dr->GetString("name"));

				 }
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString(), "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 conn->Close();
			 }

		 }
		 void commenu() {
			 cafeimage->Visible = false;
			 txtpass->Visible = false;
			 txtusername->Visible = false;
			 lauser->Visible = false;
			 lapass->Visible = false;
			 pictureBox1->Visible = false;
			 imgabout->Visible = false;
			 imgcontactus->Visible = false;
			 textBox3->Visible = false;
			 textBox4->Visible = false;
			 la1menu->Visible = true;
			 la1login->Visible = false;
			 la1about->Visible = false;
			 la1contct->Visible = false;
			/////////////
			 //butbillform->Visible = false;
			 food();
			 // lalogin->Visible = true;
		 }
private: System::Void lamenu_Click(System::Object^  sender, System::EventArgs^  e) {
	img->Visible = true;
	imgjuce->Visible = true;
	imgpasta->Visible = true;
	imgsoup->Visible = true;
	imgburger->Visible = true;
	imgcake->Visible = true;
	imgpasta->Visible = true;
	imgdonat->Visible = true;
	imgtea->Visible = true;
	imgice->Visible = true;
	sandwitch->Visible = true;
	commenu();
	combo();
	if (logout->Visible==true) {
		butbillform->Visible = false;
	}
	///////////////////////////////

	//
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ user = txtusername->Text;
	String^ pass = txtpass->Text;
	if (user == "Admin" && pass == "Admin") {

		MyForm1^ f = gcnew MyForm1();
		f->Show();
	}

	if (user->Trim()->Length >= 2 && pass->Trim()->Length >= 2) {
		try {
			String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			conn->Open();
			String^ select = "select * from emp where firstname=@first AND password1=@pass ";
			MySqlCommand^ cmdselect = gcnew MySqlCommand(select, conn);
			cmdselect->Parameters->AddWithValue("@first", user);
			cmdselect->Parameters->AddWithValue("@pass", pass);

			int i = 0;
			MySqlDataReader^ dr = cmdselect->ExecuteReader();
			while (dr->Read()) {
				// MessageBox::Show(dr->GetString("lastname"), "data" + i);
				i = i + 1;
			}
			if (i == 0) {
				if (user!="Admin") {
					MessageBox::Show("invalid login");
				}
				if(pass!="Admin") {
					MessageBox::Show("Invalid login", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			else if (i >= 2) {
				MessageBox::Show("invalid login duplicate recored found");
			}
			else if (i == 1) {
				if (MessageBox::Show("done successfully", "login valid", MessageBoxButtons::OK, MessageBoxIcon::Information)==System::Windows::Forms::DialogResult::OK) {
					txttotal->Text = "0";
					logout->Visible = true;
					la1login->Visible = false;
					commenu();
					combo();
					laabout->Visible = false;
					lacontact->Visible = false;
					butbillform->Visible = true;
					
				}
				
			
			}
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
		}

	}
	else {
		MessageBox::Show("Enter Value please", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
		 void food() {
			 img->Visible = true;
			 imgjuce->Visible = true;
			 imgpasta->Visible = true;
			 imgsoup->Visible = true;
			 imgburger->Visible = true;
			 imgcake->Visible = true;
			 imgpasta->Visible = true;
			 imgdonat->Visible = true;
			 imgtea->Visible = true;
			 imgice->Visible = true;
			 sandwitch->Visible = true;
		 }
		 void nofood() {
			 img->Visible = false;
			 imgjuce->Visible = false;
			 imgpasta->Visible = false;
			 imgsoup->Visible = false;
			 imgburger->Visible = false;
			 imgcake->Visible = false;
			 imgpasta->Visible = false;
			 imgdonat->Visible = false;
			 imgtea->Visible = false;
			 imgice->Visible = false;
			 sandwitch->Visible = false;
		 }
	
private: System::Void laabout_Click(System::Object^  sender, System::EventArgs^  e) {
	butbillform->Visible = false;
	cafeimage->Visible = false;
	txtpass->Visible = false;
	txtusername->Visible = false;
	lauser->Visible = false;
	lapass->Visible = false;
	pictureBox1->Visible = false;
	imgabout->Visible = true;
	imgcontactus->Visible = false;
	textBox3->Visible = false;
	textBox4->Visible = false;
	la1menu->Visible = false;
	la1login->Visible = false;
	la1about->Visible = true;
	la1contct->Visible = false;
	//lacoffee->Visible = false;
	nofood();
	nocomo();
}
private: System::Void lacontact_Click(System::Object^  sender, System::EventArgs^  e) {
	butbillform->Visible = false;
	cafeimage->Visible = false;
	txtpass->Visible=false;
	txtusername->Visible = false;
	lauser->Visible = false;
	lapass->Visible = false;
	pictureBox1->Visible = false;
	imgabout->Visible = false;
	imgcontactus->Visible = true;
	textBox3->Visible = false;
	textBox4->Visible = false;
	la1menu->Visible = false;
	la1login->Visible = false;
	la1about->Visible = false;
	la1contct->Visible = true;
	lacoffee->Visible = false;
	nofood();
	nocomo();
}
private: System::Void lalogin_Click(System::Object^  sender, System::EventArgs^  e) {
	butbillform->Visible = false;
	cafeimage->Visible = true;
	txtpass->Visible = true;
	txtusername->Visible = true;
	lauser->Visible = true;
	lapass->Visible = true;
	pictureBox1->Visible = true;
	imgabout->Visible = false;
	imgcontactus->Visible = false;
	textBox3->Visible = true;
	textBox4->Visible = true;
	la1menu->Visible = false;
	la1login->Visible = true;
	la1about->Visible = false;
	la1contct->Visible = false;
	lacoffee->Visible = false;
	lacoffee->Visible = false;
	txttotal->Visible = false;
	laemail->Visible = false;
	Email->Visible = false;
	txtusername->Text ="";
	txtpass->Text ="";
	nofood();
	nocomo();
}

private: System::Void txtusername_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtusername->Focus();
	lauser->Visible = false;
}

		 void deletebill() {
			 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			 try {
				 conn->Open();
				 MySqlCommand^ s = gcnew MySqlCommand("delete from bill", conn);
				 s->ExecuteNonQuery();
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString());
				 conn->Close();
			 }
		 }

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	souptxt();
	pizzacombotext();
	icecreamcombotext();
	desertcombotext();
	sandwitchcombotext();
	baked_toastcombotext();
	teacombotext();
	smoothescombotext();
	potatocombotext();
	burgercombotext();
	nocomo();
	deletebill();
	butbillform->Visible = false;
}
		 String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
		 MySqlConnection^ conn = gcnew MySqlConnection(connstring);
private: System::Void combopasta_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	lafrizz->Visible = false;
	String^ combovalue;
	try { 
		conn->Open(); 
		MySqlCommand^ s = gcnew MySqlCommand("select * from potato where name= @name;", conn);
		s->Parameters->AddWithValue("@name",combopasta->Text);
			MySqlDataReader^ dr = s->ExecuteReader();
			while (dr->Read()) {

				combovalue=(dr->GetString("price"));

			}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", combopasta->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}

}
private: System::Void combodesert_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ladonat->Visible = false;
	String^ combovalue;
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("select * from desert where name= @name;", conn);
		s->Parameters->AddWithValue("@name", combodesert->Text);
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {

			combovalue = (dr->GetString("price"));

		}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", combodesert->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}
}
private: System::Void combosoup_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	lasoup->Visible = false;

	String^ combovalue;
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("select * from soup where name= @name;", conn);
		s->Parameters->AddWithValue("@name", combosoup->Text);
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {

			combovalue = (dr->GetString("price"));

		}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", combosoup->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}

}
private: System::Void comboburger_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	laburger->Visible = false;

	String^ combovalue;
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("select * from burger where name= @name;", conn);
		s->Parameters->AddWithValue("@name", comboburger->Text);
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {

			combovalue = (dr->GetString("price"));

		}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", comboburger->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}
	

}
private: System::Void combosmothie_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	lasmothie->Visible = false;
	
	String^ combovalue;
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("select * from smoothes where name= @name;", conn);
		s->Parameters->AddWithValue("@name", combosmothie->Text);
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {

			combovalue = (dr->GetString("price"));

		}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", combosmothie->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}


}
private: System::Void combobasked_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	laatast->Visible = false;
	//baked_toast
	String^ combovalue;
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("select * from baked_toast where name= @name;", conn);
		s->Parameters->AddWithValue("@name", combobasked->Text);
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {

			combovalue = (dr->GetString("price"));

		}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", combobasked->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}

}
private: System::Void combocake_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
lapizza->Visible = false;

String^ combovalue;
try {
	conn->Open();
	MySqlCommand^ s = gcnew MySqlCommand("select * from pizza where name= @name;", conn);
	s->Parameters->AddWithValue("@name", combocake->Text);
	MySqlDataReader^ dr = s->ExecuteReader();
	while (dr->Read()) {

		combovalue = (dr->GetString("price"));

	}
	MessageBox::Show(combovalue);
	conn->Close();
	conn->Open();
	MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
	s1->Parameters->AddWithValue("@name1", combocake->Text);
	s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
	s1->ExecuteNonQuery();
	conn->Close();

	conn->Open();
	int combovalue1;
	MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
	MySqlDataReader^ dr2 = s2->ExecuteReader();
	while (dr2->Read()) {

		combovalue1 = (dr2->GetInt32("sum(price)"));

	}
	txttotal->Text = Convert::ToString(combovalue1);
	conn->Close();
}
catch (Exception^ e) {
	MessageBox::Show(e->ToString());
	conn->Close();
}

}/////gdddddddd
private: System::Void comboice_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	laice->Visible = false;
	String^ combovalue;
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("select * from icecream where name= @name;", conn);
		s->Parameters->AddWithValue("@name", comboice->Text);
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {

			combovalue = (dr->GetString("price"));

		}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", comboice->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}
}
		 private: System::Void combotea_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 lacoffee->Visible = false;

			 String^ combovalue;
			 try {
				 conn->Open();
				 MySqlCommand^ s = gcnew MySqlCommand("select * from coffee where name= @name;", conn);
				 s->Parameters->AddWithValue("@name", combotea->Text);
				 MySqlDataReader^ dr = s->ExecuteReader();
				 while (dr->Read()) {

					 combovalue = (dr->GetString("price"));

				 }
				 MessageBox::Show(combovalue);
				 conn->Close();
				 conn->Open();
				 MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
				 s1->Parameters->AddWithValue("@name1", combotea->Text);
				 s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
				 s1->ExecuteNonQuery();
				 conn->Close();

				 conn->Open();
				 int combovalue1;
				 MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
				 MySqlDataReader^ dr2 = s2->ExecuteReader();
				 while (dr2->Read()) {

					 combovalue1 = (dr2->GetInt32("sum(price)"));

				 }
				 txttotal->Text = Convert::ToString(combovalue1);
				 conn->Close();
			 }
			 catch (Exception^ e) {
				 MessageBox::Show(e->ToString());
				 conn->Close();

				 conn->Open();
				 int combovalue1;
				 MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
				 MySqlDataReader^ dr2 = s2->ExecuteReader();
				 while (dr2->Read()) {

					 combovalue1 = (dr2->GetInt32("sum(price)"));

				 }
				 txttotal->Text = Convert::ToString(combovalue1);
				 conn->Close();
			 }
		 }
private: System::Void combosandwitch_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	label6->Visible = false;


	String^ combovalue;
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("select * from sandwitch where name= @name;", conn);
		s->Parameters->AddWithValue("@name", combosandwitch->Text);
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {

			combovalue = (dr->GetString("price"));

		}
		MessageBox::Show(combovalue);
		conn->Close();
		conn->Open();
		MySqlCommand^ s1 = gcnew MySqlCommand("insert into bill(name,price)values(@name1,@price)", conn);
		s1->Parameters->AddWithValue("@name1", combosandwitch->Text);
		s1->Parameters->AddWithValue("@price", Convert::ToInt32(combovalue));
		s1->ExecuteNonQuery();
		conn->Close();

		conn->Open();
		int combovalue1;
		MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
		MySqlDataReader^ dr2 = s2->ExecuteReader();
		while (dr2->Read()) {

			combovalue1 = (dr2->GetInt32("sum(price)"));

		}
		txttotal->Text = Convert::ToString(combovalue1);
		conn->Close();

	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}

}

private: System::Void butbillform_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ emailcheck = "^[a-z]+[0-9]*@[a-z]+.[a-z]+$";
	Regex^ regxmail = gcnew Regex(emailcheck);
	int as=0;
    
	if (Email->Text->Trim()->Length > 2) {
		bool rmail = regxmail->IsMatch(Email->Text);
		if (rmail) {
			try {
				MySqlCommand^ md = gcnew MySqlCommand("select offerpercentage from offer where email=@email",conn);
				md->Parameters->AddWithValue("@email",Email->Text);
				conn->Open();
				MySqlDataReader^ dr=md->ExecuteReader();
				while (dr->Read()) {
				as =dr->GetInt32("offerpercentage");
				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			}
			
			conn->Close();

			MyForm2^ s = gcnew MyForm2(Email->Text,as);
			s->Show();
			txttotal->Text = "";
			Email->Text = "";

		}
		else {
			MessageBox::Show("Enter valid email", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else
	{
		MessageBox::Show("Enter email", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}

private: System::Void la1menu_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
	lalogin->Visible = true;
	logout->Visible = false;
	butbillform->Visible = false;
	cafeimage->Visible = true;
	txtpass->Visible = true;
	txtusername->Visible = true;
	lauser->Visible = true;
	lapass->Visible = true;
	pictureBox1->Visible = true;
	imgabout->Visible = false;
	imgcontactus->Visible = false;
	textBox3->Visible = true;
	textBox4->Visible = true;
	la1menu->Visible = false;
	la1login->Visible = true;
	la1about->Visible = false;
	la1contct->Visible = false;
	lacoffee->Visible = false;
	lacoffee->Visible = false;
	txttotal->Visible = false;
	Email->Visible = false;
	laemail->Visible = false;
	txtusername->Text = "";
	txtpass->Text = "";
	nofood();
	nocomo();
}


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime d = DateTime::Now;
	String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
	MySqlConnection^ conn = gcnew MySqlConnection(connstring);
	SoundPlayer^ p = gcnew SoundPlayer();
	p->SoundLocation = "C:\\Windows\\Media\\preview.wav";

	try {
		MySqlCommand^ s = gcnew MySqlCommand("select email,orders,times from cust1 where times=@times and dates=@dates", conn);
		s->Parameters->AddWithValue("@times", d.ToLongTimeString());
		s->Parameters->AddWithValue("@dates", d.ToShortDateString());
		//label9->Text = check;
		conn->Open();

		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {
			p->PlayLooping();
			if (MessageBox::Show(dr->GetString("email") + "\n" + dr->GetString("orders"), "oder info", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes) {
				p->Stop();
			}
		}
		conn->Close();


	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}
}
};
}
