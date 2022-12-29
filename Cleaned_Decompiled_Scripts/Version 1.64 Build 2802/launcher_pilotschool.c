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
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
BOOL bLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)) func_92(true);
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_95=0;
func_90(&Global_112299, 0);
func_89();
if(func_88(iLocal_94, 1)) iLocal_100=10;
else iLocal_100=9;
while (!Global_38596){
SYSTEM::WAIT(0);
}
if(!func_88(iLocal_94, 8))if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100))if(func_85(0, iLocal_99)) func_92(false);
else func_92(true);
if(iLocal_99 !=-1)if(!func_85(0, iLocal_99)) func_92(true);
if(func_88(iLocal_94, 8388608)) func_92(true);
if(func_88(iLocal_94, 524288) && func_84() && !func_83()) func_92(true);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_88(iLocal_94, 4194304)){
if(iLocal_105 !=263){
func_82(iLocal_105, true, false);
iLocal_105=263;
}
func_81(10);
}
while (true){
if(!func_88(iLocal_94, 268435456)){
groundZ=0f;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(uScriptParam_0.f_1[0 /*3*/], &groundZ, false, false)){
if(groundZ !=0f){
uScriptParam_0.f_1[0 /*3*/].f_2=groundZ;
func_80(&iLocal_94, 268435456);
}}}
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_88(iLocal_94, 1048576))if(ENTITY::IS_ENTITY_DEAD(pedLocal_85, false)) func_92(true);
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
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) || func_88(iLocal_94, 16) && !func_88(iLocal_94, 524288)){
iLocal_98=-1;
func_79();
func_81(1);
}else{
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_82(iLocal_105, true, false);
iLocal_105=263;
}
func_81(10);
}
uLocal_87.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
}
break;
case 1:
if(func_78() && fLocal_93 > fLocal_117 * 1.5f * fLocal_117 * 1.5f){
iLocal_103=iLocal_103;
func_81(3);
}else{
func_79();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_92(true);
return;
}
if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100)){
if(!func_88(iLocal_94, 8)){
flag2=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), &uLocal_69)){
uLocal_69={
uLocal_53 
};
flag2=false;
}
if(flag2){
func_92(false);
break;
}
}}
if(!func_88(iLocal_94, 4)){
func_77();
func_80(&iLocal_94, 4);
}
if(fLocal_110 > fLocal_102 * fLocal_102 && !Global_100715){
if(iLocal_105 !=263){
if(func_76(6) && !func_75(iLocal_105)){
}else{
func_82(iLocal_105, true, false);
iLocal_105=263;
}
}
func_81(10);
}else{
uLocal_69={
uLocal_53 
};
flag3=!func_88(iLocal_94, 64);
func_90(&iLocal_94, 128);
if(!func_74(3) && !Global_100715){
if(func_88(iLocal_94, 2097152)){
if(!func_88(iLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_73()) && !Global_100715){
func_81(10);
break;
}}
}
if(func_88(iLocal_94, 524288) && func_84() && !func_83()) func_92(true);
if(func_72()) func_92(true);
if(!func_58(6) || Global_112695 || func_57()) flag3=false;
if(func_88(iLocal_94, 1)){
if(!func_56()){
func_54(&iLocal_94, 128);
flag3=false;
}
}
if(func_53(true)) flag3=false;
if(Global_78558) flag3=false;
if(func_52()) flag3=false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) flag3=false;
if(func_51() || func_50(8, -1)) flag3=false;
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())) flag3=false;
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())) flag3=false;
if(func_49(0) || func_48()) flag3=false;
if(flag3){
if(!ENTITY::IS_ENTITY_AT_COORD(pedLocal_85, uScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103)) flag3=false;
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) flag3=false;
if(flag3){
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(func_47(uLocal_86)){
if(iLocal_96==-1){
_CONTEXT_ADD_HELP_TEXT(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
func_54(&iLocal_94, 2048);
}
elseif(!func_88(iLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_90(&iLocal_94, 2048);
}
if(func_43(iLocal_96, true)){
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_90(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
func_81(5);
}}else{
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_90(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
func_81(5);
}}
}
if(!flag3){
if(iLocal_96 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_90(&iLocal_94, 2048);
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
}
}}
func_42();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(SCRIPT::HAS_SCRIPT_LOADED(&uLocal_69)){
if(iLocal_96 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
num=2;
flag=false;
if(func_88(iLocal_94, 1)){
if(func_76(6) || func_76(7)){
num=1;
flag=true;
}
}
if(num !=1) num=func_39(&iLocal_98, 6, iLocal_100, false, 0);
if(num==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
func_38();
if(Global_44446) func_29(PLAYER::PLAYER_PED_ID());
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
iLocal_52=func_28();
func_90(&iLocal_94, 4);
func_27();
func_54(&iLocal_94, 2);
func_81(6);
func_23(&uLocal_107);
if(iLocal_99 !=-1){
func_22(iLocal_99);
func_19(func_21(iLocal_99), 0, 0);
}
}
elseif(num==2){
func_18();
}
elseif(num==0){
func_81(10);
}}else{
func_18();
}
break;
case 6:
if(!func_88(iLocal_94, 256))if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN()) PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
elseif(CAM::IS_SCREEN_FADED_OUT()) func_54(&iLocal_94, 256);
if(func_88(Global_112299, 262144)){
func_90(&Global_112299, 262144);
func_17();
}
if(func_88(iLocal_94, 2097152))if(!func_74(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) func_81(10);
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_52)){
STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_13(&uLocal_107) * 1000f), iLocal_99, 0);
func_12(&uLocal_107);
func_90(&iLocal_94, 256);
func_9();
if(flag){
func_90(&iLocal_94, 2);
}
elseif(func_88(iLocal_94, 2)){
if(func_88(Global_112299, 0)){
func_8(&iLocal_98);
iLocal_98=-1;
func_90(&iLocal_94, 2);
}else{
func_8(&iLocal_98);
iLocal_98=-1;
func_90(&iLocal_94, 2);
}
}
func_81(0);
if(iLocal_99 !=-1){
if(func_88(Global_112299, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_99), 0, Global_100718, 0);
func_7(func_21(iLocal_99), 0, Global_100718, true, false);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_99), 0, Global_100718, 0);
func_7(func_21(iLocal_99), 0, Global_100718, false, false);
}
}
func_4();
func_90(&Global_112299, 0);
if(func_88(iLocal_94, 16777216)) func_92(true);
if(iLocal_99 !=-1)if(Global_113648.f_9087)if(!func_85(0, iLocal_99)) func_92(true);
}
func_3();
break;
case 8:
func_81(0);
break;
case 10:
func_92(true);
break;
case 9:
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_82(iLocal_105, true, false);
iLocal_105=263;
}
func_81(10);
}
break;
case 7:
func_2();
if(iLocal_105 !=263) func_82(iLocal_105, false, false);
if(iLocal_96 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_101)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_81(4);
break;
case 4:
if(iLocal_104 % 150==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_106==2){
if(iLocal_106==2){
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) && func_85(0, iLocal_99)){
func_89();
if(iLocal_105 !=263) func_82(iLocal_105, true, false);
func_81(0);
}}}elseif(iLocal_106==0){
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_82(iLocal_105, true, false);
iLocal_105=263;
}
func_81(10);
}}elseif(iLocal_106==1){
if(fLocal_110 > (80f + 5f) * (80f + 5f)){
func_89();
if(iLocal_105 !=263) func_82(iLocal_105, true, false);
func_81(0);
}}
}
else{
func_82(iLocal_105, true, false);
}}else{
iLocal_104=iLocal_104 + 1;
}
break;
}}
SYSTEM::WAIT(0);
}
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xA75{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_2() // Position - 0xA88{
return;
}


