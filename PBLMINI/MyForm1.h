#pragma once
#include <regex>
namespace PBLMINI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
     
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  la1about;
	protected:
	private: System::Windows::Forms::Label^  la1contct;
	private: System::Windows::Forms::Label^  la1menu;

	private: System::Windows::Forms::Label^  lacontact;
	private: System::Windows::Forms::Label^  laabout;
	private: System::Windows::Forms::Label^  lamenu;
	private: System::Windows::Forms::Label^  lalogin;
	private: System::Windows::Forms::Label^  la1login;



















	private: System::Windows::Forms::DataGridView^  employeetable;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::TextBox^  salary;
	private: System::Windows::Forms::TextBox^  dateofjoin;
	private: System::Windows::Forms::TextBox^  emp_city;
	private: System::Windows::Forms::TextBox^  emp_address;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  mobileno;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::TextBox^  lastname;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  butdelete;
	private: System::Windows::Forms::Button^  butupdate;
	private: System::Windows::Forms::TextBox^  txtid;
	private: System::Windows::Forms::Label^  eid;
	private: System::Windows::Forms::Button^  butok;
	private: System::Windows::Forms::Button^  button2;

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::ComboBox^  comboproducts;
	private: System::Windows::Forms::Label^  labot;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  txtname;
			 String^emp_id3;
	private: System::Windows::Forms::Button^  btnupdate;
	private: System::Windows::Forms::Button^  btnadd;
	private: System::Windows::Forms::NumericUpDown^  txtprice;
	private: System::Windows::Forms::Button^  btnburger;
	private: System::Windows::Forms::Button^  btnsmoothes;


	private: System::Windows::Forms::Button^  btnsandwitch;
	private: System::Windows::Forms::Button^  btnpotato;



	private: System::Windows::Forms::Button^  btnpasta;
	private: System::Windows::Forms::Button^  btnpizza;


	private: System::Windows::Forms::Button^  btndesert;
	private: System::Windows::Forms::Button^  btnicecream;


	private: System::Windows::Forms::Button^  btncoffee;
private: System::Windows::Forms::Button^  btnsoup;
private: System::Windows::Forms::Button^  butburger;
private: System::Windows::Forms::Button^  butcoffee;
private: System::Windows::Forms::Button^  buticecream;
private: System::Windows::Forms::Button^  butsmoothes;




private: System::Windows::Forms::Button^  butpizza;

private: System::Windows::Forms::Button^  butdesert;
private: System::Windows::Forms::Button^  butsandwitch;


private: System::Windows::Forms::Button^  butpotato;

private: System::Windows::Forms::Button^  butpasta;
private: System::Windows::Forms::Button^  butsoup;
private: System::Windows::Forms::Button^  bbaked_toast;
private: System::Windows::Forms::Button^  bburger;
private: System::Windows::Forms::Button^  bdesert;
private: System::Windows::Forms::Button^  bsoup;
private: System::Windows::Forms::Button^  bicecream;
private: System::Windows::Forms::Button^  bpasta;
private: System::Windows::Forms::Button^  bpizza;
private: System::Windows::Forms::Button^  bpotato;
private: System::Windows::Forms::Button^  bsandwitch;
private: System::Windows::Forms::Button^  bsmoothe;
private: System::Windows::Forms::Button^  bcoffee;
private: System::Windows::Forms::Timer^  timer1;
private: System::Windows::Forms::DataGridView^  dataGridView2;

private: System::Windows::Forms::Button^  btnoffer;
private: System::Windows::Forms::Label^  laoffer;

