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
var uLocal_18=4;
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
int iLocal_23=0;
int iLocal_24=0;
int iLocal_25=0;
int iLocal_26=0;
float fLocal_27=0f;
float fLocal_28=0f;
float fLocal_29=0f;
float fLocal_30=0f;
BOOL bLocal_31=0;
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
fLocal_27=0.72f;
fLocal_28=0.42f;
fLocal_29=0f;
fLocal_30=0f;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
Global_22791=0;
Global_20583=0;
func_18();
Global_20383.f_1=7;
func_17(Global_20364, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
func_16(Global_20364, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);
while (true){
SYSTEM::WAIT(0);
if(Global_20383.f_1 !=9){
switch (Global_20383.f_1){
case 7:
if(Global_22791==0){
func_15();
func_14();
func_11();
}
break;
case 8:
if(Global_22791==1) func_5();
break;
case 3:
SCRIPT::TERMINATE_THIS_THREAD();
break;
default:
break;
}
if(Global_22791==0){
if(func_4()) func_3();
}elseif(func_2(FRONTEND_CONTROL, Global_20351, 0)){
Global_20361=1;
Global_22791=0;
Global_20383.f_1=7;
func_18();
func_17(Global_20364, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
func_16(Global_20364, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);
}}
if(func_1()) func_3();
}
return;
}
BOOL func_1() // Position - 0x163{
if(Global_20383.f_1==1 || Global_20383.f_1==3 || Global_20383.f_1==0 || Global_20327==1){
Global_20370=1;
return true;
}
return false;
}
BOOL func_2(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x1A6{
if(PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1)){
if(MISC::IS_PC_VERSION())if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()) return false;
else return true;
}
return false;
}


void func_3() // Position - 0x218{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}
BOOL func_4() // Position - 0x224{
if(Global_8859==1 || Global_20383.f_1 < 7){
Global_20370=1;
return true;
}
return false;
}


void func_5() // Position - 0x24D{
GRAPHICS::DRAW_RECT(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, false);
func_6();
return;
}


void func_6() // Position - 0x277{
int i;
fLocal_29=fLocal_27;
fLocal_30=fLocal_28;
func_10(255, 255, 255, 205);
func_9();
func_8(fLocal_29, fLocal_30, &(Global_2028[Global_23013[iLocal_25 /*9*/] /*29*/].f_3), 0);
fLocal_29=fLocal_29 + 0.07f;
func_10(255, 255, 255, 205);
if(Global_23013[iLocal_25 /*9*/].f_2.f_1 < 10) func_7(fLocal_29, fLocal_30, "CELL_506" /*~1~:0~1~*/, Global_23013[iLocal_25 /*9*/].f_2.f_2, Global_23013[iLocal_25 /*9*/].f_2.f_1);
else func_7(fLocal_29, fLocal_30, "CELL_503" /*~1~:~1~*/, Global_23013[iLocal_25 /*9*/].f_2.f_2, Global_23013[iLocal_25 /*9*/].f_2.f_1);
fLocal_29=fLocal_29 + 0.07f;
func_10(255, 255, 255, 205);
func_7(fLocal_29, fLocal_30, "CELL_505" /*~1~/~1~*/, Global_23013[iLocal_25 /*9*/].f_2.f_3, Global_23013[iLocal_25 /*9*/].f_2.f_4);
fLocal_29=fLocal_27;
func_10(255, 255, 255, 205);
fLocal_30=fLocal_30 + 0.02f;
if(Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_8==0) func_9();
HUD::SET_TEXT_WRAP(0f, 0.93f);
func_8(fLocal_29, fLocal_30, &(Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_4), 0);
fLocal_30=fLocal_30 + 0.07f;
for (i=1;
i <=Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_9;
i=i + 1){
func_10(255, 255, 255, 255);
fLocal_30=fLocal_30 + 0.04f;
if(Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_32[i]==-1) func_8(fLocal_29, fLocal_30, &Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_10[i /*4*/], 0);
else func_7(fLocal_29, fLocal_30, &Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_10[i /*4*/], Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_27[i], Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_32[i]);
}
return;
}


void func_7(float fParam0, float fParam1, const char* sParam2, int iParam3, int iParam4) // Position - 0x458{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
return;
}


void func_8(float fParam0, float fParam1, const char* sParam2, int iParam3) // Position - 0x47B{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
return;
}


void func_9() // Position - 0x493{
HUD::SET_TEXT_SCALE(0.4f, 0.4f);
HUD::SET_TEXT_COLOUR(255, 128, 0, 255);
HUD::SET_TEXT_DROPSHADOW(1, 0, 78, 255, 255);
return;
}