void func_3() // Position - 0xA90{
return;
}


void func_4() // Position - 0xA98{
func_5(&uLocal_122);
return;
}


void func_5(var uParam0) // Position - 0xAA6{
Vehicle vehicle;
vehicle=*uParam0;
if(ENTITY::DOES_ENTITY_EXIST(vehicle)){
if(!func_6(vehicle)){
ENTITY::SET_ENTITY_COLLISION(vehicle, true, false);
ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
}}
return;
}
BOOL func_6(Vehicle veParam0) // Position - 0xADD{
if(ENTITY::DOES_ENTITY_EXIST(veParam0))if(ENTITY::IS_ENTITY_DEAD(veParam0, false)) return true;
elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(!FILES::GET_DLC_VEHICLE_FLAGS(veParam0)) return true;
else return true;
return false;
}


void func_7(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB20{
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)) return;
if(MISC::COMPARE_STRINGS(sParam0, &Global_97751, false, -1) !=0) return;
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_94858);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
return;
}


void func_8(var uParam0) // Position - 0xB64{
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


void func_9() // Position - 0xBA1{
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_11()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_10()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
}
return;
}
BOOL func_10() // Position - 0xBE3{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_11() // Position - 0xBF9{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_12(var uParam0) // Position - 0xC0F{
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
return;
}


