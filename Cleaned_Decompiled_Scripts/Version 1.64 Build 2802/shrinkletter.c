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
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
int iLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
int iLocal_52=0;
Player plLocal_53=0;
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
var uLocal_74=8;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=4;
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
var uLocal_93=4;
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
var uLocal_108=4;
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
var uLocal_122=0;
var uLocal_123=4;
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
var uLocal_138=4;
var uLocal_139=0;
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
var uLocal_153=4;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=4;
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
var uLocal_183=4;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=0;
var uLocal_194=0;
var uLocal_195=0;
#endregion

void main() // Position - 0x0{
var unk;
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
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18)) func_60();
HUD::REQUEST_ADDITIONAL_TEXT("REPORT", 0);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
SYSTEM::WAIT(0);
}
while (true){
switch (iLocal_52){
case 0:
break;
case 1:
func_51(true, true, true, false, false, false, false);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
HUD::DISPLAY_RADAR(false);
HUD::DISPLAY_HUD(false);
plLocal_53=GRAPHICS::REQUEST_SCALEFORM_MOVIE("PSYCHOLOGY_REPORT");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_53)){
func_43();
SYSTEM::WAIT(0);
}
HUD::REQUEST_ADDITIONAL_TEXT("REPORT", 3);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3)){
func_43();
SYSTEM::WAIT(0);
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_53, "SET_PLAYER_NAME");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("PATIENT");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("GAMERTAG");
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()) HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("ACCNA_MIKE" /*Michael De Santa*/);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_53, "SET_LETTER_TEXT");
func_42("HEADER_1");
func_42("HEADER_2");
unk={
func_41(&uLocal_54) 
};
func_42(&unk);
unk={
func_40(&uLocal_54) 
};
func_42(&unk);
unk={
func_39(&uLocal_54) 
};
func_42(&unk);
unk={
func_38(&uLocal_54) 
};
func_42(&unk);
unk={
func_37(&uLocal_54) 
};
func_42(&unk);
unk={
func_35(&uLocal_54) 
};
func_42(&unk);
unk={
func_33(&uLocal_54) 
};
func_42(&unk);
unk={
func_32(&uLocal_54) 
};
func_42(&unk);
unk={
func_31(&uLocal_54) 
};
func_42(&unk);
unk={
func_30(&uLocal_54) 
};
func_42(&unk);
unk={
func_28(&uLocal_54) 
};
func_42(&unk);
unk={
func_24(&uLocal_54) 
};
func_42(&unk);
unk={
func_23(&uLocal_54) 
};
func_42(&unk);
unk={
func_21(&uLocal_54) 
};
func_42(&unk);
unk={
func_20(&uLocal_54) 
};
func_42(&unk);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
while (!func_13(&uLocal_70, &uLocal_71, &uLocal_54)){
func_43();
SYSTEM::WAIT(0);
}
func_12(&uLocal_72);
func_11(&uLocal_72, false, false, false, true);
func_10(&uLocal_72, "CONTINUE", 2, 201, 1, 1, 0);
func_9(&uLocal_72, true);
func_8(&uLocal_72, true);
if(CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_IN()){
func_43();
CAM::DO_SCREEN_FADE_IN(800);
}
while (!CAM::IS_SCREEN_FADED_IN()){
func_43();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(plLocal_53, 255, 255, 255, 255, 0);
SYSTEM::WAIT(0);
}}
func_43();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(plLocal_53, 255, 255, 255, 255, 0);
iLocal_52=2;
break;
case 2:
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(plLocal_53, 255, 255, 255, 255, 0);
func_1(&uLocal_72, 1128792064, 1, false, true, 1065353216);
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 201)) iLocal_52=3;
break;
case 3:
func_12(&uLocal_72);
CAM::DO_SCREEN_FADE_OUT(3000);
while (CAM::IS_SCREEN_FADING_OUT()){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(plLocal_53, 255, 255, 255, 255, 0);
func_43();
SYSTEM::WAIT(0);
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_53);
func_51(false, true, true, false, false, false, false);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
HUD::DISPLAY_RADAR(true);
HUD::DISPLAY_HUD(true);
func_60();
break;
}
if(iLocal_52 !=0) func_43();
SYSTEM::WAIT(0);
}
return;
}


