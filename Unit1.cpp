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

#include <stdlib.h>
#include <fstream.h>
#include <Printers.hpp>
#include <windows.h>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

//Self explanatory: Closes the program
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
        Form1->Close();
}
//---------------------------------------------------------------------------

int TestSave()
{
        try
        {
        	Form1->FortBase->Text.ToInt();
        	Form1->FortMagic->Text.ToInt();
        	Form1->FortMiscMod->Text.ToInt();
        	Form1->RefMiscMod->Text.ToInt();
        	Form1->RefMagic->Text.ToInt();
        	Form1->RefBase->Text.ToInt();
        	Form1->WillBase->Text.ToInt();
        	Form1->WillMagic->Text.ToInt();
        	Form1->WillMiscMod->Text.ToInt();
        	Form1->GrappleMiscMod->Text.ToInt();
        	Form1->AppraiseRanks->Text.ToInt();
        	Form1->BalanceRanks->Text.ToInt();
        	Form1->BluffRanks->Text.ToInt();
        	Form1->ClimbRanks->Text.ToInt();
        	Form1->ConcentrationRanks->Text.ToInt();
        	Form1->Craft1Ranks->Text.ToInt();
        	Form1->Craft2Ranks->Text.ToInt();
        	Form1->Craft3Ranks->Text.ToInt();
        	Form1->DecipherRanks->Text.ToInt();
        	Form1->DiplomacyRanks->Text.ToInt();
        	Form1->DisableRanks->Text.ToInt();
        	Form1->DisguiseRanks->Text.ToInt();
        	Form1->EscapeRanks->Text.ToInt();
        	Form1->ForgeryRanks->Text.ToInt();
        	Form1->GatherRanks->Text.ToInt();
        	Form1->HandleRanks->Text.ToInt();
        	Form1->HealRanks->Text.ToInt();
        	Form1->HideRanks->Text.ToInt();
        	Form1->IntimidateRanks->Text.ToInt();
        	Form1->JumpRanks->Text.ToInt();
        	Form1->Knowledge1Ranks->Text.ToInt();
        	Form1->Knowledge2Ranks->Text.ToInt();
        	Form1->Knowledge3Ranks->Text.ToInt();
        	Form1->Knowledge4Ranks->Text.ToInt();
        	Form1->Knowledge5Ranks->Text.ToInt();
        	Form1->ListenRanks->Text.ToInt();
        	Form1->MoveRanks->Text.ToInt();
        	Form1->OpenRanks->Text.ToInt();
        	Form1->Perform1Ranks->Text.ToInt();
        	Form1->Perform2Ranks->Text.ToInt();
        	Form1->Perform3Ranks->Text.ToInt();
        	Form1->Profession1Ranks->Text.ToInt();
        	Form1->Profession2Ranks->Text.ToInt();
        	Form1->RideRanks->Text.ToInt();
        	Form1->SearchRanks->Text.ToInt();
        	Form1->SenseRanks->Text.ToInt();
        	Form1->SleightRanks->Text.ToInt();
        	Form1->SpellcraftRanks->Text.ToInt();
        	Form1->SpotRanks->Text.ToInt();
        	Form1->SurvivalRanks->Text.ToInt();
        	Form1->SwimRanks->Text.ToInt();
        	Form1->TumbleRanks->Text.ToInt();
        	Form1->UseMagicRanks->Text.ToInt();
        	Form1->UseRopeRanks->Text.ToInt();
        	Form1->Misc1Ranks->Text.ToInt();
        	Form1->Misc2Ranks->Text.ToInt();
        	Form1->Misc3Ranks->Text.ToInt();
        	Form1->AppraiseMisc->Text.ToInt();
        	Form1->BalanceMisc->Text.ToInt();
        	Form1->BluffMisc->Text.ToInt();
        	Form1->ClimbMisc->Text.ToInt();
        	Form1->ConcentrationMisc->Text.ToInt();
        	Form1->Craft1Misc->Text.ToInt();
        	Form1->Craft2Misc->Text.ToInt();
        	Form1->Craft3Misc->Text.ToInt();
        	Form1->DecipherMisc->Text.ToInt();
        	Form1->DiplomacyMisc->Text.ToInt();
        	Form1->DisableMisc->Text.ToInt();
        	Form1->DisguiseMisc->Text.ToInt();
        	Form1->EscapeMisc->Text.ToInt();
        	Form1->ForgeryMisc->Text.ToInt();
        	Form1->GatherMisc->Text.ToInt();
        	Form1->HandleMisc->Text.ToInt();
        	Form1->HealMisc->Text.ToInt();
        	Form1->HideMisc->Text.ToInt();
        	Form1->IntimidateMisc->Text.ToInt();
        	Form1->JumpMisc->Text.ToInt();
        	Form1->Knowledge1Misc->Text.ToInt();
        	Form1->Knowledge2Misc->Text.ToInt();
        	Form1->Knowledge3Misc->Text.ToInt();
        	Form1->Knowledge4Misc->Text.ToInt();
        	Form1->Knowledge5Misc->Text.ToInt();
        	Form1->ListenMisc->Text.ToInt();
        	Form1->MoveMisc->Text.ToInt();
        	Form1->OpenMisc->Text.ToInt();
        	Form1->Perform1Misc->Text.ToInt();
        	Form1->Perform2Misc->Text.ToInt();
        	Form1->Perform3Misc->Text.ToInt();
        	Form1->Profession1Misc->Text.ToInt();
        	Form1->Profession2Misc->Text.ToInt();
        	Form1->RideMisc->Text.ToInt();
        	Form1->SearchMisc->Text.ToInt();
        	Form1->SenseMisc->Text.ToInt();
        	Form1->SleightMisc->Text.ToInt();
        	Form1->SpellcraftMisc->Text.ToInt();
        	Form1->SpotMisc->Text.ToInt();
        	Form1->SurvivalMisc->Text.ToInt();
        	Form1->SwimMisc->Text.ToInt();
        	Form1->TumbleMisc->Text.ToInt();
        	Form1->UseMagicMisc->Text.ToInt();
        	Form1->UseRopeMisc->Text.ToInt();
        	Form1->Misc1Misc->Text.ToInt();
        	Form1->Misc2Misc->Text.ToInt();
        	Form1->Misc3Misc->Text.ToInt();
        	Form1->NaturalArmor->Text.ToInt();
        	Form1->DeflectionMod->Text.ToInt();
        	Form1->ArmorMiscMod->Text.ToInt();
        	Form1->InitMiscMod->Text.ToInt();
                return 1;
        }
        catch(...)
        {
                ShowMessage("Save Failed.  Check number fields.");
                return 0;
        }
}

//Self explanatory: Saves the character sheet to a text file
void SaveSheet(AnsiString filename)
{
           ofstream fout;
           fout.open(filename.c_str());

           //First line is mainly to keep track of version changes, as well as to tag the save file
           fout << "Dungeons and Dragons v3.5 Digital Character Sheet - Version 3.1 - © 2007 Matt Schraeder and Frozen Insanity - http://www.kontek.net/frozen" << endl;
           //Output each Edit Box to the file first, each on its own line
           fout << Form1->StrModL->Font->Name.c_str() << endl;
           fout << Form1->StrModL->Font->Size << endl;
           fout << Form1->StrModL->Font->Color << endl;
           fout << Form1->CharName->Font->Name.c_str() << endl;
           fout << Form1->CharName->Font->Size << endl;
           fout << Form1->CharName->Font->Color << endl;
           fout << Form1->CondSave->Font->Name.c_str() << endl;
           fout << Form1->CondSave->Font->Size << endl;
           fout << Form1->CondSave->Font->Color << endl;
           fout << Form1->Feats->Font->Name.c_str() << endl;
           fout << Form1->Feats->Font->Size << endl;
           fout << Form1->Feats->Font->Color << endl;
           fout << Form1->MiscNotes->Font->Name.c_str() << endl;
           fout << Form1->MiscNotes->Font->Size << endl;
           fout << Form1->MiscNotes->Font->Color << endl;
           fout << Form1->RollLog->Font->Name.c_str() << endl;
           fout << Form1->RollLog->Font->Size << endl;
           fout << Form1->RollLog->Font->Color << endl;
           fout << Form1->HP->Text.c_str() << endl;
           fout << Form1->NaturalArmor->Text.c_str() << endl;
           fout << Form1->DeflectionMod->Text.c_str() << endl;
           fout << Form1->ArmorMiscMod->Text.c_str() << endl;
           fout << Form1->InitMiscMod->Text.c_str() << endl;
           fout << Form1->StrScr->Text.c_str() << endl;
           fout << Form1->RefTemp->Text.c_str() << endl;
           fout << Form1->WillTemp->Text.c_str() << endl;
           fout << Form1->FortTemp->Text.c_str() << endl;
           fout << Form1->Wounds->Text.c_str() << endl;
           fout << Form1->Nonlethal->Text.c_str() << endl;
           fout << Form1->Speed->Text.c_str() << endl;
           fout << Form1->DamageReduction->Text.c_str() << endl;
           fout << Form1->MaxRanks->Text.c_str() << endl;
           fout << Form1->CharName->Text.c_str() << endl;
           fout << Form1->Player->Text.c_str() << endl;
           fout << Form1->ClassLevel->Text.c_str() << endl;
           fout << Form1->Race->Text.c_str() << endl;
           fout << Form1->Alignment->Text.c_str() << endl;
           fout << Form1->Deity->Text.c_str() << endl;
           fout << Form1->Size->Text.c_str() << endl;
           fout << Form1->Age->Text.c_str() << endl;
           fout << Form1->Gender->Text.c_str() << endl;
           fout << Form1->Height->Text.c_str() << endl;
           fout << Form1->Weight->Text.c_str() << endl;
           fout << Form1->Eyes->Text.c_str() << endl;
           fout << Form1->Hair->Text.c_str() << endl;
           fout << Form1->Skin->Text.c_str() << endl;
           fout << Form1->StrTScr->Text.c_str() << endl;
           fout << Form1->DexTScr->Text.c_str() << endl;
           fout << Form1->DexScr->Text.c_str() << endl;
           fout << Form1->ConScr->Text.c_str() << endl;
           fout << Form1->ConTScr->Text.c_str() << endl;
           fout << Form1->IntTScr->Text.c_str() << endl;
           fout << Form1->IntScr->Text.c_str() << endl;
           fout << Form1->WisScr->Text.c_str() << endl;
           fout << Form1->WisTScr->Text.c_str() << endl;
           fout << Form1->ChaTScr->Text.c_str() << endl;
           fout << Form1->ChaScr->Text.c_str() << endl;
           fout << Form1->FortBase->Text.c_str() << endl;
           fout << Form1->FortMagic->Text.c_str() << endl;
           fout << Form1->FortMiscMod->Text.c_str() << endl;
           fout << Form1->RefMiscMod->Text.c_str() << endl;
           fout << Form1->RefMagic->Text.c_str() << endl;
           fout << Form1->RefBase->Text.c_str() << endl;
           fout << Form1->WillBase->Text.c_str() << endl;
           fout << Form1->WillMagic->Text.c_str() << endl;
           fout << Form1->WillMiscMod->Text.c_str() << endl;
           fout << Form1->BAB->Text.c_str() << endl;
           fout << Form1->SpellResistance->Text.c_str() << endl;
           fout << Form1->GrappleMiscMod->Text.c_str() << endl;
           fout << Form1->Weapon1Name->Text.c_str() << endl;
           fout << Form1->Weapon1Bonus->Text.c_str() << endl;
           fout << Form1->Weapon1Damage->Text.c_str() << endl;
           fout << Form1->Weapon1Crit->Text.c_str() << endl;
           fout << Form1->Weapon1Notes->Text.c_str() << endl;
           fout << Form1->Weapon1Ammo->Text.c_str() << endl;
           fout << Form1->Weapon1Type->Text.c_str() << endl;
           fout << Form1->Weapon1Range->Text.c_str() << endl;
           fout << Form1->Weapon2Name->Text.c_str() << endl;
           fout << Form1->Weapon2Bonus->Text.c_str() << endl;
           fout << Form1->Weapon2Damage->Text.c_str() << endl;
           fout << Form1->Weapon2Crit->Text.c_str() << endl;
           fout << Form1->Weapon2Notes->Text.c_str() << endl;
           fout << Form1->Weapon2Ammo->Text.c_str() << endl;
           fout << Form1->Weapon2Type->Text.c_str() << endl;
           fout << Form1->Weapon2Range->Text.c_str() << endl;
           fout << Form1->Weapon3Name->Text.c_str() << endl;
           fout << Form1->Weapon3Bonus->Text.c_str() << endl;
           fout << Form1->Weapon3Damage->Text.c_str() << endl;
           fout << Form1->Weapon3Crit->Text.c_str() << endl;
           fout << Form1->Weapon3Notes->Text.c_str() << endl;
           fout << Form1->Weapon3Ammo->Text.c_str() << endl;
           fout << Form1->Weapon3Type->Text.c_str() << endl;
           fout << Form1->Weapon3Range->Text.c_str() << endl;
           fout << Form1->Weapon4Name->Text.c_str() << endl;
           fout << Form1->Weapon4Bonus->Text.c_str() << endl;
           fout << Form1->Weapon4Damage->Text.c_str() << endl;
           fout << Form1->Weapon4Crit->Text.c_str() << endl;
           fout << Form1->Weapon4Notes->Text.c_str() << endl;
           fout << Form1->Weapon4Ammo->Text.c_str() << endl;
           fout << Form1->Weapon4Type->Text.c_str() << endl;
           fout << Form1->Weapon4Range->Text.c_str() << endl;
           fout << Form1->Weapon5Name->Text.c_str() << endl;
           fout << Form1->Weapon5Bonus->Text.c_str() << endl;
           fout << Form1->Weapon5Damage->Text.c_str() << endl;
           fout << Form1->Weapon5Crit->Text.c_str() << endl;
           fout << Form1->Weapon5Notes->Text.c_str() << endl;
           fout << Form1->Weapon5Ammo->Text.c_str() << endl;
           fout << Form1->Weapon5Type->Text.c_str() << endl;
           fout << Form1->Weapon5Range->Text.c_str() << endl;
           fout << Form1->AppraiseRanks->Text.c_str() << endl;
           fout << Form1->BalanceRanks->Text.c_str() << endl;
           fout << Form1->BluffRanks->Text.c_str() << endl;
           fout << Form1->ClimbRanks->Text.c_str() << endl;
           fout << Form1->ConcentrationRanks->Text.c_str() << endl;
           fout << Form1->Craft1Ranks->Text.c_str() << endl;
           fout << Form1->Craft2Ranks->Text.c_str() << endl;
           fout << Form1->Craft3Ranks->Text.c_str() << endl;
           fout << Form1->DecipherRanks->Text.c_str() << endl;
           fout << Form1->DiplomacyRanks->Text.c_str() << endl;
           fout << Form1->DisableRanks->Text.c_str() << endl;
           fout << Form1->DisguiseRanks->Text.c_str() << endl;
           fout << Form1->EscapeRanks->Text.c_str() << endl;
           fout << Form1->ForgeryRanks->Text.c_str() << endl;
           fout << Form1->GatherRanks->Text.c_str() << endl;
           fout << Form1->HandleRanks->Text.c_str() << endl;
           fout << Form1->HealRanks->Text.c_str() << endl;
           fout << Form1->HideRanks->Text.c_str() << endl;
           fout << Form1->IntimidateRanks->Text.c_str() << endl;
           fout << Form1->JumpRanks->Text.c_str() << endl;
           fout << Form1->Knowledge1Ranks->Text.c_str() << endl;
           fout << Form1->Knowledge2Ranks->Text.c_str() << endl;
           fout << Form1->Knowledge3Ranks->Text.c_str() << endl;
           fout << Form1->Knowledge4Ranks->Text.c_str() << endl;
           fout << Form1->Knowledge5Ranks->Text.c_str() << endl;
           fout << Form1->ListenRanks->Text.c_str() << endl;
           fout << Form1->MoveRanks->Text.c_str() << endl;
           fout << Form1->OpenRanks->Text.c_str() << endl;
           fout << Form1->Perform1Ranks->Text.c_str() << endl;
           fout << Form1->Perform2Ranks->Text.c_str() << endl;
           fout << Form1->Perform3Ranks->Text.c_str() << endl;
           fout << Form1->Profession1Ranks->Text.c_str() << endl;
           fout << Form1->Profession2Ranks->Text.c_str() << endl;
           fout << Form1->RideRanks->Text.c_str() << endl;
           fout << Form1->SearchRanks->Text.c_str() << endl;
           fout << Form1->SenseRanks->Text.c_str() << endl;
           fout << Form1->SleightRanks->Text.c_str() << endl;
           fout << Form1->SpellcraftRanks->Text.c_str() << endl;
           fout << Form1->SpotRanks->Text.c_str() << endl;
           fout << Form1->SurvivalRanks->Text.c_str() << endl;
           fout << Form1->SwimRanks->Text.c_str() << endl;
           fout << Form1->TumbleRanks->Text.c_str() << endl;
           fout << Form1->UseMagicRanks->Text.c_str() << endl;
           fout << Form1->UseRopeRanks->Text.c_str() << endl;
           fout << Form1->Misc1Ranks->Text.c_str() << endl;
           fout << Form1->Misc2Ranks->Text.c_str() << endl;
           fout << Form1->Misc3Ranks->Text.c_str() << endl;
           fout << Form1->AppraiseMisc->Text.c_str() << endl;
           fout << Form1->BalanceMisc->Text.c_str() << endl;
           fout << Form1->BluffMisc->Text.c_str() << endl;
           fout << Form1->ClimbMisc->Text.c_str() << endl;
           fout << Form1->ConcentrationMisc->Text.c_str() << endl;
           fout << Form1->Craft1Misc->Text.c_str() << endl;
           fout << Form1->Craft2Misc->Text.c_str() << endl;
           fout << Form1->Craft3Misc->Text.c_str() << endl;
           fout << Form1->DecipherMisc->Text.c_str() << endl;
           fout << Form1->DiplomacyMisc->Text.c_str() << endl;
           fout << Form1->DisableMisc->Text.c_str() << endl;
           fout << Form1->DisguiseMisc->Text.c_str() << endl;
           fout << Form1->EscapeMisc->Text.c_str() << endl;
           fout << Form1->ForgeryMisc->Text.c_str() << endl;
           fout << Form1->GatherMisc->Text.c_str() << endl;
           fout << Form1->HandleMisc->Text.c_str() << endl;
           fout << Form1->HealMisc->Text.c_str() << endl;
           fout << Form1->HideMisc->Text.c_str() << endl;
           fout << Form1->IntimidateMisc->Text.c_str() << endl;
           fout << Form1->JumpMisc->Text.c_str() << endl;
           fout << Form1->Knowledge1Misc->Text.c_str() << endl;
           fout << Form1->Knowledge2Misc->Text.c_str() << endl;
           fout << Form1->Knowledge3Misc->Text.c_str() << endl;
           fout << Form1->Knowledge4Misc->Text.c_str() << endl;
           fout << Form1->Knowledge5Misc->Text.c_str() << endl;
           fout << Form1->ListenMisc->Text.c_str() << endl;
           fout << Form1->MoveMisc->Text.c_str() << endl;
           fout << Form1->OpenMisc->Text.c_str() << endl;
           fout << Form1->Perform1Misc->Text.c_str() << endl;
           fout << Form1->Perform2Misc->Text.c_str() << endl;
           fout << Form1->Perform3Misc->Text.c_str() << endl;
           fout << Form1->Profession1Misc->Text.c_str() << endl;
           fout << Form1->Profession2Misc->Text.c_str() << endl;
           fout << Form1->RideMisc->Text.c_str() << endl;
           fout << Form1->SearchMisc->Text.c_str() << endl;
           fout << Form1->SenseMisc->Text.c_str() << endl;
           fout << Form1->SleightMisc->Text.c_str() << endl;
           fout << Form1->SpellcraftMisc->Text.c_str() << endl;
           fout << Form1->SpotMisc->Text.c_str() << endl;
           fout << Form1->SurvivalMisc->Text.c_str() << endl;
           fout << Form1->SwimMisc->Text.c_str() << endl;
           fout << Form1->TumbleMisc->Text.c_str() << endl;
           fout << Form1->UseMagicMisc->Text.c_str() << endl;
           fout << Form1->UseRopeMisc->Text.c_str() << endl;
           fout << Form1->Misc1Misc->Text.c_str() << endl;
           fout << Form1->Misc2Misc->Text.c_str() << endl;
           fout << Form1->Misc3Misc->Text.c_str() << endl;
           fout << Form1->Misc1Ability->Text.c_str() << endl;
           fout << Form1->Misc2Ability->Text.c_str() << endl;
           fout << Form1->Misc3Ability->Text.c_str() << endl;
           fout << Form1->Craft1Edit->Text.c_str() << endl;
           fout << Form1->Craft2Edit->Text.c_str() << endl;
           fout << Form1->Craft3Edit->Text.c_str() << endl;
           fout << Form1->Knowledge1Edit->Text.c_str() << endl;
           fout << Form1->Knowledge2Edit->Text.c_str() << endl;
           fout << Form1->Knowledge3Edit->Text.c_str() << endl;
           fout << Form1->Knowledge4Edit->Text.c_str() << endl;
           fout << Form1->Knowledge5Edit->Text.c_str() << endl;
           fout << Form1->Perform1Edit->Text.c_str() << endl;
           fout << Form1->Perform2Edit->Text.c_str() << endl;
           fout << Form1->Perform3Edit->Text.c_str() << endl;
           fout << Form1->Profession1Edit->Text.c_str() << endl;
           fout << Form1->Profession2Edit->Text.c_str() << endl;
           fout << Form1->Misc1Edit->Text.c_str() << endl;
           fout << Form1->Misc2Edit->Text.c_str() << endl;
           fout << Form1->Misc3Edit->Text.c_str() << endl;
           fout << Form1->ArmorCheck->Text.c_str() << endl;
           fout << Form1->ArmorType->Text.c_str() << endl;
           fout << Form1->ArmorAC->Text.c_str() << endl;
           fout << Form1->ArmorDex->Text.c_str() << endl;
           fout << Form1->ArmorName->Text.c_str() << endl;
           fout << Form1->ArmorSpeed->Text.c_str() << endl;
           fout << Form1->ArmorWeight->Text.c_str() << endl;
           fout << Form1->ArmorSpecial->Text.c_str() << endl;
           fout << Form1->ShieldName->Text.c_str() << endl;
           fout << Form1->ArmorSpellFailure->Text.c_str() << endl;
           fout << Form1->ShieldAC->Text.c_str() << endl;
           fout << Form1->ShieldWeight->Text.c_str() << endl;
           fout << Form1->ShieldCheck->Text.c_str() << endl;
           fout << Form1->ShieldSpellFailure->Text.c_str() << endl;
           fout << Form1->ShieldSpecial->Text.c_str() << endl;
           fout << Form1->Experience->Text.c_str() << endl;
           fout << Form1->Campaign->Text.c_str() << endl;
           fout << Form1->Protective1Name->Text.c_str() << endl;
           fout << Form1->Protective1AC->Text.c_str() << endl;
           fout << Form1->Protective1Weight->Text.c_str() << endl;
           fout << Form1->Protective1Special->Text.c_str() << endl;
           fout << Form1->Protective2Name->Text.c_str() << endl;
           fout << Form1->Protective2AC->Text.c_str() << endl;
           fout << Form1->Protective2Weight->Text.c_str() << endl;
           fout << Form1->Protective2Special->Text.c_str() << endl;
           fout << Form1->DomainSchool->Text.c_str() << endl;
           fout << Form1->SpellsKnown1->Text.c_str() << endl;
           fout << Form1->SpellsKnown0->Text.c_str() << endl;
           fout << Form1->SpellsKnown2->Text.c_str() << endl;
           fout << Form1->SpellsKnown3->Text.c_str() << endl;
           fout << Form1->SpellsKnown4->Text.c_str() << endl;
           fout << Form1->SpellsKnown5->Text.c_str() << endl;
           fout << Form1->SpellsKnown6->Text.c_str() << endl;
           fout << Form1->SpellsKnown7->Text.c_str() << endl;
           fout << Form1->SpellsKnown8->Text.c_str() << endl;
           fout << Form1->SpellsKnown9->Text.c_str() << endl;
           fout << Form1->SpellsDay9->Text.c_str() << endl;
           fout << Form1->SpellsDay8->Text.c_str() << endl;
           fout << Form1->SpellsDay7->Text.c_str() << endl;
           fout << Form1->SpellsDay6->Text.c_str() << endl;
           fout << Form1->SpellsDay5->Text.c_str() << endl;
           fout << Form1->SpellsDay4->Text.c_str() << endl;
           fout << Form1->SpellsDay3->Text.c_str() << endl;
           fout << Form1->SpellsDay2->Text.c_str() << endl;
           fout << Form1->SpellsDay1->Text.c_str() << endl;
           fout << Form1->SpellsDay0->Text.c_str() << endl;
           fout << Form1->BonusSpells1->Text.c_str() << endl;
           fout << Form1->BonusSpells2->Text.c_str() << endl;
           fout << Form1->BonusSpells3->Text.c_str() << endl;
           fout << Form1->BonusSpells4->Text.c_str() << endl;
           fout << Form1->BonusSpells5->Text.c_str() << endl;
           fout << Form1->BonusSpells6->Text.c_str() << endl;
           fout << Form1->BonusSpells7->Text.c_str() << endl;
           fout << Form1->BonusSpells8->Text.c_str() << endl;
           fout << Form1->BonusSpells9->Text.c_str() << endl;
           fout << Form1->SpellSaveAbility->Text.c_str() << endl;

           //Next output if each Check Box is checked to the file on it's own line
           fout << Form1->AppraiseCheck->Checked << endl;
           fout << Form1->BalanceCheck->Checked << endl;
           fout << Form1->BluffCheck->Checked << endl;
           fout << Form1->ClimbCheck->Checked << endl;
           fout << Form1->ConcentrationCheck->Checked << endl;
           fout << Form1->GatherCheck->Checked << endl;
           fout << Form1->ForgeryCheck->Checked << endl;
           fout << Form1->EscapeCheck->Checked << endl;
           fout << Form1->DisguiseCheck->Checked << endl;
           fout << Form1->DisableCheck->Checked << endl;
           fout << Form1->ListenCheck->Checked << endl;
           fout << Form1->MoveCheck->Checked << endl;
           fout << Form1->OpenCheck->Checked << endl;
           fout << Form1->Perform1Check->Checked << endl;
           fout << Form1->Perform2Check->Checked << endl;
           fout << Form1->Perform3Check->Checked << endl;
           fout << Form1->Profession1Check->Checked << endl;
           fout << Form1->Profession2Check->Checked << endl;
           fout << Form1->RideCheck->Checked << endl;
           fout << Form1->SearchCheck->Checked << endl;
           fout << Form1->SenseCheck->Checked << endl;
           fout << Form1->SleightCheck->Checked << endl;
           fout << Form1->SpellcraftCheck->Checked << endl;
           fout << Form1->SpotCheck->Checked << endl;
           fout << Form1->SurvivalCheck->Checked << endl;
           fout << Form1->SwimCheck->Checked << endl;
           fout << Form1->TumbleCheck->Checked << endl;
           fout << Form1->UseMagicCheck->Checked << endl;
           fout << Form1->UseRopeCheck->Checked << endl;
           fout << Form1->Misc1Check->Checked << endl;
           fout << Form1->Craft1Check->Checked << endl;
           fout << Form1->Craft2Check->Checked << endl;
           fout << Form1->Craft3Check->Checked << endl;
           fout << Form1->DecipherCheck->Checked << endl;
           fout << Form1->DiplomacyCheck->Checked << endl;
           fout << Form1->HandleCheck->Checked << endl;
           fout << Form1->HealCheck->Checked << endl;
           fout << Form1->HideCheck->Checked << endl;
           fout << Form1->IntimidateCheck->Checked << endl;
           fout << Form1->JumpCheck->Checked << endl;
           fout << Form1->Knowledge1Check->Checked << endl;
           fout << Form1->Knowledge2Check->Checked << endl;
           fout << Form1->Knowledge3Check->Checked << endl;
           fout << Form1->Knowledge4Check->Checked << endl;
           fout << Form1->Knowledge5Check->Checked << endl;
           fout << Form1->Misc2Check->Checked << endl;
           fout << Form1->Misc3Check->Checked << endl;

           //Now output the count of each memo's Lines property followed by each string on it's own line
           short i, count;
           count = Form1->Spells->Lines->Count;
           fout << Form1->Spells->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->Spells->Lines->Strings[i].c_str() << endl;
           count = Form1->Feats->Lines->Count;
           fout << Form1->Feats->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->Feats->Lines->Strings[i].c_str() << endl;
           count = Form1->SpecialAbilities->Lines->Count;
           fout << Form1->SpecialAbilities->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->SpecialAbilities->Lines->Strings[i].c_str() << endl;
           count = Form1->Languages->Lines->Count;
           fout << Form1->Languages->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->Languages->Lines->Strings[i].c_str() << endl;
           count = Form1->Money->Lines->Count;
           fout << Form1->Money->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->Money->Lines->Strings[i].c_str() << endl;
           count = Form1->OtherPossessions->Lines->Count;
           fout << Form1->OtherPossessions->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->OtherPossessions->Lines->Strings[i].c_str() << endl;
           count = Form1->SpellCondMod->Lines->Count;
           fout << Form1->SpellCondMod->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->SpellCondMod->Lines->Strings[i].c_str() << endl;
           count = Form1->CondSave->Lines->Count;
           fout << Form1->CondSave->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->CondSave->Lines->Strings[i].c_str() << endl;
           count = Form1->MiscNotes->Lines->Count;
           fout << Form1->MiscNotes->Lines->Count << endl;
           for (i = 0; i < count; i++)
                fout << Form1->MiscNotes->Lines->Strings[i].c_str() << endl;
           fout.close();
           AnsiString TheName = filename;
           if (TheName != "config.dnd")
                   ShowMessage(filename + " Saved.");
}

//Decides whether or not to open the SaveDialog1, and what filename it should use
void __fastcall TForm1::Save1Click(TObject *Sender)
{
        if (TestSave())
        {
                //Check if the file's been saved yet, if it has save using that filename
                if(SaveDialog1->FileName != "")
                        SaveSheet(SaveDialog1->FileName);
                //Check if it was a loaded save file, if it was then save using that filename
                else if (OpenDialog1->FileName != "")
                        SaveSheet(OpenDialog1->FileName);
                //If it hasn't been saved, and wasn't loaded, bring up save dialog box
                else
                        if(SaveDialog1->Execute())
                                SaveSheet(SaveDialog1->FileName);
        }
}
//---------------------------------------------------------------------------

//Brings up the idiot box, then brings up OpenDialog1
void __fastcall TForm1::Load1Click(TObject *Sender)
{
        //The idiot box
        int SaveOnLoad = Application->MessageBox("Do you want to save the current character Sheet before loading?", "Confirm Load", MB_YESNOCANCEL);
        //On Yes
        if (SaveOnLoad == 6)
                Save1Click(this);
        //On No
        if (SaveOnLoad != 2)
        {
                if(OpenDialog1->Execute())
                {
                        RevertAsk = false;
                        ReverttoLastSave1Click(this);
                }
                RevertAsk = true;
        }
        //Cancel button causes the function to do nothing
}
//---------------------------------------------------------------------------

//Displays the about box
void __fastcall TForm1::About1Click(TObject *Sender)
{
        Form2->ShowModal();
}
//---------------------------------------------------------------------------

//Sets the title bar
void __fastcall TForm1::CharNameChange(TObject *Sender)
{
        Form1->Caption = CharName->Text + " - Dungeons and Dragons v3.5 Digital Character Sheet";
}
//---------------------------------------------------------------------------

//Figures out the modifier for an ability score
//Just drop the score in half and subtract 5 from that and you've got your modifier
//If it's greator than 0, put the '+' in front of it, if it's less than 0 it'll have the '-' already
AnsiString AbilityMod(AnsiString Score)
{

        AnsiString StringMod;
        int IntMod = (Score/2)-5;
        StringMod = IntMod;
        if (IntMod >= 0)
                StringMod = "+" + StringMod;
        return StringMod;
}

//Simple addition, nothing too special here
void ACCalculator()
{
        Form1->ACTotalL->Caption = 10 + Form1->ACArmorBonusL->Caption.ToInt() + Form1->ACShieldBonusL->Caption.ToInt() + Form1->ACDexModL->Caption.ToInt() + Form1->ACSizeMod->Caption.ToInt() + Form1->NaturalArmor->Text.ToInt() + Form1->DeflectionMod->Text.ToInt() + Form1->ArmorMiscMod->Text.ToInt();
        Form1->TouchAC->Caption = 10 + Form1->ACDexModL->Caption.ToInt() + Form1->ACSizeMod->Caption.ToInt() + Form1->DeflectionMod->Text.ToInt() + Form1->ArmorMiscMod->Text.ToInt();
        Form1->FlatfootAC->Caption = 10 + Form1->ACArmorBonusL->Caption.ToInt() + Form1->ACShieldBonusL->Caption.ToInt() + Form1->ACSizeMod->Caption.ToInt() + Form1->NaturalArmor->Text.ToInt() + Form1->DeflectionMod->Text.ToInt() + Form1->ArmorMiscMod->Text.ToInt();
}

