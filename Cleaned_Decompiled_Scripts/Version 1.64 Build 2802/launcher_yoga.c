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
var uLocal_84=0;
Ped pedLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
float fLocal_93=0f;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
eStackSize essLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
char* sLocal_101=0;
float fLocal_102=0f;
int iLocal_103=0;
int iLocal_104=0;
int iLocal_105=0;
int iLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
float fLocal_110=0f;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
float fLocal_117=0f;
eCharacter echLocal_118=CHAR_MICHAEL;
int iLocal_119=0;
Object obLocal_120=0;
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
var uScriptParam_0=0;
var uScriptParam_1=5;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=0;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=0;
var uScriptParam_17=5;
var uScriptParam_18=0;
var uScriptParam_19=0;
var uScriptParam_20=0;
var uScriptParam_21=0;
var uScriptParam_22=0;
#endregion

void main() // Position - 0x0{
BOOL flag;
float groundZ;
BOOL flag2;
BOOL flag3;
int num;
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
uLocal_45={
500f, 500f, 500f 
};
iLocal_96=-1;
essLocal_97=FRIEND;
iLocal_98=-1;
iLocal_99=-1;
sLocal_101="CC_SUBSTR" /*~INPUT_CONTEXT~*/;
fLocal_102=125f;
iLocal_103=1;
iLocal_105=263;
fLocal_117=4f;
echLocal_118=-1;
uLocal_90={
uScriptParam_0.f_1[0 /*3*/] 
};
uLocal_90={
uLocal_90 
};
uLocal_86=uLocal_86;
uLocal_69={
uLocal_69 
};
flag=false;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)) func_91(true);
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_95=0;
func_89(&Global_112299, 0);
func_87();
if(func_86(iLocal_94, 1)) iLocal_100=10;
else iLocal_100=9;
while (!Global_38596){
SYSTEM::WAIT(0);
}
if(!func_86(iLocal_94, 8))if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100))if(func_83(0, iLocal_99)) func_91(false);
else func_91(true);
if(iLocal_99 !=-1)if(!func_83(0, iLocal_99)) func_91(true);
if(func_86(iLocal_94, 8388608)) func_91(true);
if(func_86(iLocal_94, 524288) && func_82() && !func_81()) func_91(true);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_86(iLocal_94, 4194304)){
if(iLocal_105 !=263){
func_80(iLocal_105, true, false);
iLocal_105=263;
}
func_79(10);
}
while (true){
if(!func_86(iLocal_94, 268435456)){
groundZ=0f;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(uScriptParam_0.f_1[0 /*3*/], &groundZ, false, false)){
if(groundZ !=0f){
uScriptParam_0.f_1[0 /*3*/].f_2=groundZ;
func_78(&iLocal_94, 268435456);
}}}
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_86(iLocal_94, 1048576))if(ENTITY::IS_ENTITY_DEAD(pedLocal_85, false)) func_91(true);
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_85) && !ENTITY::IS_ENTITY_DEAD(pedLocal_85, false)){
uLocal_87={
ENTITY::GET_ENTITY_COORDS(pedLocal_85, true) 
};
fLocal_93=SYSTEM::VDIST2(uLocal_87, uScriptParam_0.f_1[0 /*3*/]);
fLocal_93=fLocal_93;
uLocal_111={
uLocal_87 
};
uLocal_114={
uScriptParam_0.f_1[0 /*3*/] 
};
uLocal_111.f_2=0f;
uLocal_114.f_2=0f;
fLocal_110=SYSTEM::VDIST2(uLocal_111, uLocal_114);
switch (iLocal_95){
case 0:
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) || func_86(iLocal_94, 16) && !func_86(iLocal_94, 524288)){
iLocal_98=-1;
func_77();
func_79(1);
}else{
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_80(iLocal_105, true, false);
iLocal_105=263;
}
func_79(10);
}
uLocal_87.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
}
break;
case 1:
if(func_76()){
iLocal_103=iLocal_103;
func_79(3);
}else{
func_77();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_91(true);
return;
}
if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100)){
if(!func_86(iLocal_94, 8)){
flag2=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), &uLocal_69)){
uLocal_69={
uLocal_53 
};
flag2=false;
}
if(flag2){
func_91(false);
break;
}
}}
if(!func_86(iLocal_94, 4)){
func_75();
func_78(&iLocal_94, 4);
}
if(fLocal_110 > fLocal_102 * fLocal_102 && !Global_100715){
if(iLocal_105 !=263){
if(func_74(6) && !func_73(iLocal_105)){
}else{
func_80(iLocal_105, true, false);
iLocal_105=263;
}
}
func_79(10);
}else{
uLocal_69={
uLocal_53 
};
flag3=!func_86(iLocal_94, 64);
func_89(&iLocal_94, 128);
if(!func_72(3) && !Global_100715){
if(func_86(iLocal_94, 2097152)){
if(!func_86(iLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_71()) && !Global_100715){
func_79(10);
break;
}}
}
if(func_86(iLocal_94, 524288) && func_82() && !func_81()) func_91(true);
if(func_70()) func_91(true);
if(!func_61(6) || Global_112695 || func_60()) flag3=false;
if(func_86(iLocal_94, 1)){
if(!func_59()){
func_57(&iLocal_94, 128);
flag3=false;
}
}
if(func_56(true)) flag3=false;
if(Global_78558) flag3=false;
if(func_55()) flag3=false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) flag3=false;
if(func_54() || func_53(8, -1)) flag3=false;
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())) flag3=false;
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())) flag3=false;
if(func_52(0) || func_51()) flag3=false;
if(flag3){
if(!func_45(echLocal_118)){
func_57(&iLocal_94, 128);
flag3=false;
}
if(!ENTITY::IS_ENTITY_AT_COORD(pedLocal_85, uScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103)) flag3=false;
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) flag3=false;
if(flag3){
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(func_44(uLocal_86)){
if(iLocal_96==-1){
_CONTEXT_ADD_HELP_TEXT(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
func_57(&iLocal_94, 2048);
}
elseif(!func_86(iLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_89(&iLocal_94, 2048);
}
if(func_40(iLocal_96, true)){
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_89(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
func_79(5);
}}else{
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_89(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
func_79(5);
}}
}
if(!flag3){
if(iLocal_96 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_89(&iLocal_94, 2048);
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
}
}}
func_39();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(SCRIPT::HAS_SCRIPT_LOADED(&uLocal_69)){
if(iLocal_96 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
num=2;
flag=false;
if(func_86(iLocal_94, 1)){
if(func_74(6) || func_74(7)){
num=1;
flag=true;
}
}
if(num !=1) num=func_36(&iLocal_98, 6, iLocal_100, false, 0);
if(num==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
func_35();
if(Global_44446) func_26(PLAYER::PLAYER_PED_ID());
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
iLocal_52=SYSTEM::START_NEW_SCRIPT(&uLocal_69, essLocal_97);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_69);
uLocal_53={
uLocal_69 
};
TEXT_LABEL_ASSIGN_STRING(&uLocal_69, "", 64);
func_89(&iLocal_94, 4);
func_25();
func_57(&iLocal_94, 2);
func_79(6);
func_21(&uLocal_107);
if(iLocal_99 !=-1){
func_20(iLocal_99);
func_17(func_19(iLocal_99), 0, 0);
}
}
elseif(num==2){
func_16();
}
elseif(num==0){
func_79(10);
}}else{
func_16();
}
break;
case 6:
if(!func_86(iLocal_94, 256))if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN()) PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
elseif(CAM::IS_SCREEN_FADED_OUT()) func_57(&iLocal_94, 256);
if(func_86(Global_112299, 262144)){
func_89(&Global_112299, 262144);
func_15();
}
if(func_86(iLocal_94, 2097152))if(!func_72(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) func_79(10);
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_52)){
STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_11(&uLocal_107) * 1000f), iLocal_99, 0);
func_10(&uLocal_107);
func_89(&iLocal_94, 256);
func_7();
if(flag){
func_89(&iLocal_94, 2);
}
elseif(func_86(iLocal_94, 2)){
if(func_86(Global_112299, 0)){
func_6(&iLocal_98);
iLocal_98=-1;
func_89(&iLocal_94, 2);
}else{
func_6(&iLocal_98);
iLocal_98=-1;
func_89(&iLocal_94, 2);
}
}
func_79(0);
if(iLocal_99 !=-1){
if(func_86(Global_112299, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_99), 0, Global_100718, 0);
func_5(func_19(iLocal_99), 0, Global_100718, true, false);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_99), 0, Global_100718, 0);
func_5(func_19(iLocal_99), 0, Global_100718, false, false);
}
}
func_4();
func_89(&Global_112299, 0);
if(func_86(iLocal_94, 16777216)) func_91(true);
if(iLocal_99 !=-1)if(Global_113648.f_9087)if(!func_83(0, iLocal_99)) func_91(true);
}
func_3();
break;
case 8:
func_79(0);
break;
case 10:
func_91(true);
break;
case 9:
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_80(iLocal_105, true, false);
iLocal_105=263;
}
func_79(10);
}
break;
case 7:
func_2();
if(iLocal_105 !=263) func_80(iLocal_105, false, false);
if(iLocal_96 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_101)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_79(4);
break;
case 4:
if(iLocal_104 % 150==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_106==2){
if(iLocal_106==2){
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) && func_83(0, iLocal_99)){
func_87();
if(iLocal_105 !=263) func_80(iLocal_105, true, false);
func_79(0);
}}}elseif(iLocal_106==0){
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_80(iLocal_105, true, false);
iLocal_105=263;
}
func_79(10);
}}elseif(iLocal_106==1){
if(fLocal_110 > (80f + 5f) * (80f + 5f)){
func_87();
if(iLocal_105 !=263) func_80(iLocal_105, true, false);
func_79(0);
}}
}
else{
func_80(iLocal_105, true, false);
}}else{
iLocal_104=iLocal_104 + 1;
}
break;
}}
SYSTEM::WAIT(0);
}
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xA8F{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_2() // Position - 0xAA2{
return;
}


