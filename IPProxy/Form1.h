#pragma once

#include "Common.h"
namespace IPProxy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
/* lhw added */
	using namespace System::Net;
	using namespace System::Runtime::InteropServices;
	using namespace System::Threading;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:[DllImport("wininet.dll", SetLastError = true)]
	static bool InternetSetOption(IntPtr hInternet, int dwOption, IntPtr lPBuffer, int lpdwBufferLength);
	public:static String^ _data;
	public:static String^ _url;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;


	public: 

	public: 
	public:static System::Net::WebProxy^ _proxy;

	public:
		
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  TableCtrl;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  编号;
	private: System::Windows::Forms::ColumnHeader^  IP;
	private: System::Windows::Forms::ColumnHeader^  端口;
	private: System::Windows::Forms::ColumnHeader^  类型;
	private: System::Windows::Forms::ColumnHeader^  地区;
	private: System::Windows::Forms::ColumnHeader^  响应;
	private: System::Windows::Forms::TabPage^  tabPage9;


	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  选中进行测试ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox8;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  选中进行测试设置ToolStripMenuItem;
	private: System::Windows::Forms::Label^  label14;

	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->选中进行测试设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->编号 = (gcnew System::Windows::Forms::ColumnHeader());
			this->IP = (gcnew System::Windows::Forms::ColumnHeader());
			this->端口 = (gcnew System::Windows::Forms::ColumnHeader());
			this->类型 = (gcnew System::Windows::Forms::ColumnHeader());
			this->响应 = (gcnew System::Windows::Forms::ColumnHeader());
			this->地区 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->选中进行测试ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TableCtrl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage2->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->TableCtrl->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->contextMenuStrip3->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(350, 459);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"关于";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(431, 459);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->listView2);
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(510, 420);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"无忧代理";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 403);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 12);
			this->label14->TabIndex = 4;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(299, 403);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(203, 12);
			this->label13->TabIndex = 3;
			this->label13->Text = L"本页数据取自无忧代理(51proxy.net)";
			// 
			// listView2
			// 
			this->listView2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView2->ContextMenuStrip = this->contextMenuStrip2;
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(3, 32);
			this->listView2->MultiSelect = false;
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(502, 367);
			this->listView2->TabIndex = 2;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->DoubleClick += gcnew System::EventHandler(this, &Form1::listView2_DoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"编号";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"IP";
			this->columnHeader2->Width = 264;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"端口";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"国家";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->选中进行测试设置ToolStripMenuItem});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(167, 26);
			// 
			// 选中进行测试设置ToolStripMenuItem
			// 
			this->选中进行测试设置ToolStripMenuItem->Name = L"选中进行测试设置ToolStripMenuItem";
			this->选中进行测试设置ToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->选中进行测试设置ToolStripMenuItem->Text = L"选中进行测试&设置";
			this->选中进行测试设置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::选中进行测试设置ToolStripMenuItem_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"最新HTTP代理", L"匿名HTTP代理", L"透明HTTP代理"});
			this->comboBox2->Location = System::Drawing::Point(226, 6);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 20);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(161, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 12);
			this->label11->TabIndex = 0;
			this->label11->Text = L"代理列表:";
			// 
			// tabPage1
			// 
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(510, 420);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"代理服务器网";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// listView1
			// 
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {this->编号, this->IP, this->端口, 
				this->类型, this->响应, this->地区});
			this->listView1->ContextMenuStrip = this->contextMenuStrip1;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(3, 32);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(502, 367);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &Form1::listView1_DoubleClick);
			// 
			// 编号
			// 
			this->编号->Text = L"编号";
			this->编号->Width = 36;
			// 
			// IP
			// 
			this->IP->Text = L"IP";
			this->IP->Width = 111;
			// 
			// 端口
			// 
			this->端口->Text = L"端口";
			this->端口->Width = 45;
			// 
			// 类型
			// 
			this->类型->Text = L"类型";
			this->类型->Width = 53;
			// 
			// 响应
			// 
			this->响应->Text = L"响应";
			this->响应->Width = 71;
			// 
			// 地区
			// 
			this->地区->Text = L"地区";
			this->地区->Width = 163;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->选中进行测试ToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(167, 26);
			// 
			// 选中进行测试ToolStripMenuItem
			// 
			this->选中进行测试ToolStripMenuItem->Name = L"选中进行测试ToolStripMenuItem";
			this->选中进行测试ToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->选中进行测试ToolStripMenuItem->Text = L"选中进行测试&设置";
			this->选中进行测试ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::选中进行测试ToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(275, 403);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"本页数据取自代理服务器网(cnproxy.com)";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Http代理-01", L"Http代理-02", L"Http代理-03", L"Http代理-04", 
				L"Http代理-05", L"Http代理-06", L"Http代理-07", L"Http代理-08", L"Http代理-09", L"Http代理-10", L"教育网代理-01", L"教育网代理-02"});
			this->comboBox1->Location = System::Drawing::Point(226, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(161, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"代理列表:";
			// 
			// TableCtrl
			// 
			this->TableCtrl->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->TableCtrl->Controls->Add(this->tabPage1);
			this->TableCtrl->Controls->Add(this->tabPage2);
			this->TableCtrl->Controls->Add(this->tabPage3);
			this->TableCtrl->Controls->Add(this->tabPage9);
			this->TableCtrl->Dock = System::Windows::Forms::DockStyle::Top;
			this->TableCtrl->Location = System::Drawing::Point(0, 0);
			this->TableCtrl->Name = L"TableCtrl";
			this->TableCtrl->SelectedIndex = 0;
			this->TableCtrl->Size = System::Drawing::Size(518, 448);
			this->TableCtrl->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->listView3);
			this->tabPage3->Location = System::Drawing::Point(4, 24);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(510, 420);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"5753网";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(217, 6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"获取数据";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(281, 403);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(221, 12);
			this->label15->TabIndex = 7;
			this->label15->Text = L"本页数据取自寻人第一网(www.5753.net)";
			// 
			// listView3
			// 
			this->listView3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader5, this->columnHeader6, 
				this->columnHeader7});
			this->listView3->ContextMenuStrip = this->contextMenuStrip3;
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(3, 32);
			this->listView3->MultiSelect = false;
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(502, 367);
			this->listView3->TabIndex = 6;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->DoubleClick += gcnew System::EventHandler(this, &Form1::listView3_DoubleClick);
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"编号";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"IP";
			this->columnHeader6->Width = 264;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"端口";
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripMenuItem1});
			this->contextMenuStrip3->Name = L"contextMenuStrip2";
			this->contextMenuStrip3->Size = System::Drawing::Size(167, 26);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->toolStripMenuItem1->Text = L"选中进行测试&设置";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// tabPage9
			// 
			this->tabPage9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage9->Controls->Add(this->linkLabel1);
			this->tabPage9->Controls->Add(this->label12);
			this->tabPage9->Controls->Add(this->groupBox2);
			this->tabPage9->Controls->Add(this->groupBox1);
			this->tabPage9->Location = System::Drawing::Point(4, 24);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(510, 420);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"测试&设置";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(251, 304);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(77, 12);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"点击此处查询";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 304);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(227, 12);
			this->label12->TabIndex = 2;
			this->label12->Text = L"点此连接可查看当前代理所在的地理位置:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(8, 143);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(494, 134);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"设置代理";
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(310, 67);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 48);
			this->button5->TabIndex = 9;
			this->button5->Text = L"清除代理";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(109, 67);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 48);
			this->button4->TabIndex = 8;
			this->button4->Text = L"设置为代理";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Location = System::Drawing::Point(401, 20);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(59, 21);
			this->textBox8->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(348, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 12);
			this->label9->TabIndex = 6;
			this->label9->Text = L"端口号:";
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Location = System::Drawing::Point(92, 20);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(228, 21);
			this->textBox7->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 22);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 12);
			this->label10->TabIndex = 4;
			this->label10->Text = L"代理服务器:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(8, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(494, 131);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"测试代理";
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(385, 86);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"测试";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(80, 86);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(277, 21);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"http://www.baidu.com";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 12);
			this->label8->TabIndex = 9;
			this->label8->Text = L"测试网址:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(363, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 12);
			this->label7->TabIndex = 8;
			this->label7->Text = L"(这两项一般用不到)";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(257, 52);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(100, 21);
			this->textBox4->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(216, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 12);
			this->label6->TabIndex = 6;
			this->label6->Text = L"密码:";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(68, 52);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 21);
			this->textBox3->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"用户名:";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(401, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(59, 21);
			this->textBox2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(348, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 12);
			this->label4->TabIndex = 2;
			this->label4->Text = L"端口号:";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(92, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 21);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 12);
			this->label3->TabIndex = 0;
			this->label3->Text = L"代理服务器:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 494);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TableCtrl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"点点IP代理 v1.0";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->TableCtrl->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->contextMenuStrip3->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 /* 读取网页数据 */
			 WebClient^ web=gcnew WebClient();
			 /* 显示在列表里 */
			 int _sel=comboBox1->SelectedIndex+1;
			 array<unsigned char>^ data;
			 try{
				 if(_sel<=10)
					 data=web->DownloadData("http://www.cnproxy.com/proxy" + _sel.ToString() + ".html");
				 else
					 data=web->DownloadData("http://www.cnproxy.com/proxyedu" + (_sel-10).ToString() + ".html");
			 }
			 catch(Exception^ e){
				 e;
				 MessageBox::Show("数据抓取错误！请清除当前代理再试。");
				 return;
			 }
			 String^ html=System::Text::Encoding::Default->GetString(data);
			 array<String^>^ spl=html->Split(gcnew array<String^>{"table>"},System::StringSplitOptions::RemoveEmptyEntries);
			 array<String^>^ lines=spl[5]->Split('\n');
			 array<String^>^ spls=gcnew array<String^>{"<tr><td>","<SCRIPT type=text/javascript>document.write(\":\"",
				 ")</SCRIPT></td><td>","</td><td>","</td><td>","</td></tr>"};

			 /* 先清除已有内容 */
			 listView1->Items->Clear();
			 /* 添加数据项 */
			 int i;
			 for(i=2;i<lines->Length-1;i++){
				 array<String^>^ items=lines[i]->Split(spls,System::StringSplitOptions::RemoveEmptyEntries);

				 ListViewItem^ item=gcnew ListViewItem((i-1).ToString());
				 for(int j=0;j<5;j++){
					 if(j==1)item->SubItems->Add(getPort(items[1]).ToString());
					 else item->SubItems->Add(items[j]);
				 }
				 array<ListViewItem^> ^temp={item};
				 listView1->Items->AddRange(temp);
			 }
			 listView1->Focus();
			 
		 }
