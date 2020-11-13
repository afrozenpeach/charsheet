Dungeons and Dragons v3.5 Digital Character Sheet
-------------------------------------------------

(C) 2003-2020 Mattie Schraeder
https://afrozenpeach.net/

This app is pretty self explanatory but feel free to e-mail me with questions.
I wrote it for the Weekly IRC RPG Club (WIRCRPG), a group of gamers who enjoy
D&Ding in IRC late at night.  We originally used crappy text based character
sheets, but those just aren't the same as an original sheet so I decided to
write this little gem to make our jobs easier.

Feel free to contact me if you have any questions, comments, thoughts, opinions, 
suggestions, or bug reports.  I always welcome feedback from users, be it good, 
bad, or ugly.

Special Thanks: 

- MegaByte: For being such an awesome webhost
- Elzie_Ann, Korean1004, Spiderman, Sapphire, Warlord_Zap, Mike_The_Warrior,
  Chewbaccus, Rosa, Dots, and Willfor: Beta testing and offering their
  suggestions to make this the  best app possible
- Elzie_Ann: For her awesome sprites that I used for the app's icon
- Meekers: Helping to find the pattern for the Carrying Capacity tables and
  therefore pointing me in the right direction for making an algorithm based on
  those tables.
- Borland's Newsgroups, especially Remy Lebeau and JD: Helping with some
  Windows API coding and basic issues throughout the development process
- Robert Stagmier: Bug testing the printing and offering a lot of great help
  in tracking down the access violation bug
- Joe Airy: Pointing out that Armor's Max Dex Bonus didn't affect AC
- DnDAdventure.com: Throwing this little app up on their Player Resources
  section making it so popular
- Flautist: Convincing me to release this under the GPL
- Trevor and the RPTools team for making some of the best D&D tools in existance
- Mdar: Bug testing this latest beta and lots of good opinions on how things
  should work
- Everyone who's e-mailed me their comments and suggestions
- And finally... You: For spending the time to download this program and check
  it out.

It's thanks to you guys that this app turned out as well as it did.

Version 3.2 Changes:
- Minor bug fixes

Version 3.0 Changes:
- The file "config.dnd" is automatically created in the same directory as the
  executable upon the first time loading v3.0.  This file is a default save that
  is loaded every time you start the program.  By changing font options and
  filling in certain blanks on the sheet and saving over this file you can
  customize the sheet's default layout.
- Customizable Font Options
  Notes: Only font name, size, and color settings are saved.
         "Reset Fonts" resets the fonts to the defaults from config.dnd when the
         program was started.  This is useful to add your font settings to older
         saved character files.
- Easier to read default font
- Automated Dice Roller
  Notes: For Attack Bonus and Attack Damage the parser ignores anything after a
         parentheses or colon.  A forward or backward slash seperates each Attack
         Bonus. You must use the format in the text box's tool tip for this roll
         to work
- Armor Check Penalty now applies to relevant skills
- Changing Size updates Carrying Capacity, rather than just changing Strength
- Improved scroll bar functions
- Page 3 now has a Scrollbar
- The entire form now responds to the scroll wheel
- All pages have been renamed to better describe what they are
- Before saving, the character sheet is checked for errors
- Improved Custom Skill Calculation
- UI now scales to 1024x768
- Updated About form
- Fixed bug in which Protective Item 2 was not saving properly
- Preliminary export functions for Text and MapTool XML
  Notes: For Attack Bonus and Attack Damage the parser ignores anything after a
         parentheses or colon.  A forward or backward slash seperates each Attack
         Bonus. You must use the format in the text box's tool tip for this roll
         to work 

Version 2.0 Changes:

- More printing options: The user can now select which pages to print
- Page 3 is now printed in text instead of graphically like pages 1 and 2, with
  page wrap.  Note: Page numbers in the print dialog refer to the pages numbers
  on the tab control, not to actual pages printed.  When printing page 3 it
  will send everything in the memo box on page 3 to the printer.
- If page 3 is empty, it won't print
- Minor changes to how the printed version looks
- Menu option for switching between pages, in addition to using the tab control
- Reminder to save on exit, aka the idiot box
- Autocalculations for Carrying Capacity
- Armor's Max Dex Bonus now affects AC
- Drop-down box for size and automatically modifying Grapple and AC size
  modifiers as well as Carrying Capacity modifications