void func_3() // Position - 0xAAA{
return;
}


void func_4() // Position - 0xAB2{
return;
}


void func_5(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xABA{
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)) return;
if(MISC::COMPARE_STRINGS(sParam0, &Global_97751, false, -1) !=0) return;
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_94858);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
return;
}


void func_6(var uParam0) // Position - 0xAFE{
if(*uParam0==-1) return;
if(!*uParam0==Global_43219){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
return;
}


void func_7() // Position - 0xB3B{
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_9()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_8()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
}
return;
}
BOOL func_8() // Position - 0xB7D{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_9() // Position - 0xB93{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_10(var uParam0) // Position - 0xBA9{
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
return;
}


float func_11(int* piParam0) // Position - 0xBBF{
if(func_14(piParam0))if(func_13(piParam0)) return piParam0->f_2;
else return func_12(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
return piParam0->f_1;
}


float func_12(BOOL bParam0) // Position - 0xBFB{
float num;
float num2;
int networkTime;
float num3;
float num4;
if(bParam0){
num=SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
num2=num / 1000f;
return num2;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
networkTime=NETWORK::GET_NETWORK_TIME();
num3=SYSTEM::TO_FLOAT(networkTime);
num4=num3 / 1000f;
return num4;
}
return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}
BOOL func_13(int* piParam0) // Position - 0xC53{
return IS_BIT_SET(*piParam0, 2);
}
BOOL func_14(int* piParam0) // Position - 0xC60{
return IS_BIT_SET(*piParam0, 1);
}