void func_1(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3AE{
eControlType control;
eControlAction controlGroup;
BOOL allowXOSwap;
const char* controlInstructionalButtonsString;
BOOL isUsingKeyboardAndMouse;
int value;
int i;
int j;
float value2;
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_OUT() || MISC::IS_FRONTEND_FADING())if(!bParam3) return;
if(!func_7(uParam0)) return;
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
if(!func_6(uParam0->f_1, 256) || func_6(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_CLEAR_SPACE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_6(uParam0->f_1, 4096));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
value=0;
for (i=0;
i < uParam0->f_123;
i=i + 1){
switch (uParam0->f_2[i /*15*/].f_2){
case 0:
isUsingKeyboardAndMouse=true;
break;
case 1:
isUsingKeyboardAndMouse=PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL);
break;
case 2:
isUsingKeyboardAndMouse=!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL);
break;
default:
isUsingKeyboardAndMouse=false;
break;
}
if(isUsingKeyboardAndMouse){
if(NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
value=value + 1;
for (j=0;
j < uParam0->f_2[i /*15*/].f_14;
j=j + 1){
control=uParam0->f_2[i /*15*/].f_3[j /*2*/];
controlGroup=uParam0->f_2[i /*15*/].f_3[j /*2*/].f_1;
allowXOSwap=IS_BIT_SET(uParam0->f_2[i /*15*/].f_13, j);
if(!IS_BIT_SET(uParam0->f_2[i /*15*/].f_12, j)) controlInstructionalButtonsString=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, controlGroup, allowXOSwap);
else controlInstructionalButtonsString=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(control, controlGroup, allowXOSwap);
if(!MISC::IS_STRING_NULL_OR_EMPTY(controlInstructionalButtonsString)) func_5(controlInstructionalButtonsString);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[i /*15*/])) func_42(uParam0->f_2[i /*15*/]);
if(MISC::IS_PC_VERSION()){
if(func_6(uParam0->f_1, 4096)){
if(uParam0->f_2[i /*15*/].f_1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[i /*15*/].f_3[0 /*2*/].f_1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}
value2=bParam4 ? func_6(uParam0->f_1, 32) ? 1f :
0f :
-1f;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(value2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_3(&(uParam0->f_1), 256);
func_2(&(uParam0->f_1), 128);
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
return;
}


void func_2(var uParam0, int iParam1) // Position - 0x661{
*uParam0=*uParam0 - *uParam0 && iParam1;
return;
}


void func_3(var uParam0, int iParam1) // Position - 0x676{
*uParam0=*uParam0 || iParam1;
return;
}


var func__4(BOOL bParam0, var uParam1, var uParam2) // Position - 0x687{
if(bParam0) return uParam1;
return uParam2;
}


void func_5(const char* sParam0) // Position - 0x69E{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
return;
}
BOOL func_6(int iParam0, int iParam1) // Position - 0x6AC{
return iParam0 && iParam1 !=false;
}
BOOL func_7(var uParam0) // Position - 0x6BB{
if(*uParam0 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_3(&(uParam0->f_1), 1);
return true;
}}
return false;
}


void func_8(var uParam0, BOOL bParam1) // Position - 0x6E2{
if(bParam1) func_3(&(uParam0->f_1), 16);
else func_2(&(uParam0->f_1), 16);
return;
}


void func_9(var uParam0, BOOL bParam1) // Position - 0x706{
if(bParam1) func_3(&(uParam0->f_1), 1024);
else func_2(&(uParam0->f_1), 1024);
return;
}

