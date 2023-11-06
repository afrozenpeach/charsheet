//  Dungeons and Dragons v3.5 Digital Character Sheet
//  Copyright (C) 2003-2023 Mattie Schraeder
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

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TButton *Button1;
        TLabel *Label5;
        TMemo *Memo1;
        TLabel *Label4;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        void __fastcall Label3Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Label6Click(TObject *Sender);
        void __fastcall Label10Click(TObject *Sender);
        void __fastcall Label11Click(TObject *Sender);
        void __fastcall Label14Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