int func_15() // Position - 0xC6D{
return 1;
}


void func_16() // Position - 0xC76{
return;
}


void func_17(char* sParam0, int iParam1, int iParam2) // Position - 0xC7E{
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97751, 0, 0, false, true, false);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
}
TEXT_LABEL_ASSIGN_STRING(&Global_97751, sParam0, 64);
unk_0x363D7D2154F0040D(sParam0, iParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
return;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xCBF{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


char* func_19(int iParam0) // Position - 0xCE7{
switch (iParam0){
case 0:
return "OJBJ";
case 1:
return "MGDT";
case 2:
return "MGGF";
case 3:
return "OJHU";
case 4:
return "MGOR";
case 5:
return "MGPS";
case 6:
return "MGRP";
case 7:
return "MGSEA";
case 8:
return "MGSTR";
case 9:
return "MGSC";
case 10:
return "MGSP";
case 11:
return "MGSRm";
case 12:
return "OJTX";
case 13:
return "MGTN";
case 14:
return "OJTW";
case 15:
return "OJDA";
case 16:
return "OJDG";
case 17:
return "MGTR";
case 18:
return "MGYG";
case 19:
return "MGCR";
}
return "INVALID!";
}


void func_20(int iParam0) // Position - 0xE25{
int num;
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_9()){
num=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_8()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
}
return;
}