int func_10(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x72C{
int num;
int num2;
if(*uParam0==0) return 0;
num=0;
if(iParam5==1) num=1;
num2=uParam0->f_123;
if(num2 < 8){
uParam0->f_2[num2 /*15*/]=sParam1;
uParam0->f_2[num2 /*15*/].f_1=num;
uParam0->f_2[num2 /*15*/].f_2=iParam6;
uParam0->f_2[num2 /*15*/].f_12=0;
uParam0->f_2[num2 /*15*/].f_13=0;
uParam0->f_2[num2 /*15*/].f_14=0;
uParam0->f_2[num2 /*15*/].f_3[0 /*2*/]=iParam2;
uParam0->f_2[num2 /*15*/].f_3[0 /*2*/].f_1=iParam3;
if(iParam4==1) MISC::SET_BIT(&(uParam0->f_2[num2 /*15*/].f_13), 0);
uParam0->f_2[num2 /*15*/].f_14=uParam0->f_2[num2 /*15*/].f_14 + 1;
uParam0->f_123=uParam0->f_123 + 1;
return 1;
}
return 0;
}


void func_11(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7F5{
if(*uParam0==0) *uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
uParam0->f_1=0;
uParam0->f_123=0;
if(bParam1) func_3(&(uParam0->f_1), 32);
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_3(&(uParam0->f_1), 1);
if(bParam2) GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
}
if(MISC::IS_PC_VERSION())if(bParam3) func_3(&(uParam0->f_1), 4096);
if(bParam4) func_3(&(uParam0->f_1), 8192);
return;
}


void func_12(int* piParam0) // Position - 0x86F{
if(*piParam0 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
*piParam0=0;
}
piParam0->f_1=0;
piParam0->f_123=0;
return;
}
BOOL func_13(var uParam0, BOOL* pbParam1, var uParam2) // Position - 0x892{
Any* fileDict;
if(func_17()) return true;
switch (*uParam0){
case 0:
if(func_16()) return false;
func_15();
*uParam0=*uParam0 + 1;
break;
case 1:
DATAFILE::DATAFILE_CREATE(0);
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
DATAFILE::DATADICT_SET_INT(fileDict, "in", *uParam2);
DATAFILE::DATADICT_SET_STRING(fileDict, "st", &(uParam2->f_1));
DATAFILE::DATADICT_SET_STRING(fileDict, "mp", &(uParam2->f_2));
DATAFILE::DATADICT_SET_STRING(fileDict, "ms", &(uParam2->f_3));
DATAFILE::DATADICT_SET_STRING(fileDict, "sc", &(uParam2->f_5));
DATAFILE::DATADICT_SET_STRING(fileDict, "pr", &(uParam2->f_6));
DATAFILE::DATADICT_SET_STRING(fileDict, "fa", &(uParam2->f_7));
DATAFILE::DATADICT_SET_STRING(fileDict, "sm", &(uParam2->f_8));
DATAFILE::DATADICT_SET_STRING(fileDict, "kp", &(uParam2->f_9));
DATAFILE::DATADICT_SET_STRING(fileDict, "sv", &(uParam2->f_10));
DATAFILE::DATADICT_SET_STRING(fileDict, "yo", &(uParam2->f_11));
DATAFILE::DATADICT_SET_STRING(fileDict, "fi", &(uParam2->f_12));
DATAFILE::DATADICT_SET_STRING(fileDict, "rc", &(uParam2->f_13));
DATAFILE::DATADICT_SET_STRING(fileDict, "co", &(uParam2->f_14));
DATAFILE::DATADICT_SET_INT(fileDict, "su", uParam2->f_15);
DATAFILE::DATAFILE_START_SAVE_TO_CLOUD("gta5/psych/index.json", 0);
*uParam0=*uParam0 + 1;
break;
case 2:
if(func_14(pbParam1, true)) return true;
break;
}
return false;
}
BOOL func_14(BOOL* pbParam0, BOOL bParam1) // Position - 0x9DD{
if(!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(pbParam0)){
if(*pbParam0){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0 && bParam1) DATAFILE::DATAFILE_DELETE(0);
return true;
}else{
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0 && bParam1) DATAFILE::DATAFILE_DELETE(0);
return true;
}}
return false;
}


void func_15() // Position - 0xA30{
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}
BOOL func_16() // Position - 0xA46{
if(NETWORK::UGC_IS_CREATING()) return true;
elseif(NETWORK::UGC_IS_GETTING()) return true;
elseif(NETWORK::UGC_IS_MODIFYING()) return true;
return false;
}
BOOL func_17() // Position - 0xA76{
if(!func_18()) return true;
return false;
}
BOOL func_18() // Position - 0xA8B{
if(func_19()) return false;
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==false) return false;
return true;
}
BOOL func_19() // Position - 0xAAB{
return Global_2695031;
}


