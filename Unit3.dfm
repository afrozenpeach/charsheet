object Form3: TForm3
  Left = 407
  Top = 73
  BorderStyle = bsDialog
  Caption = 'Stat Roller'
  ClientHeight = 505
  ClientWidth = 255
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 17
    Top = 174
    Width = 78
    Height = 13
    Caption = 'Number of Rolls:'
  end
  object Label2: TLabel
    Left = 134
    Top = 194
    Width = 53
    Height = 13
    Alignment = taRightJustify
    Caption = 'Strength:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 132
    Top = 233
    Width = 55
    Height = 13
    Alignment = taRightJustify
    Caption = 'Dexterity:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 116
    Top = 311
    Width = 71
    Height = 13
    Alignment = taRightJustify
    Caption = 'Intelligence:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 115
    Top = 272
    Width = 72
    Height = 13
    Alignment = taRightJustify
    BiDiMode = bdLeftToRight
    Caption = 'Constitution:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentBiDiMode = False
    ParentFont = False
  end
  object Label6: TLabel
    Left = 131
    Top = 389
    Width = 56
    Height = 13
    Alignment = taRightJustify
    Caption = 'Charisma:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 138
    Top = 350
    Width = 49
    Height = 13
    Alignment = taRightJustify
    Caption = 'Wisdom:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object StrRoll: TLabel
    Left = 144
    Top = 208
    Width = 41
    Height = 24
    Alignment = taCenter
    AutoSize = False
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object DexRoll: TLabel
    Left = 144
    Top = 248
    Width = 41
    Height = 24
    Alignment = taCenter
    AutoSize = False
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object ConRoll: TLabel
    Left = 144
    Top = 288
    Width = 41
    Height = 24
    Alignment = taCenter
    AutoSize = False
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object IntRoll: TLabel
    Left = 144
    Top = 328
    Width = 41
    Height = 24
    Alignment = taCenter
    AutoSize = False
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object WisRoll: TLabel
    Left = 144
    Top = 366
    Width = 41
    Height = 24
    Alignment = taCenter
    AutoSize = False
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object ChaRoll: TLabel
    Left = 144
    Top = 408
    Width = 41
    Height = 24
    Alignment = taCenter
    AutoSize = False
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object Label8: TLabel
    Left = 8
    Top = 134
    Width = 87
    Height = 13
    Caption = 'Numbers to Reroll:'
  end
  object Label9: TLabel
    Left = 40
    Top = 197
    Width = 53
    Height = 13
    BiDiMode = bdLeftToRight
    Caption = 'Points Left:'
    ParentBiDiMode = False
  end
  object Label10: TLabel
    Left = 107
    Top = 428
    Width = 80
    Height = 13
    Alignment = taRightJustify
    Caption = 'Throw Aways:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object PointsSpent: TLabel
    Left = 185
    Top = 178
    Width = 60
    Height = 13
    Caption = 'Points Spent'
    Visible = False
  end
  object Rolls: TListBox
    Left = 192
    Top = 192
    Width = 41
    Height = 305
    ItemHeight = 13
    TabOrder = 10
  end
  object StatTypes: TListBox
    Left = 8
    Top = 8
    Width = 241
    Height = 113
    ExtendedSelect = False
    ItemHeight = 13
    Items.Strings = (
      'Standard (4d6 drop lowest)'
      'Gimp (4d6 drop highest)'
      'Organic 18d6 (Arrange 18 dice in 6 groups of 3)'
      'Straight (3d6)'
      'Standard Point Buy'
      '1 for 1 Point Buy'
      'Elite Array (15, 14, 13, 12, 10, 8)'
      'High Powered (5d6 drop lowest two)')
    TabOrder = 0
    OnClick = StatTypesClick
  end
  object RollStats: TButton
    Left = 8
    Top = 280
    Width = 75
    Height = 25
    Caption = 'RollStats'
    TabOrder = 6
    OnClick = RollStatsClick
  end
  object NumberofRolls: TEdit
    Left = 96
    Top = 170
    Width = 33
    Height = 21
    TabOrder = 4
    Text = '6'
  end
  object Rerolls1: TEdit
    Left = 96
    Top = 130
    Width = 17
    Height = 21
    TabOrder = 1
    Text = '1'
  end
  object PointsLeft: TEdit
    Left = 96
    Top = 194
    Width = 33
    Height = 21
    Enabled = False
    TabOrder = 5
    Text = '0'
  end
  object NoRerollifDrop: TCheckBox
    Left = 8
    Top = 152
    Width = 137
    Height = 17
    Caption = 'Only reroll if not dropped'
    TabOrder = 3
  end
  object Reset: TButton
    Left = 8
    Top = 408
    Width = 75
    Height = 25
    Caption = 'Reset Form'
    ParentShowHint = False
    ShowHint = False
    TabOrder = 7
    OnClick = ResetClick
  end
  object Apply: TButton
    Left = 8
    Top = 440
    Width = 75
    Height = 25
    Caption = 'Apply Stats'
    ModalResult = 1
    TabOrder = 8
    OnClick = ApplyClick
  end
  object Close: TButton
    Left = 8
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Close'
    ModalResult = 2
    TabOrder = 9
  end
  object Rerolls2: TEdit
    Left = 120
    Top = 130
    Width = 17
    Height = 21
    TabOrder = 2
  end
  object CSpinButton1: TCSpinButton
    Left = 233
    Top = 312
    Width = 20
    Height = 49
    DownGlyph.Data = {
      0E010000424D0E01000000000000360000002800000009000000060000000100
      200000000000D800000000000000000000000000000000000000008080000080
      8000008080000080800000808000008080000080800000808000008080000080
      8000008080000080800000808000000000000080800000808000008080000080
      8000008080000080800000808000000000000000000000000000008080000080
      8000008080000080800000808000000000000000000000000000000000000000
      0000008080000080800000808000000000000000000000000000000000000000
      0000000000000000000000808000008080000080800000808000008080000080
      800000808000008080000080800000808000}
    TabOrder = 11
    UpGlyph.Data = {
      0E010000424D0E01000000000000360000002800000009000000060000000100
      200000000000D800000000000000000000000000000000000000008080000080
      8000008080000080800000808000008080000080800000808000008080000080
      8000000000000000000000000000000000000000000000000000000000000080
      8000008080000080800000000000000000000000000000000000000000000080
      8000008080000080800000808000008080000000000000000000000000000080
      8000008080000080800000808000008080000080800000808000000000000080
      8000008080000080800000808000008080000080800000808000008080000080
      800000808000008080000080800000808000}
    OnDownClick = CSpinButton1DownClick
    OnUpClick = CSpinButton1UpClick
  end
end
