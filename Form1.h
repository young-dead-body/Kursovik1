#pragma once

namespace Kursovik1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;


	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::DataGridView^ masa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridView^ mas2;
	private: System::Windows::Forms::DataGridView^ mas1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	protected:

























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->masa = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mas2 = (gcnew System::Windows::Forms::DataGridView());
			this->mas1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->masa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mas2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mas1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(490, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 19;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(507, 135);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(154, 21);
			this->radioButton4->TabIndex = 17;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"транспонирование";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(507, 108);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(152, 21);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"обратная матрица";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(507, 81);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 21);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"умножение";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(507, 54);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(93, 21);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"сложение";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1156, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"=";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(507, 162);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(123, 21);
			this->radioButton5->TabIndex = 18;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"дискриминант";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// masa
			// 
			this->masa->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->masa->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column6 });
			this->masa->Location = System::Drawing::Point(1182, 42);
			this->masa->Name = L"masa";
			this->masa->RowHeadersWidth = 51;
			this->masa->RowTemplate->Height = 24;
			this->masa->Size = System::Drawing::Size(465, 225);
			this->masa->TabIndex = 8;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 279);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"размер  матриц";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 50);
			this->button2->TabIndex = 5;
			this->button2->Text = L"для 1й матрицы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(846, 355);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(115, 308);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 308);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 22);
			this->textBox1->TabIndex = 2;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// mas2
			// 
			this->mas2->AllowUserToAddRows = false;
			this->mas2->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->mas2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mas2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column5 });
			this->mas2->Location = System::Drawing::Point(685, 36);
			this->mas2->Name = L"mas2";
			this->mas2->RowHeadersWidth = 51;
			this->mas2->RowTemplate->Height = 24;
			this->mas2->Size = System::Drawing::Size(465, 231);
			this->mas2->TabIndex = 7;
			// 
			// mas1
			// 
			this->mas1->AllowUserToAddRows = false;
			this->mas1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mas1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column2,
					this->Column3, this->Column4
			});
			this->mas1->Location = System::Drawing::Point(25, 35);
			this->mas1->Name = L"mas1";
			this->mas1->RowHeadersWidth = 51;
			this->mas1->RowTemplate->Height = 24;
			this->mas1->Size = System::Drawing::Size(459, 232);
			this->mas1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(456, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 91);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ответ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(44, 375);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(303, 58);
			this->panel1->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(71, 17);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(50, 22);
			this->textBox4->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 17);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(50, 22);
			this->textBox3->TabIndex = 17;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(140, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 51);
			this->button3->TabIndex = 16;
			this->button3->Text = L"для 2й матрицы";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(172, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Первая матрица";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(846, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Вторая матрица";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1370, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Результат";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1656, 448);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->masa);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->mas2);
			this->Controls->Add(this->mas1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Операции с матрицами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->masa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mas2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mas1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// функция сложения


	private: void summer(double** m1, double** m2, double** m3, int r1, int c1, int r2, int c2)
	{
		int i, j;
		masa->ColumnCount = Convert::ToInt32(textBox1->Text);
		masa->RowCount = Convert::ToInt32(textBox2->Text);


		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++)
			{

				m1[i][j] = Convert::ToSingle(mas1->Rows[i]->Cells[j]->Value);
			}
		}
		for (i = 0; i < r2; i++) {
			for (j = 0; j < c2; j++)
			{

				m2[i][j] = Convert::ToSingle(mas2->Rows[i]->Cells[j]->Value);
			}
		}

		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++)
			{

				m3[i][j] = m1[i][j] + m2[i][j];
				masa->Rows[i]->Cells[j]->Value = Convert::ToString(m3[i][j]);
			}
		}
	}



		   // функция умножения



	private: void multiply(double** m1, double** m2, double** m3, int r1, int c1, int r2, int c2)
	{
		int i, j, k;
		masa->RowCount = r1;
		masa->ColumnCount = c2;


		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++)
			{

				m1[i][j] = Convert::ToSingle(mas1->Rows[i]->Cells[j]->Value);
			}
		}
		for (i = 0; i < r2; i++) {
			for (j = 0; j < c2; j++)
			{

				m2[i][j] = Convert::ToSingle(mas2->Rows[i]->Cells[j]->Value);
			}
		}


		for (i = 0; i < r1; i++) {
			for (j = 0; j < c2; j++) {
				m3[i][j] = 0;
				for (int k = 0; k < c1; k++) {
					m3[i][j] += m1[i][k] * m2[k][j];
					masa->Rows[i]->Cells[j]->Value = Convert::ToString(m3[i][j]);
				}
			}
		}
	}


		   //функция нахождения обратной матрицы



	private: void reverse(double** m1, int r1, int c1)
	{
		masa->ColumnCount = Convert::ToInt32(textBox1->Text);
		masa->RowCount = Convert::ToInt32(textBox2->Text);
		int i, j, k;
		double temp;
		double** E = new double* [r1];

		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {

				m1[i][j] = Convert::ToSingle(mas1->Rows[i]->Cells[j]->Value);

			}
		}

		for (i = 0; i < r1; i++) {

			E[i] = new double[r1];

		}

		for (i = 0; i < r1; i++)
			for (j = 0; j < r1; j++)
			{
				E[i][j] = 0.0;

				if (i == j)
					E[i][j] = 1.0;
			}


		for (k = 0; k < r1; k++)
		{
			temp = m1[k][k];

			for (j = 0; j < r1; j++)
			{
				m1[k][j] /= temp;
				E[k][j] /= temp;
			}

			for (i = k + 1; i < r1; i++)
			{
				temp = m1[i][k];

				for (j = 0; j < r1; j++)
				{
					m1[i][j] -= m1[k][j] * temp;
					E[i][j] -= E[k][j] * temp;
				}
			}
		}

		for (k = r1 - 1; k > 0; k--)
		{
			for (i = k - 1; i >= 0; i--)
			{
				temp = m1[i][k];

				for (j = 0; j < r1; j++)
				{
					m1[i][j] -= m1[k][j] * temp;
					E[i][j] -= E[k][j] * temp;
				}
			}
		}

		for (i = 0; i < r1; i++) {
			for (j = 0; j < r1; j++) {
				m1[i][j] = E[i][j];

				masa->Rows[i]->Cells[j]->Value = Convert::ToString(m1[i][j]);
			}
		}

		for (i = 0; i < r1; i++)
			delete[] E[i];

		delete[] E;

	}


		   //функция транспонирования 

	private: void transpose(double** m1, double** m3, int r1, int c1)
	{
		masa->ColumnCount = r1;
		masa->RowCount = c1;
		int i, j;


		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {

				m1[i][j] = Convert::ToSingle(mas1->Rows[i]->Cells[j]->Value);

			}
		}

		double t;
		if (r1 >= c1) {

			for (int i = 0; i < c1; i++)
			{
				for (int j = 0; j < r1; j++)
				{

					masa->Rows[i]->Cells[j]->Value = Convert::ToString(m1[j][i]);

				}
			}

		}
		else
		{
			for (int j = 0; j < r1; j++)
			{
				for (int i = 0; i < c1; i++)
				{

					masa->Rows[i]->Cells[j]->Value = Convert::ToString(m1[j][i]);

				}
			}


		}

	}


		   //функция нахождения дискриминанта 


		   void GetMatr(double** m1, double** p, int i, int j, int r1) {
			   int ki, kj, di, dj;
			   di = 0;
			   for (ki = 0; ki < r1 - 1; ki++) { // проверка индекса строки
				   if (ki == i)
					   di = 1;
				   dj = 0;
				   for (kj = 0; kj < r1 - 1; kj++) { // проверка индекса столбца
					   if (kj == j)
						   dj = 1;
					   p[ki][kj] = m1[ki + di][kj + dj];
				   }
			   }
		   }



	private: double discriminant(double** m1, int r1)
	{
		int i, j;
		double d, k, n;

		double** p;
		p = new double* [r1];
		for (i = 0; i < r1; i++)
		{
			p[i] = new double[r1];
		}
		j = 0;
		d = 0;
		k = 1;
		n = r1 - 1;

		if (r1 == 1) {
			d = m1[0][0];
			return(d);
		}
		if (r1 == 2) {
			d = m1[0][0] * m1[1][1] - (m1[1][0] * m1[0][1]);
			return(d);
		}
		if (r1 > 2) {
			for (i = 0; i < r1; i++) {
				GetMatr(m1, p, i, 0, r1);
				d = d + k * m1[i][0] * discriminant(p, n);
				k = -k;
			}
		}
		return(d);
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		masa->RowHeadersVisible = 0;
		masa->ColumnHeadersVisible = false;
		int i, j, r1, c1, r2, c2;
		try
		{
			r1 = Convert::ToInt32(textBox1->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество строк первой матрицы", "Упс...");
		}
		try
		{
			c1 = Convert::ToInt32(textBox2->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество столбцов первой матрицы", "Упс...");
		}
		try
		{
			r2 = Convert::ToInt32(textBox3->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество строк второй матрицы", "Упс...");
		}
		try
		{
			c2 = Convert::ToInt32(textBox4->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество столбцов второй матрицы", "Упс...");
		}

		double** m1 = new double* [r1];
		for (i = 0; i < r1; i++)
		{
			m1[i] = new double[c1];
		}


		double** m2 = new double* [r2];
		for (i = 0; i < r2; i++)
		{
			m2[i] = new double[c2];
		}

		double** m3 = new double* [r1];
		for (i = 0; i < r1; i++)
		{
			m3[i] = new double[c1];
		}
		// операции с матрицами
		if (radioButton1->Checked)
		{
			if ((r1 != r2) && (c1 != c2)) {
				MessageBox::Show("Строки и столбцы первой и второй матрицы должны быть равны!");
			}
			else if ((r1 != c1) && (r2 != c2)) {
				MessageBox::Show("Матрицы должны быть квадратными!");
			}
			else {
				summer(m1, m2, m3, r1, c1, r2, c2);
			}
		}
		else if (radioButton2->Checked)
		{
			if ((c1 != r2)) {
				MessageBox::Show("Cтобцы первой матрицы должны быть равны строкам второй матрицы!");
			}
			else
			{
				multiply(m1, m2, m3, r1, c1, r2, c2);
			}
		}
		else if (radioButton3->Checked)
		{
			if (r1 != c1)
			{
				MessageBox::Show("Матрицы должна быть квадратной!");
			}
			else
			{
				reverse(m1, r1, c1);
			}

		}
		else if (radioButton4->Checked)
		{
			transpose(m1, m3, r1, c1);
		}
		else if (radioButton5->Checked)
		{
			for (i = 0; i < r1; i++) {
				for (j = 0; j < r1; j++) {

					m1[i][j] = Convert::ToSingle(mas1->Rows[i]->Cells[j]->Value);
				}
			}
			if (r1 != c1)
			{
				MessageBox::Show("Матрицы должна быть квадратной!");
			}
			else
			{
				double dis = discriminant(m1, r1);
				masa->Rows[0]->Cells[0]->Value = Convert::ToString(dis);
			}


		}

		delete[] m1;
		delete[] m2;
		delete[] m3;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		mas1->RowHeadersVisible = 0;
		mas1->ColumnHeadersVisible = false;
		try
		{
			mas1->RowCount = Convert::ToInt32(textBox1->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество строк первой матрицы","Упс...");
		}
		try
		{
			mas1->ColumnCount = Convert::ToInt32(textBox2->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество столбцов первой матрицы", "Упс...");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		mas2->RowHeadersVisible = 0;
		mas2->ColumnHeadersVisible = false;
		try
		{
			mas2->RowCount = Convert::ToInt32(textBox3->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество строк второй матрицы", "Упс...");
		}
		try
		{
			mas2->ColumnCount = Convert::ToInt32(textBox4->Text);
		}
		catch (System::Exception^)
		{
			MessageBox::Show("Вы совсем забыли про количество столбцов второй матрицы", "Упс...");
		}
		
	}


	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		mas2->Visible = false;
		panel1->Visible = false;
		label6->Visible = false;

		int a = 0;
		textBox3->Text = Convert::ToString(a);
		textBox4->Text = Convert::ToString(a);
		mas2->RowCount = Convert::ToInt32(textBox3->Text);
		mas2->ColumnCount = Convert::ToInt32(textBox4->Text);

	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		mas2->Visible = false;
		panel1->Visible = false;
		label6->Visible = false;

		int a = 0;
		textBox3->Text = Convert::ToString(a);
		textBox4->Text = Convert::ToString(a);
		mas2->RowCount = Convert::ToInt32(textBox3->Text);
		mas2->ColumnCount = Convert::ToInt32(textBox4->Text);
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		mas2->Visible = false;
		panel1->Visible = false;
		label6->Visible = false;
		int a = 0;
		textBox3->Text = Convert::ToString(a);
		textBox4->Text = Convert::ToString(a);
		mas2->RowCount = Convert::ToInt32(textBox3->Text);
		mas2->ColumnCount = Convert::ToInt32(textBox4->Text);
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		mas2->Visible = true;
		panel1->Visible = true;
		label6->Visible = true;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		mas2->Visible = true;
		panel1->Visible = true;
		label6->Visible = true;
	}
	};
}