void func_21(int* piParam0) // Position - 0xE7C{
if(!func_14(piParam0)) func_24(piParam0);
else func_22(piParam0);
return;
}


void func_22(int* piParam0) // Position - 0xE9D{
func_23(piParam0, 0f);
return;
}


void func_23(int* piParam0, float fParam1) // Position - 0xEAC{
piParam0->f_1=func_12(IS_BIT_SET(*piParam0, 4)) - fParam1;
MISC::SET_BIT(piParam0, 1);
MISC::CLEAR_BIT(piParam0, 2);
piParam0->f_2=0f;
return;
}


void func_24(int* piParam0) // Position - 0xED7{
if(!func_14(piParam0)) func_22(piParam0);
return;
}


void func_25() // Position - 0xEEF{
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(obLocal_120.f_1);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_120)) ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_120);
return;
}


void func_26(Ped pedParam0) // Position - 0xF0E{
int num;
int num2;
int num3;
if(pedParam0==0) return;
if(!ENTITY::DOES_ENTITY_EXIST(pedParam0)) return;
num=func_34(pedParam0);
if(!num==-1){
num2=Global_44232[num /*5*/];
func_29(1, num2, 1);
return;
}
num3=func_28(pedParam0);
if(num3==-1) return;
func_27(num3);
return;
}


void func_27(int iParam0) // Position - 0xF67{
if(iParam0 < 0 || iParam0 >=5) return;
if(!Global_44206[iParam0 /*5*/].f_1==0)if(Global_44206[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()) Global_44444=0;
Global_44206[iParam0 /*5*/]=13;
Global_44206[iParam0 /*5*/].f_1=0;
Global_44206[iParam0 /*5*/].f_2=0;
Global_44206[iParam0 /*5*/].f_3=0;
Global_44206[iParam0 /*5*/].f_4=0;
Global_44204=Global_44204 - 1;
if(Global_44204 < 0) Global_44204=0;
return;
}

int func_28(Ped pedParam0) // Position - 0xFEA{
int i;
i=0;
for (i=0;
i < 5;
i=i + 1){
if(Global_44206[i /*5*/].f_1==pedParam0) return i;
}
return -1;
}


void func_29(int iParam0, int iParam1, int iParam2) // Position - 0x101B{
func_30(iParam0, iParam1, iParam2, 0, 0, 1);
return;
}


