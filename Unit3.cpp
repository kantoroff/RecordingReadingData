//---------------------------------------------------------------------------

#include <vcl.h>
#include<fstream.h>
#include<stdio.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;


//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void RecordingReadingData( void )
{
if (!FileExists("E:\\data.txt"))//���� ���� �� ������, ������� ����
{
  TStringList * LogFile = new TStringList;
  LogFile->SaveToFile("E:\\data.txt");
  delete LogFile;
}

char* str ="�����-�� �����";//���������� � �������
char* str1 ="�����-�� �����1";
FILE *file;
char* file_name = "E:\\data.txt";//�������� �����
//char load_string[5000];

/*file = fopen( file_name, "w" );//������ � ����

//fputs("string", file );//��������� ������ "string"

fprintf(file, "%s\n", str);//������ ������ */

file = fopen( file_name, "a+" );//���������� ������, ��������� ����� ������

fprintf(file, "%s\n", str1);

fclose( file );//�������� �����
file = fopen( file_name, "r" );//���������� �����
/*if( file != 0 )
{
fgets( load_string, 5000 , file );
cout << "load_string = " << load_string << endl;
}
else
{
cout << "File not found !!!" << endl;
}*/
fclose(file);//�������� �����
}


//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)
{
 RecordingReadingData();
}
//---------------------------------------------------------------------------

