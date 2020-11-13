//  Dungeons and Dragons v3.5 Digital Character Sheet
//  Copyright (C) 2003-2020 Mattie Schraeder
//  https://afrozenpeach.net
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

//---------------------------------------------------------------------------

#include <vcl.h>
#include <Classes.hpp>
#include <dstring.h>
#include <stdlib.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


//Compliments of the Borland Newsgroups
//The guy who wrote it didn't have his name on the groups, so I can't give props... oh well.
//This function simply pulls the Version number out from the .exe to throw into the about box
//I don't hardly have a clue how this works, so don't ask me :P
void __fastcall GetVersionInformation(
   const AnsiString& filename
  ,int& majorVersion
  ,int& minorVersion
  ,int& release
  ,int& build
)
{
  majorVersion = 0;
  minorVersion = 0;
  release = 0;
  build = 0;

  DWORD dwSize;
  DWORD dwReserved;
  LPVOID lpStr;
  UINT dwLength;

  dwSize = GetFileVersionInfoSize(filename.c_str(), &dwReserved);
  if(!dwSize)
  {
    LPVOID lpMsgBuf;

    FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
        NULL,
        GetLastError(),
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
        (LPTSTR) &lpMsgBuf,
        0,
        NULL
    );

    // Display the string.
    AnsiString theError = reinterpret_cast<char *>(lpMsgBuf);
    ShowMessage(theError);

    // Free the buffer.
    LocalFree( lpMsgBuf );
    return;
  }

  LPVOID lpBuffer = new BYTE[dwSize];
  GetFileVersionInfo(filename.c_str(), NULL, dwSize, lpBuffer);

  VerQueryValue(lpBuffer,"\\StringFileInfo\\040904E4\\FileVersion",
    &lpStr, &dwLength);
  AnsiString fileVersion = reinterpret_cast<char *>(lpStr);

  int pos = fileVersion.Pos(".");
  if(pos)
  {
    majorVersion = StrToInt(fileVersion.SubString(1, pos -1));
    fileVersion = fileVersion.SubString(pos+1, fileVersion.Length());

    pos = fileVersion.Pos(".");
    if(pos)
    {
      minorVersion = StrToInt(fileVersion.SubString(1, pos -1));
      fileVersion = fileVersion.SubString(pos+1, fileVersion.Length());

      pos = fileVersion.Pos(".");
      if(pos)
      {
        release = StrToInt(fileVersion.SubString(1, pos -1));
        fileVersion = fileVersion.SubString(pos+1, fileVersion.Length());


        build = StrToInt(fileVersion);
      }
    }
  }

  if(lpBuffer)
    delete[] lpBuffer;
}

//Hyperlink to my site ^_^
void __fastcall TForm2::Label3Click(TObject *Sender)
{
        ShellExecute(Handle, "open", Label3->Caption.c_str(), NULL, NULL, SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------

//Same thing as above, but for my e-mail address

//Set-up the version number label
void __fastcall TForm2::FormCreate(TObject *Sender)
{
        int Major, Minor, Release, Build;
        Label5->Caption = "Version: ";
        GetVersionInformation(ParamStr(0), Major, Minor, Release, Build);
        Label5->Caption = Label5->Caption + Major + "." + Minor + "." + Release + "." + Build;
}
//---------------------------------------------------------------------------

//That wasn't so bad was it?
//About boxes are easy. :P


void __fastcall TForm2::Label6Click(TObject *Sender)
{
        ShellExecute(Handle, "open", "mailto:mattie@mattie.lgbt", NULL, NULL, SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Label10Click(TObject *Sender)
{
        ShellExecute(Handle, "open", "aim:goim?screenname=FrozenSolidOne&message=RE:%20D&D%203.5%20Digital%20Character%20Sheet", NULL, NULL, SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Label11Click(TObject *Sender)
{
        ShellExecute(Handle, "open", "http://edit.yahoo.com/config/send_webmesg?.target=FrozenSolidOne&.src=pg", NULL, NULL, SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Label14Click(TObject *Sender)
{
        ShellExecute(Handle, "open", "http://frozen-solid.net/irc/", NULL, NULL, SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------