void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1030{
int num;
if(iParam0==-1) return;
if(iParam1==-1) return;
if(iParam2==6) return;
if(func_32(iParam0, iParam1, iParam2)) return;
num=func_31();
if(num==-1) return;
Global_44313[num /*6*/]=iParam0;
Global_44313[num /*6*/].f_1=iParam1;
Global_44313[num /*6*/].f_2=iParam2;
Global_44313[num /*6*/].f_3=iParam3;
Global_44313[num /*6*/].f_4=iParam4;
Global_44313[num /*6*/].f_5=iParam5;
return;
}

int func_31() // Position - 0x10B2{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(Global_44313[i /*6*/].f_2==6) return i;
}
return -1;
}
BOOL func_32(int iParam0, int iParam1, int iParam2) // Position - 0x10E3{
if(func_33(iParam0, iParam1, iParam2)==-1) return false;
return true;
}

int func_33(int iParam0, int iParam1, int iParam2) // Position - 0x10FE{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(iParam2==Global_44313[i /*6*/].f_2)if(iParam0==Global_44313[i /*6*/])if(iParam1==Global_44313[i /*6*/].f_1) return i;
}
return -1;
}

int func_34(Ped pedParam0) // Position - 0x114A{
int i;
if(pedParam0==0) return -1;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(!Global_44232[i /*5*/]==-1)if(pedParam0==Global_44232[i /*5*/].f_1) return i;
}
return -1;
}


void func_35() // Position - 0x1193{
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==2) Global_9058[0 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==2) Global_9058[1 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==2) Global_9058[2 /*2811*/][0 /*281*/].f_259=0;
MISC::CLEAR_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
return;
}

int func_36(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1210{
int i;
if(iParam1==7) return 0;
if(!bParam3)if(Global_98159.f_44==1) return 2;
if(iParam1==0){
if(func_38(0)) return 0;
Global_43221=Global_43221 + 1;
*uParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
Global_23131.f_5=0;
if(iParam2 !=5) PLAYER::FORCE_CLEANUP(8);
Global_43257=iParam2;
Global_43219=*uParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43218 > 0){
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*uParam0) return 2;
}}elseif(Global_43219==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!_CAN_ENTER_FREEROAM_STATE(iParam2)) return 0;
if(Global_43218==8) return 0;
Global_43221=Global_43221 + 1;
*uParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218=Global_43218 + 1;
if(iParam4 !=0) func_37(uParam0, iParam4);
}
return 2;
}


void func_37(var uParam0, int iParam1) // Position - 0x1347{
int i;
if(Global_43218==0) return;
if(*uParam0==-1) return;
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*uParam0) Global_43224[i /*4*/].f_3=iParam1;
}
*uParam0=-1;
return;
}
BOOL func_38(int iParam0) // Position - 0x1396{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}


void func_39() // Position - 0x13B8{
if(iLocal_119==1){
if(TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER")){
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), true);
}}
return;
}
BOOL func_40(int iParam0, BOOL bParam1) // Position - 0x13E2{
int num;
num=func_41(iParam0);
if(num==-1) return false;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) return false;
if(func_52(0)) return false;
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return false;
if(num > -1 && num < 6){
if(Global_44000[num /*32*/]==true && Global_44000[num /*32*/].f_4==1){
if(bParam1)if(Global_44000[num /*32*/].f_29) return false;
Global_44000[num /*32*/].f_5=1;
Global_44000[num /*32*/].f_29=1;
return true;
}else{
Global_44000[num /*32*/]==false;
Global_44000[num /*32*/].f_7;
}}
return false;
}