- Command-line Parameter for loading a .dnd file directly into the app
- This sexy new about box
- Revert to last save and save as options
- Hotkeys
- Drop-down for choosing an ability to link with spell-save DC
- Fixed bug in Base Attack Bonus/Grapple Modifier to allow for multiple attacks
- Sexy new icon compliments of Elzie_Ann
- Minor GUI changes
- Added comments to source code (cuz I'm lazy and didn't feel like commenting
  anything before... plus I just decided to release it under the GPL so I
  figured I should help those who aren't me understand my code)
- Random other things that I can't think of right now
- Released under the GNU General Public License (See below)

  If you modify the source code, add new features, port the app to another OS,
  etc. feel free to e-mail me with modifications and I'll look into adding the
  changes into an official release, or in the case of a port, add the ported
  version to my site.  You will be given full credit for any and all changes
  that you make and for any ported versions you create.

  This application was written in Borland C++ Builder 5 with Borland's Visual 
Component Library.


-------------------------------------------------------------------------------


	    GNU GENERAL PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. This License applies to any program or other work which contains
a notice placed by the copyright holder saying it may be distributed
under the terms of this General Public License.  The "Program", below,
refers to any such program or work, and a "work based on the Program"
means either the Program or any derivative work under copyright law:
that is to say, a work containing the Program or a portion of it,
either verbatim or with modifications and/or translated into another
language.  (Hereinafter, translation is included without limitation in
the term "modification".)  Each licensee is addressed as "you".

Activities other than copying, distribution and modification are not
covered by this License; they are outside its scope.  The act of
running the Program is not restricted, and the output from the Program
is covered only if its contents constitute a work based on the
Program (independent of having been made by running the Program).
Whether that is true depends on what the Program does.

  1. You may copy and distribute verbatim copies of the Program's
source code as you receive it, in any medium, provided that you
conspicuously and appropriately publish on each copy an appropriate
copyright notice and disclaimer of warranty; keep intact all the
notices that refer to this License and to the absence of any warranty;
and give any other recipients of the Program a copy of this License
along with the Program.

You may charge a fee for the physical act of transferring a copy, and
you may at your option offer warranty protection in exchange for a fee.

  2. You may modify your copy or copies of the Program or any portion
of it, thus forming a work based on the Program, and copy and
distribute such modifications or work under the terms of Section 1
above, provided that you also meet all of these conditions:

    a) You must cause the modified files to carry prominent notices
    stating that you changed the files and the date of any change.

    b) You must cause any work that you distribute or publish, that in
    whole or in part contains or is derived from the Program or any
    part thereof, to be licensed as a whole at no charge to all third
    parties under the terms of this License.

    c) If the modified program normally reads commands interactively
    when run, you must cause it, when started running for such
    interactive use in the most ordinary way, to print or display an
    announcement including an appropriate copyright notice and a
    notice that there is no warranty (or else, saying that you provide
    a warranty) and that users may redistribute the program under
    these conditions, and telling the user how to view a copy of this
    License.  (Exception: if the Program itself is interactive but
    does not normally print such an announcement, your work based on
    the Program is not required to print an announcement.)

These requirements apply to the modified work as a whole.  If
identifiable sections of that work are not derived from the Program,
and can be reasonably considered independent and separate works in
themselves, then this License, and its terms, do not apply to those
sections when you distribute them as separate works.  But when you
distribute the same sections as part of a whole which is a work based
on the Program, the distribution of the whole must be on the terms of
this License, whose permissions for other licensees extend to the
entire whole, and thus to each and every part regardless of who wrote it.

Thus, it is not the intent of this section to claim rights or contest
your rights to work written entirely by you; rather, the intent is to
exercise the right to control the distribution of derivative or
collective works based on the Program.

In addition, mere aggregation of another work not based on the Program
with the Program (or with a work based on the Program) on a volume of
a storage or distribution medium does not bring the other work under
the scope of this License.

  3. You may copy and distribute the Program (or a work based on it,
under Section 2) in object code or executable form under the terms of
Sections 1 and 2 above provided that you also do one of the following:

    a) Accompany it with the complete corresponding machine-readable
    source code, which must be distributed under the terms of Sections
    1 and 2 above on a medium customarily used for software interchange; or,

    b) Accompany it with a written offer, valid for at least three
    years, to give any third party, for a charge no more than your
    cost of physically performing source distribution, a complete
    machine-readable copy of the corresponding source code, to be
    distributed under the terms of Sections 1 and 2 above on a medium
    customarily used for software interchange; or,

    c) Accompany it with the information you received as to the offer
    to distribute corresponding source code.  (This alternative is
    allowed only for noncommercial distribution and only if you
    received the program in object code or executable form with such
    an offer, in accord with Subsection b above.)

