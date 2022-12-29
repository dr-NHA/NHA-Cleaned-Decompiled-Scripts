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
char* sLocal_20=0;
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
int iLocal_50=0;
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
var uLocal_62=0;
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
var uLocal_84=1;
var uLocal_85=3;
var uLocal_86=3;
var uLocal_87=3;
var uLocal_88=0;
var uLocal_89=8;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=8;
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
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=4;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
Cam caLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
var uLocal_171=0;
var uLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=-1;
var uLocal_188=-1;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=0;
var uLocal_194=0;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=0;
var uLocal_201=0;
var uLocal_202=0;
var uLocal_203=0;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=0;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=-1;
var uLocal_217=0;
var uLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
var uLocal_223=0;
var uScriptParam_0=0;
var uScriptParam_1=0;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
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
sLocal_20="NULL";
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
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_134(&uScriptParam_0);
else func_125();
while (true){
func_124();
PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);
PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()) func_125();
if(func_115()) func_125();
func_1();
}
return;
}


void func_1() // Position - 0xBA{
func_109(0);
CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
switch (caLocal_160.f_16){
case 0:
func_106();
break;
case 1:
func_2();
break;
}
return;
}


void func_2() // Position - 0xEF{
if(IS_BIT_SET(Global_2764742, 1)){
MISC::CLEAR_BIT(&Global_2764742, 1);
func_96(Global_2764741);
}
if(caLocal_160.f_61 !=Global_2764872){
caLocal_160.f_61={
Global_2764872 
};
}else{
caLocal_160.f_61.f_1=0;
caLocal_160.f_61.f_2=0;
}
if(!HUD::IS_PAUSE_MENU_ACTIVE() && !func_95()){
func_50();
func_41();
func_37();
func_34();
func_33();
func_13();
}
func_10(&(uLocal_64.f_67), IS_BIT_SET(caLocal_160.f_60, 3));
func_3(&(caLocal_160.f_38), &(caLocal_160.f_39));
MISC::CLEAR_BIT(&Global_2764742, 4);
MISC::CLEAR_BIT(&(caLocal_160.f_60), 1);
MISC::CLEAR_BIT(&(caLocal_160.f_60), 2);
MISC::CLEAR_BIT(&(caLocal_160.f_60), 3);
MISC::CLEAR_BIT(&(caLocal_160.f_60), 6);
MISC::CLEAR_BIT(&(caLocal_160.f_60), 7);
return;
}


void func_3(var uParam0, var uParam1) // Position - 0x1B3{
float finalRenderedCamCoord;
Cam renderingCam;
float finalRenderedCamRot;
func_9();
finalRenderedCamCoord={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
if(HUD::IS_PAUSE_MENU_ACTIVE() || func_8() || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 199) || PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE)){
HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(finalRenderedCamCoord, finalRenderedCamCoord.f_1);
HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(finalRenderedCamCoord, finalRenderedCamCoord.f_1, 0);
if(HUD::IS_PAUSE_MENU_ACTIVE() || func_8())if(HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID())) HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
}elseif(HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID())){
HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
}
HUD::LOCK_MINIMAP_POSITION(finalRenderedCamCoord, finalRenderedCamCoord.f_1);
renderingCam=CAM::GET_RENDERING_CAM();
if(CAM::DOES_CAM_EXIST(renderingCam)) CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(renderingCam, true);
finalRenderedCamRot={
CAM::GET_FINAL_RENDERED_CAM_ROT(0) 
};
finalRenderedCamRot={
func_7(finalRenderedCamRot) 
};
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
*uParam1=func_5(finalRenderedCamCoord, false);
HUD::SET_BLIP_SPRITE(*uParam1, BLIP_CENTRE_STROKE);
HUD::SHOW_HEIGHT_ON_BLIP(*uParam1, false);
HUD::SET_BLIP_DISPLAY(*uParam1, 4);
HUD::SET_BLIP_COLOUR(*uParam1, func_4(2));
HUD::SET_BLIP_SHOW_CONE(*uParam1, true, 11);
HUD::SET_BLIP_SCALE(*uParam1, 0.54f);
HUD::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
*uParam0=func_5(finalRenderedCamCoord, false);
HUD::SET_BLIP_SPRITE(*uParam0, BLIP_CENTRE_STROKE);
HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
HUD::SET_BLIP_DISPLAY(*uParam0, 4);
HUD::SET_BLIP_COLOUR(*uParam0, func_4(HUD_COLOUR_GREEN));
HUD::SET_BLIP_SHOW_CONE(*uParam0, true, 11);
HUD::SET_BLIP_SCALE(*uParam0, 0.44f);
HUD::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam0, true);
HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(finalRenderedCamRot, finalRenderedCamRot.f_1)));
HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam1, true);
HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(finalRenderedCamRot, finalRenderedCamRot.f_1)));
}else{
HUD::SET_BLIP_COORDS(*uParam0, finalRenderedCamCoord);
HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(finalRenderedCamRot, finalRenderedCamRot.f_1)));
HUD::SET_BLIP_DISPLAY(*uParam0, 5);
HUD::SET_BLIP_COORDS(*uParam1, finalRenderedCamCoord);
HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(finalRenderedCamRot, finalRenderedCamRot.f_1)));
HUD::SET_BLIP_DISPLAY(*uParam1, 5);
}
return;
}

int func_4(eHudColour ehcParam0) // Position - 0x3C5{
int r;
int g;
int b;
var a;
switch (ehcParam0){
case 1:
return 4;
case 0:
return 4;
case 6:
return 59;
case 18:
return 2;
case 13:
return 5;
case 116:
return 38;
case 28:
return 6;
case 29:
return 7;
case 30:
return 8;
case 31:
return 9;
case 32:
return 10;
case 33:
return 11;
case 34:
return 12;
case 35:
return 13;
case 36:
return 14;
case 37:
return 15;
case 38:
return 16;
case 39:
return 17;
case 40:
return 18;
case 41:
return 19;
case 42:
return 20;
case 43:
return 21;
case 44:
return 22;
case 45:
return 23;
case 46:
return 24;
case 47:
return 25;
case 48:
return 26;
case 49:
return 27;
case 50:
return 28;
case 51:
return 29;
case 52:
return 30;
case 53:
return 31;
case 54:
return 32;
case 55:
return 33;
case 56:
return 34;
case 57:
return 35;
case 58:
return 36;
case 59:
return 37;
case 9:
return 57;
case 10:
return 53;
case 118:
return 57;
case 14:
return 56;
case 3:
return 55;
case 21:
return 50;
case 15:
return 51;
case 20:
return 52;
case 11:
return 54;
case 23:
return 58;
case 12:
return 60;
case 24:
return 61;
case 4:
return 62;
default:
}
HUD::GET_HUD_COLOUR(ehcParam0, &r, &g, &b, &a);
return (r * 16777216) + (g * 65536) + (b * 256) + a;
}
Blip func_5(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x62D{
Blip vehicleWheelType;
vehicleWheelType=VEHICLE::GET_VEHICLE_WHEEL_TYPE(uParam0);
HUD::SET_BLIP_SCALE(vehicleWheelType, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f :
1f);
HUD::SET_BLIP_ROUTE(vehicleWheelType, bParam3);
return vehicleWheelType;
}


var func__6(BOOL bParam0, var uParam1, var uParam2) // Position - 0x659{
if(bParam0) return uParam1;
return uParam2;
}


Vector3 func__7(float fParam0, var uParam1, var uParam2) // Position - 0x670{
float num;
num=SYSTEM::COS(fParam0);
num.f_1=SYSTEM::COS(fParam0.f_2);
num.f_2=SYSTEM::SIN(fParam0);
num.f_1=num.f_1 * num;
num=num * -SYSTEM::SIN(fParam0.f_2);
return num;
}
BOOL func_8() // Position - 0x6B3{
return HUD::GET_PAUSE_MENU_STATE() !=0;
}


void func_9() // Position - 0x6C1{
Global_1574839=1;
return;
}


void func_10(const char* sParam0, BOOL bParam1) // Position - 0x6CE{
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) return;
if(bParam1){
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
return;
}
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0)){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_11(sParam0);
}
return;
}


void func_11(const char* sParam0) // Position - 0x70D{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x723{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_13() // Position - 0x736{
if(IS_BIT_SET(Global_2764742, 5)){
MISC::CLEAR_BIT(&Global_2764742, 5);
caLocal_160.f_35=0;
}
func_14(&(uLocal_64.f_24), &(caLocal_160.f_35));
return;
}


void func_14(var uParam0, var uParam1) // Position - 0x761{
BOOL flag;
int i;
int num;
eControlAction action;
if(*uParam0 > 0){
flag=func_31(0, -1, false);
if(flag){
if(!*uParam1 || PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL) || PAD::HAVE_CONTROLS_CHANGED(PLAYER_CONTROL)){
func_30(-1);
for (i=0;
i < *uParam0;
i=i + 1){
num=uParam0->f_34[i];
if(num < 32){
func_29(num, &uParam0->f_1[i /*4*/], -1);
}else{
action=num - 32;
func_28(action, &uParam0->f_1[i /*4*/], -1, false);
}}
*uParam1=1;
}
func_27(1);
func_15(0, -1, 0, true, false, false, true, 1, false);
}}
return;
}


