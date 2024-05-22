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

	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabStock);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(808, 453);
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
			this->tabStock->Location = System::Drawing::Point(4, 25);
			this->tabStock->Name = L"tabStock";
			this->tabStock->Padding = System::Windows::Forms::Padding(3);
			this->tabStock->Size = System::Drawing::Size(800, 424);
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
			this->dataGridStock->Location = System::Drawing::Point(3, 252);
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
			this->dataGridStock->Size = System::Drawing::Size(794, 169);
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
			this->inputNombre->TabIndex = 18;
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
			this->inputPrecio->TabIndex = 16;
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
			this->inputCantidad->TabIndex = 14;
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
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(800, 424);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(808, 453);
			this->Controls->Add(this->tabControl1);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->tabControl1->ResumeLayout(false);
			this->tabStock->ResumeLayout(false);
			this->tabStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->EndInit();
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
