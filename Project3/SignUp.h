#pragma once
#include "UserData.h"
#include "userDescData.h"
#include "SignIn.h"
#include "global.h"
#include "SqlRepo.h"
#include "QueryFilter.h"
#include <string>
#include <iostream>
#include <msclr/gcroot.h>

namespace Project3 {

	using namespace System;
	using namespace global;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ Fn;
	private: System::Windows::Forms::TextBox^ Ln;
	private: System::Windows::Forms::TextBox^ Pn;
	private: System::Windows::Forms::TextBox^ pass1;
	private: System::Windows::Forms::TextBox^ desc;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ confirm;
	private: System::Windows::Forms::LinkLabel^ lllogin;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Fn = (gcnew System::Windows::Forms::TextBox());
			this->Ln = (gcnew System::Windows::Forms::TextBox());
			this->Pn = (gcnew System::Windows::Forms::TextBox());
			this->pass1 = (gcnew System::Windows::Forms::TextBox());
			this->desc = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->confirm = (gcnew System::Windows::Forms::TextBox());
			this->lllogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign Up";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"First Name";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Last Name";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Phone Number";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Password";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Description";
			// 
			// Fn
			// 
			this->Fn->Location = System::Drawing::Point(127, 76);
			this->Fn->Name = L"Fn";
			this->Fn->Size = System::Drawing::Size(169, 20);
			this->Fn->TabIndex = 8;
			// 
			// Ln
			// 
			this->Ln->Location = System::Drawing::Point(127, 102);
			this->Ln->Name = L"Ln";
			this->Ln->Size = System::Drawing::Size(169, 20);
			this->Ln->TabIndex = 9;
			// 
			// Pn
			// 
			this->Pn->Location = System::Drawing::Point(127, 128);
			this->Pn->Name = L"Pn";
			this->Pn->Size = System::Drawing::Size(169, 20);
			this->Pn->TabIndex = 10;
			// 
			// pass1
			// 
			this->pass1->Location = System::Drawing::Point(127, 154);
			this->pass1->Name = L"pass1";
			this->pass1->PasswordChar = '*';
			this->pass1->Size = System::Drawing::Size(169, 20);
			this->pass1->TabIndex = 11;
			// 
			// desc
			// 
			this->desc->Location = System::Drawing::Point(127, 206);
			this->desc->Name = L"desc";
			this->desc->Size = System::Drawing::Size(169, 20);
			this->desc->TabIndex = 12;
			this->desc->TextChanged += gcnew System::EventHandler(this, &SignUp::desc_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(60, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 25);
			this->button1->TabIndex = 13;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignUp::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(182, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 25);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SignUp::button2_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(11, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Confirm Password";
			// 
			// confirm
			// 
			this->confirm->Location = System::Drawing::Point(127, 180);
			this->confirm->Name = L"confirm";
			this->confirm->PasswordChar = '*';
			this->confirm->Size = System::Drawing::Size(169, 20);
			this->confirm->TabIndex = 17;
			// 
			// lllogin
			// 
			this->lllogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lllogin->LinkColor = System::Drawing::Color::Black;
			this->lllogin->Location = System::Drawing::Point(124, 294);
			this->lllogin->Name = L"lllogin";
			this->lllogin->Size = System::Drawing::Size(63, 25);
			this->lllogin->TabIndex = 18;
			this->lllogin->TabStop = true;
			this->lllogin->Text = L"Log In";
			this->lllogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lllogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignUp::lllogin_LinkClicked);
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(326, 328);
			this->Controls->Add(this->lllogin);
			this->Controls->Add(this->confirm);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->desc);
			this->Controls->Add(this->pass1);
			this->Controls->Add(this->Pn);
			this->Controls->Add(this->Ln);
			this->Controls->Add(this->Fn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->Load += gcnew System::EventHandler(this, &SignUp::SignUp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: UserData^ user = gcnew UserData();

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		String^ fn = this->Fn->Text;

		String^ ln = this->Ln->Text;

		String^ pn = this->Pn->Text;

		String^ password = this->pass1->Text;

		String^ confirm = this->confirm->Text;

		String^ desc = this->desc->Text;
		
		user->Fname = fn;
		user->Lname = ln;
		user->MobileNum = pn;
		user->password = password;
		

		


		if ( fn->Length == 0 || ln->Length == 0 || pn->Length == 0 || password->Length == 0 || confirm->Length == 0 || desc->Length == 0) {
			MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirm) != 0) {
			MessageBox::Show("Password and Confirm password do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}
		//try {

			//add to data base
			bool inserted = usersRepo->insert(user);

			//update the global ID
			int IDindx = usersRepo->getAll()->Count - 1;
			List<UserData^>^ Users = usersRepo->getAll();
			global::theUserID = Users[IDindx]->UserId;

			//add desc to the profile
			User* myaccount = new User();
			userProfileDesc* myAccountDesc = new userProfileDesc();
			myAccountDesc->editAboutDescription(global::cliToSTD(desc));

			if (inserted) {
				this->switchToLogin = true;
				this->Close();
			}
	/*	}*/
	/*	catch (Exception^ ex) {
			MessageBox::Show("Exist Phone number or ID", "Failed to register new user", MessageBoxButtons::OK);
		}*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	private: System::Void lllogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();

	}
	private: System::Void ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void desc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void SignUp_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