void func_15(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x804{
int num;
int i;
int j;
int timestamp;
int timestamp2;
if(!func_26(&num, false, iParam1)) return;
iParam0=iParam0;
if(bParam3 && !func_23(bParam4, bParam8)) return;
if(func_21()) return;
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) return;
if(iParam7==0)if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) return;
if(MISC::IS_PC_VERSION())if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) return;
if(Global_23270.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL)){
for (i=0;
i < Global_23270.f_5166;
i=i + 1){
if(Global_23270.f_5465[i] !=363) TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5168[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23270.f_5465[i], true), 64);
elseif(Global_23270.f_5480[i] !=32) TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5168[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23270.f_5480[i], true), 64);
}
Global_23270.f_5167=0;
}
if(!Global_23270.f_5167){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_23270.f_5524 / 100f));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
for (i=0;
i < Global_23270.f_5166;
i=i + 1){
if(MISC::GET_HASH_KEY(&Global_23270.f_5393[i /*4*/]) !=MISC::GET_HASH_KEY("PREV")){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
func_17(&Global_23270.f_5168[i /*16*/]);
for (j=i + 1;
j < 14 && MISC::GET_HASH_KEY(&Global_23270.f_5393[j /*4*/])==MISC::GET_HASH_KEY("PREV");
j=j + 1){
func_17(&Global_23270.f_5168[j /*16*/]);
}
if(Global_23270.f_5450[i]==-1){
func_16(&Global_23270.f_5393[i /*4*/]);
}else{
timestamp=Global_23270.f_5450[i];
if(iParam2 >=0) timestamp=iParam2;
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23270.f_5393[i /*4*/]);
if(bParam5) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
else HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23270.f_5465[i] !=363 && IS_BIT_SET(Global_23270.f_5495, i)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5465[i]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_16)) !=MISC::GET_HASH_KEY("")){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5166);
func_17(&Global_4540953);
if(Global_4540953.f_20==-1){
func_16(&(Global_4540953.f_16));
}else{
timestamp2=Global_23270.f_5450[i];
if(iParam2 >=0) timestamp2=iParam2;
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
else HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23270.f_5525) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23270.f_5167=1;
}
for (i=0;
i < Global_23270.f_5166;
i=i + 1){
if(Global_23270.f_5450[i] !=-1){
if(iParam2 > 0){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23270.f_5393[i /*4*/]);
if(bParam5) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
else HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}
if(Global_4540953.f_20 !=-1){
if(iParam2 > 0){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
else HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
if(bParam6){
if(!Global_23270.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
Global_23270.f_8892=1;
}}elseif(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
Global_23270.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23270.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23270.f_6103[num /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23270.f_6103[num /*10*/], 255, 255, 255, 255, 0);
}}
return;
}


void func_16(char* sParam0) // Position - 0xCFC{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_17(char* sParam0) // Position - 0xD0E{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
return;
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0xD1C{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_19(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_19(int iParam0, BOOL bParam1) // Position - 0xD67{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_20();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_20() // Position - 0xDA8{
return Global_1574918;
}
BOOL func_21() // Position - 0xDB4{
var position;
if(Global_20383.f_1 > 3) return true;
if(func_22()){
position={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&position);
if(Global_20328==0)if(position.f_1 > -119f) return true;
else return false;
elseif(position.f_1 > -101f) return true;
else return false;
}
return false;
}
BOOL func_22() // Position - 0xE22{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
return false;
}
BOOL func_23(BOOL bParam0, BOOL bParam1) // Position - 0xE3C{
if(Global_2672505.f_1684.f_701 !=0) return true;
if(!CAM::IS_SCREEN_FADED_IN() || func_25(8, -1) && func_24() !=65 || HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_78819 || Global_23270.f_8891 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_100733.f_1474) return false;
return true;
}

int func_24() // Position - 0xED9{
return Global_1574993;
}
BOOL func_25(int iParam0, int iParam1) // Position - 0xEE5{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}
BOOL func_26(var uParam0, BOOL bParam1, int iParam2) // Position - 0xF1D{
var unk;
Hash hashKey;
int i;
int num;
if(iParam2==-1)if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()) iParam2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
TEXT_LABEL_APPEND_INT(&unk, iParam2, 64);
hashKey=MISC::GET_HASH_KEY(&unk);
num=-1;
for (i=0;
i < 6;
i=i + 1){
if(Global_23270.f_6164[i]==hashKey){
*uParam0=i;
return true;
}elseif(Global_23270.f_6164[i]==0){
num=i;
}}
if(bParam1){
if(num !=-1){
Global_23270.f_6164[num]=hashKey;
*uParam0=num;
return true;
}}
return false;
}


void func_27(int iParam0) // Position - 0xFBA{
Global_1655472.f_1163=iParam0;
return;
}


void func_28(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0xFCB{
const char* controlInstructionalButtonsString;
controlInstructionalButtonsString=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);
if(Global_23270.f_5166 >=14){
TEXT_LABEL_ASSIGN_STRING(&Global_4540953, controlInstructionalButtonsString, 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
if(!bParam3) MISC::SET_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5168[Global_23270.f_5166 /*16*/], controlInstructionalButtonsString, 64);
TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5393[Global_23270.f_5166 /*4*/], sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=ecaParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166=Global_23270.f_5166 + 1;
return;
}


void func_29(int iParam0, char* sParam1, int iParam2) // Position - 0x1080{
const char* controlGroupInstructionalButtonsString;
controlGroupInstructionalButtonsString=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, iParam0, true);
if(Global_23270.f_5166 >=14){
TEXT_LABEL_ASSIGN_STRING(&Global_4540953, controlGroupInstructionalButtonsString, 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5168[Global_23270.f_5166 /*16*/], controlGroupInstructionalButtonsString, 64);
TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5393[Global_23270.f_5166 /*4*/], sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=363;
Global_23270.f_5480[Global_23270.f_5166]=iParam0;
Global_23270.f_5166=Global_23270.f_5166 + 1;
return;
}


void func_30(int iParam0) // Position - 0x1130{
int i;
int num;
Global_23270.f_5166=0;
Global_23270.f_5167=0;
for (i=0;
i < 14;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5393[i /*4*/], "", 16);
Global_23270.f_5450[i]=-1;
Global_23270.f_5465[i]=363;
Global_23270.f_5480[i]=32;
}
Global_23270.f_5495=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_16), "", 16);
Global_4540953.f_20=-1;
if(MISC::IS_PC_VERSION()){
if(!func_26(&num, false, iParam0)) return;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23270.f_6103[num /*10*/])){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_23270.f_6103[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
return;
}
BOOL func_31(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x11E8{
int num;
BOOL flag;
BOOL flag2;
if(!func_26(&num, true, iParam1)) return false;
flag=true;
TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_6078[num /*4*/], sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23270.f_6078[num /*4*/])){
HUD::REQUEST_ADDITIONAL_TEXT(&Global_23270.f_6078[num /*4*/], 9);
Global_23270.f_6071[num]=true;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_23270.f_6078[num /*4*/], 9)) flag=false;
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
Global_23270.f_6057[num]=true;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) flag=false;
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
Global_23270.f_6064[num]=true;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")) flag=false;
}
flag2=false;
TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_6103[num /*10*/].f_1), "instructional_buttons", 24);
flag2=func_32(&Global_23270.f_6103[num /*10*/]);
!flag || !flag2;
return flag && flag2;
}
BOOL func_32(Player plParam0) // Position - 0x12D9{
switch (plParam0->f_9){
case 0:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*plParam0)){
*plParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(plParam0->f_1));
plParam0->f_9=1;
if(plParam0->f_7){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*plParam0)){
plParam0->f_8=MISC::GET_GAME_TIMER();
plParam0->f_9=2;
}}}else{
plParam0->f_8=MISC::GET_GAME_TIMER();
plParam0->f_9=2;
}
break;
case 1:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*plParam0)){
plParam0->f_8=MISC::GET_GAME_TIMER();
plParam0->f_9=2;
}
break;
case 2:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*plParam0)) plParam0->f_9=0;
break;
}
return plParam0->f_9==2;
}


void func_33() // Position - 0x137B{
int timecycleModifierIndex;
if(!IS_BIT_SET(caLocal_160.f_60, 7)){
timecycleModifierIndex=GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
if(caLocal_160.f_56 !=timecycleModifierIndex){
GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
caLocal_160.f_56=GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
}}
return;
}


void func_34() // Position - 0x13AB{
if(IS_BIT_SET(caLocal_160.f_60, 6))if(IS_BIT_SET(caLocal_160.f_60, 5)) func_36();
elseif(!IS_BIT_SET(caLocal_160.f_60, 5) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_64.f_80))) func_35(&(uLocal_64.f_80));
return;
}


void func_35(const char* sParam0) // Position - 0x13EC{
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) return;
if(IS_BIT_SET(caLocal_160.f_60, 5)){}else{
PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
MISC::SET_BIT(&(caLocal_160.f_60), 5);
}
return;
}


void func_36() // Position - 0x141C{
if(IS_BIT_SET(caLocal_160.f_60, 5)){
PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
MISC::CLEAR_BIT(&(caLocal_160.f_60), 5);
}
return;
}


void func_37() // Position - 0x143D{
var camRot;
if(uLocal_64.f_17==4) return;
if(IS_BIT_SET(caLocal_160.f_60, 1)) return;
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(caLocal_160.f_36)){
caLocal_160.f_36=GRAPHICS::REQUEST_SCALEFORM_MOVIE(uLocal_64.f_86.f_1);
return;
}
camRot={
CAM::GET_CAM_ROT(caLocal_160, 2) 
};
switch (uLocal_64.f_17){
case 1:
case 2:
case 3:
if(!caLocal_160.f_37){
caLocal_160.f_37=1;
func_40(caLocal_160.f_36, uLocal_64.f_20);
func_39(caLocal_160.f_36, uLocal_64.f_20.f_1, uLocal_64.f_20.f_2, uLocal_64.f_20.f_3);
}
[[fallthrough]];
case 0:
func_38(caLocal_160.f_36, 0f, CAM::GET_CAM_FOV(caLocal_160), uLocal_64.f_4, uLocal_64.f_5, camRot.f_2);
break;
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(caLocal_160.f_36, 255, 255, 255, 0, 0);
return;
}


