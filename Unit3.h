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

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include "CSPIN.h"
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TListBox *Rolls;
        TListBox *StatTypes;
        TButton *RollStats;
        TLabel *Label1;
        TEdit *NumberofRolls;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *StrRoll;
        TLabel *DexRoll;
        TLabel *ConRoll;
        TLabel *IntRoll;
        TLabel *WisRoll;
        TLabel *ChaRoll;
        TLabel *Label8;
        TEdit *Rerolls1;
        TLabel *Label9;
        TEdit *PointsLeft;
        TCheckBox *NoRerollifDrop;
        TButton *Reset;
        TButton *Apply;
        TButton *Close;
        TLabel *Label10;
        TLabel *PointsSpent;
        TEdit *Rerolls2;
        TCSpinButton *CSpinButton1;
        void __fastcall StatTypesClick(TObject *Sender);
        void __fastcall ResetClick(TObject *Sender);
        void __fastcall ApplyClick(TObject *Sender);
        void __fastcall RollStatsClick(TObject *Sender);
        void __fastcall CSpinButton1DownClick(TObject *Sender);
        void __fastcall CSpinButton1UpClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
