#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TabPage^ tabClientes;
    public: System::Windows::Forms::DataGridView^ dataGridClientes;
    private:
    protected:

    private:

    public:



    public: System::Windows::Forms::TextBox^ textBox1;
    private:
    public: System::Windows::Forms::TextBox^ textBox2;

    public: System::Windows::Forms::TextBox^ textBox4;
    public: System::Windows::Forms::Button^ buttonEliminarCliente;

    public: System::Windows::Forms::Button^ buttonAgregarCliente;


    public:
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TabPage^ tabFacturacion;
    private: System::Windows::Forms::Label^ label3;
    public: System::Windows::Forms::TextBox^ inputTotal;
    private:
    public: System::Windows::Forms::TextBox^ inputSubtotal;
    public: System::Windows::Forms::TextBox^ inputDescuento;
    public: System::Windows::Forms::DataGridView^ dataGridFacturacion;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
    public:
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
    public: System::Windows::Forms::TextBox^ inputCantidadFacturacion;
    private:
    public: System::Windows::Forms::TextBox^ inputProducto;
    public: System::Windows::Forms::TextBox^ inputPrecioFacturacion;
    public: System::Windows::Forms::TextBox^ inputIdEmpleado;
    public: System::Windows::Forms::TextBox^ inputIdCliente;
    private: System::Windows::Forms::Label^ label2;
    public:
    public: System::Windows::Forms::Button^ buttonAplicarDescuento;
    private:
    private: System::Windows::Forms::Label^ label1;
    public:
    public: System::Windows::Forms::Button^ buttonEliminarFacturacion;
    private:
    public: System::Windows::Forms::Button^ buttonAgregarFacturacion;
    private: System::Windows::Forms::Label^ labelCantidadFacturacion;
    public:
    private: System::Windows::Forms::Label^ labelProducto;
    private: System::Windows::Forms::Label^ labelPrecioFacturacion;
    private: System::Windows::Forms::Label^ labelIdEmpleado;
    private: System::Windows::Forms::Label^ labelIdCliente;
    private: System::Windows::Forms::TabPage^ tabStock;
    public: System::Windows::Forms::DataGridView^ dataGridStock;
    private:
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    public:
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
    public: System::Windows::Forms::TextBox^ inputNombre;
    private:
    public: System::Windows::Forms::TextBox^ inputPrecio;
    public: System::Windows::Forms::TextBox^ inputCantidad;
    public: System::Windows::Forms::TextBox^ inputIdProducto;
    public: System::Windows::Forms::Button^ buttonEliminar;
    public: System::Windows::Forms::Button^ buttonAgregar;
    private: System::Windows::Forms::Label^ labelCantidad;
    public:
    private: System::Windows::Forms::Label^ labelNombre;
    private: System::Windows::Forms::Label^ labelPrecio;
    private: System::Windows::Forms::Label^ labelIdProducto;
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabEmpleado;
    public: System::Windows::Forms::DataGridView^ dataGridEmpleado;
    private:

public: System::Windows::Forms::Button^ buttonEliminarEmpleado;
    private:

    public:




public: System::Windows::Forms::Button^ buttonAgregarEmpleado;
    private:

    private: System::Windows::Forms::Label^ label8;
    public:
    public: System::Windows::Forms::TextBox^ textBox5;
    private:
    private: System::Windows::Forms::Label^ label9;
    public:
    public: System::Windows::Forms::TextBox^ textBox6;
    private:
    private: System::Windows::Forms::Label^ label10;
    public:
    public: System::Windows::Forms::TextBox^ textBox7;
    private:
    private: System::Windows::Forms::Label^ label11;
    public:
    public: System::Windows::Forms::TextBox^ textBox8;
    private:
    private: System::Windows::Forms::TabPage^ tabProveedores;
public: System::Windows::Forms::DataGridView^ dataGridProveedores;
public: System::Windows::Forms::Button^ buttonEliminarProveedores;
public: System::Windows::Forms::Button^ buttonAgregarProveedores;

    private: System::Windows::Forms::Label^ label12;
    public:
    public: System::Windows::Forms::TextBox^ textBox9;
    private:
    private: System::Windows::Forms::Label^ label13;
    public:
    public: System::Windows::Forms::TextBox^ textBox10;
    private:
    private: System::Windows::Forms::Label^ label14;
    public:
    public: System::Windows::Forms::TextBox^ textBox11;
    private:
    private: System::Windows::Forms::Label^ label15;
    public:
    public: System::Windows::Forms::TextBox^ textBox12;
