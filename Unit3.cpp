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
if (!FileExists("E:\\data.txt"))//Если файл не создан, создаем файл
{
  TStringList * LogFile = new TStringList;
  LogFile->SaveToFile("E:\\data.txt");
  delete LogFile;
}

char* str ="Какой-то текст";//Переменная с данными
char* str1 ="Какой-то текст1";
FILE *file;
char* file_name = "E:\\data.txt";//Открытие файла
//char load_string[5000];

/*file = fopen( file_name, "w" );//Запись в файл

//fputs("string", file );//Добавляем строку "string"

fprintf(file, "%s\n", str);//Запись данных */

file = fopen( file_name, "a+" );//Дополнение данных, добавляет новые данные

fprintf(file, "%s\n", str1);

fclose( file );//Закрытие файла
file = fopen( file_name, "r" );//Считывание файла
/*if( file != 0 )
{
fgets( load_string, 5000 , file );
cout << "load_string = " << load_string << endl;
}
else
{
cout << "File not found !!!" << endl;
}*/
fclose(file);//Закрытие файла
}


//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)
{
 RecordingReadingData();
}
//---------------------------------------------------------------------------