private: System::Windows::Forms::TextBox^  txtemail;
private: System::Windows::Forms::NumericUpDown^  numoffer;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->la1about = (gcnew System::Windows::Forms::Label());
			this->la1contct = (gcnew System::Windows::Forms::Label());
			this->la1menu = (gcnew System::Windows::Forms::Label());
			this->lacontact = (gcnew System::Windows::Forms::Label());
			this->laabout = (gcnew System::Windows::Forms::Label());
			this->lamenu = (gcnew System::Windows::Forms::Label());
			this->lalogin = (gcnew System::Windows::Forms::Label());
			this->la1login = (gcnew System::Windows::Forms::Label());
			this->employeetable = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->eid = (gcnew System::Windows::Forms::Label());
			this->butok = (gcnew System::Windows::Forms::Button());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->butdelete = (gcnew System::Windows::Forms::Button());
			this->butupdate = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->salary = (gcnew System::Windows::Forms::TextBox());
			this->dateofjoin = (gcnew System::Windows::Forms::TextBox());
			this->emp_city = (gcnew System::Windows::Forms::TextBox());
			this->emp_address = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->mobileno = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->comboproducts = (gcnew System::Windows::Forms::ComboBox());
			this->labot = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->btnupdate = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->txtprice = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnburger = (gcnew System::Windows::Forms::Button());
			this->btnsmoothes = (gcnew System::Windows::Forms::Button());
			this->btnsandwitch = (gcnew System::Windows::Forms::Button());
			this->btnpotato = (gcnew System::Windows::Forms::Button());
			this->btnpasta = (gcnew System::Windows::Forms::Button());
			this->btnpizza = (gcnew System::Windows::Forms::Button());
			this->btndesert = (gcnew System::Windows::Forms::Button());
			this->btnicecream = (gcnew System::Windows::Forms::Button());
			this->btncoffee = (gcnew System::Windows::Forms::Button());
			this->btnsoup = (gcnew System::Windows::Forms::Button());
			this->butburger = (gcnew System::Windows::Forms::Button());
			this->butcoffee = (gcnew System::Windows::Forms::Button());
			this->buticecream = (gcnew System::Windows::Forms::Button());
			this->butsmoothes = (gcnew System::Windows::Forms::Button());
			this->butpizza = (gcnew System::Windows::Forms::Button());
			this->butdesert = (gcnew System::Windows::Forms::Button());
			this->butsandwitch = (gcnew System::Windows::Forms::Button());
			this->butpotato = (gcnew System::Windows::Forms::Button());
			this->butpasta = (gcnew System::Windows::Forms::Button());
			this->butsoup = (gcnew System::Windows::Forms::Button());
			this->bbaked_toast = (gcnew System::Windows::Forms::Button());
			this->bburger = (gcnew System::Windows::Forms::Button());
			this->bdesert = (gcnew System::Windows::Forms::Button());
			this->bsoup = (gcnew System::Windows::Forms::Button());
			this->bicecream = (gcnew System::Windows::Forms::Button());
			this->bpasta = (gcnew System::Windows::Forms::Button());
			this->bpizza = (gcnew System::Windows::Forms::Button());
			this->bpotato = (gcnew System::Windows::Forms::Button());
			this->bsandwitch = (gcnew System::Windows::Forms::Button());
			this->bsmoothe = (gcnew System::Windows::Forms::Button());
			this->bcoffee = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnoffer = (gcnew System::Windows::Forms::Button());
			this->laoffer = (gcnew System::Windows::Forms::Label());
			this->txtemail = (gcnew System::Windows::Forms::TextBox());
			this->numoffer = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeetable))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtprice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numoffer))->BeginInit();
			this->SuspendLayout();
			// 
			// la1about
			// 
			this->la1about->AutoSize = true;
			this->la1about->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1about->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1about->Location = System::Drawing::Point(964, -1);
			this->la1about->Name = L"la1about";
			this->la1about->Size = System::Drawing::Size(121, 37);
			this->la1about->TabIndex = 20;
			this->la1about->Text = L"products";
			this->la1about->Visible = false;
			// 
			// la1contct
			// 
			this->la1contct->AutoSize = true;
			this->la1contct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1contct->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1contct->Location = System::Drawing::Point(1088, -1);
			this->la1contct->Name = L"la1contct";
			this->la1contct->Size = System::Drawing::Size(142, 37);
			this->la1contct->TabIndex = 19;
			this->la1contct->Text = L"Contact us";
			this->la1contct->Visible = false;
			// 
			// la1menu
			// 
			this->la1menu->AutoSize = true;
			this->la1menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1menu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1menu->Location = System::Drawing::Point(799, -1);
			this->la1menu->Name = L"la1menu";
			this->la1menu->Size = System::Drawing::Size(131, 37);
			this->la1menu->TabIndex = 18;
			this->la1menu->Text = L"Customer";
			this->la1menu->Visible = false;
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
			this->lacontact->Location = System::Drawing::Point(1088, -1);
			this->lacontact->Name = L"lacontact";
			this->lacontact->Size = System::Drawing::Size(142, 37);
			this->lacontact->TabIndex = 24;
			this->lacontact->Text = L"Contact us";
			this->lacontact->Click += gcnew System::EventHandler(this, &MyForm1::lacontact_Click);
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
			this->laabout->Location = System::Drawing::Point(962, -1);
			this->laabout->Name = L"laabout";
			this->laabout->Size = System::Drawing::Size(120, 37);
			this->laabout->TabIndex = 23;
			this->laabout->Text = L"Products";
			this->laabout->Click += gcnew System::EventHandler(this, &MyForm1::laabout_Click);
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
			this->lamenu->Location = System::Drawing::Point(799, -1);
			this->lamenu->Name = L"lamenu";
			this->lamenu->Size = System::Drawing::Size(131, 37);
			this->lamenu->TabIndex = 22;
			this->lamenu->Text = L"Customer";
			this->lamenu->Click += gcnew System::EventHandler(this, &MyForm1::lamenu_Click);
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
			this->lalogin->Location = System::Drawing::Point(640, -1);
			this->lalogin->Name = L"lalogin";
			this->lalogin->Size = System::Drawing::Size(134, 37);
			this->lalogin->TabIndex = 21;
			this->lalogin->Text = L"Employee";
			this->lalogin->Click += gcnew System::EventHandler(this, &MyForm1::lalogin_Click);
			// 
			// la1login
			// 
			this->la1login->AutoSize = true;
			this->la1login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->la1login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->la1login->Location = System::Drawing::Point(640, -1);
			this->la1login->Name = L"la1login";
			this->la1login->Size = System::Drawing::Size(134, 37);
			this->la1login->TabIndex = 25;
			this->la1login->Text = L"Employee";
			// 
			// employeetable
			// 
			this->employeetable->AllowUserToAddRows = false;
			this->employeetable->AllowUserToDeleteRows = false;
			this->employeetable->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->employeetable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->employeetable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->employeetable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->employeetable->Location = System::Drawing::Point(584, 61);
			this->employeetable->MultiSelect = false;
			this->employeetable->Name = L"employeetable";
			this->employeetable->ReadOnly = true;
			this->employeetable->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->employeetable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->employeetable->Size = System::Drawing::Size(766, 454);
			this->employeetable->TabIndex = 59;
			this->employeetable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::employeetable_CellClick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->eid);
			this->panel1->Controls->Add(this->butok);
			this->panel1->Controls->Add(this->txtid);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->butdelete);
			this->panel1->Controls->Add(this->butupdate);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->salary);
			this->panel1->Controls->Add(this->dateofjoin);
			this->panel1->Controls->Add(this->emp_city);
			this->panel1->Controls->Add(this->emp_address);
			this->panel1->Controls->Add(this->email);
			this->panel1->Controls->Add(this->mobileno);
			this->panel1->Controls->Add(this->firstname);
			this->panel1->Controls->Add(this->lastname);
			this->panel1->Location = System::Drawing::Point(12, 61);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(539, 488);
			this->panel1->TabIndex = 60;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView2->Location = System::Drawing::Point(557, 61);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(288, 241);
			this->dataGridView2->TabIndex = 102;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView2_CellClick);
			// 
			// eid
			// 
			this->eid->AutoSize = true;
			this->eid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eid->Location = System::Drawing::Point(351, 396);
			this->eid->Name = L"eid";
			this->eid->Size = System::Drawing::Size(156, 24);
			this->eid->TabIndex = 81;
			this->eid->Text = L"Enter Password";
			this->eid->Visible = false;
			// 
			// butok
			// 
			this->butok->Location = System::Drawing::Point(384, 454);
			this->butok->Name = L"butok";
			this->butok->Size = System::Drawing::Size(75, 23);
			this->butok->TabIndex = 82;
			this->butok->Text = L"Submit";
			this->butok->UseVisualStyleBackColor = true;
			this->butok->Visible = false;
			this->butok->Click += gcnew System::EventHandler(this, &MyForm1::butok_Click);
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(375, 428);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(100, 20);
			this->txtid->TabIndex = 80;
			this->txtid->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(384, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 83;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// butdelete
			// 
			this->butdelete->BackColor = System::Drawing::Color::Black;
			this->butdelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butdelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->butdelete->Location = System::Drawing::Point(375, 338);
			this->butdelete->Name = L"butdelete";
			this->butdelete->Size = System::Drawing::Size(111, 45);
			this->butdelete->TabIndex = 79;
			this->butdelete->Text = L"Delete >>";
			this->butdelete->UseVisualStyleBackColor = false;
			this->butdelete->Click += gcnew System::EventHandler(this, &MyForm1::butdelete_Click);
			// 
			// butupdate
			// 
			this->butupdate->BackColor = System::Drawing::Color::Black;
			this->butupdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butupdate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->butupdate->Location = System::Drawing::Point(375, 276);
			this->butupdate->Name = L"butupdate";
			this->butupdate->Size = System::Drawing::Size(111, 45);
			this->butupdate->TabIndex = 78;
			this->butupdate->Text = L"Update  >>";
			this->butupdate->UseVisualStyleBackColor = false;
			this->butupdate->Click += gcnew System::EventHandler(this, &MyForm1::butupdate_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(375, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 45);
			this->button1->TabIndex = 77;
			this->button1->Text = L"submit  >>";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(299, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 21);
			this->label10->TabIndex = 76;
			this->label10->Text = L"password";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(299, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 21);
			this->label9->TabIndex = 75;
			this->label9->Text = L"salary";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(53, 454);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 21);
			this->label8->TabIndex = 74;
			this->label8->Text = L"date";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(52, 400);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 21);
			this->label7->TabIndex = 73;
			this->label7->Text = L"city";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(52, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 21);
			this->label6->TabIndex = 72;
			this->label6->Text = L"address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 21);
			this->label5->TabIndex = 71;
			this->label5->Text = L"email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 21);
			this->label4->TabIndex = 70;
			this->label4->Text = L"mobile no";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 21);
			this->label3->TabIndex = 69;
			this->label3->Text = L"firstname";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 21);
			this->label2->TabIndex = 68;
			this->label2->Text = L"lastname";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(397, 139);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(121, 20);
			this->password->TabIndex = 67;
			// 
			// salary
			// 
			this->salary->Location = System::Drawing::Point(397, 91);
			this->salary->Name = L"salary";
			this->salary->Size = System::Drawing::Size(121, 20);
			this->salary->TabIndex = 66;
			// 
			// dateofjoin
			// 
			this->dateofjoin->Location = System::Drawing::Point(149, 451);
			this->dateofjoin->Name = L"dateofjoin";
			this->dateofjoin->Size = System::Drawing::Size(125, 20);
			this->dateofjoin->TabIndex = 65;
			// 
			// emp_city
			// 
			this->emp_city->Location = System::Drawing::Point(149, 400);
			this->emp_city->Name = L"emp_city";
			this->emp_city->Size = System::Drawing::Size(125, 20);
			this->emp_city->TabIndex = 64;
			// 
			// emp_address
			// 
			this->emp_address->Location = System::Drawing::Point(149, 273);
			this->emp_address->Multiline = true;
			this->emp_address->Name = L"emp_address";
			this->emp_address->Size = System::Drawing::Size(161, 96);
			this->emp_address->TabIndex = 63;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(149, 229);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(125, 20);
			this->email->TabIndex = 62;
			// 
			// mobileno
			// 
			this->mobileno->Location = System::Drawing::Point(149, 182);
			this->mobileno->Name = L"mobileno";
			this->mobileno->Size = System::Drawing::Size(125, 20);
			this->mobileno->TabIndex = 61;
			// 
			// firstname
			// 
			this->firstname->Location = System::Drawing::Point(149, 136);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(125, 20);
			this->firstname->TabIndex = 60;
			// 
			// lastname
			// 
			this->lastname->Location = System::Drawing::Point(149, 88);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(125, 20);
			this->lastname->TabIndex = 59;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(17, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 87);
			this->pictureBox1->TabIndex = 61;
			this->pictureBox1->TabStop = false;
			// 
			// comboproducts
			// 
			this->comboproducts->DisplayMember = L"SELECT PRODUCT";
			this->comboproducts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboproducts->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"baked_toast", L"burger", L"coffee", L"desert",
					L"icecream", L"pasta", L"pizza", L"potato", L"sandwitch", L"smoothes", L"soup"
			});
			this->comboproducts->Location = System::Drawing::Point(1110, 334);
			this->comboproducts->Name = L"comboproducts";
			this->comboproducts->Size = System::Drawing::Size(171, 21);
			this->comboproducts->TabIndex = 63;
			this->comboproducts->Visible = false;
			this->comboproducts->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboproducts_SelectedIndexChanged);
			// 
			// labot
			// 
			this->labot->AutoSize = true;
			this->labot->BackColor = System::Drawing::SystemColors::Window;
			this->labot->Location = System::Drawing::Point(1119, 337);
			this->labot->Name = L"labot";
			this->labot->Size = System::Drawing::Size(111, 13);
			this->labot->TabIndex = 64;
			this->labot->Text = L"SELECT PRODUCTS";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(524, 56);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(406, 238);
			this->dataGridView1->TabIndex = 65;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(923, 300);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(162, 20);
			this->txtname->TabIndex = 66;
			// 
			// btnupdate
			// 
			this->btnupdate->Location = System::Drawing::Point(935, 333);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(75, 23);
			this->btnupdate->TabIndex = 68;
			this->btnupdate->Text = L"UPDATE";
			this->btnupdate->UseVisualStyleBackColor = true;
			this->btnupdate->Click += gcnew System::EventHandler(this, &MyForm1::btnupdate_Click);
			// 
			// btnadd
			// 
			this->btnadd->Location = System::Drawing::Point(1029, 332);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(75, 23);
			this->btnadd->TabIndex = 69;
			this->btnadd->Text = L"ADD ";
			this->btnadd->UseVisualStyleBackColor = true;
			this->btnadd->Click += gcnew System::EventHandler(this, &MyForm1::btnadd_Click);
			// 
			// txtprice
			// 
			this->txtprice->Location = System::Drawing::Point(1122, 300);
			this->txtprice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->txtprice->Name = L"txtprice";
			this->txtprice->Size = System::Drawing::Size(142, 20);
			this->txtprice->TabIndex = 70;
			// 
			// btnburger
			// 
			this->btnburger->Location = System::Drawing::Point(935, 337);
			this->btnburger->Name = L"btnburger";
			this->btnburger->Size = System::Drawing::Size(75, 23);
			this->btnburger->TabIndex = 71;
			this->btnburger->Text = L"UPDATE";
			this->btnburger->UseVisualStyleBackColor = true;
			this->btnburger->Click += gcnew System::EventHandler(this, &MyForm1::braked_Click);
			// 
			// btnsmoothes
			// 
			this->btnsmoothes->Location = System::Drawing::Point(935, 337);
			this->btnsmoothes->Name = L"btnsmoothes";
			this->btnsmoothes->Size = System::Drawing::Size(75, 23);
			this->btnsmoothes->TabIndex = 72;
			this->btnsmoothes->Text = L"UPDATE";
			this->btnsmoothes->UseVisualStyleBackColor = true;
			this->btnsmoothes->Click += gcnew System::EventHandler(this, &MyForm1::btnsmoothes_Click);
			// 
			// btnsandwitch
			// 
			this->btnsandwitch->Location = System::Drawing::Point(935, 337);
			this->btnsandwitch->Name = L"btnsandwitch";
			this->btnsandwitch->Size = System::Drawing::Size(75, 23);
			this->btnsandwitch->TabIndex = 73;
			this->btnsandwitch->Text = L"UPDATE";
			this->btnsandwitch->UseVisualStyleBackColor = true;
			this->btnsandwitch->Click += gcnew System::EventHandler(this, &MyForm1::btnsandwitch_Click);
			// 
			// btnpotato
			// 
			this->btnpotato->Location = System::Drawing::Point(935, 334);
			this->btnpotato->Name = L"btnpotato";
			this->btnpotato->Size = System::Drawing::Size(75, 23);
			this->btnpotato->TabIndex = 74;
			this->btnpotato->Text = L"UPDATE";
			this->btnpotato->UseVisualStyleBackColor = true;
			this->btnpotato->Click += gcnew System::EventHandler(this, &MyForm1::btnpotato_Click);
			// 
			// btnpasta
			// 
			this->btnpasta->Location = System::Drawing::Point(935, 333);
			this->btnpasta->Name = L"btnpasta";
			this->btnpasta->Size = System::Drawing::Size(75, 23);
			this->btnpasta->TabIndex = 75;
			this->btnpasta->Text = L"UPDATE";
			this->btnpasta->UseVisualStyleBackColor = true;
			this->btnpasta->Click += gcnew System::EventHandler(this, &MyForm1::btnpasta_Click);
			// 
			// btnpizza
			// 
			this->btnpizza->Location = System::Drawing::Point(935, 332);
			this->btnpizza->Name = L"btnpizza";
			this->btnpizza->Size = System::Drawing::Size(75, 23);
			this->btnpizza->TabIndex = 76;
			this->btnpizza->Text = L"UPDATE";
			this->btnpizza->UseVisualStyleBackColor = true;
			this->btnpizza->Click += gcnew System::EventHandler(this, &MyForm1::btnpizza_Click);
			// 
			// btndesert
			// 
			this->btndesert->Location = System::Drawing::Point(935, 332);
			this->btndesert->Name = L"btndesert";
			this->btndesert->Size = System::Drawing::Size(75, 23);
			this->btndesert->TabIndex = 77;
			this->btndesert->Text = L"UPDATE";
			this->btndesert->UseVisualStyleBackColor = true;
			this->btndesert->Click += gcnew System::EventHandler(this, &MyForm1::btndesert_Click);
			// 
			// btnicecream
			// 
			this->btnicecream->Location = System::Drawing::Point(935, 333);
			this->btnicecream->Name = L"btnicecream";
			this->btnicecream->Size = System::Drawing::Size(75, 23);
			this->btnicecream->TabIndex = 78;
			this->btnicecream->Text = L"UPDATE";
			this->btnicecream->UseVisualStyleBackColor = true;
			this->btnicecream->Click += gcnew System::EventHandler(this, &MyForm1::btnicecream_Click);
			// 
			// btncoffee
			// 
			this->btncoffee->Location = System::Drawing::Point(935, 334);
			this->btncoffee->Name = L"btncoffee";
			this->btncoffee->Size = System::Drawing::Size(75, 23);
			this->btncoffee->TabIndex = 79;
			this->btncoffee->Text = L"UPDATE";
			this->btncoffee->UseVisualStyleBackColor = true;
			this->btncoffee->Click += gcnew System::EventHandler(this, &MyForm1::btncoffee_Click);
			// 
			// btnsoup
			// 
			this->btnsoup->Location = System::Drawing::Point(935, 334);
			this->btnsoup->Name = L"btnsoup";
			this->btnsoup->Size = System::Drawing::Size(75, 23);
			this->btnsoup->TabIndex = 80;
			this->btnsoup->Text = L"UPDATE";
			this->btnsoup->UseVisualStyleBackColor = true;
			this->btnsoup->Click += gcnew System::EventHandler(this, &MyForm1::btnsoup_Click);
			// 
			// butburger
			// 
			this->butburger->Location = System::Drawing::Point(1029, 332);
			this->butburger->Name = L"butburger";
			this->butburger->Size = System::Drawing::Size(75, 23);
			this->butburger->TabIndex = 81;
			this->butburger->Text = L"ADD Product";
			this->butburger->UseVisualStyleBackColor = true;
			this->butburger->Click += gcnew System::EventHandler(this, &MyForm1::butburger_Click);
			// 
			// butcoffee
			// 
			this->butcoffee->Location = System::Drawing::Point(1029, 334);
			this->butcoffee->Name = L"butcoffee";
			this->butcoffee->Size = System::Drawing::Size(75, 23);
			this->butcoffee->TabIndex = 82;
			this->butcoffee->Text = L"ADD Product";
			this->butcoffee->UseVisualStyleBackColor = true;
			this->butcoffee->Click += gcnew System::EventHandler(this, &MyForm1::butcoffee_Click);
			// 
			// buticecream
			// 
			this->buticecream->Location = System::Drawing::Point(1029, 332);
			this->buticecream->Name = L"buticecream";
			this->buticecream->Size = System::Drawing::Size(75, 23);
			this->buticecream->TabIndex = 83;
			this->buticecream->Text = L"ADD Product";
			this->buticecream->UseVisualStyleBackColor = true;
			this->buticecream->Click += gcnew System::EventHandler(this, &MyForm1::buticecream_Click);
			// 
			// butsmoothes
			// 
			this->butsmoothes->Location = System::Drawing::Point(1029, 334);
			this->butsmoothes->Name = L"butsmoothes";
			this->butsmoothes->Size = System::Drawing::Size(75, 23);
			this->butsmoothes->TabIndex = 84;
			this->butsmoothes->Text = L"ADD Product";
			this->butsmoothes->UseVisualStyleBackColor = true;
			this->butsmoothes->Click += gcnew System::EventHandler(this, &MyForm1::butsmoothes_Click);
			// 
			// butpizza
			// 
			this->butpizza->Location = System::Drawing::Point(1029, 334);
			this->butpizza->Name = L"butpizza";
			this->butpizza->Size = System::Drawing::Size(75, 23);
			this->butpizza->TabIndex = 85;
			this->butpizza->Text = L"ADD Product";
			this->butpizza->UseVisualStyleBackColor = true;
			this->butpizza->Click += gcnew System::EventHandler(this, &MyForm1::butpizza_Click);
			// 
			// butdesert
			// 
			this->butdesert->Location = System::Drawing::Point(1029, 332);
			this->butdesert->Name = L"butdesert";
			this->butdesert->Size = System::Drawing::Size(75, 23);
			this->butdesert->TabIndex = 86;
			this->butdesert->Text = L"ADD Product";
			this->butdesert->UseVisualStyleBackColor = true;
			this->butdesert->Click += gcnew System::EventHandler(this, &MyForm1::butdesert_Click);
			// 
			// butsandwitch
			// 
			this->butsandwitch->Location = System::Drawing::Point(1029, 333);
			this->butsandwitch->Name = L"butsandwitch";
			this->butsandwitch->Size = System::Drawing::Size(75, 23);
			this->butsandwitch->TabIndex = 87;
			this->butsandwitch->Text = L"ADD Product";
			this->butsandwitch->UseVisualStyleBackColor = true;
			this->butsandwitch->Click += gcnew System::EventHandler(this, &MyForm1::butsandwitch_Click);
			// 
			// butpotato
			// 
			this->butpotato->Location = System::Drawing::Point(1029, 337);
			this->butpotato->Name = L"butpotato";
			this->butpotato->Size = System::Drawing::Size(75, 23);
			this->butpotato->TabIndex = 88;
			this->butpotato->Text = L"ADD Product";
			this->butpotato->UseVisualStyleBackColor = true;
			this->butpotato->Click += gcnew System::EventHandler(this, &MyForm1::butpotato_Click);
			// 
			// butpasta
			// 
			this->butpasta->Location = System::Drawing::Point(1029, 332);
			this->butpasta->Name = L"butpasta";
			this->butpasta->Size = System::Drawing::Size(75, 23);
			this->butpasta->TabIndex = 89;
			this->butpasta->Text = L"ADD Product";
			this->butpasta->UseVisualStyleBackColor = true;
			this->butpasta->Click += gcnew System::EventHandler(this, &MyForm1::butpasta_Click);
			// 
			// butsoup
			// 
			this->butsoup->Location = System::Drawing::Point(1029, 334);
			this->butsoup->Name = L"butsoup";
			this->butsoup->Size = System::Drawing::Size(75, 23);
			this->butsoup->TabIndex = 90;
			this->butsoup->Text = L"ADD Product";
			this->butsoup->UseVisualStyleBackColor = true;
			this->butsoup->Click += gcnew System::EventHandler(this, &MyForm1::butsoup_Click);
			// 
			// bbaked_toast
			// 
			this->bbaked_toast->Location = System::Drawing::Point(984, 382);
			this->bbaked_toast->Name = L"bbaked_toast";
			this->bbaked_toast->Size = System::Drawing::Size(75, 23);
			this->bbaked_toast->TabIndex = 91;
			this->bbaked_toast->Text = L"DELETE";
			this->bbaked_toast->UseVisualStyleBackColor = true;
			this->bbaked_toast->Click += gcnew System::EventHandler(this, &MyForm1::bbaked_toast_Click);
			// 
			// bburger
			// 
			this->bburger->Location = System::Drawing::Point(984, 382);
			this->bburger->Name = L"bburger";
			this->bburger->Size = System::Drawing::Size(75, 23);
			this->bburger->TabIndex = 92;
			this->bburger->Text = L"DELETE";
			this->bburger->UseVisualStyleBackColor = true;
			this->bburger->Click += gcnew System::EventHandler(this, &MyForm1::bburger_Click);
			// 
			// bdesert
			// 
			this->bdesert->Location = System::Drawing::Point(984, 382);
			this->bdesert->Name = L"bdesert";
			this->bdesert->Size = System::Drawing::Size(75, 23);
			this->bdesert->TabIndex = 93;
			this->bdesert->Text = L"DELETE";
			this->bdesert->UseVisualStyleBackColor = true;
			this->bdesert->Click += gcnew System::EventHandler(this, &MyForm1::bdesert_Click);
			// 
			// bsoup
			// 
			this->bsoup->Location = System::Drawing::Point(984, 382);
			this->bsoup->Name = L"bsoup";
			this->bsoup->Size = System::Drawing::Size(75, 23);
			this->bsoup->TabIndex = 94;
			this->bsoup->Text = L"DELETE";
			this->bsoup->UseVisualStyleBackColor = true;
			this->bsoup->Click += gcnew System::EventHandler(this, &MyForm1::bsoup_Click);
			// 
			// bicecream
			// 
			this->bicecream->Location = System::Drawing::Point(984, 382);
			this->bicecream->Name = L"bicecream";
			this->bicecream->Size = System::Drawing::Size(75, 23);
			this->bicecream->TabIndex = 95;
			this->bicecream->Text = L"DELETE";
			this->bicecream->UseVisualStyleBackColor = true;
			this->bicecream->Click += gcnew System::EventHandler(this, &MyForm1::bicecream_Click);
			// 
			// bpasta
			// 
			this->bpasta->Location = System::Drawing::Point(984, 382);
			this->bpasta->Name = L"bpasta";
			this->bpasta->Size = System::Drawing::Size(75, 23);
			this->bpasta->TabIndex = 96;
			this->bpasta->Text = L"DELETE";
			this->bpasta->UseVisualStyleBackColor = true;
			this->bpasta->Click += gcnew System::EventHandler(this, &MyForm1::bpasta_Click);
			// 
			// bpizza
			// 
			this->bpizza->Location = System::Drawing::Point(984, 382);
			this->bpizza->Name = L"bpizza";
			this->bpizza->Size = System::Drawing::Size(75, 23);
			this->bpizza->TabIndex = 97;
			this->bpizza->Text = L"DELETE";
			this->bpizza->UseVisualStyleBackColor = true;
			this->bpizza->Click += gcnew System::EventHandler(this, &MyForm1::bpizza_Click);
			// 
			// bpotato
			// 
			this->bpotato->Location = System::Drawing::Point(984, 382);
			this->bpotato->Name = L"bpotato";
			this->bpotato->Size = System::Drawing::Size(75, 23);
			this->bpotato->TabIndex = 98;
			this->bpotato->Text = L"DELETE";
			this->bpotato->UseVisualStyleBackColor = true;
			this->bpotato->Click += gcnew System::EventHandler(this, &MyForm1::bpotato_Click);
			// 
			// bsandwitch
			// 
			this->bsandwitch->Location = System::Drawing::Point(984, 382);
			this->bsandwitch->Name = L"bsandwitch";
			this->bsandwitch->Size = System::Drawing::Size(75, 23);
			this->bsandwitch->TabIndex = 99;
			this->bsandwitch->Text = L"DELETE";
			this->bsandwitch->UseVisualStyleBackColor = true;
			this->bsandwitch->Click += gcnew System::EventHandler(this, &MyForm1::bsandwitch_Click);
			// 
			// bsmoothe
			// 
			this->bsmoothe->Location = System::Drawing::Point(984, 382);
			this->bsmoothe->Name = L"bsmoothe";
			this->bsmoothe->Size = System::Drawing::Size(75, 23);
			this->bsmoothe->TabIndex = 100;
			this->bsmoothe->Text = L"DELETE";
			this->bsmoothe->UseVisualStyleBackColor = true;
			this->bsmoothe->Click += gcnew System::EventHandler(this, &MyForm1::bsmoothe_Click);
			// 
			// bcoffee
			// 
			this->bcoffee->Location = System::Drawing::Point(984, 382);
			this->bcoffee->Name = L"bcoffee";
			this->bcoffee->Size = System::Drawing::Size(75, 23);
			this->bcoffee->TabIndex = 101;
			this->bcoffee->Text = L"DELETE";
			this->bcoffee->UseVisualStyleBackColor = true;
			this->bcoffee->Click += gcnew System::EventHandler(this, &MyForm1::bcoffee_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// btnoffer
			// 
			this->btnoffer->Location = System::Drawing::Point(571, 431);
			this->btnoffer->Name = L"btnoffer";
			this->btnoffer->Size = System::Drawing::Size(75, 23);
			this->btnoffer->TabIndex = 103;
			this->btnoffer->Text = L"SET";
			this->btnoffer->UseVisualStyleBackColor = true;
			this->btnoffer->Click += gcnew System::EventHandler(this, &MyForm1::btnoffer_Click);
			// 
			// laoffer
			// 
			this->laoffer->AutoSize = true;
			this->laoffer->BackColor = System::Drawing::Color::White;
			this->laoffer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->laoffer->Location = System::Drawing::Point(567, 320);
			this->laoffer->Name = L"laoffer";
			this->laoffer->Size = System::Drawing::Size(57, 21);
			this->laoffer->TabIndex = 103;
			this->laoffer->Text = L"OFFER";
			// 
			// txtemail
			// 
			this->txtemail->Location = System::Drawing::Point(571, 356);
			this->txtemail->Name = L"txtemail";
			this->txtemail->ReadOnly = true;
			this->txtemail->Size = System::Drawing::Size(216, 20);
			this->txtemail->TabIndex = 104;
			// 
			// numoffer
			// 
			this->numoffer->Location = System::Drawing::Point(571, 399);
			this->numoffer->Name = L"numoffer";
			this->numoffer->Size = System::Drawing::Size(120, 20);
			this->numoffer->TabIndex = 105;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(1362, 561);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->numoffer);
			this->Controls->Add(this->txtemail);
			this->Controls->Add(this->laoffer);
			this->Controls->Add(this->btnoffer);
			this->Controls->Add(this->bcoffee);
			this->Controls->Add(this->bsmoothe);
			this->Controls->Add(this->bsandwitch);
			this->Controls->Add(this->bpotato);
			this->Controls->Add(this->bpizza);
			this->Controls->Add(this->bpasta);
			this->Controls->Add(this->bicecream);
			this->Controls->Add(this->bsoup);
			this->Controls->Add(this->bdesert);
			this->Controls->Add(this->bburger);
			this->Controls->Add(this->bbaked_toast);
			this->Controls->Add(this->butsoup);
			this->Controls->Add(this->butpasta);
			this->Controls->Add(this->butpotato);
			this->Controls->Add(this->butsandwitch);
			this->Controls->Add(this->butdesert);
			this->Controls->Add(this->butpizza);
			this->Controls->Add(this->butsmoothes);
			this->Controls->Add(this->buticecream);
			this->Controls->Add(this->butcoffee);
			this->Controls->Add(this->butburger);
			this->Controls->Add(this->btnsoup);
			this->Controls->Add(this->btncoffee);
			this->Controls->Add(this->btnicecream);
			this->Controls->Add(this->btndesert);
			this->Controls->Add(this->btnpizza);
			this->Controls->Add(this->btnpasta);
			this->Controls->Add(this->btnpotato);
			this->Controls->Add(this->btnsandwitch);
			this->Controls->Add(this->btnsmoothes);
			this->Controls->Add(this->btnburger);
			this->Controls->Add(this->txtprice);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->btnupdate);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labot);
			this->Controls->Add(this->comboproducts);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->employeetable);
			this->Controls->Add(this->la1login);
			this->Controls->Add(this->lacontact);
			this->Controls->Add(this->laabout);
			this->Controls->Add(this->lamenu);
			this->Controls->Add(this->lalogin);
			this->Controls->Add(this->la1about);
			this->Controls->Add(this->la1contct);
			this->Controls->Add(this->la1menu);
			this->Name = L"MyForm1";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeetable))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtprice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numoffer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
		MySqlConnection^ conn = gcnew MySqlConnection(connstring);
		void loadtable() {
		
			try {
				conn->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from emp",conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				employeetable->DataSource = dt;
				conn->Close();
			}
			catch(Exception^ e){
				MessageBox::Show("stop exception"+e);
			}
		}

		void btnvi() {
			btnadd->Visible = false;
			btnburger->Visible = false;
				btncoffee->Visible = false;
				btndesert->Visible = false;
				btnicecream->Visible = false;
				btnpasta->Visible = false;
				btnpizza->Visible = false;
				btnpotato->Visible = false;
				btnsandwitch->Visible = false;
				btnsmoothes->Visible = false;
				btnsoup->Visible = false;
				btnupdate->Visible = false;

				    butburger->Visible = false;
					butcoffee->Visible = false;
					butdesert->Visible = false;
					buticecream->Visible = false;
					butpasta->Visible = false;
					butpizza->Visible = false;
					butpotato->Visible = false;
					butsandwitch->Visible = false;
					butsmoothes->Visible = false;
					butsoup->Visible = false;

					bbaked_toast->Visible = false;
						bburger->Visible = false;
						bdesert->Visible = false;
						bcoffee->Visible = false;
						bdesert->Visible = false;
						bicecream->Visible = false;
						bpasta->Visible = false;
						bpizza->Visible = false;
						bpotato->Visible = false;
						bsandwitch->Visible = false;
						bsmoothe->Visible = false; 
						bsoup->Visible = false;

		}
		//??
		void loaddataGridView2() {
			try {
				conn->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select email from cust1 group by email having count(email)>=5;", conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataGridView2->DataSource = dt;
				conn->Close();

			}
			catch (Exception^ e) {
				MessageBox::Show("stop exception" + e);
			}
		
		
		}
		void vimenu() {
			dataGridView2->Visible = true;
			laoffer->Visible = true;
			btnoffer->Visible = true;
			numoffer->Visible = true;
			txtemail->Visible = true;
		}
		void novimenu() {
			dataGridView2->Visible = false;
			laoffer->Visible = false;
			btnoffer->Visible = false;
			numoffer->Visible = false;
			txtemail->Visible = false;
		}