int func_41(int iParam0) // Position - 0x149A{
int i;
if(iParam0 < 0) return -1;
i=0;
for (i=0;
i < 6;
i=i + 1){
if(Global_44000[i /*32*/].f_1==iParam0) return i;
}
return -1;
}


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x14D5{
int num;
if(*uParam0==-1) return;
num=func_41(*uParam0);
if(num==-1){
*uParam0=-1;
return;
}
if(num > -1 && num < 6){
if(Global_44000[num /*32*/]){
Global_44000[num /*32*/].f_7=1;
*uParam0=-1;
return;
}}
*uParam0=-1;
return;
}


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x152C{
int i;
SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*uParam0==-1) _CONTEXT_REMOVE_HELP_TEXT(uParam0);
return;
}
if(!*uParam0==-1) return;
i=0;
for (i=0;
i < 6;
i=i + 1){
if(!Global_44000[i /*32*/]){
Global_44000[i /*32*/]=true;
Global_44000[i /*32*/].f_1=Global_44201;
Global_44201=Global_44201 + 1;
Global_44000[i /*32*/].f_4=0;
Global_44000[i /*32*/].f_29=0;
Global_44000[i /*32*/].f_5=0;
Global_44000[i /*32*/].f_2=iParam1;
TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_8), sParam2, 16);
Global_44000[i /*32*/].f_6=iParam3;
Global_44000[i /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44000[i /*32*/].f_7=0;
Global_44000[i /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44000[i /*32*/].f_12=1;
TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_13), sParam4, 64);
Global_44000[i /*32*/].f_30=iParam6;
}else{
Global_44000[i /*32*/].f_12=0;
Global_44000[i /*32*/].f_30=0;
}
*uParam0=Global_44000[i /*32*/].f_1;
return;
}}
return;
}
BOOL func_44(var uParam0) // Position - 0x1657{
return true;
}
BOOL func_45(eCharacter echParam0) // Position - 0x1660{
func_46();
return echParam0==Global_113648.f_2365.f_539.f_4321;
}


void func_46() // Position - 0x167C{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_47(character) && !func_74(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_47(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
Global_113648.f_2365.f_539.f_4323=character;
Global_113648.f_2365.f_539.f_4321=character;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=_CHAR_NULL) Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
return;
}
BOOL func_47(eCharacter echParam0) // Position - 0x1779{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1785{
eCharacter i;
Hash entityModel;
if(ENTITY::DOES_ENTITY_EXIST(pedParam0)){
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
for (i=CHAR_MICHAEL;
i <=CHAR_TREVOR;
i=i + 1){
if(_GET_CHARACTER_MODEL(i)==entityModel) return i;
}}
return _CHAR_NULL;
}
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x17C2{
if(func_47(character)) return func_50(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_50(eCharacter echParam0) // Position - 0x17E7{
return Global_2028[echParam0 /*29*/];
}
BOOL func_51() // Position - 0x17F6{
return Global_75693;
}
BOOL func_52(int iParam0) // Position - 0x1802{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_53(int iParam0, int iParam1) // Position - 0x1859{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}
BOOL func_54() // Position - 0x1891{
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}
BOOL func_55() // Position - 0x18A6{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}
BOOL func_56(BOOL bParam0) // Position - 0x18C0{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}


void func_57(var uParam0, int iParam1) // Position - 0x18E9{
func_58(uParam0, iParam1);
return;
}


