#include "MyForm.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <msclr\marshal_cppstd.h >
#include <ctime>
#include <cstdlib>
#include <atlstr.h>
#include <windows.h>
using namespace msclr::interop;
using namespace System;
using namespace System::Windows::Forms;

//
// P.S ������ � 3 �� 9 ����� ���� ���������� �������� �� NextButton � NexButton !
// ��������� ����� ������� ����� �� �����: ���������� ������������, ������� ����� ���� �������� � � �����.h ����� �������� �������� ����������� ��� ������ ���� ������
// � ����� ��� ������� ����� ����� ������� ���� ��� �� ������ � ����������
// ������ ��������� ������ ��� ������ ���������� � ��� �� ������ �������
//

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WINDAWS::MyForm form;
	Application::Run(% form);
	srand(time(NULL));
	//main ����� �� ������� , ���� ��� �� ����� ��������� ��� ��� �� ������
}

// ��� ������/�������/������ ����������
class TypeOfPersona
{
public:
	int Juggernaut = 0;
	int Lanaya = 0;
	int Naga = 0;
	int Slark = 0;
	int Invoker = 0;
	int Sf = 0;



};


TypeOfPersona hero;  // ������ ������ � ������� �� ������� ����� ��������� ����� � � ����� �� ����� ��������� ���������� �����


// ������ �������� �� ������� bcz �������� ������� �� �� ����
System::Void WINDAWS::MyForm::CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
System::Void WINDAWS::MyForm::GoButton_Click(System::Object^ sender, System::EventArgs^ e) {
	GoButton->Visible = false;
	label1->Visible = true;
	label1->Text = "��...?";
	checkBox1->Visible = true;
	checkBox2->Visible = true;
	checkBox3->Visible = true;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	checkBox1->Text = "�������";
	checkBox2->Text = "�����";
	checkBox3->Text = "�����";
	checkBox4->Text = "�������";
	checkBox5->Text = "�������";
	checkBox6->Text = "�������";
	NextButton1->Visible = true;
	button1->Visible = false;

}

int a = 0;
bool zx = false;
//���������� ��� ���������������� �������� �������� , ����� ����������� ���� �� ��������� ����� ���������  � ������ ��� ������ ���� �������� ������ ����������

System::Void WINDAWS::MyForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox1->Checked)
	{ 
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	zx = true;
	if (a == 0 && zx )
	{
		
		hero.Invoker += 1;
		hero.Juggernaut += 1;
		hero.Lanaya += 1;
		a++;
		zx = false;
	}

	if (a == 1 && zx)

	{
		hero.Slark += 3;
		a++;
		zx = false;
	}

	if (a == 2 && zx) {
		hero.Sf += 3;
		a++;
		zx = false;
	}
	
	if (a == 3 && zx)
	{
		hero.Invoker += 1;
		hero.Lanaya += 1;
		hero.Sf += 1;
		zx = false;
	}
	}
}



System::Void WINDAWS::MyForm::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked)
	{
		checkBox1->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		zx = true;
		if (a == 0 && zx)
		{

			hero.Slark += 2;
			hero.Naga += 2;
			a++;
			zx = false;
		}


		if (a == 1 && zx)
		{
			hero.Juggernaut += 3;
			a++;
			zx = false;
		}

		if (a == 2 && zx)


			if (a == 2 && zx)
			{
				hero.Juggernaut += 1;
				hero.Naga += 1;
				hero.Slark += 1;
				zx = false;
		    }

	}

}
System::Void WINDAWS::MyForm::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked)
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		zx = true;
		if (a == 0 && zx)
		{

			hero.Sf += 3;
			a++;
			zx = false;

		}

		if (a == 1 && zx)
		{
			hero.Lanaya += 3;
			a++;
			zx = false;
		}


		if (a == 2 && zx) {
			hero.Juggernaut = hero.Juggernaut + 1;
			hero.Lanaya += 1;
			hero.Naga += 1;
			hero.Slark += 1;
			a++;
			zx = false;
		}
	}

}
System::Void WINDAWS::MyForm::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->Checked)
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		zx = true;

		if (a == 1 && zx)
		{
			hero.Sf += 3;
			a++;
			zx = false;
		}
	}
	
}
System::Void WINDAWS::MyForm::checkBox5_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e) {
		if (checkBox5->Checked)
		{
			checkBox1->Checked = false;
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;
			checkBox6->Checked = false;
			zx = true;


			if (a == 1 && zx)
			{
				hero.Invoker += 3;
				a++;
				zx = false;
			}

		}
	}
