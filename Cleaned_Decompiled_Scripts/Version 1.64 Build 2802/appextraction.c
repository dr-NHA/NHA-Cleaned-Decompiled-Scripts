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
int iLocal_20=0;
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
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(iLocal_20==0){
func_11();
func_10();
iLocal_20=1;
SYSTEM::SETTIMERA(0);
}
while (true){
SYSTEM::WAIT(0);
if(Global_20383.f_1 !=9){
switch (Global_20383.f_1){
case 7:
if(iLocal_20==1 && SYSTEM::TIMERA() > 1500){
func_6();
SYSTEM::SETTIMERA(0);
}
break;
case 8:
if(func_5(FRONTEND_CONTROL, Global_20351, 0)){
func_4();
Global_20361=1;
if(Global_20383.f_1 > 3) Global_20383.f_1=7;
}
break;
default:
break;
}
if(func_3()) func_2();
}else{
Global_20385=6;
func_2();
}
if(func_1()) func_2();
}
return;
}
BOOL func_1() // Position - 0xE5{
if(Global_20383.f_1==1 || Global_20383.f_1==3 || Global_20383.f_1==0 || Global_20327==1){
Global_20370=1;
return true;
}
return false;
}


void func_2() // Position - 0x128{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}
BOOL func_3() // Position - 0x134{
if(Global_8859==1 || Global_20383.f_1 < 7){
Global_20370=1;
return true;
}
return false;
}


void func_4() // Position - 0x15D{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);
return;
}
BOOL func_5(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x17D{
if(PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1)){
if(MISC::IS_PC_VERSION())if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()) return false;
else return true;
}
return false;
}


void func_6() // Position - 0x1EF{
func_7();
return;
}


void func_7() // Position - 0x1FB{
func_9(Global_20364, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(IS_BIT_SET(Global_4542297, 23)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
func_8("CELL_EXTBYOU" /*You*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542298);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542578));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542299);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542578.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542300);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542578.f_2));
func_8("CELL_BODYG" /*Guard*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542301);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542581));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542302);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542581.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542303);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542581.f_2));
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
func_8("CELL_EXTBYOU" /*You*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542301);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542581));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542302);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542581.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542303);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542581.f_2));
func_8("CELL_EXTBTARG" /*Target*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542298);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542578));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542299);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542578.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542300);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4542578.f_2));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_9(Global_20364, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
return;
}


void func_8(const char* sParam0) // Position - 0x396{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_9(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3A8{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(iParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_10() // Position - 0x40B{
func_7();
return;
}


void func_11() // Position - 0x417{
if(Global_20371){
func_12(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
func_12(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
}else{
func_12(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
func_12(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_12(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
return;
}


void func_12(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x4A9{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_8(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_8(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_8(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_8(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_8(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}