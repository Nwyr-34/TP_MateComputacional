#pragma once
#include<iostream>
using namespace System;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Interfaz
	/// </summary>
	public ref class Interfaz : public System::Windows::Forms::Form
	{
	public:
		Interfaz(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Interfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtFila;
	private: System::Windows::Forms::TextBox^  txtColumna;
	protected:

	protected:

	private: System::Windows::Forms::Label^  lbltitulo;
	private: System::Windows::Forms::Label^  lblFilas;
	private: System::Windows::Forms::Label^  lblColumnas;
	private: System::Windows::Forms::DataGridView^  dgvImagen;

	private: System::Windows::Forms::Panel^  pnEntrada;
	private: System::Windows::Forms::Label^  lbltitulo2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btnMedia;
	private: System::Windows::Forms::Button^  btnMediana;
	private: System::Windows::Forms::Button^  btnLaplaciano;
	private: System::Windows::Forms::Button^  btnSobel;
	private: System::Windows::Forms::Label^  lblTitulo3;
	private: System::Windows::Forms::Label^  lblTitulo4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  btnOtraImagen;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  pnIngreso;
	private: System::Windows::Forms::Button^  btnCrearImagen;


	private:
		int columna, fila;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtFila = (gcnew System::Windows::Forms::TextBox());
			this->txtColumna = (gcnew System::Windows::Forms::TextBox());
			this->lbltitulo = (gcnew System::Windows::Forms::Label());
			this->lblFilas = (gcnew System::Windows::Forms::Label());
			this->lblColumnas = (gcnew System::Windows::Forms::Label());
			this->dgvImagen = (gcnew System::Windows::Forms::DataGridView());
			this->pnEntrada = (gcnew System::Windows::Forms::Panel());
			this->btnCrearImagen = (gcnew System::Windows::Forms::Button());
			this->lbltitulo2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnMedia = (gcnew System::Windows::Forms::Button());
			this->btnMediana = (gcnew System::Windows::Forms::Button());
			this->btnLaplaciano = (gcnew System::Windows::Forms::Button());
			this->btnSobel = (gcnew System::Windows::Forms::Button());
			this->lblTitulo3 = (gcnew System::Windows::Forms::Label());
			this->lblTitulo4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnOtraImagen = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pnIngreso = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvImagen))->BeginInit();
			this->pnEntrada->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pnIngreso->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtFila
			// 
			this->txtFila->Location = System::Drawing::Point(121, 40);
			this->txtFila->Name = L"txtFila";
			this->txtFila->Size = System::Drawing::Size(88, 20);
			this->txtFila->TabIndex = 0;
			// 
			// txtColumna
			// 
			this->txtColumna->Location = System::Drawing::Point(288, 40);
			this->txtColumna->Name = L"txtColumna";
			this->txtColumna->Size = System::Drawing::Size(96, 20);
			this->txtColumna->TabIndex = 1;
			// 
			// lbltitulo
			// 
			this->lbltitulo->AutoSize = true;
			this->lbltitulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltitulo->Location = System::Drawing::Point(13, 3);
			this->lbltitulo->Name = L"lbltitulo";
			this->lbltitulo->Size = System::Drawing::Size(258, 19);
			this->lbltitulo->TabIndex = 2;
			this->lbltitulo->Text = L"Ingrese las dimensiones de la imagen";
			// 
			// lblFilas
			// 
			this->lblFilas->AutoSize = true;
			this->lblFilas->Location = System::Drawing::Point(84, 43);
			this->lblFilas->Name = L"lblFilas";
			this->lblFilas->Size = System::Drawing::Size(31, 13);
			this->lblFilas->TabIndex = 3;
			this->lblFilas->Text = L"Filas:";
			// 
			// lblColumnas
			// 
			this->lblColumnas->AutoSize = true;
			this->lblColumnas->Location = System::Drawing::Point(226, 43);
			this->lblColumnas->Name = L"lblColumnas";
			this->lblColumnas->Size = System::Drawing::Size(56, 13);
			this->lblColumnas->TabIndex = 4;
			this->lblColumnas->Text = L"Columnas:";
			// 
			// dgvImagen
			// 
			this->dgvImagen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvImagen->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvImagen->ColumnHeadersVisible = false;
			this->dgvImagen->Location = System::Drawing::Point(137, 87);
			this->dgvImagen->Name = L"dgvImagen";
			this->dgvImagen->RowHeadersVisible = false;
			this->dgvImagen->Size = System::Drawing::Size(224, 164);
			this->dgvImagen->StandardTab = true;
			this->dgvImagen->TabIndex = 5;
			// 
			// pnEntrada
			// 
			this->pnEntrada->Controls->Add(this->btnCrearImagen);
			this->pnEntrada->Controls->Add(this->dgvImagen);
			this->pnEntrada->Controls->Add(this->lblColumnas);
			this->pnEntrada->Controls->Add(this->lblFilas);
			this->pnEntrada->Controls->Add(this->lbltitulo);
			this->pnEntrada->Controls->Add(this->txtColumna);
			this->pnEntrada->Controls->Add(this->txtFila);
			this->pnEntrada->Location = System::Drawing::Point(109, 8);
			this->pnEntrada->Name = L"pnEntrada";
			this->pnEntrada->Size = System::Drawing::Size(510, 356);
			this->pnEntrada->TabIndex = 6;
			// 
			// btnCrearImagen
			// 
			this->btnCrearImagen->Location = System::Drawing::Point(56, 86);
			this->btnCrearImagen->Name = L"btnCrearImagen";
			this->btnCrearImagen->Size = System::Drawing::Size(75, 23);
			this->btnCrearImagen->TabIndex = 6;
			this->btnCrearImagen->Text = L"Crear Imagen";
			this->btnCrearImagen->UseVisualStyleBackColor = true;
			this->btnCrearImagen->Click += gcnew System::EventHandler(this, &Interfaz::btnCrearImagen_Click);
			// 
			// lbltitulo2
			// 
			this->lbltitulo2->AutoSize = true;
			this->lbltitulo2->Location = System::Drawing::Point(103, 12);
			this->lbltitulo2->Name = L"lbltitulo2";
			this->lbltitulo2->Size = System::Drawing::Size(188, 13);
			this->lbltitulo2->TabIndex = 7;
			this->lbltitulo2->Text = L"Ingrese las dimensiones de la máscara";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(319, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// btnMedia
			// 
			this->btnMedia->Location = System::Drawing::Point(81, 83);
			this->btnMedia->Name = L"btnMedia";
			this->btnMedia->Size = System::Drawing::Size(75, 23);
			this->btnMedia->TabIndex = 9;
			this->btnMedia->Text = L"Media";
			this->btnMedia->UseVisualStyleBackColor = true;
			// 
			// btnMediana
			// 
			this->btnMediana->Location = System::Drawing::Point(200, 83);
			this->btnMediana->Name = L"btnMediana";
			this->btnMediana->Size = System::Drawing::Size(75, 23);
			this->btnMediana->TabIndex = 10;
			this->btnMediana->Text = L"Mediana";
			this->btnMediana->UseVisualStyleBackColor = true;
			// 
			// btnLaplaciano
			// 
			this->btnLaplaciano->Location = System::Drawing::Point(315, 83);
			this->btnLaplaciano->Name = L"btnLaplaciano";
			this->btnLaplaciano->Size = System::Drawing::Size(75, 23);
			this->btnLaplaciano->TabIndex = 11;
			this->btnLaplaciano->Text = L"Laplaciano";
			this->btnLaplaciano->UseVisualStyleBackColor = true;
			// 
			// btnSobel
			// 
			this->btnSobel->Location = System::Drawing::Point(432, 83);
			this->btnSobel->Name = L"btnSobel";
			this->btnSobel->Size = System::Drawing::Size(75, 23);
			this->btnSobel->TabIndex = 12;
			this->btnSobel->Text = L"Sobel";
			this->btnSobel->UseVisualStyleBackColor = true;
			// 
			// lblTitulo3
			// 
			this->lblTitulo3->AutoSize = true;
			this->lblTitulo3->Location = System::Drawing::Point(22, 49);
			this->lblTitulo3->Name = L"lblTitulo3";
			this->lblTitulo3->Size = System::Drawing::Size(132, 13);
			this->lblTitulo3->TabIndex = 13;
			this->lblTitulo3->Text = L"Seleccione un tipo de filtro";
			// 
			// lblTitulo4
			// 
			this->lblTitulo4->AutoSize = true;
			this->lblTitulo4->Location = System::Drawing::Point(22, 142);
			this->lblTitulo4->Name = L"lblTitulo4";
			this->lblTitulo4->Size = System::Drawing::Size(96, 13);
			this->lblTitulo4->TabIndex = 14;
			this->lblTitulo4->Text = L"Imagen Resultante";
			this->lblTitulo4->Click += gcnew System::EventHandler(this, &Interfaz::lblTitulo4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(181, 159);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(284, 228);
			this->dataGridView1->TabIndex = 15;
			// 
			// btnOtraImagen
			// 
			this->btnOtraImagen->Location = System::Drawing::Point(43, 309);
			this->btnOtraImagen->Name = L"btnOtraImagen";
			this->btnOtraImagen->Size = System::Drawing::Size(113, 28);
			this->btnOtraImagen->TabIndex = 16;
			this->btnOtraImagen->Text = L"Elegir otra imagen";
			this->btnOtraImagen->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(43, 348);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 29);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Elegir otro filtro";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pnIngreso
			// 
			this->pnIngreso->Controls->Add(this->button2);
			this->pnIngreso->Controls->Add(this->btnOtraImagen);
			this->pnIngreso->Controls->Add(this->dataGridView1);
			this->pnIngreso->Controls->Add(this->lblTitulo4);
			this->pnIngreso->Controls->Add(this->lblTitulo3);
			this->pnIngreso->Controls->Add(this->btnSobel);
			this->pnIngreso->Controls->Add(this->btnLaplaciano);
			this->pnIngreso->Controls->Add(this->btnMediana);
			this->pnIngreso->Controls->Add(this->btnMedia);
			this->pnIngreso->Controls->Add(this->textBox1);
			this->pnIngreso->Controls->Add(this->lbltitulo2);
			this->pnIngreso->Location = System::Drawing::Point(636, 12);
			this->pnIngreso->Name = L"pnIngreso";
			this->pnIngreso->Size = System::Drawing::Size(566, 399);
			this->pnIngreso->TabIndex = 18;
			this->pnIngreso->Visible = false;
			// 
			// Interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(704, 417);
			this->Controls->Add(this->pnIngreso);
			this->Controls->Add(this->pnEntrada);
			this->Name = L"Interfaz";
			this->Text = L"Interfaz";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvImagen))->EndInit();
			this->pnEntrada->ResumeLayout(false);
			this->pnEntrada->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pnIngreso->ResumeLayout(false);
			this->pnIngreso->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lblTitulo4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnCrearImagen_Click(System::Object^  sender, System::EventArgs^  e) {
	//int columna, fila;
	Convert^convertir;
	columna = convertir->ToInt16(txtColumna->Text);
	fila = convertir->ToInt16(txtFila->Text);
	dgvImagen->ColumnCount = columna;
	dgvImagen->RowCount = fila;
	dgvImagen->AutoResizeColumns();
}
};
}
