#pragma once

namespace PBLMINI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace  MySql::Data::MySqlClient;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		String^ email;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;

	public:

	public:

			 int offer = 0;
		//DateTime dat;
		MyForm2(String^ s,int a)
		{   

			InitializeComponent();
			timer1->Start();
			email = s;
			offer = a;
			MessageBox::Show(s+" "+Convert::ToString(offer));
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lagst;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  total;
	private: System::Windows::Forms::DataGridView^  rtprint;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  ladate;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  labdis;

	private: System::Windows::Forms::Label^  label10;



	private: System::ComponentModel::IContainer^  components;







	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labdis = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ladate = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lagst = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->total = (gcnew System::Windows::Forms::Label());
			this->rtprint = (gcnew System::Windows::Forms::DataGridView());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rtprint))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(542, 520);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Print";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm2::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->labdis);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->ladate);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->lagst);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->total);
			this->panel1->Controls->Add(this->rtprint);
			this->panel1->Location = System::Drawing::Point(55, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(437, 550);
			this->panel1->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(146, 437);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"DISCOUNT";
			// 
			// labdis
			// 
			this->labdis->AutoSize = true;
			this->labdis->Location = System::Drawing::Point(215, 437);
			this->labdis->Name = L"labdis";
			this->labdis->Size = System::Drawing::Size(35, 13);
			this->labdis->TabIndex = 3;
			this->labdis->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(119, 392);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"label8";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 392);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Time";
			// 
			// ladate
			// 
			this->ladate->AutoSize = true;
			this->ladate->Location = System::Drawing::Point(119, 375);
			this->ladate->Name = L"ladate";
			this->ladate->Size = System::Drawing::Size(35, 13);
			this->ladate->TabIndex = 19;
			this->ladate->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(195, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 30);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Bill";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 375);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"date";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(274, 375);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 152);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 437);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"GST";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(119, 437);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"5%";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 462);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"grand Total :";
			// 
			// lagst
			// 
			this->lagst->AutoSize = true;
			this->lagst->Location = System::Drawing::Point(119, 462);
			this->lagst->Name = L"lagst";
			this->lagst->Size = System::Drawing::Size(61, 13);
			this->lagst->TabIndex = 11;
			this->lagst->Text = L"grand Total";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 411);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Total :";
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Location = System::Drawing::Point(119, 411);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(27, 13);
			this->total->TabIndex = 9;
			this->total->Text = L"total";
			// 
			// rtprint
			// 
			this->rtprint->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->rtprint->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->rtprint->BackgroundColor = System::Drawing::SystemColors::Control;
			this->rtprint->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtprint->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->rtprint->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->rtprint->Location = System::Drawing::Point(0, 79);
			this->rtprint->MultiSelect = false;
			this->rtprint->Name = L"rtprint";
			this->rtprint->ReadOnly = true;
			this->rtprint->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->rtprint->Size = System::Drawing::Size(437, 277);
			this->rtprint->TabIndex = 8;
			this->rtprint->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::rtprint_CellContentDoubleClick);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(579, 423);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"time";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(253, 437);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"%";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 625);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rtprint))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		void totalprice() {
		
			conn->Open();
			int combovalue1;
			MySqlCommand^ s2 = gcnew MySqlCommand("select sum(price) from bill;", conn);
			MySqlDataReader^ dr2 = s2->ExecuteReader();
			while (dr2->Read()) {

				  combovalue1 = (dr2->GetInt32("sum(price)"));

			}
			
			if (offer <= 0) {
				label11->Visible = false;
				labdis->Visible = false;

				total->Text = Convert::ToString(combovalue1);
				Decimal f = Convert::ToDecimal((combovalue1 * 5.00) / 100.00);
				Decimal f2 = Convert::ToDecimal(combovalue1 + f);
				//>
				lagst->Text = Convert::ToString(f2);
			}
			else {
				label11->Visible = true;
				labdis->Visible = true;
				total->Text = Convert::ToString(combovalue1);
				Decimal f = Convert::ToDecimal((combovalue1 * (5.00-offer))/ 100.00);
				Decimal f2 = Convert::ToDecimal(combovalue1 + f);
				lagst->Text = Convert::ToString(f2);
				labdis->Text ="-"+Convert::ToString(offer);
			}
			conn->Close();
		
		}
		String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
		MySqlConnection^ conn = gcnew MySqlConnection(connstring);
		void loadtable() {

			try {
				conn->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select name, price from bill", conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				rtprint->DataSource = dt;
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("stop exception" + e);
				conn->Close();
			}
		}
