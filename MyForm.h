#pragma once

#include <stdlib.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <filesystem>
#include <windows.h>
#include <exception>
#include <fstream>

namespace ThemeChanger {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonScheduleLight;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ hoursLight;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ minutesLight;
	private: System::Windows::Forms::TextBox^ hoursDark;
	private: System::Windows::Forms::TextBox^ minutesDark;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ pathDark;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ buttonDarkSchedule;
	private: System::Windows::Forms::Button^ buttonLightToggle;


	private: System::Windows::Forms::Button^ buttonDarkToggle;
	private: System::Windows::Forms::TextBox^ pathLight;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ buttonSch;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonScheduleLight = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->hoursLight = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->minutesLight = (gcnew System::Windows::Forms::TextBox());
			this->hoursDark = (gcnew System::Windows::Forms::TextBox());
			this->minutesDark = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pathDark = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonDarkSchedule = (gcnew System::Windows::Forms::Button());
			this->buttonLightToggle = (gcnew System::Windows::Forms::Button());
			this->buttonDarkToggle = (gcnew System::Windows::Forms::Button());
			this->pathLight = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->buttonSch = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonScheduleLight
			// 
			this->buttonScheduleLight->Location = System::Drawing::Point(47, 224);
			this->buttonScheduleLight->Name = L"buttonScheduleLight";
			this->buttonScheduleLight->Size = System::Drawing::Size(149, 56);
			this->buttonScheduleLight->TabIndex = 4;
			this->buttonScheduleLight->Text = L"Set Schedule for Light Mode";
			this->buttonScheduleLight->UseVisualStyleBackColor = true;
			this->buttonScheduleLight->Click += gcnew System::EventHandler(this, &MyForm::buttonScheduleLight_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Schedule Light Mode";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Path:     \\Tasks\\";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Time:";
			// 
			// hoursLight
			// 
			this->hoursLight->AcceptsTab = true;
			this->hoursLight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hoursLight->Location = System::Drawing::Point(175, 166);
			this->hoursLight->MaxLength = 2;
			this->hoursLight->Name = L"hoursLight";
			this->hoursLight->Size = System::Drawing::Size(41, 32);
			this->hoursLight->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(129, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"HH:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(235, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 26);
			this->label5->TabIndex = 7;
			this->label5->Text = L"MM:";
			// 
			// minutesLight
			// 
			this->minutesLight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minutesLight->Location = System::Drawing::Point(283, 166);
			this->minutesLight->MaxLength = 2;
			this->minutesLight->Name = L"minutesLight";
			this->minutesLight->Size = System::Drawing::Size(41, 32);
			this->minutesLight->TabIndex = 3;
			// 
			// hoursDark
			// 
			this->hoursDark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hoursDark->Location = System::Drawing::Point(175, 440);
			this->hoursDark->MaxLength = 2;
			this->hoursDark->Name = L"hoursDark";
			this->hoursDark->Size = System::Drawing::Size(41, 32);
			this->hoursDark->TabIndex = 7;
			// 
			// minutesDark
			// 
			this->minutesDark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minutesDark->Location = System::Drawing::Point(283, 440);
			this->minutesDark->MaxLength = 2;
			this->minutesDark->Name = L"minutesDark";
			this->minutesDark->Size = System::Drawing::Size(41, 32);
			this->minutesDark->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(235, 443);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 26);
			this->label6->TabIndex = 16;
			this->label6->Text = L"MM:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(129, 443);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 26);
			this->label7->TabIndex = 15;
			this->label7->Text = L"HH:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(42, 443);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 26);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Time:";
			// 
			// pathDark
			// 
			this->pathDark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pathDark->Location = System::Drawing::Point(199, 395);
			this->pathDark->Name = L"pathDark";
			this->pathDark->Size = System::Drawing::Size(305, 32);
			this->pathDark->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(41, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 26);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Path:     \\Tasks\\";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(40, 310);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(278, 32);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Schedule Dark Mode";
			// 
			// buttonDarkSchedule
			// 
			this->buttonDarkSchedule->Location = System::Drawing::Point(47, 498);
			this->buttonDarkSchedule->Name = L"buttonDarkSchedule";
			this->buttonDarkSchedule->Size = System::Drawing::Size(149, 56);
			this->buttonDarkSchedule->TabIndex = 9;
			this->buttonDarkSchedule->Text = L"Set Schedule for Dark Mode";
			this->buttonDarkSchedule->UseVisualStyleBackColor = true;
			this->buttonDarkSchedule->Click += gcnew System::EventHandler(this, &MyForm::buttonDarkSchedule_Click);
			// 
			// buttonLightToggle
			// 
			this->buttonLightToggle->Location = System::Drawing::Point(640, 142);
			this->buttonLightToggle->Name = L"buttonLightToggle";
			this->buttonLightToggle->Size = System::Drawing::Size(149, 56);
			this->buttonLightToggle->TabIndex = 5;
			this->buttonLightToggle->Text = L"Toggle Light Mode";
			this->buttonLightToggle->UseVisualStyleBackColor = true;
			this->buttonLightToggle->Click += gcnew System::EventHandler(this, &MyForm::buttonLightToggle_Click);
			// 
			// buttonDarkToggle
			// 
			this->buttonDarkToggle->Location = System::Drawing::Point(639, 413);
			this->buttonDarkToggle->Name = L"buttonDarkToggle";
			this->buttonDarkToggle->Size = System::Drawing::Size(149, 56);
			this->buttonDarkToggle->TabIndex = 10;
			this->buttonDarkToggle->Text = L"Toggle Dark Mode";
			this->buttonDarkToggle->UseVisualStyleBackColor = true;
			this->buttonDarkToggle->Click += gcnew System::EventHandler(this, &MyForm::buttonDarkToggle_Click);
			// 
			// pathLight
			// 
			this->pathLight->AcceptsTab = true;
			this->pathLight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pathLight->Location = System::Drawing::Point(200, 118);
			this->pathLight->MaxLength = 50;
			this->pathLight->Name = L"pathLight";
			this->pathLight->Size = System::Drawing::Size(305, 32);
			this->pathLight->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label11->Location = System::Drawing::Point(204, 366);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(222, 26);
			this->label11->TabIndex = 18;
			this->label11->Text = L"foldername\\taskname";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label12->Location = System::Drawing::Point(204, 89);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(222, 26);
			this->label12->TabIndex = 19;
			this->label12->Text = L"foldername\\taskname";
			// 
			// buttonSch
			// 
			this->buttonSch->Location = System::Drawing::Point(672, 543);
			this->buttonSch->Name = L"buttonSch";
			this->buttonSch->Size = System::Drawing::Size(149, 56);
			this->buttonSch->TabIndex = 20;
			this->buttonSch->Text = L"Open Task Scheduler";
			this->buttonSch->UseVisualStyleBackColor = true;
			this->buttonSch->Click += gcnew System::EventHandler(this, &MyForm::buttonSch_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(846, 627);
			this->Controls->Add(this->buttonSch);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pathLight);
			this->Controls->Add(this->buttonDarkToggle);
			this->Controls->Add(this->buttonLightToggle);
			this->Controls->Add(this->hoursDark);
			this->Controls->Add(this->minutesDark);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pathDark);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->buttonDarkSchedule);
			this->Controls->Add(this->hoursLight);
			this->Controls->Add(this->minutesLight);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonScheduleLight);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Light/Dark Changer";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonScheduleLight_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			msclr::interop::marshal_context context;
			std::string pathL = context.marshal_as<std::string>(pathLight->Text);
			std::string hours = context.marshal_as<std::string>(hoursLight->Text);
			std::string minutes = context.marshal_as<std::string>(minutesLight->Text);

			int h = System::Convert::ToInt16(hoursLight->Text);
			int m = System::Convert::ToInt16(minutesLight->Text);

			if (pathL == "" || hours == "" || minutes == "")
			{
				MessageBox::Show("At least one text field is empty.");
				return;
			}

			else if (h < 0 || h > 24)
			{
				MessageBox::Show("Hours need to be 0-24 & Minutes between 0-60.");
				return;
			}

			else if (m < 0 || m > 60)
			{
				MessageBox::Show("Hours need to be 0-24 & Minutes between 0-60.");
				return;
			}

			else
			{
				char temp[256];
				GetCurrentDirectoryA(256, temp);

				std::string comm = "SCHTASKS /CREATE /SC daily /TN \"" + pathL + "\" /TR \"" + temp + "\\light.bat\" /ST "
					+ hours + ":" + minutes;

				const char* c = comm.c_str();
				system(c);
			}
		}

		catch (...)
		{
			MessageBox::Show("Check your input.");
			return;
		}

	}
	private: System::Void buttonLightToggle_Click(System::Object^ sender, System::EventArgs^ e)
	{
		system("light.bat");
		//system("Powershell.exe - Command \"Set-ItemProperty -Path HKCU:\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize -Name SystemUsesLightTheme -Value 1; Set-ItemProperty -Path HKCU:\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize -Name AppsUseLightTheme -Value 1\"");
	}


	private: System::Void buttonDarkToggle_Click(System::Object^ sender, System::EventArgs^ e)
	{
		system("dark.bat");
	}
	private: System::Void buttonDarkSchedule_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			msclr::interop::marshal_context context;
			std::string pathD = context.marshal_as<std::string>(pathDark->Text);
			std::string hours = context.marshal_as<std::string>(hoursDark->Text);
			std::string minutes = context.marshal_as<std::string>(minutesDark->Text);

			int h = System::Convert::ToInt16(hoursDark->Text);
			int m = System::Convert::ToInt16(minutesDark->Text);

			if (pathD == "" || hours == "" || minutes == "")
			{
				MessageBox::Show("At least one text field is empty.");
				return;
			}

			else if (h < 0 || h > 24)
			{
				MessageBox::Show("Hours need to be 0-24.");
				return;
			}

			else if (m < 0 || m > 60)
			{
				MessageBox::Show("Minutes need to be 0-60.");
				return;
			}

			else
			{
				char temp[256];
				GetCurrentDirectoryA(256, temp);
				//std::string powersh = "Set-ItemProperty -Path HKCU:\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize "
				//	"-Name SystemUsesLightTheme -Value 0; Set-ItemProperty -Path HKCU:\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize -Name AppsUseLightTheme -Value 0";


				//std::string comm = "SCHTASKS /CREATE /SC daily /TN \"" + pathD + "\" /TR \"%SystemRoot%\\system32\\WindowsPowerShell\\v1.0\\powershell.exe " 
				//	+ powersh + "\" /ST " + hours + ":" + minutes;

				std::string comm = "SCHTASKS /CREATE /SC daily /TN \"" + pathD + "\" /TR \"" + temp + "\\dark.bat\" /ST "
					+ hours + ":" + minutes;

				std::ofstream outfile;
				outfile.open("output.txt");

				const char* c = comm.c_str();
				outfile << c;
				system(c);
			}
		}

		catch (...)
		{
			MessageBox::Show("Check your input.");
			return;
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonSch_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		system("taskschd");
	}

	catch (...)
	{
		MessageBox::Show("Could not open Task Scheduler. Win + R, type \"taskschd.msc\"");
		return;
	}
}
};
}
