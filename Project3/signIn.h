#pragma once
#include "UserData.h"
#include "SignUp.h"
#include "global.h"
#include "SqlRepo.h"
#include "QueryFilter.h"
#include "chatroom.h"
#include <string>
#include <iostream>

namespace Project3 {
	using namespace std;
	using namespace System;
	using namespace global;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class SignIn : public System::Windows::Forms::Form
	{
	public:
		SignIn(void)
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
		~SignIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ID;
	private: System::Windows::Forms::TextBox^ pass;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ llsigup;

	protected:









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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->llsigup = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &SignIn::label2_Click);
			// 
			// ID
			// 
			this->ID->Location = System::Drawing::Point(162, 96);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(113, 20);
			this->ID->TabIndex = 2;
			this->ID->TextChanged += gcnew System::EventHandler(this, &SignIn::ID_TextChanged);
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(162, 136);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(113, 20);
			this->pass->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(62, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignIn::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(174, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SignIn::button2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(281, 38);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Log In";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llsigup
			// 
			this->llsigup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llsigup->LinkColor = System::Drawing::Color::Black;
			this->llsigup->Location = System::Drawing::Point(123, 228);
			this->llsigup->Name = L"llsigup";
			this->llsigup->Size = System::Drawing::Size(75, 23);
			this->llsigup->TabIndex = 7;
			this->llsigup->TabStop = true;
			this->llsigup->Text = L"Sign Up";
			this->llsigup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->llsigup->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignIn::linkLabel1_LinkClicked);
			// 
			// SignIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(305, 260);
			this->Controls->Add(this->llsigup);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SignIn";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &SignIn::SignIn_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: UserData^ user;
	public: bool switchToChatRoom = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ id = this->ID->Text;
		String^ password = this->pass->Text;
		if (id->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter ID and Password", "ID or Password Empty", MessageBoxButtons::OK);
			return;
		}
		try {
			QueryFilter^ filter = gcnew QueryFilter();
			filter = filter->whereColumn("UserId")
				->isEqualTo(id)
				->andCase()
				->whereColumn("password")
				->isEqualTo(password)
				->build();

			//getFiltered always return a List, but we are sure that this userId-password combination is unique
			//so the first user in the List is the User we want
			List<UserData^>^ filteredUsers = usersRepo->getFiltered(filter);

			if (filteredUsers->ToArray()->Length == 1) {
				UserData^ user = filteredUsers[0];
				//get the user data from database and login to his account
				string convertedID = cliToSTD(id); //convert ID from sys to std
				theUserID = stoi(convertedID); //convert ID from std string to int				
				switchToChatRoom = true;
				Project3::chatroom form;
				form.ShowDialog();
				this->Close();
			}
			//if List is empty, then the query conditions didn't meet any DB Record
			else {
				MessageBox::Show("ID or Password is Incorrect", "ID or Password Error", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect", "Database connection Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToSignup = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToSignup = true;
		this->Close();
	}

	private: System::Void ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SignIn_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