The source code for a work means the preferred form of the work for
making modifications to it.  For an executable work, complete source
code means all the source code for all modules it contains, plus any
associated interface definition files, plus the scripts used to
control compilation and installation of the executable.  However, as a
special exception, the source code distributed need not include
anything that is normally distributed (in either source or binary
form) with the major components (compiler, kernel, and so on) of the
operating system on which the executable runs, unless that component
itself accompanies the executable.

If distribution of executable or object code is made by offering
access to copy from a designated place, then offering equivalent
access to copy the source code from the same place counts as
distribution of the source code, even though third parties are not
compelled to copy the source along with the object code.

  4. You may not copy, modify, sublicense, or distribute the Program
except as expressly provided under this License.  Any attempt
otherwise to copy, modify, sublicense or distribute the Program is
void, and will automatically terminate your rights under this License.
However, parties who have received copies, or rights, from you under
this License will not have their licenses terminated so long as such
parties remain in full compliance.

  5. You are not required to accept this License, since you have not
signed it.  However, nothing else grants you permission to modify or
distribute the Program or its derivative works.  These actions are
prohibited by law if you do not accept this License.  Therefore, by
modifying or distributing the Program (or any work based on the
Program), you indicate your acceptance of this License to do so, and
all its terms and conditions for copying, distributing or modifying
the Program or works based on it.

  6. Each time you redistribute the Program (or any work based on the
Program), the recipient automatically receives a license from the
original licensor to copy, distribute or modify the Program subject to
these terms and conditions.  You may not impose any further
restrictions on the recipients' exercise of the rights granted herein.
You are not responsible for enforcing compliance by third parties to
this License.

  7. If, as a consequence of a court judgment or allegation of patent
infringement or for any other reason (not limited to patent issues),
conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot
distribute so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you
may not distribute the Program at all.  For example, if a patent
license would not permit royalty-free redistribution of the Program by
all those who receive copies directly or indirectly through you, then
the only way you could satisfy both it and this License would be to
refrain entirely from distribution of the Program.

If any portion of this section is held invalid or unenforceable under
any particular circumstance, the balance of the section is intended to
apply and the section as a whole is intended to apply in other
circumstances.

It is not the purpose of this section to induce you to infringe any
patents or other property right claims or to contest validity of any
such claims; this section has the sole purpose of protecting the
integrity of the free software distribution system, which is
implemented by public license practices.  Many people have made
generous contributions to the wide range of software distributed
through that system in reliance on consistent application of that
system; it is up to the author/donor to decide if he or she is willing
to distribute software through any other system and a licensee cannot
impose that choice.

This section is intended to make thoroughly clear what is believed to
be a consequence of the rest of this License.

  8. If the distribution and/or use of the Program is restricted in
certain countries either by patents or by copyrighted interfaces, the
original copyright holder who places the Program under this License
may add an explicit geographical distribution limitation excluding
those countries, so that distribution is permitted only in or among
countries not thus excluded.  In such case, this License incorporates
the limitation as if written in the body of this License.

  9. The Free Software Foundation may publish revised and/or new versions
of the General Public License from time to time.  Such new versions will
be similar in spirit to the present version, but may differ in detail to
address new problems or concerns.

Each version is given a distinguishing version number.  If the Program
specifies a version number of this License which applies to it and "any
later version", you have the option of following the terms and conditions
either of that version or of any later version published by the Free
Software Foundation.  If the Program does not specify a version number of
this License, you may choose any version ever published by the Free Software
Foundation.

  10. If you wish to incorporate parts of the Program into other free
programs whose distribution conditions are different, write to the author
to ask for permission.  For software which is copyrighted by the Free
Software Foundation, write to the Free Software Foundation; we sometimes
make exceptions for this.  Our decision will be guided by the two goals
of preserving the free status of all derivatives of our free software and
of promoting the sharing and reuse of software generally.

			    NO WARRANTY

  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY
FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN
OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES
PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED
OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS
TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE
PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,
REPAIR OR CORRECTION.

  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR
REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,
INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING
OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED
TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY
YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER
PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE
POSSIBILITY OF SUCH DAMAGES.

		     END OF TERMS AND CONDITIONS