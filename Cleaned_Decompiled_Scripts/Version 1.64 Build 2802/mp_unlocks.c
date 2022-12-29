//Cleaned With dr NHA's C Script Cleaner V2.72
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
char* sLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
float fLocal_62=0f;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=-1;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
float fLocal_103=0f;
float fLocal_104=0f;
float fLocal_105=0f;
float fLocal_106=0f;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
int iLocal_116=0;
var uLocal_117=0;
float fLocal_118=0f;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
int iLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
int iLocal_139=0;
int iLocal_140=0;
BOOL bLocal_141=0;
var uLocal_142=0;
int iLocal_143=0;
int iLocal_144=0;
int iScriptParam_0=0;
var uScriptParam_1=0;
var uScriptParam_2=0;
var uScriptParam_3=0;
#endregion

void main() // Position - 0x0{
var lastItemMenuId;
int selectedItemMenuId;
int selectedItemUniqueId;
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_18="NULL";
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
fLocal_28=0f;
fLocal_32=-0.0375f;
fLocal_33=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=(0.05f + 0.275f) - 0.01f;
fLocal_103=3f;
fLocal_104=0f;
fLocal_105=2f;
fLocal_106=100f;
iLocal_116=-1;
fLocal_118=0.5f;
iLocal_134=50 + 1000;
iLocal_135=58 + 1000;
iLocal_144=39;
HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
if(func_58() || func_57() || MISC::IS_PC_VERSION()) iLocal_144=40;
switch (iScriptParam_0){
case 3:
while (iLocal_136==0){
SYSTEM::WAIT(0);
func_53();
if(func_49(202)){
HUD::RELEASE_CONTROL_OF_FRONTEND();
iLocal_136=1;
}
if(HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED()){
if(iLocal_143==0){
if(func_48()) func_45();
}else{
HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&lastItemMenuId, &selectedItemMenuId, &selectedItemUniqueId);
if(selectedItemMenuId==50){
iLocal_140=selectedItemUniqueId;
func_1(&uLocal_142);
}}}}
break;
case 0:
break;
case 1:
break;
case 2:
break;
}
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("RScrollUpDown"));
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
HUD::RELEASE_CONTROL_OF_FRONTEND();
while (true){
SYSTEM::WAIT(0);
}
return;
}