void func_38(Player plParam0, float fParam1, float fParam2, var uParam3, float fParam4, float fParam5) // Position - 0x1509{
fParam2=(fParam2 - uParam3) / (fParam4 - uParam3);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_ALT_FOV_HEADING");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_39(Player plParam0, int iParam1, int iParam2, int iParam3) // Position - 0x153E{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_WEAPON_VALUES");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_40(Player plParam0, BOOL bParam1) // Position - 0x1566{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_ZOOM_VISIBLE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_41() // Position - 0x1582{
float num;
var unk4;
var unk7;
var unk10;
if(uLocal_64.f_94 !=0){
caLocal_160.f_4={
ENTITY::GET_ENTITY_COORDS(uLocal_64.f_95, true) 
};
caLocal_160.f_4.f_3={
ENTITY::GET_ENTITY_ROTATION(uLocal_64.f_95, 2) 
};
}
if(!IS_BIT_SET(caLocal_160.f_60, 2)) num={
func_46(caLocal_160, &(caLocal_160.f_1), uLocal_64, uLocal_64.f_6.f_1, uLocal_64.f_6) 
};
unk4={
uLocal_64.f_91 + caLocal_160.f_1 
};
unk7={
func_45(uLocal_64.f_71, unk4.f_2) 
};
unk10={
uLocal_64.f_88 + unk7 
};
switch (uLocal_64.f_94){
case 0:
func_44(caLocal_160, unk10, unk4);
break;
case 1:
func_43(caLocal_160, unk10, unk4, uLocal_64.f_95);
break;
}
func_42(caLocal_160.f_40, caLocal_160.f_40.f_2, caLocal_160.f_40.f_8, caLocal_160.f_40.f_3, caLocal_160.f_40.f_9, caLocal_160.f_40.f_4, caLocal_160.f_40.f_10, caLocal_160.f_40.f_5, caLocal_160.f_40.f_11, caLocal_160.f_40.f_6, caLocal_160.f_40.f_12, caLocal_160.f_40.f_7, num, num.f_1, caLocal_160.f_61.f_1, caLocal_160.f_61.f_2 > 0);
caLocal_160.f_4.f_6={
CAM::GET_CAM_COORD(caLocal_160) 
};
caLocal_160.f_4.f_9={
CAM::GET_CAM_ROT(caLocal_160, 2) 
};
return;
}


void func_42(const char* sParam0, const char* sParam1, int iParam2, const char* sParam3, int iParam4, const char* sParam5, int iParam6, const char* sParam7, int iParam8, const char* sParam9, int iParam10, const char* sParam11, float fParam12, Vector3 vParam13, var uParam14, var uParam15, int iParam16, BOOL bParam17) // Position - 0x16C2{
float num;
Vehicle vehicle;
Vehicle vehiclePedIsIn;
BOOL flag;
float num2;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1)){
if(fParam12 !=0f){
if(iParam4 !=-1){
if(AUDIO::HAS_SOUND_FINISHED(iParam4)) AUDIO::PLAY_SOUND_FRONTEND(iParam4, sParam5, sParam1, true);
AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Ctrl", fParam12);
if(fParam12 < 0f) AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", -1f);
else AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", 1f);
}}elseif(iParam4 !=-1){
if(!AUDIO::HAS_SOUND_FINISHED(iParam4)) AUDIO::STOP_SOUND(iParam4);
}
num=SYSTEM::VMAG(vParam13);
if(num > 0f){
if(iParam2 !=-1){
if(AUDIO::HAS_SOUND_FINISHED(iParam2)) AUDIO::PLAY_SOUND_FRONTEND(iParam2, sParam3, sParam1, true);
AUDIO::SET_VARIABLE_ON_SOUND(iParam2, "Ctrl", num);
}}elseif(iParam2 !=-1){
if(!AUDIO::HAS_SOUND_FINISHED(iParam2)) AUDIO::STOP_SOUND(iParam2);
}
if(iParam6 !=-1)if(AUDIO::HAS_SOUND_FINISHED(iParam6)) AUDIO::PLAY_SOUND_FRONTEND(iParam6, sParam7, sParam1, true);
vehicle=PLAYER::PLAYER_PED_ID();
if(PED::IS_PED_IN_ANY_VEHICLE(vehicle, false)) vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(vehicle, false);
else vehiclePedIsIn=vehicle;
if(iParam8 !=-1){
flag=bParam17;
if(!flag){
num2=SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(vehiclePedIsIn));
flag=(float)iParam16 / num2 > 0.1f;
}
if(flag)if(AUDIO::HAS_SOUND_FINISHED(iParam8)) AUDIO::PLAY_SOUND_FRONTEND(iParam8, sParam9, sParam9, true);
}
if(iParam10 !=-1)if((float)ENTITY::GET_ENTITY_HEALTH(vehicle) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(vehicle)) < 0.15f || (float)ENTITY::GET_ENTITY_HEALTH(vehiclePedIsIn) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(vehiclePedIsIn)) < 0.15f)if(AUDIO::HAS_SOUND_FINISHED(iParam10)) AUDIO::PLAY_SOUND_FRONTEND(iParam10, sParam11, sParam1, true);
elseif(!AUDIO::HAS_SOUND_FINISHED(iParam10)) AUDIO::STOP_SOUND(iParam10);
}
return;
}


void func_43(Cam caParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Entity eParam7) // Position - 0x1878{
CAM::ATTACH_CAM_TO_ENTITY(caParam0, eParam7, vParam1, true);
CAM::SET_CAM_ROT(caParam0, uParam4 + ENTITY::GET_ENTITY_ROTATION(eParam7, 2), 2);
return;
}


void func_44(Cam caParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x18A0{
CAM::SET_CAM_COORD(caParam0, vParam1);
CAM::SET_CAM_ROT(caParam0, vParam4, 2);
return;
}


Vector3 func__45(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x18BD{
float num;
float num2;
float num3;
num2=SYSTEM::SIN(fParam3);
num3=SYSTEM::COS(fParam3);
num=(fParam0 * num3) - (fParam0.f_1 * num2);
num.f_1=(fParam0 * num2) + (fParam0.f_1 * num3);
num.f_2=fParam0.f_2;
return num;
}


struct<4> func_46(Cam caParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, float fParam8, var uParam9) // Position - 0x1901{
float camFov;
float num;
float disabledControlNormal;
Vector3 vector;
float frameTime;
float fieldOfView;
float num2;
float num3;
float num4;
float num5;
float num6;
BOOL flag;
camFov=CAM::GET_CAM_FOV(caParam0);
num=-camFov;
num.f_1={
-*uParam1 
};
disabledControlNormal=PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, INPUT_SNIPER_ZOOM);
vector={
-{
PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_UD) 
}};
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
fParam8=fParam8 * 8f;
}else{
if(MISC::ABSF(disabledControlNormal) < 0.06f) disabledControlNormal=0f;
if(SYSTEM::VMAG(vector) < 0.06f) vector={
0f, 0f, 0f 
};
}
frameTime=MISC::GET_FRAME_TIME();
fieldOfView=func_49(camFov + (disabledControlNormal * uParam9 * frameTime), uParam2.f_4, uParam2.f_5);
CAM::SET_CAM_FOV(caParam0, fieldOfView);
CAM::SET_CAM_NEAR_CLIP(caParam0, 0.01f);
num2=(fieldOfView - 5f) / 42f;
CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(1f);
GRAPHICS::SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(num2);
num3=uParam2.f_2;
num3.f_1=0f;
num3.f_2=uParam2;
num4=uParam2.f_3;
num4.f_1=0f;
num4.f_2=uParam2.f_1;
num5=frameTime * fieldOfView * fParam8 * (1f + ((fieldOfView - uParam2.f_4) / (uParam2.f_5 - uParam2.f_4)));
num6={
vector 
};
num6.f_2=num6.f_2 * num5;
num6=num6 * num5;
*uParam1={
*uParam1 + num6 
};
flag=num3.f_2 > num4.f_2;
if(flag){
*uParam1=func_49(*uParam1, num3, num4);
uParam1->f_1=func_49(uParam1->f_1, num3.f_1, num4.f_1);
uParam1->f_2=func_48(uParam1->f_2);
}else{
*uParam1={
func_47(*uParam1, num3, num4) 
};
}
num=num + fieldOfView;
num.f_1={
num.f_1 + *uParam1 
};
return num;
}


Vector3 func__47(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x1AA2{
fParam0=func_49(fParam0, fParam3, fParam6);
fParam0.f_1=func_49(fParam0.f_1, fParam3.f_1, fParam6.f_1);
fParam0.f_2=func_49(fParam0.f_2, fParam3.f_2, fParam6.f_2);
return fParam0;
}


float func_48(float fParam0) // Position - 0x1AE2{
while (fParam0 > 180f){
fParam0=fParam0 - 360f;
}
while (fParam0 < -180f){
fParam0=fParam0 + 360f;
}
return fParam0;
}


float func_49(float fParam0, float fParam1, float fParam2) // Position - 0x1B1C{
if(fParam0 > fParam2) return fParam2;
elseif(fParam0 < fParam1) return fParam1;
return fParam0;
}


void func_50() // Position - 0x1B43{
switch (uLocal_64.f_8.f_1){
case 1:
func_85();
break;
case 2:
func_70();
break;
case 3:
func_51();
break;
}
return;
}