struct<4> func_20(var uParam0) // Position - 0xAB7{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "SUMMARY_", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 24);
uParam0->f_15=randomIntInRange;
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_21(var uParam0) // Position - 0xAE0{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "COLLECT_", 16);
if(func_22(110) || func_22(95) || func_22(106) || func_22(107)){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
}
TEXT_LABEL_APPEND_INT(&(uParam0->f_14), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}
BOOL func_22(int iParam0) // Position - 0xB68{
if(iParam0==146 || iParam0==-1) return false;
return Global_113648.f_9087.f_99.f_58[iParam0];
}


struct<4> func_23(var uParam0) // Position - 0xB95{
var unk;
int randomIntInRange;
int outValue;
var outValue2;
int num;
TEXT_LABEL_ASSIGN_STRING(&unk, "RAND_", 16);
STATS::STAT_GET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), &outValue, -1);
STATS::STAT_GET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), &outValue2, -1);
num=outValue + outValue2;
if(num > 10){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
TEXT_LABEL_APPEND_INT(&(uParam0->f_13), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_24(var uParam0) // Position - 0xC0F{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "FIT_", 16);
if(func_25(1, 1) > 50 && func_25(1, 2) > 50 && func_25(1, 3) > 50 && func_25(0, 1) > 50 && func_25(0, 2) > 50 && func_25(0, 3) > 50 && func_25(2, 1) > 50 && func_25(2, 2) > 50 && func_25(2, 3) > 50){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
TEXT_LABEL_APPEND_INT(&(uParam0->f_12), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}

int func_25(int iParam0, int iParam1) // Position - 0xCDD{
int outValue;
Hash statHash;
statHash=func_26(iParam0, iParam1);
STATS::STAT_GET_INT(statHash, &outValue, -1);
return outValue;
}
Hash func_26(int iParam0, int iParam1) // Position - 0xCFB{
var unk;
var unk2;
func_27(iParam0, iParam1, &unk, &unk2);
return unk;
}


void func_27(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0xD11{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
*uParam2=joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
break;
case 1:
*uParam2=joaat("SP0_STAMINA");
break;
case 3:
*uParam2=joaat("SP0_LUNG_CAPACITY");
break;
case 2:
*uParam2=joaat("SP0_STRENGTH");
break;
case 4:
*uParam2=joaat("SP0_WHEELIE_ABILITY");
break;
case 5:
*uParam2=joaat("SP0_FLYING_ABILITY");
break;
case 6:
*uParam2=joaat("SP0_SHOOTING_ABILITY");
break;
case 7:
*uParam2=joaat("SP0_STEALTH_ABILITY");
break;
}
break;
case 1:
switch (iParam1){
case 0:
*uParam2=joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
break;
case 1:
*uParam2=joaat("SP1_STAMINA");
break;
case 3:
*uParam2=joaat("SP1_LUNG_CAPACITY");
break;
case 2:
*uParam2=joaat("SP1_STRENGTH");
break;
case 4:
*uParam2=joaat("SP1_WHEELIE_ABILITY");
break;
case 5:
*uParam2=joaat("SP1_FLYING_ABILITY");
break;
case 6:
*uParam2=joaat("SP1_SHOOTING_ABILITY");
break;
case 7:
*uParam2=joaat("SP1_STEALTH_ABILITY");
break;
}
break;
case 2:
switch (iParam1){
case 0:
*uParam2=joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
break;
case 1:
*uParam2=joaat("SP2_STAMINA");
break;
case 3:
*uParam2=joaat("SP2_LUNG_CAPACITY");
break;
case 2:
*uParam2=joaat("SP2_STRENGTH");
break;
case 4:
*uParam2=joaat("SP2_WHEELIE_ABILITY");
break;
case 5:
*uParam2=joaat("SP2_FLYING_ABILITY");
break;
case 6:
*uParam2=joaat("SP2_SHOOTING_ABILITY");
break;
case 7:
*uParam2=joaat("SP2_STEALTH_ABILITY");
break;
}
break;
case 3:
switch (iParam1){
case 0:
*uParam3=64;
break;
case 1:
*uParam3=65;
break;
case 3:
*uParam3=67;
break;
case 2:
*uParam3=66;
break;
case 4:
*uParam3=68;
break;
case 5:
*uParam3=69;
break;
case 6:
*uParam3=70;
break;
case 7:
*uParam3=71;
break;
}
break;
}
return;
}