int func_1(var uParam0) // Position - 0x188{
int num;
int i;
int num2;
int num3;
func_44(0, iLocal_140, false, true);
func_43(1);
num=0;
switch (iLocal_140){
case 0:
for (i=0;
i < 13;
i=i + 1){
num2=func_42(i);
num3=func_39(i);
if(num2 > num3) num3=num2;
func_37(&num, num2, num3);
}
break;
case 1:
for (i=0;
i < 49;
i=i + 1){
func_29(&num, func_30(i));
}
break;
case 2:
func_16(&num, "PM_UCON_T21" /*Crate Drop*/, func_18(31, false, false));
func_16(&num, "PM_UCON_T22" /*Impromptu Race*/, func_18(32, false, false));
func_16(&num, "PM_UCON_T0" /*Deathmatch (from Rank 1)*/, func_18(1, false, false));
func_16(&num, "PM_UCON_T1" /*Race (from Rank 1)*/, func_18(2, false, false));
func_16(&num, "PM_UCON_T2" /*Stunt Jumps (from Rank 2)*/, func_18(21, false, false));
func_16(&num, "PM_UCON_T3" /*Car Mod Shop (from Rank 3)*/, func_18(59, false, false));
func_16(&num, "PM_UCON_T4" /*Hold Ups (from Rank 3)*/, func_18(30, false, false));
func_16(&num, "PM_UCON_T6" /*One on One Deathmatch (from Rank 3)*/, func_18(1, false, false));
func_16(&num, "PM_UCON_T5" /*Pegasus (from Rank 3)*/, func_18(90, false, false));
func_16(&num, "PM_UCON_T8" /*Shooting Range (from Rank 3)*/, func_18(13, false, false));
func_16(&num, "PM_UCON_T7" /*Shops (from Rank 3)*/, func_18(22, false, false));
func_16(&num, "PM_UCON_T9" /*Garages (from Rank 5)*/, func_18(60, false, false));
func_16(&num, "PM_UCON_T11" /*Movies (from Rank 5)*/, func_18(23, false, false));
func_16(&num, "PM_UCON_T10" /*Personal Vehicle Delivery (from Rank 5)*/, func_18(76, false, false));
func_16(&num, "PM_UCON_T15" /*Arm Wrestling (from Rank 6)*/, func_18(15, false, false));
func_16(&num, "PM_UCON_T14" /*Darts (from Rank 6)*/, func_18(14, false, false));
func_16(&num, "PM_UCON_T13" /*Golf (from Rank 6)*/, func_18(11, false, false));
func_16(&num, "PM_UCON_T38" /*San Andreas Flight School (from Rank 6)*/, func_18(122, false, false));
func_16(&num, "PM_UCON_T16" /*Strip Club (from Rank 6)*/, func_18(27, false, false));
func_16(&num, "PM_UCON_T12" /*Tennis (from Rank 6)*/, func_18(12, false, false));
func_16(&num, "PM_UCON_T43" /*Captures (From Rank 8)*/, func_18(4, false, false));
func_16(&num, "PM_UCON_T17" /*Import/Export (from Rank 8)*/, func_18(19, false, false));
func_16(&num, "PM_UCON_T18" /*Bounties (from Rank 10)*/, func_18(29, false, false));
func_16(&num, "PM_UCON_T19" /*Parachuting (from Rank 11)*/, func_18(8, false, false));
func_16(&num, "PM_UCON_T20" /*Ammo Drop (from Rank 12)*/, func_18(61, false, false));
func_16(&num, "PM_UCON_T42" /*Cops Turn Blind Eye (From Rank 12)*/, func_18(119, false, false));
func_16(&num, "PM_UCON_T49" /*Heists (from Rank 12)*/, func_18(96, false, false));
func_16(&num, "PM_UCON_T41" /*Destroy Vehicle (from Rank 15)*/, func_18(127, false, false));
func_16(&num, "PM_UCON_T39" /*Distract Cops (from Rank 15)*/, func_18(126, false, false));
func_16(&num, "PM_UCON_T48" /*Daily Objectives (from Rank 15)*/, func_18(78, false, false));
func_16(&num, "PM_UCON_T40" /*Plane Takedown (from Rank 15)*/, func_18(124, false, false));
func_16(&num, "PM_UCON_T44" /*Locate a Car (From Rank 15)*/, func_18(103, false, false));
func_16(&num, "PM_UCON_T23" /*Survival (from Rank 15)*/, func_18(3, false, false));
func_16(&num, "PM_UCON_T24" /*Bull Shark Testosterone (from Rank 17)*/, func_18(74, false, false));
func_16(&num, "PM_UCON_T25" /*Gang Attack (from Rank 18)*/, func_18(6, false, false));
func_16(&num, "PM_UCON_T26" /*Armored Truck (from Rank 19)*/, func_18(20, false, false));
func_16(&num, "PM_UCON_T27" /*Backup Helicopter (from Rank 20)*/, func_18(62, false, false));
func_16(&num, "PM_UCON_T28" /*Remove Wanted Level (from Rank 21)*/, func_18(65, false, false));
func_16(&num, "PM_UCON_T29" /*Boat Pickup (from Rank 25)*/, func_18(63, false, false));
func_16(&num, "PM_UCON_T45" /*Locate a Boat (From Rank 25)*/, func_18(104, false, false));
func_16(&num, "PM_UCON_T30" /*Helicopter Pickup (from Rank 30)*/, func_18(77, false, false));
func_16(&num, "PM_UCON_T46" /*Locate a Helicopter (From Rank 35)*/, func_18(98, false, false));
func_16(&num, "PM_UCON_T31" /*Send Mercenaries (from Rank 35)*/, func_18(81, false, false));
func_16(&num, "PM_UCON_T32" /*Off the Radar (from Rank 40)*/, func_18(75, false, false));
func_16(&num, "PM_UCON_T33" /*Reveal Players (from Rank 40)*/, func_18(95, false, false));
func_16(&num, "PM_UCON_T47" /*Locate a Plane (From Rank 45)*/, func_18(105, false, false));
func_16(&num, "PM_UCON_T35" /*Airstrike (from Rank 50)*/, func_18(64, false, false));
func_16(&num, "PM_UCON_T34" /*Mugger (from Rank 50)*/, func_18(67, false, false));
func_16(&num, "PM_UCON_T37" /*Benefactor Dubsta 6x6 Vehicle (from Rank 100)*/, func_9(func_11(PLAYER::PLAYER_ID(), true), false) >=100);
func_16(&num, "PM_UCON_T36" /*Gold Metal Vehicle Resprays (from Rank 100)*/, func_9(func_11(PLAYER::PLAYER_ID(), true), false) >=func_8(4, 170));
break;
}
if(num > 16){
bLocal_141=true;
func_7(1, 2, 1, 1, 0, false);
func_5(1, 0, num, 0, false);
HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("RScrollUpDown"));
}else{
bLocal_141=false;
func_5(1, -1, -1, 0, false);
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("RScrollUpDown"));
}
HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
func_4(1);
func_2(1);
*uParam0=1;
return 1;
}


