//myForm.h

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

	/// <summary>
	/// MyForm için özet
	/// </summary>
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

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: Point p;
	public:static Graphics^ g1;
	public:static Graphics^ g2;
	private:static System::Drawing::Pen^ drawBrush = gcnew System::Drawing::Pen(System::Drawing::Color::PeachPuff);
	private: System::Windows::Forms::TextBox^  textBox1;

	public:static int click1 = 0;
	public:static int click2 = 0;
	public:static int click3 = 0;

	public:static long double** input = new long double*[20];

	public:static long double** weight1 = new long double*[21];
	public:long double* d = new long double[20];
	public:long double c = 1;
	public:long double lam = 1;
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

	private: System::Windows::Forms::ToolStripMenuItem^  drawToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  allToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  linesToolStripMenuItem;

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
	
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
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
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->linesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			resources->ApplyResources(this->checkBox2, L"checkBox2");
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->panel1->Name = L"panel1";
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseClick);
			// 
			g1 = this->panel1->CreateGraphics();
			g2 = this->panel1->CreateGraphics();
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->resetToolStripMenuItem
			});
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
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->allToolStripMenuItem,
					this->linesToolStripMenuItem
			});
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			resources->ApplyResources(this->resetToolStripMenuItem, L"resetToolStripMenuItem");
			// 
			// allToolStripMenuItem
			// 
			this->allToolStripMenuItem->Name = L"allToolStripMenuItem";
			resources->ApplyResources(this->allToolStripMenuItem, L"allToolStripMenuItem");
			this->allToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::allToolStripMenuItem_Click);
			// 
			// linesToolStripMenuItem
			// 
			this->linesToolStripMenuItem->Name = L"linesToolStripMenuItem";
			resources->ApplyResources(this->linesToolStripMenuItem, L"linesToolStripMenuItem");
			this->linesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::linesToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void panel1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		p = e->Location;
		this->textBox1->ResetText();
		long double x = (long double)(Convert::ToDouble(p.X) - 168) / 7;
		long double y = (long double)((Convert::ToDouble(p.Y) - 182)*-1) / 7;
		Point^ n = gcnew System::Drawing::Point(x, y);
		if ((this->checkBox1->Checked) && (!this->checkBox2->Checked)) {
			System::Drawing::Pen^ drawBrushh = gcnew System::Drawing::Pen(System::Drawing::Color::DeepSkyBlue);
			g1->DrawRectangle(drawBrushh, p.X - 2.2, p.Y - 2.5, 1, 1);
			input[click3][0] = x;
			input[click3][1] = y;
			input[click3][2] = -1.0;
			d[click3] = -1;
			click1++;
			click3++;
		}
		if ((!this->checkBox1->Checked) && (this->checkBox2->Checked)) {
			System::Drawing::Pen^ drawBrushh = gcnew System::Drawing::Pen(System::Drawing::Color::PaleVioletRed);
			g1->DrawRectangle(drawBrushh, p.X - 2.2, p.Y - 2.5, 1, 1);

			input[click3][0] = x;
			input[click3][1] = y;
			input[click3][2] = -1.0;

			d[click3] = 1;
			click2++;
			click3++;
		}
		this->textBox1->ResetText();
		this->textBox1->SelectedText = Convert::ToString("\r\nCurrent coordinates:\r\n" + n);
		this->textBox1->SelectedText = Convert::ToString("\r\n\r\n" + "Class 1:" + click1 + "    " + "Class 2:" + click2);
	}

	private: System::Void randomizeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		srand(time(0));
		weight1[0][0] = round((rand() % 20 - 10)*10.0) / 10.0;
		weight1[0][1] = round((rand() % 20 - 10)*10.0) / 10.0;
		weight1[0][2] = round((rand() % 20 - 10)*10.0) / 10.0;
		this->textBox1->ResetText();
		this->textBox1->Text = Convert::ToString("\r\nInitial random weight values are:\r\n" + weight1[0][0] + "\r\n" + weight1[0][1] + "\r\n" + weight1[0][2]);
		drawBrush->Color = Color::Magenta;
	}

	private: System::Void distincToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {//binaryyy
		if (this->checkBox3->Checked) {
			c = 0.1;
		}
		cycleCount = 0;
		int t = 0;
		long double func;
		long double* net1 = new long double[20];
		error = 1;
		while (error > 0) {
			error = 0;

			for (int i = 0; i < click3; i++) {
				net1[i] = 0.0;
			}
			t = 0;
			while (t < click3) {
				for (int j = 0; j < 3; j++) {
					net1[t] += weight1[t][j] * input[t][j];
				}
				if (net1[t] > 0) {
					func = 1;
				}
				else {
					func = -1;
				}
				long double x = d[t] - func;
				for (int i = 0; i < 3; i++) {
					int k = t + 1;
					weight1[k][i] = weight1[t][i] + c * x*input[t][i];
				}
				//error += pow((d[t] - func), 2) / 2;
				error += abs(d[t] - func) / 2;
				t++;
			}
			weight1[0][0] = weight1[click3][0];
			weight1[0][1] = weight1[click3][1];
			weight1[0][2] = weight1[click3][2];
			cycleCount++;

		}
		this->textBox1->ResetText();
		this->textBox1->SelectedText = Convert::ToString("\r\nCycle Count:\r\n" + cycleCount + "\r\n");
		drawBrush->Color = Color::OrangeRed;
	}
	private: System::Void continuousToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {//sürekliii
		this->textBox1->ResetText();
		cycleCount = 0;
		int t = 0;
		long double Emax = 0;
		long double* ar = new long double[2];
		for (int i = 0; i < 2; i++) {
			ar[i] = 0;
		}
		long double func, o, dd;
		bool s = true;
		long double* net1 = new long double[20];
		long double m = 0.1;
		for (int i = 0; i < click3; i++) {
			for (int j = 0; j < 3; j++) {
				weight1[i][j] = weight1[i][j] * 0.01;
				input[i][j] = input[i][j] * 0.01;
			}
		}
		this->textBox1->ResetText();
		this->textBox1->SelectedText = Convert::ToString("\r\nCalculating...\r\n\r\n\r\n\r\n\r\n");
		while (s) {
			error = 0;
			t = 0;
			for (int i = 0; i < click3; i++) {
				net1[i] = 0.0;
			}
			while (t < click3) {
				for (int j = 0; j < 3; j++) {
					net1[t] += weight1[t][j] * input[t][j];
				}
				o = 2.0 / (1.0 + exp(-lam * net1[t])) - 1.0;
				func = (1.0 - pow(o, 2)) / 2.0;
				dd = d[t] - o;
				int k = t + 1;
				for (int i = 0; i < 3; i++) {
					weight1[k][i] = weight1[t][i] + m * dd*func*input[t][i];
				}
				error += pow(dd, 2) / 2.0;
				t++;
			}
			weight1[0][0] = weight1[click3][0];
			weight1[0][1] = weight1[click3][1];
			weight1[0][2] = weight1[click3][2];

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
				if (click1 < 3 || click2 < 3) {
					if (Emax > 0.9999999) {
						s = false;
					}
				}
				else {
					if (Emax > 0.999999) {//9 sayısı arttıkça doğruluğu artıyor süre de artıyor:(
						s = false;
					}
				}
			}
		}
		for (int i = 0; i < click3; i++) {
			for (int j = 0; j < 3; j++) {
				weight1[i][j] = weight1[i][j] * 100.0;
				input[i][j] = input[i][j] * 100.0;
			}
		}
		this->textBox1->ResetText();
		this->textBox1->SelectedText = Convert::ToString("\r\nDONE!");
		this->textBox1->SelectedText = Convert::ToString("\r\nCycle Count:\r\n" + cycleCount + "\r\n");
		drawBrush->Color = Color::MediumVioletRed;
	}

	private: System::Void drawToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->ResetText();
		drawBrush->Width = 2;
		float x1 = 343;
		float y1 = 182 - 7 * (((weight1[0][2] - (weight1[0][0] * 25)) / weight1[0][1]));
		float x2 = -7;
		float y2 = 182 - 7 * (((weight1[0][2] - (weight1[0][0] * -25)) / weight1[0][1]));
		g2->DrawLine(drawBrush, x1, (float)y1, x2, (float)y2);//(0,0)=(168,182)
	}
	private: System::Void allToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel1->Refresh();
		click3 = click1 = click2 = 0;
	}
	private: System::Void linesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel1->Refresh();
		for (int i = 0; i < click3; i++) {
			if (d[i] == -1) {
				System::Drawing::Pen^ drawBrushh = gcnew System::Drawing::Pen(System::Drawing::Color::DeepSkyBlue);
				g1->DrawRectangle(drawBrushh, input[i][0] * 7 + 168 - 2.2, input[i][1] * -7 + 182 - 2.5, 1, 1);
			}
			if (d[i] == 1) {
				System::Drawing::Pen^ drawBrushh = gcnew System::Drawing::Pen(System::Drawing::Color::PaleVioletRed);
				g1->DrawRectangle(drawBrushh, input[i][0] * 7 + 168 - 2.2, input[i][1] * -7 + 182 - 2.5, 1, 1);
			}
		}

	}
	};
}


#endif