void func_10(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4BD{
HUD::SET_TEXT_SCALE(0.3f, 0.3f);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
HUD::SET_TEXT_PROPORTIONAL(true);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
return;
}


void func_11() // Position - 0x4FC{
if(func_2(FRONTEND_CONTROL, Global_20352, 0)){
iLocal_25=uLocal_18[iLocal_24];
Global_22791=1;
func_12(Global_20364, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287" /*Send Photo(s)*/, "CELL_280" /*Take Photo*/, "CELL_285" /*Move*/, "CELL_284" /*Zoom*/, 0);
func_17(Global_20364, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
func_16(Global_20364, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);
Global_20383.f_1=8;
Global_22791=1;
}
return;
}


void func_12(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x57A{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_13(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_13(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_13(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_13(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_13(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_13(const char* sParam0) // Position - 0x62D{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_14() // Position - 0x63F{
if(bLocal_31)if(SYSTEM::TIMERA() > 50) bLocal_31=false;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
if(func_2(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, 0))if(iLocal_24 > 0) iLocal_24=iLocal_24 - 1;
if(func_2(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, 0)){
iLocal_24=iLocal_24 + 1;
if(iLocal_24==iLocal_23) iLocal_24=0;
}}
if(bLocal_31==false){
if(func_2(FRONTEND_CONTROL, Global_20359, 0)){
if(iLocal_24 > 0) iLocal_24=iLocal_24 - 1;
bLocal_31=true;
SYSTEM::SETTIMERA(0);
}
if(func_2(FRONTEND_CONTROL, Global_20360, 0)){
iLocal_24=iLocal_24 + 1;
if(iLocal_24==iLocal_23) iLocal_24=0;
bLocal_31=true;
SYSTEM::SETTIMERA(0);
}}
return;
}


void func_15() // Position - 0x6DC{
int num;
num=0;
fLocal_29=fLocal_27;
fLocal_30=fLocal_28;
iLocal_26=iLocal_23;
while (num < iLocal_26){
func_10(255, 255, 255, 205);
if(num==iLocal_24) func_9();
func_8(fLocal_29, fLocal_30, &(Global_2028[Global_23013[uLocal_18[num] /*9*/] /*29*/].f_3), 0);
fLocal_29=fLocal_29 + 0.07f;
func_10(255, 255, 255, 205);
if(Global_23013[uLocal_18[num] /*9*/].f_2.f_1 < 10) func_7(fLocal_29, fLocal_30, "CELL_506" /*~1~:0~1~*/, Global_23013[uLocal_18[num] /*9*/].f_2.f_2, Global_23013[uLocal_18[num] /*9*/].f_2.f_1);
else func_7(fLocal_29, fLocal_30, "CELL_503" /*~1~:~1~*/, Global_23013[uLocal_18[num] /*9*/].f_2.f_2, Global_23013[uLocal_18[num] /*9*/].f_2.f_1);
fLocal_29=fLocal_29 + 0.07f;
func_10(255, 255, 255, 205);
func_7(fLocal_29, fLocal_30, "CELL_505" /*~1~/~1~*/, Global_23013[uLocal_18[num] /*9*/].f_2.f_3, Global_23013[uLocal_18[num] /*9*/].f_2.f_4);
fLocal_29=fLocal_27;
func_10(255, 255, 255, 205);
if(num==iLocal_24) func_9();
fLocal_30=fLocal_30 + 0.02f;
HUD::SET_TEXT_WRAP(0f, 0.93f);
func_8(fLocal_29, fLocal_30, &Global_22844[Global_23013[uLocal_18[num] /*9*/].f_1 /*42*/], 0);
fLocal_30=fLocal_30 + 0.05f;
num=num + 1;
}
return;
}


void func_16(Player plParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x83F{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
func_13(sParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)) func_13(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)) func_13(sParam4);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)) func_13(sParam5);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)) func_13(sParam6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_17(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x89A{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(iParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_18() // Position - 0x8FD{
var unk;
int i;
int num;
int num2;
iLocal_23=0;
unk=4;
for (i=0;
i < 4;
i=i + 1){
num=0;
num2=3;
Global_23013[num2 /*9*/].f_2=-1;
Global_23013[num2 /*9*/].f_2.f_1=0;
Global_23013[num2 /*9*/].f_2.f_2=0;
Global_23013[num2 /*9*/].f_2.f_3=0;
Global_23013[num2 /*9*/].f_2.f_5=0;
while (num < 4){
if(unk[num]==0)if(Global_23013[num /*9*/].f_8 !=0)if(func_19(Global_23013[num /*9*/].f_2, Global_23013[num2 /*9*/].f_2)) num2=num;
num=num + 1;
}
uLocal_18[i]=num2;
unk[num2]=1;
if(Global_23013[i /*9*/].f_8 !=0) iLocal_23=iLocal_23 + 1;
}
func_12(Global_20364, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287" /*Send Photo(s)*/, "CELL_280" /*Take Photo*/, 0, 0, 0);
return;
}
BOOL func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x9E8{
int num;
int num2;
int num3;
int num4;
if(iParam0.f_5 < iParam6.f_5) return false;
if(iParam0.f_5 > iParam6.f_5) return true;
if(iParam0.f_5==iParam6.f_5){
if(iParam0.f_4 < iParam6.f_4) return false;
if(iParam0.f_4 > iParam6.f_4) return true;
if(iParam0.f_4==iParam6.f_4){
num=iParam0;
num.f_1=iParam0.f_1 * 60;
num.f_2=iParam0.f_2 * 3600;
num.f_3=iParam0.f_3 * 86400;
num3=num + num.f_1 + num.f_2 + num.f_3;
num2=iParam6;
num2.f_1=iParam6.f_1 * 60;
num2.f_2=iParam6.f_2 * 3600;
num2.f_3=iParam6.f_3 * 86400;
num4=num2 + num2.f_1 + num2.f_2 + num2.f_3;
if(num3 > num4 || num3==num4) return true;
else return false;
}}
return false;
}