void func_2(int iParam0) // Position - 0x5F4{
func_3(iParam0, true);
return;
}


void func_3(int iParam0, BOOL bParam1) // Position - 0x603{
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(iParam0==2)if(bParam1) MISC::CLEAR_BIT(&Global_1574941, iParam0);
else MISC::SET_BIT(&Global_1574941, iParam0);
return;
}


void func_4(int iParam0) // Position - 0x648{
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
return;
}


void func_5(int iParam0, int iParam1, int iParam2, const char* sParam3, BOOL bParam4) // Position - 0x665{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_6("");
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_6(char* sParam0) // Position - 0x6C2{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6D4{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}

int func_8(int iParam0, int iParam1) // Position - 0x717{
if(iParam0==3){
switch (iParam1){
case 134:
return 0;
case 136:
return 1;
case 137:
return 1;
case 169:
return 1;
}}elseif(iParam0==1){
switch (iParam1){
case 133:
return 0;
}}elseif(iParam0==4){
switch (iParam1){
case 135:
return 1;
case 170:
return 100;
}}
switch (iParam1){
case 148:
return 5;
case 149:
return 10;
case 150:
return 25;
case 151:
return 50;
case 155:
return 5;
case 156:
return 10;
case 157:
return 25;
case 158:
return 50;
case 152:
return 5;
case 153:
return 10;
case 154:
return 25;
case 159:
return 25;
case 160:
return 50;
case 161:
return 100;
case 162:
return 5;
case 163:
return 10;
case 164:
return 25;
case 165:
return 50;
}
if(iParam0==1 || iParam0==2 || iParam0==0){
switch (iParam1){
case 138:
return 7;
case 139:
return 9;
case 140:
return 11;
case 141:
return 13;
case 142:
return 15;
case 143:
return 17;
case 144:
return 19;
case 145:
return 21;
case 146:
return 23;
case 147:
return 25;
case 166:
return 1;
case 167:
return 1;
case 168:
return 1;
default:
}}
return 0;
}

int func_9(int iParam0, BOOL bParam1) // Position - 0x955{
bParam1;
return func_10(iParam0, 0);
}

int func_10(int iParam0, int iParam1) // Position - 0x969{
int i;
int value;
int value2;
int num;
float value3;
iParam1==0;
value=8000;
value2=0;
num=(value - value2) / 2;
for (i=0;
i <=100;
i=i + 1){
if(value==value2){
i=8000;
if(num==0) num=1;
return num;
}
if(Global_297010[num]==iParam0){
value=num;
value2=num;
}elseif(Global_297010[num] < iParam0){
if(value2==num) value2=value2 + 1;
else value2=num;
}elseif(value==num){
value=value - 1;
}else{
value=num;
}
value3=((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
num=SYSTEM::ROUND(value3);
}
return 8000;
}

int func_11(Player plParam0, BOOL bParam1) // Position - 0xA28{
bParam1;
return func_12(plParam0);
}

int func_12(Player plParam0) // Position - 0xA3B{
if(Global_1574632.f_9==0)if(plParam0 > -1)if(plParam0==PLAYER::PLAYER_ID()) return Global_1665638[func_14(-1)];
elseif(func_13(plParam0)) return Global_1853910[plParam0 /*862*/].f_205.f_1;
else return Global_1665638[func_14(-1)];
return 0;
}
BOOL func_13(Player plParam0) // Position - 0xA98{
if(plParam0==-1) return false;
else return IS_BIT_SET(Global_2672505.f_1, plParam0);
return true;
}

int func_14(int iParam0) // Position - 0xABA{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_15();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_15() // Position - 0xAEE{
return Global_1574918;
}


void func_16(var uParam0, char* sParam1, BOOL bParam2) // Position - 0xAFA{
func_17(1, *uParam0, iLocal_135, *uParam0, sParam1, bParam2, 1);
*uParam0=*uParam0 + 1;
return;
}