//Creates grapple mod using simple addition
//If it's greator than 0, pop on the '+'... if it's less than 0 it's already got the '-'
//Save mods, init mod, and skill mods all work the same way
void GrappleCalculator()
{
        int Mod = Form1->GrappleBAB->Caption.ToInt() + Form1->GrappleStrMod->Caption.ToInt() + Form1->GrappleSizeMod->Caption.ToInt() + Form1->GrappleMiscMod->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->GrappleMod->Caption = TheMod;
        else
                Form1->GrappleMod->Caption = "+" + TheMod;
}

void FortSaveCalculator()
{
        int Mod = Form1->FortBase->Text.ToInt() + Form1->FortConModL->Caption.ToInt() + Form1->FortMagic->Text.ToInt() + Form1->FortMiscMod->Text.ToInt() + Form1->FortTemp->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->FortModL->Caption = TheMod;
        else
                Form1->FortModL->Caption = "+" + TheMod;
}

void RefSaveCalculator()
{
        int Mod = Form1->RefBase->Text.ToInt() + Form1->RefDexModL->Caption.ToInt() + Form1->RefMagic->Text.ToInt() + Form1->RefMiscMod->Text.ToInt() + Form1->RefTemp->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->RefModL->Caption = TheMod;
        else
                Form1->RefModL->Caption = "+" + TheMod;
}

void WillSaveCalculator()
{
        int Mod = Form1->WillBase->Text.ToInt() + Form1->WillWisModL->Caption.ToInt() + Form1->WillMagic->Text.ToInt() + Form1->WillMiscMod->Text.ToInt() + Form1->WillTemp->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->WillModL->Caption = TheMod;
        else
                Form1->WillModL->Caption = "+" + TheMod;
}

void InitCalculator()
{
        int Mod = Form1->InitDexModL->Caption.ToInt() + Form1->InitMiscMod->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->InitModL->Caption = TheMod;
        else
                Form1->InitModL->Caption = "+" + TheMod;
}

int ArmorCheckCalculator()
{
        int TheArmorCheck;
        if (Form1->ArmorCheck->Text == "")
                TheArmorCheck = 0;
        else
                TheArmorCheck = Form1->ArmorCheck->Text.ToInt();
        int TheShieldCheck;
        if (Form1->ShieldCheck->Text == "")
                TheShieldCheck = 0;
        else
                TheShieldCheck = Form1->ShieldCheck->Text.ToInt();
        int TheArmorCheckPenalty = - (abs(TheArmorCheck) + abs(TheShieldCheck));
        return TheArmorCheckPenalty;
}

void AppraiseCalculator()
{
        int Mod = Form1->AppraiseAbilityModL->Caption.ToInt() + Form1->AppraiseRanks->Text.ToInt() + Form1->AppraiseMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->AppraiseModL->Caption = TheMod;
        else
                Form1->AppraiseModL->Caption = "+" + TheMod;
}

void BalanceCalculator()
{
        int Mod = Form1->BalanceAbilityModL->Caption.ToInt() + Form1->BalanceRanks->Text.ToInt() + Form1->BalanceMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->BalanceModL->Caption = TheMod;
        else
                Form1->BalanceModL->Caption = "+" + TheMod;
}

void BluffCalculator()
{
        int Mod = Form1->BluffAbilityModL->Caption.ToInt() + Form1->BluffRanks->Text.ToInt() + Form1->BluffMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->BluffModL->Caption = TheMod;
        else
                Form1->BluffModL->Caption = "+" + TheMod;
}

void ClimbCalculator()
{
        int Mod = Form1->ClimbAbilityModL->Caption.ToInt() + Form1->ClimbRanks->Text.ToInt() + Form1->ClimbMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->ClimbModL->Caption = TheMod;
        else
                Form1->ClimbModL->Caption = "+" + TheMod;
}

void ConcentrationCalculator()
{
        int Mod = Form1->ConcentrationAbilityModL->Caption.ToInt() + Form1->ConcentrationRanks->Text.ToInt() + Form1->ConcentrationMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->ConcentrationModL->Caption = TheMod;
        else
                Form1->ConcentrationModL->Caption = "+" + TheMod;
}

void Craft1Calculator()
{
        int Mod = Form1->Craft1AbilityModL->Caption.ToInt() + Form1->Craft1Ranks->Text.ToInt() + Form1->Craft1Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Craft1ModL->Caption = TheMod;
        else
                Form1->Craft1ModL->Caption = "+" + TheMod;
}

void Craft2Calculator()
{
        int Mod = Form1->Craft2AbilityModL->Caption.ToInt() + Form1->Craft2Ranks->Text.ToInt() + Form1->Craft2Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Craft2ModL->Caption = TheMod;
        else
                Form1->Craft2ModL->Caption = "+" + TheMod;
}

void Craft3Calculator()
{
        int Mod = Form1->Craft3AbilityModL->Caption.ToInt() + Form1->Craft3Ranks->Text.ToInt() + Form1->Craft3Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Craft3ModL->Caption = TheMod;
        else
                Form1->Craft3ModL->Caption = "+" + TheMod;
}

void DecipherCalculator()
{
        int Mod = Form1->DecipherAbilityModL->Caption.ToInt() + Form1->DecipherRanks->Text.ToInt() + Form1->DecipherMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->DecipherModL->Caption = TheMod;
        else
                Form1->DecipherModL->Caption = "+" + TheMod;
}

void DiplomacyCalculator()
{
        int Mod = Form1->DiplomacyAbilityModL->Caption.ToInt() + Form1->DiplomacyRanks->Text.ToInt() + Form1->DiplomacyMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->DiplomacyModL->Caption = TheMod;
        else
                Form1->DiplomacyModL->Caption = "+" + TheMod;
}

void DisableCalculator()
{
        int Mod = Form1->DisableAbilityModL->Caption.ToInt() + Form1->DisableRanks->Text.ToInt() + Form1->DisableMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->DisableModL->Caption = TheMod;
        else
                Form1->DisableModL->Caption = "+" + TheMod;
}

void DisguiseCalculator()
{
        int Mod = Form1->DisguiseAbilityModL->Caption.ToInt() + Form1->DisguiseRanks->Text.ToInt() + Form1->DisguiseMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->DisguiseModL->Caption = TheMod;
        else
                Form1->DisguiseModL->Caption = "+" + TheMod;
}

void EscapeCalculator()
{
        int Mod = Form1->EscapeAbilityModL->Caption.ToInt() + Form1->EscapeRanks->Text.ToInt() + Form1->EscapeMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->EscapeModL->Caption = TheMod;
        else
                Form1->EscapeModL->Caption = "+" + TheMod;
}

void ForgeryCalculator()
{
        int Mod = Form1->ForgeryAbilityModL->Caption.ToInt() + Form1->ForgeryRanks->Text.ToInt() + Form1->ForgeryMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->ForgeryModL->Caption = TheMod;
        else
                Form1->ForgeryModL->Caption = "+" + TheMod;
}

void GatherCalculator()
{
        int Mod = Form1->GatherAbilityModL->Caption.ToInt() + Form1->GatherRanks->Text.ToInt() + Form1->GatherMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->GatherModL->Caption = TheMod;
        else
                Form1->GatherModL->Caption = "+" + TheMod;
}

void HandleCalculator()
{
        int Mod = Form1->HandleAbilityModL->Caption.ToInt() + Form1->HandleRanks->Text.ToInt() + Form1->HandleMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->HandleModL->Caption = TheMod;
        else
                Form1->HandleModL->Caption = "+" + TheMod;
}

void HealCalculator()
{
        int Mod = Form1->HealAbilityModL->Caption.ToInt() + Form1->HealRanks->Text.ToInt() + Form1->HealMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->HealModL->Caption = TheMod;
        else
                Form1->HealModL->Caption = "+" + TheMod;
}

void HideCalculator()
{
        int Mod = Form1->HideAbilityModL->Caption.ToInt() + Form1->HideRanks->Text.ToInt() + Form1->HideMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->HideModL->Caption = TheMod;
        else
                Form1->HideModL->Caption = "+" + TheMod;
}

void IntimidateCalculator()
{
        int Mod = Form1->IntimidateAbilityModL->Caption.ToInt() + Form1->IntimidateRanks->Text.ToInt() + Form1->IntimidateMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->IntimidateModL->Caption = TheMod;
        else
                Form1->IntimidateModL->Caption = "+" + TheMod;
}

void JumpCalculator()
{
        int Mod = Form1->JumpAbilityModL->Caption.ToInt() + Form1->JumpRanks->Text.ToInt() + Form1->JumpMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->JumpModL->Caption = TheMod;
        else
                Form1->JumpModL->Caption = "+" + TheMod;
}

void Knowledge1Calculator()
{
        int Mod = Form1->Knowledge1AbilityModL->Caption.ToInt() + Form1->Knowledge1Ranks->Text.ToInt() + Form1->Knowledge1Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Knowledge1ModL->Caption = TheMod;
        else
                Form1->Knowledge1ModL->Caption = "+" + TheMod;
}

void Knowledge2Calculator()
{
        int Mod = Form1->Knowledge2AbilityModL->Caption.ToInt() + Form1->Knowledge2Ranks->Text.ToInt() + Form1->Knowledge2Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Knowledge2ModL->Caption = TheMod;
        else
                Form1->Knowledge2ModL->Caption = "+" + TheMod;
}

void Knowledge3Calculator()
{
        int Mod = Form1->Knowledge3AbilityModL->Caption.ToInt() + Form1->Knowledge3Ranks->Text.ToInt() + Form1->Knowledge3Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Knowledge3ModL->Caption = TheMod;
        else
                Form1->Knowledge3ModL->Caption = "+" + TheMod;
}

void Knowledge4Calculator()
{
        int Mod = Form1->Knowledge4AbilityModL->Caption.ToInt() + Form1->Knowledge4Ranks->Text.ToInt() + Form1->Knowledge4Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Knowledge4ModL->Caption = TheMod;
        else
                Form1->Knowledge4ModL->Caption = "+" + TheMod;
}

void Knowledge5Calculator()
{
        int Mod = Form1->Knowledge5AbilityModL->Caption.ToInt() + Form1->Knowledge5Ranks->Text.ToInt() + Form1->Knowledge5Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Knowledge5ModL->Caption = TheMod;
        else
                Form1->Knowledge5ModL->Caption = "+" + TheMod;
}

void ListenCalculator()
{
        int Mod = Form1->ListenAbilityModL->Caption.ToInt() + Form1->ListenRanks->Text.ToInt() + Form1->ListenMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->ListenModL->Caption = TheMod;
        else
                Form1->ListenModL->Caption = "+" + TheMod;
}

void MoveCalculator()
{
        int Mod = Form1->MoveAbilityModL->Caption.ToInt() + Form1->MoveRanks->Text.ToInt() + Form1->MoveMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->MoveModL->Caption = TheMod;
        else
                Form1->MoveModL->Caption = "+" + TheMod;
}

void OpenCalculator()
{
        int Mod = Form1->OpenAbilityModL->Caption.ToInt() + Form1->OpenRanks->Text.ToInt() + Form1->OpenMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->OpenModL->Caption = TheMod;
        else
                Form1->OpenModL->Caption = "+" + TheMod;
}

void Perform1Calculator()
{
        int Mod = Form1->Perform1AbilityModL->Caption.ToInt() + Form1->Perform1Ranks->Text.ToInt() + Form1->Perform1Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Perform1ModL->Caption = TheMod;
        else
                Form1->Perform1ModL->Caption = "+" + TheMod;
}

void Perform2Calculator()
{
        int Mod = Form1->Perform2AbilityModL->Caption.ToInt() + Form1->Perform2Ranks->Text.ToInt() + Form1->Perform2Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Perform2ModL->Caption = TheMod;
        else
                Form1->Perform2ModL->Caption = "+" + TheMod;
}

void Perform3Calculator()
{
        int Mod = Form1->Perform3AbilityModL->Caption.ToInt() + Form1->Perform3Ranks->Text.ToInt() + Form1->Perform3Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Perform3ModL->Caption = TheMod;
        else
                Form1->Perform3ModL->Caption = "+" + TheMod;
}

void Profession1Calculator()
{
        int Mod = Form1->Profession1AbilityModL->Caption.ToInt() + Form1->Profession1Ranks->Text.ToInt() + Form1->Profession1Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Profession1ModL->Caption = TheMod;
        else
                Form1->Profession1ModL->Caption = "+" + TheMod;
}

void Profession2Calculator()
{
        int Mod = Form1->Profession2AbilityModL->Caption.ToInt() + Form1->Profession2Ranks->Text.ToInt() + Form1->Profession2Misc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Profession2ModL->Caption = TheMod;
        else
                Form1->Profession2ModL->Caption = "+" + TheMod;
}

void RideCalculator()
{
        int Mod = Form1->RideAbilityModL->Caption.ToInt() + Form1->RideRanks->Text.ToInt() + Form1->RideMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->RideModL->Caption = TheMod;
        else
                Form1->RideModL->Caption = "+" + TheMod;
}

void SearchCalculator()
{
        int Mod = Form1->SearchAbilityModL->Caption.ToInt() + Form1->SearchRanks->Text.ToInt() + Form1->SearchMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->SearchModL->Caption = TheMod;
        else
                Form1->SearchModL->Caption = "+" + TheMod;
}

void SenseCalculator()
{
        int Mod = Form1->SenseAbilityModL->Caption.ToInt() + Form1->SenseRanks->Text.ToInt() + Form1->SenseMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->SenseModL->Caption = TheMod;
        else
                Form1->SenseModL->Caption = "+" + TheMod;
}

void SleightCalculator()
{
        int Mod = Form1->SleightAbilityModL->Caption.ToInt() + Form1->SleightRanks->Text.ToInt() + Form1->SleightMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->SleightModL->Caption = TheMod;
        else
                Form1->SleightModL->Caption = "+" + TheMod;
}

void SpellcraftCalculator()
{
        int Mod = Form1->SpellcraftAbilityModL->Caption.ToInt() + Form1->SpellcraftRanks->Text.ToInt() + Form1->SpellcraftMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->SpellcraftModL->Caption = TheMod;
        else
                Form1->SpellcraftModL->Caption = "+" + TheMod;
}

void SpotCalculator()
{
        int Mod = Form1->SpotAbilityModL->Caption.ToInt() + Form1->SpotRanks->Text.ToInt() + Form1->SpotMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->SpotModL->Caption = TheMod;
        else
                Form1->SpotModL->Caption = "+" + TheMod;
}

void SurvivalCalculator()
{
        int Mod = Form1->SurvivalAbilityModL->Caption.ToInt() + Form1->SurvivalRanks->Text.ToInt() + Form1->SurvivalMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->SurvivalModL->Caption = TheMod;
        else
                Form1->SurvivalModL->Caption = "+" + TheMod;
}

void SwimCalculator()
{
        int Mod = Form1->SwimAbilityModL->Caption.ToInt() + Form1->SwimRanks->Text.ToInt() + Form1->SwimMisc->Text.ToInt() + ArmorCheckCalculator() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->SwimModL->Caption = TheMod;
        else
                Form1->SwimModL->Caption = "+" + TheMod;
}

void TumbleCalculator()
{
        int Mod = Form1->TumbleAbilityModL->Caption.ToInt() + Form1->TumbleRanks->Text.ToInt() + Form1->TumbleMisc->Text.ToInt() + ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->TumbleModL->Caption = TheMod;
        else
                Form1->TumbleModL->Caption = "+" + TheMod;
}

void UseMagicCalculator()
{
        int Mod = Form1->UseMagicAbilityModL->Caption.ToInt() + Form1->UseMagicRanks->Text.ToInt() + Form1->UseMagicMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->UseMagicModL->Caption = TheMod;
        else
                Form1->UseMagicModL->Caption = "+" + TheMod;
}

void UseRopeCalculator()
{
        int Mod = Form1->UseRopeAbilityModL->Caption.ToInt() + Form1->UseRopeRanks->Text.ToInt() + Form1->UseRopeMisc->Text.ToInt();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->UseRopeModL->Caption = TheMod;
        else
                Form1->UseRopeModL->Caption = "+" + TheMod;
}
void Misc1Calculator()
{
        int Mod = Form1->Misc1AbilityModL->Caption.ToInt() + Form1->Misc1Ranks->Text.ToInt() + Form1->Misc1Misc->Text.ToInt();
        if (Form1->Misc1ACPCheck->Checked)
                Mod += ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Misc1ModL->Caption = TheMod;
        else
                Form1->Misc1ModL->Caption = "+" + TheMod;
}

void Misc2Calculator()
{
        int Mod = Form1->Misc2AbilityModL->Caption.ToInt() + Form1->Misc2Ranks->Text.ToInt() + Form1->Misc2Misc->Text.ToInt();
        if (Form1->Misc2ACPCheck->Checked)
                Mod += ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Misc2ModL->Caption = TheMod;
        else
                Form1->Misc2ModL->Caption = "+" + TheMod;
}

void Misc3Calculator()
{
        int Mod = Form1->Misc3AbilityModL->Caption.ToInt() + Form1->Misc3Ranks->Text.ToInt() + Form1->Misc3Misc->Text.ToInt();
        if (Form1->Misc3ACPCheck->Checked)
                Mod += ArmorCheckCalculator();
        AnsiString TheMod = Mod;
        if (Mod < 0)
                Form1->Misc3ModL->Caption = TheMod;
        else
                Form1->Misc3ModL->Caption = "+" + TheMod;
}

//Just add up the entries in the SpellFailure boxes. Simple.
void ArcaneSpellFailureCalculator()
{
        AnsiString Temp1 = Form1->ArmorSpellFailure->Text;
        AnsiString Temp2 = Form1->ShieldSpellFailure->Text;
        AnsiString Test = "%";
        int Mod = 0, test = 0;
        if (Temp1 != "")
        {
                //Drops the % out of the Armor Spell Failure box for calculation purposes
                test = Temp1.Pos(Test);
                if (test)
                        Temp1.Delete(test,1);
                Mod += Temp1.ToInt();
        }
        if (Temp2 != "")
        {
                //Drops the % out of the Shield Spell Failure box for calculation purposes
                test = Temp2.Pos(Test);
                if (test)
                        Temp2.Delete(test,1);
                Mod += Temp2.ToInt();
        }
        Form1->SpellFailureL->Caption = Mod;
}

//This function is a little bit odd thanks to the Carrying Capacity table having a weird progression
//Basically, up until the Strength score is 10, the maximum load is just a multiple of 10
//After that it progresses in groups of 5 as follows: 15, 15, 20, 25, 25.
//After each group of 5, the progression doubles: 30, 30, 40, 50, 50... then to 60, 60, 80, 100, 100 and so forth
//The light Load is 1/3 of the max load
//The medium load is 2/3 of the max load
//Lift over head is equal to the max load
//Lift off ground is 2x the max load
//Push or Drag is 5x the max load
void CarryingCapacityCalculator()
{
        int max = 100, i, j, k, Score;
        //Initial progression list
        int List[5] = { 15, 15, 20, 25, 25 };

        //Clear out captions if the score is empty
        if (Form1->StrScr->Text == "")
        {
                Form1->LightLoad->Caption = "";
                Form1->MediumLoad->Caption = "";
                Form1->HeavyLoad->Caption = "";
                Form1->LiftOverHead->Caption = "";
                Form1->LiftOffGround->Caption = "";
                Form1->PushDrag->Caption = "";
        }
        //If the score isn't empty, figure out the carrying capacity
        else
        {
                //Use temp score, or base score?
                if (Form1->StrTScr->Text != "")
                        Score = Form1->StrTScr->Text.ToInt();
                else
                        Score = Form1->StrScr->Text.ToInt();

                //Why couldn't it all be this easy?
                if (Score <= 10)
	                max = Score*10;
                //The higher scores
                else
                        //Start at 100 (10*10), increase score by one
                        //Work in groups of 5 (for progression array)
	                for (i = 11; i <= Score; i+=5)
        	        {
                                //Update max by progression
	        	        for (j = 0; j < 5 && i+j <= Score; j++)
		        	        max += List[j%5];
                                //Update progression for next set of 5
                		for (k = 0; k < 5; k++)
	                		List[k] = List[k] * 2;
        	        }

                //Size modifiers for carrying capacity
                if (Form1->Size->Text == "Fine")
                        max = max/8;
                else if (Form1->Size->Text == "Diminutive")
                        max = max/4;
                else if (Form1->Size->Text == "Tiny")
                        max = max/2;
                else if (Form1->Size->Text == "Small")
                        max = max*0.75;
                else if (Form1->Size->Text == "Medium")
                        max = max;
                else if (Form1->Size->Text == "Large")
                        max = max*2;
                else if (Form1->Size->Text == "Huge")
                        max = max*4;
                else if (Form1->Size->Text == "Gargantuan")
                        max = max*8;
                else if (Form1->Size->Text == "Colossal")
                        max = max*16;

                //Yay, done! Just put in the captions with some basic math
                AnsiString TheString = "0-";
                Form1->LightLoad->Caption =  TheString + ((int)(((double)max)*((double)1/3)));
                TheString = "";
                Form1->MediumLoad->Caption = TheString + ((int)(((double)max)*((double)1/3)+1)) + "-" + ((int)(((double)max)*((double)2/3)));
                Form1->HeavyLoad->Caption = TheString + ((int)(((double)max)*((double)2/3)+1)) + "-" + max;
                Form1->LiftOverHead->Caption = max;
                Form1->LiftOffGround->Caption = max*2;;
                Form1->PushDrag->Caption = max*5;
        }
}

//MiscMod is used for setting the Ability Modifier Label for the custom skills
//TheAbility sets the actual text for the Key Ability box
//The returned int value is the bonus to put in the Ability Modifier Label
int MiscMod(TEdit *TheAbility)
{
        int mod = 0, setmod = 0;
        TheAbility->Text = TheAbility->Text.UpperCase();
        if (TheAbility->Text == "S" || TheAbility->Text == "ST" || TheAbility->Text == "STR")
        {
                TheAbility->Text = "STR";
                mod = Form1->StrModL->Caption.ToInt();
                setmod = 1;
        }
        else if (TheAbility->Text == "D" || TheAbility->Text == "DE" || TheAbility->Text == "DEX")
        {
                TheAbility->Text = "DEX";
                mod = Form1->DexModL->Caption.ToInt();
                setmod = 1;
        }
        else if (TheAbility->Text == "CO" || TheAbility->Text == "CON")
        {
                TheAbility->Text = "CON";
                mod = Form1->ConModL->Caption.ToInt();
                setmod = 1;
        }
        else if (TheAbility->Text == "I" || TheAbility->Text == "IN" || TheAbility->Text == "INT")
        {
                TheAbility->Text = "INT";
                mod = Form1->IntModL->Caption.ToInt();
                setmod = 1;
        }
        else if (TheAbility->Text == "W" || TheAbility->Text == "WI" || TheAbility->Text == "WIS")
        {
                TheAbility->Text = "WIS";
                mod = Form1->WisModL->Caption.ToInt();
                setmod = 1;
        }
        else if (TheAbility->Text == "CH" || TheAbility->Text == "CHA")
        {
                TheAbility->Text = "CHA";
                mod = Form1->ChaModL->Caption.ToInt();
                setmod = 1;
        }
        else if (TheAbility->Text == "C")
        {
                setmod = 1;
        }
        if (!setmod)
        {
                mod = 0;
                TheAbility->Text = "";
        }
        return mod;
}

//The StatChanger functions all work basically the same way:
//As long as the ability scores aren't empty, put the related ability modifier in the approriate boxes that require that modifier
//Once the gaps are filled in, recalculate related modifiers
void StrStatChanger()
{
        AnsiString mod;
        int MiscAbilityScore;
        if (Form1->StrScr->Text != "" || Form1->StrTScr->Text != "")
        {
                mod = AbilityMod(Form1->StrScr->Text);
                if (Form1->StrTScr->Text != "")
                        mod = AbilityMod(Form1->StrTScr->Text);
                Form1->ClimbAbilityModL->Caption = mod.ToInt();
                ClimbCalculator();
                Form1->JumpAbilityModL->Caption = mod.ToInt();
                JumpCalculator();
                Form1->SwimAbilityModL->Caption = mod.ToInt();
                SwimCalculator();
                Form1->GrappleStrMod->Caption = mod.ToInt();
                GrappleCalculator();
                CarryingCapacityCalculator();
                MiscAbilityScore = MiscMod(Form1->Misc1Ability);
                Form1->Misc1AbilityModL->Caption = MiscAbilityScore;
                Misc1Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc2Ability);
                Form1->Misc2AbilityModL->Caption = MiscAbilityScore;
                Misc2Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc3Ability);
                Form1->Misc3AbilityModL->Caption = MiscAbilityScore;
                Misc3Calculator();
        }
}

//On ScrChange functions all work the same way:
//If the box isn't blank, get the mod for that ability then call the appropriate StatChanger function
void __fastcall TForm1::StrScrChange(TObject *Sender)
{
        AnsiString mod;
        if (StrScr->Text != "")
        {
                mod = AbilityMod(StrScr->Text);
                StrModL->Caption = mod;
                StrStatChanger();
        }
        else
        {
                StrModL->Caption = "";
                CarryingCapacityCalculator();
        }
}
//---------------------------------------------------------------------------

//This chooses what should go in the Armor's Max Dex box
//If the Armor's Max Dex is less than the character's dex, use the Max Dex
//Otherwise use the character's dex
void ArmorMaxDexCalculator(AnsiString mod)
{
        if (Form1->ArmorDex->Text != "" && Form1->ArmorDex->Text != "+")
        {
                if ( Form1->ArmorDex->Text.ToInt() < mod.ToInt() )
                        Form1->ACDexModL->Caption = Form1->ArmorDex->Text.ToInt();
                else
                        Form1->ACDexModL->Caption = mod.ToInt();
        }
        else if (Form1->ArmorDex->Text == "")
                Form1->ACDexModL->Caption = mod.ToInt();
        ACCalculator();
}

void DexStatChanger()
{
        AnsiString mod;
        int MiscAbilityScore;
        if (Form1->DexScr->Text != "")
        {
                mod = AbilityMod(Form1->DexScr->Text);
                if (Form1->DexTScr->Text != "")
                        mod = AbilityMod(Form1->DexTScr->Text);
                Form1->BalanceAbilityModL->Caption = mod.ToInt();
                BalanceCalculator();
                Form1->EscapeAbilityModL->Caption = mod.ToInt();
                EscapeCalculator();
                Form1->HideAbilityModL->Caption = mod.ToInt();
                HideCalculator();
                Form1->MoveAbilityModL->Caption = mod.ToInt();
                MoveCalculator();
                Form1->OpenAbilityModL->Caption = mod.ToInt();
                OpenCalculator();
                Form1->RideAbilityModL->Caption = mod.ToInt();
                RideCalculator();
                Form1->SleightAbilityModL->Caption = mod.ToInt();
                SleightCalculator();
                Form1->TumbleAbilityModL->Caption = mod.ToInt();
                TumbleCalculator();
                Form1->UseRopeAbilityModL->Caption = mod.ToInt();
                UseRopeCalculator();
                ArmorMaxDexCalculator(mod);
                Form1->InitDexModL->Caption = mod.ToInt();
                Form1->RefDexModL->Caption = mod.ToInt();
                RefSaveCalculator();
                InitCalculator();
                MiscAbilityScore = MiscMod(Form1->Misc1Ability);
                Form1->Misc1AbilityModL->Caption = MiscAbilityScore;
                Misc1Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc2Ability);
                Form1->Misc2AbilityModL->Caption = MiscAbilityScore;
                Misc2Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc3Ability);
                Form1->Misc3AbilityModL->Caption = MiscAbilityScore;
                Misc3Calculator();
        }
}

void __fastcall TForm1::DexScrChange(TObject *Sender)
{
        AnsiString mod;
        if (DexScr->Text != "")
        {
                mod = AbilityMod(DexScr->Text);
                DexModL->Caption = mod;
                DexStatChanger();
        }
        else
                DexModL->Caption = "";
}
//---------------------------------------------------------------------------

void ConStatChanger()
{
        AnsiString mod;
        int MiscAbilityScore;
        if (Form1->ConScr->Text != "")
        {
                mod = AbilityMod(Form1->ConScr->Text);
                if (Form1->ConTScr->Text != "")
                        mod = AbilityMod(Form1->ConTScr->Text);
                Form1->ConcentrationAbilityModL->Caption = mod.ToInt();
                ConcentrationCalculator();
                Form1->FortConModL->Caption = mod.ToInt();
                FortSaveCalculator();
                MiscAbilityScore = MiscMod(Form1->Misc1Ability);
                Form1->Misc1AbilityModL->Caption = MiscAbilityScore;
                Misc1Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc2Ability);
                Form1->Misc2AbilityModL->Caption = MiscAbilityScore;
                Misc2Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc3Ability);
                Form1->Misc3AbilityModL->Caption = MiscAbilityScore;
                Misc3Calculator();
        }
}

void __fastcall TForm1::ConScrChange(TObject *Sender)
{
        AnsiString mod;
        if (ConScr->Text != "")
        {
                mod = AbilityMod(ConScr->Text);
                ConModL->Caption = mod;
                ConStatChanger();
        }
        else
                ConModL->Caption = "";
}
//---------------------------------------------------------------------------

void IntStatChanger()
{
        AnsiString mod;
        int MiscAbilityScore;
        if (Form1->IntScr->Text != "")
        {
                mod = AbilityMod(Form1->IntScr->Text);
                if (Form1->IntTScr->Text != "")
                        mod = AbilityMod(Form1->IntTScr->Text);
                Form1->AppraiseAbilityModL->Caption = mod.ToInt();
                AppraiseCalculator();
                Form1->Craft1AbilityModL->Caption = mod.ToInt();
                Craft1Calculator();
                Form1->Craft2AbilityModL->Caption = mod.ToInt();
                Craft2Calculator();
                Form1->Craft3AbilityModL->Caption = mod.ToInt();
                Craft3Calculator();
                Form1->DecipherAbilityModL->Caption = mod.ToInt();
                DecipherCalculator();
                Form1->DisableAbilityModL->Caption = mod.ToInt();
                DisableCalculator();
                Form1->ForgeryAbilityModL->Caption = mod.ToInt();
                ForgeryCalculator();
                Form1->Knowledge1AbilityModL->Caption = mod.ToInt();
                Knowledge1Calculator();
                Form1->Knowledge2AbilityModL->Caption = mod.ToInt();
                Knowledge2Calculator();
                Form1->Knowledge3AbilityModL->Caption = mod.ToInt();
                Knowledge3Calculator();
                Form1->Knowledge4AbilityModL->Caption = mod.ToInt();
                Knowledge4Calculator();
                Form1->Knowledge5AbilityModL->Caption = mod.ToInt();
                Knowledge5Calculator();
                Form1->SearchAbilityModL->Caption = mod.ToInt();
                SearchCalculator();
                Form1->SpellcraftAbilityModL->Caption = mod.ToInt();
                SpellcraftCalculator();
                MiscAbilityScore = MiscMod(Form1->Misc1Ability);
                Form1->Misc1AbilityModL->Caption = MiscAbilityScore;
                Misc1Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc2Ability);
                Form1->Misc2AbilityModL->Caption = MiscAbilityScore;
                Misc2Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc3Ability);
                Form1->Misc3AbilityModL->Caption = MiscAbilityScore;
                Misc3Calculator();
        }
}

void __fastcall TForm1::IntScrChange(TObject *Sender)
{
        AnsiString mod;
        if (IntScr->Text != "")
        {
                mod = AbilityMod(IntScr->Text);
                IntModL->Caption = mod;
                if (SpellSaveAbility->Text == "Int")
                        SpellSaveMod->Caption = mod;
                IntStatChanger();
        }
        else
                IntModL->Caption = "";
        SpellSaveAbilityChange(this);
}
//---------------------------------------------------------------------------

void WisStatChanger()
{
        AnsiString mod;
        int MiscAbilityScore;
        if (Form1->WisScr->Text != "")
        {
                mod = AbilityMod(Form1->WisScr->Text);
                if (Form1->WisTScr->Text != "")
                        mod = AbilityMod(Form1->WisTScr->Text);
                Form1->HealAbilityModL->Caption = mod.ToInt();
                HealCalculator();
                Form1->ListenAbilityModL->Caption = mod.ToInt();
                ListenCalculator();
                Form1->Profession1AbilityModL->Caption = mod.ToInt();
                Profession1Calculator();
                Form1->Profession2AbilityModL->Caption = mod.ToInt();
                Profession2Calculator();
                Form1->SenseAbilityModL->Caption = mod.ToInt();
                SenseCalculator();
                Form1->SpotAbilityModL->Caption = mod.ToInt();
                SpotCalculator();
                Form1->SurvivalAbilityModL->Caption = mod.ToInt();
                SurvivalCalculator();
                Form1->WillWisModL->Caption = mod.ToInt();
                WillSaveCalculator();
                MiscAbilityScore = MiscMod(Form1->Misc1Ability);
                Form1->Misc1AbilityModL->Caption = MiscAbilityScore;
                Misc1Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc2Ability);
                Form1->Misc2AbilityModL->Caption = MiscAbilityScore;
                Misc2Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc3Ability);
                Form1->Misc3AbilityModL->Caption = MiscAbilityScore;
                Misc3Calculator();
        }
}

