#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <iostream>
using namespace std;

//void paint(TextBox ^a);

namespace pr {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(136, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"S =";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(197, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(39, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"a =";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"alpha =";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(74, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(74, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(74, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(39, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"P =";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(74, 243);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(169, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(235, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"площадь";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(235, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"основание";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(235, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"острый угол";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(249, 243);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 18);
			this->label8->TabIndex = 13;
			this->label8->Text = L"периметр";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 275);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(346, 314);
			this->Name = L"MyForm";
			this->Text = L"Периметр параллелограмма";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//при нажатии на кнопку выходит окно с текстом 
		//System::Windows::Forms::MessageBox::Show("Текст сообщения", "заголовок окна с сообщением");

		//если все или хотя бы один textBox пустой,то вызываем сообщение и пропускаем дальнейшую обработку 
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") {
			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
			return;
		}
		

//		msclr::interop::marshal_context context;
//		//Дальше идут проверки каждого textBox`a на наличие лишних ","
////textBox 1
//		string std_string = context.marshal_as<std::string>(textBox1->Text);
//		//string str = std_string;
//		int count = 0;
//		for (int i = 0; i < std_string.size(); i++) {
//			if (std_string[i] == ',') {
//				count++;
//			}
//		}
//		if (count >= 2) {
//			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
//			return;
//		}
//		if (std_string[0] == ',') {
//			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
//			return;
//		}
////textBox 2
//		std_string = context.marshal_as<std::string>(textBox2->Text);
//		//string str = std_string;
//		count = 0;
//		for (int i = 0; i < std_string.size(); i++) {
//			if (std_string[i] == ',') {
//				count++;
//			}
//		}
//		if (count >= 2) {
//			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
//			return;
//		}
//		if (std_string[0] == ',') {
//			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
//			return;
//		}
////textBox 3
//		std_string = context.marshal_as<std::string>(textBox3->Text);
//		//string str = std_string;
//		count = 0;
//		for (int i = 0; i < std_string.size(); i++) {
//			if (std_string[i] == ',') {
//				count++;
//			}
//		}
//		if (count >= 2) {
//			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
//			return;
//		}
//		if (std_string[0] == ',') {
//			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
//			return;
//		}
//		
//		
		
		try {
			Convert::ToSingle(textBox1->Text);
			Convert::ToSingle(textBox2->Text);
			Convert::ToSingle(textBox3->Text);
		}
		catch (...) {
			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
			return;
		};


		float s = Convert::ToSingle(textBox1->Text);
		float a = Convert::ToSingle(textBox2->Text);
		float alpha = Convert::ToSingle(textBox3->Text);
		
		//проверка на ввод реальных значений
		if (alpha >= 90 || alpha == 0) {
			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
			return;
		}
		if (a == 0 || s == 0) {
			System::Windows::Forms::MessageBox::Show("Введены неверные данные", "Ошибка");
			return;
		}

		//float h = s / a;
		
		//float radians = (alpha * ( Math::PI / 180));
		//float b = h / Math::Sin(radians);
		float p = 2 * a + 2 * (s / a) / Math::Sin(alpha * (Math::PI / 180));
		//float p = 2 * a + 2 * b;
		textBox4->Text = p.ToString();
	}
	
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// не даём ввести первым знаком ","
		if (textBox1->TextLength == 0 && e->KeyChar == ',') {
			e->Handled = true;//не вводим то не число
			return;
		}
		
		if (Char::IsDigit(e->KeyChar)) { //если в textBox1 жмём цифру то всё ок
			return;
		}
		if (e->KeyChar == (char)Keys::Back) {//если в textBox1 жмём backspace то всё ок
			return;
		}
		if (e->KeyChar == ',') {
			return;
		}
		
		//если пользователь вводит не число, то
		System::Windows::Forms::MessageBox::Show("Пожалуйста, введите число", "Ошибка");//мы его осведомляем
		
		e->Handled = true;//не вводим тот знак
		
	}

private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	System::Windows::Forms::DialogResult status = MessageBox::Show("Вы хотите выйти?", "Периметр параллелограмма", MessageBoxButtons::YesNo);
	if (status == System::Windows::Forms::DialogResult::No) {
		e->Cancel = true;
	}  
}
	
	
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// не даём ввести первым знаком ","
	if ( textBox2->TextLength == 0 && e->KeyChar == ',') {
		e->Handled = true;//не вводим то не число
		return;
	}

	if (Char::IsDigit(e->KeyChar)) { //если в textBox1 жмём цифру то всё ок
		return;
	}
	if (e->KeyChar == (char)Keys::Back) {//если в textBox1 жмём backspace то всё ок
		return;
	}
	if (e->KeyChar == ',') {
		return;
	}

	//если пользователь вводит не число, то
	System::Windows::Forms::MessageBox::Show("Пожалуйста, введите число", "Ошибка");//мы его осведомляем

	e->Handled = true;//не вводим тот знак
}

private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// не даём ввести первым знаком ","
	if (textBox3->TextLength == 0 && e->KeyChar == ',') {
		e->Handled = true;//не вводим то не число
		return;
	}

	if (Char::IsDigit(e->KeyChar)) { //если в textBox1 жмём цифру то всё ок
		return;
	}
	if (e->KeyChar == (char)Keys::Back) {//если в textBox1 жмём backspace то всё ок
		return;
	}
	if (e->KeyChar == ',') {
		return;
	}

	//если пользователь вводит не число, то
	System::Windows::Forms::MessageBox::Show("Пожалуйста, введите число", "Ошибка");//мы его осведомляем

	e->Handled = true;//не вводим тот знак
}
};
}
