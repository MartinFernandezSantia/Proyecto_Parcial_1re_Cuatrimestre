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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabStock;
	private: System::Windows::Forms::TabPage^ tabFacturacion;

	protected:


	private: System::Windows::Forms::Label^ labelIdProducto;
	public: System::Windows::Forms::TextBox^ inputIdProducto;
	private:



	private: System::Windows::Forms::Label^ labelCantidad;
	public:

	public: System::Windows::Forms::TextBox^ inputNombre;
	private:

	private: System::Windows::Forms::Label^ labelNombre;
	public: System::Windows::Forms::TextBox^ inputPrecio;
	private:
	public:
	private:

	public:

	private: System::Windows::Forms::Label^ labelPrecio;
	public: System::Windows::Forms::TextBox^ inputCantidad;
	public: System::Windows::Forms::Button^ buttonEliminar;

	public: System::Windows::Forms::Button^ buttonAgregar;
	public: System::Windows::Forms::DataGridView^ dataGridStock;



	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ labelIdEmpleado;
	public: System::Windows::Forms::TextBox^ inputIdEmpleado;
	private:


	private: System::Windows::Forms::Label^ labelIdCliente;
	public: System::Windows::Forms::TextBox^ inputIdCliente;
	private: System::Windows::Forms::Label^ labelCantidadFacturacion;
	public: System::Windows::Forms::TextBox^ inputCantidadFacturacion;
	private:
	public:
	private:
	public:
	private:

	public:


	public:

	private: System::Windows::Forms::Label^ labelProducto;
	public: System::Windows::Forms::TextBox^ inputProducto;
	private: System::Windows::Forms::Label^ labelPrecioFacturacion;
	public: System::Windows::Forms::TextBox^ inputPrecioFacturacion;
	public: System::Windows::Forms::Button^ buttonEliminarFacturacion;
	private:
	public:
	private:
	public:
	private:

	public:

	private:

	public:


	public: System::Windows::Forms::Button^ buttonAgregarFacturacion;
public: System::Windows::Forms::DataGridView^ dataGridFacturacion;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
public:
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::Label^ label1;
public: System::Windows::Forms::TextBox^ inputDescuento;
private: System::Windows::Forms::Label^ label3;
public: System::Windows::Forms::TextBox^ inputTotal;
private:
public:

private:
private: System::Windows::Forms::Label^ label2;
public:
public: System::Windows::Forms::TextBox^ inputSubtotal;
private:
public: System::Windows::Forms::Button^ buttonRegistrarse;
private:

private:

public:







public:




	private:
	private:

	private:
	public:
	private:

	public:

	private:
	private:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabStock = (gcnew System::Windows::Forms::TabPage());
			this->dataGridStock = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->labelCantidad = (gcnew System::Windows::Forms::Label());
			this->inputNombre = (gcnew System::Windows::Forms::TextBox());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->inputPrecio = (gcnew System::Windows::Forms::TextBox());
			this->labelPrecio = (gcnew System::Windows::Forms::Label());
			this->inputCantidad = (gcnew System::Windows::Forms::TextBox());
			this->labelIdProducto = (gcnew System::Windows::Forms::Label());
			this->inputIdProducto = (gcnew System::Windows::Forms::TextBox());
			this->tabFacturacion = (gcnew System::Windows::Forms::TabPage());
			this->buttonEliminarFacturacion = (gcnew System::Windows::Forms::Button());
			this->buttonAgregarFacturacion = (gcnew System::Windows::Forms::Button());
			this->labelCantidadFacturacion = (gcnew System::Windows::Forms::Label());
			this->inputCantidadFacturacion = (gcnew System::Windows::Forms::TextBox());
			this->labelProducto = (gcnew System::Windows::Forms::Label());
			this->inputProducto = (gcnew System::Windows::Forms::TextBox());
			this->labelPrecioFacturacion = (gcnew System::Windows::Forms::Label());
			this->inputPrecioFacturacion = (gcnew System::Windows::Forms::TextBox());
			this->labelIdEmpleado = (gcnew System::Windows::Forms::Label());
			this->inputIdEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->labelIdCliente = (gcnew System::Windows::Forms::Label());
			this->inputIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->dataGridFacturacion = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputDescuento = (gcnew System::Windows::Forms::TextBox());
			this->buttonRegistrarse = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->inputSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->inputTotal = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->BeginInit();
			this->tabFacturacion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFacturacion))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabStock);
			this->tabControl1->Controls->Add(this->tabFacturacion);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(606, 446);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// tabStock
			// 
			this->tabStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tabStock->Controls->Add(this->dataGridStock);
			this->tabStock->Controls->Add(this->buttonEliminar);
			this->tabStock->Controls->Add(this->buttonAgregar);
			this->tabStock->Controls->Add(this->labelCantidad);
			this->tabStock->Controls->Add(this->inputNombre);
			this->tabStock->Controls->Add(this->labelNombre);
			this->tabStock->Controls->Add(this->inputPrecio);
			this->tabStock->Controls->Add(this->labelPrecio);
			this->tabStock->Controls->Add(this->inputCantidad);
			this->tabStock->Controls->Add(this->labelIdProducto);
			this->tabStock->Controls->Add(this->inputIdProducto);
			this->tabStock->Location = System::Drawing::Point(4, 22);
			this->tabStock->Margin = System::Windows::Forms::Padding(2);
			this->tabStock->Name = L"tabStock";
			this->tabStock->Padding = System::Windows::Forms::Padding(2);
			this->tabStock->Size = System::Drawing::Size(598, 420);
			this->tabStock->TabIndex = 0;
			this->tabStock->Text = L"Stock";
			// 
			// dataGridStock
			// 
			this->dataGridStock->AllowUserToAddRows = false;
			this->dataGridStock->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridStock->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGridStock->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridStock->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridStock->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridStock->ColumnHeadersHeight = 30;
			this->dataGridStock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridStock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridStock->EnableHeadersVisualStyles = false;
			this->dataGridStock->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridStock->Location = System::Drawing::Point(2, 220);
			this->dataGridStock->Margin = System::Windows::Forms::Padding(2);
			this->dataGridStock->Name = L"dataGridStock";
			this->dataGridStock->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridStock->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridStock->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridStock->RowHeadersWidth = 51;
			this->dataGridStock->RowTemplate->Height = 24;
			this->dataGridStock->Size = System::Drawing::Size(594, 198);
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
			this->buttonEliminar->Location = System::Drawing::Point(325, 167);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(265, 32);
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
			this->buttonAgregar->Location = System::Drawing::Point(10, 167);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(265, 32);
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
			this->labelCantidad->Location = System::Drawing::Point(322, 75);
			this->labelCantidad->Name = L"labelCantidad";
			this->labelCantidad->Size = System::Drawing::Size(72, 17);
			this->labelCantidad->TabIndex = 19;
			this->labelCantidad->Text = L"Cantidad";
			// 
			// inputNombre
			// 
			this->inputNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputNombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputNombre->ForeColor = System::Drawing::SystemColors::Window;
			this->inputNombre->Location = System::Drawing::Point(10, 96);
			this->inputNombre->Name = L"inputNombre";
			this->inputNombre->Size = System::Drawing::Size(265, 26);
			this->inputNombre->TabIndex = 18;
			// 
			// labelNombre
			// 
			this->labelNombre->AutoSize = true;
			this->labelNombre->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombre->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNombre->Location = System::Drawing::Point(7, 75);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(64, 17);
			this->labelNombre->TabIndex = 17;
			this->labelNombre->Text = L"Nombre";
			// 
			// inputPrecio
			// 
			this->inputPrecio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputPrecio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputPrecio->ForeColor = System::Drawing::SystemColors::Window;
			this->inputPrecio->Location = System::Drawing::Point(325, 39);
			this->inputPrecio->Name = L"inputPrecio";
			this->inputPrecio->Size = System::Drawing::Size(265, 26);
			this->inputPrecio->TabIndex = 16;
			// 
			// labelPrecio
			// 
			this->labelPrecio->AutoSize = true;
			this->labelPrecio->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrecio->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelPrecio->Location = System::Drawing::Point(322, 18);
			this->labelPrecio->Name = L"labelPrecio";
			this->labelPrecio->Size = System::Drawing::Size(54, 17);
			this->labelPrecio->TabIndex = 15;
			this->labelPrecio->Text = L"Precio";
			// 
			// inputCantidad
			// 
			this->inputCantidad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputCantidad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputCantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputCantidad->ForeColor = System::Drawing::SystemColors::Window;
			this->inputCantidad->Location = System::Drawing::Point(325, 96);
			this->inputCantidad->Name = L"inputCantidad";
			this->inputCantidad->Size = System::Drawing::Size(265, 26);
			this->inputCantidad->TabIndex = 14;
			// 
			// labelIdProducto
			// 
			this->labelIdProducto->AutoSize = true;
			this->labelIdProducto->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIdProducto->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelIdProducto->Location = System::Drawing::Point(7, 18);
			this->labelIdProducto->Name = L"labelIdProducto";
			this->labelIdProducto->Size = System::Drawing::Size(90, 17);
			this->labelIdProducto->TabIndex = 13;
			this->labelIdProducto->Text = L"ID Producto";
			// 
			// inputIdProducto
			// 
			this->inputIdProducto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputIdProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputIdProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputIdProducto->ForeColor = System::Drawing::SystemColors::Window;
			this->inputIdProducto->Location = System::Drawing::Point(10, 39);
			this->inputIdProducto->Name = L"inputIdProducto";
			this->inputIdProducto->Size = System::Drawing::Size(265, 26);
			this->inputIdProducto->TabIndex = 12;
			// 
			// tabFacturacion
			// 
			this->tabFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tabFacturacion->Controls->Add(this->label3);
			this->tabFacturacion->Controls->Add(this->inputTotal);
			this->tabFacturacion->Controls->Add(this->label2);
			this->tabFacturacion->Controls->Add(this->inputSubtotal);
			this->tabFacturacion->Controls->Add(this->buttonRegistrarse);
			this->tabFacturacion->Controls->Add(this->label1);
			this->tabFacturacion->Controls->Add(this->inputDescuento);
			this->tabFacturacion->Controls->Add(this->dataGridFacturacion);
			this->tabFacturacion->Controls->Add(this->buttonEliminarFacturacion);
			this->tabFacturacion->Controls->Add(this->buttonAgregarFacturacion);
			this->tabFacturacion->Controls->Add(this->labelCantidadFacturacion);
			this->tabFacturacion->Controls->Add(this->inputCantidadFacturacion);
			this->tabFacturacion->Controls->Add(this->labelProducto);
			this->tabFacturacion->Controls->Add(this->inputProducto);
			this->tabFacturacion->Controls->Add(this->labelPrecioFacturacion);
			this->tabFacturacion->Controls->Add(this->inputPrecioFacturacion);
			this->tabFacturacion->Controls->Add(this->labelIdEmpleado);
			this->tabFacturacion->Controls->Add(this->inputIdEmpleado);
			this->tabFacturacion->Controls->Add(this->labelIdCliente);
			this->tabFacturacion->Controls->Add(this->inputIdCliente);
			this->tabFacturacion->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabFacturacion->Location = System::Drawing::Point(4, 22);
			this->tabFacturacion->Margin = System::Windows::Forms::Padding(2);
			this->tabFacturacion->Name = L"tabFacturacion";
			this->tabFacturacion->Padding = System::Windows::Forms::Padding(2);
			this->tabFacturacion->Size = System::Drawing::Size(598, 420);
			this->tabFacturacion->TabIndex = 1;
			this->tabFacturacion->Text = L"Facturacion";
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
			this->buttonEliminarFacturacion->Location = System::Drawing::Point(467, 131);
			this->buttonEliminarFacturacion->Name = L"buttonEliminarFacturacion";
			this->buttonEliminarFacturacion->Size = System::Drawing::Size(123, 32);
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
			this->buttonAgregarFacturacion->Location = System::Drawing::Point(325, 131);
			this->buttonAgregarFacturacion->Name = L"buttonAgregarFacturacion";
			this->buttonAgregarFacturacion->Size = System::Drawing::Size(123, 32);
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
			this->labelCantidadFacturacion->Location = System::Drawing::Point(322, 64);
			this->labelCantidadFacturacion->Name = L"labelCantidadFacturacion";
			this->labelCantidadFacturacion->Size = System::Drawing::Size(72, 17);
			this->labelCantidadFacturacion->TabIndex = 23;
			this->labelCantidadFacturacion->Text = L"Cantidad";
			// 
			// inputCantidadFacturacion
			// 
			this->inputCantidadFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputCantidadFacturacion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputCantidadFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inputCantidadFacturacion->ForeColor = System::Drawing::SystemColors::Window;
			this->inputCantidadFacturacion->Location = System::Drawing::Point(325, 85);
			this->inputCantidadFacturacion->Name = L"inputCantidadFacturacion";
			this->inputCantidadFacturacion->Size = System::Drawing::Size(265, 26);
			this->inputCantidadFacturacion->TabIndex = 22;
			// 
			// labelProducto
			// 
			this->labelProducto->AutoSize = true;
			this->labelProducto->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelProducto->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelProducto->Location = System::Drawing::Point(8, 114);
			this->labelProducto->Name = L"labelProducto";
			this->labelProducto->Size = System::Drawing::Size(71, 17);
			this->labelProducto->TabIndex = 21;
			this->labelProducto->Text = L"Producto";
			// 
			// inputProducto
			// 
			this->inputProducto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputProducto->ForeColor = System::Drawing::SystemColors::Window;
			this->inputProducto->Location = System::Drawing::Point(11, 135);
			this->inputProducto->Name = L"inputProducto";
			this->inputProducto->Size = System::Drawing::Size(265, 26);
			this->inputProducto->TabIndex = 20;
			// 
			// labelPrecioFacturacion
			// 
			this->labelPrecioFacturacion->AutoSize = true;
			this->labelPrecioFacturacion->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrecioFacturacion->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelPrecioFacturacion->Location = System::Drawing::Point(322, 15);
			this->labelPrecioFacturacion->Name = L"labelPrecioFacturacion";
			this->labelPrecioFacturacion->Size = System::Drawing::Size(54, 17);
			this->labelPrecioFacturacion->TabIndex = 19;
			this->labelPrecioFacturacion->Text = L"Precio";
			// 
			// inputPrecioFacturacion
			// 
			this->inputPrecioFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputPrecioFacturacion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputPrecioFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inputPrecioFacturacion->ForeColor = System::Drawing::SystemColors::Window;
			this->inputPrecioFacturacion->Location = System::Drawing::Point(325, 35);
			this->inputPrecioFacturacion->Name = L"inputPrecioFacturacion";
			this->inputPrecioFacturacion->Size = System::Drawing::Size(265, 26);
			this->inputPrecioFacturacion->TabIndex = 18;
			// 
			// labelIdEmpleado
			// 
			this->labelIdEmpleado->AutoSize = true;
			this->labelIdEmpleado->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIdEmpleado->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelIdEmpleado->Location = System::Drawing::Point(8, 64);
			this->labelIdEmpleado->Name = L"labelIdEmpleado";
			this->labelIdEmpleado->Size = System::Drawing::Size(99, 17);
			this->labelIdEmpleado->TabIndex = 17;
			this->labelIdEmpleado->Text = L"ID Empleado";
			// 
			// inputIdEmpleado
			// 
			this->inputIdEmpleado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputIdEmpleado->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputIdEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputIdEmpleado->ForeColor = System::Drawing::SystemColors::Window;
			this->inputIdEmpleado->Location = System::Drawing::Point(11, 85);
			this->inputIdEmpleado->Name = L"inputIdEmpleado";
			this->inputIdEmpleado->Size = System::Drawing::Size(265, 26);
			this->inputIdEmpleado->TabIndex = 16;
			// 
			// labelIdCliente
			// 
			this->labelIdCliente->AutoSize = true;
			this->labelIdCliente->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIdCliente->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelIdCliente->Location = System::Drawing::Point(8, 14);
			this->labelIdCliente->Name = L"labelIdCliente";
			this->labelIdCliente->Size = System::Drawing::Size(76, 17);
			this->labelIdCliente->TabIndex = 15;
			this->labelIdCliente->Text = L"ID Cliente";
			// 
			// inputIdCliente
			// 
			this->inputIdCliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputIdCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputIdCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputIdCliente->ForeColor = System::Drawing::SystemColors::Window;
			this->inputIdCliente->Location = System::Drawing::Point(11, 35);
			this->inputIdCliente->Name = L"inputIdCliente";
			this->inputIdCliente->Size = System::Drawing::Size(265, 26);
			this->inputIdCliente->TabIndex = 14;
			// 
			// dataGridFacturacion
			// 
			this->dataGridFacturacion->AllowUserToAddRows = false;
			this->dataGridFacturacion->AllowUserToDeleteRows = false;
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
			this->dataGridFacturacion->Location = System::Drawing::Point(11, 200);
			this->dataGridFacturacion->Margin = System::Windows::Forms::Padding(2);
			this->dataGridFacturacion->MultiSelect = false;
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
			this->dataGridFacturacion->Size = System::Drawing::Size(283, 213);
			this->dataGridFacturacion->TabIndex = 26;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Producto";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Precio";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Cantidad";
			this->Column7->Name = L"Column7";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(322, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 17);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Descuento";
			// 
			// inputDescuento
			// 
			this->inputDescuento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputDescuento->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputDescuento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputDescuento->ForeColor = System::Drawing::SystemColors::Window;
			this->inputDescuento->Location = System::Drawing::Point(325, 220);
			this->inputDescuento->Name = L"inputDescuento";
			this->inputDescuento->Size = System::Drawing::Size(149, 26);
			this->inputDescuento->TabIndex = 27;
			// 
			// buttonRegistrarse
			// 
			this->buttonRegistrarse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->buttonRegistrarse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonRegistrarse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRegistrarse->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->buttonRegistrarse->Location = System::Drawing::Point(497, 220);
			this->buttonRegistrarse->Name = L"buttonRegistrarse";
			this->buttonRegistrarse->Size = System::Drawing::Size(93, 26);
			this->buttonRegistrarse->TabIndex = 29;
			this->buttonRegistrarse->Text = L"Aplicar";
			this->buttonRegistrarse->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(322, 305);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Subtotal";
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
			this->inputSubtotal->Location = System::Drawing::Point(393, 301);
			this->inputSubtotal->Name = L"inputSubtotal";
			this->inputSubtotal->Size = System::Drawing::Size(197, 26);
			this->inputSubtotal->TabIndex = 30;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(347, 360);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
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
			this->inputTotal->Location = System::Drawing::Point(393, 356);
			this->inputTotal->Name = L"inputTotal";
			this->inputTotal->Size = System::Drawing::Size(197, 26);
			this->inputTotal->TabIndex = 32;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(606, 446);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->tabControl1->ResumeLayout(false);
			this->tabStock->ResumeLayout(false);
			this->tabStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->EndInit();
			this->tabFacturacion->ResumeLayout(false);
			this->tabFacturacion->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFacturacion))->EndInit();
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