void func_51() // Position - 0x1B7D{
var unk;
var unk4;
var unk7;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1){
if(!caLocal_160.f_29.f_5) caLocal_160.f_29.f_5=1;
if(!func_65(4, 0f, 0f, 0f, caLocal_160.f_4.f_6, 0f, 0f, 0f)){
if(func_64()) AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
return;
}}
if(caLocal_160.f_29){
if(CAM::IS_SCREEN_FADED_OUT()){
if(caLocal_160.f_29.f_1){
if(func_62(PLAYER::PLAYER_ID())){
CAM::DO_SCREEN_FADE_IN(250);
AUDIO::PLAY_SOUND_FROM_COORD(caLocal_160.f_40.f_13.f_2, caLocal_160.f_40.f_13.f_1, caLocal_160.f_29.f_2, caLocal_160.f_40.f_13, true, 500, false);
caLocal_160.f_29.f_1=0;
caLocal_160.f_29=0;
}}else{
caLocal_160.f_29.f_1=1;
_STOPWATCH_RESET(&(caLocal_160.f_17), false, false);
MISC::SET_BIT(&Global_2764742, 0);
func_58(3f, 100f, &(caLocal_160.f_29.f_2), &unk, &unk4, &unk7);
func_57(true);
func_55(caLocal_160.f_29.f_2, unk7);
}}}
if(func_54() || caLocal_160.f_29){
MISC::SET_BIT(&(caLocal_160.f_60), 1);
MISC::SET_BIT(&(caLocal_160.f_60), 2);
MISC::SET_BIT(&(caLocal_160.f_60), 3);
if(!caLocal_160.f_29){
MISC::SET_BIT(&(caLocal_160.f_60), 6);
MISC::SET_BIT(&(caLocal_160.f_60), 7);
}
return;
}
if(func_64()){
if(_STOPWATCH_HAS_TIME_PASSED(&(caLocal_160.f_17), uLocal_64.f_8.f_2, false)){
caLocal_160.f_29=1;
CAM::DO_SCREEN_FADE_OUT(250);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}}
return;
}
BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x1CF3{
if(millis==-1) return true;
_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >=millis) return true;
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >=millis) return true;
return false;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1D51{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL func_54() // Position - 0x1D96{
return IS_BIT_SET(Global_1962996, 5);
}


void func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1DA4{
if(!func_56(Global_1962996.f_13, uParam0, false)){
Global_1962996.f_13={
uParam0 
};
uParam3={
uParam3 +{
0f, -180f, 180f 
}};
Global_1962996.f_16={
uParam3 
};
}
return;
}
BOOL func_56(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x1DED{
if(bParam6) return fParam0==fParam3 && fParam0.f_1==fParam3.f_1;
return fParam0==fParam3 && fParam0.f_1==fParam3.f_1 && fParam0.f_2==fParam3.f_2;
}


void func_57(BOOL bParam0) // Position - 0x1E34{
if(bParam0){
if(!IS_BIT_SET(Global_1962996.f_2, 4)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 4);
}}elseif(IS_BIT_SET(Global_1962996.f_2, 4)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 4);
}
return;
}


void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E78{
var unk;
var offsetFromEntityInWorldCoords;
var entityBonePostion;
var unk8;
int num;
float num2;
int i;
float num3;
if(uLocal_64.f_74==0){
*uParam5={
CAM::GET_CAM_ROT(caLocal_160, 2) 
};
*uParam4={
func_7(*uParam5) 
};
*uParam2={
caLocal_160.f_4.f_6 + ({
fParam0, fParam0, fParam0 
}
* *uParam4) 
};
*uParam3={
func_60(*uParam2, fParam1) 
};
}else{
unk={
func_7(CAM::GET_CAM_ROT(caLocal_160, 2)) 
};
offsetFromEntityInWorldCoords={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_64.f_95, uLocal_64.f_88) 
};
entityBonePostion={
ENTITY::GET_ENTITY_BONE_POSTION(uLocal_64.f_95, uLocal_64.f_74.f_1[0]) 
};
unk8={
entityBonePostion - offsetFromEntityInWorldCoords 
};
*uParam2={
entityBonePostion 
};
num=0;
num2=func_59(unk8, unk);
for (i=1;
i <=uLocal_64.f_74 - 1;
i=i + 1){
entityBonePostion={
ENTITY::GET_ENTITY_BONE_POSTION(uLocal_64.f_95, uLocal_64.f_74.f_1[i]) 
};
unk8={
entityBonePostion - offsetFromEntityInWorldCoords 
};
num3=func_59(unk8, unk);
if(num3 > num2){
num2=num3;
num=i;
*uParam2={
entityBonePostion 
};
}}
*uParam5={
ENTITY::GET_ENTITY_BONE_ROTATION(uLocal_64.f_95, uLocal_64.f_74.f_1[num]) 
};
*uParam4={
func_7(*uParam5) 
};
*uParam2={
*uParam2 + ({
fParam0, fParam0, fParam0 
}
* *uParam4) 
};
*uParam3={
*uParam2 + ({
fParam1, fParam1, fParam1 
}
* *uParam4) 
};
}
return;
}


float func_59(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1FC5{
return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}


Vector3 func__60(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x1FE6{
var finalRenderedCamRot;
var unk3;
finalRenderedCamRot={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
unk3={
func_7(finalRenderedCamRot) 
};
return uParam0 + ({
fParam3, fParam3, fParam3 
}
* unk3);
}


void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x2010{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
return;
}
BOOL func_62(Player plParam0) // Position - 0x204D{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_365, 26);
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0x2074{
return -1;
}
BOOL func_64() // Position - 0x207D{
return IS_BIT_SET(Global_2764742, 4) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SCRIPT_RT);
}
BOOL func_65(int iParam0, float fParam1, float fParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9) // Position - 0x2098{
struct<12> instance_id;
if(func_69()){
if(!_STOPWATCH_IS_INITIALIZED(&uLocal_48)){
_STOPWATCH_INITIALIZE(&uLocal_48, false, false);
}elseif(_STOPWATCH_HAS_TIME_PASSED(&uLocal_48, 8000, false)){
_STOPWATCH_DESTROY(&uLocal_48);
func_66(false);
}}
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone"))) SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
if(SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !func_69()){
instance_id.f_1=-1;
instance_id=0;
instance_id.f_2={
fParam1 
};
instance_id.f_5={
uParam4 
};
instance_id.f_8={
fParam7 
};
instance_id.f_1=iParam0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1){
if(!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", instance_id, true, 0)){
iLocal_50=SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("am_mp_drone"), &instance_id, 12, DEFAULT);
SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("am_mp_drone"));
_STOPWATCH_DESTROY(&uLocal_48);
}else{
return true;
}}}elseif(SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !func_69()){
return true;
}
return false;
}


void func_66(BOOL bParam0) // Position - 0x21A7{
if(bParam0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)if(!func_69()) MISC::SET_BIT(&Global_1962996, 0);
elseif(func_69()) MISC::CLEAR_BIT(&Global_1962996, 0);
return;
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0x21EB{
uParam0->f_1=0;
return;
}
BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x21F8{
return uParam0->f_1;
}
BOOL func_69() // Position - 0x2204{
return IS_BIT_SET(Global_1962996, 0);
}


void func_70() // Position - 0x2212{
BOOL flag;
eHudColour color;
Vehicle vehicleIndexFromEntityIndex;
Vehicle vehicleIndexFromEntityIndex2;
Vector3 vector;
Vector3 vector2;
func_77();
if(caLocal_160.f_22 !=-1){
flag=_STOPWATCH_HAS_TIME_PASSED(&(caLocal_160.f_22.f_2), 2000, false);
if(flag){
if(ENTITY::IS_ENTITY_A_VEHICLE(caLocal_160.f_22.f_4)){
vehicleIndexFromEntityIndex=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(caLocal_160.f_22.f_4);
VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(vehicleIndexFromEntityIndex, 2);
}
func_76(&(caLocal_160.f_22.f_5));
func_75(&(caLocal_160.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", true);
color=HUD_COLOUR_RED;
}else{
if(ENTITY::IS_ENTITY_A_VEHICLE(caLocal_160.f_22.f_4)){
vehicleIndexFromEntityIndex2=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(caLocal_160.f_22.f_4);
VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(vehicleIndexFromEntityIndex2, 1);
}
func_75(&(caLocal_160.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, true);
color=HUD_COLOUR_BLUE;
}
func_72(caLocal_160.f_22.f_4, !flag, color);
if(func_64()){
if(uLocal_64.f_16 !=0 && !STREAMING::HAS_MODEL_LOADED(uLocal_64.f_16)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
return;
}
if(flag && _STOPWATCH_HAS_TIME_PASSED(&(caLocal_160.f_17), uLocal_64.f_8.f_2, false)){
_STOPWATCH_RESET(&(caLocal_160.f_17), false, false);
func_71(1f, &vector, &vector2);
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vector, vector2, uLocal_64.f_8.f_3, true, uLocal_64.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1082130432, uLocal_64.f_95, false, false, caLocal_160.f_22, true, 0, uLocal_64.f_94 !=0, 0);
AUDIO::PLAY_SOUND_FROM_COORD(caLocal_160.f_40.f_13.f_2, caLocal_160.f_40.f_13.f_1, vector, caLocal_160.f_40.f_13, true, 500, false);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}}}
return;
}


void func_71(float fParam0, var uParam1, var uParam2) // Position - 0x2385{
var unk;
func_58(0f, fParam0, uParam1, uParam2, &unk, &unk);
return;
}