float func_13(int* piParam0) // Position - 0xC25{
if(func_16(piParam0))if(func_15(piParam0)) return piParam0->f_2;
else return func_14(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
return piParam0->f_1;
}


float func_14(BOOL bParam0) // Position - 0xC61{
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
BOOL func_15(int* piParam0) // Position - 0xCB9{
return IS_BIT_SET(*piParam0, 2);
}
BOOL func_16(int* piParam0) // Position - 0xCC6{
return IS_BIT_SET(*piParam0, 1);
}

int func_17() // Position - 0xCD3{
return 1;
}


void func_18() // Position - 0xCDC{
return;
}


void func_19(char* sParam0, int iParam1, int iParam2) // Position - 0xCE4{
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97751, 0, 0, false, true, false);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
}
TEXT_LABEL_ASSIGN_STRING(&Global_97751, sParam0, 64);
unk_0x363D7D2154F0040D(sParam0, iParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
return;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xD25{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


char* func_21(int iParam0) // Position - 0xD4D{
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


void func_22(int iParam0) // Position - 0xE8B{
int num;
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_11()){
num=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_10()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
}
return;
}


void func_23(int* piParam0) // Position - 0xEE2{
if(!func_16(piParam0)) func_26(piParam0);
else func_24(piParam0);
return;
}


void func_24(int* piParam0) // Position - 0xF03{
func_25(piParam0, 0f);
return;
}


void func_25(int* piParam0, float fParam1) // Position - 0xF12{
piParam0->f_1=func_14(IS_BIT_SET(*piParam0, 4)) - fParam1;
MISC::SET_BIT(piParam0, 1);
MISC::CLEAR_BIT(piParam0, 2);
piParam0->f_2=0f;
return;
}


void func_26(int* piParam0) // Position - 0xF3D{
if(!func_16(piParam0)) func_24(piParam0);
return;
}


void func_27() // Position - 0xF55{
PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1093.842f, -2375.285f, -100f, -1007.24f, -2425.285f, 100f, 150f, false, true, true);
return;
}

int func_28() // Position - 0xF87{
int num;
num=SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&uLocal_53, &uLocal_118, 4, essLocal_97);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_53);
return num;
}


void func_29(Ped pedParam0) // Position - 0xFA4{
int num;
int num2;
int num3;
if(pedParam0==0) return;
if(!ENTITY::DOES_ENTITY_EXIST(pedParam0)) return;
num=func_37(pedParam0);
if(!num==-1){
num2=Global_44232[num /*5*/];
func_32(1, num2, 1);
return;
}
num3=func_31(pedParam0);
if(num3==-1) return;
func_30(num3);
return;
}


void func_30(int iParam0) // Position - 0xFFD{
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

int func_31(Ped pedParam0) // Position - 0x1080{
int i;
i=0;
for (i=0;
i < 5;
i=i + 1){
if(Global_44206[i /*5*/].f_1==pedParam0) return i;
}
return -1;
}


void func_32(int iParam0, int iParam1, int iParam2) // Position - 0x10B1{
func_33(iParam0, iParam1, iParam2, 0, 0, 1);
return;
}


void func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x10C6{
int num;
if(iParam0==-1) return;
if(iParam1==-1) return;
if(iParam2==6) return;
if(func_35(iParam0, iParam1, iParam2)) return;
num=func_34();
if(num==-1) return;
Global_44313[num /*6*/]=iParam0;
Global_44313[num /*6*/].f_1=iParam1;
Global_44313[num /*6*/].f_2=iParam2;
Global_44313[num /*6*/].f_3=iParam3;
Global_44313[num /*6*/].f_4=iParam4;
Global_44313[num /*6*/].f_5=iParam5;
return;
}

