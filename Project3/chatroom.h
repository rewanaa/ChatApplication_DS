#pragma once
#include "User.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for chatroom
	/// </summary>


	public ref class chatroom : public System::Windows::Forms::Form
	{
	private:
		List<Button^>Unselect;
		List<Button^>select;
		List<Button^>Delete;
		List<Label^>lname;
		List<Label^>fname;
		List<Label^>phone;
		List<CheckBox^>checkBox;
		List<Panel^>panel;

		List<Label^> L_chatrooms;
		List<PictureBox^> P_chatrooms;
		List<Panel^> Pn_chatrooms;
		List<Panel^> Pn_messages;
		List<CheckBox^> Ch_chatrooms;
		List<Label^> discription;
		List<PictureBox^>contactImage;
		User* myAccount;
		ChatData* currentChat;
		userProfileDesc* myAccountDesc;
		List<UserData^>^ contactsDataList;
		List<chatRoomsData^>^ chatRoomsDataList;
		List<messageData^>^ messagesDataList;
		List<storyData^>^ contactsStoriesList;
		int storyIndx;
		ChatData* addedChat;

    UserData^ user;
	UserDescData^ userDesc;
//	String^ ID;
//	String^ fName;
//	String^ lName;
//	String^ desc;


	private: System::Windows::Forms::Label^ edit_label;
	private: System::Windows::Forms::Button^ edit_contact;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Panel^ panel23;

	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::CheckBox^ checkBox23;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::CheckBox^ checkBox24;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::CheckBox^ checkBox25;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::CheckBox^ checkBox26;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::CheckBox^ checkBox27;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::CheckBox^ checkBox28;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Panel^ pn_chatroom;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ ADD;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::CheckBox^ checkBox29;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::RichTextBox^ richTextBox5;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::Label^ id_text;
private: System::Windows::Forms::Button^ Update;

private: System::Windows::Forms::CheckBox^ checkBox30;
private: System::Windows::Forms::Label^ lname1;
private: System::Windows::Forms::Label^ phone1;
private: System::Windows::Forms::Label^ fname1;
private: System::Windows::Forms::Label^ lname2;
private: System::Windows::Forms::Label^ phone2;
private: System::Windows::Forms::Label^ fname2;
private: System::Windows::Forms::Label^ lname3;
private: System::Windows::Forms::Label^ phone3;
private: System::Windows::Forms::Label^ fname3;
private: System::Windows::Forms::Label^ lname4;
private: System::Windows::Forms::Label^ phone4;
private: System::Windows::Forms::Label^ fname4;
private: System::Windows::Forms::Label^ lname5;
private: System::Windows::Forms::Label^ phone5;
private: System::Windows::Forms::Label^ fname5;

private: System::Windows::Forms::Label^ lname6;
private: System::Windows::Forms::Label^ phone6;
private: System::Windows::Forms::Label^ lname7;
private: System::Windows::Forms::Label^ phone7;
private: System::Windows::Forms::Label^ fname7;
private: System::Windows::Forms::Label^ lname8;
private: System::Windows::Forms::Label^ phone8;
private: System::Windows::Forms::Label^ fname8;
private: System::Windows::Forms::Label^ lname9;
private: System::Windows::Forms::Label^ phone9;
private: System::Windows::Forms::Label^ fname9;
private: System::Windows::Forms::Label^ lname10;
private: System::Windows::Forms::Label^ phone10;
private: System::Windows::Forms::Label^ fname10;
private: System::Windows::Forms::Label^ lname11;
private: System::Windows::Forms::Label^ phone11;
private: System::Windows::Forms::Label^ fname11;
private: System::Windows::Forms::Label^ lname12;
private: System::Windows::Forms::Label^ phone12;
private: System::Windows::Forms::Label^ fname12;
private: System::Windows::Forms::Label^ lname13;
private: System::Windows::Forms::Label^ phone13;
private: System::Windows::Forms::Label^ fname13;
private: System::Windows::Forms::Label^ lname14;
private: System::Windows::Forms::Label^ phone14;
private: System::Windows::Forms::Label^ fname14;
private: System::Windows::Forms::Label^ lname15;
private: System::Windows::Forms::Label^ phone15;
private: System::Windows::Forms::Label^ fname15;
private: System::Windows::Forms::Label^ lname16;
private: System::Windows::Forms::Label^ phone16;
private: System::Windows::Forms::Label^ fname16;
private: System::Windows::Forms::Label^ lname17;
private: System::Windows::Forms::Label^ phone17;
private: System::Windows::Forms::Label^ fname17;
private: System::Windows::Forms::Label^ lname18;
private: System::Windows::Forms::Label^ phone18;
private: System::Windows::Forms::Label^ fname18;
private: System::Windows::Forms::Label^ lname19;
private: System::Windows::Forms::Label^ phone19;
private: System::Windows::Forms::Label^ fname19;
private: System::Windows::Forms::Label^ lname20;
private: System::Windows::Forms::Label^ phone20;
private: System::Windows::Forms::Label^ fname20;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::PictureBox^ pictureBox33;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::PictureBox^ pictureBox36;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::PictureBox^ pictureBox37;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::PictureBox^ pictureBox39;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::PictureBox^ pictureBox43;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::PictureBox^ pictureBox44;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::PictureBox^ pictureBox45;





		   List<Panel^>panelf;
	public:
		chatroom(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~chatroom()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ pn_st_bar;

	private: System::Windows::Forms::ComboBox^ contacts;
	private: System::Windows::Forms::ComboBox^ story;
	private: System::Windows::Forms::TextBox^ phone_textBox;



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ profile;
	private: System::Windows::Forms::Button^ DeleteChatRoom;


	private: System::Windows::Forms::Button^ AddChatRoom;
	private: System::Windows::Forms::Button^ chat;
	private: System::Windows::Forms::Panel^ pn_sphoto;

	private: System::Windows::Forms::Panel^ add_chat;

	private: System::Windows::Forms::Panel^ pn_stext;



	private: System::Windows::Forms::Panel^ pn_shows;

	private: System::Windows::Forms::Panel^ pn_chat;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pn_profile;

	private: System::Windows::Forms::Panel^ pn_new_contact;

	private: System::Windows::Forms::Panel^ pn_show_contact;

	private: System::Windows::Forms::Panel^ stories;

	private: System::Windows::Forms::Panel^ pn_con;
	private: System::Windows::Forms::PictureBox^ profile_pic;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ description_label;
	private: System::Windows::Forms::TextBox^ fname_text;
	private: System::Windows::Forms::TextBox^ lname_text;

	private: System::Windows::Forms::Label^ fname_label;
	private: System::Windows::Forms::Label^ lname_label;
	private: System::Windows::Forms::Label^ ID_label;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ change_photo_bu;
	private: System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::PictureBox^ pictureBox5;


	private: System::Windows::Forms::Label^ add_label;

	private: System::Windows::Forms::TextBox^ lname_textBox;
	private: System::Windows::Forms::TextBox^ ID_textBox;




	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Delete1;











	private: System::Windows::Forms::Button^ edit_delete;
	private: System::Windows::Forms::Button^ edit_delete2;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::Label^ label18;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ choose;
	private: System::Windows::Forms::Button^ choose_;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ Unselect1;


	private: System::Windows::Forms::Button^ select1;


	private: System::Windows::Forms::ListBox^ The_selected_membersers;
	private: System::Windows::Forms::Button^ add_contact;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ Unselect2;
	private: System::Windows::Forms::Button^ select2;
	private: System::Windows::Forms::Button^ Delete2;



	private: System::Windows::Forms::CheckBox^ checkBox2;





	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ Unselect3;
	private: System::Windows::Forms::Button^ select3;
	private: System::Windows::Forms::Button^ Delete3;



	private: System::Windows::Forms::CheckBox^ checkBox3;





	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ Unselect4;
	private: System::Windows::Forms::Button^ select4;
	private: System::Windows::Forms::Button^ Delete4;



	private: System::Windows::Forms::CheckBox^ checkBox4;





	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ Unselect5;
	private: System::Windows::Forms::Button^ select5;
	private: System::Windows::Forms::Button^ Delete5;



	private: System::Windows::Forms::CheckBox^ checkBox5;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ Unselect6;
	private: System::Windows::Forms::Button^ select6;
	private: System::Windows::Forms::Button^ Delete6;

	private: System::Windows::Forms::CheckBox^ checkBox6;

	private: System::Windows::Forms::Label^ fname6;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ Unselect7;
	private: System::Windows::Forms::Button^ select7;
	private: System::Windows::Forms::Button^ Delete7;

	private: System::Windows::Forms::CheckBox^ checkBox7;


	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ Unselect8;
	private: System::Windows::Forms::Button^ select8;
	private: System::Windows::Forms::Button^ Delete8;

	private: System::Windows::Forms::CheckBox^ checkBox8;


	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ Unselect9;
	private: System::Windows::Forms::Button^ select9;
	private: System::Windows::Forms::Button^ Delete9;

	private: System::Windows::Forms::CheckBox^ checkBox9;


	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ Unselect10;
	private: System::Windows::Forms::Button^ select10;
	private: System::Windows::Forms::Button^ Delete10;

	private: System::Windows::Forms::CheckBox^ checkBox10;


	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ Unselect11;
	private: System::Windows::Forms::Button^ select11;
	private: System::Windows::Forms::Button^ Delete11;

	private: System::Windows::Forms::CheckBox^ checkBox11;


	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Button^ Unselect12;
	private: System::Windows::Forms::Button^ select12;
	private: System::Windows::Forms::Button^ Delete12;

	private: System::Windows::Forms::CheckBox^ checkBox12;


	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ Unselect13;
	private: System::Windows::Forms::Button^ select13;
	private: System::Windows::Forms::Button^ Delete13;

	private: System::Windows::Forms::CheckBox^ checkBox13;


	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Button^ Unselect14;
	private: System::Windows::Forms::Button^ select14;
	private: System::Windows::Forms::Button^ Delete14;

	private: System::Windows::Forms::CheckBox^ checkBox14;


	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ Unselect15;
	private: System::Windows::Forms::Button^ select15;
	private: System::Windows::Forms::Button^ Delete15;

	private: System::Windows::Forms::CheckBox^ checkBox15;


	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Button^ Unselect16;
	private: System::Windows::Forms::Button^ select16;
	private: System::Windows::Forms::Button^ Delete16;

	private: System::Windows::Forms::CheckBox^ checkBox16;


	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Button^ Unselect17;
	private: System::Windows::Forms::Button^ select17;
	private: System::Windows::Forms::Button^ Delete17;

	private: System::Windows::Forms::CheckBox^ checkBox17;


	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Button^ Unselect18;
	private: System::Windows::Forms::Button^ select18;
	private: System::Windows::Forms::Button^ Delete18;

	private: System::Windows::Forms::CheckBox^ checkBox18;


	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Button^ Unselect19;
	private: System::Windows::Forms::Button^ select19;
	private: System::Windows::Forms::Button^ Delete19;

	private: System::Windows::Forms::CheckBox^ checkBox19;


	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Button^ Unselect20;
	private: System::Windows::Forms::Button^ select20;
	private: System::Windows::Forms::Button^ Delete20;

	private: System::Windows::Forms::CheckBox^ checkBox20;

































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(chatroom::typeid));
			this->chat = (gcnew System::Windows::Forms::Button());
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->profile = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->story = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contacts = (gcnew System::Windows::Forms::ComboBox());
			this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
			this->DeleteChatRoom = (gcnew System::Windows::Forms::Button());
			this->AddChatRoom = (gcnew System::Windows::Forms::Button());
			this->pn_sphoto = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->add_chat = (gcnew System::Windows::Forms::Panel());
			this->ADD = (gcnew System::Windows::Forms::Button());
			this->The_selected_membersers = (gcnew System::Windows::Forms::ListBox());
			this->choose = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pn_stext = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_shows = (gcnew System::Windows::Forms::Panel());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_chat = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pn_profile = (gcnew System::Windows::Forms::Panel());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->id_text = (gcnew System::Windows::Forms::Label());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->change_photo_bu = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->description_label = (gcnew System::Windows::Forms::Label());
			this->fname_text = (gcnew System::Windows::Forms::TextBox());
			this->lname_text = (gcnew System::Windows::Forms::TextBox());
			this->fname_label = (gcnew System::Windows::Forms::Label());
			this->lname_label = (gcnew System::Windows::Forms::Label());
			this->ID_label = (gcnew System::Windows::Forms::Label());
			this->profile_pic = (gcnew System::Windows::Forms::PictureBox());
			this->pn_new_contact = (gcnew System::Windows::Forms::Panel());
			this->add_contact = (gcnew System::Windows::Forms::Button());
			this->add_label = (gcnew System::Windows::Forms::Label());
			this->ID_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->edit_contact = (gcnew System::Windows::Forms::Button());
			this->lname_textBox = (gcnew System::Windows::Forms::TextBox());
			this->phone_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pn_show_contact = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->choose_ = (gcnew System::Windows::Forms::Button());
			this->edit_delete2 = (gcnew System::Windows::Forms::Button());
			this->edit_delete = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->lname1 = (gcnew System::Windows::Forms::Label());
			this->phone1 = (gcnew System::Windows::Forms::Label());
			this->fname1 = (gcnew System::Windows::Forms::Label());
			this->Unselect1 = (gcnew System::Windows::Forms::Button());
			this->select1 = (gcnew System::Windows::Forms::Button());
			this->Delete1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->lname2 = (gcnew System::Windows::Forms::Label());
			this->phone2 = (gcnew System::Windows::Forms::Label());
			this->fname2 = (gcnew System::Windows::Forms::Label());
			this->Unselect2 = (gcnew System::Windows::Forms::Button());
			this->select2 = (gcnew System::Windows::Forms::Button());
			this->Delete2 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->lname3 = (gcnew System::Windows::Forms::Label());
			this->phone3 = (gcnew System::Windows::Forms::Label());
			this->fname3 = (gcnew System::Windows::Forms::Label());
			this->Unselect3 = (gcnew System::Windows::Forms::Button());
			this->select3 = (gcnew System::Windows::Forms::Button());
			this->Delete3 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->lname4 = (gcnew System::Windows::Forms::Label());
			this->phone4 = (gcnew System::Windows::Forms::Label());
			this->fname4 = (gcnew System::Windows::Forms::Label());
			this->Unselect4 = (gcnew System::Windows::Forms::Button());
			this->select4 = (gcnew System::Windows::Forms::Button());
			this->Delete4 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->lname5 = (gcnew System::Windows::Forms::Label());
			this->phone5 = (gcnew System::Windows::Forms::Label());
			this->fname5 = (gcnew System::Windows::Forms::Label());
			this->Unselect5 = (gcnew System::Windows::Forms::Button());
			this->select5 = (gcnew System::Windows::Forms::Button());
			this->Delete5 = (gcnew System::Windows::Forms::Button());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->lname6 = (gcnew System::Windows::Forms::Label());
			this->phone6 = (gcnew System::Windows::Forms::Label());
			this->Unselect6 = (gcnew System::Windows::Forms::Button());
			this->fname6 = (gcnew System::Windows::Forms::Label());
			this->select6 = (gcnew System::Windows::Forms::Button());
			this->Delete6 = (gcnew System::Windows::Forms::Button());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->lname7 = (gcnew System::Windows::Forms::Label());
			this->phone7 = (gcnew System::Windows::Forms::Label());
			this->fname7 = (gcnew System::Windows::Forms::Label());
			this->Unselect7 = (gcnew System::Windows::Forms::Button());
			this->select7 = (gcnew System::Windows::Forms::Button());
			this->Delete7 = (gcnew System::Windows::Forms::Button());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->lname8 = (gcnew System::Windows::Forms::Label());
			this->phone8 = (gcnew System::Windows::Forms::Label());
			this->fname8 = (gcnew System::Windows::Forms::Label());
			this->Unselect8 = (gcnew System::Windows::Forms::Button());
			this->select8 = (gcnew System::Windows::Forms::Button());
			this->Delete8 = (gcnew System::Windows::Forms::Button());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->lname9 = (gcnew System::Windows::Forms::Label());
			this->phone9 = (gcnew System::Windows::Forms::Label());
			this->fname9 = (gcnew System::Windows::Forms::Label());
			this->Unselect9 = (gcnew System::Windows::Forms::Button());
			this->select9 = (gcnew System::Windows::Forms::Button());
			this->Delete9 = (gcnew System::Windows::Forms::Button());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->lname10 = (gcnew System::Windows::Forms::Label());
			this->phone10 = (gcnew System::Windows::Forms::Label());
			this->fname10 = (gcnew System::Windows::Forms::Label());
			this->Unselect10 = (gcnew System::Windows::Forms::Button());
			this->select10 = (gcnew System::Windows::Forms::Button());
			this->Delete10 = (gcnew System::Windows::Forms::Button());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->lname11 = (gcnew System::Windows::Forms::Label());
			this->phone11 = (gcnew System::Windows::Forms::Label());
			this->fname11 = (gcnew System::Windows::Forms::Label());
			this->Unselect11 = (gcnew System::Windows::Forms::Button());
			this->select11 = (gcnew System::Windows::Forms::Button());
			this->Delete11 = (gcnew System::Windows::Forms::Button());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->lname12 = (gcnew System::Windows::Forms::Label());
			this->phone12 = (gcnew System::Windows::Forms::Label());
			this->fname12 = (gcnew System::Windows::Forms::Label());
			this->Unselect12 = (gcnew System::Windows::Forms::Button());
			this->select12 = (gcnew System::Windows::Forms::Button());
			this->Delete12 = (gcnew System::Windows::Forms::Button());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->lname13 = (gcnew System::Windows::Forms::Label());
			this->phone13 = (gcnew System::Windows::Forms::Label());
			this->fname13 = (gcnew System::Windows::Forms::Label());
			this->Unselect13 = (gcnew System::Windows::Forms::Button());
			this->select13 = (gcnew System::Windows::Forms::Button());
			this->Delete13 = (gcnew System::Windows::Forms::Button());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->lname14 = (gcnew System::Windows::Forms::Label());
			this->phone14 = (gcnew System::Windows::Forms::Label());
			this->fname14 = (gcnew System::Windows::Forms::Label());
			this->Unselect14 = (gcnew System::Windows::Forms::Button());
			this->select14 = (gcnew System::Windows::Forms::Button());
			this->Delete14 = (gcnew System::Windows::Forms::Button());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->lname15 = (gcnew System::Windows::Forms::Label());
			this->phone15 = (gcnew System::Windows::Forms::Label());
			this->fname15 = (gcnew System::Windows::Forms::Label());
			this->Unselect15 = (gcnew System::Windows::Forms::Button());
			this->select15 = (gcnew System::Windows::Forms::Button());
			this->Delete15 = (gcnew System::Windows::Forms::Button());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->lname16 = (gcnew System::Windows::Forms::Label());
			this->phone16 = (gcnew System::Windows::Forms::Label());
			this->fname16 = (gcnew System::Windows::Forms::Label());
			this->Unselect16 = (gcnew System::Windows::Forms::Button());
			this->select16 = (gcnew System::Windows::Forms::Button());
			this->Delete16 = (gcnew System::Windows::Forms::Button());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->lname17 = (gcnew System::Windows::Forms::Label());
			this->phone17 = (gcnew System::Windows::Forms::Label());
			this->fname17 = (gcnew System::Windows::Forms::Label());
			this->Unselect17 = (gcnew System::Windows::Forms::Button());
			this->select17 = (gcnew System::Windows::Forms::Button());
			this->Delete17 = (gcnew System::Windows::Forms::Button());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->lname18 = (gcnew System::Windows::Forms::Label());
			this->phone18 = (gcnew System::Windows::Forms::Label());
			this->fname18 = (gcnew System::Windows::Forms::Label());
			this->Unselect18 = (gcnew System::Windows::Forms::Button());
			this->select18 = (gcnew System::Windows::Forms::Button());
			this->Delete18 = (gcnew System::Windows::Forms::Button());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->lname19 = (gcnew System::Windows::Forms::Label());
			this->phone19 = (gcnew System::Windows::Forms::Label());
			this->fname19 = (gcnew System::Windows::Forms::Label());
			this->Unselect19 = (gcnew System::Windows::Forms::Button());
			this->select19 = (gcnew System::Windows::Forms::Button());
			this->Delete19 = (gcnew System::Windows::Forms::Button());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->lname20 = (gcnew System::Windows::Forms::Label());
			this->phone20 = (gcnew System::Windows::Forms::Label());
			this->fname20 = (gcnew System::Windows::Forms::Label());
			this->Unselect20 = (gcnew System::Windows::Forms::Button());
			this->select20 = (gcnew System::Windows::Forms::Button());
			this->Delete20 = (gcnew System::Windows::Forms::Button());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->stories = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_con = (gcnew System::Windows::Forms::Panel());
			this->pn_chatroom = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pn_nav_bar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pn_st_bar->SuspendLayout();
			this->pn_sphoto->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->add_chat->SuspendLayout();
			this->pn_stext->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->pn_shows->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->pn_chat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel27->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel28->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->pn_profile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_pic))->BeginInit();
			this->pn_new_contact->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->pn_show_contact->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			this->stories->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			this->pn_con->SuspendLayout();
			this->pn_chatroom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			this->SuspendLayout();
			// 
			// chat
			// 
			this->chat->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chat->Location = System::Drawing::Point(3, 261);
			this->chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chat->Name = L"chat";
			this->chat->Size = System::Drawing::Size(96, 28);
			this->chat->TabIndex = 1;
			this->chat->Text = L"Chat Room";
			this->chat->UseVisualStyleBackColor = true;
			this->chat->Click += gcnew System::EventHandler(this, &chatroom::chat_Click);
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pn_nav_bar->Controls->Add(this->pictureBox21);
			this->pn_nav_bar->Controls->Add(this->pictureBox20);
			this->pn_nav_bar->Controls->Add(this->pictureBox19);
			this->pn_nav_bar->Controls->Add(this->chat);
			this->pn_nav_bar->Controls->Add(this->profile);
			this->pn_nav_bar->Controls->Add(this->pictureBox3);
			this->pn_nav_bar->Controls->Add(this->story);
			this->pn_nav_bar->Controls->Add(this->pictureBox2);
			this->pn_nav_bar->Controls->Add(this->pictureBox1);
			this->pn_nav_bar->Controls->Add(this->contacts);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Right;
			this->pn_nav_bar->Location = System::Drawing::Point(724, 0);
			this->pn_nav_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(103, 591);
			this->pn_nav_bar->TabIndex = 2;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(3, 184);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(97, 76);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 9;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(3, 3);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(96, 67);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 8;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &chatroom::pictureBox20_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(3, 492);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(105, 67);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 7;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &chatroom::pictureBox19_Click);
			// 
			// profile
			// 
			this->profile->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profile->Location = System::Drawing::Point(3, 153);
			this->profile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profile->Name = L"profile";
			this->profile->Size = System::Drawing::Size(99, 29);
			this->profile->TabIndex = 4;
			this->profile->Text = L"My profile";
			this->profile->UseVisualStyleBackColor = true;
			this->profile->Click += gcnew System::EventHandler(this, &chatroom::profile_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(3, 75);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 78);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// story
			// 
			this->story->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->story->FormattingEnabled = true;
			this->story->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"1- Story photo", L"2- Story text", L"3- show my story",
					L"4-show the stories"
			});
			this->story->Location = System::Drawing::Point(3, 471);
			this->story->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->story->Name = L"story";
			this->story->Size = System::Drawing::Size(98, 20);
			this->story->TabIndex = 3;
			this->story->Text = L"     story";
			this->story->SelectedIndexChanged += gcnew System::EventHandler(this, &chatroom::story_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(3, 392);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(95, 76);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(3, 291);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(95, 76);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// contacts
			// 
			this->contacts->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contacts->FormattingEnabled = true;
			this->contacts->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1-new contact", L"2-show my contacts" });
			this->contacts->Location = System::Drawing::Point(3, 370);
			this->contacts->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contacts->Name = L"contacts";
			this->contacts->Size = System::Drawing::Size(98, 20);
			this->contacts->TabIndex = 0;
			this->contacts->Text = L"contacts";
			this->contacts->SelectedIndexChanged += gcnew System::EventHandler(this, &chatroom::contacts_SelectedIndexChanged);
			// 
			// pn_st_bar
			// 
			this->pn_st_bar->Controls->Add(this->DeleteChatRoom);
			this->pn_st_bar->Controls->Add(this->AddChatRoom);
			this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_st_bar->Location = System::Drawing::Point(0, 552);
			this->pn_st_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_st_bar->Name = L"pn_st_bar";
			this->pn_st_bar->Size = System::Drawing::Size(724, 39);
			this->pn_st_bar->TabIndex = 3;
			// 
			// DeleteChatRoom
			// 
			this->DeleteChatRoom->Dock = System::Windows::Forms::DockStyle::Left;
			this->DeleteChatRoom->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteChatRoom->Location = System::Drawing::Point(0, 0);
			this->DeleteChatRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DeleteChatRoom->Name = L"DeleteChatRoom";
			this->DeleteChatRoom->Size = System::Drawing::Size(357, 39);
			this->DeleteChatRoom->TabIndex = 1;
			this->DeleteChatRoom->Text = L"Delete ChatRoom";
			this->DeleteChatRoom->UseVisualStyleBackColor = true;
			this->DeleteChatRoom->Click += gcnew System::EventHandler(this, &chatroom::DeleteChatRoom_Click);
			// 
			// AddChatRoom
			// 
			this->AddChatRoom->Dock = System::Windows::Forms::DockStyle::Right;
			this->AddChatRoom->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddChatRoom->Location = System::Drawing::Point(367, 0);
			this->AddChatRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddChatRoom->Name = L"AddChatRoom";
			this->AddChatRoom->Size = System::Drawing::Size(357, 39);
			this->AddChatRoom->TabIndex = 0;
			this->AddChatRoom->Text = L"Add ChatRoom";
			this->AddChatRoom->UseVisualStyleBackColor = true;
			this->AddChatRoom->Click += gcnew System::EventHandler(this, &chatroom::AddChatRoom_Click);
			// 
			// pn_sphoto
			// 
			this->pn_sphoto->Controls->Add(this->button3);
			this->pn_sphoto->Controls->Add(this->button2);
			this->pn_sphoto->Controls->Add(this->pictureBox7);
			this->pn_sphoto->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_sphoto->Location = System::Drawing::Point(0, 0);
			this->pn_sphoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_sphoto->Name = L"pn_sphoto";
			this->pn_sphoto->Size = System::Drawing::Size(724, 552);
			this->pn_sphoto->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(255, 448);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 56);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &chatroom::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(400, 276);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add photo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &chatroom::button2_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(9, 7);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(334, 498);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// add_chat
			// 
			this->add_chat->Controls->Add(this->ADD);
			this->add_chat->Controls->Add(this->The_selected_membersers);
			this->add_chat->Controls->Add(this->choose);
			this->add_chat->Controls->Add(this->comboBox1);
			this->add_chat->Controls->Add(this->label19);
			this->add_chat->Controls->Add(this->label18);
			this->add_chat->Controls->Add(this->label2);
			this->add_chat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_chat->Location = System::Drawing::Point(0, 0);
			this->add_chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_chat->Name = L"add_chat";
			this->add_chat->Size = System::Drawing::Size(724, 552);
			this->add_chat->TabIndex = 7;
			this->add_chat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::add_chat_Paint);
			// 
			// ADD
			// 
			this->ADD->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADD->Location = System::Drawing::Point(294, 350);
			this->ADD->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(128, 32);
			this->ADD->TabIndex = 10;
			this->ADD->Text = L"Add";
			this->ADD->UseVisualStyleBackColor = true;
			this->ADD->Visible = false;
			this->ADD->Click += gcnew System::EventHandler(this, &chatroom::ADD_Click);
			// 
			// The_selected_membersers
			// 
			this->The_selected_membersers->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->The_selected_membersers->FormattingEnabled = true;
			this->The_selected_membersers->ItemHeight = 19;
			this->The_selected_membersers->Location = System::Drawing::Point(261, 207);
			this->The_selected_membersers->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->The_selected_membersers->Name = L"The_selected_membersers";
			this->The_selected_membersers->ScrollAlwaysVisible = true;
			this->The_selected_membersers->Size = System::Drawing::Size(233, 61);
			this->The_selected_membersers->TabIndex = 9;
			this->The_selected_membersers->Visible = false;
			// 
			// choose
			// 
			this->choose->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choose->Location = System::Drawing::Point(261, 306);
			this->choose->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->choose->Name = L"choose";
			this->choose->Size = System::Drawing::Size(218, 29);
			this->choose->TabIndex = 8;
			this->choose->Text = L"Choose from your contacts";
			this->choose->UseVisualStyleBackColor = true;
			this->choose->Click += gcnew System::EventHandler(this, &chatroom::button1_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1- one to one", L"2- Group" });
			this->comboBox1->Location = System::Drawing::Point(255, 129);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(270, 25);
			this->comboBox1->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(49, 132);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(167, 25);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Chatroom type :";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(32, 216);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(177, 25);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Group members :";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(249, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Add your new chatroom";
			// 
			// pn_stext
			// 
			this->pn_stext->Controls->Add(this->button4);
			this->pn_stext->Controls->Add(this->label3);
			this->pn_stext->Controls->Add(this->richTextBox2);
			this->pn_stext->Controls->Add(this->pictureBox8);
			this->pn_stext->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_stext->Location = System::Drawing::Point(0, 0);
			this->pn_stext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_stext->Name = L"pn_stext";
			this->pn_stext->Size = System::Drawing::Size(724, 552);
			this->pn_stext->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(315, 275);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 56);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &chatroom::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(283, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Add a Story Text";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(250, 174);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(219, 79);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(0, 0);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(723, 509);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// pn_shows
			// 
			this->pn_shows->Controls->Add(this->checkBox29);
			this->pn_shows->Controls->Add(this->label8);
			this->pn_shows->Controls->Add(this->button1);
			this->pn_shows->Controls->Add(this->richTextBox4);
			this->pn_shows->Controls->Add(this->pictureBox25);
			this->pn_shows->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_shows->Location = System::Drawing::Point(0, 0);
			this->pn_shows->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_shows->Name = L"pn_shows";
			this->pn_shows->Size = System::Drawing::Size(724, 552);
			this->pn_shows->TabIndex = 5;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Checked = true;
			this->checkBox29->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox29->Location = System::Drawing::Point(300, 476);
			this->checkBox29->Margin = System::Windows::Forms::Padding(2);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(15, 14);
			this->checkBox29->TabIndex = 14;
			this->checkBox29->UseVisualStyleBackColor = true;
			this->checkBox29->Visible = false;
			this->checkBox29->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox29_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(20, 19);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 26);
			this->label8->TabIndex = 13;
			this->label8->Text = L"My Story";
			this->label8->Click += gcnew System::EventHandler(this, &chatroom::label8_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(318, 470);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 27);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Delete My Story";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chatroom::button1_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(273, 193);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(228, 68);
			this->richTextBox4->TabIndex = 11;
			this->richTextBox4->Text = L"";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Location = System::Drawing::Point(228, 44);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(316, 391);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 10;
			this->pictureBox25->TabStop = false;
			// 
			// pn_chat
			// 
			this->pn_chat->Controls->Add(this->pictureBox9);
			this->pn_chat->Controls->Add(this->flowLayoutPanel2);
			this->pn_chat->Controls->Add(this->textBox7);
			this->pn_chat->Controls->Add(this->pictureBox10);
			this->pn_chat->Controls->Add(this->label1);
			this->pn_chat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_chat->Location = System::Drawing::Point(0, 0);
			this->pn_chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_chat->Name = L"pn_chat";
			this->pn_chat->Size = System::Drawing::Size(724, 552);
			this->pn_chat->TabIndex = 6;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(676, 5);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(43, 26);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &chatroom::pictureBox9_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->panel22);
			this->flowLayoutPanel2->Controls->Add(this->panel23);
			this->flowLayoutPanel2->Controls->Add(this->panel24);
			this->flowLayoutPanel2->Controls->Add(this->panel25);
			this->flowLayoutPanel2->Controls->Add(this->panel26);
			this->flowLayoutPanel2->Controls->Add(this->panel27);
			this->flowLayoutPanel2->Controls->Add(this->panel28);
			this->flowLayoutPanel2->Controls->Add(this->panel29);
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 34);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(716, 515);
			this->flowLayoutPanel2->TabIndex = 7;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->checkBox21);
			this->panel22->Controls->Add(this->label21);
			this->panel22->Controls->Add(this->label22);
			this->panel22->Controls->Add(this->label23);
			this->panel22->Controls->Add(this->pictureBox11);
			this->panel22->Location = System::Drawing::Point(3, 3);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(715, 58);
			this->panel22->TabIndex = 4;
			this->panel22->Visible = false;
			// 
			// checkBox21
			// 
			this->checkBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox21->Location = System::Drawing::Point(669, 29);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(13, 13);
			this->checkBox21->TabIndex = 4;
			this->checkBox21->Text = L"checkBox21";
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->Visible = false;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox21_CheckedChanged);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(610, 4);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(102, 20);
			this->label21->TabIndex = 1;
			this->label21->Text = L"10/05/2022";
			this->label21->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(59, 29);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(593, 24);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Text";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(59, 6);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(337, 23);
			this->label23->TabIndex = 3;
			this->label23->Text = L"name";
			this->label23->Click += gcnew System::EventHandler(this, &chatroom::label23_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(3, 3);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(50, 50);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->checkBox22);
			this->panel23->Controls->Add(this->label24);
			this->panel23->Controls->Add(this->label25);
			this->panel23->Controls->Add(this->label26);
			this->panel23->Controls->Add(this->pictureBox12);
			this->panel23->Location = System::Drawing::Point(3, 67);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(715, 58);
			this->panel23->TabIndex = 5;
			this->panel23->Visible = false;
			// 
			// checkBox22
			// 
			this->checkBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox22->Location = System::Drawing::Point(669, 29);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(13, 13);
			this->checkBox22->TabIndex = 5;
			this->checkBox22->Text = L"checkBox22";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->Visible = false;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox22_CheckedChanged);
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(612, 3);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 23);
			this->label24->TabIndex = 3;
			this->label24->Text = L"10/05/2022";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(59, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(575, 24);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Text";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(59, 6);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(340, 20);
			this->label26->TabIndex = 1;
			this->label26->Text = L"DS1";
			this->label26->Click += gcnew System::EventHandler(this, &chatroom::label26_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(3, 3);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(50, 50);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 0;
			this->pictureBox12->TabStop = false;
			// 
			// panel24
			// 
			this->panel24->Controls->Add(this->checkBox23);
			this->panel24->Controls->Add(this->label27);
			this->panel24->Controls->Add(this->label28);
			this->panel24->Controls->Add(this->label29);
			this->panel24->Controls->Add(this->pictureBox13);
			this->panel24->Location = System::Drawing::Point(3, 131);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(715, 58);
			this->panel24->TabIndex = 6;
			this->panel24->Visible = false;
			// 
			// checkBox23
			// 
			this->checkBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox23->Location = System::Drawing::Point(669, 27);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(13, 13);
			this->checkBox23->TabIndex = 5;
			this->checkBox23->Text = L"checkBox23";
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->Visible = false;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox23_CheckedChanged);
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(612, 3);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(100, 23);
			this->label27->TabIndex = 3;
			this->label27->Text = L"10/05/2022";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(59, 29);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(575, 24);
			this->label28->TabIndex = 2;
			this->label28->Text = L"Text";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(59, 6);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(340, 20);
			this->label29->TabIndex = 1;
			this->label29->Text = L"DS2";
			this->label29->Click += gcnew System::EventHandler(this, &chatroom::label29_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(3, 3);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(50, 50);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 0;
			this->pictureBox13->TabStop = false;
			// 
			// panel25
			// 
			this->panel25->Controls->Add(this->checkBox24);
			this->panel25->Controls->Add(this->label30);
			this->panel25->Controls->Add(this->label31);
			this->panel25->Controls->Add(this->label32);
			this->panel25->Controls->Add(this->pictureBox14);
			this->panel25->Location = System::Drawing::Point(3, 195);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(715, 58);
			this->panel25->TabIndex = 7;
			this->panel25->Visible = false;
			// 
			// checkBox24
			// 
			this->checkBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox24->Location = System::Drawing::Point(669, 26);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(13, 13);
			this->checkBox24->TabIndex = 5;
			this->checkBox24->Text = L"checkBox24";
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->Visible = false;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox24_CheckedChanged);
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(612, 3);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(100, 23);
			this->label30->TabIndex = 3;
			this->label30->Text = L"10/05/2022";
			this->label30->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(59, 29);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(575, 24);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Text";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(59, 6);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(340, 20);
			this->label32->TabIndex = 1;
			this->label32->Text = L"DS3";
			this->label32->Click += gcnew System::EventHandler(this, &chatroom::label32_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(3, 3);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(50, 50);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 0;
			this->pictureBox14->TabStop = false;
			// 
			// panel26
			// 
			this->panel26->Controls->Add(this->checkBox25);
			this->panel26->Controls->Add(this->label33);
			this->panel26->Controls->Add(this->label34);
			this->panel26->Controls->Add(this->label35);
			this->panel26->Controls->Add(this->pictureBox15);
			this->panel26->Location = System::Drawing::Point(3, 259);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(715, 58);
			this->panel26->TabIndex = 8;
			this->panel26->Visible = false;
			// 
			// checkBox25
			// 
			this->checkBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox25->Location = System::Drawing::Point(669, 32);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(13, 13);
			this->checkBox25->TabIndex = 5;
			this->checkBox25->Text = L"checkBox25";
			this->checkBox25->UseVisualStyleBackColor = true;
			this->checkBox25->Visible = false;
			this->checkBox25->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox25_CheckedChanged);
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(612, 3);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 23);
			this->label33->TabIndex = 3;
			this->label33->Text = L"10/05/2022";
			this->label33->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(59, 29);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(575, 24);
			this->label34->TabIndex = 2;
			this->label34->Text = L"Text";
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(59, 6);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(340, 20);
			this->label35->TabIndex = 1;
			this->label35->Text = L"DS4";
			this->label35->Click += gcnew System::EventHandler(this, &chatroom::label35_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(3, 3);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(50, 50);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 0;
			this->pictureBox15->TabStop = false;
			// 
			// panel27
			// 
			this->panel27->Controls->Add(this->checkBox26);
			this->panel27->Controls->Add(this->label36);
			this->panel27->Controls->Add(this->label37);
			this->panel27->Controls->Add(this->label38);
			this->panel27->Controls->Add(this->pictureBox16);
			this->panel27->Location = System::Drawing::Point(3, 323);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(715, 58);
			this->panel27->TabIndex = 9;
			this->panel27->Visible = false;
			// 
			// checkBox26
			// 
			this->checkBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox26->Location = System::Drawing::Point(669, 32);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(13, 13);
			this->checkBox26->TabIndex = 5;
			this->checkBox26->Text = L"checkBox26";
			this->checkBox26->UseVisualStyleBackColor = true;
			this->checkBox26->Visible = false;
			this->checkBox26->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox26_CheckedChanged);
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(612, 3);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(100, 23);
			this->label36->TabIndex = 3;
			this->label36->Text = L"10/05/2022";
			this->label36->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(59, 29);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(575, 24);
			this->label37->TabIndex = 2;
			this->label37->Text = L"Text";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(59, 6);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(340, 20);
			this->label38->TabIndex = 1;
			this->label38->Text = L"DS5";
			this->label38->Click += gcnew System::EventHandler(this, &chatroom::label38_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(3, 3);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(50, 50);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 0;
			this->pictureBox16->TabStop = false;
			// 
			// panel28
			// 
			this->panel28->Controls->Add(this->checkBox27);
			this->panel28->Controls->Add(this->label39);
			this->panel28->Controls->Add(this->label40);
			this->panel28->Controls->Add(this->label41);
			this->panel28->Controls->Add(this->pictureBox17);
			this->panel28->Location = System::Drawing::Point(3, 387);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(715, 58);
			this->panel28->TabIndex = 10;
			this->panel28->Visible = false;
			// 
			// checkBox27
			// 
			this->checkBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox27->Location = System::Drawing::Point(669, 29);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(13, 13);
			this->checkBox27->TabIndex = 5;
			this->checkBox27->Text = L"checkBox27";
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->Visible = false;
			this->checkBox27->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox27_CheckedChanged);
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(612, 3);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(100, 23);
			this->label39->TabIndex = 3;
			this->label39->Text = L"10/05/2022";
			this->label39->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(59, 29);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(575, 24);
			this->label40->TabIndex = 2;
			this->label40->Text = L"Text";
			// 
			// label41
			// 
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(59, 6);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(340, 20);
			this->label41->TabIndex = 1;
			this->label41->Text = L"DS6";
			this->label41->Click += gcnew System::EventHandler(this, &chatroom::label41_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(3, 3);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(50, 50);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 0;
			this->pictureBox17->TabStop = false;
			// 
			// panel29
			// 
			this->panel29->Controls->Add(this->checkBox28);
			this->panel29->Controls->Add(this->label42);
			this->panel29->Controls->Add(this->label43);
			this->panel29->Controls->Add(this->label44);
			this->panel29->Controls->Add(this->pictureBox18);
			this->panel29->Location = System::Drawing::Point(3, 451);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(715, 58);
			this->panel29->TabIndex = 11;
			this->panel29->Visible = false;
			// 
			// checkBox28
			// 
			this->checkBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox28->Location = System::Drawing::Point(669, 32);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(13, 13);
			this->checkBox28->TabIndex = 5;
			this->checkBox28->Text = L"checkBox28";
			this->checkBox28->UseVisualStyleBackColor = true;
			this->checkBox28->Visible = false;
			this->checkBox28->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox28_CheckedChanged);
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(612, 3);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(100, 23);
			this->label42->TabIndex = 3;
			this->label42->Text = L"10/05/2022";
			this->label42->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(59, 29);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(575, 24);
			this->label43->TabIndex = 2;
			this->label43->Text = L"Text";
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(59, 6);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(340, 20);
			this->label44->TabIndex = 1;
			this->label44->Text = L"DS7";
			this->label44->Click += gcnew System::EventHandler(this, &chatroom::label44_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(3, 3);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(50, 50);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 0;
			this->pictureBox18->TabStop = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Gray;
			this->textBox7->Location = System::Drawing::Point(3, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(669, 26);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"Search";
			this->textBox7->Click += gcnew System::EventHandler(this, &chatroom::textBox7_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(675, -17);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(43, 10);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(289, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CHATROOM";
			// 
			// pn_profile
			// 
			this->pn_profile->Controls->Add(this->checkBox30);
			this->pn_profile->Controls->Add(this->id_text);
			this->pn_profile->Controls->Add(this->Update);
			this->pn_profile->Controls->Add(this->pictureBox4);
			this->pn_profile->Controls->Add(this->change_photo_bu);
			this->pn_profile->Controls->Add(this->richTextBox1);
			this->pn_profile->Controls->Add(this->description_label);
			this->pn_profile->Controls->Add(this->fname_text);
			this->pn_profile->Controls->Add(this->lname_text);
			this->pn_profile->Controls->Add(this->fname_label);
			this->pn_profile->Controls->Add(this->lname_label);
			this->pn_profile->Controls->Add(this->ID_label);
			this->pn_profile->Controls->Add(this->profile_pic);
			this->pn_profile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_profile->Location = System::Drawing::Point(0, 0);
			this->pn_profile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_profile->Name = L"pn_profile";
			this->pn_profile->Size = System::Drawing::Size(724, 552);
			this->pn_profile->TabIndex = 0;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Checked = true;
			this->checkBox30->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox30->Location = System::Drawing::Point(604, 408);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(68, 20);
			this->checkBox30->TabIndex = 13;
			this->checkBox30->Text = L"Visible";
			this->checkBox30->UseVisualStyleBackColor = true;
			this->checkBox30->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox30_CheckedChanged);
			// 
			// id_text
			// 
			this->id_text->AutoSize = true;
			this->id_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_text->Location = System::Drawing::Point(239, 265);
			this->id_text->Name = L"id_text";
			this->id_text->Size = System::Drawing::Size(60, 24);
			this->id_text->TabIndex = 12;
			this->id_text->Text = L"label9";
			// 
			// Update
			// 
			this->Update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Update->Location = System::Drawing::Point(335, 493);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(87, 32);
			this->Update->TabIndex = 11;
			this->Update->Text = L"Save";
			this->Update->UseVisualStyleBackColor = true;
			this->Update->Click += gcnew System::EventHandler(this, &chatroom::Update_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(243, 207);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(49, 34);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// change_photo_bu
			// 
			this->change_photo_bu->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change_photo_bu->Location = System::Drawing::Point(302, 207);
			this->change_photo_bu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->change_photo_bu->Name = L"change_photo_bu";
			this->change_photo_bu->Size = System::Drawing::Size(215, 33);
			this->change_photo_bu->TabIndex = 9;
			this->change_photo_bu->Text = L"Change Photo";
			this->change_photo_bu->UseVisualStyleBackColor = true;
			this->change_photo_bu->Click += gcnew System::EventHandler(this, &chatroom::change_photo_bu_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(243, 408);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(335, 76);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// description_label
			// 
			this->description_label->AutoSize = true;
			this->description_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label->Location = System::Drawing::Point(44, 399);
			this->description_label->Name = L"description_label";
			this->description_label->Size = System::Drawing::Size(154, 27);
			this->description_label->TabIndex = 7;
			this->description_label->Text = L"Description :";
			// 
			// fname_text
			// 
			this->fname_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname_text->Location = System::Drawing::Point(243, 312);
			this->fname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fname_text->Name = L"fname_text";
			this->fname_text->Size = System::Drawing::Size(274, 26);
			this->fname_text->TabIndex = 6;
			// 
			// lname_text
			// 
			this->lname_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname_text->Location = System::Drawing::Point(243, 360);
			this->lname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lname_text->Name = L"lname_text";
			this->lname_text->Size = System::Drawing::Size(274, 26);
			this->lname_text->TabIndex = 5;
			// 
			// fname_label
			// 
			this->fname_label->AutoSize = true;
			this->fname_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname_label->Location = System::Drawing::Point(44, 307);
			this->fname_label->Name = L"fname_label";
			this->fname_label->Size = System::Drawing::Size(140, 27);
			this->fname_label->TabIndex = 3;
			this->fname_label->Text = L"First Name:";
			// 
			// lname_label
			// 
			this->lname_label->AutoSize = true;
			this->lname_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname_label->Location = System::Drawing::Point(44, 353);
			this->lname_label->Name = L"lname_label";
			this->lname_label->Size = System::Drawing::Size(136, 27);
			this->lname_label->TabIndex = 2;
			this->lname_label->Text = L"Last Name:";
			// 
			// ID_label
			// 
			this->ID_label->AutoSize = true;
			this->ID_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_label->Location = System::Drawing::Point(44, 262);
			this->ID_label->Name = L"ID_label";
			this->ID_label->Size = System::Drawing::Size(104, 27);
			this->ID_label->TabIndex = 1;
			this->ID_label->Text = L"User ID:";
			// 
			// profile_pic
			// 
			this->profile_pic->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->profile_pic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->profile_pic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->profile_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_pic.Image")));
			this->profile_pic->Location = System::Drawing::Point(247, 2);
			this->profile_pic->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profile_pic->Name = L"profile_pic";
			this->profile_pic->Size = System::Drawing::Size(274, 200);
			this->profile_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profile_pic->TabIndex = 0;
			this->profile_pic->TabStop = false;
			this->profile_pic->Click += gcnew System::EventHandler(this, &chatroom::profile_pic_Click);
			// 
			// pn_new_contact
			// 
			this->pn_new_contact->Controls->Add(this->add_contact);
			this->pn_new_contact->Controls->Add(this->add_label);
			this->pn_new_contact->Controls->Add(this->ID_textBox);
			this->pn_new_contact->Controls->Add(this->label12);
			this->pn_new_contact->Controls->Add(this->pictureBox5);
			this->pn_new_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_new_contact->Location = System::Drawing::Point(0, 0);
			this->pn_new_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_new_contact->Name = L"pn_new_contact";
			this->pn_new_contact->Size = System::Drawing::Size(724, 552);
			this->pn_new_contact->TabIndex = 1;
			// 
			// add_contact
			// 
			this->add_contact->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_contact->Location = System::Drawing::Point(303, 394);
			this->add_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_contact->Name = L"add_contact";
			this->add_contact->Size = System::Drawing::Size(176, 32);
			this->add_contact->TabIndex = 11;
			this->add_contact->Text = L"Add Contact";
			this->add_contact->UseVisualStyleBackColor = true;
			this->add_contact->Click += gcnew System::EventHandler(this, &chatroom::add_contact_Click);
			// 
			// add_label
			// 
			this->add_label->AutoSize = true;
			this->add_label->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->add_label->Location = System::Drawing::Point(254, 38);
			this->add_label->Name = L"add_label";
			this->add_label->Size = System::Drawing::Size(306, 39);
			this->add_label->TabIndex = 10;
			this->add_label->Text = L"Add Your New Contact";
			// 
			// ID_textBox
			// 
			this->ID_textBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_textBox->Location = System::Drawing::Point(335, 244);
			this->ID_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_textBox->Name = L"ID_textBox";
			this->ID_textBox->Size = System::Drawing::Size(302, 53);
			this->ID_textBox->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(132, 236);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 57);
			this->label12->TabIndex = 5;
			this->label12->Text = L"ID :";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(25, 200);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(128, 118);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// edit_contact
			// 
			this->edit_contact->Location = System::Drawing::Point(0, 0);
			this->edit_contact->Name = L"edit_contact";
			this->edit_contact->Size = System::Drawing::Size(75, 23);
			this->edit_contact->TabIndex = 0;
			// 
			// lname_textBox
			// 
			this->lname_textBox->Location = System::Drawing::Point(294, 183);
			this->lname_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lname_textBox->Name = L"lname_textBox";
			this->lname_textBox->Size = System::Drawing::Size(217, 20);
			this->lname_textBox->TabIndex = 9;
			// 
			// phone_textBox
			// 
			this->phone_textBox->Location = System::Drawing::Point(294, 314);
			this->phone_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->phone_textBox->Name = L"phone_textBox";
			this->phone_textBox->Size = System::Drawing::Size(217, 20);
			this->phone_textBox->TabIndex = 7;
			// 
			// pn_show_contact
			// 
			this->pn_show_contact->Controls->Add(this->flowLayoutPanel1);
			this->pn_show_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_show_contact->Location = System::Drawing::Point(0, 0);
			this->pn_show_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_show_contact->Name = L"pn_show_contact";
			this->pn_show_contact->Size = System::Drawing::Size(724, 552);
			this->pn_show_contact->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->panel7);
			this->flowLayoutPanel1->Controls->Add(this->panel8);
			this->flowLayoutPanel1->Controls->Add(this->panel9);
			this->flowLayoutPanel1->Controls->Add(this->panel10);
			this->flowLayoutPanel1->Controls->Add(this->panel11);
			this->flowLayoutPanel1->Controls->Add(this->panel12);
			this->flowLayoutPanel1->Controls->Add(this->panel13);
			this->flowLayoutPanel1->Controls->Add(this->panel14);
			this->flowLayoutPanel1->Controls->Add(this->panel15);
			this->flowLayoutPanel1->Controls->Add(this->panel16);
			this->flowLayoutPanel1->Controls->Add(this->panel17);
			this->flowLayoutPanel1->Controls->Add(this->panel18);
			this->flowLayoutPanel1->Controls->Add(this->panel19);
			this->flowLayoutPanel1->Controls->Add(this->panel20);
			this->flowLayoutPanel1->Controls->Add(this->panel21);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(724, 552);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->choose_);
			this->panel1->Controls->Add(this->edit_delete2);
			this->panel1->Controls->Add(this->edit_delete);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(715, 41);
			this->panel1->TabIndex = 0;
			// 
			// choose_
			// 
			this->choose_->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choose_->Location = System::Drawing::Point(525, 6);
			this->choose_->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->choose_->Name = L"choose_";
			this->choose_->Size = System::Drawing::Size(171, 28);
			this->choose_->TabIndex = 3;
			this->choose_->Text = L"Add to my chatroom";
			this->choose_->UseVisualStyleBackColor = true;
			this->choose_->Visible = false;
			this->choose_->Click += gcnew System::EventHandler(this, &chatroom::choose__Click);
			// 
			// edit_delete2
			// 
			this->edit_delete2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_delete2->Location = System::Drawing::Point(592, 5);
			this->edit_delete2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_delete2->Name = L"edit_delete2";
			this->edit_delete2->Size = System::Drawing::Size(105, 28);
			this->edit_delete2->TabIndex = 2;
			this->edit_delete2->Text = L"Delete";
			this->edit_delete2->UseVisualStyleBackColor = true;
			this->edit_delete2->Visible = false;
			this->edit_delete2->Click += gcnew System::EventHandler(this, &chatroom::edit_delete2_Click);
			// 
			// edit_delete
			// 
			this->edit_delete->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_delete->Location = System::Drawing::Point(592, 5);
			this->edit_delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_delete->Name = L"edit_delete";
			this->edit_delete->Size = System::Drawing::Size(105, 28);
			this->edit_delete->TabIndex = 1;
			this->edit_delete->Text = L"Delete";
			this->edit_delete->UseVisualStyleBackColor = true;
			this->edit_delete->Click += gcnew System::EventHandler(this, &chatroom::edit_delete_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(49, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 27);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Your contacts";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->lname1);
			this->panel2->Controls->Add(this->phone1);
			this->panel2->Controls->Add(this->fname1);
			this->panel2->Controls->Add(this->Unselect1);
			this->panel2->Controls->Add(this->select1);
			this->panel2->Controls->Add(this->Delete1);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(3, 47);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(715, 63);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::panel2_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(336, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"label9";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(5, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(70, 61);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// lname1
			// 
			this->lname1->AutoSize = true;
			this->lname1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname1->Location = System::Drawing::Point(188, 9);
			this->lname1->Name = L"lname1";
			this->lname1->Size = System::Drawing::Size(95, 19);
			this->lname1->TabIndex = 9;
			this->lname1->Text = L"Last Name";
			// 
			// phone1
			// 
			this->phone1->AutoSize = true;
			this->phone1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone1->Location = System::Drawing::Point(106, 36);
			this->phone1->Name = L"phone1";
			this->phone1->Size = System::Drawing::Size(98, 17);
			this->phone1->TabIndex = 8;
			this->phone1->Text = L"Phonr Number";
			// 
			// fname1
			// 
			this->fname1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname1->AutoSize = true;
			this->fname1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname1->Location = System::Drawing::Point(81, 8);
			this->fname1->Name = L"fname1";
			this->fname1->Size = System::Drawing::Size(97, 19);
			this->fname1->TabIndex = 7;
			this->fname1->Text = L"First Name";
			// 
			// Unselect1
			// 
			this->Unselect1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect1->Location = System::Drawing::Point(614, 14);
			this->Unselect1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect1->Name = L"Unselect1";
			this->Unselect1->Size = System::Drawing::Size(97, 28);
			this->Unselect1->TabIndex = 6;
			this->Unselect1->Text = L"Unselect";
			this->Unselect1->UseVisualStyleBackColor = true;
			this->Unselect1->Visible = false;
			this->Unselect1->Click += gcnew System::EventHandler(this, &chatroom::Unselect_Click);
			// 
			// select1
			// 
			this->select1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select1->Location = System::Drawing::Point(513, 15);
			this->select1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select1->Name = L"select1";
			this->select1->Size = System::Drawing::Size(76, 31);
			this->select1->TabIndex = 5;
			this->select1->Text = L"select";
			this->select1->UseVisualStyleBackColor = true;
			this->select1->Visible = false;
			this->select1->Click += gcnew System::EventHandler(this, &chatroom::select1_Click);
			// 
			// Delete1
			// 
			this->Delete1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete1->Location = System::Drawing::Point(614, 15);
			this->Delete1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete1->Name = L"Delete1";
			this->Delete1->Size = System::Drawing::Size(82, 27);
			this->Delete1->TabIndex = 3;
			this->Delete1->Text = L"Delete";
			this->Delete1->UseVisualStyleBackColor = true;
			this->Delete1->Visible = false;
			this->Delete1->Click += gcnew System::EventHandler(this, &chatroom::Delete1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(458, 22);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(17, 14);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox1_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->pictureBox27);
			this->panel3->Controls->Add(this->lname2);
			this->panel3->Controls->Add(this->phone2);
			this->panel3->Controls->Add(this->fname2);
			this->panel3->Controls->Add(this->Unselect2);
			this->panel3->Controls->Add(this->select2);
			this->panel3->Controls->Add(this->Delete2);
			this->panel3->Controls->Add(this->checkBox2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(3, 114);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(715, 63);
			this->panel3->TabIndex = 2;
			this->panel3->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(336, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"label10";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(3, 2);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(70, 61);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 11;
			this->pictureBox27->TabStop = false;
			// 
			// lname2
			// 
			this->lname2->AutoSize = true;
			this->lname2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname2->Location = System::Drawing::Point(186, 5);
			this->lname2->Name = L"lname2";
			this->lname2->Size = System::Drawing::Size(95, 19);
			this->lname2->TabIndex = 9;
			this->lname2->Text = L"Last Name";
			// 
			// phone2
			// 
			this->phone2->AutoSize = true;
			this->phone2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone2->Location = System::Drawing::Point(107, 36);
			this->phone2->Name = L"phone2";
			this->phone2->Size = System::Drawing::Size(98, 17);
			this->phone2->TabIndex = 8;
			this->phone2->Text = L"Phonr Number";
			// 
			// fname2
			// 
			this->fname2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname2->AutoSize = true;
			this->fname2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname2->Location = System::Drawing::Point(83, 7);
			this->fname2->Name = L"fname2";
			this->fname2->Size = System::Drawing::Size(97, 19);
			this->fname2->TabIndex = 7;
			this->fname2->Text = L"First Name";
			// 
			// Unselect2
			// 
			this->Unselect2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect2->Location = System::Drawing::Point(614, 15);
			this->Unselect2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect2->Name = L"Unselect2";
			this->Unselect2->Size = System::Drawing::Size(97, 28);
			this->Unselect2->TabIndex = 6;
			this->Unselect2->Text = L"Unselect";
			this->Unselect2->UseVisualStyleBackColor = true;
			this->Unselect2->Visible = false;
			this->Unselect2->Click += gcnew System::EventHandler(this, &chatroom::Unselect2_Click);
			// 
			// select2
			// 
			this->select2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select2->Location = System::Drawing::Point(513, 15);
			this->select2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select2->Name = L"select2";
			this->select2->Size = System::Drawing::Size(76, 31);
			this->select2->TabIndex = 5;
			this->select2->Text = L"select";
			this->select2->UseVisualStyleBackColor = true;
			this->select2->Visible = false;
			this->select2->Click += gcnew System::EventHandler(this, &chatroom::select2_Click);
			// 
			// Delete2
			// 
			this->Delete2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete2->Location = System::Drawing::Point(614, 15);
			this->Delete2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete2->Name = L"Delete2";
			this->Delete2->Size = System::Drawing::Size(82, 27);
			this->Delete2->TabIndex = 3;
			this->Delete2->Text = L"Delete";
			this->Delete2->UseVisualStyleBackColor = true;
			this->Delete2->Visible = false;
			this->Delete2->Click += gcnew System::EventHandler(this, &chatroom::Delete2_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(458, 23);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(17, 14);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->pictureBox28);
			this->panel4->Controls->Add(this->lname3);
			this->panel4->Controls->Add(this->phone3);
			this->panel4->Controls->Add(this->fname3);
			this->panel4->Controls->Add(this->Unselect3);
			this->panel4->Controls->Add(this->select3);
			this->panel4->Controls->Add(this->Delete3);
			this->panel4->Controls->Add(this->checkBox3);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(3, 181);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(715, 63);
			this->panel4->TabIndex = 3;
			this->panel4->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(336, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"label11";
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(2, 1);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(70, 61);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 11;
			this->pictureBox28->TabStop = false;
			// 
			// lname3
			// 
			this->lname3->AutoSize = true;
			this->lname3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname3->Location = System::Drawing::Point(190, 5);
			this->lname3->Name = L"lname3";
			this->lname3->Size = System::Drawing::Size(95, 19);
			this->lname3->TabIndex = 9;
			this->lname3->Text = L"Last Name";
			// 
			// phone3
			// 
			this->phone3->AutoSize = true;
			this->phone3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone3->Location = System::Drawing::Point(111, 37);
			this->phone3->Name = L"phone3";
			this->phone3->Size = System::Drawing::Size(98, 17);
			this->phone3->TabIndex = 8;
			this->phone3->Text = L"Phonr Number";
			// 
			// fname3
			// 
			this->fname3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname3->AutoSize = true;
			this->fname3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname3->Location = System::Drawing::Point(83, 4);
			this->fname3->Name = L"fname3";
			this->fname3->Size = System::Drawing::Size(97, 19);
			this->fname3->TabIndex = 7;
			this->fname3->Text = L"First Name";
			// 
			// Unselect3
			// 
			this->Unselect3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect3->Location = System::Drawing::Point(614, 15);
			this->Unselect3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect3->Name = L"Unselect3";
			this->Unselect3->Size = System::Drawing::Size(97, 28);
			this->Unselect3->TabIndex = 6;
			this->Unselect3->Text = L"Unselect";
			this->Unselect3->UseVisualStyleBackColor = true;
			this->Unselect3->Visible = false;
			this->Unselect3->Click += gcnew System::EventHandler(this, &chatroom::Unselect3_Click);
			// 
			// select3
			// 
			this->select3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select3->Location = System::Drawing::Point(513, 15);
			this->select3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select3->Name = L"select3";
			this->select3->Size = System::Drawing::Size(76, 31);
			this->select3->TabIndex = 5;
			this->select3->Text = L"select";
			this->select3->UseVisualStyleBackColor = true;
			this->select3->Visible = false;
			this->select3->Click += gcnew System::EventHandler(this, &chatroom::select3_Click);
			// 
			// Delete3
			// 
			this->Delete3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete3->Location = System::Drawing::Point(614, 15);
			this->Delete3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete3->Name = L"Delete3";
			this->Delete3->Size = System::Drawing::Size(82, 27);
			this->Delete3->TabIndex = 3;
			this->Delete3->Text = L"Delete";
			this->Delete3->UseVisualStyleBackColor = true;
			this->Delete3->Visible = false;
			this->Delete3->Click += gcnew System::EventHandler(this, &chatroom::Delete3_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(458, 24);
			this->checkBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(17, 14);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->pictureBox29);
			this->panel5->Controls->Add(this->lname4);
			this->panel5->Controls->Add(this->phone4);
			this->panel5->Controls->Add(this->fname4);
			this->panel5->Controls->Add(this->Unselect4);
			this->panel5->Controls->Add(this->select4);
			this->panel5->Controls->Add(this->Delete4);
			this->panel5->Controls->Add(this->checkBox4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(3, 248);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(715, 63);
			this->panel5->TabIndex = 4;
			this->panel5->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(336, 24);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"label13";
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(3, 0);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(70, 61);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox29->TabIndex = 12;
			this->pictureBox29->TabStop = false;
			// 
			// lname4
			// 
			this->lname4->AutoSize = true;
			this->lname4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname4->Location = System::Drawing::Point(188, 9);
			this->lname4->Name = L"lname4";
			this->lname4->Size = System::Drawing::Size(95, 19);
			this->lname4->TabIndex = 9;
			this->lname4->Text = L"Last Name";
			// 
			// phone4
			// 
			this->phone4->AutoSize = true;
			this->phone4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone4->Location = System::Drawing::Point(109, 41);
			this->phone4->Name = L"phone4";
			this->phone4->Size = System::Drawing::Size(98, 17);
			this->phone4->TabIndex = 8;
			this->phone4->Text = L"Phonr Number";
			// 
			// fname4
			// 
			this->fname4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname4->AutoSize = true;
			this->fname4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname4->Location = System::Drawing::Point(81, 8);
			this->fname4->Name = L"fname4";
			this->fname4->Size = System::Drawing::Size(97, 19);
			this->fname4->TabIndex = 7;
			this->fname4->Text = L"First Name";
			// 
			// Unselect4
			// 
			this->Unselect4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect4->Location = System::Drawing::Point(614, 15);
			this->Unselect4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect4->Name = L"Unselect4";
			this->Unselect4->Size = System::Drawing::Size(97, 28);
			this->Unselect4->TabIndex = 6;
			this->Unselect4->Text = L"Unselect";
			this->Unselect4->UseVisualStyleBackColor = true;
			this->Unselect4->Visible = false;
			this->Unselect4->Click += gcnew System::EventHandler(this, &chatroom::Unselect4_Click);
			// 
			// select4
			// 
			this->select4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select4->Location = System::Drawing::Point(513, 12);
			this->select4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select4->Name = L"select4";
			this->select4->Size = System::Drawing::Size(76, 31);
			this->select4->TabIndex = 5;
			this->select4->Text = L"select";
			this->select4->UseVisualStyleBackColor = true;
			this->select4->Visible = false;
			this->select4->Click += gcnew System::EventHandler(this, &chatroom::select4_Click);
			// 
			// Delete4
			// 
			this->Delete4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete4->Location = System::Drawing::Point(614, 15);
			this->Delete4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete4->Name = L"Delete4";
			this->Delete4->Size = System::Drawing::Size(82, 27);
			this->Delete4->TabIndex = 3;
			this->Delete4->Text = L"Delete";
			this->Delete4->UseVisualStyleBackColor = true;
			this->Delete4->Visible = false;
			this->Delete4->Click += gcnew System::EventHandler(this, &chatroom::Delete4_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(458, 21);
			this->checkBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(17, 14);
			this->checkBox4->TabIndex = 2;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->Visible = false;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->pictureBox30);
			this->panel6->Controls->Add(this->lname5);
			this->panel6->Controls->Add(this->phone5);
			this->panel6->Controls->Add(this->fname5);
			this->panel6->Controls->Add(this->Unselect5);
			this->panel6->Controls->Add(this->select5);
			this->panel6->Controls->Add(this->Delete5);
			this->panel6->Controls->Add(this->checkBox5);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(3, 315);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(715, 63);
			this->panel6->TabIndex = 5;
			this->panel6->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(336, 24);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"label14";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(2, 0);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(70, 61);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox30->TabIndex = 13;
			this->pictureBox30->TabStop = false;
			// 
			// lname5
			// 
			this->lname5->AutoSize = true;
			this->lname5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname5->Location = System::Drawing::Point(190, 10);
			this->lname5->Name = L"lname5";
			this->lname5->Size = System::Drawing::Size(95, 19);
			this->lname5->TabIndex = 9;
			this->lname5->Text = L"Last Name";
			// 
			// phone5
			// 
			this->phone5->AutoSize = true;
			this->phone5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone5->Location = System::Drawing::Point(111, 42);
			this->phone5->Name = L"phone5";
			this->phone5->Size = System::Drawing::Size(98, 17);
			this->phone5->TabIndex = 8;
			this->phone5->Text = L"Phonr Number";
			// 
			// fname5
			// 
			this->fname5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname5->AutoSize = true;
			this->fname5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname5->Location = System::Drawing::Point(83, 9);
			this->fname5->Name = L"fname5";
			this->fname5->Size = System::Drawing::Size(97, 19);
			this->fname5->TabIndex = 7;
			this->fname5->Text = L"First Name";
			// 
			// Unselect5
			// 
			this->Unselect5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect5->Location = System::Drawing::Point(614, 15);
			this->Unselect5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect5->Name = L"Unselect5";
			this->Unselect5->Size = System::Drawing::Size(97, 28);
			this->Unselect5->TabIndex = 6;
			this->Unselect5->Text = L"Unselect";
			this->Unselect5->UseVisualStyleBackColor = true;
			this->Unselect5->Visible = false;
			this->Unselect5->Click += gcnew System::EventHandler(this, &chatroom::Unselect5_Click);
			// 
			// select5
			// 
			this->select5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select5->Location = System::Drawing::Point(513, 15);
			this->select5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select5->Name = L"select5";
			this->select5->Size = System::Drawing::Size(76, 31);
			this->select5->TabIndex = 5;
			this->select5->Text = L"select";
			this->select5->UseVisualStyleBackColor = true;
			this->select5->Visible = false;
			this->select5->Click += gcnew System::EventHandler(this, &chatroom::select5_Click);
			// 
			// Delete5
			// 
			this->Delete5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete5->Location = System::Drawing::Point(614, 15);
			this->Delete5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete5->Name = L"Delete5";
			this->Delete5->Size = System::Drawing::Size(82, 27);
			this->Delete5->TabIndex = 3;
			this->Delete5->Text = L"Delete";
			this->Delete5->UseVisualStyleBackColor = true;
			this->Delete5->Visible = false;
			this->Delete5->Click += gcnew System::EventHandler(this, &chatroom::Delete5_Click);
			// 
			// checkBox5
			// 
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(458, 21);
			this->checkBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(17, 14);
			this->checkBox5->TabIndex = 2;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->pictureBox31);
			this->panel7->Controls->Add(this->lname6);
			this->panel7->Controls->Add(this->phone6);
			this->panel7->Controls->Add(this->Unselect6);
			this->panel7->Controls->Add(this->fname6);
			this->panel7->Controls->Add(this->select6);
			this->panel7->Controls->Add(this->Delete6);
			this->panel7->Controls->Add(this->checkBox6);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(3, 382);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(715, 63);
			this->panel7->TabIndex = 6;
			this->panel7->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(336, 24);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"label15";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(3, -1);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(70, 61);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 14;
			this->pictureBox31->TabStop = false;
			// 
			// lname6
			// 
			this->lname6->AutoSize = true;
			this->lname6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname6->Location = System::Drawing::Point(186, 6);
			this->lname6->Name = L"lname6";
			this->lname6->Size = System::Drawing::Size(95, 19);
			this->lname6->TabIndex = 8;
			this->lname6->Text = L"Last Name";
			// 
			// phone6
			// 
			this->phone6->AutoSize = true;
			this->phone6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone6->Location = System::Drawing::Point(107, 38);
			this->phone6->Name = L"phone6";
			this->phone6->Size = System::Drawing::Size(98, 17);
			this->phone6->TabIndex = 7;
			this->phone6->Text = L"Phonr Number";
			// 
			// Unselect6
			// 
			this->Unselect6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect6->Location = System::Drawing::Point(614, 15);
			this->Unselect6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect6->Name = L"Unselect6";
			this->Unselect6->Size = System::Drawing::Size(97, 28);
			this->Unselect6->TabIndex = 6;
			this->Unselect6->Text = L"Unselect";
			this->Unselect6->UseVisualStyleBackColor = true;
			this->Unselect6->Visible = false;
			this->Unselect6->Click += gcnew System::EventHandler(this, &chatroom::Unselect6_Click);
			// 
			// fname6
			// 
			this->fname6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname6->AutoSize = true;
			this->fname6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname6->Location = System::Drawing::Point(85, 6);
			this->fname6->Name = L"fname6";
			this->fname6->Size = System::Drawing::Size(97, 19);
			this->fname6->TabIndex = 0;
			this->fname6->Text = L"First Name";
			// 
			// select6
			// 
			this->select6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select6->Location = System::Drawing::Point(513, 15);
			this->select6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select6->Name = L"select6";
			this->select6->Size = System::Drawing::Size(76, 31);
			this->select6->TabIndex = 5;
			this->select6->Text = L"select";
			this->select6->UseVisualStyleBackColor = true;
			this->select6->Visible = false;
			this->select6->Click += gcnew System::EventHandler(this, &chatroom::select6_Click);
			// 
			// Delete6
			// 
			this->Delete6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete6->Location = System::Drawing::Point(614, 15);
			this->Delete6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete6->Name = L"Delete6";
			this->Delete6->Size = System::Drawing::Size(82, 27);
			this->Delete6->TabIndex = 3;
			this->Delete6->Text = L"Delete";
			this->Delete6->UseVisualStyleBackColor = true;
			this->Delete6->Visible = false;
			this->Delete6->Click += gcnew System::EventHandler(this, &chatroom::Delete6_Click);
			// 
			// checkBox6
			// 
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(458, 21);
			this->checkBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(17, 14);
			this->checkBox6->TabIndex = 2;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->Visible = false;
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->pictureBox32);
			this->panel8->Controls->Add(this->lname7);
			this->panel8->Controls->Add(this->phone7);
			this->panel8->Controls->Add(this->fname7);
			this->panel8->Controls->Add(this->Unselect7);
			this->panel8->Controls->Add(this->select7);
			this->panel8->Controls->Add(this->Delete7);
			this->panel8->Controls->Add(this->checkBox7);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(3, 449);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(715, 63);
			this->panel8->TabIndex = 7;
			this->panel8->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(336, 24);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 16;
			this->label16->Text = L"label16";
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(2, -1);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(70, 61);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 15;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &chatroom::pictureBox32_Click);
			// 
			// lname7
			// 
			this->lname7->AutoSize = true;
			this->lname7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname7->Location = System::Drawing::Point(192, 11);
			this->lname7->Name = L"lname7";
			this->lname7->Size = System::Drawing::Size(95, 19);
			this->lname7->TabIndex = 9;
			this->lname7->Text = L"Last Name";
			// 
			// phone7
			// 
			this->phone7->AutoSize = true;
			this->phone7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone7->Location = System::Drawing::Point(113, 43);
			this->phone7->Name = L"phone7";
			this->phone7->Size = System::Drawing::Size(98, 17);
			this->phone7->TabIndex = 8;
			this->phone7->Text = L"Phonr Number";
			// 
			// fname7
			// 
			this->fname7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname7->AutoSize = true;
			this->fname7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname7->Location = System::Drawing::Point(85, 10);
			this->fname7->Name = L"fname7";
			this->fname7->Size = System::Drawing::Size(97, 19);
			this->fname7->TabIndex = 7;
			this->fname7->Text = L"First Name";
			// 
			// Unselect7
			// 
			this->Unselect7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect7->Location = System::Drawing::Point(614, 15);
			this->Unselect7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect7->Name = L"Unselect7";
			this->Unselect7->Size = System::Drawing::Size(97, 28);
			this->Unselect7->TabIndex = 6;
			this->Unselect7->Text = L"Unselect";
			this->Unselect7->UseVisualStyleBackColor = true;
			this->Unselect7->Visible = false;
			this->Unselect7->Click += gcnew System::EventHandler(this, &chatroom::Unselect7_Click);
			// 
			// select7
			// 
			this->select7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select7->Location = System::Drawing::Point(511, 15);
			this->select7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select7->Name = L"select7";
			this->select7->Size = System::Drawing::Size(76, 31);
			this->select7->TabIndex = 5;
			this->select7->Text = L"select";
			this->select7->UseVisualStyleBackColor = true;
			this->select7->Visible = false;
			this->select7->Click += gcnew System::EventHandler(this, &chatroom::select7_Click);
			// 
			// Delete7
			// 
			this->Delete7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete7->Location = System::Drawing::Point(614, 15);
			this->Delete7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete7->Name = L"Delete7";
			this->Delete7->Size = System::Drawing::Size(82, 27);
			this->Delete7->TabIndex = 3;
			this->Delete7->Text = L"Delete";
			this->Delete7->UseVisualStyleBackColor = true;
			this->Delete7->Visible = false;
			this->Delete7->Click += gcnew System::EventHandler(this, &chatroom::Delete7_Click);
			// 
			// checkBox7
			// 
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox7->Location = System::Drawing::Point(458, 22);
			this->checkBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(17, 14);
			this->checkBox7->TabIndex = 2;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->Visible = false;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label17);
			this->panel9->Controls->Add(this->pictureBox33);
			this->panel9->Controls->Add(this->lname8);
			this->panel9->Controls->Add(this->phone8);
			this->panel9->Controls->Add(this->fname8);
			this->panel9->Controls->Add(this->Unselect8);
			this->panel9->Controls->Add(this->select8);
			this->panel9->Controls->Add(this->Delete8);
			this->panel9->Controls->Add(this->checkBox8);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(3, 516);
			this->panel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(715, 63);
			this->panel9->TabIndex = 8;
			this->panel9->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(336, 24);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 12;
			this->label17->Text = L"label17";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(3, 0);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(70, 61);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 11;
			this->pictureBox33->TabStop = false;
			// 
			// lname8
			// 
			this->lname8->AutoSize = true;
			this->lname8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname8->Location = System::Drawing::Point(192, 9);
			this->lname8->Name = L"lname8";
			this->lname8->Size = System::Drawing::Size(95, 19);
			this->lname8->TabIndex = 9;
			this->lname8->Text = L"Last Name";
			// 
			// phone8
			// 
			this->phone8->AutoSize = true;
			this->phone8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone8->Location = System::Drawing::Point(113, 41);
			this->phone8->Name = L"phone8";
			this->phone8->Size = System::Drawing::Size(98, 17);
			this->phone8->TabIndex = 8;
			this->phone8->Text = L"Phonr Number";
			// 
			// fname8
			// 
			this->fname8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname8->AutoSize = true;
			this->fname8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname8->Location = System::Drawing::Point(85, 8);
			this->fname8->Name = L"fname8";
			this->fname8->Size = System::Drawing::Size(97, 19);
			this->fname8->TabIndex = 7;
			this->fname8->Text = L"First Name";
			// 
			// Unselect8
			// 
			this->Unselect8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect8->Location = System::Drawing::Point(614, 15);
			this->Unselect8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect8->Name = L"Unselect8";
			this->Unselect8->Size = System::Drawing::Size(97, 28);
			this->Unselect8->TabIndex = 6;
			this->Unselect8->Text = L"Unselect";
			this->Unselect8->UseVisualStyleBackColor = true;
			this->Unselect8->Visible = false;
			this->Unselect8->Click += gcnew System::EventHandler(this, &chatroom::Unselect8_Click);
			// 
			// select8
			// 
			this->select8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select8->Location = System::Drawing::Point(513, 15);
			this->select8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select8->Name = L"select8";
			this->select8->Size = System::Drawing::Size(76, 31);
			this->select8->TabIndex = 5;
			this->select8->Text = L"select";
			this->select8->UseVisualStyleBackColor = true;
			this->select8->Visible = false;
			this->select8->Click += gcnew System::EventHandler(this, &chatroom::select8_Click);
			// 
			// Delete8
			// 
			this->Delete8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete8->Location = System::Drawing::Point(614, 15);
			this->Delete8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete8->Name = L"Delete8";
			this->Delete8->Size = System::Drawing::Size(82, 27);
			this->Delete8->TabIndex = 3;
			this->Delete8->Text = L"Delete";
			this->Delete8->UseVisualStyleBackColor = true;
			this->Delete8->Visible = false;
			this->Delete8->Click += gcnew System::EventHandler(this, &chatroom::Delete8_Click);
			// 
			// checkBox8
			// 
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox8->Location = System::Drawing::Point(458, 23);
			this->checkBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(17, 14);
			this->checkBox8->TabIndex = 2;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->Visible = false;
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label20);
			this->panel10->Controls->Add(this->pictureBox34);
			this->panel10->Controls->Add(this->lname9);
			this->panel10->Controls->Add(this->phone9);
			this->panel10->Controls->Add(this->fname9);
			this->panel10->Controls->Add(this->Unselect9);
			this->panel10->Controls->Add(this->select9);
			this->panel10->Controls->Add(this->Delete9);
			this->panel10->Controls->Add(this->checkBox9);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(3, 583);
			this->panel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(715, 63);
			this->panel10->TabIndex = 9;
			this->panel10->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(336, 24);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 13;
			this->label20->Text = L"label20";
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(2, -1);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(70, 61);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox34->TabIndex = 12;
			this->pictureBox34->TabStop = false;
			// 
			// lname9
			// 
			this->lname9->AutoSize = true;
			this->lname9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname9->Location = System::Drawing::Point(186, 11);
			this->lname9->Name = L"lname9";
			this->lname9->Size = System::Drawing::Size(95, 19);
			this->lname9->TabIndex = 9;
			this->lname9->Text = L"Last Name";
			// 
			// phone9
			// 
			this->phone9->AutoSize = true;
			this->phone9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone9->Location = System::Drawing::Point(107, 43);
			this->phone9->Name = L"phone9";
			this->phone9->Size = System::Drawing::Size(98, 17);
			this->phone9->TabIndex = 8;
			this->phone9->Text = L"Phonr Number";
			// 
			// fname9
			// 
			this->fname9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname9->AutoSize = true;
			this->fname9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname9->Location = System::Drawing::Point(79, 10);
			this->fname9->Name = L"fname9";
			this->fname9->Size = System::Drawing::Size(97, 19);
			this->fname9->TabIndex = 7;
			this->fname9->Text = L"First Name";
			// 
			// Unselect9
			// 
			this->Unselect9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect9->Location = System::Drawing::Point(614, 15);
			this->Unselect9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect9->Name = L"Unselect9";
			this->Unselect9->Size = System::Drawing::Size(97, 28);
			this->Unselect9->TabIndex = 6;
			this->Unselect9->Text = L"Unselect";
			this->Unselect9->UseVisualStyleBackColor = true;
			this->Unselect9->Visible = false;
			this->Unselect9->Click += gcnew System::EventHandler(this, &chatroom::Unselect9_Click);
			// 
			// select9
			// 
			this->select9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select9->Location = System::Drawing::Point(513, 15);
			this->select9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select9->Name = L"select9";
			this->select9->Size = System::Drawing::Size(76, 31);
			this->select9->TabIndex = 5;
			this->select9->Text = L"select";
			this->select9->UseVisualStyleBackColor = true;
			this->select9->Visible = false;
			this->select9->Click += gcnew System::EventHandler(this, &chatroom::select9_Click);
			// 
			// Delete9
			// 
			this->Delete9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete9->Location = System::Drawing::Point(614, 15);
			this->Delete9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete9->Name = L"Delete9";
			this->Delete9->Size = System::Drawing::Size(82, 27);
			this->Delete9->TabIndex = 3;
			this->Delete9->Text = L"Delete";
			this->Delete9->UseVisualStyleBackColor = true;
			this->Delete9->Visible = false;
			this->Delete9->Click += gcnew System::EventHandler(this, &chatroom::Delete9_Click);
			// 
			// checkBox9
			// 
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox9->Location = System::Drawing::Point(458, 22);
			this->checkBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(17, 14);
			this->checkBox9->TabIndex = 2;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->Visible = false;
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->label45);
			this->panel11->Controls->Add(this->pictureBox35);
			this->panel11->Controls->Add(this->lname10);
			this->panel11->Controls->Add(this->phone10);
			this->panel11->Controls->Add(this->fname10);
			this->panel11->Controls->Add(this->Unselect10);
			this->panel11->Controls->Add(this->select10);
			this->panel11->Controls->Add(this->Delete10);
			this->panel11->Controls->Add(this->checkBox10);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(3, 650);
			this->panel11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(715, 63);
			this->panel11->TabIndex = 10;
			this->panel11->Visible = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(336, 24);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(41, 13);
			this->label45->TabIndex = 12;
			this->label45->Text = L"label45";
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(3, -1);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(70, 61);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 11;
			this->pictureBox35->TabStop = false;
			// 
			// lname10
			// 
			this->lname10->AutoSize = true;
			this->lname10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname10->Location = System::Drawing::Point(192, 12);
			this->lname10->Name = L"lname10";
			this->lname10->Size = System::Drawing::Size(95, 19);
			this->lname10->TabIndex = 9;
			this->lname10->Text = L"Last Name";
			// 
			// phone10
			// 
			this->phone10->AutoSize = true;
			this->phone10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone10->Location = System::Drawing::Point(113, 44);
			this->phone10->Name = L"phone10";
			this->phone10->Size = System::Drawing::Size(98, 17);
			this->phone10->TabIndex = 8;
			this->phone10->Text = L"Phonr Number";
			// 
			// fname10
			// 
			this->fname10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname10->AutoSize = true;
			this->fname10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname10->Location = System::Drawing::Point(85, 11);
			this->fname10->Name = L"fname10";
			this->fname10->Size = System::Drawing::Size(97, 19);
			this->fname10->TabIndex = 7;
			this->fname10->Text = L"First Name";
			// 
			// Unselect10
			// 
			this->Unselect10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect10->Location = System::Drawing::Point(614, 15);
			this->Unselect10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect10->Name = L"Unselect10";
			this->Unselect10->Size = System::Drawing::Size(97, 28);
			this->Unselect10->TabIndex = 6;
			this->Unselect10->Text = L"Unselect";
			this->Unselect10->UseVisualStyleBackColor = true;
			this->Unselect10->Visible = false;
			this->Unselect10->Click += gcnew System::EventHandler(this, &chatroom::Unselect10_Click);
			// 
			// select10
			// 
			this->select10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select10->Location = System::Drawing::Point(513, 16);
			this->select10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select10->Name = L"select10";
			this->select10->Size = System::Drawing::Size(76, 31);
			this->select10->TabIndex = 5;
			this->select10->Text = L"select";
			this->select10->UseVisualStyleBackColor = true;
			this->select10->Visible = false;
			this->select10->Click += gcnew System::EventHandler(this, &chatroom::select10_Click);
			// 
			// Delete10
			// 
			this->Delete10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete10->Location = System::Drawing::Point(614, 15);
			this->Delete10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete10->Name = L"Delete10";
			this->Delete10->Size = System::Drawing::Size(82, 27);
			this->Delete10->TabIndex = 3;
			this->Delete10->Text = L"Delete";
			this->Delete10->UseVisualStyleBackColor = true;
			this->Delete10->Visible = false;
			this->Delete10->Click += gcnew System::EventHandler(this, &chatroom::Delete10_Click);
			// 
			// checkBox10
			// 
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox10->Location = System::Drawing::Point(458, 22);
			this->checkBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(17, 14);
			this->checkBox10->TabIndex = 2;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->Visible = false;
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->label46);
			this->panel12->Controls->Add(this->pictureBox36);
			this->panel12->Controls->Add(this->lname11);
			this->panel12->Controls->Add(this->phone11);
			this->panel12->Controls->Add(this->fname11);
			this->panel12->Controls->Add(this->Unselect11);
			this->panel12->Controls->Add(this->select11);
			this->panel12->Controls->Add(this->Delete11);
			this->panel12->Controls->Add(this->checkBox11);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(3, 717);
			this->panel12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(715, 63);
			this->panel12->TabIndex = 11;
			this->panel12->Visible = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(336, 24);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(41, 13);
			this->label46->TabIndex = 12;
			this->label46->Text = L"label46";
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(3, 0);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(70, 61);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 11;
			this->pictureBox36->TabStop = false;
			// 
			// lname11
			// 
			this->lname11->AutoSize = true;
			this->lname11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname11->Location = System::Drawing::Point(186, 12);
			this->lname11->Name = L"lname11";
			this->lname11->Size = System::Drawing::Size(95, 19);
			this->lname11->TabIndex = 9;
			this->lname11->Text = L"Last Name";
			// 
			// phone11
			// 
			this->phone11->AutoSize = true;
			this->phone11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone11->Location = System::Drawing::Point(107, 44);
			this->phone11->Name = L"phone11";
			this->phone11->Size = System::Drawing::Size(98, 17);
			this->phone11->TabIndex = 8;
			this->phone11->Text = L"Phonr Number";
			// 
			// fname11
			// 
			this->fname11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname11->AutoSize = true;
			this->fname11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname11->Location = System::Drawing::Point(79, 11);
			this->fname11->Name = L"fname11";
			this->fname11->Size = System::Drawing::Size(97, 19);
			this->fname11->TabIndex = 7;
			this->fname11->Text = L"First Name";
			// 
			// Unselect11
			// 
			this->Unselect11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect11->Location = System::Drawing::Point(614, 16);
			this->Unselect11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect11->Name = L"Unselect11";
			this->Unselect11->Size = System::Drawing::Size(97, 28);
			this->Unselect11->TabIndex = 6;
			this->Unselect11->Text = L"Unselect";
			this->Unselect11->UseVisualStyleBackColor = true;
			this->Unselect11->Visible = false;
			this->Unselect11->Click += gcnew System::EventHandler(this, &chatroom::Unselect11_Click);
			// 
			// select11
			// 
			this->select11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select11->Location = System::Drawing::Point(513, 16);
			this->select11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select11->Name = L"select11";
			this->select11->Size = System::Drawing::Size(76, 31);
			this->select11->TabIndex = 5;
			this->select11->Text = L"select";
			this->select11->UseVisualStyleBackColor = true;
			this->select11->Visible = false;
			this->select11->Click += gcnew System::EventHandler(this, &chatroom::select11_Click);
			// 
			// Delete11
			// 
			this->Delete11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete11->Location = System::Drawing::Point(614, 15);
			this->Delete11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete11->Name = L"Delete11";
			this->Delete11->Size = System::Drawing::Size(82, 27);
			this->Delete11->TabIndex = 3;
			this->Delete11->Text = L"Delete";
			this->Delete11->UseVisualStyleBackColor = true;
			this->Delete11->Visible = false;
			this->Delete11->Click += gcnew System::EventHandler(this, &chatroom::Delete11_Click);
			// 
			// checkBox11
			// 
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox11->Location = System::Drawing::Point(458, 21);
			this->checkBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(17, 14);
			this->checkBox11->TabIndex = 2;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->Visible = false;
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->label47);
			this->panel13->Controls->Add(this->pictureBox37);
			this->panel13->Controls->Add(this->lname12);
			this->panel13->Controls->Add(this->phone12);
			this->panel13->Controls->Add(this->fname12);
			this->panel13->Controls->Add(this->Unselect12);
			this->panel13->Controls->Add(this->select12);
			this->panel13->Controls->Add(this->Delete12);
			this->panel13->Controls->Add(this->checkBox12);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(3, 784);
			this->panel13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(715, 63);
			this->panel13->TabIndex = 12;
			this->panel13->Visible = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(336, 24);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(41, 13);
			this->label47->TabIndex = 12;
			this->label47->Text = L"label47";
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(5, -1);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(70, 61);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox37->TabIndex = 11;
			this->pictureBox37->TabStop = false;
			// 
			// lname12
			// 
			this->lname12->AutoSize = true;
			this->lname12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname12->Location = System::Drawing::Point(190, 9);
			this->lname12->Name = L"lname12";
			this->lname12->Size = System::Drawing::Size(95, 19);
			this->lname12->TabIndex = 9;
			this->lname12->Text = L"Last Name";
			// 
			// phone12
			// 
			this->phone12->AutoSize = true;
			this->phone12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone12->Location = System::Drawing::Point(111, 41);
			this->phone12->Name = L"phone12";
			this->phone12->Size = System::Drawing::Size(98, 17);
			this->phone12->TabIndex = 8;
			this->phone12->Text = L"Phonr Number";
			// 
			// fname12
			// 
			this->fname12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname12->AutoSize = true;
			this->fname12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname12->Location = System::Drawing::Point(83, 8);
			this->fname12->Name = L"fname12";
			this->fname12->Size = System::Drawing::Size(97, 19);
			this->fname12->TabIndex = 7;
			this->fname12->Text = L"First Name";
			// 
			// Unselect12
			// 
			this->Unselect12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect12->Location = System::Drawing::Point(614, 15);
			this->Unselect12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect12->Name = L"Unselect12";
			this->Unselect12->Size = System::Drawing::Size(97, 28);
			this->Unselect12->TabIndex = 6;
			this->Unselect12->Text = L"Unselect";
			this->Unselect12->UseVisualStyleBackColor = true;
			this->Unselect12->Visible = false;
			this->Unselect12->Click += gcnew System::EventHandler(this, &chatroom::Unselect12_Click);
			// 
			// select12
			// 
			this->select12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select12->Location = System::Drawing::Point(509, 15);
			this->select12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select12->Name = L"select12";
			this->select12->Size = System::Drawing::Size(76, 31);
			this->select12->TabIndex = 5;
			this->select12->Text = L"select";
			this->select12->UseVisualStyleBackColor = true;
			this->select12->Visible = false;
			this->select12->Click += gcnew System::EventHandler(this, &chatroom::select12_Click);
			// 
			// Delete12
			// 
			this->Delete12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete12->Location = System::Drawing::Point(614, 15);
			this->Delete12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete12->Name = L"Delete12";
			this->Delete12->Size = System::Drawing::Size(82, 27);
			this->Delete12->TabIndex = 3;
			this->Delete12->Text = L"Delete";
			this->Delete12->UseVisualStyleBackColor = true;
			this->Delete12->Visible = false;
			this->Delete12->Click += gcnew System::EventHandler(this, &chatroom::Delete12_Click);
			// 
			// checkBox12
			// 
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox12->Location = System::Drawing::Point(458, 18);
			this->checkBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(17, 14);
			this->checkBox12->TabIndex = 2;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->Visible = false;
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->label48);
			this->panel14->Controls->Add(this->pictureBox38);
			this->panel14->Controls->Add(this->lname13);
			this->panel14->Controls->Add(this->phone13);
			this->panel14->Controls->Add(this->fname13);
			this->panel14->Controls->Add(this->Unselect13);
			this->panel14->Controls->Add(this->select13);
			this->panel14->Controls->Add(this->Delete13);
			this->panel14->Controls->Add(this->checkBox13);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel14->Location = System::Drawing::Point(3, 851);
			this->panel14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(715, 63);
			this->panel14->TabIndex = 13;
			this->panel14->Visible = false;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(336, 24);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(41, 13);
			this->label48->TabIndex = 12;
			this->label48->Text = L"label48";
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(3, -3);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(70, 61);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 11;
			this->pictureBox38->TabStop = false;
			// 
			// lname13
			// 
			this->lname13->AutoSize = true;
			this->lname13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname13->Location = System::Drawing::Point(186, 7);
			this->lname13->Name = L"lname13";
			this->lname13->Size = System::Drawing::Size(95, 19);
			this->lname13->TabIndex = 9;
			this->lname13->Text = L"Last Name";
			// 
			// phone13
			// 
			this->phone13->AutoSize = true;
			this->phone13->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone13->Location = System::Drawing::Point(107, 39);
			this->phone13->Name = L"phone13";
			this->phone13->Size = System::Drawing::Size(98, 17);
			this->phone13->TabIndex = 8;
			this->phone13->Text = L"Phonr Number";
			// 
			// fname13
			// 
			this->fname13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname13->AutoSize = true;
			this->fname13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname13->Location = System::Drawing::Point(79, 6);
			this->fname13->Name = L"fname13";
			this->fname13->Size = System::Drawing::Size(97, 19);
			this->fname13->TabIndex = 7;
			this->fname13->Text = L"First Name";
			// 
			// Unselect13
			// 
			this->Unselect13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect13->Location = System::Drawing::Point(614, 15);
			this->Unselect13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect13->Name = L"Unselect13";
			this->Unselect13->Size = System::Drawing::Size(97, 28);
			this->Unselect13->TabIndex = 6;
			this->Unselect13->Text = L"Unselect";
			this->Unselect13->UseVisualStyleBackColor = true;
			this->Unselect13->Visible = false;
			this->Unselect13->Click += gcnew System::EventHandler(this, &chatroom::Unselect13_Click);
			// 
			// select13
			// 
			this->select13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select13->Location = System::Drawing::Point(513, 16);
			this->select13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select13->Name = L"select13";
			this->select13->Size = System::Drawing::Size(76, 31);
			this->select13->TabIndex = 5;
			this->select13->Text = L"select";
			this->select13->UseVisualStyleBackColor = true;
			this->select13->Visible = false;
			this->select13->Click += gcnew System::EventHandler(this, &chatroom::select13_Click);
			// 
			// Delete13
			// 
			this->Delete13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete13->Location = System::Drawing::Point(614, 15);
			this->Delete13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete13->Name = L"Delete13";
			this->Delete13->Size = System::Drawing::Size(82, 27);
			this->Delete13->TabIndex = 3;
			this->Delete13->Text = L"Delete";
			this->Delete13->UseVisualStyleBackColor = true;
			this->Delete13->Visible = false;
			this->Delete13->Click += gcnew System::EventHandler(this, &chatroom::Delete13_Click);
			// 
			// checkBox13
			// 
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox13->Location = System::Drawing::Point(458, 23);
			this->checkBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(17, 14);
			this->checkBox13->TabIndex = 2;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->Visible = false;
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->label49);
			this->panel15->Controls->Add(this->pictureBox39);
			this->panel15->Controls->Add(this->lname14);
			this->panel15->Controls->Add(this->phone14);
			this->panel15->Controls->Add(this->fname14);
			this->panel15->Controls->Add(this->Unselect14);
			this->panel15->Controls->Add(this->select14);
			this->panel15->Controls->Add(this->Delete14);
			this->panel15->Controls->Add(this->checkBox14);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel15->Location = System::Drawing::Point(3, 918);
			this->panel15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(715, 63);
			this->panel15->TabIndex = 14;
			this->panel15->Visible = false;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(336, 24);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(41, 13);
			this->label49->TabIndex = 12;
			this->label49->Text = L"label49";
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(2, -3);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(70, 61);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 11;
			this->pictureBox39->TabStop = false;
			// 
			// lname14
			// 
			this->lname14->AutoSize = true;
			this->lname14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname14->Location = System::Drawing::Point(190, 10);
			this->lname14->Name = L"lname14";
			this->lname14->Size = System::Drawing::Size(95, 19);
			this->lname14->TabIndex = 9;
			this->lname14->Text = L"Last Name";
			// 
			// phone14
			// 
			this->phone14->AutoSize = true;
			this->phone14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone14->Location = System::Drawing::Point(111, 42);
			this->phone14->Name = L"phone14";
			this->phone14->Size = System::Drawing::Size(98, 17);
			this->phone14->TabIndex = 8;
			this->phone14->Text = L"Phonr Number";
			// 
			// fname14
			// 
			this->fname14->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname14->AutoSize = true;
			this->fname14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname14->Location = System::Drawing::Point(83, 9);
			this->fname14->Name = L"fname14";
			this->fname14->Size = System::Drawing::Size(97, 19);
			this->fname14->TabIndex = 7;
			this->fname14->Text = L"First Name";
			// 
			// Unselect14
			// 
			this->Unselect14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect14->Location = System::Drawing::Point(614, 15);
			this->Unselect14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect14->Name = L"Unselect14";
			this->Unselect14->Size = System::Drawing::Size(97, 28);
			this->Unselect14->TabIndex = 6;
			this->Unselect14->Text = L"Unselect";
			this->Unselect14->UseVisualStyleBackColor = true;
			this->Unselect14->Visible = false;
			this->Unselect14->Click += gcnew System::EventHandler(this, &chatroom::Unselect14_Click);
			// 
			// select14
			// 
			this->select14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select14->Location = System::Drawing::Point(513, 15);
			this->select14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select14->Name = L"select14";
			this->select14->Size = System::Drawing::Size(76, 31);
			this->select14->TabIndex = 5;
			this->select14->Text = L"select";
			this->select14->UseVisualStyleBackColor = true;
			this->select14->Visible = false;
			this->select14->Click += gcnew System::EventHandler(this, &chatroom::select14_Click);
			// 
			// Delete14
			// 
			this->Delete14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete14->Location = System::Drawing::Point(614, 15);
			this->Delete14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete14->Name = L"Delete14";
			this->Delete14->Size = System::Drawing::Size(82, 27);
			this->Delete14->TabIndex = 3;
			this->Delete14->Text = L"Delete";
			this->Delete14->UseVisualStyleBackColor = true;
			this->Delete14->Visible = false;
			this->Delete14->Click += gcnew System::EventHandler(this, &chatroom::Delete14_Click);
			// 
			// checkBox14
			// 
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox14->Location = System::Drawing::Point(458, 26);
			this->checkBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(17, 14);
			this->checkBox14->TabIndex = 2;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->Visible = false;
			// 
			// panel16
			// 
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->label50);
			this->panel16->Controls->Add(this->pictureBox40);
			this->panel16->Controls->Add(this->lname15);
			this->panel16->Controls->Add(this->phone15);
			this->panel16->Controls->Add(this->fname15);
			this->panel16->Controls->Add(this->Unselect15);
			this->panel16->Controls->Add(this->select15);
			this->panel16->Controls->Add(this->Delete15);
			this->panel16->Controls->Add(this->checkBox15);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel16->Location = System::Drawing::Point(3, 985);
			this->panel16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(715, 63);
			this->panel16->TabIndex = 15;
			this->panel16->Visible = false;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(336, 24);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(41, 13);
			this->label50->TabIndex = 12;
			this->label50->Text = L"label50";
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(2, 3);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(70, 61);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox40->TabIndex = 11;
			this->pictureBox40->TabStop = false;
			// 
			// lname15
			// 
			this->lname15->AutoSize = true;
			this->lname15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname15->Location = System::Drawing::Point(186, 9);
			this->lname15->Name = L"lname15";
			this->lname15->Size = System::Drawing::Size(95, 19);
			this->lname15->TabIndex = 9;
			this->lname15->Text = L"Last Name";
			// 
			// phone15
			// 
			this->phone15->AutoSize = true;
			this->phone15->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone15->Location = System::Drawing::Point(107, 41);
			this->phone15->Name = L"phone15";
			this->phone15->Size = System::Drawing::Size(98, 17);
			this->phone15->TabIndex = 8;
			this->phone15->Text = L"Phonr Number";
			// 
			// fname15
			// 
			this->fname15->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname15->AutoSize = true;
			this->fname15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname15->Location = System::Drawing::Point(79, 8);
			this->fname15->Name = L"fname15";
			this->fname15->Size = System::Drawing::Size(97, 19);
			this->fname15->TabIndex = 7;
			this->fname15->Text = L"First Name";
			// 
			// Unselect15
			// 
			this->Unselect15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect15->Location = System::Drawing::Point(614, 15);
			this->Unselect15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect15->Name = L"Unselect15";
			this->Unselect15->Size = System::Drawing::Size(97, 28);
			this->Unselect15->TabIndex = 6;
			this->Unselect15->Text = L"Unselect";
			this->Unselect15->UseVisualStyleBackColor = true;
			this->Unselect15->Visible = false;
			this->Unselect15->Click += gcnew System::EventHandler(this, &chatroom::Unselect15_Click);
			// 
			// select15
			// 
			this->select15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select15->Location = System::Drawing::Point(513, 15);
			this->select15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select15->Name = L"select15";
			this->select15->Size = System::Drawing::Size(76, 31);
			this->select15->TabIndex = 5;
			this->select15->Text = L"select";
			this->select15->UseVisualStyleBackColor = true;
			this->select15->Visible = false;
			this->select15->Click += gcnew System::EventHandler(this, &chatroom::select15_Click);
			// 
			// Delete15
			// 
			this->Delete15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete15->Location = System::Drawing::Point(614, 15);
			this->Delete15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete15->Name = L"Delete15";
			this->Delete15->Size = System::Drawing::Size(82, 27);
			this->Delete15->TabIndex = 3;
			this->Delete15->Text = L"Delete";
			this->Delete15->UseVisualStyleBackColor = true;
			this->Delete15->Visible = false;
			this->Delete15->Click += gcnew System::EventHandler(this, &chatroom::Delete15_Click);
			// 
			// checkBox15
			// 
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox15->Location = System::Drawing::Point(458, 22);
			this->checkBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(17, 14);
			this->checkBox15->TabIndex = 2;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->Visible = false;
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->label51);
			this->panel17->Controls->Add(this->pictureBox41);
			this->panel17->Controls->Add(this->lname16);
			this->panel17->Controls->Add(this->phone16);
			this->panel17->Controls->Add(this->fname16);
			this->panel17->Controls->Add(this->Unselect16);
			this->panel17->Controls->Add(this->select16);
			this->panel17->Controls->Add(this->Delete16);
			this->panel17->Controls->Add(this->checkBox16);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel17->Location = System::Drawing::Point(3, 1052);
			this->panel17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(715, 63);
			this->panel17->TabIndex = 16;
			this->panel17->Visible = false;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(336, 24);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(41, 13);
			this->label51->TabIndex = 12;
			this->label51->Text = L"label51";
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(2, -1);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(70, 61);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox41->TabIndex = 11;
			this->pictureBox41->TabStop = false;
			// 
			// lname16
			// 
			this->lname16->AutoSize = true;
			this->lname16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname16->Location = System::Drawing::Point(186, 14);
			this->lname16->Name = L"lname16";
			this->lname16->Size = System::Drawing::Size(95, 19);
			this->lname16->TabIndex = 9;
			this->lname16->Text = L"Last Name";
			// 
			// phone16
			// 
			this->phone16->AutoSize = true;
			this->phone16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone16->Location = System::Drawing::Point(107, 46);
			this->phone16->Name = L"phone16";
			this->phone16->Size = System::Drawing::Size(98, 17);
			this->phone16->TabIndex = 8;
			this->phone16->Text = L"Phonr Number";
			// 
			// fname16
			// 
			this->fname16->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname16->AutoSize = true;
			this->fname16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname16->Location = System::Drawing::Point(79, 13);
			this->fname16->Name = L"fname16";
			this->fname16->Size = System::Drawing::Size(97, 19);
			this->fname16->TabIndex = 7;
			this->fname16->Text = L"First Name";
			// 
			// Unselect16
			// 
			this->Unselect16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect16->Location = System::Drawing::Point(614, 15);
			this->Unselect16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect16->Name = L"Unselect16";
			this->Unselect16->Size = System::Drawing::Size(97, 28);
			this->Unselect16->TabIndex = 6;
			this->Unselect16->Text = L"Unselect";
			this->Unselect16->UseVisualStyleBackColor = true;
			this->Unselect16->Visible = false;
			this->Unselect16->Click += gcnew System::EventHandler(this, &chatroom::Unselect16_Click);
			// 
			// select16
			// 
			this->select16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select16->Location = System::Drawing::Point(513, 15);
			this->select16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select16->Name = L"select16";
			this->select16->Size = System::Drawing::Size(76, 31);
			this->select16->TabIndex = 5;
			this->select16->Text = L"select";
			this->select16->UseVisualStyleBackColor = true;
			this->select16->Visible = false;
			this->select16->Click += gcnew System::EventHandler(this, &chatroom::select16_Click);
			// 
			// Delete16
			// 
			this->Delete16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete16->Location = System::Drawing::Point(614, 15);
			this->Delete16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete16->Name = L"Delete16";
			this->Delete16->Size = System::Drawing::Size(82, 27);
			this->Delete16->TabIndex = 3;
			this->Delete16->Text = L"Delete";
			this->Delete16->UseVisualStyleBackColor = true;
			this->Delete16->Visible = false;
			this->Delete16->Click += gcnew System::EventHandler(this, &chatroom::Delete16_Click);
			// 
			// checkBox16
			// 
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox16->Location = System::Drawing::Point(458, 18);
			this->checkBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(17, 14);
			this->checkBox16->TabIndex = 2;
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->Visible = false;
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->label52);
			this->panel18->Controls->Add(this->pictureBox42);
			this->panel18->Controls->Add(this->lname17);
			this->panel18->Controls->Add(this->phone17);
			this->panel18->Controls->Add(this->fname17);
			this->panel18->Controls->Add(this->Unselect17);
			this->panel18->Controls->Add(this->select17);
			this->panel18->Controls->Add(this->Delete17);
			this->panel18->Controls->Add(this->checkBox17);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel18->Location = System::Drawing::Point(3, 1119);
			this->panel18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(715, 63);
			this->panel18->TabIndex = 17;
			this->panel18->Visible = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(336, 24);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(41, 13);
			this->label52->TabIndex = 12;
			this->label52->Text = L"label52";
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(5, -1);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(70, 61);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox42->TabIndex = 11;
			this->pictureBox42->TabStop = false;
			// 
			// lname17
			// 
			this->lname17->AutoSize = true;
			this->lname17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname17->Location = System::Drawing::Point(186, 11);
			this->lname17->Name = L"lname17";
			this->lname17->Size = System::Drawing::Size(95, 19);
			this->lname17->TabIndex = 9;
			this->lname17->Text = L"Last Name";
			// 
			// phone17
			// 
			this->phone17->AutoSize = true;
			this->phone17->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone17->Location = System::Drawing::Point(107, 43);
			this->phone17->Name = L"phone17";
			this->phone17->Size = System::Drawing::Size(98, 17);
			this->phone17->TabIndex = 8;
			this->phone17->Text = L"Phonr Number";
			// 
			// fname17
			// 
			this->fname17->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname17->AutoSize = true;
			this->fname17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname17->Location = System::Drawing::Point(79, 10);
			this->fname17->Name = L"fname17";
			this->fname17->Size = System::Drawing::Size(97, 19);
			this->fname17->TabIndex = 7;
			this->fname17->Text = L"First Name";
			// 
			// Unselect17
			// 
			this->Unselect17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect17->Location = System::Drawing::Point(614, 15);
			this->Unselect17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect17->Name = L"Unselect17";
			this->Unselect17->Size = System::Drawing::Size(97, 28);
			this->Unselect17->TabIndex = 6;
			this->Unselect17->Text = L"Unselect";
			this->Unselect17->UseVisualStyleBackColor = true;
			this->Unselect17->Visible = false;
			this->Unselect17->Click += gcnew System::EventHandler(this, &chatroom::Unselect17_Click);
			// 
			// select17
			// 
			this->select17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select17->Location = System::Drawing::Point(513, 15);
			this->select17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select17->Name = L"select17";
			this->select17->Size = System::Drawing::Size(76, 31);
			this->select17->TabIndex = 5;
			this->select17->Text = L"select";
			this->select17->UseVisualStyleBackColor = true;
			this->select17->Visible = false;
			this->select17->Click += gcnew System::EventHandler(this, &chatroom::select17_Click);
			// 
			// Delete17
			// 
			this->Delete17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete17->Location = System::Drawing::Point(614, 15);
			this->Delete17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete17->Name = L"Delete17";
			this->Delete17->Size = System::Drawing::Size(82, 27);
			this->Delete17->TabIndex = 3;
			this->Delete17->Text = L"Delete";
			this->Delete17->UseVisualStyleBackColor = true;
			this->Delete17->Visible = false;
			this->Delete17->Click += gcnew System::EventHandler(this, &chatroom::Delete17_Click);
			// 
			// checkBox17
			// 
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox17->Location = System::Drawing::Point(458, 18);
			this->checkBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(17, 14);
			this->checkBox17->TabIndex = 2;
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->Visible = false;
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->label53);
			this->panel19->Controls->Add(this->pictureBox43);
			this->panel19->Controls->Add(this->lname18);
			this->panel19->Controls->Add(this->phone18);
			this->panel19->Controls->Add(this->fname18);
			this->panel19->Controls->Add(this->Unselect18);
			this->panel19->Controls->Add(this->select18);
			this->panel19->Controls->Add(this->Delete18);
			this->panel19->Controls->Add(this->checkBox18);
			this->panel19->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel19->Location = System::Drawing::Point(3, 1186);
			this->panel19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(715, 63);
			this->panel19->TabIndex = 18;
			this->panel19->Visible = false;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(336, 24);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(41, 13);
			this->label53->TabIndex = 12;
			this->label53->Text = L"label53";
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(3, 1);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(70, 61);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox43->TabIndex = 11;
			this->pictureBox43->TabStop = false;
			// 
			// lname18
			// 
			this->lname18->AutoSize = true;
			this->lname18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname18->Location = System::Drawing::Point(190, 8);
			this->lname18->Name = L"lname18";
			this->lname18->Size = System::Drawing::Size(95, 19);
			this->lname18->TabIndex = 9;
			this->lname18->Text = L"Last Name";
			// 
			// phone18
			// 
			this->phone18->AutoSize = true;
			this->phone18->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone18->Location = System::Drawing::Point(111, 40);
			this->phone18->Name = L"phone18";
			this->phone18->Size = System::Drawing::Size(98, 17);
			this->phone18->TabIndex = 8;
			this->phone18->Text = L"Phonr Number";
			// 
			// fname18
			// 
			this->fname18->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname18->AutoSize = true;
			this->fname18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname18->Location = System::Drawing::Point(83, 7);
			this->fname18->Name = L"fname18";
			this->fname18->Size = System::Drawing::Size(97, 19);
			this->fname18->TabIndex = 7;
			this->fname18->Text = L"First Name";
			// 
			// Unselect18
			// 
			this->Unselect18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect18->Location = System::Drawing::Point(614, 13);
			this->Unselect18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect18->Name = L"Unselect18";
			this->Unselect18->Size = System::Drawing::Size(97, 28);
			this->Unselect18->TabIndex = 6;
			this->Unselect18->Text = L"Unselect";
			this->Unselect18->UseVisualStyleBackColor = true;
			this->Unselect18->Visible = false;
			this->Unselect18->Click += gcnew System::EventHandler(this, &chatroom::Unselect18_Click);
			// 
			// select18
			// 
			this->select18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select18->Location = System::Drawing::Point(511, 12);
			this->select18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select18->Name = L"select18";
			this->select18->Size = System::Drawing::Size(76, 31);
			this->select18->TabIndex = 5;
			this->select18->Text = L"select";
			this->select18->UseVisualStyleBackColor = true;
			this->select18->Visible = false;
			this->select18->Click += gcnew System::EventHandler(this, &chatroom::select18_Click);
			// 
			// Delete18
			// 
			this->Delete18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete18->Location = System::Drawing::Point(614, 15);
			this->Delete18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete18->Name = L"Delete18";
			this->Delete18->Size = System::Drawing::Size(82, 27);
			this->Delete18->TabIndex = 3;
			this->Delete18->Text = L"Delete";
			this->Delete18->UseVisualStyleBackColor = true;
			this->Delete18->Visible = false;
			this->Delete18->Click += gcnew System::EventHandler(this, &chatroom::Delete18_Click);
			// 
			// checkBox18
			// 
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox18->Location = System::Drawing::Point(458, 19);
			this->checkBox18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(17, 14);
			this->checkBox18->TabIndex = 2;
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->Visible = false;
			// 
			// panel20
			// 
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->label54);
			this->panel20->Controls->Add(this->pictureBox44);
			this->panel20->Controls->Add(this->lname19);
			this->panel20->Controls->Add(this->phone19);
			this->panel20->Controls->Add(this->fname19);
			this->panel20->Controls->Add(this->Unselect19);
			this->panel20->Controls->Add(this->select19);
			this->panel20->Controls->Add(this->Delete19);
			this->panel20->Controls->Add(this->checkBox19);
			this->panel20->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel20->Location = System::Drawing::Point(3, 1253);
			this->panel20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(715, 63);
			this->panel20->TabIndex = 19;
			this->panel20->Visible = false;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(336, 24);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(41, 13);
			this->label54->TabIndex = 12;
			this->label54->Text = L"label54";
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(2, 0);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(70, 61);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox44->TabIndex = 11;
			this->pictureBox44->TabStop = false;
			// 
			// lname19
			// 
			this->lname19->AutoSize = true;
			this->lname19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname19->Location = System::Drawing::Point(188, 10);
			this->lname19->Name = L"lname19";
			this->lname19->Size = System::Drawing::Size(95, 19);
			this->lname19->TabIndex = 9;
			this->lname19->Text = L"Last Name";
			// 
			// phone19
			// 
			this->phone19->AutoSize = true;
			this->phone19->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone19->Location = System::Drawing::Point(109, 42);
			this->phone19->Name = L"phone19";
			this->phone19->Size = System::Drawing::Size(98, 17);
			this->phone19->TabIndex = 8;
			this->phone19->Text = L"Phonr Number";
			// 
			// fname19
			// 
			this->fname19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname19->AutoSize = true;
			this->fname19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname19->Location = System::Drawing::Point(81, 9);
			this->fname19->Name = L"fname19";
			this->fname19->Size = System::Drawing::Size(97, 19);
			this->fname19->TabIndex = 7;
			this->fname19->Text = L"First Name";
			// 
			// Unselect19
			// 
			this->Unselect19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect19->Location = System::Drawing::Point(614, 15);
			this->Unselect19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect19->Name = L"Unselect19";
			this->Unselect19->Size = System::Drawing::Size(97, 28);
			this->Unselect19->TabIndex = 6;
			this->Unselect19->Text = L"Unselect";
			this->Unselect19->UseVisualStyleBackColor = true;
			this->Unselect19->Visible = false;
			this->Unselect19->Click += gcnew System::EventHandler(this, &chatroom::Unselect19_Click);
			// 
			// select19
			// 
			this->select19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select19->Location = System::Drawing::Point(513, 15);
			this->select19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select19->Name = L"select19";
			this->select19->Size = System::Drawing::Size(76, 31);
			this->select19->TabIndex = 5;
			this->select19->Text = L"select";
			this->select19->UseVisualStyleBackColor = true;
			this->select19->Visible = false;
			this->select19->Click += gcnew System::EventHandler(this, &chatroom::select19_Click);
			// 
			// Delete19
			// 
			this->Delete19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete19->Location = System::Drawing::Point(614, 15);
			this->Delete19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete19->Name = L"Delete19";
			this->Delete19->Size = System::Drawing::Size(82, 27);
			this->Delete19->TabIndex = 3;
			this->Delete19->Text = L"Delete";
			this->Delete19->UseVisualStyleBackColor = true;
			this->Delete19->Visible = false;
			this->Delete19->Click += gcnew System::EventHandler(this, &chatroom::Delete19_Click);
			// 
			// checkBox19
			// 
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox19->Location = System::Drawing::Point(458, 23);
			this->checkBox19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(17, 14);
			this->checkBox19->TabIndex = 2;
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->Visible = false;
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Controls->Add(this->label55);
			this->panel21->Controls->Add(this->pictureBox45);
			this->panel21->Controls->Add(this->lname20);
			this->panel21->Controls->Add(this->phone20);
			this->panel21->Controls->Add(this->fname20);
			this->panel21->Controls->Add(this->Unselect20);
			this->panel21->Controls->Add(this->select20);
			this->panel21->Controls->Add(this->Delete20);
			this->panel21->Controls->Add(this->checkBox20);
			this->panel21->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel21->Location = System::Drawing::Point(3, 1320);
			this->panel21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(715, 63);
			this->panel21->TabIndex = 20;
			this->panel21->Visible = false;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(336, 24);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(41, 13);
			this->label55->TabIndex = 12;
			this->label55->Text = L"label55";
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(3, 3);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(70, 61);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox45->TabIndex = 11;
			this->pictureBox45->TabStop = false;
			// 
			// lname20
			// 
			this->lname20->AutoSize = true;
			this->lname20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname20->Location = System::Drawing::Point(186, 12);
			this->lname20->Name = L"lname20";
			this->lname20->Size = System::Drawing::Size(95, 19);
			this->lname20->TabIndex = 9;
			this->lname20->Text = L"Last Name";
			// 
			// phone20
			// 
			this->phone20->AutoSize = true;
			this->phone20->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone20->Location = System::Drawing::Point(107, 44);
			this->phone20->Name = L"phone20";
			this->phone20->Size = System::Drawing::Size(98, 17);
			this->phone20->TabIndex = 8;
			this->phone20->Text = L"Phonr Number";
			// 
			// fname20
			// 
			this->fname20->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname20->AutoSize = true;
			this->fname20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname20->Location = System::Drawing::Point(79, 11);
			this->fname20->Name = L"fname20";
			this->fname20->Size = System::Drawing::Size(97, 19);
			this->fname20->TabIndex = 7;
			this->fname20->Text = L"First Name";
			// 
			// Unselect20
			// 
			this->Unselect20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect20->Location = System::Drawing::Point(614, 15);
			this->Unselect20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect20->Name = L"Unselect20";
			this->Unselect20->Size = System::Drawing::Size(97, 28);
			this->Unselect20->TabIndex = 6;
			this->Unselect20->Text = L"Unselect";
			this->Unselect20->UseVisualStyleBackColor = true;
			this->Unselect20->Visible = false;
			this->Unselect20->Click += gcnew System::EventHandler(this, &chatroom::Unselect20_Click);
			// 
			// select20
			// 
			this->select20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select20->Location = System::Drawing::Point(513, 13);
			this->select20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select20->Name = L"select20";
			this->select20->Size = System::Drawing::Size(76, 31);
			this->select20->TabIndex = 5;
			this->select20->Text = L"select";
			this->select20->UseVisualStyleBackColor = true;
			this->select20->Visible = false;
			this->select20->Click += gcnew System::EventHandler(this, &chatroom::select20_Click);
			// 
			// Delete20
			// 
			this->Delete20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete20->Location = System::Drawing::Point(614, 15);
			this->Delete20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete20->Name = L"Delete20";
			this->Delete20->Size = System::Drawing::Size(82, 27);
			this->Delete20->TabIndex = 3;
			this->Delete20->Text = L"Delete";
			this->Delete20->UseVisualStyleBackColor = true;
			this->Delete20->Visible = false;
			this->Delete20->Click += gcnew System::EventHandler(this, &chatroom::Delete20_Click);
			// 
			// checkBox20
			// 
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox20->Location = System::Drawing::Point(458, 20);
			this->checkBox20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(17, 14);
			this->checkBox20->TabIndex = 2;
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->Visible = false;
			// 
			// stories
			// 
			this->stories->Controls->Add(this->label7);
			this->stories->Controls->Add(this->button6);
			this->stories->Controls->Add(this->button5);
			this->stories->Controls->Add(this->label6);
			this->stories->Controls->Add(this->richTextBox5);
			this->stories->Controls->Add(this->pictureBox26);
			this->stories->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stories->Location = System::Drawing::Point(0, 0);
			this->stories->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stories->Name = L"stories";
			this->stories->Size = System::Drawing::Size(724, 552);
			this->stories->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(106, 20);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Last Name";
			this->label7->Click += gcnew System::EventHandler(this, &chatroom::label7_Click_1);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(172, 460);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 41);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Last Story";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &chatroom::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(527, 461);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 41);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Next Story";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &chatroom::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 19);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 20);
			this->label6->TabIndex = 18;
			this->label6->Text = L"First Name";
			this->label6->Click += gcnew System::EventHandler(this, &chatroom::label6_Click_1);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(277, 203);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(228, 68);
			this->richTextBox5->TabIndex = 17;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &chatroom::richTextBox5_TextChanged);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Location = System::Drawing::Point(235, 41);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(316, 391);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 16;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &chatroom::pictureBox26_Click);
			// 
			// pn_con
			// 
			this->pn_con->Controls->Add(this->pn_new_contact);
			this->pn_con->Controls->Add(this->pn_show_contact);
			this->pn_con->Controls->Add(this->stories);
			this->pn_con->Controls->Add(this->pn_stext);
			this->pn_con->Controls->Add(this->pn_shows);
			this->pn_con->Controls->Add(this->pn_profile);
			this->pn_con->Controls->Add(this->pn_sphoto);
			this->pn_con->Controls->Add(this->pn_chatroom);
			this->pn_con->Controls->Add(this->pn_chat);
			this->pn_con->Controls->Add(this->add_chat);
			this->pn_con->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con->Location = System::Drawing::Point(0, 0);
			this->pn_con->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_con->Name = L"pn_con";
			this->pn_con->Size = System::Drawing::Size(724, 552);
			this->pn_con->TabIndex = 4;
			// 
			// pn_chatroom
			// 
			this->pn_chatroom->Controls->Add(this->tableLayoutPanel1);
			this->pn_chatroom->Controls->Add(this->pictureBox23);
			this->pn_chatroom->Controls->Add(this->pictureBox22);
			this->pn_chatroom->Controls->Add(this->pictureBox24);
			this->pn_chatroom->Controls->Add(this->richTextBox3);
			this->pn_chatroom->Controls->Add(this->label4);
			this->pn_chatroom->Location = System::Drawing::Point(0, 3);
			this->pn_chatroom->Name = L"pn_chatroom";
			this->pn_chatroom->Size = System::Drawing::Size(723, 547);
			this->pn_chatroom->TabIndex = 13;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoScroll = true;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 57);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(718, 452);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(3, 4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(59, 49);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 8;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &chatroom::pictureBox23_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(673, 514);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(45, 32);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 7;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &chatroom::pictureBox22_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Location = System::Drawing::Point(63, 4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(56, 50);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 6;
			this->pictureBox24->TabStop = false;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(3, 513);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(669, 34);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(125, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(254, 46);
			this->label4->TabIndex = 0;
			this->label4->Text = L"label4";
			// 
			// ofd
			// 
			this->ofd->FileName = L"openFileDialog1";
			// 
			// chatroom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 591);
			this->Controls->Add(this->pn_con);
			this->Controls->Add(this->pn_st_bar);
			this->Controls->Add(this->pn_nav_bar);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"chatroom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"chatroom";
			this->pn_nav_bar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pn_st_bar->ResumeLayout(false);
			this->pn_sphoto->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->add_chat->ResumeLayout(false);
			this->add_chat->PerformLayout();
			this->pn_stext->ResumeLayout(false);
			this->pn_stext->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->pn_shows->ResumeLayout(false);
			this->pn_shows->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->pn_chat->ResumeLayout(false);
			this->pn_chat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel24->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel25->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel26->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel27->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel28->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel29->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->pn_profile->ResumeLayout(false);
			this->pn_profile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_pic))->EndInit();
			this->pn_new_contact->ResumeLayout(false);
			this->pn_new_contact->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->pn_show_contact->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			this->stories->ResumeLayout(false);
			this->stories->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			this->pn_con->ResumeLayout(false);
			this->pn_chatroom->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: int countDown = 0;
	private: void message_panel(String^ text, String^ name, String^ date_time, String^ seen);

	private: System::Void message_Click(System::Object^ sender, System::EventArgs^ e);


	private: void open_chatroom(int i);
	private: void delete_chatroom(int i);
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void profile_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void contacts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chat_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DeleteChatRoom_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddChatRoom_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delete_chat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void add_chat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void story_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void change_photo_bu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void profile_pic_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ofd_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e);
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);

	private: System::Void edit_delete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void edit_delete2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void choose__Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private:void selected(int i);
		
	private: void unselected(int i);
	
	private: void deleted(int i);

	private: System::Void select1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect_Click(System::Object^ sender, System::EventArgs^ e);
		   
	private: System::Void add_contact_Click(System::Object^ sender, System::EventArgs^ e);

 private: System::Void displayMyContacts();
 private: System::Void displayMyChatRooms();
  private: System::Void displayMessages();
  private: System::Void displayMystory();
		   

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select16_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select17_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select18_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select19_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect16_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect17_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect18_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect19_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Unselect20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete3_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Delete4_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Delete5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete16_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete17_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete18_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete19_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete20_Click(System::Object^ sender, System::EventArgs^ e);


		   //when clicking on textbox search word deleted
	private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e);

		   //search in chatrooms
	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e);
		   //sending message
	private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e);
		   //return from chatroom to chatrooms
	private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e);

		   //open chatroom
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e);

		   //deleting chatroom
	private: System::Void checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox24_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox25_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox26_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox27_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox28_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e);
	 private: System::Void ADD_Click(System::Object^ sender, System::EventArgs^ e);
			

private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox29_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
//private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e);
//private: System::Void pictureBox25_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox26_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox30_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox32_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
