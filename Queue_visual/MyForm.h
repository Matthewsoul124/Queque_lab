#pragma once
#include <string>
#include "../Queque_lab/Queque.h"
#include "../Queque_lab/Queque.cpp"

namespace Queuevisual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			gr = CreateGraphics();
			rndl = gcnew Random();

			BlackPen = gcnew Pen(Color::Black);
			BlackPen->Width = 8.0F;
			WhitePen = gcnew Pen(Color::White);
			WhitePen->Width = 8.0F;

			CenterX = 271;
			CenterY = 277;
			Width = 100;
			Height = 100;

			PopCount = 0;
			PushCount = 0;


			
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		int max_size;
		int size;
		double p;
		double q;
		int PopCount;
		int PushCount;

		TQueue<int>* pQueue;
		int CenterX, CenterY, Width, Height;
		Graphics^ gr;
		Random^ rndl;
		Pen^ BlackPen;
		Pen^ WhitePen;

	//public: Rectangle rect;

		
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;

	private:


	private:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(415, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Запустить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 62);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Остановить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Максимальная длина очереди";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Исходная длина очереди";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Вероятность добавления";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Вероятность извлечения";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Добавлено в очередь";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(58, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Извлечено из очереди";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(239, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(239, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(239, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(239, 103);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(239, 131);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(239, 158);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 493);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		delete pQueue;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ gr = this->CreateGraphics();
		Pen^ BlackPen = gcnew Pen(Color::Black);
		BlackPen->Width = 10.0F;
		gr->DrawArc(BlackPen, 271, 277, 100, 100, 0, 90);

		max_size = Convert::ToInt32(textBox1->Text);
		size = Convert::ToInt32(textBox2->Text);
		p = Convert::ToInt32(textBox4->Text)/100.0;
		q = Convert::ToInt32(textBox3->Text)/100.0;

		pQueue = new TQueue<int>(max_size);
		for (int i = 0; i < size; i++) {
			pQueue->Push(i);
		}

		DrawQueue();
		timer1->Enabled = true;
	}
		   void DrawQueue() {
			   int start = 360 * pQueue->GetHead() / pQueue->GetMaxSize();
			   int finish = 360 * pQueue->GetSize() / pQueue->GetMaxSize();

			   gr->DrawArc(BlackPen, CenterX, CenterY, Width, Height, start, finish);

	}

		   void Clean() {
			   int start = 360 * pQueue->GetHead() / pQueue->GetMaxSize();
			   int finish = 360 * pQueue->GetSize() / pQueue->GetMaxSize();

			   gr->DrawArc(WhitePen, CenterX, CenterY, Width, Height, start, finish);

		   }
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Clean();
		if (rndl->NextDouble() < p) {
			int element = rndl->Next();
			pQueue->Push(element);
			PushCount++;
		}
		if (rndl->NextDouble() < p) {
			if (!pQueue->IsEmpty()) {
				pQueue->Get();
				PopCount++;
			}
			else {
				cout << "Queue is empty";
			}
		}

		DrawQueue();

		textBox5->Text = Convert::ToString(PushCount);
		textBox6->Text = Convert::ToString(PopCount);
		//rect = Rectangle(30.0, 250.0, 300.0, 300.0);
		//gr->DrawArc(blackPen, rect, start, finish);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
	}
	
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