void func_58(var uParam0, int iParam1) // Position - 0x18F9{
*uParam0=*uParam0 || iParam1;
return;
}
BOOL func_59() // Position - 0x190A{
return true;
}
BOOL func_60() // Position - 0x1913{
int weaponHash;
BOOL flag;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) return false;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
if(weaponHash==0 || weaponHash==joaat("WEAPON_UNARMED") || weaponHash==joaat("WEAPON_ELECTRIC_FENCE") || weaponHash==joaat("GADGET_PARACHUTE")) flag=false;
else flag=true;
flag;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) return flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 69) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 70) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 68) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
return flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 24) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 25) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 47) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
}
BOOL func_61(int iParam0) // Position - 0x1A1D{
eCharacter character;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
character=_GET_CURRENT_PLAYER_CHARACTER();
if(!func_47(character)) return false;
switch (iParam0){
case 9:
case 0:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_112695 || Global_32166 || func_67() || func_53(8, -1) || func_66() || func_65() || func_64() || func_55() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 1:
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_68() || Global_32166 || func_67() || func_53(8, -1) || func_64() || func_66() || func_65() || func_55() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 2:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_112695 || Global_32166 || func_67() || func_53(8, -1) || func_64() || func_66() || func_65() || func_55() || Global_113648.f_7690.f_919[character]==5 || Global_43804 !=-1) return false;
break;
case 3:
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_112695 || Global_32166 || func_67() || func_53(8, -1) || func_66() || func_65() || func_55() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 4:
if(func_68() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_53(8, -1) || func_55() || func_63() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 5:
if(func_53(8, -1) || func_66() || func_65() || func_63() || func_62()) return false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8) return false;
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_68() || Global_32166 || func_67() || func_53(8, -1) || func_65() || func_64() || func_55() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 7:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_68() || func_65() || Global_112695 || Global_32166 || func_67() || Global_44446 || func_53(8, -1) || func_64() || func_63() || func_55() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 8:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_68() || Global_112695 || Global_32166 || func_67() || func_53(8, -1) || func_64() || func_63() || func_66() || func_65() || func_55()) return false;
break;
}}else{
return false;
}}else{
return false;
}}else{
return false;
}
return true;
}
BOOL func_62() // Position - 0x213A{
return Global_100720.f_1;
}
BOOL func_63() // Position - 0x2148{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
return false;
}
BOOL func_64() // Position - 0x216B{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}
BOOL func_65() // Position - 0x2195{
return Global_100733.f_388 > 0;
}
BOOL func_66() // Position - 0x21A6{
return Global_100733.f_387 > 0;
}
BOOL func_67() // Position - 0x21B7{
return Global_1575060;
}
BOOL func_68() // Position - 0x21C3{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x21DF{
func_46();
return Global_113648.f_2365.f_539.f_4321;
}
BOOL func_70() // Position - 0x21F8{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0) return true;
return false;
}
Entity func_71() // Position - 0x2212{
return Global_96513;
}
BOOL func_72(int iParam0) // Position - 0x221E{
switch (iParam0){
case 0:
return true;
case 1:
if(func_74(6) || func_74(7)) return true;
else return func_72(3);
break;
case 2:
return true;
case 3:
if(_CAN_ENTER_FREEROAM_STATE(5))if(func_61(4)) return true;
break;
}
return false;
}
BOOL func_73(int iParam0) // Position - 0x2290{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
return HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19);
}
BOOL func_74(int iParam0) // Position - 0x22CC{
return Global_43257==iParam0;
}


void func_75() // Position - 0x22DA{
if(!ENTITY::DOES_ENTITY_EXIST(obLocal_120)){
obLocal_120=OBJECT::CREATE_OBJECT(obLocal_120.f_1, obLocal_120.f_2, true, true, false);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(obLocal_120, obLocal_120.f_2, false, false, true);
ENTITY::SET_ENTITY_ROTATION(obLocal_120, obLocal_120.f_5, 2, true);
ENTITY::FREEZE_ENTITY_POSITION(obLocal_120, true);
}
return;
}
BOOL func_76() // Position - 0x2323{
if(!STREAMING::IS_MODEL_VALID(obLocal_120.f_1)) return false;
return STREAMING::HAS_MODEL_LOADED(obLocal_120.f_1);
}


void func_77() // Position - 0x2343{
if(!STREAMING::IS_MODEL_VALID(obLocal_120.f_1)) return;
STREAMING::REQUEST_MODEL(obLocal_120.f_1);
return;
}


void func_78(var uParam0, int iParam1) // Position - 0x2362{
*uParam0=*uParam0 || iParam1;
return;
}


void func_79(int iParam0) // Position - 0x2373{
iLocal_95=iParam0;
return;
}