public: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label4;
public:
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->tabClientes = (gcnew System::Windows::Forms::TabPage());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->dataGridClientes = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->buttonEliminarCliente = (gcnew System::Windows::Forms::Button());
            this->buttonAgregarCliente = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->tabFacturacion = (gcnew System::Windows::Forms::TabPage());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->inputTotal = (gcnew System::Windows::Forms::TextBox());
            this->inputSubtotal = (gcnew System::Windows::Forms::TextBox());
            this->inputDescuento = (gcnew System::Windows::Forms::TextBox());
            this->dataGridFacturacion = (gcnew System::Windows::Forms::DataGridView());
            this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->inputCantidadFacturacion = (gcnew System::Windows::Forms::TextBox());
            this->inputProducto = (gcnew System::Windows::Forms::TextBox());
            this->inputPrecioFacturacion = (gcnew System::Windows::Forms::TextBox());
            this->inputIdEmpleado = (gcnew System::Windows::Forms::TextBox());
            this->inputIdCliente = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->buttonAplicarDescuento = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->buttonEliminarFacturacion = (gcnew System::Windows::Forms::Button());
            this->buttonAgregarFacturacion = (gcnew System::Windows::Forms::Button());
            this->labelCantidadFacturacion = (gcnew System::Windows::Forms::Label());
            this->labelProducto = (gcnew System::Windows::Forms::Label());
            this->labelPrecioFacturacion = (gcnew System::Windows::Forms::Label());
            this->labelIdEmpleado = (gcnew System::Windows::Forms::Label());
            this->labelIdCliente = (gcnew System::Windows::Forms::Label());
            this->tabStock = (gcnew System::Windows::Forms::TabPage());
            this->dataGridStock = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->inputNombre = (gcnew System::Windows::Forms::TextBox());
            this->inputPrecio = (gcnew System::Windows::Forms::TextBox());
            this->inputCantidad = (gcnew System::Windows::Forms::TextBox());
            this->inputIdProducto = (gcnew System::Windows::Forms::TextBox());
            this->buttonEliminar = (gcnew System::Windows::Forms::Button());
            this->buttonAgregar = (gcnew System::Windows::Forms::Button());
            this->labelCantidad = (gcnew System::Windows::Forms::Label());
            this->labelNombre = (gcnew System::Windows::Forms::Label());
            this->labelPrecio = (gcnew System::Windows::Forms::Label());
            this->labelIdProducto = (gcnew System::Windows::Forms::Label());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabEmpleado = (gcnew System::Windows::Forms::TabPage());
            this->dataGridEmpleado = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->buttonEliminarEmpleado = (gcnew System::Windows::Forms::Button());
            this->buttonAgregarEmpleado = (gcnew System::Windows::Forms::Button());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->tabProveedores = (gcnew System::Windows::Forms::TabPage());
            this->dataGridProveedores = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->buttonEliminarProveedores = (gcnew System::Windows::Forms::Button());
            this->buttonAgregarProveedores = (gcnew System::Windows::Forms::Button());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->tabClientes->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridClientes))->BeginInit();
            this->tabFacturacion->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFacturacion))->BeginInit();
            this->tabStock->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->BeginInit();
            this->tabControl1->SuspendLayout();
            this->tabEmpleado->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEmpleado))->BeginInit();
            this->tabProveedores->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridProveedores))->BeginInit();
            this->SuspendLayout();
            // 
            // tabClientes
            // 
            this->tabClientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->tabClientes->Controls->Add(this->textBox3);
            this->tabClientes->Controls->Add(this->label4);
            this->tabClientes->Controls->Add(this->dataGridClientes);
            this->tabClientes->Controls->Add(this->textBox1);
            this->tabClientes->Controls->Add(this->textBox2);
            this->tabClientes->Controls->Add(this->textBox4);
            this->tabClientes->Controls->Add(this->buttonEliminarCliente);
            this->tabClientes->Controls->Add(this->buttonAgregarCliente);
            this->tabClientes->Controls->Add(this->label5);
            this->tabClientes->Controls->Add(this->label6);
            this->tabClientes->Controls->Add(this->label7);
            this->tabClientes->Location = System::Drawing::Point(4, 25);
            this->tabClientes->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabClientes->Name = L"tabClientes";
            this->tabClientes->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabClientes->Size = System::Drawing::Size(800, 520);
            this->tabClientes->TabIndex = 5;
            this->tabClientes->Text = L"Clientes";
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox3->Location = System::Drawing::Point(433, 118);
            this->textBox3->Margin = System::Windows::Forms::Padding(4);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(353, 30);
            this->textBox3->TabIndex = 24;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label4->Location = System::Drawing::Point(429, 92);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(79, 22);
            this->label4->TabIndex = 25;
            this->label4->Text = L"Apellido";
            // 
            // dataGridClientes
            // 
            this->dataGridClientes->AllowUserToAddRows = false;
            this->dataGridClientes->AllowUserToDeleteRows = false;
            this->dataGridClientes->AllowUserToResizeRows = false;
            this->dataGridClientes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridClientes->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->dataGridClientes->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->dataGridClientes->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridClientes->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridClientes->ColumnHeadersHeight = 30;
            this->dataGridClientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->dataGridViewTextBoxColumn1,
                    this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
            });
            this->dataGridClientes->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->dataGridClientes->EnableHeadersVisualStyles = false;
            this->dataGridClientes->GridColor = System::Drawing::SystemColors::Control;
            this->dataGridClientes->Location = System::Drawing::Point(3, 274);
            this->dataGridClientes->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridClientes->Name = L"dataGridClientes";
            this->dataGridClientes->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->dataGridClientes->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridClientes->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridClientes->RowHeadersWidth = 51;
            this->dataGridClientes->RowTemplate->Height = 24;
            this->dataGridClientes->Size = System::Drawing::Size(794, 244);
            this->dataGridClientes->TabIndex = 23;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this->dataGridViewTextBoxColumn1->HeaderText = L"ID Cliente";
            this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
            this->dataGridViewTextBoxColumn1->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre completo";
            this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
            this->dataGridViewTextBoxColumn2->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this->dataGridViewTextBoxColumn3->HeaderText = L"DNI";
            this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
            this->dataGridViewTextBoxColumn3->ReadOnly = true;
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox1->Location = System::Drawing::Point(13, 118);
            this->textBox1->Margin = System::Windows::Forms::Padding(4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(353, 30);
            this->textBox1->TabIndex = 13;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox2->Location = System::Drawing::Point(433, 48);
            this->textBox2->Margin = System::Windows::Forms::Padding(4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(353, 30);
            this->textBox2->TabIndex = 14;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox4->Location = System::Drawing::Point(13, 48);
            this->textBox4->Margin = System::Windows::Forms::Padding(4);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(353, 30);
            this->textBox4->TabIndex = 12;
            // 
            // buttonEliminarCliente
            // 
            this->buttonEliminarCliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
                static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
            this->buttonEliminarCliente->FlatAppearance->BorderSize = 0;
            this->buttonEliminarCliente->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->buttonEliminarCliente->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
                static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
            this->buttonEliminarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonEliminarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonEliminarCliente->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonEliminarCliente->Location = System::Drawing::Point(433, 206);
            this->buttonEliminarCliente->Margin = System::Windows::Forms::Padding(4);
            this->buttonEliminarCliente->Name = L"buttonEliminarCliente";
            this->buttonEliminarCliente->Size = System::Drawing::Size(353, 39);
            this->buttonEliminarCliente->TabIndex = 22;
            this->buttonEliminarCliente->Text = L"-";
            this->buttonEliminarCliente->UseVisualStyleBackColor = false;
            // 
            // buttonAgregarCliente
            // 
            this->buttonAgregarCliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->buttonAgregarCliente->FlatAppearance->BorderSize = 0;
            this->buttonAgregarCliente->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
            this->buttonAgregarCliente->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
            this->buttonAgregarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonAgregarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAgregarCliente->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonAgregarCliente->Location = System::Drawing::Point(13, 206);
            this->buttonAgregarCliente->Margin = System::Windows::Forms::Padding(4);
            this->buttonAgregarCliente->Name = L"buttonAgregarCliente";
            this->buttonAgregarCliente->Size = System::Drawing::Size(353, 39);
            this->buttonAgregarCliente->TabIndex = 21;
            this->buttonAgregarCliente->Text = L"+";
            this->buttonAgregarCliente->UseVisualStyleBackColor = false;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label5->Location = System::Drawing::Point(429, 22);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(79, 22);
            this->label5->TabIndex = 17;
            this->label5->Text = L"Nombre";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label6->Location = System::Drawing::Point(9, 92);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(43, 22);
            this->label6->TabIndex = 15;
            this->label6->Text = L"DNI";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label7->Location = System::Drawing::Point(9, 22);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(96, 22);
            this->label7->TabIndex = 13;
            this->label7->Text = L"ID Cliente";
            // 
            // tabFacturacion
            // 
            this->tabFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->tabFacturacion->Controls->Add(this->label3);
            this->tabFacturacion->Controls->Add(this->inputTotal);
            this->tabFacturacion->Controls->Add(this->inputSubtotal);
            this->tabFacturacion->Controls->Add(this->inputDescuento);
            this->tabFacturacion->Controls->Add(this->dataGridFacturacion);
            this->tabFacturacion->Controls->Add(this->inputCantidadFacturacion);
            this->tabFacturacion->Controls->Add(this->inputProducto);
            this->tabFacturacion->Controls->Add(this->inputPrecioFacturacion);
            this->tabFacturacion->Controls->Add(this->inputIdEmpleado);
            this->tabFacturacion->Controls->Add(this->inputIdCliente);
            this->tabFacturacion->Controls->Add(this->label2);
            this->tabFacturacion->Controls->Add(this->buttonAplicarDescuento);
            this->tabFacturacion->Controls->Add(this->label1);
            this->tabFacturacion->Controls->Add(this->buttonEliminarFacturacion);
            this->tabFacturacion->Controls->Add(this->buttonAgregarFacturacion);
            this->tabFacturacion->Controls->Add(this->labelCantidadFacturacion);
            this->tabFacturacion->Controls->Add(this->labelProducto);
            this->tabFacturacion->Controls->Add(this->labelPrecioFacturacion);
            this->tabFacturacion->Controls->Add(this->labelIdEmpleado);
            this->tabFacturacion->Controls->Add(this->labelIdCliente);
            this->tabFacturacion->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->tabFacturacion->Location = System::Drawing::Point(4, 25);
            this->tabFacturacion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabFacturacion->Name = L"tabFacturacion";
            this->tabFacturacion->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabFacturacion->Size = System::Drawing::Size(800, 520);
            this->tabFacturacion->TabIndex = 1;
            this->tabFacturacion->Text = L"Facturacion";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label3->Location = System::Drawing::Point(463, 443);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(52, 22);
            this->label3->TabIndex = 33;
            this->label3->Text = L"Total";
            // 
            // inputTotal
            // 
            this->inputTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputTotal->Enabled = false;
            this->inputTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputTotal->ForeColor = System::Drawing::SystemColors::Window;
            this->inputTotal->Location = System::Drawing::Point(524, 438);
            this->inputTotal->Margin = System::Windows::Forms::Padding(4);
            this->inputTotal->Name = L"inputTotal";
            this->inputTotal->Size = System::Drawing::Size(262, 30);
            this->inputTotal->TabIndex = 32;
            this->inputTotal->Text = L"$0";
            // 
            // inputSubtotal
            // 
            this->inputSubtotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputSubtotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputSubtotal->Enabled = false;
            this->inputSubtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputSubtotal->ForeColor = System::Drawing::SystemColors::Window;
            this->inputSubtotal->Location = System::Drawing::Point(524, 370);
            this->inputSubtotal->Margin = System::Windows::Forms::Padding(4);
            this->inputSubtotal->Name = L"inputSubtotal";
            this->inputSubtotal->Size = System::Drawing::Size(262, 30);
            this->inputSubtotal->TabIndex = 30;
            this->inputSubtotal->Text = L"$0";
            // 
            // inputDescuento
            // 
            this->inputDescuento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputDescuento->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputDescuento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputDescuento->ForeColor = System::Drawing::SystemColors::Window;
            this->inputDescuento->Location = System::Drawing::Point(433, 271);
            this->inputDescuento->Margin = System::Windows::Forms::Padding(4);
            this->inputDescuento->Name = L"inputDescuento";
            this->inputDescuento->Size = System::Drawing::Size(198, 30);
            this->inputDescuento->TabIndex = 19;
            // 
            // dataGridFacturacion
            // 
            this->dataGridFacturacion->AllowUserToAddRows = false;
            this->dataGridFacturacion->AllowUserToDeleteRows = false;
            this->dataGridFacturacion->AllowUserToResizeRows = false;
            this->dataGridFacturacion->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridFacturacion->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->dataGridFacturacion->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->dataGridFacturacion->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->dataGridFacturacion->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridFacturacion->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
            this->dataGridFacturacion->ColumnHeadersHeight = 30;
            this->dataGridFacturacion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->Column5,
                    this->Column6, this->Column7
            });
            this->dataGridFacturacion->EnableHeadersVisualStyles = false;
            this->dataGridFacturacion->GridColor = System::Drawing::SystemColors::Control;
            this->dataGridFacturacion->Location = System::Drawing::Point(15, 246);
            this->dataGridFacturacion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridFacturacion->Name = L"dataGridFacturacion";
            this->dataGridFacturacion->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->dataGridFacturacion->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
            dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridFacturacion->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
            this->dataGridFacturacion->RowHeadersWidth = 51;
            this->dataGridFacturacion->RowTemplate->Height = 24;
            this->dataGridFacturacion->Size = System::Drawing::Size(377, 262);
            this->dataGridFacturacion->TabIndex = 26;
            // 
            // Column5
            // 
            this->Column5->HeaderText = L"Producto";
            this->Column5->MinimumWidth = 6;
            this->Column5->Name = L"Column5";
            // 
            // Column6
            // 
            this->Column6->HeaderText = L"Precio";
            this->Column6->MinimumWidth = 6;
            this->Column6->Name = L"Column6";
            // 
            // Column7
            // 
            this->Column7->HeaderText = L"Cantidad";
            this->Column7->MinimumWidth = 6;
            this->Column7->Name = L"Column7";
            // 
            // inputCantidadFacturacion
            // 
            this->inputCantidadFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputCantidadFacturacion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputCantidadFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->inputCantidadFacturacion->ForeColor = System::Drawing::SystemColors::Window;
            this->inputCantidadFacturacion->Location = System::Drawing::Point(433, 105);
            this->inputCantidadFacturacion->Margin = System::Windows::Forms::Padding(4);
            this->inputCantidadFacturacion->Name = L"inputCantidadFacturacion";
            this->inputCantidadFacturacion->Size = System::Drawing::Size(353, 30);
            this->inputCantidadFacturacion->TabIndex = 18;
            // 
            // inputProducto
            // 
            this->inputProducto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputProducto->ForeColor = System::Drawing::SystemColors::Window;
            this->inputProducto->Location = System::Drawing::Point(15, 166);
            this->inputProducto->Margin = System::Windows::Forms::Padding(4);
            this->inputProducto->Name = L"inputProducto";
            this->inputProducto->Size = System::Drawing::Size(353, 30);
            this->inputProducto->TabIndex = 16;
            // 
            // inputPrecioFacturacion
            // 
            this->inputPrecioFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputPrecioFacturacion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputPrecioFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->inputPrecioFacturacion->ForeColor = System::Drawing::SystemColors::Window;
            this->inputPrecioFacturacion->Location = System::Drawing::Point(433, 43);
            this->inputPrecioFacturacion->Margin = System::Windows::Forms::Padding(4);
            this->inputPrecioFacturacion->Name = L"inputPrecioFacturacion";
            this->inputPrecioFacturacion->Size = System::Drawing::Size(353, 30);
            this->inputPrecioFacturacion->TabIndex = 17;
            // 
            // inputIdEmpleado
            // 
            this->inputIdEmpleado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputIdEmpleado->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputIdEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputIdEmpleado->ForeColor = System::Drawing::SystemColors::Window;
            this->inputIdEmpleado->Location = System::Drawing::Point(15, 105);
            this->inputIdEmpleado->Margin = System::Windows::Forms::Padding(4);
            this->inputIdEmpleado->Name = L"inputIdEmpleado";
            this->inputIdEmpleado->Size = System::Drawing::Size(353, 30);
            this->inputIdEmpleado->TabIndex = 15;
            // 
            // inputIdCliente
            // 
            this->inputIdCliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputIdCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputIdCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputIdCliente->ForeColor = System::Drawing::SystemColors::Window;
            this->inputIdCliente->Location = System::Drawing::Point(15, 43);
            this->inputIdCliente->Margin = System::Windows::Forms::Padding(4);
            this->inputIdCliente->Name = L"inputIdCliente";
            this->inputIdCliente->Size = System::Drawing::Size(353, 30);
            this->inputIdCliente->TabIndex = 14;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label2->Location = System::Drawing::Point(429, 375);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(82, 22);
            this->label2->TabIndex = 31;
            this->label2->Text = L"Subtotal";
            // 
            // buttonAplicarDescuento
            // 
            this->buttonAplicarDescuento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
            this->buttonAplicarDescuento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonAplicarDescuento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonAplicarDescuento->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonAplicarDescuento->Location = System::Drawing::Point(663, 271);
            this->buttonAplicarDescuento->Margin = System::Windows::Forms::Padding(4);
            this->buttonAplicarDescuento->Name = L"buttonAplicarDescuento";
            this->buttonAplicarDescuento->Size = System::Drawing::Size(124, 32);
            this->buttonAplicarDescuento->TabIndex = 29;
            this->buttonAplicarDescuento->Text = L"Aplicar";
            this->buttonAplicarDescuento->UseVisualStyleBackColor = false;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label1->Location = System::Drawing::Point(429, 246);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(103, 22);
            this->label1->TabIndex = 28;
            this->label1->Text = L"Descuento";
            // 
            // buttonEliminarFacturacion
            // 
            this->buttonEliminarFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
                static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
            this->buttonEliminarFacturacion->FlatAppearance->BorderSize = 0;
            this->buttonEliminarFacturacion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->buttonEliminarFacturacion->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
                static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
            this->buttonEliminarFacturacion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonEliminarFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonEliminarFacturacion->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonEliminarFacturacion->Location = System::Drawing::Point(623, 161);
            this->buttonEliminarFacturacion->Margin = System::Windows::Forms::Padding(4);
            this->buttonEliminarFacturacion->Name = L"buttonEliminarFacturacion";
            this->buttonEliminarFacturacion->Size = System::Drawing::Size(164, 39);
            this->buttonEliminarFacturacion->TabIndex = 25;
            this->buttonEliminarFacturacion->Text = L"-";
            this->buttonEliminarFacturacion->UseVisualStyleBackColor = false;
            // 
            // buttonAgregarFacturacion
            // 
            this->buttonAgregarFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->buttonAgregarFacturacion->FlatAppearance->BorderSize = 0;
            this->buttonAgregarFacturacion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
            this->buttonAgregarFacturacion->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
            this->buttonAgregarFacturacion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonAgregarFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonAgregarFacturacion->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonAgregarFacturacion->Location = System::Drawing::Point(433, 161);
            this->buttonAgregarFacturacion->Margin = System::Windows::Forms::Padding(4);
            this->buttonAgregarFacturacion->Name = L"buttonAgregarFacturacion";
            this->buttonAgregarFacturacion->Size = System::Drawing::Size(164, 39);
            this->buttonAgregarFacturacion->TabIndex = 24;
            this->buttonAgregarFacturacion->Text = L"+";
            this->buttonAgregarFacturacion->UseVisualStyleBackColor = false;
            // 
            // labelCantidadFacturacion
            // 
            this->labelCantidadFacturacion->AutoSize = true;
            this->labelCantidadFacturacion->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->labelCantidadFacturacion->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelCantidadFacturacion->Location = System::Drawing::Point(429, 79);
            this->labelCantidadFacturacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelCantidadFacturacion->Name = L"labelCantidadFacturacion";
            this->labelCantidadFacturacion->Size = System::Drawing::Size(88, 22);
            this->labelCantidadFacturacion->TabIndex = 23;
            this->labelCantidadFacturacion->Text = L"Cantidad";
            // 
            // labelProducto
            // 
            this->labelProducto->AutoSize = true;
            this->labelProducto->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelProducto->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelProducto->Location = System::Drawing::Point(11, 140);
            this->labelProducto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelProducto->Name = L"labelProducto";
            this->labelProducto->Size = System::Drawing::Size(89, 22);
            this->labelProducto->TabIndex = 21;
            this->labelProducto->Text = L"Producto";
            // 
            // labelPrecioFacturacion
            // 
            this->labelPrecioFacturacion->AutoSize = true;
            this->labelPrecioFacturacion->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPrecioFacturacion->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelPrecioFacturacion->Location = System::Drawing::Point(429, 18);
            this->labelPrecioFacturacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelPrecioFacturacion->Name = L"labelPrecioFacturacion";
            this->labelPrecioFacturacion->Size = System::Drawing::Size(66, 22);
            this->labelPrecioFacturacion->TabIndex = 19;
            this->labelPrecioFacturacion->Text = L"Precio";
            // 
            // labelIdEmpleado
            // 
            this->labelIdEmpleado->AutoSize = true;
            this->labelIdEmpleado->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelIdEmpleado->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelIdEmpleado->Location = System::Drawing::Point(11, 79);
            this->labelIdEmpleado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelIdEmpleado->Name = L"labelIdEmpleado";
            this->labelIdEmpleado->Size = System::Drawing::Size(124, 22);
            this->labelIdEmpleado->TabIndex = 17;
            this->labelIdEmpleado->Text = L"ID Empleado";
            // 
            // labelIdCliente
            // 
            this->labelIdCliente->AutoSize = true;
            this->labelIdCliente->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelIdCliente->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelIdCliente->Location = System::Drawing::Point(11, 17);
            this->labelIdCliente->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelIdCliente->Name = L"labelIdCliente";
            this->labelIdCliente->Size = System::Drawing::Size(96, 22);
            this->labelIdCliente->TabIndex = 15;
            this->labelIdCliente->Text = L"ID Cliente";
            // 
            // tabStock
            // 
            this->tabStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->tabStock->Controls->Add(this->dataGridStock);
            this->tabStock->Controls->Add(this->inputNombre);
            this->tabStock->Controls->Add(this->inputPrecio);
            this->tabStock->Controls->Add(this->inputCantidad);
            this->tabStock->Controls->Add(this->inputIdProducto);
            this->tabStock->Controls->Add(this->buttonEliminar);
            this->tabStock->Controls->Add(this->buttonAgregar);
            this->tabStock->Controls->Add(this->labelCantidad);
            this->tabStock->Controls->Add(this->labelNombre);
            this->tabStock->Controls->Add(this->labelPrecio);
            this->tabStock->Controls->Add(this->labelIdProducto);
            this->tabStock->Location = System::Drawing::Point(4, 25);
            this->tabStock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabStock->Name = L"tabStock";
            this->tabStock->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabStock->Size = System::Drawing::Size(800, 520);
            this->tabStock->TabIndex = 0;
            this->tabStock->Text = L"Stock";
            // 
            // dataGridStock
            // 
            this->dataGridStock->AllowUserToAddRows = false;
            this->dataGridStock->AllowUserToDeleteRows = false;
            this->dataGridStock->AllowUserToResizeRows = false;
            this->dataGridStock->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridStock->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->dataGridStock->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->dataGridStock->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridStock->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
            this->dataGridStock->ColumnHeadersHeight = 30;
            this->dataGridStock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4
            });
            this->dataGridStock->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->dataGridStock->EnableHeadersVisualStyles = false;
            this->dataGridStock->GridColor = System::Drawing::SystemColors::Control;
            this->dataGridStock->Location = System::Drawing::Point(3, 274);
            this->dataGridStock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridStock->Name = L"dataGridStock";
            this->dataGridStock->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->dataGridStock->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
            dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridStock->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
            this->dataGridStock->RowHeadersWidth = 51;
            this->dataGridStock->RowTemplate->Height = 24;
            this->dataGridStock->Size = System::Drawing::Size(794, 244);
            this->dataGridStock->TabIndex = 23;
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"ID Producto";
            this->Column1->MinimumWidth = 6;
            this->Column1->Name = L"Column1";
            this->Column1->ReadOnly = true;
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"Nombre";
            this->Column2->MinimumWidth = 6;
            this->Column2->Name = L"Column2";
            this->Column2->ReadOnly = true;
            // 
            // Column3
            // 
            this->Column3->HeaderText = L"Precio";
            this->Column3->MinimumWidth = 6;
            this->Column3->Name = L"Column3";
            this->Column3->ReadOnly = true;
            // 
            // Column4
            // 
            this->Column4->HeaderText = L"Cantidad";
            this->Column4->MinimumWidth = 6;
            this->Column4->Name = L"Column4";
            this->Column4->ReadOnly = true;
            // 
            // inputNombre
            // 
            this->inputNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputNombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputNombre->ForeColor = System::Drawing::SystemColors::Window;
            this->inputNombre->Location = System::Drawing::Point(13, 118);
            this->inputNombre->Margin = System::Windows::Forms::Padding(4);
            this->inputNombre->Name = L"inputNombre";
            this->inputNombre->Size = System::Drawing::Size(353, 30);
            this->inputNombre->TabIndex = 13;
            // 
            // inputPrecio
            // 
            this->inputPrecio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputPrecio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputPrecio->ForeColor = System::Drawing::SystemColors::Window;
            this->inputPrecio->Location = System::Drawing::Point(433, 48);
            this->inputPrecio->Margin = System::Windows::Forms::Padding(4);
            this->inputPrecio->Name = L"inputPrecio";
            this->inputPrecio->Size = System::Drawing::Size(353, 30);
            this->inputPrecio->TabIndex = 14;
            // 
            // inputCantidad
            // 
            this->inputCantidad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputCantidad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputCantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputCantidad->ForeColor = System::Drawing::SystemColors::Window;
            this->inputCantidad->Location = System::Drawing::Point(433, 118);
            this->inputCantidad->Margin = System::Windows::Forms::Padding(4);
            this->inputCantidad->Name = L"inputCantidad";
            this->inputCantidad->Size = System::Drawing::Size(353, 30);
            this->inputCantidad->TabIndex = 15;
            // 
            // inputIdProducto
            // 
            this->inputIdProducto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->inputIdProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->inputIdProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputIdProducto->ForeColor = System::Drawing::SystemColors::Window;
            this->inputIdProducto->Location = System::Drawing::Point(13, 48);
            this->inputIdProducto->Margin = System::Windows::Forms::Padding(4);
            this->inputIdProducto->Name = L"inputIdProducto";
            this->inputIdProducto->Size = System::Drawing::Size(353, 30);
            this->inputIdProducto->TabIndex = 12;
            // 
            // buttonEliminar
            // 
            this->buttonEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
                static_cast<System::Int32>(static_cast<System::Byte>(23)));
            this->buttonEliminar->FlatAppearance->BorderSize = 0;
            this->buttonEliminar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->buttonEliminar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
                static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
            this->buttonEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonEliminar->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonEliminar->Location = System::Drawing::Point(433, 206);
            this->buttonEliminar->Margin = System::Windows::Forms::Padding(4);
            this->buttonEliminar->Name = L"buttonEliminar";
            this->buttonEliminar->Size = System::Drawing::Size(353, 39);
            this->buttonEliminar->TabIndex = 22;
            this->buttonEliminar->Text = L"-";
            this->buttonEliminar->UseVisualStyleBackColor = false;
            // 
            // buttonAgregar
            // 
            this->buttonAgregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
                static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->buttonAgregar->FlatAppearance->BorderSize = 0;
            this->buttonAgregar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
            this->buttonAgregar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
            this->buttonAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAgregar->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonAgregar->Location = System::Drawing::Point(13, 206);
            this->buttonAgregar->Margin = System::Windows::Forms::Padding(4);
            this->buttonAgregar->Name = L"buttonAgregar";
            this->buttonAgregar->Size = System::Drawing::Size(353, 39);
            this->buttonAgregar->TabIndex = 21;
            this->buttonAgregar->Text = L"+";
            this->buttonAgregar->UseVisualStyleBackColor = false;
            // 
            // labelCantidad
            // 
            this->labelCantidad->AutoSize = true;
            this->labelCantidad->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelCantidad->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelCantidad->Location = System::Drawing::Point(429, 92);
            this->labelCantidad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelCantidad->Name = L"labelCantidad";
            this->labelCantidad->Size = System::Drawing::Size(88, 22);
            this->labelCantidad->TabIndex = 19;
            this->labelCantidad->Text = L"Cantidad";
            // 
            // labelNombre
            // 
            this->labelNombre->AutoSize = true;
            this->labelNombre->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNombre->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelNombre->Location = System::Drawing::Point(9, 92);
            this->labelNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelNombre->Name = L"labelNombre";
            this->labelNombre->Size = System::Drawing::Size(79, 22);
            this->labelNombre->TabIndex = 17;
            this->labelNombre->Text = L"Nombre";
            // 
            // labelPrecio
            // 
            this->labelPrecio->AutoSize = true;
            this->labelPrecio->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPrecio->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelPrecio->Location = System::Drawing::Point(429, 22);
            this->labelPrecio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelPrecio->Name = L"labelPrecio";
            this->labelPrecio->Size = System::Drawing::Size(66, 22);
            this->labelPrecio->TabIndex = 15;
            this->labelPrecio->Text = L"Precio";
            // 
            // labelIdProducto
            // 
            this->labelIdProducto->AutoSize = true;
            this->labelIdProducto->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelIdProducto->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->labelIdProducto->Location = System::Drawing::Point(9, 22);
            this->labelIdProducto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelIdProducto->Name = L"labelIdProducto";
            this->labelIdProducto->Size = System::Drawing::Size(115, 22);
            this->labelIdProducto->TabIndex = 13;
            this->labelIdProducto->Text = L"ID Producto";
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabStock);
            this->tabControl1->Controls->Add(this->tabFacturacion);
            this->tabControl1->Controls->Add(this->tabClientes);
            this->tabControl1->Controls->Add(this->tabEmpleado);
            this->tabControl1->Controls->Add(this->tabProveedores);
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabControl1->Multiline = true;
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(808, 549);
            this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
            this->tabControl1->TabIndex = 0;
            // 
            // tabEmpleado
            // 
            this->tabEmpleado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->tabEmpleado->Controls->Add(this->dataGridEmpleado);
            this->tabEmpleado->Controls->Add(this->buttonEliminarEmpleado);
            this->tabEmpleado->Controls->Add(this->buttonAgregarEmpleado);
            this->tabEmpleado->Controls->Add(this->label8);
            this->tabEmpleado->Controls->Add(this->textBox5);
            this->tabEmpleado->Controls->Add(this->label9);
            this->tabEmpleado->Controls->Add(this->textBox6);
            this->tabEmpleado->Controls->Add(this->label10);
            this->tabEmpleado->Controls->Add(this->textBox7);
            this->tabEmpleado->Controls->Add(this->label11);
            this->tabEmpleado->Controls->Add(this->textBox8);
            this->tabEmpleado->Location = System::Drawing::Point(4, 25);
            this->tabEmpleado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabEmpleado->Name = L"tabEmpleado";
            this->tabEmpleado->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabEmpleado->Size = System::Drawing::Size(800, 520);
            this->tabEmpleado->TabIndex = 6;
            this->tabEmpleado->Text = L"Empleado";
            // 
            // dataGridEmpleado
            // 
            this->dataGridEmpleado->AllowUserToAddRows = false;
            this->dataGridEmpleado->AllowUserToDeleteRows = false;
            this->dataGridEmpleado->AllowUserToResizeRows = false;
            this->dataGridEmpleado->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridEmpleado->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->dataGridEmpleado->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->dataGridEmpleado->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridEmpleado->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
            this->dataGridEmpleado->ColumnHeadersHeight = 30;
            this->dataGridEmpleado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->dataGridViewTextBoxColumn5,
                    this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
            });
            this->dataGridEmpleado->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->dataGridEmpleado->EnableHeadersVisualStyles = false;
            this->dataGridEmpleado->GridColor = System::Drawing::SystemColors::Control;
            this->dataGridEmpleado->Location = System::Drawing::Point(3, 274);
            this->dataGridEmpleado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridEmpleado->Name = L"dataGridEmpleado";
            this->dataGridEmpleado->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->dataGridEmpleado->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
            dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridEmpleado->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
            this->dataGridEmpleado->RowHeadersWidth = 51;
            this->dataGridEmpleado->RowTemplate->Height = 24;
            this->dataGridEmpleado->Size = System::Drawing::Size(794, 244);
            this->dataGridEmpleado->TabIndex = 23;
            // 
            // dataGridViewTextBoxColumn5
            // 
            this->dataGridViewTextBoxColumn5->HeaderText = L"ID Empleado";
            this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
            this->dataGridViewTextBoxColumn5->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn6
            // 
            this->dataGridViewTextBoxColumn6->HeaderText = L"Nombre";
            this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
            this->dataGridViewTextBoxColumn6->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn7
            // 
            this->dataGridViewTextBoxColumn7->HeaderText = L"Apellido";
            this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
            this->dataGridViewTextBoxColumn7->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn8
            // 
            this->dataGridViewTextBoxColumn8->HeaderText = L"DNI";
            this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
            this->dataGridViewTextBoxColumn8->ReadOnly = true;
            // 
            // buttonEliminarEmpleado
            // 
            this->buttonEliminarEmpleado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
                static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
            this->buttonEliminarEmpleado->FlatAppearance->BorderSize = 0;
            this->buttonEliminarEmpleado->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->buttonEliminarEmpleado->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
                static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
            this->buttonEliminarEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonEliminarEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonEliminarEmpleado->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonEliminarEmpleado->Location = System::Drawing::Point(433, 206);
            this->buttonEliminarEmpleado->Margin = System::Windows::Forms::Padding(4);
            this->buttonEliminarEmpleado->Name = L"buttonEliminarEmpleado";
            this->buttonEliminarEmpleado->Size = System::Drawing::Size(353, 39);
            this->buttonEliminarEmpleado->TabIndex = 22;
            this->buttonEliminarEmpleado->Text = L"-";
            this->buttonEliminarEmpleado->UseVisualStyleBackColor = false;
            // 
            // buttonAgregarEmpleado
            // 
            this->buttonAgregarEmpleado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->buttonAgregarEmpleado->FlatAppearance->BorderSize = 0;
            this->buttonAgregarEmpleado->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
            this->buttonAgregarEmpleado->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
            this->buttonAgregarEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonAgregarEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAgregarEmpleado->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonAgregarEmpleado->Location = System::Drawing::Point(13, 206);
            this->buttonAgregarEmpleado->Margin = System::Windows::Forms::Padding(4);
            this->buttonAgregarEmpleado->Name = L"buttonAgregarEmpleado";
            this->buttonAgregarEmpleado->Size = System::Drawing::Size(353, 39);
            this->buttonAgregarEmpleado->TabIndex = 21;
            this->buttonAgregarEmpleado->Text = L"+";
            this->buttonAgregarEmpleado->UseVisualStyleBackColor = false;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label8->Location = System::Drawing::Point(429, 92);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(79, 22);
            this->label8->TabIndex = 19;
            this->label8->Text = L"Apellido";
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox5->Location = System::Drawing::Point(13, 118);
            this->textBox5->Margin = System::Windows::Forms::Padding(4);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(353, 30);
            this->textBox5->TabIndex = 13;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label9->Location = System::Drawing::Point(9, 92);
            this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(43, 22);
            this->label9->TabIndex = 17;
            this->label9->Text = L"DNI";
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox6->Location = System::Drawing::Point(433, 48);
            this->textBox6->Margin = System::Windows::Forms::Padding(4);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(353, 30);
            this->textBox6->TabIndex = 14;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label10->Location = System::Drawing::Point(429, 22);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(79, 22);
            this->label10->TabIndex = 15;
            this->label10->Text = L"Nombre";
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox7->Location = System::Drawing::Point(433, 118);
            this->textBox7->Margin = System::Windows::Forms::Padding(4);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(353, 30);
            this->textBox7->TabIndex = 15;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label11->Location = System::Drawing::Point(9, 22);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(124, 22);
            this->label11->TabIndex = 13;
            this->label11->Text = L"ID Empleado";
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox8->Location = System::Drawing::Point(13, 48);
            this->textBox8->Margin = System::Windows::Forms::Padding(4);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(353, 30);
            this->textBox8->TabIndex = 12;
            // 
            // tabProveedores
            // 
            this->tabProveedores->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->tabProveedores->Controls->Add(this->dataGridProveedores);
            this->tabProveedores->Controls->Add(this->buttonEliminarProveedores);
            this->tabProveedores->Controls->Add(this->buttonAgregarProveedores);
            this->tabProveedores->Controls->Add(this->label12);
            this->tabProveedores->Controls->Add(this->textBox9);
            this->tabProveedores->Controls->Add(this->label13);
            this->tabProveedores->Controls->Add(this->textBox10);
            this->tabProveedores->Controls->Add(this->label14);
            this->tabProveedores->Controls->Add(this->textBox11);
            this->tabProveedores->Controls->Add(this->label15);
            this->tabProveedores->Controls->Add(this->textBox12);
            this->tabProveedores->Location = System::Drawing::Point(4, 25);
            this->tabProveedores->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabProveedores->Name = L"tabProveedores";
            this->tabProveedores->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabProveedores->Size = System::Drawing::Size(800, 520);
            this->tabProveedores->TabIndex = 7;
            this->tabProveedores->Text = L"Proveedores";
            // 
            // dataGridProveedores
            // 
            this->dataGridProveedores->AllowUserToAddRows = false;
            this->dataGridProveedores->AllowUserToDeleteRows = false;
            this->dataGridProveedores->AllowUserToResizeRows = false;
            this->dataGridProveedores->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridProveedores->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->dataGridProveedores->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->dataGridProveedores->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridProveedores->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
            this->dataGridProveedores->ColumnHeadersHeight = 30;
            this->dataGridProveedores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->dataGridViewTextBoxColumn9,
                    this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
            });
            this->dataGridProveedores->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->dataGridProveedores->EnableHeadersVisualStyles = false;
            this->dataGridProveedores->GridColor = System::Drawing::SystemColors::Control;
            this->dataGridProveedores->Location = System::Drawing::Point(3, 274);
            this->dataGridProveedores->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridProveedores->Name = L"dataGridProveedores";
            this->dataGridProveedores->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->dataGridProveedores->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
            dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridProveedores->RowHeadersDefaultCellStyle = dataGridViewCellStyle10;
            this->dataGridProveedores->RowHeadersWidth = 51;
            this->dataGridProveedores->RowTemplate->Height = 24;
            this->dataGridProveedores->Size = System::Drawing::Size(794, 244);
            this->dataGridProveedores->TabIndex = 23;
            // 
            // dataGridViewTextBoxColumn9
            // 
            this->dataGridViewTextBoxColumn9->HeaderText = L"ID Proveedor";
            this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
            this->dataGridViewTextBoxColumn9->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn10
            // 
            this->dataGridViewTextBoxColumn10->HeaderText = L"Nombre";
            this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
            this->dataGridViewTextBoxColumn10->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn11
            // 
            this->dataGridViewTextBoxColumn11->HeaderText = L"Tipo";
            this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
            this->dataGridViewTextBoxColumn11->ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn12
            // 
            this->dataGridViewTextBoxColumn12->HeaderText = L"Telefono";
            this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
            this->dataGridViewTextBoxColumn12->ReadOnly = true;
            // 
            // buttonEliminarProveedores
            // 
            this->buttonEliminarProveedores->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
                static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
            this->buttonEliminarProveedores->FlatAppearance->BorderSize = 0;
            this->buttonEliminarProveedores->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->buttonEliminarProveedores->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
                static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
            this->buttonEliminarProveedores->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonEliminarProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonEliminarProveedores->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonEliminarProveedores->Location = System::Drawing::Point(433, 206);
            this->buttonEliminarProveedores->Margin = System::Windows::Forms::Padding(4);
            this->buttonEliminarProveedores->Name = L"buttonEliminarProveedores";
            this->buttonEliminarProveedores->Size = System::Drawing::Size(353, 39);
            this->buttonEliminarProveedores->TabIndex = 22;
            this->buttonEliminarProveedores->Text = L"-";
            this->buttonEliminarProveedores->UseVisualStyleBackColor = false;
            // 
            // buttonAgregarProveedores
            // 
            this->buttonAgregarProveedores->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->buttonAgregarProveedores->FlatAppearance->BorderSize = 0;
            this->buttonAgregarProveedores->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
            this->buttonAgregarProveedores->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
            this->buttonAgregarProveedores->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonAgregarProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonAgregarProveedores->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->buttonAgregarProveedores->Location = System::Drawing::Point(13, 206);
            this->buttonAgregarProveedores->Margin = System::Windows::Forms::Padding(4);
            this->buttonAgregarProveedores->Name = L"buttonAgregarProveedores";
            this->buttonAgregarProveedores->Size = System::Drawing::Size(353, 39);
            this->buttonAgregarProveedores->TabIndex = 21;
            this->buttonAgregarProveedores->Text = L"+";
            this->buttonAgregarProveedores->UseVisualStyleBackColor = false;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label12->Location = System::Drawing::Point(429, 92);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(84, 22);
            this->label12->TabIndex = 19;
            this->label12->Text = L"Telefono";
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox9->Location = System::Drawing::Point(13, 118);
            this->textBox9->Margin = System::Windows::Forms::Padding(4);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(353, 30);
            this->textBox9->TabIndex = 13;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label13->Location = System::Drawing::Point(9, 92);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(206, 22);
            this->label13->TabIndex = 17;
            this->label13->Text = L"Nombre del proveedor";
            // 
            // textBox10
            // 
            this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox10->Location = System::Drawing::Point(433, 48);
            this->textBox10->Margin = System::Windows::Forms::Padding(4);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(353, 30);
            this->textBox10->TabIndex = 14;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label14->Location = System::Drawing::Point(429, 22);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(170, 22);
            this->label14->TabIndex = 15;
            this->label14->Text = L"Tipo de proveedor";
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox11->Location = System::Drawing::Point(433, 118);
            this->textBox11->Margin = System::Windows::Forms::Padding(4);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(353, 30);
            this->textBox11->TabIndex = 15;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label15->Location = System::Drawing::Point(9, 22);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(127, 22);
            this->label15->TabIndex = 13;
            this->label15->Text = L"ID Proveedor";
            // 
            // textBox12
            // 
            this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->ForeColor = System::Drawing::SystemColors::Window;
            this->textBox12->Location = System::Drawing::Point(13, 48);
            this->textBox12->Margin = System::Windows::Forms::Padding(4);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(353, 30);
            this->textBox12->TabIndex = 12;
            // 
            // FormMain
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->ClientSize = System::Drawing::Size(808, 549);
            this->Controls->Add(this->tabControl1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"FormMain";
            this->Text = L"FormMain";
            this->tabClientes->ResumeLayout(false);
            this->tabClientes->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridClientes))->EndInit();
            this->tabFacturacion->ResumeLayout(false);
            this->tabFacturacion->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFacturacion))->EndInit();
            this->tabStock->ResumeLayout(false);
            this->tabStock->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->EndInit();
            this->tabControl1->ResumeLayout(false);
            this->tabEmpleado->ResumeLayout(false);
            this->tabEmpleado->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEmpleado))->EndInit();
            this->tabProveedores->ResumeLayout(false);
            this->tabProveedores->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridProveedores))->EndInit();
            this->ResumeLayout(false);

        }

	void tabControl_DrawItem(Object^ sender, DrawItemEventArgs^ e)
		{
			// Get the TabControl instance
			TabControl^ tabControl = (TabControl^)sender;

			// Get the TabPage
			TabPage^ tabPage = tabControl->TabPages[e->Index];

			// Set the color for the background and text
			Color backColor = Color::LightBlue;
			Color textColor = Color::Black;

			// Fill the background of the tab
			e->Graphics->FillRectangle(gcnew SolidBrush(backColor), e->Bounds);

			// Draw the tab text
			TextRenderer::DrawText(e->Graphics, tabPage->Text, e->Font, e->Bounds, textColor);

			// Draw a border around the tab if desired
			e->Graphics->DrawRectangle(Pens::Gray, e->Bounds);
		}
#pragma endregion
	
};
}