void func_17(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, BOOL bParam5, int iParam6) // Position - 0xB1C{
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_6(sParam4);
if(bParam5==true)if(iParam6==0) func_6("PM_UJOB_YES" /*Yes*/);
else func_6("PM_UCON_ULK" /*Unlocked*/);
elseif(iParam6==0) func_6("PM_UJOB_NO" /*No*/);
else func_6("PM_UCON_LCK" /*Locked*/);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
return;
}
BOOL func_18(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB9B{
int num;
int num2;
if(Global_262145.f_8146==1){
if(iParam0==67) return true;
if(iParam0==74) return true;
if(func_22(PLAYER::PLAYER_ID(), 85))if(iParam0==64 || iParam0==77 || iParam0==61 || iParam0==81 || iParam0==63 || iParam0==62) return true;
if(iParam0==66 || iParam0==116 || iParam0==103 || iParam0==104 || iParam0==105 || iParam0==119 || iParam0==88 || iParam0==75 || iParam0==95 || iParam0==65 || iParam0==98) return true;
}
if(iParam0 < 0) return false;
if(iParam0==31)if(Global_262145.f_4747==1) return true;
if(func_21() || func_20()) return true;
num=iParam0;
num2=num / 32;
num=num % 32;
if(bParam1)if(iParam0==3)if(func_19()) return true;
else return false;
if(bParam2) return false;
return IS_BIT_SET(Global_1836844[num2], num);
}
BOOL func_19() // Position - 0xD06{
int num;
if(Global_1574612) return true;
if(IS_BIT_SET(Global_2793044.f_1824, 23)) return true;
if(func_21()) return true;
if(func_20()) return true;
num=Global_1665626[func_14(-1)];
if(IS_BIT_SET(num, 7)){
MISC::SET_BIT(&(Global_2793044.f_1824), 23);
return true;
}
return false;
}
BOOL func_20() // Position - 0xD66{
return Global_1575048;
}
BOOL func_21() // Position - 0xD72{
return Global_1575050;
}
BOOL func_22(Player plParam0, int iParam1) // Position - 0xD7E{
if(!func_26()) return false;
if(func_25()) return false;
if(iParam1==86) return true;
return func_23(&(Global_1853910[plParam0 /*862*/].f_792), func_24(iParam1));
}
BOOL func_23(var uParam0, int iParam1) // Position - 0xDBE{
int num;
int num2;
int num3;
num=iParam1;
num2=num / 32;
num3=num % 32;
return IS_BIT_SET(uParam0->[num2], num3);
}

int func_24(int iParam0) // Position - 0xDE1{
switch (iParam0){
case 86:
return 0;
case 19:
return 1;
case 12:
return 2;
case 31:
return 3;
case 20:
return 4;
case 18:
return 5;
case 2:
return 6;
case 76:
return 7;
case 22:
return 8;
case 53:
return 9;
case 34:
return 10;
case 152:
return 11;
case 85:
return 12;
case 84:
return 13;
case 0:
return 14;
case 1:
return 15;
case 153:
return 16;
case 151:
return 17;
case 14:
return 18;
case 15:
return 19;
case 24:
return 20;
case 30:
return 21;
case 46:
return 22;
case 47:
return 23;
case 54:
return 24;
case 51:
return 25;
case 60:
return 26;
case 62:
return 27;
case 66:
return 28;
case 69:
return 29;
case 154:
return 30;
case 82:
return 31;
case 157:
return 32;
case 167:
return 34;
case 169:
return 35;
case 171:
return 36;
case 172:
return 37;
case 173:
return 38;
case 177:
return 39;
case 182:
return 40;
case 188:
return 41;
default:
}
return 1;
}
BOOL func_25() // Position - 0xFAC{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143, 3);
}
BOOL func_26() // Position - 0xFC3{
if(!func_27()) return false;
return true;
}
BOOL func_27() // Position - 0xFD8{
if(Global_1574612) return true;
if(func_21()) return true;
if(func_20()) return true;
return func_28(120, -1);
}
BOOL func_28(int iParam0, int iParam1) // Position - 0x1008{
Hash statHash;
BOOL outValue;
statHash=Global_2848280[iParam0 /*3*/][func_14(iParam1)];
if(STATS::STAT_GET_BOOL(statHash, &outValue, -1)) return outValue;
return false;
}