void func_80(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x237F{
int num;
BOOL flag;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(!bParam2){
flag=IS_BIT_SET(Global_32543[num /*23*/].f_11, 15);
if(flag==bParam1) return;
}
if(bParam1 !=IS_BIT_SET(Global_32543[num /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 0);
MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 15);
}
if(!IS_BIT_SET(Global_32543[num /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
HUD::REMOVE_BLIP(&(Global_32543[num /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
}}
return;
}
BOOL func_81() // Position - 0x247F{
if(MISC::IS_PC_VERSION())if(MISC::GET_CITY_DENSITY()==1f) return true;
return false;
}
BOOL func_82() // Position - 0x249C{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
return false;
}
BOOL func_83(int iParam0, int iParam1) // Position - 0x24BF{
BOOL flag;
if(iParam0==11 || iParam0==-1) return false;
if(iParam1 < 0 || iParam1 >=32) return false;
flag=IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return flag;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2509{
return func_85(iParam0, Global_43257);
}
BOOL func_85(int iParam0, int iParam1) // Position - 0x251A{
if(iParam1==15) return 1;
if(iParam0==15) return 0;
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
}
return 1;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
}
break;
case 4:
if(iParam1==17) return 1;
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5) return 1;
break;
case 7:
if(iParam1==6) return 1;
break;
case 9:
if(iParam1==5) return 1;
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
}
break;
case 11:
if(iParam1==5) return 1;
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
}
break;
}
return 0;
}
BOOL func_86(int iParam0, int iParam1) // Position - 0x26FB{
return iParam0 && iParam1 !=false;
}


void func_87() // Position - 0x270A{
TEXT_LABEL_ASSIGN_STRING(&uLocal_53, "Yoga", 64);
sLocal_101="PLAY_YOGA" /*Press ~INPUT_CONTEXT~ to do Yoga.*/;
iLocal_99=18;
fLocal_117=2.5f;
fLocal_102=20f;
essLocal_97=54000;
iLocal_119=func_88();
if(iLocal_119==0){
iLocal_105=110;
obLocal_120.f_2={
-791.0036f, 186.3552f, 71.8295f 
};
obLocal_120.f_5={
0f, 0f, -87.1403f 
};
obLocal_120.f_1=joaat("prop_yoga_mat_03");
}elseif(iLocal_119==1){
iLocal_105=111;
obLocal_120.f_2={
2861.47f, 5945.9f, 357.06f 
};
obLocal_120.f_5={
0f, -0.5f, 70f 
};
obLocal_120.f_1=joaat("prop_yoga_mat_03");
}
echLocal_118=CHAR_MICHAEL;
return;
}

int func_88() // Position - 0x27B3{
Vector3 entityCoords;
var unk3;
var unk10;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true) 
};
unk3=2;
unk3[0 /*3*/]={
-790.906f, 186.293f, 71.835f 
};
unk3[1 /*3*/]={
2862.15f, 5945.49f, 357.11f 
};
unk10=2;
unk10[0]=SYSTEM::VDIST2(entityCoords, unk3[0 /*3*/]);
unk10[1]=SYSTEM::VDIST2(entityCoords, unk3[1 /*3*/]);
if(unk10[0] < unk10[1]) return 0;
else return 1;
}
return 2;
}


void func_89(int iParam0, int iParam1) // Position - 0x284F{
func_90(iParam0, iParam1);
return;
}


void func_90(var uParam0, int iParam1) // Position - 0x285F{
*uParam0=*uParam0 - *uParam0 && iParam1;
return;
}


void func_91(BOOL bParam0) // Position - 0x2874{
if(bParam0)if(iLocal_105 !=263) func_80(iLocal_105, 0, false);
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(func_86(iLocal_94, 2)){
func_4();
func_89(&iLocal_94, 2);
func_6(&iLocal_98);
}
iLocal_98=-1;
func_92();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_92() // Position - 0x28BD{
func_89(&iLocal_94, 4);
func_93();
if(SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_52, 3);
if(!MISC::IS_STRING_NULL(&uLocal_69))if(HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_69) !=0) SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_69);
return;
}


void func_93() // Position - 0x28FA{
if(!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER")){
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", true);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), false);
}
return;
}