private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	labot->Visible = false;
	loaddataGridView2();
	loadtable();
	dataGridView1->Visible = false;
	txtname->Visible = false;
	txtprice->Visible = false;
	btnvi();
	novimenu();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	eid->Visible = false;
	txtid->Visible = false;
	butok->Visible = false;
	button2->Visible = false;
	String^ name_check = "^([A-z]+)$";
	String ^ mobilenocheck = "^[6-8]([0-9]){9}$";
	String^ emailcheck = "^[a-z]+[0-9]*@[a-z]+.[a-z]+$";
	String^ salarycheck = "^[1-9][0-9]{2,4}$";
	String^ passwordcheck = "^[A-z]*[0-9]*(@|~|%|#)+[A-z]*[0-9]*$";
	String^ datecheck = "^([1-2][0-9]{0,1})*([3][0-1])*(\/|-)([0-9]*[1-2])(\/|-)([0-9][0-9][0-9][0-9])$";

	int empid = 0;
	String^ last = lastname->Text;
	int l1 = last->Trim()->Length;
	String^ first = firstname->Text;
	int l2 = first->Trim()->Length;
	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);
	bool rlast = regxn->IsMatch(last);
	String^ address = emp_address->Text;
	int l3 = address->Trim()->Length;
	String^ city = emp_city->Text;
	bool rcity = regxn->IsMatch(city);
	int l4 = city->Trim()->Length;
	String^ empmobile = mobileno->Text;
	Regex^ regxmobo = gcnew Regex(mobilenocheck);
	int l5 = empmobile->Trim()->Length;
	bool rmobile = regxmobo->IsMatch(empmobile);
	String^ empemail = email->Text;
	Regex^ regxmail = gcnew Regex(emailcheck);
	bool rmail = regxmail->IsMatch(empemail);
	int l6 = empemail->Trim()->Length;
	String^ empsalary = salary->Text;
	Regex^ regxsalary = gcnew Regex(salarycheck);
	bool rsalary = regxsalary->IsMatch(empsalary);
	int l7 = empsalary->Trim()->Length;
	String^ emppassword = password->Text;
	Regex^ regxpass = gcnew Regex(passwordcheck);
	bool rpass = regxpass->IsMatch(emppassword);
	int l8 = emppassword->Trim()->Length;
	String^ empdateofjoin = dateofjoin->Text;
	Regex^ regxdateof = gcnew Regex(datecheck);
	bool rdate = regxdateof->IsMatch(empdateofjoin);
	int l9 = empdateofjoin->Trim()->Length;
	if (l1>2&&l2>2&&l3>2&&l4>2&&l5>2&&l6>2&&l7>2&&l8>2&&l9>2) {
		if (rlast) {
			if (rname) {
				if (rmobile) {
					if (rmail) {
						if (address->Trim()->Length > 2) {
							if (rcity) {
								if (rdate) {
									if (rsalary) {
										if (rpass) {
											
											int k = 0;
											String^ select = "select * from emp where password1=@pass ";
											MySqlCommand^ cmdselect = gcnew MySqlCommand(select, conn);
											cmdselect->Parameters->AddWithValue("@pass", emppassword);
											try {
												conn->Open();
												MySqlDataReader^ r= cmdselect->ExecuteReader();
												while (r->Read()) {
													k++;
												}
												conn->Close();
											}
											catch (Exception^ q) {
												MessageBox::Show("System Error", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);

												conn->Close();
											}
											int mono = 0;
											String^ mo = "select * from emp where mobile_no=@moboile";
											cmdselect = gcnew MySqlCommand(mo,conn);
											cmdselect->Parameters->AddWithValue("@moboile", empmobile);
											try {
												conn->Open();
												MySqlDataReader^ r = cmdselect->ExecuteReader();
												while (r->Read()) {
													mono++;
												}
												conn->Close();
											}
											catch (Exception^ q) {
												MessageBox::Show("System Error", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);

												conn->Close();
											}
											int emno = 0;
											String^ mo1 = "select * from emp where email=@email1";
											cmdselect = gcnew MySqlCommand(mo1, conn);
											cmdselect->Parameters->AddWithValue("@email1", empemail);
											try {
												conn->Open();
												MySqlDataReader^ r = cmdselect->ExecuteReader();
												while (r->Read()) {
													emno++;
												}
												
												conn->Close();
											}
											catch (Exception^ q) {
												MessageBox::Show("System Error", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);

												conn->Close();
											}
											
											if (mono==0) {
												if (emno == 0) {
													if (k == 0) {
														String^ cmdstring = "insert into emp(emp_id,lastname,firstname,mobile_no,email,address,city,date_of_join,salary,password1) \
values(@emp_id,@lastname,@firstname,@mobile_no,@email,@address,@city,@date_of_join,@salary,@password);";
														MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
														s->Parameters->AddWithValue("@lastname", last);
														s->Parameters->AddWithValue("@firstname", first);
														s->Parameters->AddWithValue("@mobile_no", empmobile);
														s->Parameters->AddWithValue("@email", empemail);
														s->Parameters->AddWithValue("@address", address);
														s->Parameters->AddWithValue("@city", city);
														s->Parameters->AddWithValue("@date_of_join", empdateofjoin);
														s->Parameters->AddWithValue("@salary", empsalary);
														s->Parameters->AddWithValue("@password", emppassword);
														String^ cstring = "select * from emp";
														String^ ep;
														MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
														try {
															conn->Open();
															MySqlDataReader^ dr = sr->ExecuteReader();
															while (dr->Read()) {

																ep = (dr->GetString("emp_id"));

															}
															empid = Convert::ToInt32(ep);
															empid = empid + 1;
															conn->Close();
															//MessageBox::Show(Convert::ToString(empid), "done...!!");
															MessageBox::Show(Convert::ToString(empid));
															String^ no = Convert::ToString(empid);
															s->Parameters->AddWithValue("@emp_id", no);
															conn->Open();
															s->ExecuteNonQuery();
															conn->Close();
															MessageBox::Show("EmployeeId" + Convert::ToString(empid), "Employee is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
															loadtable();
															txtid->Text = "";
														}
														catch (Exception^ e) {
															MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
															conn->Close();
														}
													}
													else {
														MessageBox::Show("Password is already exits\n change password", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);

													}
												}
												else {
													MessageBox::Show("Email address is already exits\n change password", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);

												}
											}
											else {
												MessageBox::Show("mobile number is already exits\n change password", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);

											}
										}
										else {
											MessageBox::Show("password must consists of letter \ndigit and \n@,#,~,% spacial symbol", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
										}
									}
									else {
										MessageBox::Show("only 5 figer salary is accepted..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
									}
								}
								else {
									MessageBox::Show("date must be in dd/mm/yyyy..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
								}
							}
							else {
								MessageBox::Show("check City..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
							}
						}
						else {
							MessageBox::Show("Address is invalid..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						}
					}
					else
					{
						MessageBox::Show("Enter valid email", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
					}
				}
				else {
					MessageBox::Show("check mobile no..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			else { MessageBox::Show("check fist name..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop); }
		}
		else {
			MessageBox::Show("check last name..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}else{
		MessageBox::Show("you left something all fields \n are mandatory", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
String^msg;
private: System::Void butupdate_Click(System::Object^  sender, System::EventArgs^  e) {
	eid->Visible = true;
	txtid->Visible = true;
	butok->Visible = true;
	button2->Visible = false;
}
private: System::Void butok_Click(System::Object^  sender, System::EventArgs^  e) {
	 
	String^ last = lastname->Text;
	String^ name_check="^([A-z]+)$";
	String ^ mobilenocheck="^[6-8]([0-9]){9}$";
	String^ emailcheck ="^[a-z]+[0-9]*@[a-z]+.[a-z]+$";
	String^ salarycheck ="^[1-9][0-9]{2,4}$";
	String^ passwordcheck ="^[A-z]*[0-9]*(@|~|%|#)+[A-z]*[0-9]*$";
	String^ datecheck ="^([1-2][0-9]{0,1})*([3][0-1])*(\/|-)([0-9]*[1-2])(\/|-)([0-9][0-9][0-9][0-9])$";
	String^ first = firstname->Text;
	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);
	bool rlast = regxn->IsMatch(last);
	String^ address = emp_address->Text;
	//Regex^ regxadd = gcnew Regex();
	String^ city = emp_city->Text;
	bool rcity = regxn->IsMatch(city);
	String^ empmobile = mobileno->Text;
	Regex^ regxmobo = gcnew Regex(mobilenocheck);
	bool rmobile = regxmobo->IsMatch(empmobile);
	String^ empemail = email->Text;
	Regex^ regxmail = gcnew Regex(emailcheck);
	bool rmail = regxmail->IsMatch(empemail);
	String^ empsalary = salary->Text;
	Regex^ regxsalary = gcnew Regex(salarycheck);
	bool rsalary = regxsalary->IsMatch(empsalary);
	String^ emppassword = password->Text;
	Regex^ regxpass = gcnew Regex(passwordcheck);
	bool rpass = regxpass->IsMatch(emppassword);
	String^ empdateofjoin = dateofjoin->Text;
	Regex^ regxdateof = gcnew Regex(datecheck);
	bool rdate = regxdateof->IsMatch(empdateofjoin);
	int l1 = last->Trim()->Length;
	int l2 = first->Trim()->Length;
	int l3 = address->Trim()->Length;
	int l4 = city->Trim()->Length;
	int l5 = empmobile->Trim()->Length;
	int l6 = empemail->Trim()->Length;
	int l7 = empsalary->Trim()->Length;
	int l8 = emppassword->Trim()->Length;
	int l9 = empdateofjoin->Trim()->Length;
	String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
	
	MySqlConnection^ conn = gcnew MySqlConnection(connstring);
	if (l1 > 2 && l2 > 2 && l3 > 2 && l4 > 2 && l5 > 2 && l6 > 2 && l7 > 2 && l8 > 2 && l9 > 2) {
	if (rlast) {
		if (rname) {
			if (rmobile) {
				if (rmail) {
					if (address->Trim()->Length > 2) {
						if (rcity) {
							if (rdate) {
								if (rsalary) {
									if (rpass) {
		try {
			conn->Open();
			String^ cmdstring = "UPDATE 	emp set lastname=@lastname, firstname=@firstname,mobile_no=@mobile_no,email=@email,address=@address,city=@city,date_of_join=@date_of_join\
                            ,salary=@salary where password1=@empid;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@lastname", last);
			s->Parameters->AddWithValue("@firstname", first);
			s->Parameters->AddWithValue("@mobile_no", empmobile);
			s->Parameters->AddWithValue("@email", empemail);
			s->Parameters->AddWithValue("@address", address);
			s->Parameters->AddWithValue("@city", city);
			s->Parameters->AddWithValue("@date_of_join", empdateofjoin);
			s->Parameters->AddWithValue("@salary", empsalary);
			s->Parameters->AddWithValue("@empid", txtid->Text);
			s->ExecuteNonQuery();
			conn->Close();
			txtid->Text="";
			loadtable();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
									}
									else {
										MessageBox::Show("password must consists of letter \ndigit and \n@,#,~,% spacial symbol", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
									}
								}
								else {
									MessageBox::Show("only 5 figer salary is accepted..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
								}
							}
							else {
								MessageBox::Show("date must be in dd/mm/yyyy..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
							}
						}
						else {
							MessageBox::Show("check City..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						}
					}
					else {
						MessageBox::Show("Address is invalid..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
					}
				}
				else
				{
					MessageBox::Show("Enter valid email", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			else {
				MessageBox::Show("check mobile no..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			}
		}
		else { MessageBox::Show("check fist name..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop); }
	}
	else {
		MessageBox::Show("check last name..", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
	}
	else {
		MessageBox::Show("you left something all fields \n are mandatory", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}

}
private: System::Void butdelete_Click(System::Object^  sender, System::EventArgs^  e) {
	eid->Visible = true;
	txtid->Visible = true;
	butok->Visible = false;
	button2->Visible = true;
}
private: System::Void employeetable_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ emp_id1 = employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
	String^ emp_id2 = employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
	String^ emp_id3 = employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
	String^ emp_id4 = employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[4]->Value->ToString();
	String^ emp_id5 = employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[5]->Value->ToString();
	String^ emp_id6 = employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[6]->Value->ToString();
	String^ emp_id7 = employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[7]->Value->ToString();
	String^ emp_id8= employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[8]->Value->ToString();
	String^ emp_id9= employeetable->Rows[employeetable->CurrentCell->RowIndex]->Cells[9]->Value->ToString();

	lastname->Text=emp_id1;
	firstname->Text = emp_id2;
	emp_address->Text = emp_id3;
    emp_city->Text = emp_id4;
	dateofjoin->Text = emp_id5;
	salary->Text = emp_id6;
	password->Text = emp_id7;
	email->Text = emp_id8;
	mobileno->Text = emp_id9;	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
	MySqlConnection^ conn = gcnew MySqlConnection(connstring);
	try {
		conn->Open();
		String^ cmdstring = "delete from emp where password1=@pass;";
		MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
		s->Parameters->AddWithValue("@pass", txtid->Text);
		s->ExecuteNonQuery();
		//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
		conn->Close();
		txtid->Text = "";
		loadtable();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		conn->Close();
	}
}

		 /*void vicustomer() {
		 
		 }
		 void vicustomer() {

		 }*/

private: System::Void lamenu_Click(System::Object^  sender, System::EventArgs^  e) {
	vimenu();
	dataGridView2->Visible = true;
	la1menu->Visible = true;
	lamenu->Visible = false;
	la1login->Visible = false;
	la1contct->Visible = false;
	la1about->Visible = false;
	laabout->Visible = true;
	lacontact->Visible = true;
	employeetable->Visible = false;
	panel1->Visible = false;
	comboproducts->Visible = false;
		labot->Visible = false;
		dataGridView1->Visible = false;
		txtname->Visible = false;
		txtprice->Visible = false;
}
private: System::Void laabout_Click(System::Object^  sender, System::EventArgs^  e) {
	novimenu();
	txtname->Visible = true;
	txtprice->Visible = true;
	la1menu->Visible = false;
	lamenu->Visible = true;
	la1login->Visible = false;
	la1contct->Visible = false;
	la1about->Visible = true;
	laabout->Visible = false;
	employeetable->Visible = false;
	lacontact->Visible = true;
	panel1->Visible = false;
	comboproducts->Visible = true;
	dataGridView1->Visible = true;
	labot->Visible=true;


}
private: System::Void lacontact_Click(System::Object^  sender, System::EventArgs^  e) {
	novimenu();
	la1menu->Visible = false;
	lamenu->Visible = true;
	la1login->Visible = false;
	la1contct->Visible = true;
	lacontact->Visible = false;
	la1about->Visible = false;
	laabout->Visible = true;
	employeetable->Visible = false;
	panel1->Visible = false;
	comboproducts->Visible = false;
	labot->Visible = false;
	dataGridView1->Visible = false;
	txtname->Visible = false;
	txtprice->Visible = false;
}

private: System::Void lalogin_Click(System::Object^  sender, System::EventArgs^  e) {
	novimenu();
	la1menu->Visible = false;
	lamenu->Visible = true;
	la1login->Visible = true;
	la1contct->Visible = false;
	lacontact->Visible = true;
	la1about->Visible = false;
	laabout->Visible = true;
	employeetable->Visible = true;
	comboproducts->Visible = false;
	labot->Visible = false;
	loadtable();
	panel1->Visible = true;
	dataGridView1->Visible = false;
	txtname->Visible = false;
	txtprice->Visible = false;
}


private: System::Void comboproducts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	labot->Visible = false;
	if (comboproducts->Text == "baked_toast") { btnvi(); btnupdate->Visible = true; btnadd->Visible = true; bbaked_toast->Visible = true;
	}
	else if (comboproducts->Text == "burger") { btnvi(); btnburger->Visible = true; butburger->Visible = true;bburger->Visible = true;
	}
	else if (comboproducts->Text == "coffee") { btnvi(); btncoffee->Visible = true;butcoffee->Visible = true;bcoffee->Visible = true;
	}
	else if (comboproducts->Text == "desert") { btnvi(); btndesert->Visible = true; butdesert->Visible = true; bdesert->Visible = true;
	}
	else if (comboproducts->Text == "icecream") { btnvi(); btnicecream->Visible = true; buticecream->Visible = true;bicecream->Visible = true;
	}
	else if (comboproducts->Text == "pasta") { btnvi(); btnpasta->Visible = true; butpasta->Visible = true;bpasta->Visible = true;
	}
	else if (comboproducts->Text == "pizza") { btnvi(); btnpizza->Visible = true; butpizza->Visible = true;bpizza->Visible = true;
	}
	else if (comboproducts->Text == "potato") { btnvi(); btnpotato->Visible = true;butpotato->Visible = true;bpotato->Visible = true;
	}
	else if (comboproducts->Text == "sandwitch") { btnvi(); btnsandwitch->Visible = true; butsandwitch->Visible = true; bsandwitch->Visible = true;
	}
	else if (comboproducts->Text == "smoothes") { btnvi(); btnsmoothes->Visible = true; butsmoothes->Visible = true;bsmoothe->Visible = true;
	}
	else if (comboproducts->Text == "soup") { btnvi(); btnsoup->Visible = true; butsoup->Visible = true;bsoup->Visible = true;
	}
	//gridproducts

	try {
		conn->Open();
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from "+comboproducts->Text+"", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;
		conn->Close();
	}
	catch (Exception^ e) {

		MessageBox::Show("stop exception" + e);
	}
}
		 String^ emp_id1;
		 int a;
		 String^ emp_id2;
		
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	emp_id1 = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
	 emp_id2 = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
	 emp_id3 = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	 
	txtname->Text = emp_id1;
	 a=Convert::ToInt32(emp_id2);
	 txtprice->Value = a;
}
		
		
private: System::Void btnupdate_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang ="update baked_toast set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang,conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);
		
		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from baked_toast", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}



}
private: System::Void braked_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update burger set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from burger", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}


}
private: System::Void btncoffee_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update coffee set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from coffee", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}

}
private: System::Void btndesert_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update desert set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from desert", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void btnicecream_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update icecream set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from icecream", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}

}
private: System::Void btnpasta_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update pasta set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from pasta", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}

}
private: System::Void btnpizza_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update pizza set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from pizza", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void btnsandwitch_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update sandwitch set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from sandwitch", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void btnpotato_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update potato set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from potato", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void btnsmoothes_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update smoothes set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from smoothes", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void btnsoup_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	try {
		conn->Open();
		String^ spllang = "update soup set name=@name,price=@price where id=@id";
		MySqlCommand^ spl = gcnew MySqlCommand(spllang, conn);
		MessageBox::Show(txtname->Text + " " + txtprice->Value + " " + emp_id3);
		//
		spl->Parameters->AddWithValue("@name", txtname->Text);
		spl->Parameters->AddWithValue("@price", txtprice->Value);
		//spl->Parameters->AddWithValue("@table",comboproducts->Text);
		spl->Parameters->AddWithValue("@id", emp_id3);

		spl->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from soup", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void btnadd_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into baked_toast(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from baked_toast";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from baked_toast", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void butburger_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into burger(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from burger";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from burger", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void butcoffee_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into coffee(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from coffee";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from coffee", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void butdesert_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into desert(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from desert";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from desert", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void buticecream_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into icecream(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from icecream";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from icecream", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void butpasta_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into pasta(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from pasta";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from pasta", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void butpizza_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into pizza(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from pizza";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from pizza", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}

}
private: System::Void butpotato_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into potato(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from potato";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from potato", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}


}
private: System::Void butsandwitch_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into sandwitch(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from sandwitch";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from sandwitch", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		loadtable();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void butsmoothes_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";
	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	int empid = 0;
	String^ cmdstring = "insert into smoothes(id,name,price) values(@emp_id,@lastname,@firstname);";
	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
	s->Parameters->AddWithValue("@lastname", txtname->Text);
	s->Parameters->AddWithValue("@firstname", txtprice->Value);
	String^ cstring = "select * from smoothes";
	String^ ep;
	MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
	try {
		conn->Open();
		MySqlDataReader^ dr = sr->ExecuteReader();
		while (dr->Read()) {

			ep = (dr->GetString("id"));

		}
		empid = Convert::ToInt32(ep);
		empid = empid + 1;
		conn->Close();
		conn->Open();
		//>//

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from smoothes", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//MessageBox::Show(Convert::ToString(empid), "done...!!");
		//MessageBox::Show(Convert::ToString(empid));
		String^ no = Convert::ToString(empid);
		s->Parameters->AddWithValue("@emp_id", no);
		conn->Open();
		s->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		conn->Close();
	}
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void butsoup_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);

	if (rname) {
		if (rprice) {
			int empid = 0;
			String^ cmdstring = "insert into soup(id,name,price) values(@emp_id,@lastname,@firstname);";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@lastname", first);
			s->Parameters->AddWithValue("@firstname", txtprice->Value);
			String^ cstring = "select * from soup";
			String^ ep;
			MySqlCommand^ sr = gcnew MySqlCommand(cstring, conn);
			try {
				conn->Open();
				MySqlDataReader^ dr = sr->ExecuteReader();
				while (dr->Read()) {

					ep = (dr->GetString("id"));

				}
				empid = Convert::ToInt32(ep);
				empid = empid + 1;
				conn->Close();
				conn->Open();
				//>//

				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from soup", conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataGridView1->DataSource = dt;

				conn->Close();
				MessageBox::Show("product:" + Convert::ToString(txtname->Text), "Product is registered...", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//MessageBox::Show(Convert::ToString(empid), "done...!!");
				//MessageBox::Show(Convert::ToString(empid));
				String^ no = Convert::ToString(empid);
				s->Parameters->AddWithValue("@emp_id", no);
				conn->Open();
				s->ExecuteNonQuery();
				conn->Close();
			//?

		
			}
			catch (Exception^ e) {
				MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				conn->Close();
			}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bsoup_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
			if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				try {
					conn->Open();
					String^ cmdstring = "delete from soup where id=@pass;";
					MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
					s->Parameters->AddWithValue("@pass", emp_id3);
					s->ExecuteNonQuery();
					//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
					conn->Close();
					conn->Open();
					//>//
					MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from soup", conn);
					DataTable^ dt = gcnew DataTable();
					adapter->Fill(dt);
					dataGridView1->DataSource = dt;
					conn->Close();
					
				}
				catch (Exception^ e) {
					MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					conn->Close();
				}
			}
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
	txtname->Clear();
	txtprice->Value = 0;


}
private: System::Void bbaked_toast_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from baked_toast where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from burger", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();

			
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;

		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bburger_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from burger where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from burger", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bdesert_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from desert where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from desert", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bicecream_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from icecream where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from icecream", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bpasta_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from pasta where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from pasta", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bpizza_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from pizza where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from pizza", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bpotato_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";
	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from potato where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from potato", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bsandwitch_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from sandwitch where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from sandwitch", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bsmoothe_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from smoothe where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from smoothe", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
		}
		else {
			MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
private: System::Void bcoffee_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name_check = "^[^0-9]+[^@*&%~+=#{}]+$";
	String^ value_check = "^([1-9][0-9]*)$";

	String^ first = txtname->Text;
	String^ price = Convert::ToString(txtprice->Value);

	Regex^ regxn = gcnew Regex(name_check);
	bool rname = regxn->IsMatch(first);

	Regex^ regxn1 = gcnew Regex(value_check);
	bool rprice = regxn1->IsMatch(price);
	if (rname) {
		if (rprice) {
	if (MessageBox::Show("DO to Really want to delete recode of\nid:" + emp_id3 + "", "STOP", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			conn->Open();
			String^ cmdstring = "delete from coffee where id=@pass;";
			MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			s->Parameters->AddWithValue("@pass", emp_id3);
			s->ExecuteNonQuery();
			//	MySqlCommand^ s = gcnew MySqlCommand(cmdstring, conn);
			conn->Close();
			conn->Open();
			//>//

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from coffee", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	txtname->Clear();
	txtprice->Value = 0;
}
		else {
		MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
	MessageBox::Show("check product name", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}

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
private: System::Void dataGridView2_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ emailcust = dataGridView2->Rows[dataGridView2->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	txtemail->Text = emailcust;
	
}

private: System::Void btnoffer_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
	MySqlConnection^ conn = gcnew MySqlConnection(connstring);
	String^ of = Convert::ToString(numoffer->Value);
	String^ emailcheck = "^[a-z]+[0-9]*@[a-z]+.[a-z]+$";
	String^ pricecheck = "^[0-9]*$";
	Regex^ re = gcnew Regex(emailcheck);
	bool em = re->IsMatch(txtemail->Text);
	Regex^ re1 = gcnew Regex(pricecheck);
	bool pr = re1->IsMatch(of);
	Decimal ds = numoffer->Value;
	if ((txtemail->Text->Trim()->Length > 2)) {
		if (em) {
			if (ds > 0) {
				if (pr) {
					try {
						int i = 0;
						MySqlCommand^ sel = gcnew MySqlCommand("select * from offer where email=@email", conn);
						sel->Parameters->AddWithValue("@email", txtemail->Text);
						conn->Open();
						MySqlDataReader^ dr = sel->ExecuteReader();
						while (dr->Read()) {
							i++;
						}
						conn->Close();
						if (i == 0) {

							MySqlCommand^ s = gcnew MySqlCommand("insert into offer(email,offerpercentage)values(@email,@offerpercentage)", conn);
							s->Parameters->AddWithValue("@email", txtemail->Text);
							s->Parameters->AddWithValue("@offerpercentage", numoffer->Value);
							//label9->Text = check;
							conn->Open();
							s->ExecuteNonQuery();
							conn->Close();
							MessageBox::Show("Offer conformed", "Success..", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						else {
							MessageBox::Show("Duplicate record found...", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						}
					}
					catch (Exception^ e) {
						MessageBox::Show(e->ToString());
						conn->Close();
					}
				}

				else {
					MessageBox::Show("you entered wrong price.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			else {
				MessageBox::Show("Enter discount in %.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			}
		}
		else
		{
			MessageBox::Show("you entered wrong email.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	else {
		MessageBox::Show("Enter email.", "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
};
}