void func_72(Entity eParam0, BOOL bParam1, eHudColour ehcParam2) // Position - 0x239C{
float width;
float height;
Vector3 entityCoords;
int r;
int g;
int b;
int a;
int alpha;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud")) return;
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
entityCoords={
ENTITY::GET_ENTITY_COORDS(eParam0, true) 
};
GRAPHICS::SET_DRAW_ORIGIN(entityCoords, 0);
width=func_74(eParam0, caLocal_160, 0.5f);
width=func_49(width, 0.015f, width);
height=width * GRAPHICS::GET_ASPECT_RATIO(false);
HUD::GET_HUD_COLOUR(ehcParam2, &r, &g, &b, &a);
alpha=bParam1 && MISC::GET_GAME_TIMER() % 300 < 150 ? SYSTEM::CEIL(SYSTEM::TO_FLOAT(a) / 4f) :
a;
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, width, height, 0f, r, g, b, alpha, false, 0);
GRAPHICS::CLEAR_DRAW_ORIGIN();
return;
}


var func__73(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2449{
if(bParam0) return uParam1;
return uParam2;
}


float func_74(Entity eParam0, Cam caParam1, float fParam2) // Position - 0x2460{
Vector3 camCoord;
Vector3 entityCoords;
float distanceBetweenCoords;
float camFov;
float num;
float num2;
float num3;
camCoord={
CAM::GET_CAM_COORD(caParam1) 
};
entityCoords={
ENTITY::GET_ENTITY_COORDS(eParam0, true) 
};
distanceBetweenCoords=MISC::GET_DISTANCE_BETWEEN_COORDS(camCoord, entityCoords, true);
camFov=CAM::GET_CAM_FOV(caParam1);
num=1f;
num2=num / MISC::TAN(camFov / 2f);
num3=(num2 * fParam2) / distanceBetweenCoords;
return num3;
}


void func_75(var uParam0, char* sParam1, char* sParam2, BOOL bParam3) // Position - 0x24B0{
if(*uParam0==-1){
*uParam0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
}
return;
}


void func_76(var uParam0) // Position - 0x24D3{
if(*uParam0 !=-1){
AUDIO::STOP_SOUND(*uParam0);
AUDIO::RELEASE_SOUND_ID(*uParam0);
*uParam0=-1;
}
return;
}


void func_77() // Position - 0x24F4{
BOOL flag;
Vehicle vehicle;
if(func_84(&(caLocal_160.f_22.f_1), caLocal_160.f_22.f_4, &flag)){
if(flag){
if(caLocal_160.f_22 !=caLocal_160.f_22.f_4){
_STOPWATCH_RESET(&(caLocal_160.f_22.f_2), false, false);
func_76(&(caLocal_160.f_22.f_5));
func_76(&(caLocal_160.f_22.f_6));
}
caLocal_160.f_22=caLocal_160.f_22.f_4;
}else{
func_83();
vehicle=func_81(uLocal_64.f_8.f_4);
caLocal_160.f_22.f_4=vehicle;
}
if(caLocal_160.f_22.f_4 !=-1) func_79(caLocal_160.f_22.f_4);
}
if(caLocal_160.f_22 !=-1)if(caLocal_160.f_22.f_4 !=caLocal_160.f_22 || ENTITY::IS_ENTITY_DEAD(caLocal_160.f_22, false) || func_78(caLocal_160.f_22) > 0.04f || SYSTEM::VMAG(ENTITY::GET_ENTITY_COORDS(caLocal_160.f_22, true) - caLocal_160.f_4.f_6) > uLocal_64.f_8.f_4) func_83();
return;
}


float func_78(Ped pedParam0) // Position - 0x25DC{
Vector3 entityCoords;
entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
if(!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(entityCoords, &entityCoords, &(entityCoords.f_1))) return 1f;
entityCoords={
entityCoords -{
0f, 0.5f, 0.5f 
}};
entityCoords.f_2=0f;
return SYSTEM::VMAG2(entityCoords);
}


void func_79(Entity eParam0) // Position - 0x2626{
Vector3 camCoord;
Vector3 entityCoords;
camCoord={
CAM::GET_CAM_COORD(caLocal_160) 
};
entityCoords={
ENTITY::GET_ENTITY_COORDS(eParam0, true) 
};
entityCoords={
entityCoords + ({
2f, 2f, 2f 
}
* func_80(entityCoords - camCoord)) 
};
caLocal_160.f_22.f_1=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(camCoord, entityCoords, 511, 0, 4);
caLocal_160.f_22.f_1==0;
return;
}


Vector3 func__80(float fParam0, var uParam1, var uParam2) // Position - 0x267D{
float num;
float num2;
num=SYSTEM::VMAG(fParam0);
if(num !=0f){
num2=1f / num;
fParam0={
fParam0 *{
num2, num2, num2 
}};
}else{
fParam0=0f;
fParam0.f_1=0f;
fParam0.f_2=0f;
}
return fParam0;
}
Vehicle func_81(float fParam0) // Position - 0x26BC{
int playerTeam;
BOOL flag;
Player player;
float num;
BOOL flag2;
float num2;
Player i;
Player player2;
Ped playerPed;
float num3;
Ped playerPed2;
Vehicle vehiclePedIsIn;
playerTeam=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
flag=playerTeam !=-1;
num=0.005f;
flag2=false;
num2=fParam0 * fParam0;
for (i=0;
i < 32;
i=i + 1){
player2=i;
playerPed=PLAYER::GET_PLAYER_PED(player2);
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player2) || !_NETWORK_IS_PLAYER_VALID(player2, true, true) || flag && PLAYER::GET_PLAYER_TEAM(player2)==playerTeam || SYSTEM::VMAG2(caLocal_160.f_4.f_6 - ENTITY::GET_ENTITY_COORDS(playerPed, true)) > num2){
}else{
num3=func_78(playerPed);
if(num3 < num){
player=player2;
num=num3;
flag2=true;
}}}
if(flag2){
playerPed2=PLAYER::GET_PLAYER_PED(player);
if(PED::IS_PED_IN_ANY_VEHICLE(playerPed2, false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(playerPed2, false);
if(!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false)) return vehiclePedIsIn;
}}
return -1;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x279F{
Player player;
player=player;
if(player !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
if(bIsPlaying)if(!PLAYER::IS_PLAYER_PLAYING(player)) return false;
if(bUnk)if(player==Global_2672505.f_3) return Global_2672505.f_2;
elseif(Global_2657589[player /*466*/] !=4) return false;
return true;
}}
return false;
}


void func_83() // Position - 0x27FF{
caLocal_160.f_22=-1;
caLocal_160.f_22.f_4=-1;
func_76(&(caLocal_160.f_22.f_5));
func_76(&(caLocal_160.f_22.f_6));
return;
}
BOOL func_84(var uParam0, Vehicle veParam1, var uParam2) // Position - 0x2827{
int hit;
var surfaceNormal;
var endCoords;
Vehicle vehiclePedIsIn;
int shapeTestResult;
Ped pedIndexFromEntityIndex;
*uParam2=0;
if(*uParam0==0 || veParam1==-1) return true;
shapeTestResult=SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &vehiclePedIsIn);
if(!ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn)){
if(ENTITY::IS_ENTITY_A_PED(vehiclePedIsIn)){
pedIndexFromEntityIndex=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vehiclePedIsIn);
if(PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false)) vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, false);
}}
if(shapeTestResult==2){
if(hit !=0)if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn)) *uParam2=veParam1==vehiclePedIsIn && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false);
return true;
}elseif(shapeTestResult==0){
return true;
}
return false;
}


void func_85() // Position - 0x28CA{
BOOL flag;
BOOL flag2;
int num;
char* str;
int num2;
int num3;
Vector3 vector;
Vector3 vector2;
var unk5;
var unk8;
var unk11;
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 452, true);
flag=uLocal_64.f_13.f_1 > 0;
flag2=flag && !_STOPWATCH_HAS_TIME_PASSED(&(caLocal_160.f_19), uLocal_64.f_13.f_2, false);
if(flag){
if(flag2){
num=6;
str="TC_RELOAD" /*RELOADING*/;
num3=uLocal_64.f_13.f_2;
num2=_STOPWATCH_GET_TIME_PASSED(&(caLocal_160.f_19), false, false);
}else{
num=1;
str="TC_AMMO" /*AMMO*/;
num3=uLocal_64.f_13.f_1;
num2=num3 - caLocal_160.f_19.f_2;
}
func_91(num2, num3, str, num, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}
if(flag && !flag2)if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SCRIPT_RRIGHT)) func_90();
if(!flag2 && func_89()){
caLocal_160.f_19.f_2=caLocal_160.f_19.f_2 + SYSTEM::ROUND(MISC::GET_FRAME_TIME() * 1000f);
if(_STOPWATCH_HAS_TIME_PASSED(&(caLocal_160.f_17), uLocal_64.f_8.f_2, false)){
_STOPWATCH_RESET(&(caLocal_160.f_17), false, false);
if(uLocal_64.f_13.f_1 > 0 && caLocal_160.f_19.f_2 >=uLocal_64.f_13.f_1){
_STOPWATCH_RESET(&(caLocal_160.f_19), false, false);
caLocal_160.f_19.f_2=0;
}
func_58(0f, uLocal_64.f_8.f_4, &vector, &vector2, &unk5, &unk8);
unk11={
{
uLocal_64.f_13, uLocal_64.f_13, uLocal_64.f_13 
}
* func_86(0f, 0f, 0f, 1f) 
};
unk11.f_1=0f;
unk8={
unk8 + unk11 
};
vector2={
vector + (F2V(SYSTEM::VMAG(vector2 - vector)) * func_7(unk8)) 
};
vector.f_2=vector.f_2 - 1f;
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vector, vector2, uLocal_64.f_8.f_3, false, uLocal_64.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1082130432, uLocal_64.f_95, false, false, 0, true, 0, uLocal_64.f_94 !=0, 0);
if(caLocal_160.f_40.f_13.f_2 !=-1 && AUDIO::HAS_SOUND_FINISHED(caLocal_160.f_40.f_13.f_2)) AUDIO::PLAY_SOUND_FROM_COORD(caLocal_160.f_40.f_13.f_2, caLocal_160.f_40.f_13.f_1, vector, caLocal_160.f_40.f_13, true, 500, false);
}}elseif(caLocal_160.f_40.f_13.f_2 !=-1 && !AUDIO::HAS_SOUND_FINISHED(caLocal_160.f_40.f_13.f_2)){
AUDIO::STOP_SOUND(caLocal_160.f_40.f_13.f_2);
}
return;
}