private: System::Void 选中进行测试ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listView1->SelectedItems->Count<=0) return;
			 String^ ip=listView1->SelectedItems[0]->SubItems[1]->Text;
			 String^ port=listView1->SelectedItems[0]->SubItems[2]->Text;
			 
			 textBox1->Text=ip;
			 textBox2->Text=port;
			 textBox7->Text=ip;
			 textBox8->Text=port;
			 this->TableCtrl->SelectedIndex=3;
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("http://www.baidu.com/s?wd=ip%E6%9F%A5%E8%AF%A2&rsv_spt=1&issp=1&rsv_bp=0&ie=utf-8&tn=baiduhome_pg&inputT=1844");
		 }
		 /* 清除代理 */
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 delProxy();
			 InternetSetOption(System::IntPtr::Zero, 0x000027, System::IntPtr::Zero, 0);
			 InternetSetOption(System::IntPtr::Zero, 0x000025, System::IntPtr::Zero, 0);
		 }
		 /* 设置代理 */
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 setProxy(textBox7->Text,textBox8->Text);
			 InternetSetOption(System::IntPtr::Zero, 0x000027, System::IntPtr::Zero, 0);
			 InternetSetOption(System::IntPtr::Zero, 0x000025, System::IntPtr::Zero, 0);

		 }
		 /* 关于 */
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Coded by Majesty\nE-mail:a-o@qq.com","关于",System::Windows::Forms::MessageBoxButtons::OK,
				 System::Windows::Forms::MessageBoxIcon::Information);
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 System::Windows::Forms::DialogResult ret = MessageBox::Show("是否保留当前的代理设置？","提示",MessageBoxButtons::YesNo,
				 MessageBoxIcon::Information);
			 if(ret==System::Windows::Forms::DialogResult::No){
				 delProxy();
			 }
		 }