System::Void WINDAWS::MyForm::checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox6->Checked)
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		zx = true;
		if (a == 3 && zx)
		{
			hero.Naga += 3;
			a++;
			zx = false;
		}
	}



}

System::Void WINDAWS::MyForm::NextButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox4->Visible = true;
	checkBox5->Visible = true;
	checkBox6->Visible = true;
	label1->Text = "���� �������/��������/��������� ������??";
	checkBox1->Text = "����";
	checkBox2->Text = "�����";
	checkBox3->Text = "����������";
	checkBox4->Text = "���� ���� ��";
	checkBox5->Text = "��� ���� �������";
	checkBox6->Text = "������� �� �";
	NextButton1->Visible = false;
	NextButton2->Visible = true;
}
System::Void WINDAWS::MyForm::NextButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	label1->Text = "��� ��� ��� ���?";
	checkBox1->Text = "� ���� � ���� ����";
	checkBox2->Text = "���";
	checkBox3->Text = "���";

	NextButton2->Visible = false;
	NexButton3->Visible = true;
}

System::Void WINDAWS::MyForm::NexButton3_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Visible = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	label1->Text = "����� ������ �� �������������?";
	checkBox1->Text = "����� ������� ���";
	checkBox2->Text = "���";

	NextButton2->Visible = false;



	NexButton3->Visible = false;
	NextButton4->Visible = true;
}

System::Void WINDAWS::MyForm::NextButton4_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Visible = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;

	NextButton4->Visible = false;
	FinalButton->Visible = true;
}





// ������� ��������� ���������� 
System::Void WINDAWS::MyForm::FinalButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Visible = false;
	checkBox2->Visible = false;
	checkBox3->Visible = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	label1->Text = "��� ���������:";
	EndTitle->Visible = true;
	if (hero.Juggernaut > hero.Lanaya && hero.Juggernaut >= hero.Naga && hero.Juggernaut >= hero.Slark && hero.Juggernaut >= hero.Sf && hero.Juggernaut >= hero.Invoker)
	{
		EndTitle->Text = "�� ����������!";
		Juggernaut_Picture->Visible = true;
	}
	else if (hero.Sf > hero.Lanaya && hero.Sf >= hero.Naga && hero.Sf >= hero.Slark &&  hero.Sf >= hero.Juggernaut && hero.Sf >= hero.Invoker)
	{
		EndTitle->Text = "�� ��!";
		Sf_Picture->Visible = true;
	}
	else if (hero.Invoker >= hero.Lanaya && hero.Invoker >= hero.Naga && hero.Invoker >= hero.Slark && hero.Invoker >= hero.Sf && hero.Invoker >= hero.Juggernaut)
	{
		EndTitle->Text = "�� �������!";
		Inbossik_Picture->Visible = true;
	}
	else if (hero.Slark >= hero.Lanaya && hero.Slark >= hero.Naga && hero.Slark >= hero.Juggernaut && hero.Slark >= hero.Sf && hero.Slark >= hero.Invoker)
	{
		EndTitle->Text = "�� �����!";
		Slark_Picture->Visible = true;
	}
	else if (hero.Naga >= hero.Lanaya &&  hero.Naga >= hero.Juggernaut && hero.Naga >= hero.Slark && hero.Naga >= hero.Sf && hero.Naga >= hero.Invoker)
	{
		EndTitle->Text = "�� ����!";
		Naga_Picture->Visible = true;
	}
	else if ( hero.Lanaya >= hero.Juggernaut && hero.Lanaya >= hero.Naga && hero.Lanaya >= hero.Slark && hero.Lanaya >= hero.Sf && hero.Lanaya >= hero.Invoker)
	{
		EndTitle->Text = "�� �����!";
		Lanaya_Picture->Visible = true;
	}

	//���������� ����� , ����������� ��������� �� ��� ������ � 1-6 ���������
	// 
	//std::string name;
	//name = std::to_string( a);
	//EndTitle->Text = marshal_as<String^>(name);


//��� �������� ������
//hero.Juggernaut
//hero.Lanaya
//hero.Naga
//hero.Slark 
//hero.Invoker 
//hero.Sf 
	
}