struct<4> func_28(var uParam0) // Position - 0xF68{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "YOGA_", 16);
if(func_29(300, 1)){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_11), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_11), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
TEXT_LABEL_APPEND_INT(&(uParam0->f_11), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}
BOOL func_29(int iParam0, int iParam1) // Position - 0xFC5{
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
iParam1==1;
return true;
}
return false;
}


struct<4> func_30(var uParam0) // Position - 0xFEC{
var unk;
int randomIntInRange;
var outValue;
int num;
TEXT_LABEL_ASSIGN_STRING(&unk, "VEHS_", 16);
STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_COP_VEHICLE"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_CARS"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BIKES"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BOATS"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_HELIS"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_QUADBIKES"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BICYCLES"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_COP_VEHICLE"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_CARS"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BIKES"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BOATS"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_HELIS"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_QUADBIKES"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BICYCLES"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_COP_VEHICLE"), &outValue, 2);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_CARS"), &outValue, 2);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BIKES"), &outValue, 2);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BOATS"), &outValue, 2);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_HELIS"), &outValue, 2);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_QUADBIKES"), &outValue, 2);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BICYCLES"), &outValue, 2);
num=num + outValue;
if(num >=100){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
TEXT_LABEL_APPEND_INT(&(uParam0->f_10), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_31(var uParam0) // Position - 0x11E9{
var unk;
int randomIntInRange;
var outValue;
int num;
TEXT_LABEL_ASSIGN_STRING(&unk, "PEDS_", 16);
STATS::STAT_GET_INT(joaat("SP0_KILLS_INNOCENTS"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_KILLS_INNOCENTS"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_KILLS_INNOCENTS"), &outValue, 2);
num=num + outValue;
if(num >=100){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_9), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_9), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
TEXT_LABEL_APPEND_INT(&(uParam0->f_9), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_32(var uParam0) // Position - 0x127E{
var unk;
int randomIntInRange;
int outValue;
TEXT_LABEL_ASSIGN_STRING(&unk, "STOCK_", 16);
STATS::STAT_GET_INT(joaat("TIME_SPENT_ON_STOCKMARKET"), &outValue, 0);
if(outValue >=120000){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_8), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_8), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
TEXT_LABEL_APPEND_INT(&(uParam0->f_8), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_33(var uParam0) // Position - 0x12E6{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "FAMILY_", 16);
if(func_34(8) && func_34(5)){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_7), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_7), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
TEXT_LABEL_APPEND_INT(&(uParam0->f_7), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}
BOOL func_34(int iParam0) // Position - 0x134B{
if(iParam0 < 9) return IS_BIT_SET(Global_113648.f_18105.f_175[iParam0 /*19*/].f_18, 0);
return false;
}


struct<4> func_35(var uParam0) // Position - 0x1372{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "PROS_", 16);
if(func_36(1) > 0 || func_36(0) > 0 || func_36(2) > 0){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_6), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_6), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
}
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
TEXT_LABEL_APPEND_INT(&(uParam0->f_6), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}

int func_36(int iParam0) // Position - 0x13E8{
switch (iParam0){
case 0:
return Global_113648.f_10051.f_90[0];
case 1:
return Global_113648.f_10051.f_90[1];
case 2:
return Global_113648.f_10051.f_90[2];
}
return 0;
}