private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 /* 读取网页数据 */
			 WebClient^ web=gcnew WebClient();
			 /* 显示在列表里 */
			 array<unsigned char>^ data;
			 int selectedIndex=comboBox2->SelectedIndex;
			 try{
			 
				 if(selectedIndex==0){
					 data=web->DownloadData("http://51proxy.net/http_fast.html");
				 }
				 else if(selectedIndex==1){
					 data=web->DownloadData("http://51proxy.net/http_anonymous.html");
				 }
				 else if(selectedIndex==2){
					 data=web->DownloadData("http://51proxy.net/http_non_anonymous.html");
				 }
			 }
			 catch (Exception^ e){
				 e;
				 MessageBox::Show("数据抓取错误！请清除当前代理再试。");
				 return;
			 }
			 String^ html=System::Text::Encoding::Default->GetString(data);
			 array<String^>^ spl=html->Split(gcnew array<String^>{"<tr bgcolor=\"#FFFFFF\" onmouseover=\"this.style.backgroundColor='#ffcc00';\" onmouseout=\"this.style.backgroundColor='#ffffff';\">"},System::StringSplitOptions::RemoveEmptyEntries);
			 array<String^>^ time=html->Split(gcnew array<String^>{")</span><br/>"},System::StringSplitOptions::RemoveEmptyEntries);
			 array<String^>^ time1=time[0]->Split(':');
			 int len=time1->Length;
			 //MessageBox::Show(time1[len-2]+":"+time1[len-1]);
			 label14->Text="更新时间:"+time1[len-2]+":"+time1[len-1];
			 /* 先清除已有内容 */
			 listView2->Items->Clear();

			 /* 添加数据项 */
			 array<String^>^ spls=gcnew array<String^>{"<td width=\"30\">","</td>","<td>","</td>","<td width=\"60\">","</td>","<td width=\"60\">","</td>"};
			 for(int i=1;i<spl->Length;i++){
				 array<String^>^ items=spl[i]->Split(spls,System::StringSplitOptions::RemoveEmptyEntries);
				 ListViewItem^ item=gcnew ListViewItem(i.ToString());
				 item->SubItems->Add(items[3]);
				 item->SubItems->Add(items[5]);
				 item->SubItems->Add(items[7]);
				 array<ListViewItem^> ^temp={item};
				 listView2->Items->AddRange(temp);
			 }
			 listView2->Focus();
		 }