#pragma endregion
		String^ products;
		Decimal d;
		void dataremover(){
			String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			MySqlConnection^ conn = gcnew MySqlConnection(connstring);
		
				try {
					conn->Open();
					MySqlCommand^ adapter = gcnew MySqlCommand("select name, price from bill", conn);
					MySqlDataReader^ rr = adapter->ExecuteReader();
					while (rr->Read()) {
						products = products + "," + rr->GetString("name");
					}
					conn->Close();
					//MessageBox::Show(products);
				}
				catch (Exception^ e) {
					MessageBox::Show("stop exception" + e);
					conn->Close();
				}
		
		}
		void insert() {
		
			String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
			MySqlConnection^ conn = gcnew MySqlConnection(connstring);
			MySqlCommand^ in = gcnew MySqlCommand("insert into cust1(email,orders,dates,times,total,grandtotal)values(\
                                                @email,@orders,@dates,@times,@total,@grandtotal);",conn);
			in->Parameters->AddWithValue("@email",email);
			in->Parameters->AddWithValue("@orders", products);
			in->Parameters->AddWithValue("@dates",ladate->Text);
			in->Parameters->AddWithValue("@times",label8->Text);
			in->Parameters->AddWithValue("@total", total->Text);
			in->Parameters->AddWithValue("@grandtotal", lagst->Text);
			conn->Open();
			in->ExecuteNonQuery();
			conn->Close();
		}
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		loadtable();
		totalprice();
	}
			 Bitmap^ b;
			 String^ check;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//)
	dataremover();
	check = label8->Text;
	if (MessageBox::Show(email + "\n" + products + "\n" + ladate->Text + "\n" + label8->Text + "\n" + total->Text + "\n" + lagst->Text,"Order info",MessageBoxButtons::YesNo,MessageBoxIcon::Question)\
               == System::Windows::Forms::DialogResult::Yes) {
		insert();
		printPreviewDialog1->ShowDialog();
		printDocument1->Print();
		try {
			MySqlCommand^ md = gcnew MySqlCommand("delete from offer where email=@email", conn);
			md->Parameters->AddWithValue("@email", email);
			conn->Open();
			md->ExecuteNonQuery();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
		conn->Close();
	}
	
	deletebill();

	if (offer>0) {
		try {
			MySqlCommand^ md = gcnew MySqlCommand("delete from cust1 where email=@email limit 5", conn);
			md->Parameters->AddWithValue("@email", email);
			conn->Open();
			md->ExecuteNonQuery();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString(), "Stop", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
		conn->Close();
	}

    this->Close();
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	//System::Drawing::Font^ fnstring = gcnew System::Drawing::Font("Times New Roman", 18, FontStyle::Regular);
	Bitmap^ bm = gcnew Bitmap(panel1->Width, panel1->Height);
	panel1->DrawToBitmap(bm, *gcnew Rectangle(0, 0, panel1->Width, panel1->Height));
	e->Graphics->DrawImage(bm, 120, 120);
	//https://stackoverflow.com/questions/8763237/drawtobitmap-method-converting-systemwindowsformscontroldrawtobitmap-to
}

private: System::Void rtprint_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (MessageBox::Show("Do you really want to delete record","Worrning",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes) {
		try {
			conn->Open();
			String^ str1 = rtprint->Rows[rtprint->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
			String^ str2 = rtprint->Rows[rtprint->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
			MySqlCommand^ s = gcnew MySqlCommand("delete from bill where name=@name", conn);
			s->Parameters->AddWithValue("@name",str1);
			s->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("Deleted record:\n" + "\t" + str1+"\t"+str2);
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
			conn->Close();
		}
		totalprice();
		loadtable();
	  }
	}
private: System::Void MyForm2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
	MySqlConnection^ conn = gcnew MySqlConnection(connstring);
	try {
		conn->Open();
		MySqlCommand^ s = gcnew MySqlCommand("delete from bill", conn);
		//s->ExecuteNonQuery();
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->ToString());
		conn->Close();
	}
}

		 int i = 0;
		 String^ times1;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	DateTime d = DateTime::Now;
	label8->Text = d.AddMinutes(1).ToLongTimeString();
	ladate->Text = d.ToShortDateString();
	label10->Text = d.ToLongTimeString();
	String^ connstring = "server=localhost;port=3306;database=project; uid = root; password = root@123";
	MySqlConnection^ conn = gcnew MySqlConnection(connstring);
	try {
		MySqlCommand^ s = gcnew MySqlCommand("select email,orders,times from cust1 where times=@times and dates=@dates", conn);
		s->Parameters->AddWithValue("@times", d.ToLongTimeString());
		s->Parameters->AddWithValue("@dates", d.ToShortDateString());
		SoundPlayer^ p = gcnew SoundPlayer();
		p->SoundLocation = "C:\\Windows\\Media\\preview.wav";
		//label9->Text = check;
		conn->Open();
		
		MySqlDataReader^ dr = s->ExecuteReader();
		while (dr->Read()) {
			p->PlayLooping();
			if(MessageBox::Show(dr->GetString("email") + "\n" + dr->GetString("orders"), "oder info", MessageBoxButtons::YesNo, MessageBoxIcon::Information)==System::Windows::Forms::DialogResult::Yes ){
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