Vector3 func__86(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x2B16{
Vector3 vector;
float num;
int i;
num=fParam3 * fParam3;
for (i=0;
i < 20;
i=i + 1){
vector={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3) 
};
if(SYSTEM::VDIST2(vector, 0f, 0f, 0f) <=num) return fParam0 + vector;
}
return func_87(fParam0, fParam3);
}


Vector3 func__87(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x2B7E{
var unk;
unk={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) 
};
return uParam0 + func_88(unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}


Vector3 func__88(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x2BB0{
float num;
if(fParam3==0f) return 0f, 0f, 0f;
num=SYSTEM::VMAG(vParam0);
if(num !=0f) return vParam0 *{
fParam3 / num, fParam3 / num, fParam3 / num 
};
return 0f, 0f, 0f;
}
BOOL func_89() // Position - 0x2BE7{
return IS_BIT_SET(Global_2764742, 4) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SCRIPT_RT);
}


void func_90() // Position - 0x2C02{
_STOPWATCH_RESET(&(caLocal_160.f_19), false, false);
caLocal_160.f_19.f_2=0;
return;
}


void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36) // Position - 0x2C1B{
int num;
int i;
num=-1;
for (i=0;
i <=9;
i=i + 1){
if(num==-1)if(func_93(0, i)==false) num=i;
}
if(num > -1){
Global_1655472.f_1=1;
func_92(0, num);
Global_1655472.f_1177[num]=iParam0;
Global_1655472.f_1177.f_11[num]=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_1655472.f_1177.f_22[num /*16*/], sParam2, 64);
Global_1655472.f_1177.f_194[num]=iParam3;
Global_1655472.f_1177.f_183[num]=iParam4;
Global_1655472.f_1177.f_216[num]=iParam5;
Global_1655472.f_1177.f_227[num /*3*/]=iParam6;
Global_1655472.f_1177.f_227[num /*3*/].f_1=iParam7;
Global_1655472.f_1177.f_258[num]=iParam8;
Global_1655472.f_1177.f_269[num]=iParam9;
Global_1655472.f_1177.f_312[num]=iParam10;
Global_1655472.f_1177.f_323[num]=iParam11;
Global_1655472.f_1177.f_334[num]=iParam12;
Global_1655472.f_1177.f_345[num]=iParam13;
Global_1655472.f_1172=1;
Global_1655472.f_1177.f_356[num]=iParam14;
Global_1655472.f_1177.f_367[num]=iParam15;
Global_1655472.f_1177.f_378[num]=iParam16;
Global_1655472.f_1177.f_389[num]=iParam17;
Global_1655472.f_1177.f_400[num]=iParam18;
Global_1655472.f_1177.f_411[num]=iParam19;
Global_1655472.f_1177.f_422[num]=iParam20;
Global_1655472.f_1177.f_433[num]=iParam21;
Global_1655472.f_1177.f_444[num]=iParam22;
Global_1655472.f_1177.f_455[num]=iParam23;
Global_1655472.f_1177.f_466[num]=iParam24;
Global_1655472.f_1177.f_205[num]=iParam25;
Global_1655472.f_1177.f_477[num]=iParam26;
Global_1655472.f_1177.f_488[num]=iParam27;
Global_1655472.f_1177.f_499[num]=iParam28;
Global_1655472.f_1177.f_510[num]=iParam29;
Global_1655472.f_1177.f_521[num]=iParam30;
Global_1655472.f_1177.f_532[num]=iParam31;
Global_1655472.f_1177.f_543[num]=iParam32;
Global_1655472.f_1177.f_554[num]=iParam33;
Global_1655472.f_1177.f_565[num]=iParam34;
Global_1655472.f_1177.f_576[num]=iParam35;
Global_1655472.f_1177.f_587[num]=iParam36;
}
return;
}


void func_92(int iParam0, int iParam1) // Position - 0x2EB3{
MISC::SET_BIT(&Global_1655472.f_7009[iParam0], iParam1);
return;
}
BOOL func_93(int iParam0, int iParam1) // Position - 0x2ECC{
return IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}
int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x2EE2{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
else return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}
BOOL func_95() // Position - 0x2F29{
return Global_75693;
}


void func_96(int iParam0) // Position - 0x2F35{
int num;
num=iParam0;
func_103(iParam0);
if(func_102(&num, 2)){
_STOPWATCH_RESET(&(caLocal_160.f_17), false, false);
uLocal_64.f_8={
Global_2764654.f_8 
};
}
if(func_102(&num, 6)) uLocal_64.f_19=Global_2764654.f_19;
if(func_102(&num, 10)) uLocal_64.f_74={
Global_2764654.f_74 
};
if(func_102(&num, 8)) uLocal_64.f_67={
Global_2764654.f_67 
};
if(func_102(&num, 12)) uLocal_64.f_20={
Global_2764654.f_20 
};
func_97(iParam0);
return;
}


void func_97(int iParam0) // Position - 0x2FCE{
int num;
num=iParam0;
func_102(&num, 0);
func_102(&num, 1);
if(func_102(&num, 2)){
uLocal_64.f_8={
Global_2764654.f_8 
};
switch (uLocal_64.f_8.f_1){
case 1:
GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1.5f);
if(caLocal_160.f_19.f_2==0 && func_101()) func_98(&(caLocal_160.f_19), uLocal_64.f_13.f_2, false, false);
else func_90();
break;
case 2:
uLocal_64.f_86="helicopterhud";
uLocal_64.f_16=Global_2764654.f_16;
if(uLocal_64.f_16 !=0) STREAMING::REQUEST_MODEL(uLocal_64.f_16);
break;
default:
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uLocal_64.f_86)) GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uLocal_64.f_86, false);
}
if(func_102(&num, 4)){
switch (uLocal_64.f_17){
case 4:
uLocal_64.f_86.f_1="";
break;
case 0:
uLocal_64.f_86.f_1="turret_cam";
break;
case 1:
uLocal_64.f_86.f_1="ARENA_GUN_CAM_APOCALYPSE";
break;
case 2:
uLocal_64.f_86.f_1="ARENA_GUN_CAM_SCIFI";
break;
case 3:
uLocal_64.f_86.f_1="ARENA_GUN_CAM_CONSUMER";
break;
default:
uLocal_64.f_86.f_1="UNDEFINED";
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uLocal_64.f_86.f_1)) caLocal_160.f_36=GRAPHICS::REQUEST_SCALEFORM_MOVIE(uLocal_64.f_86.f_1);
}
if(func_102(&num, 6)){
caLocal_160.f_40.f_13.f_2=-1;
switch (uLocal_64.f_19){
case 0:
caLocal_160.f_40.f_13="dlc_aw_Arena_Spectator_Turret_turret_Sounds";
caLocal_160.f_40.f_13.f_1="Fire_MG_Loop";
caLocal_160.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
case 1:
caLocal_160.f_40.f_13="dlc_aw_Arena_Gun_Turret_Sounds";
caLocal_160.f_40.f_13.f_1="Fire_MG_Loop";
caLocal_160.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
case 2:
caLocal_160.f_40.f_13="dlc_aw_Arena_Gun_Turret_Sounds";
caLocal_160.f_40.f_13.f_1="Fire_Rockets_Oneshot";
caLocal_160.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
case 3:
caLocal_160.f_40.f_13="dlc_aw_Arena_Gun_Turret_Sounds";
caLocal_160.f_40.f_13.f_1="Launch_Piloted_Missile";
caLocal_160.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
default:
caLocal_160.f_40.f_13=0;
caLocal_160.f_40.f_13.f_1=0;
caLocal_160.f_40.f_13.f_2=-1;
break;
}}
if(func_102(&num, 5)){
caLocal_160.f_40.f_10=-1;
caLocal_160.f_40.f_8=-1;
caLocal_160.f_40.f_9=-1;
caLocal_160.f_40.f_11=-1;
caLocal_160.f_40.f_12=-1;
switch (uLocal_64.f_18){
case 0:
caLocal_160.f_40="SCRIPT\\POLICE_CHOPPER_CAM";
caLocal_160.f_40.f_1="dlc_aw_arena_turret_scene";
caLocal_160.f_40.f_2="dlc_aw_Arena_Spectator_Turret_turret_Sounds";
caLocal_160.f_40.f_5="Turret_Camera_Hum_Loop";
caLocal_160.f_40.f_10=AUDIO::GET_SOUND_ID();
caLocal_160.f_40.f_3="Pan";
caLocal_160.f_40.f_8=AUDIO::GET_SOUND_ID();
caLocal_160.f_40.f_4="Zoom";
caLocal_160.f_40.f_9=AUDIO::GET_SOUND_ID();
break;
case 1:
caLocal_160.f_40="SCRIPT\\POLICE_CHOPPER_CAM";
caLocal_160.f_40.f_1="dlc_aw_arena_turret_scene";
caLocal_160.f_40.f_2="dlc_aw_Arena_Gun_Turret_Sounds";
caLocal_160.f_40.f_5="Turret_Camera_Hum_Loop";
caLocal_160.f_40.f_10=AUDIO::GET_SOUND_ID();
caLocal_160.f_40.f_3="Pan";
caLocal_160.f_40.f_8=AUDIO::GET_SOUND_ID();
caLocal_160.f_40.f_4="Zoom";
caLocal_160.f_40.f_9=AUDIO::GET_SOUND_ID();
caLocal_160.f_40.f_6="Take_Damage";
caLocal_160.f_40.f_11=AUDIO::GET_SOUND_ID();
caLocal_160.f_40.f_7="Low_Health_Warning";
caLocal_160.f_40.f_12=AUDIO::GET_SOUND_ID();
break;
default:
caLocal_160.f_40=0;
caLocal_160.f_40.f_2=0;
caLocal_160.f_40.f_5=0;
caLocal_160.f_40.f_10=-1;
caLocal_160.f_40.f_3=0;
caLocal_160.f_40.f_8=-1;
caLocal_160.f_40.f_4=0;
caLocal_160.f_40.f_9=-1;
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(caLocal_160.f_40)) unk_0x2E09B6089A1271EB(caLocal_160.f_40, 0, -1);
}
func_102(&num, 3);
if(func_102(&num, 7))if(uLocal_64.f_24 > 0) func_31(0, -1, false);
func_102(&num, 8);
func_102(&num, 9);
func_102(&num, 10);
if(func_102(&num, 11))if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_64.f_80))) func_35(&(uLocal_64.f_80));
func_102(&num, 12);
return;
}