private: System::Void 选中进行测试设置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listView2->SelectedItems->Count<=0) return;
			 String^ ip=listView2->SelectedItems[0]->SubItems[1]->Text;
			 String^ port=listView2->SelectedItems[0]->SubItems[2]->Text;
			 
			 textBox1->Text=ip;
			 textBox2->Text=port;
			 textBox7->Text=ip;
			 textBox8->Text=port;
			 this->TableCtrl->SelectedIndex=3;
		 }

		 /* 代理测试 */
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ ip=textBox1->Text;
			 String^ port=textBox2->Text;
			 System::Net::WebProxy^ proxy=gcnew System::Net::WebProxy(ip,System::Convert::ToInt32(port));

			 Form1::_proxy=proxy;
			 Form1::_url=textBox5->Text;
			 System::Threading::Thread^ thd=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc));
			 thd->Start();

		 }


private: static void ThreadFunc(){
			 WebClient ^web=gcnew WebClient();
			 web->Proxy=IPProxy::Form1::_proxy;
			 array<unsigned char>^ data;
			 System::DateTime start=System::DateTime::Now;
			 try{
				 data=web->DownloadData(IPProxy::Form1::_url);
				 IPProxy::Form1::_data=System::Text::Encoding::Default->GetString(data);
			 }
			 catch(Exception ^e){
				 e;
				 MessageBox::Show("此代理不可用，请更换代理或者更换网址再试。");
				 return;
			 }
			 System::DateTime end=System::DateTime::Now;
			 System::TimeSpan ts=end-start;
			 //MessageBox::Show(IPProxy::Form1::_data);
			 MessageBox::Show("延迟："+(ts.Seconds*1000+ts.Milliseconds).ToString()+"毫秒");
		 }
private: System::Void listView2_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 选中进行测试设置ToolStripMenuItem_Click(sender,e);
		 }
private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 选中进行测试ToolStripMenuItem_Click(sender,e);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* 读取网页数据 */
			 WebClient^ web=gcnew WebClient();
			 /* 显示在列表里 */
			 array<unsigned char>^ data;
			 data=web->DownloadData("http://www.5753.net/proxy/today.txt");
			 String^ html=System::Text::Encoding::Default->GetString(data);
			 array<String^>^ spl=html->Split('\n');

			 ///* 先清除已有内容 */
			 listView3->Items->Clear();

			 /* 添加数据项 */
			 
			 for(int i=0;i<spl->Length;i++){
				 array<String^>^ items=spl[i]->Split(':');
				 ListViewItem^ item=gcnew ListViewItem((i+1).ToString());
				 item->SubItems->Add(items[0]);
				 item->SubItems->Add(items[1]);

				 array<ListViewItem^> ^temp={item};
				 listView3->Items->AddRange(temp);
			 }
			 listView3->Focus();
		 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listView3->SelectedItems->Count<=0) return;

			 String^ ip=listView3->SelectedItems[0]->SubItems[1]->Text;
			 String^ port=listView3->SelectedItems[0]->SubItems[2]->Text;
			 
			 textBox1->Text=ip;
			 textBox2->Text=port;
			 textBox7->Text=ip;
			 textBox8->Text=port;
			 this->TableCtrl->SelectedIndex=3;
		 }
private: System::Void listView3_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 toolStripMenuItem1_Click(sender,e);
		 }
};
}

