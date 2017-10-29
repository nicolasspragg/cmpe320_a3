#pragma once
#include "Fraction_DLL\Fraction_DLL.h"
namespace GUIPart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  LeftFractionTopBox;
	private: System::Windows::Forms::TextBox^  LeftFractionBottomBox;
	private: System::Windows::Forms::TextBox^  RightFractionTopBox;
	private: System::Windows::Forms::TextBox^  RighFractionBottomBox;
	private: System::Windows::Forms::TextBox^  AnsTopBox;
	private: System::Windows::Forms::TextBox^  AnsBottomBox;
	private: System::Windows::Forms::Button^  ADDBUTTON;
	private: System::Windows::Forms::Button^  SUBTRACTBUTTON;
	private: System::Windows::Forms::Button^  MULTBUTTON;
	private: System::Windows::Forms::Button^  DIVISIONBUTTON;
	private: System::Windows::Forms::Button^  EQUALSBUTTON;
	protected:

	protected:










	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LeftFractionTopBox = (gcnew System::Windows::Forms::TextBox());
			this->LeftFractionBottomBox = (gcnew System::Windows::Forms::TextBox());
			this->RightFractionTopBox = (gcnew System::Windows::Forms::TextBox());
			this->RighFractionBottomBox = (gcnew System::Windows::Forms::TextBox());
			this->AnsTopBox = (gcnew System::Windows::Forms::TextBox());
			this->AnsBottomBox = (gcnew System::Windows::Forms::TextBox());
			this->ADDBUTTON = (gcnew System::Windows::Forms::Button());
			this->SUBTRACTBUTTON = (gcnew System::Windows::Forms::Button());
			this->MULTBUTTON = (gcnew System::Windows::Forms::Button());
			this->DIVISIONBUTTON = (gcnew System::Windows::Forms::Button());
			this->EQUALSBUTTON = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LeftFractionTopBox
			// 
			this->LeftFractionTopBox->Location = System::Drawing::Point(55, 88);
			this->LeftFractionTopBox->Name = L"LeftFractionTopBox";
			this->LeftFractionTopBox->Size = System::Drawing::Size(100, 20);
			this->LeftFractionTopBox->TabIndex = 0;
			// 
			// LeftFractionBottomBox
			// 
			this->LeftFractionBottomBox->Location = System::Drawing::Point(55, 143);
			this->LeftFractionBottomBox->Name = L"LeftFractionBottomBox";
			this->LeftFractionBottomBox->Size = System::Drawing::Size(100, 20);
			this->LeftFractionBottomBox->TabIndex = 1;
			// 
			// RightFractionTopBox
			// 
			this->RightFractionTopBox->Location = System::Drawing::Point(224, 88);
			this->RightFractionTopBox->Name = L"RightFractionTopBox";
			this->RightFractionTopBox->Size = System::Drawing::Size(100, 20);
			this->RightFractionTopBox->TabIndex = 2;
			// 
			// RighFractionBottomBox
			// 
			this->RighFractionBottomBox->Location = System::Drawing::Point(224, 143);
			this->RighFractionBottomBox->Name = L"RighFractionBottomBox";
			this->RighFractionBottomBox->Size = System::Drawing::Size(100, 20);
			this->RighFractionBottomBox->TabIndex = 3;
			// 
			// AnsTopBox
			// 
			this->AnsTopBox->Location = System::Drawing::Point(409, 88);
			this->AnsTopBox->Name = L"AnsTopBox";
			this->AnsTopBox->Size = System::Drawing::Size(100, 20);
			this->AnsTopBox->TabIndex = 4;
			// 
			// AnsBottomBox
			// 
			this->AnsBottomBox->Location = System::Drawing::Point(409, 143);
			this->AnsBottomBox->Name = L"AnsBottomBox";
			this->AnsBottomBox->Size = System::Drawing::Size(100, 20);
			this->AnsBottomBox->TabIndex = 5;
			// 
			// ADDBUTTON
			// 
			this->ADDBUTTON->Location = System::Drawing::Point(55, 220);
			this->ADDBUTTON->Name = L"ADDBUTTON";
			this->ADDBUTTON->Size = System::Drawing::Size(75, 23);
			this->ADDBUTTON->TabIndex = 6;
			this->ADDBUTTON->Text = L"+";
			this->ADDBUTTON->UseVisualStyleBackColor = true;
			this->ADDBUTTON->Click += gcnew System::EventHandler(this, &GUI::ADDBUTTON_Click);
			// 
			// SUBTRACTBUTTON
			// 
			this->SUBTRACTBUTTON->Location = System::Drawing::Point(136, 220);
			this->SUBTRACTBUTTON->Name = L"SUBTRACTBUTTON";
			this->SUBTRACTBUTTON->Size = System::Drawing::Size(75, 23);
			this->SUBTRACTBUTTON->TabIndex = 7;
			this->SUBTRACTBUTTON->Text = L"-";
			this->SUBTRACTBUTTON->UseVisualStyleBackColor = true;
			// 
			// MULTBUTTON
			// 
			this->MULTBUTTON->Location = System::Drawing::Point(217, 220);
			this->MULTBUTTON->Name = L"MULTBUTTON";
			this->MULTBUTTON->Size = System::Drawing::Size(75, 23);
			this->MULTBUTTON->TabIndex = 8;
			this->MULTBUTTON->Text = L"*";
			this->MULTBUTTON->UseVisualStyleBackColor = true;
			// 
			// DIVISIONBUTTON
			// 
			this->DIVISIONBUTTON->Location = System::Drawing::Point(298, 220);
			this->DIVISIONBUTTON->Name = L"DIVISIONBUTTON";
			this->DIVISIONBUTTON->Size = System::Drawing::Size(75, 23);
			this->DIVISIONBUTTON->TabIndex = 9;
			this->DIVISIONBUTTON->Text = L"/";
			this->DIVISIONBUTTON->UseVisualStyleBackColor = true;
			// 
			// EQUALSBUTTON
			// 
			this->EQUALSBUTTON->Location = System::Drawing::Point(379, 220);
			this->EQUALSBUTTON->Name = L"EQUALSBUTTON";
			this->EQUALSBUTTON->Size = System::Drawing::Size(75, 23);
			this->EQUALSBUTTON->TabIndex = 10;
			this->EQUALSBUTTON->Text = L"=";
			this->EQUALSBUTTON->UseVisualStyleBackColor = true;
			this->EQUALSBUTTON->Click += gcnew System::EventHandler(this, &GUI::EQUALSBUTTON_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(477, 213);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 36);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Close";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Enter in fractions, then click on the operation you want, then equals";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 13;
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 327);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->EQUALSBUTTON);
			this->Controls->Add(this->DIVISIONBUTTON);
			this->Controls->Add(this->MULTBUTTON);
			this->Controls->Add(this->SUBTRACTBUTTON);
			this->Controls->Add(this->ADDBUTTON);
			this->Controls->Add(this->AnsBottomBox);
			this->Controls->Add(this->AnsTopBox);
			this->Controls->Add(this->RighFractionBottomBox);
			this->Controls->Add(this->RightFractionTopBox);
			this->Controls->Add(this->LeftFractionBottomBox);
			this->Controls->Add(this->LeftFractionTopBox);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int* temp;

	private: System::Void ADDBUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ a0s = LeftFractionTopBox->Text;
		String^ a1s = LeftFractionBottomBox->Text;
		String^ a2s = RightFractionTopBox->Text;
		String^ a3s = RighFractionBottomBox->Text;
		if (a0s =="" || a1s == "" || a2s ==  "" || a3s == "") {
			//update the warning label
			label2->Text = "Please fill in all fraction fields";
		} 
		else {
			label2->Text = ""; 
		}
			int a0 = Int64::Parse(LeftFractionTopBox->Text);
			int a1 = Int64::Parse(LeftFractionBottomBox->Text);
			int a2 = Int64::Parse(RightFractionTopBox->Text);
			int a3 = Int64::Parse(RighFractionBottomBox->Text);

			temp = addFrac(a0, a1, a2, a3);


			

	}
	private: System::Void EQUALSBUTTON_Click(System::Object^  sender, System::EventArgs^  e) {

		AnsTopBox->Text = Convert::ToString(temp[0]);
		AnsBottomBox->Text = Convert::ToString(temp[1]);

	}
};
};