int func_34() // Position - 0x1148{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(Global_44313[i /*6*/].f_2==6) return i;
}
return -1;
}
BOOL func_35(int iParam0, int iParam1, int iParam2) // Position - 0x1179{
if(func_36(iParam0, iParam1, iParam2)==-1) return false;
return true;
}

int func_36(int iParam0, int iParam1, int iParam2) // Position - 0x1194{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(iParam2==Global_44313[i /*6*/].f_2)if(iParam0==Global_44313[i /*6*/])if(iParam1==Global_44313[i /*6*/].f_1) return i;
}
return -1;
}

int func_37(Ped pedParam0) // Position - 0x11E0{
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


void func_38() // Position - 0x1229{
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==2) Global_9058[0 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==2) Global_9058[1 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==2) Global_9058[2 /*2811*/][0 /*281*/].f_259=0;
MISC::CLEAR_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
return;
}

int func_39(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x12A6{
int i;
if(iParam1==7) return 0;
if(!bParam3)if(Global_98159.f_44==1) return 2;
if(iParam1==0){
if(func_41(0)) return 0;
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
if(iParam4 !=0) func_40(uParam0, iParam4);
}
return 2;
}


void func_40(var uParam0, int iParam1) // Position - 0x13DD{
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
BOOL func_41(int iParam0) // Position - 0x142C{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}


void func_42() // Position - 0x144E{
if(func_75(76)) ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1154.1101f, -2715.2026f, 18.8074f, 0f, 0f, 1.8f, true, true, 0);
return;
}
BOOL func_43(int iParam0, BOOL bParam1) // Position - 0x1481{
int num;
num=func_44(iParam0);
if(num==-1) return false;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) return false;
if(func_49(0)) return false;
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

int func_44(int iParam0) // Position - 0x1539{
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


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x1574{
int num;
if(*uParam0==-1) return;
num=func_44(*uParam0);
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


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x15CB{
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
BOOL func_47(var uParam0) // Position - 0x16F6{
return true;
}
BOOL func_48() // Position - 0x16FF{
return Global_75693;
}
BOOL func_49(int iParam0) // Position - 0x170B{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_50(int iParam0, int iParam1) // Position - 0x1762{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}
BOOL func_51() // Position - 0x179A{
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}
BOOL func_52() // Position - 0x17AF{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}
BOOL func_53(BOOL bParam0) // Position - 0x17C9{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}


void func_54(var uParam0, int iParam1) // Position - 0x17F2{
func_55(uParam0, iParam1);
return;
}


void func_55(var uParam0, int iParam1) // Position - 0x1802{
*uParam0=*uParam0 || iParam1;
return;
}
BOOL func_56() // Position - 0x1813{
return true;
}
BOOL func_57() // Position - 0x181C{
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
BOOL func_58(int iParam0) // Position - 0x1926{
eCharacter character;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
character=_GET_CURRENT_PLAYER_CHARACTER();
if(!func_66(character)) return false;
switch (iParam0){
case 9:
case 0:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_65() || Global_112695 || Global_32166 || func_64() || func_50(8, -1) || func_63() || func_62() || func_61() || func_52() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 1:
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_65() || Global_32166 || func_64() || func_50(8, -1) || func_61() || func_63() || func_62() || func_52() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 2:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_65() || Global_112695 || Global_32166 || func_64() || func_50(8, -1) || func_61() || func_63() || func_62() || func_52() || Global_113648.f_7690.f_919[character]==5 || Global_43804 !=-1) return false;
break;
case 3:
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_65() || Global_112695 || Global_32166 || func_64() || func_50(8, -1) || func_63() || func_62() || func_52() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 4:
if(func_65() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_50(8, -1) || func_52() || func_60() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 5:
if(func_50(8, -1) || func_63() || func_62() || func_60() || func_59()) return false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8) return false;
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_65() || Global_32166 || func_64() || func_50(8, -1) || func_62() || func_61() || func_52() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 7:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_65() || func_62() || Global_112695 || Global_32166 || func_64() || Global_44446 || func_50(8, -1) || func_61() || func_60() || func_52() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 8:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_65() || Global_112695 || Global_32166 || func_64() || func_50(8, -1) || func_61() || func_60() || func_63() || func_62() || func_52()) return false;
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
BOOL func_59() // Position - 0x2043{
return Global_100720.f_1;
}
BOOL func_60() // Position - 0x2051{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
return false;
}
BOOL func_61() // Position - 0x2074{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}
BOOL func_62() // Position - 0x209E{
return Global_100733.f_388 > 0;
}
BOOL func_63() // Position - 0x20AF{
return Global_100733.f_387 > 0;
}
BOOL func_64() // Position - 0x20C0{
return Global_1575060;
}
BOOL func_65() // Position - 0x20CC{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}
BOOL func_66(eCharacter echParam0) // Position - 0x20E8{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x20F4{
func_68();
return Global_113648.f_2365.f_539.f_4321;
}