void func_29(var uParam0, BOOL bParam1) // Position - 0x1034{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "PM_UJOB_T", 16);
TEXT_LABEL_APPEND_INT(&unk, *uParam0, 16);
func_17(1, *uParam0, iLocal_135, *uParam0, &unk, bParam1, 0);
*uParam0=*uParam0 + 1;
return;
}
BOOL func_30(int iParam0) // Position - 0x1065{
switch (iParam0){
case 0:
return func_28(78, -1);
case 1:
return func_28(79, -1);
case 2:
return func_28(80, -1);
case 3:
return func_36(30, -1);
case 4:
return func_28(81, -1);
case 5:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRBASEJUMP, -1, 0) > 0;
case 6:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRDM, -1, 0) > 0;
case 7:
return func_28(83, -1);
case 8:
return func_36(11, -1);
case 9:
return func_28(95, -1);
case 10:
return func_28(96, -1);
case 11:
return func_28(97, -1);
case 12:
return func_36(8, -1);
case 13:
return func_36(9, -1);
case 14:
return func_28(98, -1);
case 15:
return func_28(99, -1);
case 16:
return func_34(27, -1) > 0;
case 17:
return func_36(3, -1);
case 18:
return func_36(2, -1);
case 19:
return func_36(4, -1);
case 20:
return func_28(100, -1);
case 21:
return func_36(31, -1);
case 22:
return func_28(102, -1);
case 23:
return func_28(103, -1);
case 24:
return func_28(104, -1);
case 25:
return func_28(105, -1);
case 26:
return func_28(107, -1);
case 27:
return func_28(84, -1);
case 28:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRMISSION, -1, 0) > 0;
case 29:
return func_28(85, -1);
case 30:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRGOLF, -1, 0) > 0;
case 31:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRTENNIS, -1, 0) > 0;
case 32:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRDARTS, -1, 0) > 0;
case 33:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRSHOOTRNG, -1, 0) > 0;
case 34:
return _MPCHAR_STAT_GET_INT(MP_STAT_BETAMOUNT, -1, 0) > 0;
case 35:
return func_28(86, -1);
case 36:
if(_MPPLY_STAT_GET_INT(joaat("MPPLY_RACE_2_POINT_WINS")) > 0 || _MPPLY_STAT_GET_INT(joaat("MPPLY_RACE_2_POINT_LOST")) > 0) return true;
else return false;
break;
case 37:
return func_36(27, -1);
case 38:
return func_36(26, -1);
case 39:
return _MPCHAR_STAT_GET_INT(MP_STAT_CRARMWREST, -1, 0) > 0;
case 40:
return _MPCHAR_STAT_GET_INT(MP_STAT_TOTAL_NO_SHOPS_HELD_UP, -1, 0) > 0;
case 41:
return func_36(5, -1);
case 42:
return func_36(1, -1);
case 43:
return _MPCHAR_STAT_GET_INT(MP_STAT_CR_GANGATTACK_CITY, -1, 0) > 0 || _MPCHAR_STAT_GET_INT(MP_STAT_CR_GANGATTACK_COUNTRY, -1, 0) > 0;
case 44:
return func_36(10, -1);
case 45:
return func_28(90, -1);
case 46:
return func_36(25, -1);
case 47:
return func_32();
case 48:
return func_31();
}
return false;
}
BOOL func_31() // Position - 0x13DC{
int num;
num=0;
if(func_34(128, -1) > 0) num=1;
return num;
}
BOOL func_32() // Position - 0x13F7{
int num;
num=0;
if(_MPCHAR_STAT_GET_INT(MP_STAT_CRPILOTSCHOOL, -1, 0) > 0) num=1;
return num;
}
int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x1414{
Hash statHash;
int outValue;
statHash=hParam0;
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
return 0;
}

int func_34(int iParam0, int iParam1) // Position - 0x1432{
Hash statHash;
int outValue;
statHash=Global_2850192[iParam0 /*3*/][func_14(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
return 0;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x145E{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_14(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}
BOOL func_36(int iParam0, int iParam1) // Position - 0x149B{
if(iParam1==-1) iParam1=func_15();
return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}


void func_37(var uParam0, int iParam1, int iParam2) // Position - 0x14B7{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "PM_UGEN_T", 16);
TEXT_LABEL_APPEND_INT(&unk, *uParam0, 16);
func_38(1, *uParam0, iLocal_135, *uParam0, &unk, "PM_UGEN_NUM" /*~1~/~1~*/, iParam1, iParam2);
*uParam0=*uParam0 + 1;
return;
}


void func_38(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7) // Position - 0x14ED{
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_6(sParam4);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
return;
}

