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
var uLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
float fLocal_26=0f;
float fLocal_27=0f;
float fLocal_28=0f;
float fLocal_29=0f;
float fLocal_30=0f;
int iLocal_31=0;
#endregion

void main() // Position - 0x0{
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
fLocal_27=9.99f;
fLocal_28=0f;
fLocal_29=0f;
fLocal_30=0f;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_10();
func_7();
SYSTEM::SETTIMERA(0);
SYSTEM::SETTIMERB(0);
while (true){
SYSTEM::WAIT(0);
if(Global_20383.f_1 !=9){
switch (Global_20383.f_1){
case 7:
if(SYSTEM::TIMERA() > 125){
func_10();
SYSTEM::SETTIMERA(0);
}
if(SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_29) * 30 && SYSTEM::TIMERB() > 150){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "APP_FUNCTION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
SYSTEM::SETTIMERB(0);
}
if(SYSTEM::TIMERB() > 2000){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "APP_FUNCTION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
SYSTEM::SETTIMERB(0);
}
break;
case 8:
if(func_6(FRONTEND_CONTROL, Global_20351, 0)){
func_5();
Global_20361=1;
func_10();
func_7();
if(Global_20383.f_1 > 3) Global_20383.f_1=7;
}
break;
default:
break;
}
if(func_4()) func_2();
}else{
Global_20385=6;
func_2();
}
if(func_1()) func_2();
}
return;
}
BOOL func_1() // Position - 0x144{
if(Global_20383.f_1==1 || Global_20383.f_1==3 || Global_20383.f_1==0 || Global_20327==1){
Global_20370=1;
return true;
}
return false;
}


void func_2() // Position - 0x187{
func_3(0, 0);
func_3(1, 0);
func_3(2, 0);
func_3(3, 0);
func_3(4, 0);
MISC::CLEAR_BIT(&Global_8254, 22);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_3(int iParam0, int iParam1) // Position - 0x1BA{
Global_4542550[iParam0]=iParam1;
return;
}
BOOL func_4() // Position - 0x1CC{
if(Global_8859==1 || Global_20383.f_1 < 7){
Global_20370=1;
return true;
}
return false;
}


void func_5() // Position - 0x1F5{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);
return;
}
BOOL func_6(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x216{
if(PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1)){
if(MISC::IS_PC_VERSION())if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()) return false;
else return true;
}
return false;
}


void func_7() // Position - 0x288{
if(Global_20371){
func_8(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
func_8(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
}else{
func_8(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
func_8(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_8(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
return;
}


void func_8(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x31A{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_9(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_9(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_9(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_9(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_9(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_9(const char* sParam0) // Position - 0x3CD{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_10() // Position - 0x3DF{
int i;
BOOL flag;
if(func_18()==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
uLocal_20={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
fLocal_23=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
func_17();
func_16();
func_15();
fLocal_24=360f - fLocal_23;
fLocal_27=fLocal_27 - fLocal_24;
if(fLocal_27 < 0f) fLocal_27=fLocal_27 + 360f;
if(iLocal_31==0){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(IS_BIT_SET(Global_8254, 30)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_27));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_28));
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
if(IS_BIT_SET(Global_8254, 22)) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(IS_BIT_SET(Global_8254, 29)) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
if(IS_BIT_SET(Global_8255, 1)) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_30);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
fLocal_23==fLocal_23;
func_14(Global_20364, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
uLocal_20={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
fLocal_23=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
Global_4542572 > 21;
for (i=0;
i < Global_4542572;
i=i + 1){
func_13(i);
func_12(i);
func_11(i);
fLocal_24=360f - fLocal_23;
fLocal_27=fLocal_27 - fLocal_24;
if(fLocal_27 < 0f) fLocal_27=fLocal_27 + 360f;
if(iLocal_31==0){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
flag=false;
switch (i){
case 0:
if(IS_BIT_SET(Global_4542297, 5)) flag=true;
break;
case 1:
if(IS_BIT_SET(Global_4542297, 6)) flag=true;
break;
case 2:
if(IS_BIT_SET(Global_4542297, 7)) flag=true;
break;
case 3:
if(IS_BIT_SET(Global_4542297, 8)) flag=true;
break;
}
if(flag){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_27));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_28));
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
if(IS_BIT_SET(Global_8254, 22)) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
if(IS_BIT_SET(Global_8254, 29)) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_30);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542550[i]);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
fLocal_23==fLocal_23;
func_14(Global_20364, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}}
return;
}


float func_11(int iParam0) // Position - 0x68E{
fLocal_25=Global_4542486[iParam0 /*3*/] - uLocal_20;
fLocal_26=SYSTEM::COS((3.14159f / 180f) * uLocal_20) * (Global_4542486[iParam0 /*3*/].f_1 - uLocal_20.f_1);
fLocal_27=MISC::ATAN2(fLocal_25, fLocal_26);
if(fLocal_27 < 0f) fLocal_27=fLocal_27 + 360f;
return fLocal_27;
}


float func_12(int iParam0) // Position - 0x6E4{
fLocal_29=SYSTEM::SQRT(SYSTEM::VDIST2(Global_4542486[iParam0 /*3*/], uLocal_20));
fLocal_30=Global_4542486[iParam0 /*3*/].f_2 - uLocal_20.f_2;
return fLocal_29;
}


float func_13(int iParam0) // Position - 0x717{
fLocal_28=SYSTEM::SQRT(((Global_4542486[iParam0 /*3*/] - uLocal_20) * (Global_4542486[iParam0 /*3*/] - uLocal_20)) + ((Global_4542486[iParam0 /*3*/].f_1 - uLocal_20.f_1) * (Global_4542486[iParam0 /*3*/].f_1 - uLocal_20.f_1)));
return fLocal_28;
}


void func_14(Player plParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x75E{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


float func_15() // Position - 0x7C1{
fLocal_25=Global_22831 - uLocal_20;
fLocal_26=SYSTEM::COS((3.14159f / 180f) * uLocal_20) * (Global_22831.f_1 - uLocal_20.f_1);
fLocal_27=MISC::ATAN2(fLocal_25, fLocal_26);
if(fLocal_27 < 0f) fLocal_27=fLocal_27 + 360f;
return fLocal_27;
}


float func_16() // Position - 0x80D{
fLocal_29=SYSTEM::SQRT(SYSTEM::VDIST2(Global_22831, uLocal_20));
fLocal_30=Global_22831.f_2 - uLocal_20.f_2;
return fLocal_29;
}


float func_17() // Position - 0x836{
fLocal_28=SYSTEM::SQRT(((Global_22831 - uLocal_20) * (Global_22831 - uLocal_20)) + ((Global_22831.f_1 - uLocal_20.f_1) * (Global_22831.f_1 - uLocal_20.f_1)));
return fLocal_28;
}

int func_18() // Position - 0x869{
if(Global_78558==1) return 1;
return 0;
}