struct<4> func_37(var uParam0) // Position - 0x1440{
var unk;
int randomIntInRange;
var outValue;
int num;
var outValue2;
int num2;
TEXT_LABEL_ASSIGN_STRING(&unk, "STRIP_", 16);
STATS::STAT_GET_INT(joaat("SP0_LAP_DANCED_BOUGHT"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_LAP_DANCED_BOUGHT"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_LAP_DANCED_BOUGHT"), &outValue, 2);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), &outValue2, 0);
num2=num2 + outValue2;
STATS::STAT_GET_INT(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), &outValue2, 1);
num2=num2 + outValue2;
STATS::STAT_GET_INT(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), &outValue2, 2);
num2=num2 + outValue2;
if(num >=3 || num2 >=100){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "Y", 4);
TEXT_LABEL_APPEND_STRING(&unk, "Y", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "N", 4);
TEXT_LABEL_APPEND_STRING(&unk, "N", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
}
TEXT_LABEL_APPEND_INT(&(uParam0->f_5), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_38(var uParam0) // Position - 0x1525{
var unk;
int randomIntInRange;
var outValue;
int num;
TEXT_LABEL_ASSIGN_STRING(&unk, "CASH_", 16);
STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, 0);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, 1);
num=num + outValue;
STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, 2);
num=num + outValue;
if(num >=1000000){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_3), "SP", 8);
TEXT_LABEL_APPEND_STRING(&unk, "SP", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_3), "SA", 8);
TEXT_LABEL_APPEND_STRING(&unk, "SA", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}
TEXT_LABEL_APPEND_INT(&(uParam0->f_3), randomIntInRange, 8);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_39(var uParam0) // Position - 0x15C5{
var unk;
int randomIntInRange;
int num;
int outValue;
int outValue2;
TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_", 16);
num=0;
outValue2=0;
STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &outValue2, 0);
STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &outValue, 1);
if(outValue > outValue2){
outValue2=outValue;
num=1;
}
STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &outValue, 2);
if(outValue > outValue2){
outValue2=outValue;
num=2;
}
if(num==0){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "M", 4);
TEXT_LABEL_APPEND_STRING(&unk, "M", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}elseif(num==1){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "F", 4);
TEXT_LABEL_APPEND_STRING(&unk, "F", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "T", 4);
TEXT_LABEL_APPEND_STRING(&unk, "T", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
}
TEXT_LABEL_APPEND_INT(&(uParam0->f_2), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_40(var uParam0) // Position - 0x1693{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "STORY_", 16);
if(func_22(135)){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "M", 4);
TEXT_LABEL_APPEND_STRING(&unk, "M", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
}elseif(func_22(136)){
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "T", 4);
TEXT_LABEL_APPEND_STRING(&unk, "T", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "B", 4);
TEXT_LABEL_APPEND_STRING(&unk, "B", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
}
TEXT_LABEL_APPEND_INT(&(uParam0->f_1), randomIntInRange, 4);
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


struct<4> func_41(var uParam0) // Position - 0x171E{
var unk;
int randomIntInRange;
TEXT_LABEL_ASSIGN_STRING(&unk, "INTRO_", 16);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(1, 21);
*uParam0=randomIntInRange;
TEXT_LABEL_APPEND_INT(&unk, randomIntInRange, 16);
return unk;
}


void func_42(char* sParam0) // Position - 0x1746{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_43() // Position - 0x1758{
PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
func_44(0);
return;
}


void func_44(int iParam0) // Position - 0x1788{
if(func_50()) return;
if(!Global_20383.f_1==1){
if(func_49(0)) func_45(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_45(int iParam0) // Position - 0x17BB{
if(func_50()) return;
if(Global_20584)if(func_48()) func_47(true, true);
else func_47(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_46()) Global_20383.f_1=3;
return;
}
BOOL func_46() // Position - 0x1845{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_47(BOOL bParam0, BOOL bParam1) // Position - 0x186C{
if(bParam0){
if(func_49(0)){
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
BOOL func_48() // Position - 0x18E0{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_49(int iParam0) // Position - 0x18EE{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_50() // Position - 0x1945{
return IS_BIT_SET(Global_1962996, 19);
}


void func_51(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1954{
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_59(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
if(!func_46()) Global_20383.f_1=3;
Global_21725=5;
}
func_58(true, bParam3, bParam2, false);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_59(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1) GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
func_58(false, bParam3, bParam2, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_52() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
Global_78556=0;
}
return;
}
BOOL func_52() // Position - 0x1AA1{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x1ABB{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_54(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_54(int iParam0, BOOL bParam1) // Position - 0x1B06{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_55();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_55() // Position - 0x1B47{
return Global_1574918;
}
BOOL func_56(Player plParam0) // Position - 0x1B53{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_57())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_57() // Position - 0x1B92{
return IS_BIT_SET(Global_2621446, 3);
}

int func_58(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1BA0{
int num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}


void func_59(int iParam0) // Position - 0x1BD3{
if(iParam0==1) MISC::SET_BIT(&Global_8253, 13);
else MISC::CLEAR_BIT(&Global_8253, 13);
return;
}


void func_60() // Position - 0x1BF6{
if(CAM::IS_SCREEN_FADED_OUT()) CAM::DO_SCREEN_FADE_IN(0);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}