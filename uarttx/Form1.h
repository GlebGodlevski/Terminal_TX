#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbPort;

	private: System::Windows::Forms::ComboBox^ cbBaud;
	private: System::Windows::Forms::Button^ btnConnect;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ lCnt;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbPort = (gcnew System::Windows::Forms::ComboBox());
			this->cbBaud = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lCnt = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 34);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"COM Port";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 89);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Baud Rate";
			// 
			// cbPort
			// 
			this->cbPort->FormattingEnabled = true;
			this->cbPort->Location = System::Drawing::Point(201, 31);
			this->cbPort->Name = L"cbPort";
			this->cbPort->Size = System::Drawing::Size(121, 30);
			this->cbPort->TabIndex = 2;
			// 
			// cbBaud
			// 
			this->cbBaud->FormattingEnabled = true;
			this->cbBaud->Location = System::Drawing::Point(201, 86);
			this->cbBaud->Name = L"cbBaud";
			this->cbBaud->Size = System::Drawing::Size(121, 30);
			this->cbBaud->TabIndex = 4;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(435, 26);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(182, 30);
			this->btnConnect->TabIndex = 5;
			this->btnConnect->Text = L"Open";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &Form1::btnConnect_Click);
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(435, 123);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(182, 28);
			this->btnSend->TabIndex = 6;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Visible = false;
			this->btnSend->Click += gcnew System::EventHandler(this, &Form1::btnSend_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// lCnt
			// 
			this->lCnt->AutoSize = true;
			this->lCnt->Location = System::Drawing::Point(571, 86);
			this->lCnt->Name = L"lCnt";
			this->lCnt->Size = System::Drawing::Size(21, 22);
			this->lCnt->TabIndex = 7;
			this->lCnt->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(528, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Cnt:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(661, 156);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lCnt);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cbBaud);
			this->Controls->Add(this->cbPort);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Serial";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		UInt32 timeCnt;
		String^ send_str = L"12345"; // Init Str
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (btnConnect->Text == "Open") {
				if (serialPort1->IsOpen) { serialPort1->Close(); }
				serialPort1->PortName = cbPort->Text;
				serialPort1->BaudRate = Int32::Parse(cbBaud->Text);
				serialPort1->Open();
				btnConnect->Text = "Close";
				while (!serialPort1->IsOpen);     // Waiting for openning port
				serialPort1->WriteLine(send_str); // First Str
				lCnt->Text = "1";
				timeCnt = 1;
				timer1->Start();
			}
			else if (btnConnect->Text == "Close") {
				serialPort1->Close();
				btnConnect->Text = "Open";
				timer1->Stop();
			}
		}
		catch (...) {
			MessageBox::Show("Connection Error");
		}
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

	array<Object^>^ comport = SerialPort::GetPortNames();
	cbPort->Items->AddRange(comport); 
	// cbPort->SelectedIndex = 0;

	array<Object^>^ baudrate = {9600,19200,38400,57600,115200,128000,256000,1000000};
	cbBaud->Items->AddRange(baudrate);
	cbBaud-> SelectedIndex = 4;
}

private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// System::Threading::Thread::Sleep(1000);
		if (serialPort1->IsOpen) {serialPort1->WriteLine("Click");}
		else { MessageBox::Show("Open the Port");}
	}
	catch (...) {
		MessageBox::Show("Connection Error");
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (serialPort1->IsOpen) {
			++timeCnt;
			serialPort1->WriteLine(send_str);
			lCnt->Text = timeCnt.ToString();
		}
}
};
}