int func_39(int iParam0) // Position - 0x1547{
int num;
switch (iParam0){
case 0:
return Global_794709.f_183669[2];
case 1:
return Global_794709.f_183669[1];
case 2:
return Global_794709.f_183669[8];
case 3:
return Global_794709.f_183669[3];
case 4:
return Global_794709.f_183669[0];
case 5:
if(func_41() || func_40() || MISC::IS_PC_VERSION() || func_57() || func_58()){
num=num + 2;
num=num + 2;
num=num + 1;
num=num + 7;
if(Global_262145.f_22991) num=num + 1;
if(*Global_262145.f_32865) num=num + 1;
return 47 + num;
}else{
return 44;
}
break;
case 6:
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() || func_41() || func_40()){
num=0;
num=num + 19;
num=num + 8;
return Global_262145.f_21858 + num;
}else{
return Global_262145.f_21858;
}
break;
case 7:
return 205;
case 8:
return 106;
case 9:
return 60;
case 10:
return 180;
case 11:
return 89 + iLocal_144;
case 12:
return 10;
}
return -1;
}
BOOL func_40() // Position - 0x16D6{
return 1;
}
BOOL func_41() // Position - 0x16DF{
return true;
}

int func_42(int iParam0) // Position - 0x16E8{
int num;
switch (iParam0){
case 0:
return Global_794709.f_183683[2];
case 1:
return Global_794709.f_183683[1];
case 2:
return Global_794709.f_183683[8];
case 3:
return Global_794709.f_183683[3];
case 4:
return Global_794709.f_183683[0];
case 5:
return _MPCHAR_STAT_GET_INT(MP_STAT_NO_WEAPONS_UNLOCK, -1, 0);
case 6:
return _MPCHAR_STAT_GET_INT(MP_STAT_NO_WEAPON_MODS_UNLOCK, -1, 0);
case 7:
return _MPCHAR_STAT_GET_INT(MP_STAT_NO_MASKS_UNLOCK, -1, 0) - 1;
case 8:
return _MPCHAR_STAT_GET_INT(MP_STAT_NO_HAIR_UNLOCK, -1, 0);
case 9:
return _MPCHAR_STAT_GET_INT(MP_STAT_NO_MAKEUP_UNLOCK, -1, 0);
case 10:
return _MPCHAR_STAT_GET_INT(MP_STAT_NO_TATTOOS_UNLOCK, -1, 0);
case 11:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_PLAT_AWARD_COUNT, -1, 0);
case 12:
if(func_28(381, -1)) num=num + 1;
if(func_28(382, -1)) num=num + 1;
if(func_28(383, -1)) num=num + 1;
if(func_28(384, -1)) num=num + 1;
if(func_28(385, -1)) num=num + 1;
if(func_28(386, -1)) num=num + 1;
if(func_28(387, -1)) num=num + 1;
if(func_28(388, -1)) num=num + 1;
if(func_28(389, -1)) num=num + 1;
if(func_28(390, -1)) num=num + 1;
return num;
}
return -1;
}


void func_43(int iParam0) // Position - 0x189A{
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY")) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_44(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18B7{
if(iParam1==-1) return;
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
return;
}


void func_45() // Position - 0x18EF{
var lastItemMenuId;
var selectedItemMenuId;
var selectedItemUniqueId;
HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&lastItemMenuId, &selectedItemMenuId, &selectedItemUniqueId);
func_43(0);
iLocal_140=0;
func_47(0, 0, iLocal_134, 0, true, "PM_UL_D0" /*General*/, false, 0, false);
func_47(0, 1, iLocal_134, 1, true, "PM_UL_D1" /*Progress*/, false, 0, false);
func_47(0, 2, iLocal_134, 2, true, "PM_UL_D2" /*Content*/, false, 0, false);
func_2(0);
func_46(2);
func_46(3);
func_46(4);
func_46(5);
func_4(0);
func_1(&uLocal_142);
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("RScrollUpDown"));
HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
iLocal_143=1;
return;
}


void func_46(int iParam0) // Position - 0x197B{
func_3(iParam0, false);
return;
}