void __fastcall TForm1::WisScrChange(TObject *Sender)
{
        AnsiString mod;
        if (WisScr->Text != "")
        {
                mod = AbilityMod(WisScr->Text);
                WisModL->Caption = mod;
                if (SpellSaveAbility->Text == "Wis")
                        SpellSaveMod->Caption = mod;
                WisStatChanger();
                SpellSaveAbilityChange(this);
        }
        else
                WisModL->Caption = "";
        SpellSaveAbilityChange(this);
}
//---------------------------------------------------------------------------

void ChaStatChanger()
{
        AnsiString mod;
        int MiscAbilityScore;
        if (Form1->ChaScr->Text != "")
        {
                mod = AbilityMod(Form1->ChaScr->Text);
                if (Form1->ChaTScr->Text != "")
                        mod = AbilityMod(Form1->ChaTScr->Text);
                Form1->BluffAbilityModL->Caption = mod.ToInt();
                BluffCalculator();
                Form1->DiplomacyAbilityModL->Caption = mod.ToInt();
                DiplomacyCalculator();
                Form1->DisguiseAbilityModL->Caption = mod.ToInt();
                DisguiseCalculator();
                Form1->GatherAbilityModL->Caption = mod.ToInt();
                GatherCalculator();
                Form1->HandleAbilityModL->Caption = mod.ToInt();
                HandleCalculator();
                Form1->IntimidateAbilityModL->Caption = mod.ToInt();
                IntimidateCalculator();
                Form1->Perform1AbilityModL->Caption = mod.ToInt();
                Perform1Calculator();
                Form1->Perform2AbilityModL->Caption = mod.ToInt();
                Perform2Calculator();
                Form1->Perform3AbilityModL->Caption = mod.ToInt();
                Perform3Calculator();
                Form1->UseMagicAbilityModL->Caption = mod.ToInt();
                UseMagicCalculator();
                MiscAbilityScore = MiscMod(Form1->Misc1Ability);
                Form1->Misc1AbilityModL->Caption = MiscAbilityScore;
                Misc1Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc2Ability);
                Form1->Misc2AbilityModL->Caption = MiscAbilityScore;
                Misc2Calculator();
                MiscAbilityScore = MiscMod(Form1->Misc3Ability);
                Form1->Misc3AbilityModL->Caption = MiscAbilityScore;
                Misc3Calculator();
        }
}

void __fastcall TForm1::ChaScrChange(TObject *Sender)
{
        AnsiString mod;
        if (ChaScr->Text != "")
        {
                mod = AbilityMod(ChaScr->Text);
                ChaModL->Caption = mod;
                if (SpellSaveAbility->Text == "Cha")
                        SpellSaveMod->Caption = mod;
                ChaStatChanger();
                SpellSaveAbilityChange(this);
        }
        else
                ChaModL->Caption = "";
        SpellSaveAbilityChange(this);
}
//---------------------------------------------------------------------------

