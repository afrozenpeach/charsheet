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

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm3::StatTypesClick(TObject *Sender)
{
        short i, found = 0;
        for (i = 0; i < 8 && !found; i++)
                if (StatTypes->Selected[i])
                        found = 1;
        switch (i-1)
        {
        case 0: PointsLeft->Enabled = false;
                PointsLeft->Text = 0;
                Rerolls1->Enabled = true;
                Rerolls2->Enabled = true;
                Rerolls1->Text = "1";
                Rerolls2->Text = "";
                NumberofRolls->Enabled = true;
                NumberofRolls->Text = 6;
                PointsSpent->Visible = false;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = true;
                StrRoll->Visible = false;
                DexRoll->Visible = false;
                ConRoll->Visible = false;
                IntRoll->Visible = false;
                WisRoll->Visible = false;
                ChaRoll->Visible = false;
                break;
        case 1: PointsLeft->Enabled = false;
                PointsLeft->Text = 0;
                Rerolls1->Enabled = true;
                Rerolls2->Enabled = true;
                Rerolls1->Text = "6";
                Rerolls2->Text = "";
                NumberofRolls->Enabled = true;
                NumberofRolls->Text = 6;
                PointsSpent->Visible = false;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = true; 
                StrRoll->Visible = false;
                DexRoll->Visible = false;
                ConRoll->Visible = false;
                IntRoll->Visible = false;
                WisRoll->Visible = false;
                ChaRoll->Visible = false;
                break;
        case 2: PointsLeft->Enabled = false;
                PointsLeft->Text = 0;
                Rerolls1->Enabled = true;
                Rerolls2->Enabled = true;
                Rerolls1->Text = "1";
                Rerolls2->Text = "2";
                NumberofRolls->Enabled = true;
                NumberofRolls->Text = 18;
                PointsSpent->Visible = false;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = false;
                StrRoll->Visible = true;
                DexRoll->Visible = true;
                ConRoll->Visible = true;
                IntRoll->Visible = true;
                WisRoll->Visible = true;
                ChaRoll->Visible = true;
                break;
        case 3: PointsLeft->Enabled = false;
                PointsLeft->Text = 0;
                Rerolls1->Enabled = true;
                Rerolls2->Enabled = true;
                Rerolls1->Text = "1";
                Rerolls2->Text = "";
                NumberofRolls->Enabled = true;
                NumberofRolls->Text = 6;
                PointsSpent->Visible = false;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = false;
                StrRoll->Visible = true;
                DexRoll->Visible = true;
                ConRoll->Visible = true;
                IntRoll->Visible = true;
                WisRoll->Visible = true;
                ChaRoll->Visible = true;
                break;
        case 4: PointsLeft->Enabled = true;
                PointsLeft->Text = 25;
                Rerolls1->Enabled = false;
                Rerolls2->Enabled = false;
                Rerolls1->Text = "";
                Rerolls2->Text = "";
                NumberofRolls->Enabled = false;
                PointsSpent->Visible = true;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = false;
                StrRoll->Visible = false;
                DexRoll->Visible = false;
                ConRoll->Visible = false;
                IntRoll->Visible = false;
                WisRoll->Visible = false;
                ChaRoll->Visible = false;
                break;
        case 5: PointsLeft->Enabled = true;
                PointsLeft->Text = 70;
                Rerolls1->Enabled = false;
                Rerolls2->Enabled = false;
                Rerolls1->Text = "";
                Rerolls2->Text = "";
                NumberofRolls->Enabled = false;
                PointsSpent->Visible = true;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = false;
                StrRoll->Visible = false;
                DexRoll->Visible = false;
                ConRoll->Visible = false;
                IntRoll->Visible = false;
                WisRoll->Visible = false;
                ChaRoll->Visible = false;
                break;
        case 6: PointsLeft->Enabled = false;
                PointsLeft->Text = 0;
                Rerolls1->Enabled = false;
                Rerolls2->Enabled = false;
                Rerolls1->Text = "";
                Rerolls2->Text = "";
                NumberofRolls->Enabled = false;
                PointsSpent->Visible = false;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = false;
                StrRoll->Visible = false;
                DexRoll->Visible = false;
                ConRoll->Visible = false;
                IntRoll->Visible = false;
                WisRoll->Visible = false;
                ChaRoll->Visible = false;
                break;
        case 7: PointsLeft->Enabled = false;
                PointsLeft->Text = 0;
                Rerolls1->Enabled = true;
                Rerolls2->Enabled = true;
                Rerolls1->Text = "1";
                Rerolls2->Text = "";
                NumberofRolls->Enabled = true;
                PointsSpent->Visible = false;
                NoRerollifDrop->Checked = false;
                NoRerollifDrop->Enabled = true;
                StrRoll->Visible = false;
                DexRoll->Visible = false;
                ConRoll->Visible = false;
                IntRoll->Visible = false;
                WisRoll->Visible = false;
                ChaRoll->Visible = false;
                break;
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm3::ResetClick(TObject *Sender)
{
        PointsLeft->Enabled = false;
        PointsLeft->Text = 0;
        Rerolls1->Enabled = true;
        Rerolls2->Enabled = true;
        Rerolls1->Text = "1";
        Rerolls2->Text = "";
        NumberofRolls->Enabled = true;
        NumberofRolls->Text = 6;
        PointsSpent->Visible = false;
        NoRerollifDrop->Checked = false;
        NoRerollifDrop->Enabled = true;
        StatTypes->Enabled = true;
        Rolls->Items->Clear();
        RollStats->Enabled = true;
        StrRoll->Caption = 0;
        DexRoll->Caption = 0;
        ConRoll->Caption = 0;
        IntRoll->Caption = 0;
        WisRoll->Caption = 0;
        ChaRoll->Caption = 0;
        StrRoll->Visible = false;
        DexRoll->Visible = false;
        ConRoll->Visible = false;
        IntRoll->Visible = false;
        WisRoll->Visible = false;
        ChaRoll->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ApplyClick(TObject *Sender)
{
        Form1->StrScr->Text = StrRoll->Caption;
        Form1->DexScr->Text = DexRoll->Caption;
        Form1->ConScr->Text = ConRoll->Caption;
        Form1->IntScr->Text = IntRoll->Caption;
        Form1->WisScr->Text = WisRoll->Caption;
        Form1->ChaScr->Text = ChaRoll->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::RollStatsClick(TObject *Sender)
{
        StatTypes->Enabled = false;
        int i, found = 0, j, k, l[50], Lowest, Lowest2, Highest, Rerolled, Total;
        AnsiString FinalTotal;
        for (i = 0; i < 8 && !found; i++)
                if (StatTypes->Selected[i])
                        found = 1;
        for (j = 0; j < 20; j++)
                l[i] = 0;
        switch (i-1)
        {
        case 0: for (j = 0; j < 12; j++)
                        Rolls->Items->Add("");
                for (k = 0; k < NumberofRolls->Text.ToInt(); k++)
                {
                        for (j = 0; j < 4; j++)
                                l[j] = (rand()%6)+1;
                        Lowest = 0;
                        for (j = 1; j < 4; j++)
                                if (l[j] < l[Lowest])
                                        Lowest = j;
                        if (NoRerollifDrop->Checked)
                                if (Rerolls1->Text.ToIntDef(-1) == l[Lowest])
                                        l[Lowest] = 0;
                                else if (Rerolls2->Text.ToIntDef(-1) == l[Lowest])
                                        l[Lowest] = 0;
                        do
                        {
                                Rerolled = 0;
                                for (j = 0; j < 4; j++)
                                        if (l[j] == Rerolls1->Text.ToIntDef(-1) || l[j] == Rerolls2->Text.ToIntDef(-1))
                                        {
                                                l[j] = (rand()%6)+1;
                                                Rerolled = 1;
                                        }
                        } while (Rerolled);
                        Lowest = 0;
                        for (j = 1; j < 4; j++)
                                if (l[j] < l[Lowest])
                                        Lowest = j;
                        l[Lowest] = 0;
                        Total = 0;
                        for (j = 0; j < 4; j++)
                                if (l[j] != Rerolls1->Text.ToIntDef(-1) && l[j] != Rerolls2->Text.ToIntDef(-1))
                                        Total += l[j];
                        FinalTotal = Total;
                        switch (k)
                        {
                        case 0: Rolls->Items->Insert(0, FinalTotal);
                                break;
                        case 1: Rolls->Items->Insert(3, FinalTotal);
                                break;
                        case 2: Rolls->Items->Insert(6, FinalTotal);
                                break;
                        case 3: Rolls->Items->Insert(9, FinalTotal);
                                break;
                        case 4: Rolls->Items->Insert(12, FinalTotal);
                                break;
                        case 5: Rolls->Items->Insert(15, FinalTotal);
                                break;
                        default:Rolls->Items->Append(FinalTotal);
                                break;
                        }
                }
                break;
        case 1: for (j = 0; j < 12; j++)
                        Rolls->Items->Add("");
                for (k = 0; k < NumberofRolls->Text.ToInt(); k++)
                {
                        for (j = 0; j < 4; j++)
                                l[j] = (rand()%6)+1;
                        Highest = 0;
                        for (j = 1; j < 4; j++)
                                if (l[j] > l[Highest])
                                        Highest = j;
                        if (NoRerollifDrop->Checked)
                                if (Rerolls1->Text.ToIntDef(-1) == l[Highest])
                                        l[Highest] = 0;
                                else if (Rerolls2->Text.ToIntDef(-1) == l[Highest])
                                        l[Highest] = 0;
                        do
                        {
                                Rerolled = 0;
                                for (j = 0; j < 4; j++)
                                        if (l[j] == Rerolls1->Text.ToIntDef(-1) || l[j] == Rerolls2->Text.ToIntDef(-1))
                                        {
                                                l[j] = (rand()%6)+1;
                                                Rerolled = 1;
                                        }
                        } while (Rerolled);
                        Highest = 0;
                        for (j = 1; j < 4; j++)
                                if (l[j] > l[Highest])
                                        Highest = j;
                        l[Highest] = 0;
                        Total = 0;
                        for (j = 0; j < 4; j++)
                                if (l[j] != Rerolls1->Text.ToIntDef(-1) && l[j] != Rerolls2->Text.ToIntDef(-1))
                                        Total += l[j];
                        FinalTotal = Total;
                        switch (k)
                        {
                        case 0: Rolls->Items->Insert(0, FinalTotal);
                                break;
                        case 1: Rolls->Items->Insert(3, FinalTotal);
                                break;
                        case 2: Rolls->Items->Insert(6, FinalTotal);
                                break;
                        case 3: Rolls->Items->Insert(9, FinalTotal);
                                break;
                        case 4: Rolls->Items->Insert(12, FinalTotal);
                                break;
                        case 5: Rolls->Items->Insert(15, FinalTotal);
                                break;
                        default:Rolls->Items->Append(FinalTotal);
                                break;
                        }
                }
                break;
        case 2: for (k = 0; k < NumberofRolls->Text.ToInt(); k++)
                {
                        do
                        {
                                l[0] = (rand()%6)+1;
                        } while (l[0] == Rerolls1->Text.ToIntDef(0) || l[0] == Rerolls2->Text.ToIntDef(0));
                        Rolls->Items->Add(l[0]);
                }                                                
                break;
        case 3: for (j = 0; j < 12; j++)
                        Rolls->Items->Add("");
                for (k = 0; k < NumberofRolls->Text.ToInt(); k++)
                {
                        for (j = 0; j < 3; j++)
                                l[j] = (rand()%6)+1;
                        Lowest = 0;
                        for (j = 1; j < 3; j++)
                                if (l[j] < l[Lowest])
                                        Lowest = j;
                        do
                        {
                                Rerolled = 0;
                                for (j = 0; j < 4; j++)
                                        if (l[j] == Rerolls1->Text.ToIntDef(-1) || l[j] == Rerolls2->Text.ToIntDef(-1))
                                        {
                                                l[j] = (rand()%6)+1;
                                                Rerolled = 1;
                                        }
                        } while (Rerolled);
                        Total = 0;
                        for (j = 0; j < 4; j++)
                                if (l[j] != Rerolls1->Text.ToIntDef(-1) && l[j] != Rerolls2->Text.ToIntDef(-1))
                                        Total += l[j];
                        FinalTotal = Total;
                        switch (k)
                        {
                        case 0: Rolls->Items->Insert(0, FinalTotal);
                                break;
                        case 1: Rolls->Items->Insert(3, FinalTotal);
                                break;
                        case 2: Rolls->Items->Insert(6, FinalTotal);
                                break;
                        case 3: Rolls->Items->Insert(9, FinalTotal);
                                break;
                        case 4: Rolls->Items->Insert(12, FinalTotal);
                                break;
                        case 5: Rolls->Items->Insert(15, FinalTotal);
                                break;
                        default:Rolls->Items->Append(FinalTotal);
                                break;
                        }
                }
                break;
        case 4: for (j = 0; j < 12; j++)
                        Rolls->Items->Add("");
                Rolls->Items->Insert(0, 8);
                Rolls->Items->Insert(3, 8);
                Rolls->Items->Insert(6, 8);
                Rolls->Items->Insert(9, 8);
                Rolls->Items->Insert(12, 8);
                Rolls->Items->Insert(15, 8);
                break;
        case 5: for (j = 0; j < 12; j++)
                        Rolls->Items->Add("");
                Rolls->Items->Insert(0, 0);
                Rolls->Items->Insert(3, 0);
                Rolls->Items->Insert(6, 0);
                Rolls->Items->Insert(9, 0);
                Rolls->Items->Insert(12, 0);
                Rolls->Items->Insert(15, 0);
                break;
        case 6: for (j = 0; j < 12; j++)
                        Rolls->Items->Add("");
                Rolls->Items->Insert(0, 15);
                Rolls->Items->Insert(3, 14);
                Rolls->Items->Insert(6, 13);
                Rolls->Items->Insert(9, 12);
                Rolls->Items->Insert(12, 10);
                Rolls->Items->Insert(15, 8);
                break;
        case 7: for (j = 0; j < 12; j++)
                        Rolls->Items->Add("");
                for (k = 0; k < NumberofRolls->Text.ToInt(); k++)
                {
                        for (j = 0; j < 5; j++)
                        {
                                l[j] = (rand()%6)+1;
                        }
                        Lowest = 0;
                        Lowest2 = 1;
                        if (l[Lowest] > l[Lowest2])
                        {
                                Lowest = 1;
                                Lowest2 = 0;
                        }
                        for (j = 2; j < 5; j++)
                                if (l[j] < l[Lowest])
                                        Lowest = j;
                                else if (l[j] < l[Lowest2])
                                        Lowest2 = j;
                        if (NoRerollifDrop->Checked)
                        {
                                if (Rerolls1->Text.ToIntDef(-1) == l[Lowest])
                                        l[Lowest] = 0;
                                else if (Rerolls2->Text.ToIntDef(-1) == l[Lowest])
                                        l[Lowest] = 0;
                                if (Rerolls1->Text.ToIntDef(-1) == l[Lowest2])
                                        l[Lowest] = 0;
                                else if (Rerolls2->Text.ToIntDef(-1) == l[Lowest2])
                                        l[Lowest] = 0;
                        }
                        do
                        {
                                Rerolled = 0;
                                for (j = 0; j < 5; j++)
                                        if (l[j] == Rerolls1->Text.ToIntDef(-1) || l[j] == Rerolls2->Text.ToIntDef(-1))
                                        {
                                                l[j] = (rand()%6)+1;
                                                Rerolled = 1;
                                        }
                        } while (Rerolled);
                        Lowest = 0;
                        Lowest2 = 1;
                        if (l[Lowest] > l[Lowest2])
                        {
                                Lowest = 1;
                                Lowest2 = 0;
                        }
                        for (j = 2; j < 5; j++)
                                if (l[j] < l[Lowest])
                                {
                                        Lowest2 = Lowest;
                                        Lowest = j;
                                }
                                else if (l[j] < l[Lowest2])
                                        Lowest2 = j;
                        l[Lowest] = 0;
                        l[Lowest2] = 0;
                        Total = 0;
                        for (j = 0; j < 5; j++)
                                if (l[j] != Rerolls1->Text.ToIntDef(-1) && l[j] != Rerolls2->Text.ToIntDef(-1))
                                        Total += l[j];
                        FinalTotal = Total;
                        switch (k)
                        {
                        case 0: Rolls->Items->Insert(0, FinalTotal);
                                break;
                        case 1: Rolls->Items->Insert(3, FinalTotal);
                                break;
                        case 2: Rolls->Items->Insert(6, FinalTotal);
                                break;
                        case 3: Rolls->Items->Insert(9, FinalTotal);
                                break;
                        case 4: Rolls->Items->Insert(12, FinalTotal);
                                break;
                        case 5: Rolls->Items->Insert(15, FinalTotal);
                                break;
                        default:Rolls->Items->Append(FinalTotal);
                                break;
                        }
                }
                break;
        }
        Total = 0;
        for (j = 0; j < 3; j++)
                Total += Rolls->Items->Strings[j].ToIntDef(0);
        StrRoll->Caption = Total;
        Total = 0;
        for (j; j < 6; j++)
                Total += Rolls->Items->Strings[j].ToIntDef(0);
        DexRoll->Caption = Total;
        Total = 0;
        for (j; j < 9; j++)
                Total += Rolls->Items->Strings[j].ToIntDef(0);
        ConRoll->Caption = Total;
        Total = 0;
        for (j; j < 12; j++)
                Total += Rolls->Items->Strings[j].ToIntDef(0);
        IntRoll->Caption = Total;
        Total = 0;
        for (j; j < 15; j++)
                Total += Rolls->Items->Strings[j].ToIntDef(0);
        WisRoll->Caption = Total;
        Total = 0;
        for (j; j < 18; j++)
                Total += Rolls->Items->Strings[j].ToIntDef(0);
        ChaRoll->Caption = Total;
        RollStats->Enabled = false;
        PointsLeft->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::CSpinButton1DownClick(TObject *Sender)
{
        short i, j, k, l, found = 0, Total;
        AnsiString Roll;
        for (i = 0; i < Rolls->Items->Count && !found; i++)
                if (Rolls->Selected[i])
                        found = 1;
        found = 0;
        for (j = 0; j < 8 && !found; j++)
                if (StatTypes->Selected[j])
                        found = 1;
        switch (j-1)
        {
                case 2: if (i-1 != 17)
                        {
                                Rolls->Items->Move(i-1,i);
                                Rolls->ItemIndex = i;
                        }
                        break;
                case 4: k = PointsLeft->Text.ToInt();
                        l = Rolls->Items->Strings[i-1].ToInt();
                        if (l > 8)
                        {
                                switch (l)
                                {
                                case 9:
                                case 10:
                                case 11:
                                case 12:
                                case 13:
                                case 14: k = k + 1;
                                         break;
                                case 16:
                                case 15: k = k + 2;
                                         break;
                                case 17:
                                case 18: k = k + 3;
                                         break;
                                }
                                l--;
                                PointsLeft->Text = k;
                                Rolls->Items->Strings[i-1] = l;
                        }
                        break;
                case 5: k = PointsLeft->Text.ToInt();
                        l = Rolls->Items->Strings[i-1].ToInt();
                        if (l > 0)
                        {
                                k++;
                                l--;
                                PointsLeft->Text = k;
                                Rolls->Items->Strings[i-1] = l;
                        }
                        break;
                default:switch (i-1)
                        {
                        case 0: Rolls->Items->Move(0,3);
                                Rolls->Items->Move(2,0);
                                Rolls->ItemIndex = 3;
                                break;
                        case 1: break;
                        case 2: break;
                        case 3: Rolls->Items->Move(3,6);
                                Rolls->Items->Move(5,3);
                                Rolls->ItemIndex = 6;
                                break;
                        case 4: break;
                        case 5: break;
                        case 6: Rolls->Items->Move(6,9);
                                Rolls->Items->Move(8,6);
                                Rolls->ItemIndex = 9;
                                break;
                        case 7: break;
                        case 8: break;
                        case 9: Rolls->Items->Move(9,12);
                                Rolls->Items->Move(11,9);
                                Rolls->ItemIndex = 12;
                                break;
                        case 10:break;
                        case 11:break;
                        case 12:Rolls->Items->Move(12,15);
                                Rolls->Items->Move(14,12);
                                Rolls->ItemIndex = 15;
                                break;
                        case 13:break;
                        case 14:break;
                        case 15:if (Rolls->Items->Count > 18)
                                {
                                        Rolls->Items->Move(15,18);
                                        Rolls->Items->Move(17,15);
                                        Rolls->ItemIndex = 18;
                                }
                                break;
                        case 16:break;
                        case 17:break;
                        default:if (Rolls->Items->Count > i)
                                {
                                        Rolls->Items->Move(i-1,i);
                                        Rolls->ItemIndex = i;
                                }
                                break;
                        }
                        break;
        }
        Total = 0;
        for (i = 0; i < 3; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        StrRoll->Caption = Total;
        Total = 0;
        for (i; i < 6; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        DexRoll->Caption = Total;
        Total = 0;
        for (i; i < 9; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        ConRoll->Caption = Total;
        Total = 0;
        for (i; i < 12; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        IntRoll->Caption = Total;
        Total = 0;
        for (i; i < 15; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        WisRoll->Caption = Total;
        Total = 0;
        for (i; i < 18; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        ChaRoll->Caption = Total;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::CSpinButton1UpClick(TObject *Sender)
{
        short i, j, k, l, found = 0, Total;
        for (i = 0; i < Rolls->Items->Count && !found; i++)
                if (Rolls->Selected[i])
                        found = 1;
        found = 0;
        for (j = 0; j < 8 && !found; j++)
                if (StatTypes->Selected[j])
                        found = 1;
        switch (j-1)
        {
                case 2: if (i-1 != 0)
                        {
                                Rolls->Items->Move(i-1,i-2);
                                Rolls->ItemIndex = i-2;
                        }
                        break;
                case 4: k = PointsLeft->Text.ToInt();
                        l = Rolls->Items->Strings[i-1].ToInt();
                        if (k > 0 & l < 18)
                        {
                                switch (l)
                                {
                                case 8:
                                case 9:
                                case 10:
                                case 11:
                                case 12:
                                case 13: k = k - 1;
                                         break;
                                case 14:
                                case 15: k = k - 2;
                                         break;
                                case 16:
                                case 17: k = k - 3;
                                         break;
                                }
                                l++;
                                PointsLeft->Text = k;
                                Rolls->Items->Strings[i-1] = l;
                        }
                        break;
                case 5: k = PointsLeft->Text.ToInt();
                        l = Rolls->Items->Strings[i-1].ToInt();
                        if (l < 18)
                        {
                                k--;
                                l++;
                                PointsLeft->Text = k;
                                Rolls->Items->Strings[i-1] = l;
                        }
                        break;
                default:switch (i-1)
                {
                case 0: break;
                case 1: break;
                case 2: break;
                case 3: Rolls->Items->Move(3,0);
                        Rolls->Items->Move(1,3);
                        Rolls->ItemIndex = 0;
                        break;
                case 4: break;
                case 5: break;
                case 6: Rolls->Items->Move(6,3);
                        Rolls->Items->Move(4,6);
                        Rolls->ItemIndex = 3;
                        break;
                case 7: break;
                case 8: break;
                case 9: Rolls->Items->Move(9,6);
                        Rolls->Items->Move(7,9);
                        Rolls->ItemIndex = 6;
                        break;
                case 10:break;
                case 11:break;
                case 12:Rolls->Items->Move(12,9);
                        Rolls->Items->Move(10,12);
                        Rolls->ItemIndex = 9;
                        break;
                case 13:break;
                case 14:break;
                case 15:Rolls->Items->Move(15,12);
                        Rolls->Items->Move(13,15);
                        Rolls->ItemIndex = 12;
                        break;
                case 16:break;
                case 17:break;
                case 18:Rolls->Items->Move(18,15);
                        Rolls->Items->Move(16,18);
                        Rolls->ItemIndex = 15;
                        break;
                default:Rolls->Items->Move(i-1,i-2);
                        Rolls->ItemIndex = i-2;
                        break;
                }
        }
        Total = 0;
        for (i = 0; i < 3; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        StrRoll->Caption = Total;
        Total = 0;
        for (i; i < 6; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        DexRoll->Caption = Total;
        Total = 0;
        for (i; i < 9; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        ConRoll->Caption = Total;
        Total = 0;
        for (i; i < 12; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        IntRoll->Caption = Total;
        Total = 0;
        for (i; i < 15; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        WisRoll->Caption = Total;
        Total = 0;
        for (i; i < 18; i++)
                Total += Rolls->Items->Strings[i].ToIntDef(0);
        ChaRoll->Caption = Total;
}
//---------------------------------------------------------------------------



void __fastcall TForm3::FormShow(TObject *Sender)
{
        StatTypes->ItemIndex = 0;        
}
//---------------------------------------------------------------------------