void func_47(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, char* sParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x198A{
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(bParam4) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_6(sParam5);
if(bParam6) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(bParam8){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(21);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam8);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
return;
}
BOOL func_48() // Position - 0x1A04{
int i;
for (i=0;
i < 13;
i=i + 1){
Global_794709.f_183683[i]=0;
}
for (i=0;
i < 1800;
i=i + 1){
if(IS_BIT_SET(Global_794709.f_4[i /*88*/].f_76, 14))if(Global_794709.f_4[i /*88*/].f_65 < 13 && Global_794709.f_4[i /*88*/].f_70 <=1000) Global_794709.f_183683[Global_794709.f_4[i /*88*/].f_65]=Global_794709.f_183683[Global_794709.f_4[i /*88*/].f_65] + 1;
}
return true;
}
BOOL func_49(eControlAction ecaParam0) // Position - 0x1AAB{
eControlAction action;
int num;
int offset;
action=ecaParam0;
num=func_52(action);
offset=func_51(action);
if(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, ecaParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, ecaParam0) || func_50(ecaParam0, &(Global_1653913.f_1060), 1)){
if(!IS_BIT_SET(Global_1653913.f_1049[num], offset)){
MISC::SET_BIT(&Global_1653913.f_1049[num], offset);
return true;
}}elseif(IS_BIT_SET(Global_1653913.f_1049[num], offset)){
MISC::CLEAR_BIT(&Global_1653913.f_1049[num], offset);
}
return false;
}
BOOL func_50(eControlAction ecaParam0, var uParam1, int iParam2) // Position - 0x1B3F{
int num;
int num2;
int num3;
num=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 127;
num2=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 127;
num3=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X) - 127;
switch (ecaParam0){
case INPUT_FRONTEND_LEFT:
if(num < -30){
if(*uParam1 < MISC::GET_GAME_TIMER() || iParam2==0){
*uParam1=MISC::GET_GAME_TIMER() + 250;
return true;
}}
break;
case INPUT_FRONTEND_RIGHT:
if(num > 30){
if(*uParam1 < MISC::GET_GAME_TIMER() || iParam2==0){
*uParam1=MISC::GET_GAME_TIMER() + 250;
return true;
}}
break;
case INPUT_FRONTEND_UP:
if(num2 < -30){
if(*uParam1 < MISC::GET_GAME_TIMER() || iParam2==0){
*uParam1=MISC::GET_GAME_TIMER() + 250;
return true;
}}
break;
case INPUT_FRONTEND_DOWN:
if(num2 > 30){
if(*uParam1 < MISC::GET_GAME_TIMER() || iParam2==0){
*uParam1=MISC::GET_GAME_TIMER() + 250;
return true;
}}
break;
case INPUT_FRONTEND_RRIGHT:
if(num3 > 30){
if(*uParam1 < MISC::GET_GAME_TIMER() || iParam2==0){
*uParam1=MISC::GET_GAME_TIMER() + 250;
return true;
}}
break;
case INPUT_FRONTEND_RLEFT:
if(num3 < -30){
if(*uParam1 < MISC::GET_GAME_TIMER() || iParam2==0){
*uParam1=MISC::GET_GAME_TIMER() + 250;
return true;
}}
break;
}
return false;
}

int func_51(eControlAction ecaParam0) // Position - 0x1CA2{
return ecaParam0 % 32;
}

int func_52(eControlAction ecaParam0) // Position - 0x1CAF{
return ecaParam0 / 32;
}


void func_53() // Position - 0x1CBC{
int controlValue;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
controlValue=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y);
if(controlValue > 180){
if(_STOPWATCH_HAS_TIME_PASSED(&uLocal_137, iLocal_139, false)){
if(bLocal_141){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iLocal_139=250;
_STOPWATCH_DESTROY(&uLocal_137);
}}}elseif(controlValue < 80){
if(_STOPWATCH_HAS_TIME_PASSED(&uLocal_137, iLocal_139, false)){
if(bLocal_141){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iLocal_139=250;
_STOPWATCH_DESTROY(&uLocal_137);
}}}elseif(iLocal_139 !=-1){
iLocal_139=-1;
}}
return;
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0x1D79{
uParam0->f_1=0;
return;
}
BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x1D86{
if(millis==-1) return true;
_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >=millis) return true;
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >=millis) return true;
return false;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1DE4{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL func_57() // Position - 0x1E29{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_58() // Position - 0x1E3F{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}