void func_68() // Position - 0x210D{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_66(character) && !func_76(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_66(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x220A{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2247{
if(func_66(character)) return func_71(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_71(eCharacter echParam0) // Position - 0x226C{
return Global_2028[echParam0 /*29*/];
}
BOOL func_72() // Position - 0x227B{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0) return true;
return false;
}
Entity func_73() // Position - 0x2295{
return Global_96513;
}
BOOL func_74(int iParam0) // Position - 0x22A1{
switch (iParam0){
case 0:
return true;
case 1:
if(func_76(6) || func_76(7)) return true;
else return func_74(3);
break;
case 2:
return true;
case 3:
if(_CAN_ENTER_FREEROAM_STATE(5))if(func_58(4)) return true;
break;
}
return false;
}
BOOL func_75(int iParam0) // Position - 0x2313{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
return HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19);
}
BOOL func_76(int iParam0) // Position - 0x234F{
return Global_43257==iParam0;
}


void func_77() // Position - 0x235D{
return;
}
BOOL func_78() // Position - 0x2365{
return true;
}


void func_79() // Position - 0x236E{
return;
}


void func_80(var uParam0, int iParam1) // Position - 0x2376{
*uParam0=*uParam0 || iParam1;
return;
}


void func_81(int iParam0) // Position - 0x2387{
iLocal_95=iParam0;
return;
}


void func_82(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2393{
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
BOOL func_83() // Position - 0x2493{
if(MISC::IS_PC_VERSION())if(MISC::GET_CITY_DENSITY()==1f) return true;
return false;
}
BOOL func_84() // Position - 0x24B0{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
return false;
}
BOOL func_85(int iParam0, int iParam1) // Position - 0x24D3{
BOOL flag;
if(iParam0==11 || iParam0==-1) return false;
if(iParam1 < 0 || iParam1 >=32) return false;
flag=IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return flag;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x251D{
return func_87(iParam0, Global_43257);
}
BOOL func_87(int iParam0, int iParam1) // Position - 0x252E{
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
BOOL func_88(int iParam0, int iParam1) // Position - 0x270F{
return iParam0 && iParam1 !=false;
}


void func_89() // Position - 0x271E{
iLocal_99=5;
sLocal_101="PLAY_PSCHOOL" /*Press ~INPUT_CONTEXT~ to enter Flight School.*/;
TEXT_LABEL_ASSIGN_STRING(&uLocal_53, "Pilot_School", 64);
essLocal_97=54000;
return;
}


void func_90(int iParam0, int iParam1) // Position - 0x273B{
func_91(iParam0, iParam1);
return;
}


void func_91(var uParam0, int iParam1) // Position - 0x274B{
*uParam0=*uParam0 - *uParam0 && iParam1;
return;
}


void func_92(BOOL bParam0) // Position - 0x2760{
if(bParam0)if(iLocal_105 !=263) func_82(iLocal_105, 0, false);
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(func_88(iLocal_94, 2)){
func_4();
func_90(&iLocal_94, 2);
func_8(&iLocal_98);
}
iLocal_98=-1;
func_93();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_93() // Position - 0x27A9{
func_90(&iLocal_94, 4);
func_94();
if(SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_52, 3);
if(!MISC::IS_STRING_NULL(&uLocal_69))if(HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_69) !=0) SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_69);
return;
}


void func_94() // Position - 0x27E6{
if(bLocal_123) func_95(76);
return;
}


void func_95(int iParam0) // Position - 0x27F9{
if(iParam0 !=263) func_82(iParam0, true, false);
return;
}