//Armor and Shield AC's modify the same way:
//Change the AnsiString to an int, but default to 0, then recalculate the AC
//Reason for default: "" = 0
void __fastcall TForm1::ArmorACChange(TObject *Sender)
{
        ACArmorBonusL->Caption = ArmorAC->Text.ToIntDef(0);
        if (ArmorAC->Text != "" && ArmorAC->Text != "+")
                ACCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShieldACChange(TObject *Sender)
{
        ACShieldBonusL->Caption = ShieldAC->Text.ToIntDef(0);
        if (ShieldAC->Text != "" && ShieldAC->Text != "+")
                ACCalculator();
}
//---------------------------------------------------------------------------

//BAB Changer really just modifies the Grapple bonus
//In order to do this without an error, it must only copy the first attack's bonus into the grapple BAB mod box - otherwise you'll get an int conversion error
void __fastcall TForm1::BABChange(TObject *Sender)
{
        short i;
        if (BAB->Text != "" && BAB->Text != "+")
        {
                GrappleBAB->Caption = "";
                //Keep copying a letter from the BAB Edit Box until you come to a /, in which case stop
                for (i = 1; i <= BAB->Text.Length() && BAB->Text[i] != '/'; i++)
                {
                        if (BAB->Text[i] != '/')
                                GrappleBAB->Caption = GrappleBAB->Caption + BAB->Text[i];
                }
                GrappleCalculator();
        }
}
//---------------------------------------------------------------------------

//Pretty self explanatory: Just call appropriate calculator function as long as the box isn't blank
void __fastcall TForm1::GrappleSizeModChange(TObject *Sender)
{
        if (GrappleSizeMod->Caption != "")
                GrappleCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GrappleMiscModChange(TObject *Sender)
{
        if (GrappleMiscMod->Text != "")
                GrappleCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FortBaseChange(TObject *Sender)
{
        if (FortBase->Text != "")
                FortSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FortMagicChange(TObject *Sender)
{
        if (FortMagic->Text != "")
                FortSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FortMiscModChange(TObject *Sender)
{
        if (FortMiscMod->Text != "")
                FortSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FortTempChange(TObject *Sender)
{
        if (FortTemp->Text != "")
                FortSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RefBaseChange(TObject *Sender)
{
        if (RefBase->Text != "")
                RefSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RefMagicChange(TObject *Sender)
{
        if (RefMagic->Text != "")
                RefSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RefMiscModChange(TObject *Sender)
{
        if (RefMiscMod->Text != "")
                RefSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RefTempChange(TObject *Sender)
{
        if (RefTemp->Text != "")
                RefSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WillBaseChange(TObject *Sender)
{
        if (WillBase->Text != "")
                WillSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WillMagicChange(TObject *Sender)
{
        if (WillMagic->Text != "")
                WillSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WillMiscModChange(TObject *Sender)
{
        if (WillMiscMod->Text != "")
                WillSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WillTempChange(TObject *Sender)
{
        if (WillTemp->Text != "")
                WillSaveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InitMiscModChange(TObject *Sender)
{
        if (InitMiscMod->Text != "")
                InitCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ACSizeModChange(TObject *Sender)
{
        if (ACSizeMod->Caption != "")
                ACCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NaturalArmorChange(TObject *Sender)
{
        if (NaturalArmor->Text != "")
                ACCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeflectionModChange(TObject *Sender)
{
        if (DeflectionMod->Text != "")
                ACCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ArmorMiscModChange(TObject *Sender)
{
        if (ArmorMiscMod->Text != "")
                ACCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AppraiseRanksChange(TObject *Sender)
{
        if(AppraiseRanks->Text != "")
                AppraiseCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AppraiseMiscChange(TObject *Sender)
{
        if(AppraiseMisc->Text != "" && AppraiseMisc->Text != "-")
                AppraiseCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BalanceRanksChange(TObject *Sender)
{
        if(BalanceRanks->Text != "")
                BalanceCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BalanceMiscChange(TObject *Sender)
{
        if(BalanceMisc->Text != "" && BalanceMisc->Text != "-")
                BalanceCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BluffRanksChange(TObject *Sender)
{
        if(BluffRanks->Text != "")
                BluffCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BluffMiscChange(TObject *Sender)
{
        if(BluffMisc->Text != "" && BluffMisc->Text != "-")
                BluffCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimbRanksChange(TObject *Sender)
{
        if(ClimbRanks->Text != "")
                ClimbCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimbMiscChange(TObject *Sender)
{
        if(ClimbMisc->Text != "" && ClimbMisc->Text != "-")
                ClimbCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConcentrationRanksChange(TObject *Sender)
{
        if(ConcentrationRanks->Text != "")
                ConcentrationCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConcentrationMiscChange(TObject *Sender)
{
        if(ConcentrationMisc->Text != "" && ConcentrationMisc->Text != "-")
                ConcentrationCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Craft1RanksChange(TObject *Sender)
{
        if(Craft1Ranks->Text != "")
                Craft1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Craft1MiscChange(TObject *Sender)
{
        if(Craft1Misc->Text != "" && Craft1Misc->Text != "-")
                Craft1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Craft2RanksChange(TObject *Sender)
{
        if(Craft2Ranks->Text != "")
                Craft2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Craft2MiscChange(TObject *Sender)
{
        if(Craft2Misc->Text != "" && Craft2Misc->Text != "-")
                Craft2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Craft3RanksChange(TObject *Sender)
{
        if(Craft3Ranks->Text != "")
                Craft3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Craft3MiscChange(TObject *Sender)
{
        if(Craft3Misc->Text != "" && Craft3Misc->Text != "-")
                Craft3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DecipherRanksChange(TObject *Sender)
{
        if(DecipherRanks->Text != "")
                DecipherCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DecipherMiscChange(TObject *Sender)
{
        if(DecipherMisc->Text != "" && DecipherMisc->Text != "-")
                DecipherCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DiplomacyRanksChange(TObject *Sender)
{
        if(DiplomacyRanks->Text != "")
                DiplomacyCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DiplomacyMiscChange(TObject *Sender)
{
        if(DiplomacyMisc->Text != "" && DiplomacyMisc->Text != "-")
                DiplomacyCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DisableRanksChange(TObject *Sender)
{
        if(DisableRanks->Text != "")
                DisableCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DisableMiscChange(TObject *Sender)
{
        if(DisableMisc->Text != "" && DisableMisc->Text != "-")
                DisableCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DisguiseRanksChange(TObject *Sender)
{
        if(DisguiseRanks->Text != "")
                DisguiseCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DisguiseMiscChange(TObject *Sender)
{
        if(DisguiseMisc->Text != "" && DisguiseMisc->Text != "-")
                DisguiseCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EscapeRanksChange(TObject *Sender)
{
        if(EscapeRanks->Text != "")
                EscapeCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EscapeMiscChange(TObject *Sender)
{
        if(EscapeMisc->Text != "" && EscapeMisc->Text != "-")
                EscapeCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ForgeryRanksChange(TObject *Sender)
{
        if(ForgeryRanks->Text != "")
                ForgeryCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ForgeryMiscChange(TObject *Sender)
{
        if(ForgeryMisc->Text != "" && ForgeryMisc->Text != "-")
                ForgeryCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GatherRanksChange(TObject *Sender)
{
        if(GatherRanks->Text != "")
                GatherCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GatherMiscChange(TObject *Sender)
{
        if(GatherMisc->Text != "" && GatherMisc->Text != "-")
                GatherCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HandleRanksChange(TObject *Sender)
{
        if(HandleRanks->Text != "")
                HandleCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HandleMiscChange(TObject *Sender)
{
        if(HandleMisc->Text != "" && HandleMisc->Text != "-")
                HandleCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HealRanksChange(TObject *Sender)
{
        if(HealRanks->Text != "")
                HealCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HealMiscChange(TObject *Sender)
{
        if(HealMisc->Text != "" && HealMisc->Text != "-")
                HealCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HideRanksChange(TObject *Sender)
{
        if(HideRanks->Text != "")
                HideCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HideMiscChange(TObject *Sender)
{
        if(HideMisc->Text != "" && HideMisc->Text != "-")
                HideCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IntimidateRanksChange(TObject *Sender)
{
        if(IntimidateRanks->Text != "")
                IntimidateCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IntimidateMiscChange(TObject *Sender)
{
        if(IntimidateMisc->Text != "" && IntimidateMisc->Text != "-")
                IntimidateCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::JumpRanksChange(TObject *Sender)
{
        if(JumpRanks->Text != "")
                JumpCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::JumpMiscChange(TObject *Sender)
{
        if(JumpMisc->Text != "" && JumpMisc->Text != "-")
                JumpCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge1RanksChange(TObject *Sender)
{
        if(Knowledge1Ranks->Text != "")
                Knowledge1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge1MiscChange(TObject *Sender)
{
        if(Knowledge1Misc->Text != "" && Knowledge1Misc->Text != "-")
                Knowledge1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge2RanksChange(TObject *Sender)
{
        if(Knowledge2Ranks->Text != "")
                Knowledge2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge2MiscChange(TObject *Sender)
{
        if(Knowledge2Misc->Text != "" && Knowledge1Misc->Text != "-")
                Knowledge2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge3RanksChange(TObject *Sender)
{
        if(Knowledge3Ranks->Text != "")
                Knowledge3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge3MiscChange(TObject *Sender)
{
        if(Knowledge3Misc->Text != "" && Knowledge1Misc->Text != "-")
                Knowledge3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge4RanksChange(TObject *Sender)
{
        if(Knowledge4Ranks->Text != "")
                Knowledge4Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge4MiscChange(TObject *Sender)
{
        if(Knowledge4Misc->Text != "" && Knowledge1Misc->Text != "-")
                Knowledge4Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge5RanksChange(TObject *Sender)
{
        if(Knowledge5Ranks->Text != "")
                Knowledge5Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge5MiscChange(TObject *Sender)
{
        if(Knowledge5Misc->Text != "" && Knowledge1Misc->Text != "-")
                Knowledge5Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListenRanksChange(TObject *Sender)
{
        if(ListenRanks->Text != "")
                ListenCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListenMiscChange(TObject *Sender)
{
        if(ListenMisc->Text != "" && ListenMisc->Text != "-")
                ListenCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoveRanksChange(TObject *Sender)
{
        if(MoveRanks->Text != "")
                MoveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoveMiscChange(TObject *Sender)
{
        if(MoveMisc->Text != "" && MoveMisc->Text != "-")
                MoveCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OpenRanksChange(TObject *Sender)
{
        if(OpenRanks->Text != "")
                OpenCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OpenMiscChange(TObject *Sender)
{
        if(OpenMisc->Text != "" && OpenMisc->Text != "-")
                OpenCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform1RanksChange(TObject *Sender)
{
        if(Perform1Ranks->Text != "")
                Perform1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform1MiscChange(TObject *Sender)
{
        if(Perform1Misc->Text != "" && Perform1Misc->Text != "-")
                Perform1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform2RanksChange(TObject *Sender)
{
        if(Perform2Ranks->Text != "")
                Perform2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform2MiscChange(TObject *Sender)
{
        if(Perform2Misc->Text != "" && Perform2Misc->Text != "-")
                Perform2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform3RanksChange(TObject *Sender)
{
        if(Perform3Ranks->Text != "")
                Perform3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform3MiscChange(TObject *Sender)
{
        if(Perform3Misc->Text != "" && Perform3Misc->Text != "-")
                Perform3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Profession1RanksChange(TObject *Sender)
{
        if(Profession1Ranks->Text != "")
                Profession1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Profession1MiscChange(TObject *Sender)
{
        if(Profession1Misc->Text != "" && Profession1Misc->Text != "-")
                Profession1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Profession2RanksChange(TObject *Sender)
{
        if(Profession2Ranks->Text != "")
                Profession2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Profession2MiscChange(TObject *Sender)
{
        if(Profession2Misc->Text != "" && Profession2Misc->Text != "-")
                Profession2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RideRanksChange(TObject *Sender)
{
        if(RideRanks->Text != "")
                RideCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RideMiscChange(TObject *Sender)
{
        if(RideMisc->Text != "" && RideMisc->Text != "-")
                RideCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SearchRanksChange(TObject *Sender)
{
        if(SearchRanks->Text != "")
                SearchCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SearchMiscChange(TObject *Sender)
{
        if(SearchMisc->Text != "" && SearchMisc->Text != "-")
                SearchCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SenseRanksChange(TObject *Sender)
{
        if(SenseRanks->Text != "")
                SenseCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SenseMiscChange(TObject *Sender)
{
        if(SenseMisc->Text != "" && SenseMisc->Text != "-")
                SenseCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SleightRanksChange(TObject *Sender)
{
        if(SleightRanks->Text != "")
                SleightCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SleightMiscChange(TObject *Sender)
{
        if(SleightMisc->Text != "" && SleightMisc->Text != "-")
                SleightCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpellcraftRanksChange(TObject *Sender)
{
        if(SpellcraftRanks->Text != "")
                SpellcraftCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpellcraftMiscChange(TObject *Sender)
{
        if(SpellcraftMisc->Text != "" && SpellcraftMisc->Text != "-")
                SpellcraftCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpotRanksChange(TObject *Sender)
{
        if(SpotRanks->Text != "")
                SpotCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpotMiscChange(TObject *Sender)
{
        if(SpotMisc->Text != "" && SpotMisc->Text != "-")
                SpotCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SurvivalRanksChange(TObject *Sender)
{
        if(SurvivalRanks->Text != "")
                SurvivalCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SurvivalMiscChange(TObject *Sender)
{
        if(SurvivalMisc->Text != "" && SurvivalMisc->Text != "-")
                SurvivalCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SwimRanksChange(TObject *Sender)
{
        if(SwimRanks->Text != "")
                SwimCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SwimMiscChange(TObject *Sender)
{
        if(SwimMisc->Text != "" && SwimMisc->Text != "-")
                SwimCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TumbleRanksChange(TObject *Sender)
{
        if(TumbleRanks->Text != "")
                TumbleCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TumbleMiscChange(TObject *Sender)
{
        if(TumbleMisc->Text != "" && TumbleMisc->Text != "-")
                TumbleCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UseMagicRanksChange(TObject *Sender)
{
        if(UseMagicRanks->Text != "")
                UseMagicCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UseMagicMiscChange(TObject *Sender)
{
        if(UseMagicMisc->Text != "" && UseMagicMisc->Text != "-")
                UseMagicCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UseRopeRanksChange(TObject *Sender)
{
        if(UseRopeRanks->Text != "")
                UseRopeCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UseRopeMiscChange(TObject *Sender)
{
        if(UseRopeMisc->Text != "" && UseRopeMisc->Text != "-")
                UseRopeCalculator();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Misc1RanksChange(TObject *Sender)
{
        if(Misc1Ranks->Text != "")
                Misc1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc1MiscChange(TObject *Sender)
{
        if(Misc1Misc->Text != "" && Misc1Misc->Text != "-")
                Misc1Calculator();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Misc2RanksChange(TObject *Sender)
{
        if(Misc2Ranks->Text != "")
                Misc2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc2MiscChange(TObject *Sender)
{
        if(Misc2Misc->Text != "" && Misc2Misc->Text != "-")
                Misc2Calculator();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Misc3RanksChange(TObject *Sender)
{
        if(Misc3Ranks->Text != "")
                Misc3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc3MiscChange(TObject *Sender)
{
        if(Misc3Misc->Text != "" && Misc3Misc->Text != "-")
                Misc3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc1AbilityChange(TObject *Sender)
{
        int MiscAbilityScore = MiscMod(Misc1Ability);
        Misc1AbilityModL->Caption = MiscAbilityScore;
        Misc1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc2AbilityChange(TObject *Sender)
{
        int MiscAbilityScore = MiscMod(Misc2Ability);
        Misc2AbilityModL->Caption = MiscAbilityScore;
        Misc2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc3AbilityChange(TObject *Sender)
{
        int MiscAbilityScore = MiscMod(Misc3Ability);
        Misc3AbilityModL->Caption = MiscAbilityScore;
        Misc3Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc1ACPCheckClick(TObject *Sender)
{
        Misc1Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc2ACPCheckClick(TObject *Sender)
{
        Misc2Calculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc3ACPCheckClick(TObject *Sender)
{
        Misc3Calculator();
}
//---------------------------------------------------------------------------

//Temp changers do the same thing as the main ability score changers, but recalculates everything for the new temporary score instead of the base score
void __fastcall TForm1::StrTScrChange(TObject *Sender)
{
        AnsiString mod;
        if (StrTScr->Text != "")
        {
                mod = AbilityMod(StrTScr->Text);
                StrTModL->Caption = mod;
                StrStatChanger();
        }
        else
        {
                StrTModL->Caption = "";
                StrStatChanger();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DexTScrChange(TObject *Sender)
{
        AnsiString mod;
        if (DexTScr->Text != "")
        {
                mod = AbilityMod(DexTScr->Text);
                DexTModL->Caption = mod;
                DexStatChanger();
        }
        else
        {
                DexTModL->Caption = "";
                DexStatChanger();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConTScrChange(TObject *Sender)
{
        AnsiString mod;
        if (ConTScr->Text != "")
        {
                mod = AbilityMod(ConTScr->Text);
                ConTModL->Caption = mod;
                ConStatChanger();
        }
        else
        {
                ConTModL->Caption = "";
                ConStatChanger();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IntTScrChange(TObject *Sender)
{
        AnsiString mod;
        if (IntTScr->Text != "")
        {
                mod = AbilityMod(IntTScr->Text);
                IntTModL->Caption = mod;
                IntStatChanger();
        }
        else
        {
                IntTModL->Caption = "";
                IntStatChanger();
        }
        SpellSaveAbilityChange(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WisTScrChange(TObject *Sender)
{
        AnsiString mod;
        if (WisTScr->Text != "")
        {
                mod = AbilityMod(WisTScr->Text);
                WisTModL->Caption = mod;
                WisStatChanger();
        }
        else
        {
                WisTModL->Caption = "";
                WisStatChanger();
        }
        SpellSaveAbilityChange(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChaTScrChange(TObject *Sender)
{
        AnsiString mod;
        if (ChaTScr->Text != "")
        {
                mod = AbilityMod(ChaTScr->Text);
                ChaTModL->Caption = mod;
                ChaStatChanger();
        }
        else
        {
                ChaTModL->Caption = "";
                ChaStatChanger();
        }
        SpellSaveAbilityChange(this);
}
//---------------------------------------------------------------------------

//Simple: If the Spell Failure changes, recalculate the spell failure box
void __fastcall TForm1::ArmorSpellFailureChange(TObject *Sender)
{
        ArcaneSpellFailureCalculator();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShieldSpellFailureChange(TObject *Sender)
{
        ArcaneSpellFailureCalculator();
}
//---------------------------------------------------------------------------

//I honestly don't know exactly how this code works - I've tried understanding it, but it just makes my head hurt :(
//It was an example in the Borland C++Builder 5 Developer's Guide originally
//When I was having issues with printing one of the guys at the Borland Newsgroups did a short rewrite with some error checking and made it a bit neater
//Basically it just stretches the image to be printed to fit the entire page
void __fastcall StretchBltBitmap(TCanvas *pCanvas, int iX, int iY, int iWidth, int iHeight, Graphics::TBitmap *pBitmap)
{
    char* Buffer = NULL;
    unsigned int HeaderSize = 0, ImageSize = 0;
    GetDIBSizes( pBitmap->Handle, HeaderSize, ImageSize );
    try
      {
          Buffer = new char[ HeaderSize + ImageSize ];
      }
    catch( Exception& E )
      {
          MessageDlg( "Error allocating memory for DIB : " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0 );
          return;
      }
    BITMAPINFO* pBmi = (BITMAPINFO*) Buffer;
    unsigned char* pImage = (unsigned char*) Buffer + HeaderSize;
    if( GetDIB( pBitmap->Handle, pBitmap->Palette, pBmi, pImage ) )
      {
          StretchDIBits( pCanvas->Handle, iX, iY, iWidth, iHeight, 0, 0, pBitmap->Width, pBitmap->Height, pImage, pBmi, DIB_RGB_COLORS, SRCCOPY );
      }
    else
      {
          MessageDlg( "Error copying the DIB.", mtError, TMsgDlgButtons() << mbOK, 0 );
      }
    delete [] Buffer;
}

//Printing time!!
//This stuff took FOREVER to get working right (my first graphical printing job)
//Thanks to this, I have a new found hatred for the Windows GDI
//Most of this code I figured out from examples in the Borland C++Builder 5 Developer's Guide, with some help from the Borland Newsgroups on some syntax issues
void __fastcall TForm1::Print1Click(TObject *Sender)
{
    //Test if page 3 is empty, if so there is no page 3 to print
    if (MiscNotes->Lines->Text == "")
        PrintDialog1->MaxPage = 2;
    else
        PrintDialog1->MaxPage = 3;

    //First see if they really want to print, let them set options, etc etc etc
    if( PrintDialog1->Execute() )
    {
        int Start, Stop;
        switch (PrintDialog1->PrintRange)
        {
        case prSelection:
                Start = PageControl1->ActivePage->PageIndex;
                //There are two hidden tab pages that I used for testing during development, I left them in just in case I needed them.  They were added in before I came up with the idea for Page 3, so Page 3 is really Page 5
                if (Start == 4)
                        Start = 2;
                Stop = Start;
                break;
        case prPageNums:
                Start = PrintDialog1->FromPage - 1;
                Stop =  PrintDialog1->ToPage - 1;
                break;
        default:  // prAllPages
                Start = PrintDialog1->MinPage - 1;
                Stop = PrintDialog1->MaxPage - 1;
                break;
        }
          //Setup the printer and the bitmap to be printed
          TPrinter * ThePrinter = Printer();
          ThePrinter->Orientation = poPortrait;
          ThePrinter->Title = Form1->Caption;
          Graphics::TBitmap *pBitmap = new Graphics::TBitmap();
          pBitmap->Width = PageControl1->Width;
          pBitmap->Height = PageControl1->Height;
          pBitmap->PixelFormat = pf24bit;
        int DidScale = 0;
        if (Form1->Width != 795)
        {
                ScaleBy(800,1024);
                Constraints->MaxWidth = 795;
                Constraints->MinWidth = 795;
                Page1BGLarge->Visible = false;
                Page1BG->Visible = true;
                Page2BGLarge->Visible = false;
                Page2BG->Visible = true;
                DidScale = 1;
        }
          //Start printing!
          ThePrinter->BeginDoc();

          //Figure out how to properly translate onscreen pixels to printer pixels
          double fPrinterVert = (double)GetDeviceCaps(ThePrinter->Canvas->Handle, LOGPIXELSY);
          double fPrinterHorz = (double)GetDeviceCaps(ThePrinter->Canvas->Handle, LOGPIXELSX);
          double fScreenVert = (double)GetDeviceCaps(this->Canvas->Handle, LOGPIXELSY);
          double fScreenHorz = (double)GetDeviceCaps(this->Canvas->Handle, LOGPIXELSX);
          int iHeight = (int)((double)pBitmap->Height * (fPrinterVert / fScreenVert));
          int iWidth = (int)((double)pBitmap->Width * (fPrinterHorz / fScreenHorz));
          pBitmap->Canvas->Font = CharName->Font;

          //Quick and easy way to access the proper edit boxes, memos, and combo boxes to be printed
          TEdit *TheEdit;
          TMemo *TheMemo;
          TRect TheRect;
          TComboBox *TheCombo;

          //Page 1
          if (Start == 0)
          {
                //Turns out the bug I had with printing was because I didn't lock the canvas first -_-'
                //Lock it, paint the PageControl to the bitmap, unlock it
                pBitmap->Canvas->Lock();
                PageControl1->Pages[0]->PaintTo(pBitmap->Canvas->Handle, 0, 0);
                pBitmap->Canvas->Unlock();

                //Set the appropriate Edit/Memo/Combo box to the appropriate pointer, print the box to the canvas
                TheMemo = CondSave;
                TheRect.Left = TheMemo->Left+2;
                TheRect.Top = TheMemo->Top+2;
                TheRect.Right = TheMemo->Left+TheMemo->Width-2;
                TheRect.Bottom = TheMemo->Top+TheMemo->Height-1;
                pBitmap->Canvas->Font = TheMemo->Font;
                DrawText(pBitmap->Canvas->Handle, TheMemo->Lines->Text.c_str(), TheMemo->Lines->Text.Length(), &TheRect, DT_WORDBREAK);
                TheEdit = HP;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = NaturalArmor;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DeflectionMod;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorMiscMod;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = InitMiscMod;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = CharName;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Player;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = StrScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = RefTemp;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = WillTemp;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = FortTemp;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Wounds;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Nonlethal;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Speed;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DamageReduction;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = MaxRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ClassLevel;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Race;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Alignment;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Deity;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheCombo = Size;
                pBitmap->Canvas->TextRect(Rect(TheCombo->Left+1, TheCombo->Top+1, TheCombo->Left+TheCombo->Width-2, TheCombo->Top+TheCombo->Height-1), TheCombo->Left+2, TheCombo->Top+2, TheCombo->Text);
                TheEdit = Age;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Gender;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Height;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weight;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Eyes;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Hair;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Skin;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = StrTScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DexTScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DexScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ConScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ConTScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = IntTScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = IntScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = WisScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = WisTScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ChaTScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ChaScr;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = FortBase;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = FortMagic;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = FortMiscMod;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = RefMiscMod;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = RefMagic;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = RefBase;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = WillBase;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = WillMagic;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = WillMiscMod;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BAB;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellResistance;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = GrappleMiscMod;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Name;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Bonus;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Damage;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Crit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Notes;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Ammo;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Type;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon1Range;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Range;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Type;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Notes;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Ammo;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Name;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Bonus;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Damage;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Crit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Crit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Damage;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Bonus;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon2Name;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Range;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Type;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Notes;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon3Ammo;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Name;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Bonus;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Damage;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Crit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Notes;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Type;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Range;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon4Ammo;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Name;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Bonus;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Damage;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Crit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Notes;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Type;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Range;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Weapon5Ammo;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = AppraiseRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BalanceRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BluffRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ClimbRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ConcentrationRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft1Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft2Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft3Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DecipherRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DiplomacyRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DisableRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DisguiseRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = EscapeRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ForgeryRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = GatherRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = HandleRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = HealRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = HideRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = IntimidateRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = JumpRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge1Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge2Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge3Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge4Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge5Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ListenRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = MoveRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = OpenRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform1Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform2Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform3Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Profession1Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Profession2Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = RideRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SearchRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SenseRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SleightRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellcraftRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpotRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SurvivalRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SwimRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = TumbleRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = UseMagicRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = UseRopeRanks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc1Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc2Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc3Ranks;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = AppraiseMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BalanceMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BluffMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ClimbMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ConcentrationMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft1Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft2Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft3Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DecipherMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DiplomacyMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DisableMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DisguiseMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = EscapeMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ForgeryMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = GatherMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = HandleMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = HealMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = HideMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = IntimidateMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = JumpMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge1Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge2Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge3Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge4Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge5Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ListenMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = MoveMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = OpenMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform1Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform2Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform3Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Profession1Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Profession2Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = RideMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SearchMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SenseMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SleightMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellcraftMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpotMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SurvivalMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SwimMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = TumbleMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = UseMagicMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = UseRopeMisc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc1Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc2Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc3Misc;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc1Ability;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc2Ability;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc3Ability;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft1Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft2Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Craft3Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge1Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge2Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge3Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge4Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Knowledge5Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform1Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform2Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Perform3Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Profession1Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Profession2Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc1Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc2Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Misc3Edit;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);

                //Stretch the bitmap to the printer's canvas
                StretchBltBitmap(ThePrinter->Canvas, 0, 0, iWidth, iHeight, pBitmap);

                pBitmap->Canvas->Font = CharName->Font;
          }

          //If the user wants to print more than just the first page, start a new page
          if (Stop > 0 && Start < 1)
                ThePrinter->NewPage();

          //If the user wanted to print page 2, print it
          if (1 >= Start && 1 <= Stop)
          {
                //Same as before: lock, paint to, unlock, set pointer, copy data, stretch it to the printer canvas
                pBitmap->Canvas->Lock();
                PageControl1->Pages[1]->PaintTo(pBitmap->Canvas->Handle, 0, 0);
                pBitmap->Canvas->Unlock();

                //Set the pointer, draw the data on the canvas, just as before
                TheEdit = ArmorCheck;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorType;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorAC;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorDex;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorName;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorSpeed;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorWeight;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorSpecial;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ShieldName;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ArmorSpellFailure;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ShieldAC;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ShieldWeight;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ShieldCheck;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ShieldSpellFailure;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = ShieldSpecial;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Experience;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Campaign;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective1Name;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective1AC;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective1Weight;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective1Special;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective2Special;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective2Weight;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective2AC;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = Protective2Name;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = DomainSchool;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown1;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown0;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown2;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown3;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown7;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown6;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown5;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown4;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown8;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsKnown9;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay9;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay8;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay7;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay6;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay5;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay4;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay3;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay2;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay1;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = SpellsDay0;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells1;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells2;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells3;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells4;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells5;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells6;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells7;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells8;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheEdit = BonusSpells9;
                pBitmap->Canvas->TextRect(Rect(TheEdit->Left+1, TheEdit->Top+1, TheEdit->Left+TheEdit->Width-2, TheEdit->Top+TheEdit->Height-1), TheEdit->Left+2, TheEdit->Top+2, TheEdit->Text);
                TheMemo = SpellCondMod;
                pBitmap->Canvas->Font = TheMemo->Font;
                pBitmap->Canvas->TextRect(Rect(TheMemo->Left+1, TheMemo->Top+1, TheMemo->Left+TheMemo->Width-2, TheMemo->Top+TheMemo->Height-1), TheMemo->Left+2, TheMemo->Top+2, TheMemo->Lines->GetText());
                TheMemo = Spells;
                TheRect.Left = TheMemo->Left+2;
                TheRect.Top = TheMemo->Top+2;
                TheRect.Right = TheMemo->Left+TheMemo->Width-2;
                TheRect.Bottom = TheMemo->Top+TheMemo->Height-1;
                pBitmap->Canvas->Font = TheMemo->Font;
                DrawText(pBitmap->Canvas->Handle, TheMemo->Lines->Text.c_str(), TheMemo->Lines->Text.Length(), &TheRect, DT_WORDBREAK);
                TheMemo = Feats;
                TheRect.Left = TheMemo->Left+2;
                TheRect.Top = TheMemo->Top+2;
                TheRect.Right = TheMemo->Left+TheMemo->Width-2;
                TheRect.Bottom = TheMemo->Top+TheMemo->Height-1;
                pBitmap->Canvas->Font = TheMemo->Font;
                DrawText(pBitmap->Canvas->Handle, TheMemo->Lines->Text.c_str(), TheMemo->Lines->Text.Length(), &TheRect, DT_WORDBREAK);
                TheMemo = SpecialAbilities;
                TheRect.Left = TheMemo->Left+2;
                TheRect.Top = TheMemo->Top+2;
                TheRect.Right = TheMemo->Left+TheMemo->Width-2;
                TheRect.Bottom = TheMemo->Top+TheMemo->Height-1;
                pBitmap->Canvas->Font = TheMemo->Font;
                DrawText(pBitmap->Canvas->Handle, TheMemo->Lines->Text.c_str(), TheMemo->Lines->Text.Length(), &TheRect, DT_WORDBREAK);
                TheMemo = Languages;
                TheRect.Left = TheMemo->Left+2;
                TheRect.Top = TheMemo->Top+2;
                TheRect.Right = TheMemo->Left+TheMemo->Width-2;
                TheRect.Bottom = TheMemo->Top+TheMemo->Height-1;
                pBitmap->Canvas->Font = TheMemo->Font;
                DrawText(pBitmap->Canvas->Handle, TheMemo->Lines->Text.c_str(), TheMemo->Lines->Text.Length(), &TheRect, DT_WORDBREAK);
                TheMemo = Money;
                TheRect.Left = TheMemo->Left+2;
                TheRect.Top = TheMemo->Top+2;
                TheRect.Right = TheMemo->Left+TheMemo->Width-2;
                TheRect.Bottom = TheMemo->Top+TheMemo->Height-1;
                pBitmap->Canvas->Font = TheMemo->Font;
                DrawText(pBitmap->Canvas->Handle, TheMemo->Lines->Text.c_str(), TheMemo->Lines->Text.Length(), &TheRect, DT_WORDBREAK);
                TheMemo = OtherPossessions;
                TheRect.Left = TheMemo->Left+2;
                TheRect.Top = TheMemo->Top+2;
                TheRect.Right = TheMemo->Left+TheMemo->Width-2;
                TheRect.Bottom = TheMemo->Top+TheMemo->Height-1;
                pBitmap->Canvas->Font = TheMemo->Font;
                DrawText(pBitmap->Canvas->Handle, TheMemo->Lines->Text.c_str(), TheMemo->Lines->Text.Length(), &TheRect, DT_WORDBREAK);

                StretchBltBitmap(ThePrinter->Canvas, 0, 0, iWidth, iHeight, pBitmap);
           }

           //If the printer wasn't supposed to stop after page 2, start a page for page 3
           if (Stop > 1 && Start < 2)
                ThePrinter->NewPage();

           //If the user told it to print page 3, print page 3
           if (2 >= Start && 2 <= Stop)
           {
                //No point in using PaintTo here, it's just a blank page

                //Set the pointer, draw the data
                TheMemo = MiscNotes;
                //Setup line printer
                ThePrinter->Canvas->Font = TheMemo->Font;
                int LineNumber = 1, X = 0, Y = 0, LineHeight = ThePrinter->Canvas->TextHeight(" ");
                AnsiString TheLine;
                //Print lines - if the next line would overflow the page, start a new page and continue
                for (int Line = 0; Line < TheMemo->Lines->Count; Line++)
                {
                        TheLine = TheMemo->Lines->Strings[Line];
                        ThePrinter->Canvas->TextOut(X, Y+LineHeight*LineNumber-1,TheLine);
                        if (ThePrinter->Canvas->PenPos.y+2*LineHeight >= ThePrinter->PageHeight)
                        {
                                ThePrinter->NewPage();
                                LineNumber = 1;
                        }
                        else
                                LineNumber++;
                }
           }
        if (DidScale)
        {
                ScaleBy(1024,800);
                Constraints->MaxWidth = 1019;
                Constraints->MinWidth = 1019;
                Page1BGLarge->Visible = true;
                Page1BG->Visible = false;
                Page2BGLarge->Visible = true;
                Page2BG->Visible = false;
        }
                //Printing's done, clean up time
                ThePrinter->EndDoc();
                delete pBitmap;
        }
}
//---------------------------------------------------------------------------

//Basic menu bar functions, pretty self explanatory
void __fastcall TForm1::Page11Click(TObject *Sender)
{
        PageControl1->ActivePage = TabSheet1;
        Form1->VertScrollBar->Position = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Page21Click(TObject *Sender)
{
        PageControl1->ActivePage = TabSheet2;
        Form1->VertScrollBar->Position = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Page31Click(TObject *Sender)
{
        PageControl1->ActivePage = TabSheet5;
        Form1->VertScrollBar->Position = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DiceRoller1Click(TObject *Sender)
{
        PageControl1->ActivePage = TabSheet7;
        Form1->VertScrollBar->Position = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Saveas1Click(TObject *Sender)
{
        if (TestSave())
        {
                if(SaveDialog1->Execute())
                        SaveSheet(SaveDialog1->FileName);
        }
}
//---------------------------------------------------------------------------

//Set the spell save mods depending on what ability was chosen in the drop down
void __fastcall TForm1::SpellSaveAbilityChange(TObject *Sender)
{
        if(SpellSaveAbility->Text == "Int")
        {
                //Use temp, or use base?
                if (IntTScr->Text != "")
                        SpellSaveMod->Caption = IntTModL->Caption;
                else
                        SpellSaveMod->Caption = IntModL->Caption;
        }
        else if(SpellSaveAbility->Text == "Wis")
        {
                //Use temp, or use base?
                if (WisTScr->Text != "")
                        SpellSaveMod->Caption = WisTModL->Caption;
                else
                        SpellSaveMod->Caption = WisModL->Caption;
        }
        else if(SpellSaveAbility->Text == "Cha")
        {
                //Use temp, or use base?
                if (ChaTScr->Text != "")
                        SpellSaveMod->Caption = ChaTModL->Caption;
                else
                        SpellSaveMod->Caption = ChaModL->Caption;
        }
        else
        {
                //If it's N/A, use ""
                SpellSaveMod->Caption = "";
        }

        //Simple math
        if (SpellSaveMod->Caption != "")
        {
                SpellSave0->Caption = SpellSaveMod->Caption.ToInt() + 10;
                SpellSave1->Caption = SpellSaveMod->Caption.ToInt() + 11;
                SpellSave2->Caption = SpellSaveMod->Caption.ToInt() + 12;
                SpellSave3->Caption = SpellSaveMod->Caption.ToInt() + 13;
                SpellSave4->Caption = SpellSaveMod->Caption.ToInt() + 14;
                SpellSave5->Caption = SpellSaveMod->Caption.ToInt() + 15;
                SpellSave6->Caption = SpellSaveMod->Caption.ToInt() + 16;
                SpellSave7->Caption = SpellSaveMod->Caption.ToInt() + 17;
                SpellSave8->Caption = SpellSaveMod->Caption.ToInt() + 18;
                SpellSave9->Caption = SpellSaveMod->Caption.ToInt() + 19;
        }
        else
        {
                SpellSave0->Caption = "";
                SpellSave1->Caption = "";
                SpellSave2->Caption = "";
                SpellSave3->Caption = "";
                SpellSave4->Caption = "";
                SpellSave5->Caption = "";
                SpellSave6->Caption = "";
                SpellSave7->Caption = "";
                SpellSave8->Caption = "";
                SpellSave9->Caption = "";
        }
}
//---------------------------------------------------------------------------

//Transfers the GetText from the load function to what the program needs to use
void SetSpellSaveAbility(char SpellSaveAbility[201])
{
        if (!strcmp(SpellSaveAbility,"N/A"))
                Form1->SpellSaveAbility->ItemIndex = 0;
        else if (!strcmp(SpellSaveAbility,"Int"))
                Form1->SpellSaveAbility->ItemIndex = 1;
        else if (!strcmp(SpellSaveAbility,"Wis"))
                Form1->SpellSaveAbility->ItemIndex = 2;
        else if (!strcmp(SpellSaveAbility,"Cha"))
                Form1->SpellSaveAbility->ItemIndex = 3;
}

//Same as SpellSave above, but for size
void SetSize(char Size[201])
{
        if (!strcmp(Size,"Fine"))
                Form1->Size->ItemIndex = 0;
        else if (!strcmp(Size, "Diminutive"))
                Form1->Size->ItemIndex = 1;
        else if (!strcmp(Size, "Tiny"))
                Form1->Size->ItemIndex = 2;
        else if (!strcmp(Size, "Small"))
                Form1->Size->ItemIndex = 3;
        else if (!strcmp(Size, "Medium"))
                Form1->Size->ItemIndex = 4;
        else if (!strcmp(Size, "Large"))
                Form1->Size->ItemIndex = 5;
        else if (!strcmp(Size, "Huge"))
                Form1->Size->ItemIndex = 6;
        else if (!strcmp(Size, "Gargantuan"))
                Form1->Size->ItemIndex = 7;
        else if (!strcmp(Size, "Colossal"))
                Form1->Size->ItemIndex = 8;
}

//Import my first release's sheet (save files change slightly between versions)
//At this point I honestly don't remember the real specific differences, I procrastinated writing comments until I finished writing v2 -_-'
void __fastcall TForm1::Importv1XSheet1Click(TObject *Sender)
{
        AnsiString filename;
        char GetText[501];
        ifstream fin;
                filename = OpenDialog1->FileName;
                fin.open(filename.c_str());
                fin.get(GetText,500).get();
                HP->Text = GetText;
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                NaturalArmor->Text = GetText;
                fin.get(GetText,500).get();
                DeflectionMod->Text = GetText;
                fin.get(GetText,500).get();
                ArmorMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                InitMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                StrScr->Text = GetText;
                fin.get(GetText,500).get();
                RefTemp->Text = GetText;
                fin.get(GetText,500).get();
                WillTemp->Text = GetText;
                fin.get(GetText,500).get();
                FortTemp->Text = GetText;
                fin.get(GetText,500).get();
                Wounds->Text = GetText;
                fin.get(GetText,500).get();
                Nonlethal->Text = GetText;
                fin.get(GetText,500).get();
                Speed->Text = GetText;
                fin.get(GetText,500).get();
                DamageReduction->Text = GetText;
                fin.get(GetText,500).get();
                MaxRanks->Text = GetText;
                fin.get(GetText,500).get();
                CharName->Text = GetText;
                fin.get(GetText,500).get();
                Player->Text = GetText;
                fin.get(GetText,500).get();
                ClassLevel->Text = GetText;
                fin.get(GetText,500).get();
                Race->Text = GetText;
                fin.get(GetText,500).get();
                Alignment->Text = GetText;
                fin.get(GetText,500).get();
                Deity->Text = GetText;
                fin.get(GetText,500).get();
                SetSize(GetText);
                SizeChange(this);
                fin.get(GetText,500).get();
                Age->Text = GetText;
                fin.get(GetText,500).get();
                Gender->Text = GetText;
                fin.get(GetText,500).get();
                Height->Text = GetText;
                fin.get(GetText,500).get();
                Weight->Text = GetText;
                fin.get(GetText,500).get();
                Eyes->Text = GetText;
                fin.get(GetText,500).get();
                Hair->Text = GetText;
                fin.get(GetText,500).get();
                Skin->Text = GetText;
                fin.get(GetText,500).get();
                StrTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexScr->Text = GetText;
                fin.get(GetText,500).get();
                ConScr->Text = GetText;
                fin.get(GetText,500).get();
                ConTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntScr->Text = GetText;
                fin.get(GetText,500).get();
                WisScr->Text = GetText;
                fin.get(GetText,500).get();
                WisTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaScr->Text = GetText;
                fin.get(GetText,500).get();
                FortBase->Text = GetText;
                fin.get(GetText,500).get();
                FortMagic->Text = GetText;
                fin.get(GetText,500).get();
                FortMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMagic->Text = GetText;
                fin.get(GetText,500).get();
                RefBase->Text = GetText;
                fin.get(GetText,500).get();
                WillBase->Text = GetText;
                fin.get(GetText,500).get();
                WillMagic->Text = GetText;
                fin.get(GetText,500).get();
                WillMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                BAB->Text = GetText;
                fin.get(GetText,500).get();
                SpellResistance->Text = GetText;
                fin.get(GetText,500).get();
                GrappleMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                Weapon1Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Range->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                BalanceRanks->Text = GetText;
                fin.get(GetText,500).get();
                BluffRanks->Text = GetText;
                fin.get(GetText,500).get();
                ClimbRanks->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationRanks->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                DecipherRanks->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisableRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                EscapeRanks->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryRanks->Text = GetText;
                fin.get(GetText,500).get();
                GatherRanks->Text = GetText;
                fin.get(GetText,500).get();
                HandleRanks->Text = GetText;
                fin.get(GetText,500).get();
                HealRanks->Text = GetText;
                fin.get(GetText,500).get();
                HideRanks->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateRanks->Text = GetText;
                fin.get(GetText,500).get();
                JumpRanks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Ranks->Text = GetText;
                fin.get(GetText,500).get();
                ListenRanks->Text = GetText;
                fin.get(GetText,500).get();
                MoveRanks->Text = GetText;
                fin.get(GetText,500).get();
                OpenRanks->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                RideRanks->Text = GetText;
                fin.get(GetText,500).get();
                SearchRanks->Text = GetText;
                fin.get(GetText,500).get();
                SenseRanks->Text = GetText;
                fin.get(GetText,500).get();
                SleightRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpotRanks->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalRanks->Text = GetText;
                fin.get(GetText,500).get();
                SwimRanks->Text = GetText;
                fin.get(GetText,500).get();
                TumbleRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeRanks->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                BalanceMisc->Text = GetText;
                fin.get(GetText,500).get();
                BluffMisc->Text = GetText;
                fin.get(GetText,500).get();
                ClimbMisc->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationMisc->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Misc->Text = GetText;
                fin.get(GetText,500).get();
                DecipherMisc->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisableMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                EscapeMisc->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryMisc->Text = GetText;
                fin.get(GetText,500).get();
                GatherMisc->Text = GetText;
                fin.get(GetText,500).get();
                HandleMisc->Text = GetText;
                fin.get(GetText,500).get();
                HealMisc->Text = GetText;
                fin.get(GetText,500).get();
                HideMisc->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateMisc->Text = GetText;
                fin.get(GetText,500).get();
                JumpMisc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Misc->Text = GetText;
                fin.get(GetText,500).get();
                ListenMisc->Text = GetText;
                fin.get(GetText,500).get();
                MoveMisc->Text = GetText;
                fin.get(GetText,500).get();
                OpenMisc->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Misc->Text = GetText;
                fin.get(GetText,500).get();
                RideMisc->Text = GetText;
                fin.get(GetText,500).get();
                SearchMisc->Text = GetText;
                fin.get(GetText,500).get();
                SenseMisc->Text = GetText;
                fin.get(GetText,500).get();
                SleightMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpotMisc->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalMisc->Text = GetText;
                fin.get(GetText,500).get();
                SwimMisc->Text = GetText;
                fin.get(GetText,500).get();
                TumbleMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeMisc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ability->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Edit->Text = GetText;
                fin.get(GetText,500).get();
                ArmorCheck->Text = GetText;
                fin.get(GetText,500).get();
                ArmorType->Text = GetText;
                fin.get(GetText,500).get();
                ArmorAC->Text = GetText;
                fin.get(GetText,500).get();
                ArmorDex->Text = GetText;
                fin.get(GetText,500).get();
                ArmorName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpeed->Text = GetText;
                fin.get(GetText,500).get();
                ArmorWeight->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpecial->Text = GetText;
                fin.get(GetText,500).get();
                ShieldName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldAC->Text = GetText;
                fin.get(GetText,500).get();
                ShieldWeight->Text = GetText;
                fin.get(GetText,500).get();
                ShieldCheck->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpecial->Text = GetText;
                fin.get(GetText,500).get();
                Experience->Text = GetText;
                fin.get(GetText,500).get();
                Campaign->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective1AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Weight->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Special->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective2AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Weight->Text = GetText;
                fin.get(GetText,500).get();
                DomainSchool->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown0->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay0->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells1->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells2->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells3->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells4->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells5->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells6->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells7->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells8->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells9->Text = GetText;
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                Misc3AbilityModL->Caption = GetText;
                fin.get(GetText,500).get();
                Misc2AbilityModL->Caption = GetText;
                fin.get(GetText,500).get();
                Misc1AbilityModL->Caption = GetText;

                bool GetCheck;
                fin >> GetCheck;
                AppraiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                BalanceCheck->Checked = GetCheck;
                fin >> GetCheck;
                BluffCheck->Checked = GetCheck;
                fin >> GetCheck;
                ClimbCheck->Checked = GetCheck;
                fin >> GetCheck;
                ConcentrationCheck->Checked = GetCheck;
                fin >> GetCheck;
                GatherCheck->Checked = GetCheck;
                fin >> GetCheck;
                ForgeryCheck->Checked = GetCheck;
                fin >> GetCheck;
                EscapeCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisguiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisableCheck->Checked = GetCheck;
                fin >> GetCheck;
                ListenCheck->Checked = GetCheck;
                fin >> GetCheck;
                MoveCheck->Checked = GetCheck;
                fin >> GetCheck;
                OpenCheck->Checked = GetCheck;
                fin >> GetCheck;
                Perform1Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform2Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform3Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession1Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession2Check->Checked = GetCheck;
                fin >> GetCheck;
                RideCheck->Checked = GetCheck;
                fin >> GetCheck;
                SearchCheck->Checked = GetCheck;
                fin >> GetCheck;
                SenseCheck->Checked = GetCheck;
                fin >> GetCheck;
                SleightCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpellcraftCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpotCheck->Checked = GetCheck;
                fin >> GetCheck;
                SurvivalCheck->Checked = GetCheck;
                fin >> GetCheck;
                SwimCheck->Checked = GetCheck;
                fin >> GetCheck;
                TumbleCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseMagicCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseRopeCheck->Checked = GetCheck;
                fin >> GetCheck;
                Misc1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft2Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft3Check->Checked = GetCheck;
                fin >> GetCheck;
                DecipherCheck->Checked = GetCheck;
                fin >> GetCheck;
                DiplomacyCheck->Checked = GetCheck;
                fin >> GetCheck;
                HandleCheck->Checked = GetCheck;
                fin >> GetCheck;
                HealCheck->Checked = GetCheck;
                fin >> GetCheck;
                HideCheck->Checked = GetCheck;
                fin >> GetCheck;
                IntimidateCheck->Checked = GetCheck;
                fin >> GetCheck;
                JumpCheck->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge1Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge2Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge3Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge4Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge5Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc2Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc3Check->Checked = GetCheck;
                short i, count;
                fin >> count;
                fin.get();
                Spells->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Spells->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Feats->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Feats->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpecialAbilities->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpecialAbilities->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Languages->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Languages->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Money->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Money->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                OtherPossessions->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        OtherPossessions->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpellCondMod->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpellCondMod->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                CondSave->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        CondSave->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                MiscNotes->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        MiscNotes->Lines->Add(GetText);
                }
                //Spell save DC is one of the things I changed in the latest version - the user needs to pick an ability in the drop down box if they have an old save file
                ShowMessage("v1.x Sheet Imported\nBe sure to check the Spell Save DC Mod");
                fin.close();
}
//---------------------------------------------------------------------------

//The idiot box!
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        int SaveOnExit = Application->MessageBox("Do you want to save the character Sheet before exiting?", "Confirm Close", MB_YESNOCANCEL);
        switch (SaveOnExit)
        {
        case 2: Action = caNone;
                break;
        case 6: Action = caFree;
                Save1Click(this);
                break;
        case 7: Action = caFree;
                break;
        }
}
//---------------------------------------------------------------------------

//Set some default values, open the passed in .dnd file if need be, etc
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        if (Screen->Width >= 1024)
        {
                ScaleBy(1024,800);
                Constraints->MaxWidth = 1019;
                Constraints->MinWidth = 1019;
                Page1BGLarge->Visible = true;
                Page1BG->Visible = false;
                Page2BGLarge->Visible = true;
                Page2BG->Visible = false;
        }
        randomize();
        PageControl1->ActivePage = TabSheet1;
        SpellSaveAbility->ItemIndex = 0;
        Size->ItemIndex = 4;
        short ParameterCount = ParamCount();
        SaveDialog1->FileName = "";
        if (ParameterCount > 0)
        {
                OpenDialog1->FileName = ParamStr(1);
                RevertAsk = false;
                ReverttoLastSave1Click(this);
        }
        else
        {
                Form1->OpenDialog1->FileName = "config.dnd";
                ifstream fin(Form1->OpenDialog1->FileName.c_str());
                if (fin)
                {
                        fin.close();
                        Form1->ReverttoLastSave1Click(this);
                        Save1Click(this);
                        Form1->OpenDialog1->FileName = "";
                        Form1->SaveDialog1->FileName = "";
                }
                else
                {
                        Form1->OpenDialog1->FileName = "";
                        Form1->SaveDialog1->FileName = "config.dnd";
                        ShowMessage("File config.dnd not found. Creating default configuration.");
                        Save1Click(this);
                        ShowMessage("Default configuration saved to config.dnd");
                        Form1->SaveDialog1->FileName = "";
                }
        }
        //I'm using ReverttoLastSave as the main load function, unless specified otherwise it asks if you want to reload
        RevertAsk = true;
}
//--------------------------------------------------------------------------

void ApplyLabelFontChanges();
void ApplyTextBoxFontChanges();
void ApplySmallMemoFontChanges();
void ApplyLargeMemoFontChanges();
void ApplyMiscNotesFontChanges();
void ApplyRollLogFontChanges();

//See the comment above "RevertAsk"  like 5 lines above here.
void __fastcall TForm1::ReverttoLastSave1Click(TObject *Sender)
{
        AnsiString filename, Text;
        char GetText[501];
        ifstream fin;
        short SaveYesNo = 0;

        //Ask if user wants to reload the current save file
        if (RevertAsk == true)
                SaveYesNo = Application->MessageBox("Are you sure you want to revert to the last save?", "Confirm Revert", MB_YESNO);

        //As long as they didn't say no, reload it
        if (SaveYesNo != 7)
        {
                filename = OpenDialog1->FileName;
                fin.open(filename.c_str());
                fin.get(GetText,500).get();
                //If the save file is the most current, load it normally
                if (!strcmp(GetText,"Dungeons and Dragons v3.5 Digital Character Sheet - Version 3.1 - © 2006 Matt Schraeder and Frozen Insanity - http://www.kontek.net/frozen") || !strcmp(GetText,"Dungeons and Dragons v3.5 Digital Character Sheet - Version 3.1 - © 2007 Matt Schraeder and Frozen Insanity - http://www.kontek.net/frozen"))
                {
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                if (filename == "config.dnd")
                        LabelFont->Font = FontDialog1->Font;
                ApplyLabelFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                if (filename == "config.dnd")
                        TextBoxFont->Font = FontDialog1->Font;
                ApplyTextBoxFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                if (filename == "config.dnd")
                        SmallMemoFont->Font = FontDialog1->Font;
                ApplySmallMemoFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                if (filename == "config.dnd")
                        LargeMemoFont->Font = FontDialog1->Font;
                ApplyLargeMemoFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                if (filename == "config.dnd")
                        MiscNoteFont->Font = FontDialog1->Font;
                ApplyMiscNotesFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                if (filename == "config.dnd")
                        RollLogFont->Font = FontDialog1->Font;
                ApplyRollLogFontChanges();
                fin.get(GetText,500).get();
                HP->Text = GetText;
                fin.get(GetText,500).get();
                NaturalArmor->Text = GetText;
                fin.get(GetText,500).get();
                DeflectionMod->Text = GetText;
                fin.get(GetText,500).get();
                ArmorMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                InitMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                StrScr->Text = GetText;
                fin.get(GetText,500).get();
                RefTemp->Text = GetText;
                fin.get(GetText,500).get();
                WillTemp->Text = GetText;
                fin.get(GetText,500).get();
                FortTemp->Text = GetText;
                fin.get(GetText,500).get();
                Wounds->Text = GetText;
                fin.get(GetText,500).get();
                Nonlethal->Text = GetText;
                fin.get(GetText,500).get();
                Speed->Text = GetText;
                fin.get(GetText,500).get();
                DamageReduction->Text = GetText;
                fin.get(GetText,500).get();
                MaxRanks->Text = GetText;
                fin.get(GetText,500).get();
                CharName->Text = GetText;
                fin.get(GetText,500).get();
                Player->Text = GetText;
                fin.get(GetText,500).get();
                ClassLevel->Text = GetText;
                fin.get(GetText,500).get();
                Race->Text = GetText;
                fin.get(GetText,500).get();
                Alignment->Text = GetText;
                fin.get(GetText,500).get();
                Deity->Text = GetText;
                fin.get(GetText,500).get();
                SetSize(GetText);
                SizeChange(this);
                fin.get(GetText,500).get();
                Age->Text = GetText;
                fin.get(GetText,500).get();
                Gender->Text = GetText;
                fin.get(GetText,500).get();
                Height->Text = GetText;
                fin.get(GetText,500).get();
                Weight->Text = GetText;
                fin.get(GetText,500).get();
                Eyes->Text = GetText;
                fin.get(GetText,500).get();
                Hair->Text = GetText;
                fin.get(GetText,500).get();
                Skin->Text = GetText;
                fin.get(GetText,500).get();
                StrTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexScr->Text = GetText;
                fin.get(GetText,500).get();
                ConScr->Text = GetText;
                fin.get(GetText,500).get();
                ConTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntScr->Text = GetText;
                fin.get(GetText,500).get();
                WisScr->Text = GetText;
                fin.get(GetText,500).get();
                WisTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaScr->Text = GetText;
                fin.get(GetText,500).get();
                FortBase->Text = GetText;
                fin.get(GetText,500).get();
                FortMagic->Text = GetText;
                fin.get(GetText,500).get();
                FortMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMagic->Text = GetText;
                fin.get(GetText,500).get();
                RefBase->Text = GetText;
                fin.get(GetText,500).get();
                WillBase->Text = GetText;
                fin.get(GetText,500).get();
                WillMagic->Text = GetText;
                fin.get(GetText,500).get();
                WillMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                BAB->Text = GetText;
                fin.get(GetText,500).get();
                SpellResistance->Text = GetText;
                fin.get(GetText,500).get();
                GrappleMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Range->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                BalanceRanks->Text = GetText;
                fin.get(GetText,500).get();
                BluffRanks->Text = GetText;
                fin.get(GetText,500).get();
                ClimbRanks->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationRanks->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                DecipherRanks->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisableRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                EscapeRanks->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryRanks->Text = GetText;
                fin.get(GetText,500).get();
                GatherRanks->Text = GetText;
                fin.get(GetText,500).get();
                HandleRanks->Text = GetText;
                fin.get(GetText,500).get();
                HealRanks->Text = GetText;
                fin.get(GetText,500).get();
                HideRanks->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateRanks->Text = GetText;
                fin.get(GetText,500).get();
                JumpRanks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Ranks->Text = GetText;
                fin.get(GetText,500).get();
                ListenRanks->Text = GetText;
                fin.get(GetText,500).get();
                MoveRanks->Text = GetText;
                fin.get(GetText,500).get();
                OpenRanks->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                RideRanks->Text = GetText;
                fin.get(GetText,500).get();
                SearchRanks->Text = GetText;
                fin.get(GetText,500).get();
                SenseRanks->Text = GetText;
                fin.get(GetText,500).get();
                SleightRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpotRanks->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalRanks->Text = GetText;
                fin.get(GetText,500).get();
                SwimRanks->Text = GetText;
                fin.get(GetText,500).get();
                TumbleRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeRanks->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                BalanceMisc->Text = GetText;
                fin.get(GetText,500).get();
                BluffMisc->Text = GetText;
                fin.get(GetText,500).get();
                ClimbMisc->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationMisc->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Misc->Text = GetText;
                fin.get(GetText,500).get();
                DecipherMisc->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisableMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                EscapeMisc->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryMisc->Text = GetText;
                fin.get(GetText,500).get();
                GatherMisc->Text = GetText;
                fin.get(GetText,500).get();
                HandleMisc->Text = GetText;
                fin.get(GetText,500).get();
                HealMisc->Text = GetText;
                fin.get(GetText,500).get();
                HideMisc->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateMisc->Text = GetText;
                fin.get(GetText,500).get();
                JumpMisc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Misc->Text = GetText;
                fin.get(GetText,500).get();
                ListenMisc->Text = GetText;
                fin.get(GetText,500).get();
                MoveMisc->Text = GetText;
                fin.get(GetText,500).get();
                OpenMisc->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Misc->Text = GetText;
                fin.get(GetText,500).get();
                RideMisc->Text = GetText;
                fin.get(GetText,500).get();
                SearchMisc->Text = GetText;
                fin.get(GetText,500).get();
                SenseMisc->Text = GetText;
                fin.get(GetText,500).get();
                SleightMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpotMisc->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalMisc->Text = GetText;
                fin.get(GetText,500).get();
                SwimMisc->Text = GetText;
                fin.get(GetText,500).get();
                TumbleMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeMisc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ability->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Edit->Text = GetText;
                fin.get(GetText,500).get();
                ArmorCheck->Text = GetText;
                fin.get(GetText,500).get();
                ArmorType->Text = GetText;
                fin.get(GetText,500).get();
                ArmorAC->Text = GetText;
                fin.get(GetText,500).get();
                ArmorDex->Text = GetText;
                fin.get(GetText,500).get();
                ArmorName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpeed->Text = GetText;
                fin.get(GetText,500).get();
                ArmorWeight->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpecial->Text = GetText;
                fin.get(GetText,500).get();
                ShieldName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldAC->Text = GetText;
                fin.get(GetText,500).get();
                ShieldWeight->Text = GetText;
                fin.get(GetText,500).get();
                ShieldCheck->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpecial->Text = GetText;
                fin.get(GetText,500).get();
                Experience->Text = GetText;
                fin.get(GetText,500).get();
                Campaign->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective1AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Weight->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Special->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective2AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Weight->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Special->Text = GetText;
                fin.get(GetText,500).get();
                DomainSchool->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown0->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay0->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells1->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells2->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells3->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells4->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells5->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells6->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells7->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells8->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells9->Text = GetText;
                fin.get(GetText,500).get();
                SetSpellSaveAbility(GetText);
                SpellSaveAbilityChange(this);
                bool GetCheck;
                fin >> GetCheck;
                AppraiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                BalanceCheck->Checked = GetCheck;
                fin >> GetCheck;
                BluffCheck->Checked = GetCheck;
                fin >> GetCheck;
                ClimbCheck->Checked = GetCheck;
                fin >> GetCheck;
                ConcentrationCheck->Checked = GetCheck;
                fin >> GetCheck;
                GatherCheck->Checked = GetCheck;
                fin >> GetCheck;
                ForgeryCheck->Checked = GetCheck;
                fin >> GetCheck;
                EscapeCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisguiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisableCheck->Checked = GetCheck;
                fin >> GetCheck;
                ListenCheck->Checked = GetCheck;
                fin >> GetCheck;
                MoveCheck->Checked = GetCheck;
                fin >> GetCheck;
                OpenCheck->Checked = GetCheck;
                fin >> GetCheck;
                Perform1Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform2Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform3Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession1Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession2Check->Checked = GetCheck;
                fin >> GetCheck;
                RideCheck->Checked = GetCheck;
                fin >> GetCheck;
                SearchCheck->Checked = GetCheck;
                fin >> GetCheck;
                SenseCheck->Checked = GetCheck;
                fin >> GetCheck;
                SleightCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpellcraftCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpotCheck->Checked = GetCheck;
                fin >> GetCheck;
                SurvivalCheck->Checked = GetCheck;
                fin >> GetCheck;
                SwimCheck->Checked = GetCheck;
                fin >> GetCheck;
                TumbleCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseMagicCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseRopeCheck->Checked = GetCheck;
                fin >> GetCheck;
                Misc1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft2Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft3Check->Checked = GetCheck;
                fin >> GetCheck;
                DecipherCheck->Checked = GetCheck;
                fin >> GetCheck;
                DiplomacyCheck->Checked = GetCheck;
                fin >> GetCheck;
                HandleCheck->Checked = GetCheck;
                fin >> GetCheck;
                HealCheck->Checked = GetCheck;
                fin >> GetCheck;
                HideCheck->Checked = GetCheck;
                fin >> GetCheck;
                IntimidateCheck->Checked = GetCheck;
                fin >> GetCheck;
                JumpCheck->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge1Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge2Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge3Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge4Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge5Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc2Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc3Check->Checked = GetCheck;
                short i, count;
                fin >> count;
                fin.get();
                Spells->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Spells->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Feats->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Feats->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpecialAbilities->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpecialAbilities->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Languages->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Languages->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Money->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Money->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                OtherPossessions->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        OtherPossessions->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpellCondMod->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpellCondMod->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                CondSave->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        CondSave->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                MiscNotes->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        MiscNotes->Lines->Add(GetText);
                }
                Misc1AbilityChange(this);
                Misc2AbilityChange(this);
                Misc3AbilityChange(this);
                if (OpenDialog1->FileName != "config.dnd")
                        ShowMessage("v3.1 Sheet Loaded");
                fin.close();
                }
                //If it's not the most recent, check if it's a 3.0 beta save
                else if (!strcmp(GetText,"Dungeons and Dragons v3.5 Digital Character Sheet - Version 3.0 - © 2006 Matt Schraeder and Frozen Insanity - http://www.kontek.net/frozen"))
                {
                        fin.close();
                        Importv30Save1Click(this);
                }
                //If it's not the most recent, check if it's the 2.0 save
                else if (!strcmp(GetText,"Dungeons and Dragons v3.5 Digital Character Sheet - Version 2.0 - © 2003 Matt Schraeder and Frozen Insanity - http://www.kontek.net/frozen"))
                {
                        fin.close();
                        Importv20Save1Click(this);
                }
                //If it's not the most recent nor a 2.0 save, check if it's the 2.0 beta save
                else if (!strcmp(GetText,"Dungeons and Dragons v3.5 Digital Character Sheet - Version 2.x - © 2003 Matt Schraeder and Frozen Insanity - http://www.kontek.net/frozen"))
                {
                        fin.close();
                        Importv2XSheet1Click(this);
                }
                //Obviously if it's not the newest version save, a 2.0 save, or a 2.0 beta save, it's a save from version 1.x -- if not there will be errors, but that's because the user isn't loading the right file: not my fault :P
                else
                {
                        fin.close();
                        Importv1XSheet1Click(this);
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Importv30Save1Click(TObject *Sender)
{
        AnsiString filename;
        char GetText[501];
        ifstream fin;
                filename = OpenDialog1->FileName;
                fin.open(filename.c_str());
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                ApplyLabelFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                ApplyTextBoxFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                ApplySmallMemoFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                ApplyLargeMemoFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                ApplyMiscNotesFontChanges();
                fin.get(GetText,500).get();
                FontDialog1->Font->Name = GetText;
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Size = Text.ToInt();
                fin.get(GetText,500).get();
                Text = GetText;
                FontDialog1->Font->Color = Text.ToInt();
                ApplyRollLogFontChanges();
                fin.get(GetText,500).get();
                HP->Text = GetText;
                fin.get(GetText,500).get();
                NaturalArmor->Text = GetText;
                fin.get(GetText,500).get();
                DeflectionMod->Text = GetText;
                fin.get(GetText,500).get();
                ArmorMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                InitMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                StrScr->Text = GetText;
                fin.get(GetText,500).get();
                RefTemp->Text = GetText;
                fin.get(GetText,500).get();
                WillTemp->Text = GetText;
                fin.get(GetText,500).get();
                FortTemp->Text = GetText;
                fin.get(GetText,500).get();
                Wounds->Text = GetText;
                fin.get(GetText,500).get();
                Nonlethal->Text = GetText;
                fin.get(GetText,500).get();
                Speed->Text = GetText;
                fin.get(GetText,500).get();
                DamageReduction->Text = GetText;
                fin.get(GetText,500).get();
                MaxRanks->Text = GetText;
                fin.get(GetText,500).get();
                CharName->Text = GetText;
                fin.get(GetText,500).get();
                Player->Text = GetText;
                fin.get(GetText,500).get();
                ClassLevel->Text = GetText;
                fin.get(GetText,500).get();
                Race->Text = GetText;
                fin.get(GetText,500).get();
                Alignment->Text = GetText;
                fin.get(GetText,500).get();
                Deity->Text = GetText;
                fin.get(GetText,500).get();
                SetSize(GetText);
                SizeChange(this);
                fin.get(GetText,500).get();
                Age->Text = GetText;
                fin.get(GetText,500).get();
                Gender->Text = GetText;
                fin.get(GetText,500).get();
                Height->Text = GetText;
                fin.get(GetText,500).get();
                Weight->Text = GetText;
                fin.get(GetText,500).get();
                Eyes->Text = GetText;
                fin.get(GetText,500).get();
                Hair->Text = GetText;
                fin.get(GetText,500).get();
                Skin->Text = GetText;
                fin.get(GetText,500).get();
                StrTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexScr->Text = GetText;
                fin.get(GetText,500).get();
                ConScr->Text = GetText;
                fin.get(GetText,500).get();
                ConTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntScr->Text = GetText;
                fin.get(GetText,500).get();
                WisScr->Text = GetText;
                fin.get(GetText,500).get();
                WisTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaScr->Text = GetText;
                fin.get(GetText,500).get();
                FortBase->Text = GetText;
                fin.get(GetText,500).get();
                FortMagic->Text = GetText;
                fin.get(GetText,500).get();
                FortMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMagic->Text = GetText;
                fin.get(GetText,500).get();
                RefBase->Text = GetText;
                fin.get(GetText,500).get();
                WillBase->Text = GetText;
                fin.get(GetText,500).get();
                WillMagic->Text = GetText;
                fin.get(GetText,500).get();
                WillMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                BAB->Text = GetText;
                fin.get(GetText,500).get();
                SpellResistance->Text = GetText;
                fin.get(GetText,500).get();
                GrappleMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Range->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                BalanceRanks->Text = GetText;
                fin.get(GetText,500).get();
                BluffRanks->Text = GetText;
                fin.get(GetText,500).get();
                ClimbRanks->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationRanks->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                DecipherRanks->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisableRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                EscapeRanks->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryRanks->Text = GetText;
                fin.get(GetText,500).get();
                GatherRanks->Text = GetText;
                fin.get(GetText,500).get();
                HandleRanks->Text = GetText;
                fin.get(GetText,500).get();
                HealRanks->Text = GetText;
                fin.get(GetText,500).get();
                HideRanks->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateRanks->Text = GetText;
                fin.get(GetText,500).get();
                JumpRanks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Ranks->Text = GetText;
                fin.get(GetText,500).get();
                ListenRanks->Text = GetText;
                fin.get(GetText,500).get();
                MoveRanks->Text = GetText;
                fin.get(GetText,500).get();
                OpenRanks->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                RideRanks->Text = GetText;
                fin.get(GetText,500).get();
                SearchRanks->Text = GetText;
                fin.get(GetText,500).get();
                SenseRanks->Text = GetText;
                fin.get(GetText,500).get();
                SleightRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpotRanks->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalRanks->Text = GetText;
                fin.get(GetText,500).get();
                SwimRanks->Text = GetText;
                fin.get(GetText,500).get();
                TumbleRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeRanks->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                BalanceMisc->Text = GetText;
                fin.get(GetText,500).get();
                BluffMisc->Text = GetText;
                fin.get(GetText,500).get();
                ClimbMisc->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationMisc->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Misc->Text = GetText;
                fin.get(GetText,500).get();
                DecipherMisc->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisableMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                EscapeMisc->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryMisc->Text = GetText;
                fin.get(GetText,500).get();
                GatherMisc->Text = GetText;
                fin.get(GetText,500).get();
                HandleMisc->Text = GetText;
                fin.get(GetText,500).get();
                HealMisc->Text = GetText;
                fin.get(GetText,500).get();
                HideMisc->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateMisc->Text = GetText;
                fin.get(GetText,500).get();
                JumpMisc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Misc->Text = GetText;
                fin.get(GetText,500).get();
                ListenMisc->Text = GetText;
                fin.get(GetText,500).get();
                MoveMisc->Text = GetText;
                fin.get(GetText,500).get();
                OpenMisc->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Misc->Text = GetText;
                fin.get(GetText,500).get();
                RideMisc->Text = GetText;
                fin.get(GetText,500).get();
                SearchMisc->Text = GetText;
                fin.get(GetText,500).get();
                SenseMisc->Text = GetText;
                fin.get(GetText,500).get();
                SleightMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpotMisc->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalMisc->Text = GetText;
                fin.get(GetText,500).get();
                SwimMisc->Text = GetText;
                fin.get(GetText,500).get();
                TumbleMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeMisc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ability->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Edit->Text = GetText;
                fin.get(GetText,500).get();
                ArmorCheck->Text = GetText;
                fin.get(GetText,500).get();
                ArmorType->Text = GetText;
                fin.get(GetText,500).get();
                ArmorAC->Text = GetText;
                fin.get(GetText,500).get();
                ArmorDex->Text = GetText;
                fin.get(GetText,500).get();
                ArmorName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpeed->Text = GetText;
                fin.get(GetText,500).get();
                ArmorWeight->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpecial->Text = GetText;
                fin.get(GetText,500).get();
                ShieldName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldAC->Text = GetText;
                fin.get(GetText,500).get();
                ShieldWeight->Text = GetText;
                fin.get(GetText,500).get();
                ShieldCheck->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpecial->Text = GetText;
                fin.get(GetText,500).get();
                Experience->Text = GetText;
                fin.get(GetText,500).get();
                Campaign->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective1AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Weight->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Special->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective2AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Weight->Text = GetText;
                fin.get(GetText,500).get();
                DomainSchool->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown0->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay0->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells1->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells2->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells3->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells4->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells5->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells6->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells7->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells8->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells9->Text = GetText;
                fin.get(GetText,500).get();
                SetSpellSaveAbility(GetText);
                SpellSaveAbilityChange(this);
                bool GetCheck;
                fin >> GetCheck;
                AppraiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                BalanceCheck->Checked = GetCheck;
                fin >> GetCheck;
                BluffCheck->Checked = GetCheck;
                fin >> GetCheck;
                ClimbCheck->Checked = GetCheck;
                fin >> GetCheck;
                ConcentrationCheck->Checked = GetCheck;
                fin >> GetCheck;
                GatherCheck->Checked = GetCheck;
                fin >> GetCheck;
                ForgeryCheck->Checked = GetCheck;
                fin >> GetCheck;
                EscapeCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisguiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisableCheck->Checked = GetCheck;
                fin >> GetCheck;
                ListenCheck->Checked = GetCheck;
                fin >> GetCheck;
                MoveCheck->Checked = GetCheck;
                fin >> GetCheck;
                OpenCheck->Checked = GetCheck;
                fin >> GetCheck;
                Perform1Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform2Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform3Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession1Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession2Check->Checked = GetCheck;
                fin >> GetCheck;
                RideCheck->Checked = GetCheck;
                fin >> GetCheck;
                SearchCheck->Checked = GetCheck;
                fin >> GetCheck;
                SenseCheck->Checked = GetCheck;
                fin >> GetCheck;
                SleightCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpellcraftCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpotCheck->Checked = GetCheck;
                fin >> GetCheck;
                SurvivalCheck->Checked = GetCheck;
                fin >> GetCheck;
                SwimCheck->Checked = GetCheck;
                fin >> GetCheck;
                TumbleCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseMagicCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseRopeCheck->Checked = GetCheck;
                fin >> GetCheck;
                Misc1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft2Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft3Check->Checked = GetCheck;
                fin >> GetCheck;
                DecipherCheck->Checked = GetCheck;
                fin >> GetCheck;
                DiplomacyCheck->Checked = GetCheck;
                fin >> GetCheck;
                HandleCheck->Checked = GetCheck;
                fin >> GetCheck;
                HealCheck->Checked = GetCheck;
                fin >> GetCheck;
                HideCheck->Checked = GetCheck;
                fin >> GetCheck;
                IntimidateCheck->Checked = GetCheck;
                fin >> GetCheck;
                JumpCheck->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge1Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge2Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge3Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge4Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge5Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc2Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc3Check->Checked = GetCheck;
                short i, count;
                fin >> count;
                fin.get();
                Spells->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Spells->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Feats->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Feats->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpecialAbilities->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpecialAbilities->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Languages->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Languages->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Money->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Money->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                OtherPossessions->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        OtherPossessions->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpellCondMod->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpellCondMod->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                CondSave->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        CondSave->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                MiscNotes->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        MiscNotes->Lines->Add(GetText);
                }
                Misc1AbilityChange(this);
                Misc2AbilityChange(this);
                Misc3AbilityChange(this);
                if (OpenDialog1->FileName != "config.dnd")
                        ShowMessage("v3.0 Sheet Imported");
                fin.close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Importv20Save1Click(TObject *Sender)
{
        AnsiString filename;
        char GetText[501];
        ifstream fin;
                filename = OpenDialog1->FileName;
                fin.open(filename.c_str());
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                HP->Text = GetText;
                fin.get(GetText,500).get();
                NaturalArmor->Text = GetText;
                fin.get(GetText,500).get();
                DeflectionMod->Text = GetText;
                fin.get(GetText,500).get();
                ArmorMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                InitMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                StrScr->Text = GetText;
                fin.get(GetText,500).get();
                RefTemp->Text = GetText;
                fin.get(GetText,500).get();
                WillTemp->Text = GetText;
                fin.get(GetText,500).get();
                FortTemp->Text = GetText;
                fin.get(GetText,500).get();
                Wounds->Text = GetText;
                fin.get(GetText,500).get();
                Nonlethal->Text = GetText;
                fin.get(GetText,500).get();
                Speed->Text = GetText;
                fin.get(GetText,500).get();
                DamageReduction->Text = GetText;
                fin.get(GetText,500).get();
                MaxRanks->Text = GetText;
                fin.get(GetText,500).get();
                CharName->Text = GetText;
                fin.get(GetText,500).get();
                Player->Text = GetText;
                fin.get(GetText,500).get();
                ClassLevel->Text = GetText;
                fin.get(GetText,500).get();
                Race->Text = GetText;
                fin.get(GetText,500).get();
                Alignment->Text = GetText;
                fin.get(GetText,500).get();
                Deity->Text = GetText;
                fin.get(GetText,500).get();
                SetSize(GetText);
                SizeChange(this);
                fin.get(GetText,500).get();
                Age->Text = GetText;
                fin.get(GetText,500).get();
                Gender->Text = GetText;
                fin.get(GetText,500).get();
                Height->Text = GetText;
                fin.get(GetText,500).get();
                Weight->Text = GetText;
                fin.get(GetText,500).get();
                Eyes->Text = GetText;
                fin.get(GetText,500).get();
                Hair->Text = GetText;
                fin.get(GetText,500).get();
                Skin->Text = GetText;
                fin.get(GetText,500).get();
                StrTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexScr->Text = GetText;
                fin.get(GetText,500).get();
                ConScr->Text = GetText;
                fin.get(GetText,500).get();
                ConTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntScr->Text = GetText;
                fin.get(GetText,500).get();
                WisScr->Text = GetText;
                fin.get(GetText,500).get();
                WisTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaScr->Text = GetText;
                fin.get(GetText,500).get();
                FortBase->Text = GetText;
                fin.get(GetText,500).get();
                FortMagic->Text = GetText;
                fin.get(GetText,500).get();
                FortMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMagic->Text = GetText;
                fin.get(GetText,500).get();
                RefBase->Text = GetText;
                fin.get(GetText,500).get();
                WillBase->Text = GetText;
                fin.get(GetText,500).get();
                WillMagic->Text = GetText;
                fin.get(GetText,500).get();
                WillMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                BAB->Text = GetText;
                fin.get(GetText,500).get();
                SpellResistance->Text = GetText;
                fin.get(GetText,500).get();
                GrappleMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Range->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                BalanceRanks->Text = GetText;
                fin.get(GetText,500).get();
                BluffRanks->Text = GetText;
                fin.get(GetText,500).get();
                ClimbRanks->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationRanks->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                DecipherRanks->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisableRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                EscapeRanks->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryRanks->Text = GetText;
                fin.get(GetText,500).get();
                GatherRanks->Text = GetText;
                fin.get(GetText,500).get();
                HandleRanks->Text = GetText;
                fin.get(GetText,500).get();
                HealRanks->Text = GetText;
                fin.get(GetText,500).get();
                HideRanks->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateRanks->Text = GetText;
                fin.get(GetText,500).get();
                JumpRanks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Ranks->Text = GetText;
                fin.get(GetText,500).get();
                ListenRanks->Text = GetText;
                fin.get(GetText,500).get();
                MoveRanks->Text = GetText;
                fin.get(GetText,500).get();
                OpenRanks->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                RideRanks->Text = GetText;
                fin.get(GetText,500).get();
                SearchRanks->Text = GetText;
                fin.get(GetText,500).get();
                SenseRanks->Text = GetText;
                fin.get(GetText,500).get();
                SleightRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpotRanks->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalRanks->Text = GetText;
                fin.get(GetText,500).get();
                SwimRanks->Text = GetText;
                fin.get(GetText,500).get();
                TumbleRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeRanks->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                BalanceMisc->Text = GetText;
                fin.get(GetText,500).get();
                BluffMisc->Text = GetText;
                fin.get(GetText,500).get();
                ClimbMisc->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationMisc->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Misc->Text = GetText;
                fin.get(GetText,500).get();
                DecipherMisc->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisableMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                EscapeMisc->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryMisc->Text = GetText;
                fin.get(GetText,500).get();
                GatherMisc->Text = GetText;
                fin.get(GetText,500).get();
                HandleMisc->Text = GetText;
                fin.get(GetText,500).get();
                HealMisc->Text = GetText;
                fin.get(GetText,500).get();
                HideMisc->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateMisc->Text = GetText;
                fin.get(GetText,500).get();
                JumpMisc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Misc->Text = GetText;
                fin.get(GetText,500).get();
                ListenMisc->Text = GetText;
                fin.get(GetText,500).get();
                MoveMisc->Text = GetText;
                fin.get(GetText,500).get();
                OpenMisc->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Misc->Text = GetText;
                fin.get(GetText,500).get();
                RideMisc->Text = GetText;
                fin.get(GetText,500).get();
                SearchMisc->Text = GetText;
                fin.get(GetText,500).get();
                SenseMisc->Text = GetText;
                fin.get(GetText,500).get();
                SleightMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpotMisc->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalMisc->Text = GetText;
                fin.get(GetText,500).get();
                SwimMisc->Text = GetText;
                fin.get(GetText,500).get();
                TumbleMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeMisc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ability->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Edit->Text = GetText;
                fin.get(GetText,500).get();
                ArmorCheck->Text = GetText;
                fin.get(GetText,500).get();
                ArmorType->Text = GetText;
                fin.get(GetText,500).get();
                ArmorAC->Text = GetText;
                fin.get(GetText,500).get();
                ArmorDex->Text = GetText;
                fin.get(GetText,500).get();
                ArmorName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpeed->Text = GetText;
                fin.get(GetText,500).get();
                ArmorWeight->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpecial->Text = GetText;
                fin.get(GetText,500).get();
                ShieldName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldAC->Text = GetText;
                fin.get(GetText,500).get();
                ShieldWeight->Text = GetText;
                fin.get(GetText,500).get();
                ShieldCheck->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpecial->Text = GetText;
                fin.get(GetText,500).get();
                Experience->Text = GetText;
                fin.get(GetText,500).get();
                Campaign->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective1AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Weight->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Special->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective2AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Weight->Text = GetText;
                fin.get(GetText,500).get();
                DomainSchool->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown0->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay0->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells1->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells2->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells3->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells4->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells5->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells6->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells7->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells8->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells9->Text = GetText;
                fin.get(GetText,500).get();
                Misc3AbilityModL->Caption = GetText;
                fin.get(GetText,500).get();
                Misc2AbilityModL->Caption = GetText;
                fin.get(GetText,500).get();
                Misc1AbilityModL->Caption = GetText;
                fin.get(GetText,500).get();
                SetSpellSaveAbility(GetText);
                SpellSaveAbilityChange(this);
                bool GetCheck;
                fin >> GetCheck;
                AppraiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                BalanceCheck->Checked = GetCheck;
                fin >> GetCheck;
                BluffCheck->Checked = GetCheck;
                fin >> GetCheck;
                ClimbCheck->Checked = GetCheck;
                fin >> GetCheck;
                ConcentrationCheck->Checked = GetCheck;
                fin >> GetCheck;
                GatherCheck->Checked = GetCheck;
                fin >> GetCheck;
                ForgeryCheck->Checked = GetCheck;
                fin >> GetCheck;
                EscapeCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisguiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisableCheck->Checked = GetCheck;
                fin >> GetCheck;
                ListenCheck->Checked = GetCheck;
                fin >> GetCheck;
                MoveCheck->Checked = GetCheck;
                fin >> GetCheck;
                OpenCheck->Checked = GetCheck;
                fin >> GetCheck;
                Perform1Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform2Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform3Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession1Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession2Check->Checked = GetCheck;
                fin >> GetCheck;
                RideCheck->Checked = GetCheck;
                fin >> GetCheck;
                SearchCheck->Checked = GetCheck;
                fin >> GetCheck;
                SenseCheck->Checked = GetCheck;
                fin >> GetCheck;
                SleightCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpellcraftCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpotCheck->Checked = GetCheck;
                fin >> GetCheck;
                SurvivalCheck->Checked = GetCheck;
                fin >> GetCheck;
                SwimCheck->Checked = GetCheck;
                fin >> GetCheck;
                TumbleCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseMagicCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseRopeCheck->Checked = GetCheck;
                fin >> GetCheck;
                Misc1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft2Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft3Check->Checked = GetCheck;
                fin >> GetCheck;
                DecipherCheck->Checked = GetCheck;
                fin >> GetCheck;
                DiplomacyCheck->Checked = GetCheck;
                fin >> GetCheck;
                HandleCheck->Checked = GetCheck;
                fin >> GetCheck;
                HealCheck->Checked = GetCheck;
                fin >> GetCheck;
                HideCheck->Checked = GetCheck;
                fin >> GetCheck;
                IntimidateCheck->Checked = GetCheck;
                fin >> GetCheck;
                JumpCheck->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge1Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge2Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge3Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge4Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge5Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc2Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc3Check->Checked = GetCheck;
                short i, count;
                fin >> count;
                fin.get();
                Spells->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Spells->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Feats->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Feats->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpecialAbilities->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpecialAbilities->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Languages->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Languages->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Money->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Money->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                OtherPossessions->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        OtherPossessions->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpellCondMod->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpellCondMod->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                CondSave->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        CondSave->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                MiscNotes->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        MiscNotes->Lines->Add(GetText);
                }
                Misc1AbilityChange(this);
                Misc2AbilityChange(this);
                Misc3AbilityChange(this);
                ShowMessage("v2.0 Sheet Loaded");
                fin.close();
}
//---------------------------------------------------------------------------

//While beta testing version 2.0 I made some changes to the save system, most people won't need this, a select few will, therefore I left it in
void __fastcall TForm1::Importv2XSheet1Click(TObject *Sender)
{
        AnsiString filename;
        char GetText[501];
        ifstream fin;
                filename = OpenDialog1->FileName;
                fin.open(filename.c_str());
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                HP->Text = GetText;
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                NaturalArmor->Text = GetText;
                fin.get(GetText,500).get();
                DeflectionMod->Text = GetText;
                fin.get(GetText,500).get();
                ArmorMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                InitMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                StrScr->Text = GetText;
                fin.get(GetText,500).get();
                RefTemp->Text = GetText;
                fin.get(GetText,500).get();
                WillTemp->Text = GetText;
                fin.get(GetText,500).get();
                FortTemp->Text = GetText;
                fin.get(GetText,500).get();
                Wounds->Text = GetText;
                fin.get(GetText,500).get();
                Nonlethal->Text = GetText;
                fin.get(GetText,500).get();
                Speed->Text = GetText;
                fin.get(GetText,500).get();
                DamageReduction->Text = GetText;
                fin.get(GetText,500).get();
                MaxRanks->Text = GetText;
                fin.get(GetText,500).get();
                CharName->Text = GetText;
                fin.get(GetText,500).get();
                Player->Text = GetText;
                fin.get(GetText,500).get();
                ClassLevel->Text = GetText;
                fin.get(GetText,500).get();
                Race->Text = GetText;
                fin.get(GetText,500).get();
                Alignment->Text = GetText;
                fin.get(GetText,500).get();
                Deity->Text = GetText;
                fin.get(GetText,500).get();
                SetSize(GetText);
                SizeChange(this);
                fin.get(GetText,500).get();
                Age->Text = GetText;
                fin.get(GetText,500).get();
                Gender->Text = GetText;
                fin.get(GetText,500).get();
                Height->Text = GetText;
                fin.get(GetText,500).get();
                Weight->Text = GetText;
                fin.get(GetText,500).get();
                Eyes->Text = GetText;
                fin.get(GetText,500).get();
                Hair->Text = GetText;
                fin.get(GetText,500).get();
                Skin->Text = GetText;
                fin.get(GetText,500).get();
                StrTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexTScr->Text = GetText;
                fin.get(GetText,500).get();
                DexScr->Text = GetText;
                fin.get(GetText,500).get();
                ConScr->Text = GetText;
                fin.get(GetText,500).get();
                ConTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntTScr->Text = GetText;
                fin.get(GetText,500).get();
                IntScr->Text = GetText;
                fin.get(GetText,500).get();
                WisScr->Text = GetText;
                fin.get(GetText,500).get();
                WisTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaTScr->Text = GetText;
                fin.get(GetText,500).get();
                ChaScr->Text = GetText;
                fin.get(GetText,500).get();
                FortBase->Text = GetText;
                fin.get(GetText,500).get();
                FortMagic->Text = GetText;
                fin.get(GetText,500).get();
                FortMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                RefMagic->Text = GetText;
                fin.get(GetText,500).get();
                RefBase->Text = GetText;
                fin.get(GetText,500).get();
                WillBase->Text = GetText;
                fin.get(GetText,500).get();
                WillMagic->Text = GetText;
                fin.get(GetText,500).get();
                WillMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                BAB->Text = GetText;
                fin.get(GetText,500).get();
                SpellResistance->Text = GetText;
                fin.get(GetText,500).get();
                GrappleMiscMod->Text = GetText;
                fin.get(GetText,500).get();
                fin.get(GetText,500).get();
                Weapon1Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon1Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon2Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon3Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon4Range->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Name->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Bonus->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Damage->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Crit->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Notes->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Ammo->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Type->Text = GetText;
                fin.get(GetText,500).get();
                Weapon5Range->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                BalanceRanks->Text = GetText;
                fin.get(GetText,500).get();
                BluffRanks->Text = GetText;
                fin.get(GetText,500).get();
                ClimbRanks->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationRanks->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                DecipherRanks->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisableRanks->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseRanks->Text = GetText;
                fin.get(GetText,500).get();
                EscapeRanks->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryRanks->Text = GetText;
                fin.get(GetText,500).get();
                GatherRanks->Text = GetText;
                fin.get(GetText,500).get();
                HandleRanks->Text = GetText;
                fin.get(GetText,500).get();
                HealRanks->Text = GetText;
                fin.get(GetText,500).get();
                HideRanks->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateRanks->Text = GetText;
                fin.get(GetText,500).get();
                JumpRanks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Ranks->Text = GetText;
                fin.get(GetText,500).get();
                ListenRanks->Text = GetText;
                fin.get(GetText,500).get();
                MoveRanks->Text = GetText;
                fin.get(GetText,500).get();
                OpenRanks->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                RideRanks->Text = GetText;
                fin.get(GetText,500).get();
                SearchRanks->Text = GetText;
                fin.get(GetText,500).get();
                SenseRanks->Text = GetText;
                fin.get(GetText,500).get();
                SleightRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftRanks->Text = GetText;
                fin.get(GetText,500).get();
                SpotRanks->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalRanks->Text = GetText;
                fin.get(GetText,500).get();
                SwimRanks->Text = GetText;
                fin.get(GetText,500).get();
                TumbleRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicRanks->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeRanks->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ranks->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ranks->Text = GetText;
                fin.get(GetText,500).get();
                AppraiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                BalanceMisc->Text = GetText;
                fin.get(GetText,500).get();
                BluffMisc->Text = GetText;
                fin.get(GetText,500).get();
                ClimbMisc->Text = GetText;
                fin.get(GetText,500).get();
                ConcentrationMisc->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Misc->Text = GetText;
                fin.get(GetText,500).get();
                DecipherMisc->Text = GetText;
                fin.get(GetText,500).get();
                DiplomacyMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisableMisc->Text = GetText;
                fin.get(GetText,500).get();
                DisguiseMisc->Text = GetText;
                fin.get(GetText,500).get();
                EscapeMisc->Text = GetText;
                fin.get(GetText,500).get();
                ForgeryMisc->Text = GetText;
                fin.get(GetText,500).get();
                GatherMisc->Text = GetText;
                fin.get(GetText,500).get();
                HandleMisc->Text = GetText;
                fin.get(GetText,500).get();
                HealMisc->Text = GetText;
                fin.get(GetText,500).get();
                HideMisc->Text = GetText;
                fin.get(GetText,500).get();
                IntimidateMisc->Text = GetText;
                fin.get(GetText,500).get();
                JumpMisc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Misc->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Misc->Text = GetText;
                fin.get(GetText,500).get();
                ListenMisc->Text = GetText;
                fin.get(GetText,500).get();
                MoveMisc->Text = GetText;
                fin.get(GetText,500).get();
                OpenMisc->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Misc->Text = GetText;
                fin.get(GetText,500).get();
                RideMisc->Text = GetText;
                fin.get(GetText,500).get();
                SearchMisc->Text = GetText;
                fin.get(GetText,500).get();
                SenseMisc->Text = GetText;
                fin.get(GetText,500).get();
                SleightMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpellcraftMisc->Text = GetText;
                fin.get(GetText,500).get();
                SpotMisc->Text = GetText;
                fin.get(GetText,500).get();
                SurvivalMisc->Text = GetText;
                fin.get(GetText,500).get();
                SwimMisc->Text = GetText;
                fin.get(GetText,500).get();
                TumbleMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseMagicMisc->Text = GetText;
                fin.get(GetText,500).get();
                UseRopeMisc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Misc->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Ability->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Ability->Text = GetText;
                fin.get(GetText,500).get();
                Craft1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Craft3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge4Edit->Text = GetText;
                fin.get(GetText,500).get();
                Knowledge5Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Perform3Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Profession2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc1Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc2Edit->Text = GetText;
                fin.get(GetText,500).get();
                Misc3Edit->Text = GetText;
                fin.get(GetText,500).get();
                ArmorCheck->Text = GetText;
                fin.get(GetText,500).get();
                ArmorType->Text = GetText;
                fin.get(GetText,500).get();
                ArmorAC->Text = GetText;
                fin.get(GetText,500).get();
                ArmorDex->Text = GetText;
                fin.get(GetText,500).get();
                ArmorName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpeed->Text = GetText;
                fin.get(GetText,500).get();
                ArmorWeight->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpecial->Text = GetText;
                fin.get(GetText,500).get();
                ShieldName->Text = GetText;
                fin.get(GetText,500).get();
                ArmorSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldAC->Text = GetText;
                fin.get(GetText,500).get();
                ShieldWeight->Text = GetText;
                fin.get(GetText,500).get();
                ShieldCheck->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpellFailure->Text = GetText;
                fin.get(GetText,500).get();
                ShieldSpecial->Text = GetText;
                fin.get(GetText,500).get();
                Experience->Text = GetText;
                fin.get(GetText,500).get();
                Campaign->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective1AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Weight->Text = GetText;
                fin.get(GetText,500).get();
                Protective1Special->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Name->Text = GetText;
                fin.get(GetText,500).get();
                Protective2AC->Text = GetText;
                fin.get(GetText,500).get();
                Protective2Weight->Text = GetText;
                fin.get(GetText,500).get();
                DomainSchool->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown0->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsKnown9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay9->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay8->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay7->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay6->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay5->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay4->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay3->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay2->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay1->Text = GetText;
                fin.get(GetText,500).get();
                SpellsDay0->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells1->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells2->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells3->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells4->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells5->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells6->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells7->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells8->Text = GetText;
                fin.get(GetText,500).get();
                BonusSpells9->Text = GetText;
                fin.get(GetText,500).get();
                Misc3AbilityModL->Caption = GetText;
                fin.get(GetText,500).get();
                Misc2AbilityModL->Caption = GetText;
                fin.get(GetText,500).get();
                Misc1AbilityModL->Caption = GetText;

                bool GetCheck;
                fin >> GetCheck;
                AppraiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                BalanceCheck->Checked = GetCheck;
                fin >> GetCheck;
                BluffCheck->Checked = GetCheck;
                fin >> GetCheck;
                ClimbCheck->Checked = GetCheck;
                fin >> GetCheck;
                ConcentrationCheck->Checked = GetCheck;
                fin >> GetCheck;
                GatherCheck->Checked = GetCheck;
                fin >> GetCheck;
                ForgeryCheck->Checked = GetCheck;
                fin >> GetCheck;
                EscapeCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisguiseCheck->Checked = GetCheck;
                fin >> GetCheck;
                DisableCheck->Checked = GetCheck;
                fin >> GetCheck;
                ListenCheck->Checked = GetCheck;
                fin >> GetCheck;
                MoveCheck->Checked = GetCheck;
                fin >> GetCheck;
                OpenCheck->Checked = GetCheck;
                fin >> GetCheck;
                Perform1Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform2Check->Checked = GetCheck;
                fin >> GetCheck;
                Perform3Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession1Check->Checked = GetCheck;
                fin >> GetCheck;
                Profession2Check->Checked = GetCheck;
                fin >> GetCheck;
                RideCheck->Checked = GetCheck;
                fin >> GetCheck;
                SearchCheck->Checked = GetCheck;
                fin >> GetCheck;
                SenseCheck->Checked = GetCheck;
                fin >> GetCheck;
                SleightCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpellcraftCheck->Checked = GetCheck;
                fin >> GetCheck;
                SpotCheck->Checked = GetCheck;
                fin >> GetCheck;
                SurvivalCheck->Checked = GetCheck;
                fin >> GetCheck;
                SwimCheck->Checked = GetCheck;
                fin >> GetCheck;
                TumbleCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseMagicCheck->Checked = GetCheck;
                fin >> GetCheck;
                UseRopeCheck->Checked = GetCheck;
                fin >> GetCheck;
                Misc1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft1Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft2Check->Checked = GetCheck;
                fin >> GetCheck;
                Craft3Check->Checked = GetCheck;
                fin >> GetCheck;
                DecipherCheck->Checked = GetCheck;
                fin >> GetCheck;
                DiplomacyCheck->Checked = GetCheck;
                fin >> GetCheck;
                HandleCheck->Checked = GetCheck;
                fin >> GetCheck;
                HealCheck->Checked = GetCheck;
                fin >> GetCheck;
                HideCheck->Checked = GetCheck;
                fin >> GetCheck;
                IntimidateCheck->Checked = GetCheck;
                fin >> GetCheck;
                JumpCheck->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge1Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge2Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge3Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge4Check->Checked = GetCheck;
                fin >> GetCheck;
                Knowledge5Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc2Check->Checked = GetCheck;
                fin >> GetCheck;
                Misc3Check->Checked = GetCheck;
                short i, count;
                fin >> count;
                fin.get();
                Spells->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Spells->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Feats->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Feats->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpecialAbilities->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpecialAbilities->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Languages->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Languages->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                Money->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        Money->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                OtherPossessions->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        OtherPossessions->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                SpellCondMod->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        SpellCondMod->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                CondSave->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        CondSave->Lines->Add(GetText);
                }
                fin >> count;
                fin.get();
                MiscNotes->Lines->Clear();
                for (i = 0; i < count; i++)
                {
                        fin.get(GetText,500).get();
                        MiscNotes->Lines->Add(GetText);
                }
                //Stupid me: I didn't load the drop down for the spell save quite right in v2.x -- user has to make sure they pick an appropriate ability modifier
                ShowMessage("v2.x Sheet Imported\nBe sure to check the Spell Save DC Mod");
                fin.close();
}
//---------------------------------------------------------------------------

//If the size drop down box changes, set appropriate modifiers
void __fastcall TForm1::SizeChange(TObject *Sender)
{
        AnsiString SizeString = "";
        short ACMod, GrappleMod;
        if (Size->Text == "Fine")
        {
                ACMod = 8;
                GrappleMod = -16;
        }
        else if (Size->Text == "Diminutive")
        {
                ACMod = 4;
                GrappleMod = -12;
        }
        else if (Size->Text == "Tiny")
        {
                ACMod = 2;
                GrappleMod = -8;
        }
        else if (Size->Text == "Small")
        {
                ACMod = 1;
                GrappleMod = -4;
        }
        else if (Size->Text == "Medium")
        {
                ACMod = 0;
                GrappleMod = 0;
        }
        else if (Size->Text == "Large")
        {
                ACMod = -1;
                GrappleMod = 4;
        }
        else if (Size->Text == "Huge")
        {
                ACMod = -2;
                GrappleMod = 8;
        }
        else if (Size->Text == "Gargantuan")
        {
                ACMod = -4;
                GrappleMod = 12;
        }
        else if (Size->Text == "Colossal")
        {
                ACMod = -8;
                GrappleMod = 16;
        }
        ACSizeMod->Caption = SizeString + ACMod;
        GrappleSizeMod->Caption = SizeString + GrappleMod;
        ACCalculator();
        GrappleCalculator();
        CarryingCapacityCalculator();
}
//---------------------------------------------------------------------------

//If the Armor Max Dex box changes, reset the dex related scores
//Mainly this just changes AC
void __fastcall TForm1::ArmorDexChange(TObject *Sender)
{
        DexStatChanger();
}
//---------------------------------------------------------------------------

//Keep scrollbar at the top when changing pages
//This makes sure you can still see the page tabs
void __fastcall TForm1::PageControl1Change(TObject *Sender)
{
        Form1->VertScrollBar->Position = 0;
}
//---------------------------------------------------------------------------

//Calculate Armor Checks on Skills
void __fastcall TForm1::ArmorCheckChange(TObject *Sender)
{
        if(ArmorCheck->Text != "" && ArmorCheck->Text != "-")
        {
                BalanceCalculator();
                ClimbCalculator();
                EscapeCalculator();
                HideCalculator();
                JumpCalculator();
                MoveCalculator();
                SleightCalculator();
                SwimCalculator();
        }
}
//---------------------------------------------------------------------------

//Font Customization = The Hotness!
void ApplyTextBoxFontChanges()
{
        Form1->ArmorCheck->Font = Form1->FontDialog1->Font;
        Form1->ArmorType->Font = Form1->FontDialog1->Font;
        Form1->ArmorAC->Font = Form1->FontDialog1->Font;
        Form1->ArmorDex->Font = Form1->FontDialog1->Font;
        Form1->ArmorName->Font = Form1->FontDialog1->Font;
        Form1->ArmorSpeed->Font = Form1->FontDialog1->Font;
        Form1->ArmorWeight->Font = Form1->FontDialog1->Font;
        Form1->ArmorSpecial->Font = Form1->FontDialog1->Font;
        Form1->ShieldName->Font = Form1->FontDialog1->Font;
        Form1->ArmorSpellFailure->Font = Form1->FontDialog1->Font;
        Form1->ShieldAC->Font = Form1->FontDialog1->Font;
        Form1->ShieldWeight->Font = Form1->FontDialog1->Font;
        Form1->ShieldCheck->Font = Form1->FontDialog1->Font;
        Form1->ShieldSpellFailure->Font = Form1->FontDialog1->Font;
        Form1->ShieldSpecial->Font = Form1->FontDialog1->Font;
        Form1->Experience->Font = Form1->FontDialog1->Font;
        Form1->Campaign->Font = Form1->FontDialog1->Font;
        Form1->Protective1Name->Font = Form1->FontDialog1->Font;
        Form1->Protective1AC->Font = Form1->FontDialog1->Font;
        Form1->Protective1Weight->Font = Form1->FontDialog1->Font;
        Form1->Protective1Special->Font = Form1->FontDialog1->Font;
        Form1->Protective2Special->Font = Form1->FontDialog1->Font;
        Form1->Protective2Weight->Font = Form1->FontDialog1->Font;
        Form1->Protective2AC->Font = Form1->FontDialog1->Font;
        Form1->Protective2Name->Font = Form1->FontDialog1->Font;
        Form1->DomainSchool->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown1->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown0->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown2->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown3->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown7->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown6->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown5->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown4->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown8->Font = Form1->FontDialog1->Font;
        Form1->SpellsKnown9->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay9->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay8->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay7->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay6->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay5->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay4->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay3->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay2->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay1->Font = Form1->FontDialog1->Font;
        Form1->SpellsDay0->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells1->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells2->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells3->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells4->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells5->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells6->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells7->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells8->Font = Form1->FontDialog1->Font;
        Form1->BonusSpells9->Font = Form1->FontDialog1->Font;
        Form1->Numd4->Font = Form1->FontDialog1->Font;
        Form1->Numd6->Font = Form1->FontDialog1->Font;
        Form1->Numd8->Font = Form1->FontDialog1->Font;
        Form1->Numd10->Font = Form1->FontDialog1->Font;
        Form1->Numd20->Font = Form1->FontDialog1->Font;
        Form1->Numd12->Font = Form1->FontDialog1->Font;
        Form1->Numd100->Font = Form1->FontDialog1->Font;
        Form1->ClassLevel->Font = Form1->FontDialog1->Font;
        Form1->Race->Font = Form1->FontDialog1->Font;
        Form1->Alignment->Font = Form1->FontDialog1->Font;
        Form1->Deity->Font = Form1->FontDialog1->Font;
        Form1->Age->Font = Form1->FontDialog1->Font;
        Form1->Gender->Font = Form1->FontDialog1->Font;
        Form1->Height->Font = Form1->FontDialog1->Font;
        Form1->Weight->Font = Form1->FontDialog1->Font;
        Form1->Eyes->Font = Form1->FontDialog1->Font;
        Form1->Hair->Font = Form1->FontDialog1->Font;
        Form1->Skin->Font = Form1->FontDialog1->Font;
        Form1->StrTScr->Font = Form1->FontDialog1->Font;
        Form1->DexTScr->Font = Form1->FontDialog1->Font;
        Form1->DexScr->Font = Form1->FontDialog1->Font;
        Form1->ConScr->Font = Form1->FontDialog1->Font;
        Form1->ConTScr->Font = Form1->FontDialog1->Font;
        Form1->IntTScr->Font = Form1->FontDialog1->Font;
        Form1->IntScr->Font = Form1->FontDialog1->Font;
        Form1->WisScr->Font = Form1->FontDialog1->Font;
        Form1->WisTScr->Font = Form1->FontDialog1->Font;
        Form1->ChaTScr->Font = Form1->FontDialog1->Font;
        Form1->ChaScr->Font = Form1->FontDialog1->Font;
        Form1->FortBase->Font = Form1->FontDialog1->Font;
        Form1->FortMagic->Font = Form1->FontDialog1->Font;
        Form1->FortMiscMod->Font = Form1->FontDialog1->Font;
        Form1->RefMiscMod->Font = Form1->FontDialog1->Font;
        Form1->RefMagic->Font = Form1->FontDialog1->Font;
        Form1->RefBase->Font = Form1->FontDialog1->Font;
        Form1->WillBase->Font = Form1->FontDialog1->Font;
        Form1->WillMagic->Font = Form1->FontDialog1->Font;
        Form1->WillMiscMod->Font = Form1->FontDialog1->Font;
        Form1->BAB->Font = Form1->FontDialog1->Font;
        Form1->SpellResistance->Font = Form1->FontDialog1->Font;
        Form1->GrappleMiscMod->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Name->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Bonus->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Damage->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Crit->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Notes->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Ammo->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Type->Font = Form1->FontDialog1->Font;
        Form1->Weapon1Range->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Range->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Type->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Notes->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Ammo->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Name->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Bonus->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Damage->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Crit->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Crit->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Damage->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Bonus->Font = Form1->FontDialog1->Font;
        Form1->Weapon2Name->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Range->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Type->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Notes->Font = Form1->FontDialog1->Font;
        Form1->Weapon3Ammo->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Name->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Bonus->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Damage->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Crit->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Notes->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Type->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Range->Font = Form1->FontDialog1->Font;
        Form1->Weapon4Ammo->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Name->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Bonus->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Damage->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Crit->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Notes->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Type->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Range->Font = Form1->FontDialog1->Font;
        Form1->Weapon5Ammo->Font = Form1->FontDialog1->Font;
        Form1->AppraiseRanks->Font = Form1->FontDialog1->Font;
        Form1->BalanceRanks->Font = Form1->FontDialog1->Font;
        Form1->BluffRanks->Font = Form1->FontDialog1->Font;
        Form1->ClimbRanks->Font = Form1->FontDialog1->Font;
        Form1->ConcentrationRanks->Font = Form1->FontDialog1->Font;
        Form1->Craft1Ranks->Font = Form1->FontDialog1->Font;
        Form1->Craft2Ranks->Font = Form1->FontDialog1->Font;
        Form1->Craft3Ranks->Font = Form1->FontDialog1->Font;
        Form1->DecipherRanks->Font = Form1->FontDialog1->Font;
        Form1->DiplomacyRanks->Font = Form1->FontDialog1->Font;
        Form1->DisableRanks->Font = Form1->FontDialog1->Font;
        Form1->DisguiseRanks->Font = Form1->FontDialog1->Font;
        Form1->EscapeRanks->Font = Form1->FontDialog1->Font;
        Form1->ForgeryRanks->Font = Form1->FontDialog1->Font;
        Form1->GatherRanks->Font = Form1->FontDialog1->Font;
        Form1->HandleRanks->Font = Form1->FontDialog1->Font;
        Form1->HealRanks->Font = Form1->FontDialog1->Font;
        Form1->HideRanks->Font = Form1->FontDialog1->Font;
        Form1->IntimidateRanks->Font = Form1->FontDialog1->Font;
        Form1->JumpRanks->Font = Form1->FontDialog1->Font;
        Form1->Knowledge1Ranks->Font = Form1->FontDialog1->Font;
        Form1->Knowledge2Ranks->Font = Form1->FontDialog1->Font;
        Form1->Knowledge3Ranks->Font = Form1->FontDialog1->Font;
        Form1->Knowledge4Ranks->Font = Form1->FontDialog1->Font;
        Form1->Knowledge5Ranks->Font = Form1->FontDialog1->Font;
        Form1->ListenRanks->Font = Form1->FontDialog1->Font;
        Form1->MoveRanks->Font = Form1->FontDialog1->Font;
        Form1->OpenRanks->Font = Form1->FontDialog1->Font;
        Form1->Perform1Ranks->Font = Form1->FontDialog1->Font;
        Form1->Perform2Ranks->Font = Form1->FontDialog1->Font;
        Form1->Perform3Ranks->Font = Form1->FontDialog1->Font;
        Form1->Profession1Ranks->Font = Form1->FontDialog1->Font;
        Form1->Profession2Ranks->Font = Form1->FontDialog1->Font;
        Form1->RideRanks->Font = Form1->FontDialog1->Font;
        Form1->SearchRanks->Font = Form1->FontDialog1->Font;
        Form1->SenseRanks->Font = Form1->FontDialog1->Font;
        Form1->SleightRanks->Font = Form1->FontDialog1->Font;
        Form1->SpellcraftRanks->Font = Form1->FontDialog1->Font;
        Form1->SpotRanks->Font = Form1->FontDialog1->Font;
        Form1->SurvivalRanks->Font = Form1->FontDialog1->Font;
        Form1->SwimRanks->Font = Form1->FontDialog1->Font;
        Form1->TumbleRanks->Font = Form1->FontDialog1->Font;
        Form1->UseMagicRanks->Font = Form1->FontDialog1->Font;
        Form1->UseRopeRanks->Font = Form1->FontDialog1->Font;
        Form1->Misc1Ranks->Font = Form1->FontDialog1->Font;
        Form1->Misc2Ranks->Font = Form1->FontDialog1->Font;
        Form1->Misc3Ranks->Font = Form1->FontDialog1->Font;
        Form1->AppraiseMisc->Font = Form1->FontDialog1->Font;
        Form1->BalanceMisc->Font = Form1->FontDialog1->Font;
        Form1->BluffMisc->Font = Form1->FontDialog1->Font;
        Form1->ClimbMisc->Font = Form1->FontDialog1->Font;
        Form1->ConcentrationMisc->Font = Form1->FontDialog1->Font;
        Form1->Craft1Misc->Font = Form1->FontDialog1->Font;
        Form1->Craft2Misc->Font = Form1->FontDialog1->Font;
        Form1->Craft3Misc->Font = Form1->FontDialog1->Font;
        Form1->DecipherMisc->Font = Form1->FontDialog1->Font;
        Form1->DiplomacyMisc->Font = Form1->FontDialog1->Font;
        Form1->DisableMisc->Font = Form1->FontDialog1->Font;
        Form1->DisguiseMisc->Font = Form1->FontDialog1->Font;
        Form1->EscapeMisc->Font = Form1->FontDialog1->Font;
        Form1->ForgeryMisc->Font = Form1->FontDialog1->Font;
        Form1->GatherMisc->Font = Form1->FontDialog1->Font;
        Form1->HandleMisc->Font = Form1->FontDialog1->Font;
        Form1->HealMisc->Font = Form1->FontDialog1->Font;
        Form1->HideMisc->Font = Form1->FontDialog1->Font;
        Form1->IntimidateMisc->Font = Form1->FontDialog1->Font;
        Form1->JumpMisc->Font = Form1->FontDialog1->Font;
        Form1->Knowledge1Misc->Font = Form1->FontDialog1->Font;
        Form1->Knowledge2Misc->Font = Form1->FontDialog1->Font;
        Form1->Knowledge3Misc->Font = Form1->FontDialog1->Font;
        Form1->Knowledge4Misc->Font = Form1->FontDialog1->Font;
        Form1->Knowledge5Misc->Font = Form1->FontDialog1->Font;
        Form1->ListenMisc->Font = Form1->FontDialog1->Font;
        Form1->MoveMisc->Font = Form1->FontDialog1->Font;
        Form1->OpenMisc->Font = Form1->FontDialog1->Font;
        Form1->Perform1Misc->Font = Form1->FontDialog1->Font;
        Form1->Perform2Misc->Font = Form1->FontDialog1->Font;
        Form1->Perform3Misc->Font = Form1->FontDialog1->Font;
        Form1->Profession1Misc->Font = Form1->FontDialog1->Font;
        Form1->Profession2Misc->Font = Form1->FontDialog1->Font;
        Form1->RideMisc->Font = Form1->FontDialog1->Font;
        Form1->SearchMisc->Font = Form1->FontDialog1->Font;
        Form1->SenseMisc->Font = Form1->FontDialog1->Font;
        Form1->SleightMisc->Font = Form1->FontDialog1->Font;
        Form1->SpellcraftMisc->Font = Form1->FontDialog1->Font;
        Form1->SpotMisc->Font = Form1->FontDialog1->Font;
        Form1->SurvivalMisc->Font = Form1->FontDialog1->Font;
        Form1->SwimMisc->Font = Form1->FontDialog1->Font;
        Form1->TumbleMisc->Font = Form1->FontDialog1->Font;
        Form1->UseMagicMisc->Font = Form1->FontDialog1->Font;
        Form1->UseRopeMisc->Font = Form1->FontDialog1->Font;
        Form1->Misc1Misc->Font = Form1->FontDialog1->Font;
        Form1->Misc2Misc->Font = Form1->FontDialog1->Font;
        Form1->Misc3Misc->Font = Form1->FontDialog1->Font;
        Form1->Misc1Ability->Font = Form1->FontDialog1->Font;
        Form1->Misc2Ability->Font = Form1->FontDialog1->Font;
        Form1->Misc3Ability->Font = Form1->FontDialog1->Font;
        Form1->Craft1Edit->Font = Form1->FontDialog1->Font;
        Form1->Craft2Edit->Font = Form1->FontDialog1->Font;
        Form1->Craft3Edit->Font = Form1->FontDialog1->Font;
        Form1->Knowledge1Edit->Font = Form1->FontDialog1->Font;
        Form1->Knowledge2Edit->Font = Form1->FontDialog1->Font;
        Form1->Knowledge3Edit->Font = Form1->FontDialog1->Font;
        Form1->Knowledge4Edit->Font = Form1->FontDialog1->Font;
        Form1->Knowledge5Edit->Font = Form1->FontDialog1->Font;
        Form1->Perform1Edit->Font = Form1->FontDialog1->Font;
        Form1->Perform2Edit->Font = Form1->FontDialog1->Font;
        Form1->Perform3Edit->Font = Form1->FontDialog1->Font;
        Form1->Profession1Edit->Font = Form1->FontDialog1->Font;
        Form1->Profession2Edit->Font = Form1->FontDialog1->Font;
        Form1->Misc1Edit->Font = Form1->FontDialog1->Font;
        Form1->Misc2Edit->Font = Form1->FontDialog1->Font;
        Form1->Misc3Edit->Font = Form1->FontDialog1->Font;
        Form1->HP->Font = Form1->FontDialog1->Font;
        Form1->NaturalArmor->Font = Form1->FontDialog1->Font;
        Form1->DeflectionMod->Font = Form1->FontDialog1->Font;
        Form1->ArmorMiscMod->Font = Form1->FontDialog1->Font;
        Form1->InitMiscMod->Font = Form1->FontDialog1->Font;
        Form1->CharName->Font = Form1->FontDialog1->Font;
        Form1->Player->Font = Form1->FontDialog1->Font;
        Form1->StrScr->Font = Form1->FontDialog1->Font;
        Form1->RefTemp->Font = Form1->FontDialog1->Font;
        Form1->WillTemp->Font = Form1->FontDialog1->Font;
        Form1->FortTemp->Font = Form1->FontDialog1->Font;
        Form1->Wounds->Font = Form1->FontDialog1->Font;
        Form1->Nonlethal->Font = Form1->FontDialog1->Font;
        Form1->Speed->Font = Form1->FontDialog1->Font;
        Form1->DamageReduction->Font = Form1->FontDialog1->Font;
        Form1->MaxRanks->Font = Form1->FontDialog1->Font;
        Form1->Race->Font = Form1->FontDialog1->Font;
        Form1->Alignment->Font = Form1->FontDialog1->Font;
        Form1->Deity->Font = Form1->FontDialog1->Font;
        Form1->Age->Font = Form1->FontDialog1->Font;
        Form1->Gender->Font = Form1->FontDialog1->Font;
        Form1->Height->Font = Form1->FontDialog1->Font;
        Form1->Weight->Font = Form1->FontDialog1->Font;
        Form1->Eyes->Font = Form1->FontDialog1->Font;
        Form1->Hair->Font = Form1->FontDialog1->Font;
        Form1->Skin->Font = Form1->FontDialog1->Font;
        Form1->StrTScr->Font = Form1->FontDialog1->Font;
        Form1->DexTScr->Font = Form1->FontDialog1->Font;
        Form1->DexScr->Font = Form1->FontDialog1->Font;
        Form1->ConScr->Font = Form1->FontDialog1->Font;
        Form1->ConTScr->Font = Form1->FontDialog1->Font;
        Form1->IntTScr->Font = Form1->FontDialog1->Font;
        Form1->IntScr->Font = Form1->FontDialog1->Font;
        Form1->WisScr->Font = Form1->FontDialog1->Font;
        Form1->WisTScr->Font = Form1->FontDialog1->Font;
        Form1->ChaTScr->Font = Form1->FontDialog1->Font;
        Form1->ChaScr->Font = Form1->FontDialog1->Font;
        Form1->FortBase->Font = Form1->FontDialog1->Font;
        Form1->FortMagic->Font = Form1->FontDialog1->Font;
        Form1->FortMiscMod->Font = Form1->FontDialog1->Font;
        Form1->RefMiscMod->Font = Form1->FontDialog1->Font;
        Form1->RefMagic->Font = Form1->FontDialog1->Font;
        Form1->RefBase->Font = Form1->FontDialog1->Font;
        Form1->WillBase->Font = Form1->FontDialog1->Font;
        Form1->WillMagic->Font = Form1->FontDialog1->Font;
        Form1->WillMiscMod->Font = Form1->FontDialog1->Font;
        Form1->BAB->Font = Form1->FontDialog1->Font;
        Form1->SpellResistance->Font = Form1->FontDialog1->Font;
        Form1->GrappleMiscMod->Font = Form1->FontDialog1->Font;
        Form1->StrScr->Font = Form1->FontDialog1->Font;
        Form1->RefTemp->Font = Form1->FontDialog1->Font;
        Form1->WillTemp->Font = Form1->FontDialog1->Font;
        Form1->FortTemp->Font = Form1->FontDialog1->Font;
        Form1->Wounds->Font = Form1->FontDialog1->Font;
        Form1->Nonlethal->Font = Form1->FontDialog1->Font;
        Form1->Speed->Font = Form1->FontDialog1->Font;
        Form1->DamageReduction->Font = Form1->FontDialog1->Font;
        Form1->MaxRanks->Font = Form1->FontDialog1->Font;
        Form1->SpellSaveAbility->Font = Form1->FontDialog1->Font;
        Form1->Size->Font = Form1->FontDialog1->Font;
}
void ApplyLabelFontChanges()
{
        Form1->FlatfootAC->Font = Form1->FontDialog1->Font;
        Form1->AppraiseModL->Font = Form1->FontDialog1->Font;
        Form1->BalanceModL->Font = Form1->FontDialog1->Font;
        Form1->BluffModL->Font = Form1->FontDialog1->Font;
        Form1->ClimbModL->Font = Form1->FontDialog1->Font;
        Form1->ConcentrationModL->Font = Form1->FontDialog1->Font;
        Form1->Craft1ModL->Font = Form1->FontDialog1->Font;
        Form1->Craft2ModL->Font = Form1->FontDialog1->Font;
        Form1->Craft3ModL->Font = Form1->FontDialog1->Font;
        Form1->DecipherModL->Font = Form1->FontDialog1->Font;
        Form1->DiplomacyModL->Font = Form1->FontDialog1->Font;
        Form1->DisableModL->Font = Form1->FontDialog1->Font;
        Form1->DisguiseModL->Font = Form1->FontDialog1->Font;
        Form1->EscapeModL->Font = Form1->FontDialog1->Font;
        Form1->ForgeryModL->Font = Form1->FontDialog1->Font;
        Form1->GatherModL->Font = Form1->FontDialog1->Font;
        Form1->HandleModL->Font = Form1->FontDialog1->Font;
        Form1->HealModL->Font = Form1->FontDialog1->Font;
        Form1->HideModL->Font = Form1->FontDialog1->Font;
        Form1->IntimidateModL->Font = Form1->FontDialog1->Font;
        Form1->JumpModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge1ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge2ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge3ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge4ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge5ModL->Font = Form1->FontDialog1->Font;
        Form1->ListenModL->Font = Form1->FontDialog1->Font;
        Form1->MoveModL->Font = Form1->FontDialog1->Font;
        Form1->OpenModL->Font = Form1->FontDialog1->Font;
        Form1->Perform1ModL->Font = Form1->FontDialog1->Font;
        Form1->Perform2ModL->Font = Form1->FontDialog1->Font;
        Form1->Perform3ModL->Font = Form1->FontDialog1->Font;
        Form1->Profession1ModL->Font = Form1->FontDialog1->Font;
        Form1->Profession2ModL->Font = Form1->FontDialog1->Font;
        Form1->RideModL->Font = Form1->FontDialog1->Font;
        Form1->SearchModL->Font = Form1->FontDialog1->Font;
        Form1->SenseModL->Font = Form1->FontDialog1->Font;
        Form1->SleightModL->Font = Form1->FontDialog1->Font;
        Form1->SpellcraftModL->Font = Form1->FontDialog1->Font;
        Form1->SpotModL->Font = Form1->FontDialog1->Font;
        Form1->SurvivalModL->Font = Form1->FontDialog1->Font;
        Form1->SwimModL->Font = Form1->FontDialog1->Font;
        Form1->TumbleModL->Font = Form1->FontDialog1->Font;
        Form1->UseMagicModL->Font = Form1->FontDialog1->Font;
        Form1->UseRopeModL->Font = Form1->FontDialog1->Font;
        Form1->Misc1ModL->Font = Form1->FontDialog1->Font;
        Form1->Misc2ModL->Font = Form1->FontDialog1->Font;
        Form1->Misc3ModL->Font = Form1->FontDialog1->Font;
        Form1->ACTotalL->Font = Form1->FontDialog1->Font;
        Form1->TouchAC->Font = Form1->FontDialog1->Font;
        Form1->InitModL->Font = Form1->FontDialog1->Font;
        Form1->FortModL->Font = Form1->FontDialog1->Font;
        Form1->RefModL->Font = Form1->FontDialog1->Font;
        Form1->WillModL->Font = Form1->FontDialog1->Font;
        Form1->GrappleMod->Font = Form1->FontDialog1->Font;
        Form1->ACArmorBonusL->Font = Form1->FontDialog1->Font;
        Form1->ACShieldBonusL->Font = Form1->FontDialog1->Font;
        Form1->ACDexModL->Font = Form1->FontDialog1->Font;
        Form1->InitDexModL->Font = Form1->FontDialog1->Font;
        Form1->FortConModL->Font = Form1->FontDialog1->Font;
        Form1->RefDexModL->Font = Form1->FontDialog1->Font;
        Form1->WillWisModL->Font = Form1->FontDialog1->Font;
        Form1->GrappleBAB->Font = Form1->FontDialog1->Font;
        Form1->GrappleStrMod->Font = Form1->FontDialog1->Font;
        Form1->AppraiseAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->BalanceAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ClimbAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->BluffAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Craft3AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Craft2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Craft1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ConcentrationAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DisguiseAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DisableAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DiplomacyAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DecipherAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->HandleAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->GatherAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ForgeryAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->EscapeAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge3AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge4AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge5AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ListenAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->JumpAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->IntimidateAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->HideAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->HealAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Profession2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->RideAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SearchAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SenseAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Perform3AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Profession1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Perform2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Perform1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->OpenAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->MoveAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->UseMagicAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->UseRopeAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SwimAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->TumbleAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SurvivalAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SpotAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SpellcraftAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SleightAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->StrModL->Font = Form1->FontDialog1->Font;
        Form1->DexModL->Font = Form1->FontDialog1->Font;
        Form1->ConModL->Font = Form1->FontDialog1->Font;
        Form1->IntModL->Font = Form1->FontDialog1->Font;
        Form1->WisModL->Font = Form1->FontDialog1->Font;
        Form1->ChaModL->Font = Form1->FontDialog1->Font;
        Form1->StrTModL->Font = Form1->FontDialog1->Font;
        Form1->DexTModL->Font = Form1->FontDialog1->Font;
        Form1->ConTModL->Font = Form1->FontDialog1->Font;
        Form1->IntTModL->Font = Form1->FontDialog1->Font;
        Form1->WisTModL->Font = Form1->FontDialog1->Font;
        Form1->ChaTModL->Font = Form1->FontDialog1->Font;
        Form1->ACSizeMod->Font = Form1->FontDialog1->Font;
        Form1->GrappleSizeMod->Font = Form1->FontDialog1->Font;
        Form1->FlatfootAC->Font = Form1->FontDialog1->Font;
        Form1->AppraiseModL->Font = Form1->FontDialog1->Font;
        Form1->BalanceModL->Font = Form1->FontDialog1->Font;
        Form1->BluffModL->Font = Form1->FontDialog1->Font;
        Form1->ClimbModL->Font = Form1->FontDialog1->Font;
        Form1->ConcentrationModL->Font = Form1->FontDialog1->Font;
        Form1->Craft1ModL->Font = Form1->FontDialog1->Font;
        Form1->Craft2ModL->Font = Form1->FontDialog1->Font;
        Form1->Craft3ModL->Font = Form1->FontDialog1->Font;
        Form1->DecipherModL->Font = Form1->FontDialog1->Font;
        Form1->DiplomacyModL->Font = Form1->FontDialog1->Font;
        Form1->DisableModL->Font = Form1->FontDialog1->Font;
        Form1->DisguiseModL->Font = Form1->FontDialog1->Font;
        Form1->EscapeModL->Font = Form1->FontDialog1->Font;
        Form1->ForgeryModL->Font = Form1->FontDialog1->Font;
        Form1->GatherModL->Font = Form1->FontDialog1->Font;
        Form1->HandleModL->Font = Form1->FontDialog1->Font;
        Form1->HealModL->Font = Form1->FontDialog1->Font;
        Form1->HideModL->Font = Form1->FontDialog1->Font;
        Form1->IntimidateModL->Font = Form1->FontDialog1->Font;
        Form1->JumpModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge1ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge2ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge3ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge4ModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge5ModL->Font = Form1->FontDialog1->Font;
        Form1->ListenModL->Font = Form1->FontDialog1->Font;
        Form1->MoveModL->Font = Form1->FontDialog1->Font;
        Form1->OpenModL->Font = Form1->FontDialog1->Font;
        Form1->Perform1ModL->Font = Form1->FontDialog1->Font;
        Form1->Perform2ModL->Font = Form1->FontDialog1->Font;
        Form1->Perform3ModL->Font = Form1->FontDialog1->Font;
        Form1->Profession1ModL->Font = Form1->FontDialog1->Font;
        Form1->Profession2ModL->Font = Form1->FontDialog1->Font;
        Form1->RideModL->Font = Form1->FontDialog1->Font;
        Form1->SearchModL->Font = Form1->FontDialog1->Font;
        Form1->SenseModL->Font = Form1->FontDialog1->Font;
        Form1->SleightModL->Font = Form1->FontDialog1->Font;
        Form1->SpellcraftModL->Font = Form1->FontDialog1->Font;
        Form1->SpotModL->Font = Form1->FontDialog1->Font;
        Form1->SurvivalModL->Font = Form1->FontDialog1->Font;
        Form1->SwimModL->Font = Form1->FontDialog1->Font;
        Form1->TumbleModL->Font = Form1->FontDialog1->Font;
        Form1->UseMagicModL->Font = Form1->FontDialog1->Font;
        Form1->UseRopeModL->Font = Form1->FontDialog1->Font;
        Form1->Misc1ModL->Font = Form1->FontDialog1->Font;
        Form1->Misc2ModL->Font = Form1->FontDialog1->Font;
        Form1->Misc3ModL->Font = Form1->FontDialog1->Font;
        Form1->ACTotalL->Font = Form1->FontDialog1->Font;
        Form1->TouchAC->Font = Form1->FontDialog1->Font;
        Form1->InitModL->Font = Form1->FontDialog1->Font;
        Form1->FortModL->Font = Form1->FontDialog1->Font;
        Form1->RefModL->Font = Form1->FontDialog1->Font;
        Form1->WillModL->Font = Form1->FontDialog1->Font;
        Form1->GrappleMod->Font = Form1->FontDialog1->Font;
        Form1->ACArmorBonusL->Font = Form1->FontDialog1->Font;
        Form1->ACShieldBonusL->Font = Form1->FontDialog1->Font;
        Form1->ACDexModL->Font = Form1->FontDialog1->Font;
        Form1->InitDexModL->Font = Form1->FontDialog1->Font;
        Form1->FortConModL->Font = Form1->FontDialog1->Font;
        Form1->RefDexModL->Font = Form1->FontDialog1->Font;
        Form1->WillWisModL->Font = Form1->FontDialog1->Font;
        Form1->GrappleBAB->Font = Form1->FontDialog1->Font;
        Form1->GrappleStrMod->Font = Form1->FontDialog1->Font;
        Form1->AppraiseAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->BalanceAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ClimbAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->BluffAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Craft3AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Craft2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Craft1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ConcentrationAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DisguiseAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DisableAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DiplomacyAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->DecipherAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->HandleAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->GatherAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ForgeryAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->EscapeAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge3AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge4AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge5AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->ListenAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Knowledge2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->JumpAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->IntimidateAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->HideAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->HealAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Profession2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->RideAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SearchAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SenseAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Perform3AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Profession1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Perform2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Perform1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->OpenAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->MoveAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->UseMagicAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->UseRopeAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SwimAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->TumbleAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SurvivalAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SpotAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SpellcraftAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SleightAbilityModL->Font = Form1->FontDialog1->Font;
        Form1->StrModL->Font = Form1->FontDialog1->Font;
        Form1->DexModL->Font = Form1->FontDialog1->Font;
        Form1->ConModL->Font = Form1->FontDialog1->Font;
        Form1->IntModL->Font = Form1->FontDialog1->Font;
        Form1->WisModL->Font = Form1->FontDialog1->Font;
        Form1->ChaModL->Font = Form1->FontDialog1->Font;
        Form1->StrTModL->Font = Form1->FontDialog1->Font;
        Form1->DexTModL->Font = Form1->FontDialog1->Font;
        Form1->ConTModL->Font = Form1->FontDialog1->Font;
        Form1->IntTModL->Font = Form1->FontDialog1->Font;
        Form1->WisTModL->Font = Form1->FontDialog1->Font;
        Form1->ChaTModL->Font = Form1->FontDialog1->Font;
        Form1->ACSizeMod->Font = Form1->FontDialog1->Font;
        Form1->GrappleSizeMod->Font = Form1->FontDialog1->Font;
        Form1->SpellFailureL->Font = Form1->FontDialog1->Font;
        Form1->SpellSave0->Font = Form1->FontDialog1->Font;
        Form1->SpellSave1->Font = Form1->FontDialog1->Font;
        Form1->SpellSave2->Font = Form1->FontDialog1->Font;
        Form1->SpellSave3->Font = Form1->FontDialog1->Font;
        Form1->SpellSave4->Font = Form1->FontDialog1->Font;
        Form1->SpellSave5->Font = Form1->FontDialog1->Font;
        Form1->SpellSave6->Font = Form1->FontDialog1->Font;
        Form1->SpellSave7->Font = Form1->FontDialog1->Font;
        Form1->SpellSave8->Font = Form1->FontDialog1->Font;
        Form1->SpellSave9->Font = Form1->FontDialog1->Font;
        Form1->LightLoad->Font = Form1->FontDialog1->Font;
        Form1->MediumLoad->Font = Form1->FontDialog1->Font;
        Form1->HeavyLoad->Font = Form1->FontDialog1->Font;
        Form1->LiftOverHead->Font = Form1->FontDialog1->Font;
        Form1->LiftOffGround->Font = Form1->FontDialog1->Font;
        Form1->PushDrag->Font = Form1->FontDialog1->Font;
        Form1->Misc1AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Misc2AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->Misc3AbilityModL->Font = Form1->FontDialog1->Font;
        Form1->SpellSaveMod->Font = Form1->FontDialog1->Font;
}

void ApplySmallMemoFontChanges()
{
        Form1->SpellCondMod->Font = Form1->FontDialog1->Font;
	Form1->CondSave->Font = Form1->FontDialog1->Font;
}

void ApplyLargeMemoFontChanges()
{
        Form1->Spells->Font = Form1->FontDialog1->Font;
        Form1->Feats->Font = Form1->FontDialog1->Font;
        Form1->SpecialAbilities->Font = Form1->FontDialog1->Font;
        Form1->Languages->Font = Form1->FontDialog1->Font;
        Form1->Money->Font = Form1->FontDialog1->Font;
        Form1->OtherPossessions->Font = Form1->FontDialog1->Font;
}

void ApplyMiscNotesFontChanges()
{
        Form1->MiscNotes->Font = Form1->FontDialog1->Font;
}

void ApplyRollLogFontChanges()
{
        Form1->RollLog->Font = Form1->FontDialog1->Font;
}

void __fastcall TForm1::AllFontOptionsClick(TObject *Sender)
{
        FontDialog1->Tag = 0;
        FontDialog1->Font = CharName->Font;
        if (FontDialog1->Execute())
        {
                ApplyLabelFontChanges();
                ApplyTextBoxFontChanges();
                ApplySmallMemoFontChanges();
                ApplyLargeMemoFontChanges();
                ApplyMiscNotesFontChanges();
                ApplyRollLogFontChanges();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LabelFonts1Click(TObject *Sender)
{
        FontDialog1->Tag = 1;
        FontDialog1->Font = ACTotalL->Font;
        if (FontDialog1->Execute())
                ApplyLabelFontChanges();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TextboxFonts1Click(TObject *Sender)
{
        FontDialog1->Tag = 2;
        FontDialog1->Font = CharName->Font;
        if (FontDialog1->Execute())
                ApplyTextBoxFontChanges();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SmallMemoFonts1Click(TObject *Sender)
{
        FontDialog1->Tag = 3;
        FontDialog1->Font = CondSave->Font;
        if (FontDialog1->Execute())
                ApplySmallMemoFontChanges();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LargeMemoFonts1Click(TObject *Sender)
{
        FontDialog1->Tag = 4;
        FontDialog1->Font = CharName->Font;
        if (FontDialog1->Execute())
                ApplyLargeMemoFontChanges();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Page3Font1Click(TObject *Sender)
{
        FontDialog1->Tag = 5;
        FontDialog1->Font = MiscNotes->Font;
        if (FontDialog1->Execute())
                ApplyMiscNotesFontChanges();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DiceRollerLog1Click(TObject *Sender)
{
        FontDialog1->Tag = 6;
        FontDialog1->Font = RollLog->Font;
        if (FontDialog1->Execute())
                ApplyRollLogFontChanges();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FontDialog1Apply(TObject *Sender, HWND Wnd)
{
        switch(FontDialog1->Tag)
        {
        case 0: ApplyLabelFontChanges();
                ApplyTextBoxFontChanges();
                ApplySmallMemoFontChanges();
                ApplyLargeMemoFontChanges();
                ApplyMiscNotesFontChanges();
                ApplyRollLogFontChanges();
                break;
        case 1: ApplyLabelFontChanges();
                break;
        case 2: ApplyTextBoxFontChanges();
                break;
        case 3: ApplySmallMemoFontChanges();
                break;
        case 4: ApplyLargeMemoFontChanges();
                break;
        case 5: ApplyMiscNotesFontChanges();
                break;
        case 6: ApplyRollLogFontChanges();
                break;
        }
}
//---------------------------------------------------------------------------

//Update Dice Roller buttons with what the actual customizable skill is
void __fastcall TForm1::Craft1EditChange(TObject *Sender)
{
        if (Craft1Edit->Text == "")
                RollCraft1->Caption = "Craft 1";
        else
                RollCraft1->Caption = "Craft (" + Craft1Edit->Text + ")";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Craft2EditChange(TObject *Sender)
{
        if (Craft2Edit->Text == "")
                RollCraft2->Caption = "Craft 2";
        else
                RollCraft2->Caption = "Craft (" + Craft2Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Craft3EditChange(TObject *Sender)
{
        if (Craft3Edit->Text == "")
                RollCraft3->Caption = "Craft 3";
        else
                RollCraft3->Caption = "Craft (" + Craft3Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge1EditChange(TObject *Sender)
{
        if (Knowledge1Edit->Text == "")
                RollKnowledge1->Caption = "Knowledge 1";
        else
                RollKnowledge1->Caption = "Knowledge (" + Knowledge1Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge2EditChange(TObject *Sender)
{
        if (Knowledge2Edit->Text == "")
                RollKnowledge2->Caption = "Knowledge 2";
        else
                RollKnowledge2->Caption = "Knowledge (" + Knowledge2Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge3EditChange(TObject *Sender)
{
        if (Knowledge3Edit->Text == "")
                RollKnowledge3->Caption = "Knowledge 3";
        else
                RollKnowledge3->Caption = "Knowledge (" + Knowledge3Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge4EditChange(TObject *Sender)
{
        if (Knowledge4Edit->Text == "")
                RollKnowledge4->Caption = "Knowledge 4";
        else
                RollKnowledge4->Caption = "Knowledge (" + Knowledge4Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Knowledge5EditChange(TObject *Sender)
{
        if (Knowledge5Edit->Text == "")
                RollKnowledge5->Caption = "Knowledge 5";
        else
                RollKnowledge5->Caption = "Knowledge (" + Knowledge5Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform1EditChange(TObject *Sender)
{
        if (Perform1Edit->Text == "")
                RollPerform1->Caption = "Perform 1";
        else
                RollPerform1->Caption = "Perform (" + Perform1Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform2EditChange(TObject *Sender)
{
        if (Perform2Edit->Text == "")
                RollPerform2->Caption = "Perform 2";
        else
                RollPerform2->Caption = "Perform (" + Perform2Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Perform3EditChange(TObject *Sender)
{
        if (Perform3Edit->Text == "")
                RollPerform3->Caption = "Perform 3";
        else
                RollPerform3->Caption = "Perform (" + Perform3Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Profession1EditChange(TObject *Sender)
{
        if (Profession1Edit->Text == "")
                RollProfession1->Caption = "Profession 1";
        else
                RollProfession1->Caption = "Profession (" + Profession1Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Profession2EditChange(TObject *Sender)
{
        if (Profession2Edit->Text == "")
                RollProfession2->Caption = "Profession 2";
        else
                RollProfession2->Caption = "Profession (" + Profession2Edit->Text + ")";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc1EditChange(TObject *Sender)
{
        if (Misc1Edit->Text == "")
                RollCustom1->Caption = "Custom 1";
        else
                RollCustom1->Caption = Misc1Edit->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc2EditChange(TObject *Sender)
{
        if (Misc2Edit->Text == "")
                RollCustom2->Caption = "Custom 2";
        else
                RollCustom2->Caption = Misc2Edit->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Misc3EditChange(TObject *Sender)
{
        if (Misc3Edit->Text == "")
                RollCustom3->Caption = "Custom 3";
        else
                RollCustom3->Caption = Misc3Edit->Text;
}
//---------------------------------------------------------------------------

//Yay, finally done ^_^
//Wow that was a lot of code... I hope you enjoyed this little app
//Feel free to e-mail me with questions about the code, blah blah blah

//Peace out.


void __fastcall TForm1::Scaleto10241Click(TObject *Sender)
{
        if (Screen->Width >= 1024 && Form1->Width != 1019)
        {
                ScaleBy(1024,800);
                Constraints->MaxWidth = 1019;
                Constraints->MinWidth = 1019;
                Page1BGLarge->Visible = true;
                Page1BG->Visible = false;
                Page2BGLarge->Visible = true;
                Page2BG->Visible = false;
        }
        else if (Form1->Width != 795)
        {
                ScaleBy(800,1024);
                Constraints->MaxWidth = 795;
                Constraints->MinWidth = 795;
                Page1BGLarge->Visible = false;
                Page1BG->Visible = true;
                Page2BGLarge->Visible = false;
                Page2BG->Visible = true;
        }
        else
                ShowMessage("Resolution is not 1024x768 or higher.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSTRClick(TObject *Sender)
{
        int NaturalRoll, Result;
        NaturalRoll = Result = (rand()%20)+1;
        AnsiString RollDescription = "Strength Check: 1d20";
        if (StrTScr->Text == "")
        {
                RollDescription += StrModL->Caption;
                Result += StrModL->Caption.ToInt();
        }
        else
        {
                RollDescription += StrTModL->Caption;
                Result += StrTModL->Caption.ToInt();
        }
        RollDescription = RollDescription + " | Rolled: " + NaturalRoll + " | Result: " + Result;
        RollLog->Items->Insert(1, RollDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDEXClick(TObject *Sender)
{
        int NaturalRoll, Result;
        NaturalRoll = Result = (rand()%20)+1;
        AnsiString RollDescription = "Dexterity Check: 1d20";
        if (DexTScr->Text == "")
        {
                RollDescription += DexModL->Caption;
                Result += DexModL->Caption.ToInt();
        }
        else
        {
                RollDescription += DexTModL->Caption;
                Result += DexTModL->Caption.ToInt();
        }
        RollDescription = RollDescription + " | Rolled: " + NaturalRoll + " | Result: " + Result;
        RollLog->Items->Insert(1, RollDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCONClick(TObject *Sender)
{
        int NaturalRoll, Result;
        NaturalRoll = Result = (rand()%20)+1;
        AnsiString RollDescription = "Constitution Check: 1d20";
        if (ConTScr->Text == "")
        {
                RollDescription += ConModL->Caption;
                Result += ConModL->Caption.ToInt();
        }
        else
        {
                RollDescription += ConTModL->Caption;
                Result += ConTModL->Caption.ToInt();
        }
        RollDescription = RollDescription + " | Rolled: " + NaturalRoll + " | Result: " + Result;
        RollLog->Items->Insert(1, RollDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollINTClick(TObject *Sender)
{
        int NaturalRoll, Result;
        NaturalRoll = Result = (rand()%20)+1;
        AnsiString RollDescription = "Intelligence Check: 1d20";
        if (IntTScr->Text == "")
        {
                RollDescription += IntModL->Caption;
                Result += IntModL->Caption.ToInt();
        }
        else
        {
                RollDescription += IntTModL->Caption;
                Result += IntTModL->Caption.ToInt();
        }
        RollDescription = RollDescription + " | Rolled: " + NaturalRoll + " | Result: " + Result;
        RollLog->Items->Insert(1, RollDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollWISClick(TObject *Sender)
{
        int NaturalRoll, Result;
        NaturalRoll = Result = (rand()%20)+1;
        AnsiString RollDescription = "Wisdom Check: 1d20";
        if (WisTScr->Text == "")
        {
                RollDescription += WisModL->Caption;
                Result += WisModL->Caption.ToInt();
        }
        else
        {
                RollDescription += WisTModL->Caption;
                Result += WisTModL->Caption.ToInt();
        }
        RollDescription = RollDescription + " | Rolled: " + NaturalRoll + " | Result: " + Result;
        RollLog->Items->Insert(1, RollDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCHAClick(TObject *Sender)
{
        int NaturalRoll, Result;
        NaturalRoll = Result = (rand()%20)+1;
        AnsiString RollDescription = "Charisma Check: 1d20";
        if (ChaTScr->Text == "")
        {
                RollDescription += ChaModL->Caption;
                Result += ChaModL->Caption.ToInt();
        }
        else
        {
                RollDescription += ChaTModL->Caption;
                Result += ChaTModL->Caption.ToInt();
        }
        RollDescription = RollDescription + " | Rolled: " + NaturalRoll + " | Result: " + Result;
        RollLog->Items->Insert(1, RollDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollStatsClick(TObject *Sender)
{
        Form3->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShieldCheckChange(TObject *Sender)
{
        if(ShieldCheck->Text != "" && ShieldCheck->Text != "-")
        {
                BalanceCalculator();
                ClimbCalculator();
                EscapeCalculator();
                HideCalculator();
                JumpCalculator();
                MoveCalculator();
                SleightCalculator();
                SwimCalculator();
        }
}
//---------------------------------------------------------------------------

void Roll(int RollBonus, AnsiString Description)
{
        int NaturalRoll, Result;
        NaturalRoll = (rand()%20)+1;
        Result = NaturalRoll + RollBonus;
        if (RollBonus >= 0)
                Description = Description + "+" + RollBonus;
        else
                Description = Description + RollBonus;
        Description = Description + " | Rolled: " + NaturalRoll + " | Result: " + Result;
        Form1->RollLog->Items->Insert(1, Description);
}

void __fastcall TForm1::RollGrappleClick(TObject *Sender)
{
        Roll(GrappleMod->Caption.ToInt(), "Grapple Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollInitClick(TObject *Sender)
{
        Roll(InitModL->Caption.ToInt(), "Initiative: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollFortClick(TObject *Sender)
{
        Roll(FortModL->Caption.ToInt(), "Fortitude Save: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollReflexClick(TObject *Sender)
{
        Roll(RefModL->Caption.ToInt(), "Reflex Save: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollWillClick(TObject *Sender)
{
        Roll(WillModL->Caption.ToInt(), "Will Save: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollMeleeClick(TObject *Sender)
{
        int RollBonus = BAB->Text.ToInt() + StrModL->Caption.ToInt() + ACSizeMod->Caption.ToInt();
        Roll(RollBonus, "Standard Melee Attack: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollRangedClick(TObject *Sender)
{
        int RollBonus = BAB->Text.ToInt() + DexModL->Caption.ToInt() + ACSizeMod->Caption.ToInt();
        Roll(RollBonus, "Standard Ranged Attack: 1d20");
}
//---------------------------------------------------------------------------

void AttackBonusParser(AnsiString AttackBonus)
{
        AnsiString NumList[50], TheRoll = "";
        int First = 1, i, j = 0, k = 0, Total;
        for (i = 1; i <= AttackBonus.Length(); i++)
                if (AttackBonus[i] == ' ')
                        AttackBonus.Delete(i, 1);
        for (i = 2; i <= AttackBonus.Length(); i++)
        {
                       if (AttackBonus[i] == '\\' || AttackBonus[i] == '/')
                        {
                                NumList[j++] = AttackBonus.SubString(First,i-First);
                                NumList[j++] = AttackBonus[i];
                                First = i+1;
                        }
                        else if (AttackBonus[i] == '(' || AttackBonus[i] == ':')
                                break;
        }
        NumList[j++] = AttackBonus.SubString(First,i-First);
        for (i = j-1; i >= 0; i--)
                if (NumList[i] != "\\" && NumList[i] != "/")
                        k++;
        for (i = j-1; i >= 0; i--)
        {
                TheRoll = "";
                if (NumList[i] != "\\" && NumList[i] != "/")
                {
                        TheRoll = TheRoll + "     Attack " + k + " = 1d20";
                        Roll(NumList[i].ToInt(), TheRoll);
                        k--;
                }
        }
}

void __fastcall TForm1::RollAttack1Click(TObject *Sender)
{
        AnsiString AttackDescription;
        AttackBonusParser(Weapon1Bonus->Text);
        AttackDescription = "Attacking with " + Weapon1Name->Text + ":";
        RollLog->Items->Insert(1, AttackDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollAttack2Click(TObject *Sender)
{
        AnsiString AttackDescription;
        AttackBonusParser(Weapon2Bonus->Text);
        AttackDescription = "Attacking with " + Weapon2Name->Text + ":";
        RollLog->Items->Insert(1, AttackDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollAttack3Click(TObject *Sender)
{
        AnsiString AttackDescription;
        AttackBonusParser(Weapon3Bonus->Text);
        AttackDescription = "Attacking with " + Weapon3Name->Text + ":";
        RollLog->Items->Insert(1, AttackDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollAttack4Click(TObject *Sender)
{
        AnsiString AttackDescription;
        AttackBonusParser(Weapon4Bonus->Text);
        AttackDescription = "Attacking with " + Weapon4Name->Text + ":";
        RollLog->Items->Insert(1, AttackDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollAttack5Click(TObject *Sender)
{
        AnsiString AttackDescription;
        AttackBonusParser(Weapon5Bonus->Text);
        AttackDescription = "Attacking with " + Weapon5Name->Text + ":";
        RollLog->Items->Insert(1, AttackDescription);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rolld4Click(TObject *Sender)
{
        int i, l[50], Total = 0;
        AnsiString Roll;
        if (Numd4->Text.ToInt() > 50)
                ShowMessage("50 rolls is the maximum");
        else
        {
                Roll = "     Roll ";
                for (i = 0; i < Numd4->Text.ToInt(); i++)
                {
                        l[i] = (rand()%4)+1;
                        Roll = "     Roll ";
                        Roll = Roll + (Numd4->Text.ToInt()-i) + ": " + l[i];
                        RollLog->Items->Insert(1, Roll);
                }
                for (i = 0; i < Numd4->Text.ToInt(); i++)
                        Total += l[i];
                Roll = "Rolling: ";
                Roll = Roll + Numd4->Text.ToInt() + "d4: Total: " + Total + " | Average: " + float(Total)/Numd4->Text.ToInt();
                RollLog->Items->Insert(1, Roll);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rolld6Click(TObject *Sender)
{
        int i, l[50], Total = 0;
        AnsiString Roll;
        if (Numd4->Text.ToInt() > 50)
                ShowMessage("50 rolls is the maximum");
        else
        {
                Roll = "     Roll ";
                for (i = 0; i < Numd6->Text.ToInt(); i++)
                {
                        l[i] = (rand()%6)+1;
                        Roll = "     Roll ";
                        Roll = Roll + (Numd6->Text.ToInt()-i) + ": " + l[i];
                        RollLog->Items->Insert(1, Roll);
                }
                for (i = 0; i < Numd6->Text.ToInt(); i++)
                        Total += l[i];
                Roll = "Rolling: ";
                Roll = Roll + Numd6->Text.ToInt() + "d6: Total: " + Total + " | Average: " + float(Total)/Numd6->Text.ToInt();
                RollLog->Items->Insert(1, Roll);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rolld8Click(TObject *Sender)
{
        int i, l[50], Total = 0;
        AnsiString Roll;
        if (Numd8->Text.ToInt() > 50)
                ShowMessage("50 rolls is the maximum");
        else
        {
                Roll = "     Roll ";
                for (i = 0; i < Numd8->Text.ToInt(); i++)
                {
                        l[i] = (rand()%8)+1;
                        Roll = "     Roll ";
                        Roll = Roll + (Numd8->Text.ToInt()-i) + ": " + l[i];
                        RollLog->Items->Insert(1, Roll);
                }
                for (i = 0; i < Numd8->Text.ToInt(); i++)
                        Total += l[i];
                Roll = "Rolling: ";
                Roll = Roll + Numd8->Text.ToInt() + "d8: Total: " + Total + " | Average: " + float(Total)/Numd8->Text.ToInt();
                RollLog->Items->Insert(1, Roll);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rolld10Click(TObject *Sender)
{
        int i, l[50], Total = 0;
        AnsiString Roll;
        if (Numd10->Text.ToInt() > 50)
                ShowMessage("50 rolls is the maximum");
        else
        {
                Roll = "     Roll ";
                for (i = 0; i < Numd10->Text.ToInt(); i++)
                {
                        l[i] = (rand()%10)+1;
                        Roll = "     Roll ";
                        Roll = Roll + (Numd10->Text.ToInt()-i) + ": " + l[i];
                        RollLog->Items->Insert(1, Roll);
                }
                for (i = 0; i < Numd10->Text.ToInt(); i++)
                        Total += l[i];
                Roll = "Rolling: ";
                Roll = Roll + Numd10->Text.ToInt() + "d10: Total: " + Total + " | Average: " + float(Total)/Numd10->Text.ToInt();
                RollLog->Items->Insert(1, Roll);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rolld12Click(TObject *Sender)
{
        int i, l[50], Total = 0;
        AnsiString Roll;
        if (Numd12->Text.ToInt() > 50)
                ShowMessage("50 rolls is the maximum");
        else
        {
                Roll = "     Roll ";
                for (i = 0; i < Numd12->Text.ToInt(); i++)
                {
                        l[i] = (rand()%12)+1;
                        Roll = "     Roll ";
                        Roll = Roll + (Numd12->Text.ToInt()-i) + ": " + l[i];
                        RollLog->Items->Insert(1, Roll);
                }
                for (i = 0; i < Numd12->Text.ToInt(); i++)
                        Total += l[i];
                Roll = "Rolling: ";
                Roll = Roll + Numd12->Text.ToInt() + "d12: Total: " + Total + " | Average: " + float(Total)/Numd12->Text.ToInt();
                RollLog->Items->Insert(1, Roll);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rolld20Click(TObject *Sender)
{
        int i, l[50], Total = 0;
        AnsiString Roll;
        if (Numd20->Text.ToInt() > 50)
                ShowMessage("50 rolls is the maximum");
        else
        {
                Roll = "     Roll ";
                for (i = 0; i < Numd20->Text.ToInt(); i++)
                {
                        l[i] = (rand()%20)+1;
                        Roll = "     Roll ";
                        Roll = Roll + (Numd20->Text.ToInt()-i) + ": " + l[i];
                        RollLog->Items->Insert(1, Roll);
                }
                for (i = 0; i < Numd20->Text.ToInt(); i++)
                        Total += l[i];
                Roll = "Rolling: ";
                Roll = Roll + Numd20->Text.ToInt() + "d20: Total: " + Total + " | Average: " + float(Total)/Numd20->Text.ToInt();
                RollLog->Items->Insert(1, Roll);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rolld100Click(TObject *Sender)
{
        int i, l[50], Total = 0;
        AnsiString Roll;
        if (Numd100->Text.ToInt() > 50)
                ShowMessage("50 rolls is the maximum");
        else
        {
                Roll = "     Roll ";
                for (i = 0; i < Numd100->Text.ToInt(); i++)
                {
                        l[i] = (rand()%100)+1;
                        Roll = "     Roll ";
                        Roll = Roll + (Numd100->Text.ToInt()-i) + ": " + l[i];
                        RollLog->Items->Insert(1, Roll);
                }
                for (i = 0; i < Numd100->Text.ToInt(); i++)
                        Total += l[i];
                Roll = "Rolling: ";
                Roll = Roll + Numd100->Text.ToInt() + "d100: Total: " + Total + " | Average: " + float(Total)/Numd100->Text.ToInt();
                RollLog->Items->Insert(1, Roll);
        }
}
//---------------------------------------------------------------------------

int RollDice(int a, int b)
{
        int Total = 0, i;
        for (i = 0; i < a; i++)
                Total += (rand()%b)+1;
        return Total;
}

int DamageRollParser(AnsiString Roll)
{
        AnsiString NumList[50], Temp;
        int First = 1, i, j = 0, Total;
        if (Roll[1] == 'd' || Roll[1] == 'D')
                Roll = "1" + Roll;
        for (i = 2; i <= Roll.Length(); i++)
                if (Roll[i] == 'd' || Roll[i] == 'D')
                        if (Roll[i-1] <= '0' || Roll[i-1] >= '9')
                                Roll.Insert("1", i);
        for (i = 1; i <= Roll.Length(); i++)
                if (Roll[i] == ' ')
                        Roll.Delete(i, 1);
        for (i = 2; i <= Roll.Length(); i++)
        {
                       if (Roll[i] == '+' || Roll[i] == '-' || Roll[i] == 'd' || Roll[i] == 'D')
                        {
                                NumList[j++] = Roll.SubString(First,i-First);
                                NumList[j++] = Roll[i];
                                First = i+1;
                        }
                        else if (Roll[i] == '(' || Roll[i] == ':')
                                break;
        }
        NumList[j++] = Roll.SubString(First,i-First);
        for (i = 0; i < j; i++)
                if (NumList[i] == "d" || NumList[i] == "D")
                {
                        NumList[i-1] = RollDice(NumList[i-1].ToInt(),NumList[i+1].ToInt());
                        NumList[i] = 0;
                        NumList[i+1] = 0;
                        i++;
                }
        for (i = 0; i < j; i++)
                if (NumList[i] == "-")
                {
                        NumList[i++] = "+";
                        NumList[i++] = -(NumList[i].ToInt());
                }
        Total = 0;
        for (i = 0; i < j; i++)
                if (NumList[i] != "+")
                        Total += NumList[i].ToInt();
        return Total;
}

void __fastcall TForm1::RollDamage1Click(TObject *Sender)
{
        int Total = DamageRollParser(Weapon1Damage->Text);
        AnsiString Description = "Damage for " + Weapon1Name->Text + ": " + Weapon1Damage->Text + " | Result: " + Total;
        RollLog->Items->Insert(1,Description);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RollDamage2Click(TObject *Sender)
{
        int Total = DamageRollParser(Weapon2Damage->Text);
        AnsiString Description = "Damage for " + Weapon2Name->Text + ": " + Weapon2Damage->Text + " | Result: " + Total;
        RollLog->Items->Insert(1,Description);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDamage3Click(TObject *Sender)
{
        int Total = DamageRollParser(Weapon3Damage->Text);
        AnsiString Description = "Damage for " + Weapon3Name->Text + ": " + Weapon3Damage->Text + " | Result: " + Total;
        RollLog->Items->Insert(1,Description);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDamage4Click(TObject *Sender)
{
        int Total = DamageRollParser(Weapon4Damage->Text);
        AnsiString Description = "Damage for " + Weapon4Name->Text + ": " + Weapon4Damage->Text + " | Result: " + Total;
        RollLog->Items->Insert(1,Description);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDamage5Click(TObject *Sender)
{
        int Total = DamageRollParser(Weapon5Damage->Text);
        AnsiString Description = "Rolling Damage for " + Weapon5Name->Text + ": " + Weapon5Damage->Text + " | Result: " + Total;
        RollLog->Items->Insert(1,Description);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollAppraiseClick(TObject *Sender)
{
        Roll(AppraiseModL->Caption.ToInt(), "Appraise Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollBalanceClick(TObject *Sender)
{
        Roll(BalanceModL->Caption.ToInt(), "Balance Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollBluffClick(TObject *Sender)
{
        Roll(BluffModL->Caption.ToInt(), "Bluff Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollClimbClick(TObject *Sender)
{
        Roll(ClimbModL->Caption.ToInt(), "Climb Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollConcentrationClick(TObject *Sender)
{
        Roll(ConcentrationModL->Caption.ToInt(), "Concentration Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDecipherScriptClick(TObject *Sender)
{
        Roll(DecipherModL->Caption.ToInt(), "Decipher Script Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDiplomacyClick(TObject *Sender)
{
        Roll(DiplomacyModL->Caption.ToInt(), "Diplomacy Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDisableDeviceClick(TObject *Sender)
{
        Roll(DisableModL->Caption.ToInt(), "Disable Device Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollDisguiseClick(TObject *Sender)
{
        Roll(DisguiseModL->Caption.ToInt(), "Disguise Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
        Roll(EscapeModL->Caption.ToInt(), "Escape Artist Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollForgeryClick(TObject *Sender)
{
        Roll(ForgeryModL->Caption.ToInt(), "Forgery Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
        Roll(GatherModL->Caption.ToInt(), "Gather Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollHandleAnimalClick(TObject *Sender)
{
        Roll(HandleModL->Caption.ToInt(), "Handle Animal Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollHealClick(TObject *Sender)
{
        Roll(HealModL->Caption.ToInt(), "Heal Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollHideClick(TObject *Sender)
{
        Roll(HideModL->Caption.ToInt(), "Hide Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollIntimidateClick(TObject *Sender)
{
        Roll(IntimidateModL->Caption.ToInt(), "Intimidate Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollJumpClick(TObject *Sender)
{
        Roll(JumpModL->Caption.ToInt(), "Jump Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollListenClick(TObject *Sender)
{
        Roll(ListenModL->Caption.ToInt(), "Listen Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollMoveSilentClick(TObject *Sender)
{
        Roll(MoveModL->Caption.ToInt(), "Move Silently Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollOpenLockClick(TObject *Sender)
{
        Roll(OpenModL->Caption.ToInt(), "Open Lock Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollRideClick(TObject *Sender)
{
        Roll(RideModL->Caption.ToInt(), "Ride Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSearchClick(TObject *Sender)
{
        Roll(SearchModL->Caption.ToInt(), "Search Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSenseMotiveClick(TObject *Sender)
{
        Roll(SenseModL->Caption.ToInt(), "Sense Motive Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSleightofHandClick(TObject *Sender)
{
        Roll(SleightModL->Caption.ToInt(), "Sleight of Hand Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSpellcraftClick(TObject *Sender)
{
        Roll(SpellcraftModL->Caption.ToInt(), "Spellcraft Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSpotClick(TObject *Sender)
{
        Roll(SpotModL->Caption.ToInt(), "Spot Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSurvivalClick(TObject *Sender)
{
        Roll(SurvivalModL->Caption.ToInt(), "Survival Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollSwimClick(TObject *Sender)
{
        Roll(SwimModL->Caption.ToInt(), "Swim Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollTumbleClick(TObject *Sender)
{
        Roll(TumbleModL->Caption.ToInt(), "Tumble Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollUseMagicDeviceClick(TObject *Sender)
{
        Roll(UseMagicModL->Caption.ToInt(), "Use Magic Device Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollUseRopeClick(TObject *Sender)
{
        Roll(UseRopeModL->Caption.ToInt(), "Use Rope Check: 1d20");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCustom1Click(TObject *Sender)
{
        AnsiString TheRoll = RollCustom1->Caption + " Check: 1d20";
        Roll(Misc1ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCustom2Click(TObject *Sender)
{
        AnsiString TheRoll = RollCustom2->Caption + " Check: 1d20";
        Roll(Misc2ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCustom3Click(TObject *Sender)
{
        AnsiString TheRoll = RollCustom3->Caption + " Check: 1d20";
        Roll(Misc3ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCraft1Click(TObject *Sender)
{
        AnsiString TheRoll = RollCraft1->Caption + " Check: 1d20";
        Roll(Craft1ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCraft2Click(TObject *Sender)
{
        AnsiString TheRoll = RollCraft2->Caption + " Check: 1d20";
        Roll(Craft2ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollCraft3Click(TObject *Sender)
{
        AnsiString TheRoll = RollCraft3->Caption + " Check: 1d20";
        Roll(Craft3ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollKnowledge1Click(TObject *Sender)
{
        AnsiString TheRoll = RollKnowledge1->Caption + " Check: 1d20";
        Roll(Knowledge1ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollKnowledge2Click(TObject *Sender)
{
        AnsiString TheRoll = RollKnowledge2->Caption + " Check: 1d20";
        Roll(Knowledge2ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollKnowledge3Click(TObject *Sender)
{
        AnsiString TheRoll = RollKnowledge3->Caption + " Check: 1d20";
        Roll(Knowledge3ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollKnowledge4Click(TObject *Sender)
{
        AnsiString TheRoll = RollKnowledge4->Caption + " Check: 1d20";
        Roll(Knowledge4ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollKnowledge5Click(TObject *Sender)
{
        AnsiString TheRoll = RollKnowledge5->Caption + " Check: 1d20";
        Roll(Knowledge5ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollPerform1Click(TObject *Sender)
{
        AnsiString TheRoll = RollPerform1->Caption + " Check: 1d20";
        Roll(Perform1ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollPerform2Click(TObject *Sender)
{
        AnsiString TheRoll = RollPerform2->Caption + " Check: 1d20";
        Roll(Perform2ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollPerform3Click(TObject *Sender)
{
        AnsiString TheRoll = RollPerform3->Caption + " Check: 1d20";
        Roll(Perform3ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollProfession1Click(TObject *Sender)
{
        AnsiString TheRoll = RollProfession1->Caption + " Check: 1d20";
        Roll(Profession1ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RollProfession2Click(TObject *Sender)
{
        AnsiString TheRoll = RollProfession2->Caption + " Check: 1d20";
        Roll(Profession2ModL->Caption.ToInt(), TheRoll);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::New1Click(TObject *Sender)
{
        //The idiot box
        int SaveOnLoad = Application->MessageBox("Do you want to save the current character Sheet before loading?", "Confirm Load", MB_YESNOCANCEL);
        //On Yes
        if (SaveOnLoad == 6)
                Save1Click(this);
        //On No
        if (SaveOnLoad != 2)
        {
                OpenDialog1->FileName = "config.dnd";
                RevertAsk = false;
                ReverttoLastSave1Click(this);
                RevertAsk = true;
                OpenDialog1->FileName = "";
                SaveDialog1->FileName = "";
        }
        //Cancel button causes the function to do nothing
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseWheelDown(TObject *Sender,
      TShiftState Shift, TPoint &MousePos, bool &Handled)
{
        VertScrollBar->Position+=10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseWheelUp(TObject *Sender,
      TShiftState Shift, TPoint &MousePos, bool &Handled)
{
        VertScrollBar->Position-=10;
}
//---------------------------------------------------------------------------

void CenteredTextPrinter(ofstream &fout, short TotalSize, AnsiString Text)
{
        short i, j;
        i = TotalSize-Text.Length();
        for (j = 0; j < i/2; j++)
                fout << " ";
        fout << Text.c_str();
        j+=Text.Length();
        for (j; j < TotalSize; j++)
                fout << " ";
}

void SkillSpacePrinter(ofstream &fout, short TotalSize, AnsiString SkillString)
{
        short i, j;
        i = 50-SkillString.Length();
        fout << SkillString.c_str();
        for (j = 0; j < i; j++)
                fout << " ";
}

void SkillPrinter(ofstream &fout, AnsiString SkillString, bool Checked, AnsiString ModL, AnsiString AbilityModL, AnsiString Ranks, AnsiString Misc)
{
        fout << "[";
        if (Checked)
                fout << "*]";
        else
                fout << " ]";
        SkillSpacePrinter(fout, 50, SkillString);
        fout << "[";
        CenteredTextPrinter(fout, 3, ModL);
        fout << "] = [";
        CenteredTextPrinter(fout, 3, AbilityModL);
        fout << "] + [";
        CenteredTextPrinter(fout, 3, Ranks);
        fout << "] + [";
        CenteredTextPrinter(fout, 3, Misc);
        fout << "]" << endl;
}

void __fastcall TForm1::TXT1Click(TObject *Sender)
{
        AnsiString OldFilter = SaveDialog1->Filter;
        AnsiString OldFileName = SaveDialog1->FileName;
        AnsiString SkillString;
        SaveDialog1->Filter = "TXT - Raw Text|*.txt";
        short i, j;
        if(SaveDialog1->Execute())
        {
                ofstream fout;
                fout.open(SaveDialog1->FileName.c_str());
                fout << "Character Name: " << CharName->Text.c_str() << "     Player: " << Player->Text.c_str() << endl;
                fout << "Campaign: " << Campaign->Text.c_str() << endl;
                fout << "Class and Level: " << ClassLevel->Text.c_str() << "     Experience Points: " << Experience->Text.c_str() << endl;
                fout << "Race: " << Race->Text.c_str() << "     Alignment: " << Alignment->Text.c_str() << "     Deity: " << Deity->Text.c_str() << endl;
                fout << "Size: " << Size->Text.c_str() << "     Age: " << Age->Text.c_str() << "     Gender: " << Gender->Text.c_str() << endl;
                fout << "Height: " << Height->Text.c_str() << "     Weight: " << Weight->Text.c_str() << "     Hair: " << Hair->Text.c_str() << "     Skin: " << Skin->Text.c_str() << endl;
                fout << endl;
                fout << "Str: [" << StrScr->Text.c_str() << "][" << StrModL->Caption.c_str() << "]     Temp Str: [" << StrTScr->Text.c_str() << "][" << StrTModL->Caption.c_str() << "]" << endl;
                fout << "Dex: [" << DexScr->Text.c_str() << "][" << DexModL->Caption.c_str() << "]     Temp Dex: [" << DexTScr->Text.c_str() << "][" << DexTModL->Caption.c_str() << "]" << endl;
                fout << "Con: [" << ConScr->Text.c_str() << "][" << ConModL->Caption.c_str() << "]     Temp Con: [" << ConTScr->Text.c_str() << "][" << ConTModL->Caption.c_str() << "]" << endl;
                fout << "Int: [" << IntScr->Text.c_str() << "][" << IntModL->Caption.c_str() << "]     Temp Int: [" << IntTScr->Text.c_str() << "][" << IntTModL->Caption.c_str() << "]" << endl;
                fout << "Wis: [" << WisScr->Text.c_str() << "][" << WisModL->Caption.c_str() << "]     Temp Wis: [" << WisTScr->Text.c_str() << "][" << WisTModL->Caption.c_str() << "]" << endl;
                fout << "Cha: [" << ChaScr->Text.c_str() << "][" << ChaModL->Caption.c_str() << "]     Temp Cha: [" << ChaTScr->Text.c_str() << "][" << ChaTModL->Caption.c_str() << "]" << endl;
                fout << endl;
                fout << "HP: [" << HP->Text.c_str() << "]     Current HP: [" << Wounds->Text.c_str() << "]     Nonlethal: [" << Nonlethal->Text.c_str() << "]" << endl;
                fout << endl;
                fout << "Speed: " << Speed->Text.c_str() << endl;
                fout << endl;
                fout << "Armor Class: [";
                CenteredTextPrinter(fout, 5, ACTotalL->Caption);
                fout << "] = 10 + [";
                CenteredTextPrinter(fout, 5, ACArmorBonusL->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 6, ACShieldBonusL->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 7, ACDexModL->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, ACSizeMod->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 7, NaturalArmor->Text);
                fout << "]" << endl;
                fout << "              Total          Armor     Shield     Dex Mod     Size Mod     Natural" << endl;
                fout << "Touch AC: [" << TouchAC->Caption.c_str() << "]     Flat-Footed AC: [" << FlatfootAC->Caption.c_str() << "]" << endl;
                fout << endl;
                fout << "Damage Reduction: [" << DamageReduction->Text.c_str() << "]" << endl;
                fout << endl;
                fout << "Initiative: [";
                CenteredTextPrinter(fout, 5, InitModL->Caption);
                fout << "] = [";
                CenteredTextPrinter(fout, 7, InitDexModL->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, InitMiscMod->Text);
                fout << "]" << endl;
                fout << "             Total     Dex Mod     Misc Mod" << endl << endl;
                fout << "Fortitude: [";
                CenteredTextPrinter(fout, 5, FortModL->Caption);
                fout << "] = [";
                CenteredTextPrinter(fout, 9, FortBase->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 7, FortConModL->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 5, FortMagic->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, FortMiscMod->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, FortTemp->Text);
                fout << "]" << endl;
                fout << "            Total     Base Save     Ability     Magic     Misc Mod     Temp Mod" << endl;
                fout << "Reflex:    [";
                CenteredTextPrinter(fout, 5, RefModL->Caption);
                fout << "] = [";
                CenteredTextPrinter(fout, 9, RefBase->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 7, RefDexModL->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 5, RefMagic->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, RefMiscMod->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, RefTemp->Text);
                fout << "]" << endl;
                fout << "            Total     Base Save     Ability     Magic     Misc Mod     Temp Mod" << endl;
                fout << "Will:      [";
                CenteredTextPrinter(fout, 5, WillModL->Caption);
                fout << "] = [";
                CenteredTextPrinter(fout, 9, WillBase->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 7, WillWisModL->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 5, WillMagic->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, WillMiscMod->Text);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, WillTemp->Text);
                fout << "]" << endl;
                fout << "            Total     Base Save     Ability     Magic     Misc Mod     Temp Mod" << endl << endl;
                fout << "Base Attack Bonus: [" << BAB->Text.c_str() << "]\n\n";
                fout << "Spell Resistance: [" << SpellResistance->Text.c_str() << "]\n\n";
                fout << "Grapple: [";
                CenteredTextPrinter(fout, 5, GrappleMod->Caption);
                fout << "] = [";
                CenteredTextPrinter(fout, 11, GrappleBAB->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 7, GrappleStrMod->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, GrappleSizeMod->Caption);
                fout << "] + [";
                CenteredTextPrinter(fout, 8, GrappleMiscMod->Text);
                fout << "]" << endl;
                fout << "	  Total     Base Attack     Str Mod     Size Mod     Misc Mod" << endl;
                fout << endl;
                fout << "Weapon 1: [" << Weapon1Name->Text.c_str() << "]" << endl;
                fout << "Attack Bonus: [" << Weapon1Bonus->Text.c_str() << "]     Damage: [" << Weapon1Damage->Text.c_str() << "]     Crit: [" << Weapon1Crit->Text.c_str() << "]" << endl;
                fout << "Range: [" << Weapon1Range->Text.c_str() << "]     Type: [" << Weapon1Type->Text.c_str() << "]     Notes: [" << Weapon1Notes->Text.c_str() << "]" << endl << endl;
                fout << "Weapon 2: [" << Weapon2Name->Text.c_str() << "]" << endl;
                fout << "Attack Bonus: [" << Weapon2Bonus->Text.c_str() << "]     Damage: [" << Weapon2Damage->Text.c_str() << "]     Crit: [" << Weapon2Crit->Text.c_str() << "]" << endl;
                fout << "Range: [" << Weapon2Range->Text.c_str() << "]     Type: [" << Weapon2Type->Text.c_str() << "]     Notes: [" << Weapon2Notes->Text.c_str() << "]" << endl << endl;
                fout << "Weapon 3: [" << Weapon3Name->Text.c_str() << "]" << endl;
                fout << "Attack Bonus: [" << Weapon3Bonus->Text.c_str() << "]     Damage: [" << Weapon3Damage->Text.c_str() << "]     Crit: [" << Weapon3Crit->Text.c_str() << "]" << endl;
                fout << "Range: [" << Weapon3Range->Text.c_str() << "]     Type: [" << Weapon3Type->Text.c_str() << "]     Notes: [" << Weapon3Notes->Text.c_str() << "]" << endl << endl;
                fout << "Weapon 4: [" << Weapon4Name->Text.c_str() << "]" << endl;
                fout << "Attack Bonus: [" << Weapon4Bonus->Text.c_str() << "]     Damage: [" << Weapon4Damage->Text.c_str() << "]     Crit: [" << Weapon4Crit->Text.c_str() << "]" << endl;
                fout << "Range: [" << Weapon4Range->Text.c_str() << "]     Type: [" << Weapon4Type->Text.c_str() << "]     Notes: [" << Weapon4Notes->Text.c_str() << "]" << endl << endl;
                fout << "Weapon 5: [" << Weapon5Name->Text.c_str() << "]" << endl;
                fout << "Attack Bonus: [" << Weapon5Bonus->Text.c_str() << "]     Damage: [" << Weapon5Damage->Text.c_str() << "]     Crit: [" << Weapon5Crit->Text.c_str() << "]" << endl;
                fout << "Range: [" << Weapon5Range->Text.c_str() << "]     Type: [" << Weapon5Type->Text.c_str() << "]     Notes: [" << Weapon5Notes->Text.c_str() << "]" << endl << endl;
                fout << "Armor: [" << ArmorName->Text.c_str() << "]     Type: [" << ArmorType->Text.c_str() << "]     AC: [" << ArmorAC->Text.c_str() << "]     Max Dex: [" << ArmorDex->Text.c_str() << "]" << endl;
                fout << "Check Penalty: [" << ArmorCheck->Text.c_str() << "]     Spell Failure: [" << ArmorSpellFailure->Text.c_str() << "]     Speed: [" << ArmorSpeed->Text.c_str() << "]     Weight: [" << ArmorWeight->Text.c_str() << "]" << endl;
                fout << "Special Properties: [" << ArmorSpecial->Text.c_str() << "]" << endl << endl;
                fout << "Shield: [" << ShieldName->Text.c_str() << "]     AC: [" << ShieldAC->Text.c_str() << "]     Weight: [" << ShieldWeight->Text.c_str() << "]     Check Penalty: [" << ShieldCheck->Text.c_str() << "]" << endl;
                fout << "Spell Failure: [" << ShieldSpellFailure->Text.c_str() << "]    Special Properties: [" << ShieldSpecial->Text.c_str() << "]" << endl << endl;
                fout << "Other Gear:" << endl;
                for (i = 0; i < OtherPossessions->Lines->Count; i++)
                        fout << OtherPossessions->Lines->Strings[i].c_str() << endl;
                fout << endl;
                fout << "Light Load: [" << LightLoad->Caption.c_str() << "]     Medium Load: [" << MediumLoad->Caption.c_str() << "]     Heavy Load: [" << HeavyLoad->Caption.c_str() << "]" << endl;
                fout << "Lift Over Head: [" << LiftOverHead->Caption.c_str() << "]     Lift Off Ground: [" << LiftOffGround->Caption.c_str() << "]     Push or Drag: [" << PushDrag->Caption.c_str() << "]" << endl << endl;
                fout << "Money:" << endl;
                for (i = 0; i < Money->Lines->Count; i++)
                        fout << Money->Lines->Strings[i].c_str() << endl;
                fout << endl;
                fout << "Skills:" << endl;
                fout << "                                                       T       A       R       M" << endl;
                SkillString = "Appraise (int):>";
                SkillPrinter(fout, SkillString, AppraiseCheck->Checked, AppraiseModL->Caption, AppraiseAbilityModL->Caption, AppraiseRanks->Text, AppraiseMisc->Text);
                SkillString = "Balance (dex*):>";
                SkillPrinter(fout, SkillString, BalanceCheck->Checked, BalanceModL->Caption, BalanceAbilityModL->Caption, BalanceRanks->Text, BalanceMisc->Text);
                SkillString = "Bluff (cha):>";
                SkillPrinter(fout, SkillString, BluffCheck->Checked, BluffModL->Caption, BluffAbilityModL->Caption, BluffRanks->Text, BluffMisc->Text);
                SkillString = "Climb (str*):>";
                SkillPrinter(fout, SkillString, ClimbCheck->Checked, ClimbModL->Caption, ClimbAbilityModL->Caption, ClimbRanks->Text, ClimbMisc->Text);
                SkillString = "Concentration (con):>";
                SkillPrinter(fout, SkillString, ConcentrationCheck->Checked, ConcentrationModL->Caption, ConcentrationAbilityModL->Caption, ConcentrationRanks->Text, ConcentrationMisc->Text);
                SkillString = "Craft (" + Craft1Edit->Text + ") (int):>";
                SkillPrinter(fout, SkillString, Craft1Check->Checked, Craft1ModL->Caption, Craft1AbilityModL->Caption, Craft1Ranks->Text, Craft1Misc->Text);
                SkillString = "Craft (" + Craft2Edit->Text + ") (int):>";
                SkillPrinter(fout, SkillString, Craft2Check->Checked, Craft2ModL->Caption, Craft2AbilityModL->Caption, Craft2Ranks->Text, Craft2Misc->Text);
                SkillString = "Craft (" + Craft3Edit->Text + ") (int):>";
                SkillPrinter(fout, SkillString, Craft3Check->Checked, Craft3ModL->Caption, Craft3AbilityModL->Caption, Craft3Ranks->Text, Craft3Misc->Text);
                SkillString = "Diplomacy (cha):>";
                SkillPrinter(fout, SkillString, DiplomacyCheck->Checked, DiplomacyModL->Caption, DiplomacyAbilityModL->Caption, DiplomacyRanks->Text, DiplomacyMisc->Text);
                SkillString = "Decipher Script (int):";
                SkillPrinter(fout, SkillString, DecipherCheck->Checked, DecipherModL->Caption, DecipherAbilityModL->Caption, DecipherRanks->Text, DecipherMisc->Text);
                SkillString = "Disable Device (int):";
                SkillPrinter(fout, SkillString, DisableCheck->Checked, DisableModL->Caption, DisableAbilityModL->Caption, DisableRanks->Text, DisableMisc->Text);
                SkillString = "Disguise (cha):>";
                SkillPrinter(fout, SkillString, DisguiseCheck->Checked, DisguiseModL->Caption, DisguiseAbilityModL->Caption, DisguiseRanks->Text, DisguiseMisc->Text);
                /*SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);
                SkillPrinter(fout, SkillString, Check->Checked, ModL->Caption, AbilityModL->Caption, Ranks->Text, Misc->Text);*/
                fout << "Dungeons and Dragons v3.5 Digital Character Sheet - Version 3.1 - © 2007 Matt Schraeder and Frozen Insanity - http://www.kontek.net/frozen" << endl;
                fout.close();
                ShowMessage(SaveDialog1->FileName + " Exported.");
        }
        SaveDialog1->Filter = OldFilter;
        SaveDialog1->FileName = OldFileName;
/*
[ ]Escape Artist (dex*):>		[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Forgery (int):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Gather Information (cha):>		[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Handle Animal (cha):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Heal (wis):>				[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Hide (dex*):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Intimidate (cha):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Jump (str*):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Knowledge () (int):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Knowledge () (int):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Knowledge () (int):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Knowledge () (int):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Knowledge () (int):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Listen (wis):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Move Silently (dex*):>		[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Open Lock (dex):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Perform () (cha):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Perform () (cha):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Perform () (cha):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Profession () (wis):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Profession () (wis):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Ride (dex):>				[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Search (int):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Sense Motive (wis):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Sleight of Hand (dex*):		[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Spellcraft (int):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Spot (wis):>				[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Survival (wis):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Swim (str*):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Tumble (dex*):			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Use Magic Device (cha):		[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Use Rope (dex):>			[ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]
[ ]Misc 1 ():                           [ 0 ] = [ 0 ] + [ 0 ] + [ 0 ]

[x] = Class Skill
[ ] = Cross-Class
 *  = Armor Check Penalty
 >  = Use Untrained

Feats:

Special Abilities:

Languages:

Spell Failure:

Domain/Specialy Schools:
Spells:*/

}
//---------------------------------------------------------------------------

void XMLAttackBonusParser(AnsiString AttackBonus, AnsiString WeaponName, AnsiString GenderPronoun, ofstream &fout)
{
        int First = 1, i, j = 0, Total;
        AnsiString NumList[50];
        for (i = 1; i <= AttackBonus.Length(); i++)
                if (AttackBonus[i] == ' ')
                        AttackBonus.Delete(i, 1);
        for (i = 2; i <= AttackBonus.Length(); i++)
        {
                       if (AttackBonus[i] == '\\' || AttackBonus[i] == '/')
                        {
                                NumList[j++] = AttackBonus.SubString(First,i-First);
                                NumList[j++] = AttackBonus[i];
                                First = i+1;
                        }
                        else if (AttackBonus[i] == '(' || AttackBonus[i] == ':')
                                break;
        }
        NumList[j++] = AttackBonus.SubString(First,i-First);
        fout << "      <string>" << Form1->CharName->Text.c_str() << " attacks with " << GenderPronoun.c_str() << " " << WeaponName.c_str() << " and gets:";
        for (i = j-1; i >= 0; i--)
                if (NumList[i] != "\\" && NumList[i] != "/")
                        fout << "<br/>Attack " << i+1 << ": [d20" << NumList[i].c_str() << "]";
        fout << "</string>\n";
}

void __fastcall TForm1::XMLMapToolMacroXML1Click(TObject *Sender)
{
        AnsiString OldFilter = SaveDialog1->Filter;
        AnsiString OldFileName = SaveDialog1->FileName;
        AnsiString GenderPronoun = "her"; //default to female
        AnsiString AttackBonus;
        SaveDialog1->Filter = "XML - MapTool Macro XML|*.xml";
        if(SaveDialog1->Execute())
        {
                if (Gender->Text.LowerCase() == "male")
                        GenderPronoun = "his";
                ofstream fout;
                fout.open(SaveDialog1->FileName.c_str());
                fout << "  <macroMap>\n";
                fout << "    <entry>\n";
                fout << "      <string>Strength Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " tests " << GenderPronoun.c_str() << " strength and gets a [d20" << StrModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Dexterity Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " tests " << GenderPronoun.c_str() << " dexterity and gets a [d20" << DexModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Constitution Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " tests " << GenderPronoun.c_str() << " constitution and gets a [d20" << ConModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Intelligence Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " tests " << GenderPronoun.c_str() << " intelligence and gets a [d20" << IntModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Wisdom Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " tests " << GenderPronoun.c_str() << " wisdom and gets a [d20" << WisModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Charisma Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " tests " << GenderPronoun.c_str() << " charisma and gets a [d20" << ChaModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Grapple Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " grapples with " << GenderPronoun.c_str() << " opponent and gets a [d20" << GrappleMod->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Initiative Roll</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " rolls " << GenderPronoun.c_str() << " initiative and gets a [d20" << InitModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Fortitude Save</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << "'s body attempts to fend off a harmful effect and gets a [d20" << FortModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Reflex Save</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to dodge out of the way and gets a [d20" << RefModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Will Save</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attemps to resist a trick of the mind and gets a [d20" << WillModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Melee Attack</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " makes a melee attack and gets a [d20" << BAB->Text.c_str() << StrModL->Caption.c_str() << ACSizeMod->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Ranged Attack</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " makes a ranged attack and gets a [d20" << BAB->Text.c_str() << DexModL->Caption.c_str() << ACSizeMod->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                if (Weapon1Name->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon1Name->Text.c_str() << " Attack</string>\n";
                        XMLAttackBonusParser(Weapon1Bonus->Text, Weapon1Name->Text, GenderPronoun, fout);
                        fout << "    </entry>\n";
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon1Name->Text.c_str() << " Damage</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " strikes with " << GenderPronoun.c_str() << " " << Weapon1Name->Text.c_str() << " and deals [" << Weapon1Damage->Text.c_str() << "] damage</string>\n";
                        fout << "    </entry>\n";
                }
                if (Weapon2Name->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon2Name->Text.c_str() << " Attack</string>\n";
                        XMLAttackBonusParser(Weapon2Bonus->Text, Weapon2Name->Text, GenderPronoun, fout);
                        fout << "    </entry>\n";
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon2Name->Text.c_str() << " Damage</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " strikes with " << GenderPronoun.c_str() <<  " " << Weapon2Name->Text.c_str() << " and deals [" << Weapon2Damage->Text.c_str() << "] damage</string>\n";
                        fout << "    </entry>\n";
                }
                if (Weapon3Name->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon3Name->Text.c_str() << " Attack</string>\n";
                        XMLAttackBonusParser(Weapon3Bonus->Text, Weapon3Name->Text, GenderPronoun, fout);
                        fout << "    </entry>\n";
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon3Name->Text.c_str() << " Damage</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " strikes with " << GenderPronoun.c_str() <<  " " << Weapon3Name->Text.c_str() << " and deals [" << Weapon3Damage->Text.c_str() << "] damage</string>\n";
                        fout << "    </entry>\n";
                }
                if (Weapon4Name->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon4Name->Text.c_str() << " Attack</string>\n";
                        XMLAttackBonusParser(Weapon4Bonus->Text, Weapon4Name->Text, GenderPronoun, fout);
                        fout << "    </entry>\n";
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon4Name->Text.c_str() << " Damage</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " strikes with " << GenderPronoun.c_str() <<  " " << Weapon4Name->Text.c_str() << " and deals [" << Weapon4Damage->Text.c_str() << "] damage</string>\n";
                        fout << "    </entry>\n";
                }
                if (Weapon5Name->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon5Name->Text.c_str() << " Attack</string>\n";
                        XMLAttackBonusParser(Weapon5Bonus->Text, Weapon5Name->Text, GenderPronoun, fout);
                        fout << "    </entry>\n";
                        fout << "    <entry>\n";
                        fout << "      <string>" << Weapon5Name->Text.c_str() << " Damage</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " strikes with " << GenderPronoun.c_str() << " " << Weapon5Name->Text.c_str() << " and deals [" << Weapon5Damage->Text.c_str() << "] damage</string>\n";
                        fout << "    </entry>\n";
                }
                fout << "    <entry>\n";
                fout << "      <string>Appraise Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to determine it's worth and gets a [d20" << AppraiseModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Balance Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to keep " << GenderPronoun.c_str() << " balance and gets a [d20" << BalanceModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Bluff Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to hide " << GenderPronoun.c_str() << " the truth and gets a [d20" << BluffModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Climb Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to climb over the obstacle and gets a [d20" << ClimbModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Concentration Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to clear " << GenderPronoun.c_str() << " mind and concentrate on the matter at hand and gets a [d20" << ConcentrationModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Craft (" << Craft1Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to craft a masterpiece and gets a [d20" << Craft1ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Craft (" << Craft2Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to craft a masterpiece and gets a [d20" << Craft2ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Craft (" << Craft3Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to craft a masterpiece and gets a [d20" << Craft3ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Decipher Script Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to decipher the writing and gets a [d20" << DecipherModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Diplomacy Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to be diplomatic and gets a [d20" << DiplomacyModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Disable Device Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to disable the device and gets a [d20" << DisableModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Disguise Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to change " << GenderPronoun.c_str() << " appearance and gets a [d20" << DisguiseModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Escape Arist Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to escape from a tight situation and gets a [d20" << EscapeModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Forgery Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to forge the document and gets a [d20" << ForgeryModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Gather Information Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to gather information on the subject and gets a [d20" << GatherModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Handle Animal Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to handle the wid animal and gets a [d20" << HandleModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Heal Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to treat the wounds and gets a [d20" << HealModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Hide Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to hide in the shadows and gets a [d20" << HideModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Intimidate Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to be intimidating and gets a [d20" << IntimidateModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Jump Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to jump over the obstacle and gets a [d20" << JumpModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Knowledge (" << Knowledge1Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts tests " << GenderPronoun.c_str() << " knowledge and gets a [d20" << Knowledge1ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Knowledge (" << Knowledge2Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts tests " << GenderPronoun.c_str() << " knowledge and gets a [d20" << Knowledge2ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Knowledge (" << Knowledge3Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts tests " << GenderPronoun.c_str() << " knowledge and gets a [d20" << Knowledge3ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Knowledge (" << Knowledge4Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts tests " << GenderPronoun.c_str() << " knowledge and gets a [d20" << Knowledge4ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Knowledge (" << Knowledge5Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts tests " << GenderPronoun.c_str() << " knowledge and gets a [d20" << Knowledge5ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Listen Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to listen carefully and gets a [d20" << ListenModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Move Silently Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to move without making a sound and gets a [d20" << MoveModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Open Lock Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to open the lock and gets a [d20" << OpenModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Perform (" << Perform1Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to perform and gets a [d20" << Perform1ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Perform (" << Perform2Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to perform and gets a [d20" << Perform2ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Perform (" << Perform3Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to perform and gets a [d20" << Perform3ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Profession (" << Profession1Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to utilize " << GenderPronoun.c_str() << " profession and gets a [d20" << Profession1ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Profession (" << Profession2Edit->Text.c_str() << ") Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to utilize " << GenderPronoun.c_str() << " profession and gets a [d20" << Profession2ModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Ride Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to ride " << GenderPronoun.c_str() << " mount and gets a [d20" << RideModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Search Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to investigate " << GenderPronoun.c_str() << " surroundings and gets a [d20" << SearchModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Sense Motive Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to discover the hidden motive and gets a [d20" << SenseModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Sleight of Hand Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to swipe the object and gets a [d20" << SleightModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Spellcraft Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to use " << GenderPronoun.c_str() << " knowledge of spells and gets a [d20" << SpellcraftModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Spot Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to spot a minute detail and gets a [d20" << SpotModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Survival Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to survive in the wild and gets a [d20" << SurvivalModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Swim Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to swim the difficult waters and gets a [d20" << SwimModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Tumble Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts a feat of acrobatics and gets a [d20" << TumbleModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Use Magic Device Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to use the unknown magic device and gets a [d20" << UseMagicModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                fout << "    <entry>\n";
                fout << "      <string>Use Rope Check</string>\n";
                fout << "      <string>" << CharName->Text.c_str() << " attempts to work with the rope and gets a [d20" << UseRopeModL->Caption.c_str() << "]</string>\n";
                fout << "    </entry>\n";
                if (Misc1Edit->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Misc1Edit->Text.c_str() << " Check</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " makes a " << Misc1Edit->Text.c_str() << " Check and gets a [d20" << Misc1ModL->Caption.c_str() << "]</string>\n";
                        fout << "    </entry>\n";
                }
                if (Misc2Edit->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Misc2Edit->Text.c_str() << " Check</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " makes a " << Misc2Edit->Text.c_str() << " Check and gets a [d20" << Misc2ModL->Caption.c_str() << "]</string>\n";
                        fout << "    </entry>\n";
                }
                if (Misc3Edit->Text != "")
                {
                        fout << "    <entry>\n";
                        fout << "      <string>" << Misc3Edit->Text.c_str() << " Check</string>\n";
                        fout << "      <string>" << CharName->Text.c_str() << " makes a " << Misc3Edit->Text.c_str() << " Check and gets a [d20" << Misc3ModL->Caption.c_str() << "]</string>\n";
                        fout << "    </entry>\n";
                }
                fout << "  </macroMap>\n";
                fout.close();
                ShowMessage(SaveDialog1->FileName + " Exported.");
        }
        SaveDialog1->Filter = OldFilter;
        SaveDialog1->FileName = OldFileName;
}
//---------------------------------------------------------------------------

//This resets the fonts to the default fonts set in config.dnd when the program was started
void __fastcall TForm1::ResetFonts1Click(TObject *Sender)
{
        FontDialog1->Font = LabelFont->Font;
        ApplyLabelFontChanges();
        FontDialog1->Font = TextBoxFont->Font;
        ApplyTextBoxFontChanges();
        FontDialog1->Font = SmallMemoFont->Font;
        ApplySmallMemoFontChanges();
        FontDialog1->Font = LargeMemoFont->Font;
        ApplyLargeMemoFontChanges();
        FontDialog1->Font = MiscNoteFont->Font;
        ApplyMiscNotesFontChanges();
        FontDialog1->Font = RollLogFont->Font;
        ApplyRollLogFontChanges();
}
//---------------------------------------------------------------------------