void func_98(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x33EE{
if(uParam0->f_1==0){
*uParam0=NETWORK::GET_TIME_OFFSET(func_100(bParam2, bParam3), func_99(-iParam1, 0));
uParam0->f_1=1;
}
return;
}

int func_99(int iParam0, int iParam1) // Position - 0x341A{
if(iParam0 > iParam1) return iParam1;
return iParam0;
}

int func_100(BOOL bParam0, BOOL bParam1) // Position - 0x3430{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam0)if(!bParam1) return NETWORK::GET_NETWORK_TIME();
else return NETWORK::GET_NETWORK_TIME_ACCURATE();
return MISC::GET_GAME_TIMER();
}
BOOL func_101() // Position - 0x3462{
return !_STOPWATCH_IS_INITIALIZED(&(caLocal_160.f_19)) || _STOPWATCH_HAS_TIME_PASSED(&(caLocal_160.f_19), uLocal_64.f_13.f_2, false);
}
BOOL func_102(int* piParam0, int iParam1) // Position - 0x3488{
if(IS_BIT_SET(*piParam0, iParam1)){
MISC::CLEAR_BIT(piParam0, iParam1);
return true;
}
return false;
}


void func_103(int iParam0) // Position - 0x34A6{
func_102(&iParam0, 0);
func_102(&iParam0, 1);
if(func_102(&iParam0, 2)){
caLocal_160.f_37=0;
switch (uLocal_64.f_8.f_1){
case 1:
GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
break;
case 3:
if(caLocal_160.f_29) CAM::DO_SCREEN_FADE_IN(250);
caLocal_160.f_29.f_1=0;
caLocal_160.f_29=0;
if(caLocal_160.f_29.f_5){
caLocal_160.f_29.f_5=0;
func_66(true);
}
break;
case 2:
func_83();
if(uLocal_64.f_16 !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uLocal_64.f_16);
uLocal_64.f_16=0;
}
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uLocal_64.f_86)){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uLocal_64.f_86);
uLocal_64.f_86="";
}}
func_102(&iParam0, 3);
if(func_102(&iParam0, 4)){
caLocal_160.f_37=0;
uLocal_64.f_86.f_1="";
if(caLocal_160.f_36 !=-1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(caLocal_160.f_36));
caLocal_160.f_36=-1;
}}
if(func_102(&iParam0, 6)) func_76(&(caLocal_160.f_40.f_13.f_2));
if(func_102(&iParam0, 5)){
AUDIO::STOP_AUDIO_SCENES();
AUDIO::UNHINT_SCRIPT_AUDIO_BANK();
if(!MISC::IS_STRING_NULL_OR_EMPTY(caLocal_160.f_40)) AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(caLocal_160.f_40);
func_76(&(caLocal_160.f_40.f_8));
func_76(&(caLocal_160.f_40.f_9));
func_76(&(caLocal_160.f_40.f_10));
func_76(&(caLocal_160.f_40.f_11));
func_76(&(caLocal_160.f_40.f_12));
}
if(func_102(&iParam0, 7))if(uLocal_64.f_24 > 0) func_104(true, -1);
if(func_102(&iParam0, 8))if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_64.f_67)) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(uLocal_64.f_67))) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_102(&iParam0, 9);
func_102(&iParam0, 10);
if(func_102(&iParam0, 11)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_64.f_80))){
func_36();
TEXT_LABEL_ASSIGN_STRING(&(uLocal_64.f_80), "", 16);
}}
if(func_102(&iParam0, 12)) caLocal_160.f_37=0;
return;
}


void func_104(BOOL bParam0, int iParam1) // Position - 0x368E{
int num;
if(!func_26(&num, false, iParam1)) return;
if(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
Global_23270.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23270.f_6071[num]){
HUD::CLEAR_ADDITIONAL_TEXT(9, false);
Global_23270.f_6071[num]=false;
}
if(Global_23270.f_6057[num]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23270.f_6057[num]=false;
}
if(Global_23270.f_6064[num]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23270.f_6064[num]=false;
}
if(bParam0){
func_105(&Global_23270.f_6103[num /*10*/]);
Global_23270.f_6164[num]=0;
}else{
Global_23270.f_6164[num]=0;
}
return;
}


void func_105(Player plParam0) // Position - 0x374A{
if(plParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*plParam0)) GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(plParam0);
*plParam0=0;
plParam0->f_9=0;
}
return;
}


void func_106() // Position - 0x3776{
if(!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT() && IS_BIT_SET(uLocal_64.f_84.f_1, 1)) CAM::DO_SCREEN_FADE_OUT(uLocal_64.f_84);
if(_STOPWATCH_HAS_TIME_PASSED(&(caLocal_160.f_58), uLocal_64.f_84, false)){
if(!IS_BIT_SET(uLocal_64.f_84.f_1, 0) || func_108(uLocal_64.f_88, 0)){
if(!CAM::DOES_CAM_EXIST(caLocal_160)){
caLocal_160=CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
MISC::SET_BIT(&(caLocal_160.f_60), 2);
func_41();
MISC::CLEAR_BIT(&(caLocal_160.f_60), 2);
PLAYER::SET_SCRIPT_FIRE_POSITION(caLocal_160.f_4.f_6);
}else{
if(IS_BIT_SET(uLocal_64.f_84.f_1, 0)) STREAMING::NEW_LOAD_SCENE_STOP();
CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
func_3(&(caLocal_160.f_38), &(caLocal_160.f_39));
func_37();
if(!MISC::IS_STRING_NULL_OR_EMPTY(caLocal_160.f_40.f_1)) AUDIO::START_AUDIO_SCENE(caLocal_160.f_40.f_1);
_STOPWATCH_RESET(&(caLocal_160.f_17), false, false);
MISC::SET_BIT(&Global_2764742, 3);
func_107(1);
if(GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >=0){
caLocal_160.f_57=1;
GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
}
GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
caLocal_160.f_56=GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
if(IS_BIT_SET(uLocal_64.f_84.f_1, 2))if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) CAM::DO_SCREEN_FADE_IN(800);
}}}
return;
}


void func_107(int iParam0) // Position - 0x38AD{
caLocal_160.f_16=iParam0;
return;
}
BOOL func_108(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x38BB{
if(IS_BIT_SET(caLocal_160.f_60, 0))if(STREAMING::IS_NEW_LOAD_SCENE_LOADED()) return true;
elseif(STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 100f, iParam3)) MISC::SET_BIT(&(caLocal_160.f_60), 0);
return false;
}


void func_109(int iParam0) // Position - 0x38F6{
if(func_114()) return;
if(!Global_20383.f_1==1){
if(func_113(0)) func_110(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_110(int iParam0) // Position - 0x3929{
if(func_114()) return;
if(Global_20584)if(func_54()) func_112(true, true);
else func_112(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_111()) Global_20383.f_1=3;
return;
}
BOOL func_111() // Position - 0x39B3{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_112(BOOL bParam0, BOOL bParam1) // Position - 0x39DA{
if(bParam0){
if(func_113(0)){
Global_20584=true;
if(bParam1) MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==true){
Global_20584=false;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1) MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
else MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}
return;
}
BOOL func_113(int iParam0) // Position - 0x3A4E{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_114() // Position - 0x3AA5{
return IS_BIT_SET(Global_1962996, 19);
}
BOOL func_115() // Position - 0x3AB4{
if(uLocal_64.f_94 !=0)if(!ENTITY::DOES_ENTITY_EXIST(uLocal_64.f_95) || ENTITY::IS_ENTITY_DEAD(uLocal_64.f_95, false)) return true;
if(!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true)) return true;
if(Global_2764652) return true;
return false;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x3B01{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_123()) return true;
if(Global_2696915) return true;
if(func_122()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_120()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x3B85{
switch (func_119()){
case 0:
return func_118();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_118() // Position - 0x3BB8{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_119() // Position - 0x3BDC{
return Global_32163;
}
BOOL func_120() // Position - 0x3BE7{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x3BF6{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_122() // Position - 0x3C0D{
return Global_2694524;
}
BOOL func_123() // Position - 0x3C19{
return Global_2683862.f_693;
}


