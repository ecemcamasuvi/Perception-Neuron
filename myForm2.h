
//!!!!!!!for more than 2 class

#pragma once
#ifndef MyForm_H
#define MyForm_H


#include <ctime>
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <random>
#include <math.h>


namespace Project {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{


	public:void set();
	protected:
		/// <summary>
		///Kullanılan tüm kaynakları temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Panel^  panel1;
	private: Point p;
	public:static int classNum;
	public:static Graphics^ g;
	private: System::Windows::Forms::TextBox^  textBox1;
	private:
		static	System::Drawing::Pen^ drawBrush = gcnew System::Drawing::Pen(System::Drawing::Color::DarkRed);
	public:static long double** input = new long double*[70];

	public:
		static int click0 = 0;
		static int* click = new int[7];

	public:static long double** weight = new long double*[7];
	public:static double** d = new double*[7];
	public:long double c = 0.1;
	public:long double lam = 1.0;
	public:static long double error;
	public:static int cycleCount;
	public:static Point* q;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  randomizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  functionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  distincToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  continuousToolStripMenuItem;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  drawToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
	public:
		MyForm(void)
		{
			set();
			InitializeComponent();

			//
			//TODO: Oluşturucu kodunu buraya ekle
			//
		}
	private:
		/// <summary>
		///Gerekli tasarımcı değişkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarımcı desteği için gerekli metot - bu metodun 
		///içeriğini kod düzenleyici ile değiştirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->functionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->distincToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->continuousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->panel1->Name = L"panel1";
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseClick);
			// 
			g = this->panel1->CreateGraphics();
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			// 
			// checkBox3
			// 
			resources->ApplyResources(this->checkBox3, L"checkBox3");
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->randomizeToolStripMenuItem,
					this->functionToolStripMenuItem, this->drawToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			resources->ApplyResources(this->menuToolStripMenuItem, L"menuToolStripMenuItem");
			// 
			// randomizeToolStripMenuItem
			// 
			this->randomizeToolStripMenuItem->Name = L"randomizeToolStripMenuItem";
			resources->ApplyResources(this->randomizeToolStripMenuItem, L"randomizeToolStripMenuItem");
			this->randomizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::randomizeToolStripMenuItem_Click);
			// 
			// functionToolStripMenuItem
			// 
			this->functionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->distincToolStripMenuItem,
					this->continuousToolStripMenuItem
			});
			this->functionToolStripMenuItem->Name = L"functionToolStripMenuItem";
			resources->ApplyResources(this->functionToolStripMenuItem, L"functionToolStripMenuItem");
			// 
			// distincToolStripMenuItem
			// 
			this->distincToolStripMenuItem->Name = L"distincToolStripMenuItem";
			resources->ApplyResources(this->distincToolStripMenuItem, L"distincToolStripMenuItem");
			this->distincToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::distincToolStripMenuItem_Click);
			// 
			// continuousToolStripMenuItem
			// 
			this->continuousToolStripMenuItem->Name = L"continuousToolStripMenuItem";
			resources->ApplyResources(this->continuousToolStripMenuItem, L"continuousToolStripMenuItem");
			this->continuousToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::continuousToolStripMenuItem_Click);
			// 
			// drawToolStripMenuItem
			// 
			this->drawToolStripMenuItem->Name = L"drawToolStripMenuItem";
			resources->ApplyResources(this->drawToolStripMenuItem, L"drawToolStripMenuItem");
			this->drawToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::drawToolStripMenuItem_Click);
			// 
			// comboBox1
			/*			this->comboBox1->Items->Add(Convert::ToString(3));
			this->comboBox1->Items->Add(Convert::ToString(4));
			this->comboBox1->Items->Add(Convert::ToString(5));
			this->comboBox1->Items->Add(Convert::ToString(6));
			this->comboBox1->Items->Add(Convert::ToString(7));*/
			// 
			this->comboBox1->FormattingEnabled = true;
		
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->Name = L"comboBox1";	
			this->comboBox1->Items->Add(Convert::ToString(3));
			this->comboBox1->Items->Add(Convert::ToString(4));
			this->comboBox1->Items->Add(Convert::ToString(5));
			this->comboBox1->Items->Add(Convert::ToString(6));
			this->comboBox1->Items->Add(Convert::ToString(7));
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			resources->ApplyResources(this->comboBox2, L"comboBox2");
			this->comboBox2->Name = L"comboBox2";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		classNum = Convert::ToInt32(this->comboBox1->SelectedItem);
		this->textBox1->SelectedText = Convert::ToString("\r\nClass Number:" + classNum + "\r\n");
		for (int i = 1; i < classNum + 1; i++) {
			this->comboBox2->Items->Add(Convert::ToString(i));
		}
		this->button1->Enabled = false;

	}
	private: System::Void panel1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		p = e->Location;
		long double x = (long double)(Convert::ToDouble(p.X) - 168) / 7;
		long double y = (long double)((Convert::ToDouble(p.Y) - 182)*-1) / 7;
		Point^ n = gcnew System::Drawing::Point(x, y);
		int s = Convert::ToInt32(this->comboBox2->SelectedIndex);
		if (s == 0) {
			drawBrush->Color = Color::DarkRed;
			g->DrawRectangle(drawBrush, p.X - 2.2, p.Y - 2.5, 2, 2);
			input[click0][0] = x;
			input[click0][1] = y;
			input[click0][2] = -1.0;
			d[0][click0] = 1.0;
			click[0]++;
			click0++;
		}
		if (s == 1) {
			drawBrush->Color = Color::BlueViolet;
			g->DrawRectangle(drawBrush, p.X - 2.2, p.Y - 2.5, 2, 2);
			input[click0][0] = x;
			input[click0][1] = y;
			input[click0][2] = -1.0;
			d[1][click0] = 1.0;
			click[1]++;
			click0++;
		}
		if (s == 2) {
			drawBrush->Color = Color::HotPink;
			g->DrawRectangle(drawBrush, p.X - 2.2, p.Y - 2.5, 2, 2);
			input[click0][0] = x;
			input[click0][1] = y;
			input[click0][2] = -1.0;
			d[2][click0] = 1.0;
			click[2]++;
			click0++;
		}
		if (s == 3) {
			drawBrush->Color = Color::Green;
			g->DrawRectangle(drawBrush, p.X - 2.2, p.Y - 2.5, 2, 2);
			input[click0][0] = x;
			input[click0][1] = y;
			input[click0][2] = -1.0;
			d[3][click0] = 1.0;
			click[3]++;
			click0++;
		}
		if (s == 4) {
			drawBrush->Color = Color::CadetBlue;
			g->DrawRectangle(drawBrush, p.X - 2.2, p.Y - 2.5, 2, 2);
			input[click0][0] = x;
			input[click0][1] = y;
			input[click0][2] = -1.0;
			d[4][click0] = 1.0;
			click[4]++;
			click0++;
		}
		if (s == 5) {
			drawBrush->Color = Color::PaleVioletRed;
			g->DrawRectangle(drawBrush, p.X - 2.2, p.Y - 2.5, 2, 2);
			input[click0][0] = x;
			input[click0][1] = y;
			input[click0][2] = -1.0;
			d[5][click0] = 1.0;
			click[5]++;
			click0++;
		}
		if (s == 6) {
			drawBrush->Color = Color::Silver;
			g->DrawRectangle(drawBrush, p.X - 2.2, p.Y - 2.5, 2, 2);
			input[click0][0] = x;
			input[click0][1] = y;
			input[click0][2] = -1.0;
			d[6][click0] = 1.0;
			click[6]++;
			click0++;
		}
		this->textBox1->SelectedText = Convert::ToString("\r\n" + n);
		this->textBox1->ResetText();
		for (int j = 0; j < classNum; j++) {
			if (j == 0) {
				this->textBox1->SelectedText = Convert::ToString("\r\n" + n);
			}
			this->textBox1->AppendText(Convert::ToString("\r\n\r\n" + "Class " + (j + 1) + ": " + click[j]));

		}
	}

	private: System::Void randomizeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->ResetText();
		srand(time(0));

		for (int i = 0; i < classNum; i++) {
			weight[i][0] = round((rand() % 20 - 10)*10.0) / 10.0;
			weight[i][1] = round((rand() % 20 - 10)*10.0) / 10.0;
			weight[i][2] = round((rand() % 20 - 10)*10.0) / 10.0;
			this->textBox1->AppendText(Convert::ToString("\r\nInitial random weight values for " + (i + 1) + ". class are:\r\n" + weight[i][0] + "\r\n" + weight[i][1] + "\r\n" + weight[i][2] + "\r\n\r\n"));
		}
		drawBrush->Color = Color::Magenta;

	}
	private: System::Void distincToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {//binaryyyzz
		cycleCount = 0;
		if (this->checkBox3->Checked) {
			c = 1;
		}
		int t, p;
		long double func;
		long double* net1 = new long double[classNum];
		error = 1;
		while (error > 0) {
			error = 0;
			for (p = 0; p < click0; p++) {
				for (t = 0; t < classNum; t++) {
					for (int j = 0; j < classNum; j++) {
						net1[j] = 0.0;
					}

					for (int j = 0; j < 3; j++) {
						net1[t] += weight[t][j] * input[p][j];
					}
					if (net1[t] > 0) {
						func = 1;
					}
					else {
						func = -1;
					}
					long double x = d[t][p] - func;
					for (int k = 0; k < 3; k++) {
						weight[t][k] = weight[t][k] + c * x*input[p][k] * 0.5;
					}
					error += pow((d[t][p] - func), 2) / 2;

				}
			}
			cycleCount++;

		}
		this->textBox1->ResetText();
		this->textBox1->SelectedText = Convert::ToString("\r\nCycle Count:\r\n" + cycleCount + "\r\n");

	}
	private: System::Void continuousToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		cycleCount = 0;
		long double Emax = 0;
		long double* ar = new long double[2];
		for (int i = 0; i < 2; i++) {
			ar[i] = 0;
		}
		long double func, o, dd;
		bool s = true;
		long double m = 0.1;
		if (this->checkBox3->Checked) {
			m = 10.0;
		}

		for (int i = 0; i < classNum; i++) {
			for (int j = 0; j < 3; j++) {
				weight[i][j] = weight[i][j] * 0.01;

			}
		}
		for (int i = 0; i < click0; i++) {
			for (int j = 0; j < 3; j++) {
				input[i][j] = input[i][j] * 0.01;
			}
		}
		this->textBox1->ResetText();
		this->textBox1->SelectedText = Convert::ToString("\r\n\r\n\r\n\r\n\r\n\r\nCalculating...\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n");
		int t, p;
		long double* net1 = new long double[classNum];
		error = 1;
		while (s) {
			error = 0;
			for (p = 0; p < click0; p++) {
				for (t = 0; t < classNum; t++) {
					for (int j = 0; j < classNum; j++) {
						net1[j] = 0.0;
					}

					for (int j = 0; j < 3; j++) {
						net1[t] += weight[t][j] * input[p][j];
					}
					o = 2.0 / (1.0 + exp(-lam * net1[t])) - 1.0;
					func = (1.0 - pow(o, 2)) / 2.0;
					dd = d[t][p] - o;
					long double x = d[t][p] - func;
					for (int k = 0; k < 3; k++) {
						weight[t][k] = weight[t][k] + m * dd*func*input[p][k] ;
					}
					error += pow(dd, 2) / 2.0;

				}
			}
			cycleCount++;
			if (cycleCount % 2 == 1) {
				ar[0] = error;
				Emax = ar[0] / ar[1];
			}
			if (cycleCount % 2 == 0) {
				ar[1] = error;
				Emax = ar[1] / ar[0];
			}
			if (cycleCount > 2) {
				if (this->checkBox3->Checked) {
					if (Emax > 0.99999) {
						s = false;
					}
				}
				else {
					if (Emax > 0.999999) {
						s = false;
					}
				}
			}
		}
		for (int i = 0; i < classNum; i++) {
			for (int j = 0; j < 3; j++) {
				weight[i][j] = weight[i][j] * 100.0;

			}
		}
		for (int i = 0; i < click0; i++) {
			for (int j = 0; j < 3; j++) {
				input[i][j] = input[i][j] * 100.0;
			}
		}

		this->textBox1->ResetText();
		this->textBox1->SelectedText = Convert::ToString("\r\nDONE!");
		this->textBox1->SelectedText = Convert::ToString("\r\nCycle Count:\r\n" + cycleCount + "\r\n");

	}

	private: System::Void drawToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		drawBrush->Width = 1;
		float x1 = 343;
		float x2 = -7;
		for (int i = 0; i < classNum; i++) {
			if (i == 0) {
				drawBrush->Color = Color::DarkRed;
			}
			if (i == 1) {
				drawBrush->Color = Color::BlueViolet;
			}
			if (i == 2) {
				drawBrush->Color = Color::HotPink;
			}
			if (i == 3) {
				drawBrush->Color = Color::Green;
			}
			if (i == 4) {
				drawBrush->Color = Color::CadetBlue;
			}
			if (i == 5) {
				drawBrush->Color = Color::PaleVioletRed;
			}
			if (i == 6) {
				drawBrush->Color = Color::Silver;
			}
			float y1 = 182 - 7 * (((weight[i][2] - (weight[i][0] * 25)) / weight[i][1]));
			float y2 = 182 - 7 * (((weight[i][2] - (weight[i][0] * -25)) / weight[i][1]));
			g->DrawLine(drawBrush, x1, (float)y1, x2, (float)y2);//(0,0)=(168,182)
			
		}
	}
	};
}


#endif