void func_124() // Position - 0x3C28{
SYSTEM::WAIT(0);
return;
}


void func_125() // Position - 0x3C35{
Ped ped;
Vehicle vehiclePedIsIn;
if(caLocal_160.f_16==0 && IS_BIT_SET(uLocal_64.f_84.f_1, 1)) CAM::DO_SCREEN_FADE_IN(250);
func_103(-1);
if(func_133()) func_132(0);
CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
HUD::UNLOCK_MINIMAP_ANGLE();
HUD::UNLOCK_MINIMAP_POSITION();
ped=PLAYER::PLAYER_PED_ID();
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(ped) && PED::IS_PED_IN_ANY_VEHICLE(ped, true)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn)){
AUDIO::SET_VEHICLE_RADIO_ENABLED(vehiclePedIsIn, true);
func_129(1);
}}
if(IS_BIT_SET(caLocal_160.f_60, 4)) func_128();
PLAYER::REMOVE_SCRIPT_FIRE_POSITION();
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
if(caLocal_160.f_57) GRAPHICS::POP_TIMECYCLE_MODIFIER();
func_127(caLocal_160.f_38);
func_127(caLocal_160.f_39);
Global_2764641=0;
Global_2764742=0;
func_126();
return;
}


void func_126() // Position - 0x3CF0{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_127(Blip blParam0) // Position - 0x3CFC{
if(HUD::DOES_BLIP_EXIST(blParam0)) HUD::REMOVE_BLIP(&blParam0);
return;
}


void func_128() // Position - 0x3D13{
if(Global_2672505.f_946.f_10) Global_2672505.f_946.f_10=0;
return;
}


void func_129(int iParam0) // Position - 0x3D31{
Vehicle vehiclePedIsIn;
if(Global_2635559.f_2690==1){
Global_2635559.f_2690=0;
return;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
if(!Global_2635559.f_2692.f_1){
if(!Global_2635559.f_2688==-1){
if(Global_2635559.f_2688 < 255 && !func_130() && !IS_BIT_SET(*Global_4718592.f_166337, 0) && !(AUDIO::AUDIO_IS_MUSIC_PLAYING() && Global_2635559.f_2689==0 && iParam0==0)){
AUDIO::SET_RADIO_TO_STATION_INDEX(Global_2635559.f_2688);
}elseif(Global_2635559.f_2688 >=255){
AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn)) AUDIO::SET_VEH_RADIO_STATION(vehiclePedIsIn, "OFF");
}}
Global_2635559.f_2688=-1;
Global_2635559.f_2692.f_1=1;
}}
return;
}
BOOL func_130() // Position - 0x3E1A{
return Global_1889629;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x3E26{
if(ENTITY::DOES_ENTITY_EXIST(pedParam0))if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) return true;
return false;
}


void func_132(BOOL bParam0) // Position - 0x3E47{
Global_2696952=bParam0;
return;
}
BOOL func_133() // Position - 0x3E55{
return Global_2696952;
}


void func_134(var uParam0) // Position - 0x3E61{
MISC::SET_BIT(&Global_2764742, 2);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
}else{
func_125();
}
func_135(uParam0);
return;
}


void func_135(var uParam0) // Position - 0x3E96{
Ped ped;
Vehicle vehiclePedIsIn;
uLocal_64.f_88={
*uParam0 
};
uLocal_64.f_91={
uParam0->f_3 
};
uLocal_64.f_94=uParam0->f_6;
uLocal_64.f_95=uParam0->f_7;
caLocal_160.f_22.f_4=-1;
ped=PLAYER::PLAYER_PED_ID();
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(ped) && PED::IS_PED_IN_ANY_VEHICLE(ped, true)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn)){
func_151(1);
AUDIO::SET_VEHICLE_RADIO_ENABLED(vehiclePedIsIn, false);
}}
if(!func_150()){
MISC::SET_BIT(&(caLocal_160.f_60), 4);
func_149();
}
func_136();
return;
}


void func_136() // Position - 0x3F1F{
if(!IS_BIT_SET(Global_2764740, 0)) func_148(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
if(!IS_BIT_SET(Global_2764740, 1)) func_147(1058642330, 1101004800);
if(!IS_BIT_SET(Global_2764740, 2)) func_146();
if(!IS_BIT_SET(Global_2764740, 3)) func_144(true, true, false, 500);
if(!IS_BIT_SET(Global_2764740, 4)) func_143(0);
if(!IS_BIT_SET(Global_2764740, 5)) func_142(0);
if(!IS_BIT_SET(Global_2764740, 6)) func_141(0);
if(!IS_BIT_SET(Global_2764740, 7)){
MISC::SET_BIT(&Global_2764740, 7);
Global_2764654.f_24=0;
}
if(!IS_BIT_SET(Global_2764740, 8)) func_140(0);
if(!IS_BIT_SET(Global_2764740, 9)) func_139(0f, 0f, 0f);
if(!IS_BIT_SET(Global_2764740, 10)){
MISC::SET_BIT(&Global_2764740, 10);
Global_2764654.f_74=0;
}
if(!IS_BIT_SET(Global_2764740, 11)) func_138(0);
if(!IS_BIT_SET(Global_2764740, 12)) func_137(1, 3, 3, 3);
uLocal_64={
Global_2764654 
};
func_97(Global_2764740);
func_107(0);
return;
}


void func_137(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4050{
MISC::SET_BIT(&Global_2764740, 12);
Global_2764654.f_20=iParam0;
Global_2764654.f_20.f_1=iParam1;
Global_2764654.f_20.f_2=iParam2;
Global_2764654.f_20.f_3=iParam3;
return;
}


void func_138(char* sParam0) // Position - 0x4088{
MISC::SET_BIT(&Global_2764740, 11);
TEXT_LABEL_ASSIGN_STRING(&(Global_2764654.f_80), sParam0, 16);
return;
}


void func_139(float fParam0, float fParam1, float fParam2) // Position - 0x40A4{
MISC::SET_BIT(&Global_2764740, 9);
Global_2764654.f_71={
fParam0 
};
return;
}


void func_140(char* sParam0) // Position - 0x40C2{
MISC::SET_BIT(&Global_2764740, 8);
TEXT_LABEL_ASSIGN_STRING(&(Global_2764654.f_67), sParam0, 16);
return;
}


void func_141(int iParam0) // Position - 0x40DE{
MISC::SET_BIT(&Global_2764740, 6);
Global_2764654.f_19=iParam0;
return;
}


void func_142(int iParam0) // Position - 0x40F7{
MISC::SET_BIT(&Global_2764740, 5);
Global_2764654.f_18=iParam0;
return;
}


void func_143(int iParam0) // Position - 0x4110{
MISC::SET_BIT(&Global_2764740, 4);
Global_2764654.f_17=iParam0;
return;
}


void func_144(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x4129{
MISC::SET_BIT(&Global_2764740, 3);
Global_2764654.f_84=iParam3;
func_145(&(Global_2764654.f_84.f_1), 1, bParam0);
func_145(&(Global_2764654.f_84.f_1), 2, bParam1);
func_145(&(Global_2764654.f_84.f_1), 0, bParam2);
return;
}


void func_145(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x416F{
if(bParam2) MISC::SET_BIT(piParam0, iParam1);
else MISC::CLEAR_BIT(piParam0, iParam1);
return;
}


void func_146() // Position - 0x418F{
MISC::SET_BIT(&Global_2764740, 2);
Global_2764654.f_8.f_1=0;
return;
}


void func_147(int iParam0, int iParam1) // Position - 0x41A9{
MISC::SET_BIT(&Global_2764740, 1);
Global_2764654.f_6.f_1=iParam0;
Global_2764654.f_6=iParam1;
return;
}


void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x41CC{
MISC::SET_BIT(&Global_2764740, 0);
Global_2764654=iParam0;
Global_2764654.f_1=iParam1;
Global_2764654.f_2=iParam2;
Global_2764654.f_3=iParam3;
Global_2764654.f_4=iParam4;
Global_2764654.f_5=iParam5;
return;
}


void func_149() // Position - 0x420B{
if(!Global_2672505.f_946.f_10) Global_2672505.f_946.f_10=1;
return;
}
BOOL func_150() // Position - 0x422A{
return Global_2672505.f_946.f_10;
}


void func_151(int iParam0) // Position - 0x423B{
int num;
num=Global_2635559.f_2691;
if(AUDIO::AUDIO_IS_MUSIC_PLAYING() && Global_2635559.f_2689==0 && iParam0==0) num=255;
if(!num==Global_2635559.f_2688)if(!AUDIO::IS_RADIO_RETUNING()) Global_2635559.f_2688=num;
return;
}
int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x4290{
int i;
for (i=NETWORK::NETWORK_GET_SCRIPT_STATUS();
i !=2;
i=NETWORK::NETWORK_GET_SCRIPT_STATUS()){
if(i==3 || i==4 || i==5 || i==6)if(!bNoTerminate) func_126();
else return 0;
if(!func_153(false)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_126();
else return 0;
if(func_123())if(!bNoTerminate) func_126();
else return 0;
if(_DOES_EVENT_OF_TYPE_EXIST(157))if(!bNoTerminate) func_126();
else return 0;
}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bNoTerminate) func_126();
else return 0;
}}
SYSTEM::WAIT(0);
}
if(iParam1 > -1) Global_1574666=i;
if(iParam0==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_126();
else return 0;
elseif(!NETWORK::NETWORK_IS_IN_SESSION())if(!bNoTerminate) func_126();
else return 0;
return 1;
}
BOOL func_153(BOOL bParam0) // Position - 0x43A6{
bParam0;
return Global_1575035;
}