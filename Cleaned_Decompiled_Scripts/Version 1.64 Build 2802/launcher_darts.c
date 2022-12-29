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
Hash hLocal_118=0;
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
BOOL bLocal_132=0;
BOOL bLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
Interior inLocal_140=0;
Hash hLocal_141=0;
Hash hLocal_142=0;
Ped pedLocal_143=0;
Ped pedLocal_144=0;
int iLocal_145=0;
BOOL bLocal_146=0;
int iLocal_147=0;
int iLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=0;
Object obLocal_156=0;
Interior inLocal_157=0;
Interior inLocal_158=0;
BOOL bLocal_159=0;
BOOL bLocal_160=0;
BOOL bLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
Object obScriptParam_0=0;
#endregion

void main() // Position - 0x0{
var unk;
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
bLocal_132=true;
bLocal_146=true;
iLocal_147=-1;
unk.f_1=5;
unk.f_17=5;
if(ENTITY::DOES_ENTITY_EXIST(obScriptParam_0)){
uLocal_90={
ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) 
};
obLocal_156=obScriptParam_0;
unk.f_1[0 /*3*/]={
uLocal_90 
};
hLocal_118=ENTITY::GET_ENTITY_MODEL(obLocal_156);
}else{
obLocal_156=obScriptParam_0;
unk.f_1[0 /*3*/]={
uLocal_90 
};
}
uLocal_86=uLocal_86;
uLocal_69={
uLocal_69 
};
flag=false;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)) func_121(true);
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_95=0;
func_119(&Global_112299, 0);
func_118();
if(func_117(iLocal_94, 1)) iLocal_100=10;
else iLocal_100=9;
while (!Global_38596){
SYSTEM::WAIT(0);
}
if(!func_117(iLocal_94, 8))if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100))if(func_114(0, iLocal_99)) func_121(false);
else func_121(true);
if(iLocal_99 !=-1)if(!func_114(0, iLocal_99)) func_121(true);
if(func_117(iLocal_94, 8388608)) func_121(true);
if(func_117(iLocal_94, 524288) && func_113() && !func_112()) func_121(true);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_117(iLocal_94, 4194304)){
if(iLocal_105 !=263){
func_111(iLocal_105, true, false);
iLocal_105=263;
}
func_110(10);
}
while (true){
if(!func_117(iLocal_94, 268435456)){
groundZ=0f;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(unk.f_1[0 /*3*/], &groundZ, false, false)){
if(groundZ !=0f){
unk.f_1[0 /*3*/].f_2=groundZ;
func_109(&iLocal_94, 268435456);
}}}
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_117(iLocal_94, 1048576))if(ENTITY::IS_ENTITY_DEAD(pedLocal_85, false)) func_121(true);
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_85) && !ENTITY::IS_ENTITY_DEAD(pedLocal_85, false)){
uLocal_87={
ENTITY::GET_ENTITY_COORDS(pedLocal_85, true) 
};
fLocal_93=SYSTEM::VDIST2(uLocal_87, unk.f_1[0 /*3*/]);
fLocal_93=fLocal_93;
uLocal_111={
uLocal_87 
};
uLocal_114={
unk.f_1[0 /*3*/] 
};
uLocal_111.f_2=0f;
uLocal_114.f_2=0f;
fLocal_110=SYSTEM::VDIST2(uLocal_111, uLocal_114);
switch (iLocal_95){
case 0:
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) || func_117(iLocal_94, 16) && !func_117(iLocal_94, 524288)){
iLocal_98=-1;
func_108();
func_110(1);
}else{
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_111(iLocal_105, true, false);
iLocal_105=263;
}
func_110(10);
}
uLocal_87.f_2 - unk.f_1[0 /*3*/].f_2 > 500f;
}
break;
case 1:
if(func_107()){
iLocal_103=iLocal_103;
func_110(3);
}else{
func_108();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_121(true);
return;
}
if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100)){
if(!func_117(iLocal_94, 8)){
flag2=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), &uLocal_69)){
uLocal_69={
uLocal_53 
};
flag2=false;
}
if(flag2){
func_121(false);
break;
}
}}
if(!func_117(iLocal_94, 4)){
func_104();
func_109(&iLocal_94, 4);
}
if(fLocal_110 > fLocal_102 * fLocal_102 && !Global_100715){
if(iLocal_105 !=263){
if(func_103(6) && !func_102(iLocal_105)){
}else{
func_111(iLocal_105, true, false);
iLocal_105=263;
}
}
func_110(10);
}else{
uLocal_69={
uLocal_53 
};
flag3=!func_117(iLocal_94, 64);
func_119(&iLocal_94, 128);
if(!func_101(3) && !Global_100715){
if(func_117(iLocal_94, 2097152)){
if(!func_117(iLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_100()) && !Global_100715){
func_110(10);
break;
}}
}
if(func_117(iLocal_94, 524288) && func_113() && !func_112()) func_121(true);
if(func_99()) func_121(true);
if(!func_91(6) || Global_112695 || func_90()) flag3=false;
if(func_117(iLocal_94, 1)){
if(!func_89()){
func_87(&iLocal_94, 128);
flag3=false;
}
}
if(func_86(true)) flag3=false;
if(Global_78558) flag3=false;
if(func_85()) flag3=false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) flag3=false;
if(func_84() || func_83(8, -1)) flag3=false;
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())) flag3=false;
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())) flag3=false;
if(func_82(0) || func_81()) flag3=false;
if(flag3){
if(!ENTITY::IS_ENTITY_AT_COORD(pedLocal_85, unk.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103)) flag3=false;
if(ENTITY::IS_ENTITY_DEAD(obLocal_156, false)){
obLocal_156=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uLocal_90, 2f, hLocal_118, true, false, true);
func_87(&iLocal_94, 128);
flag3=false;
}else{
uLocal_137={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obLocal_156, uLocal_134) 
};
if(func_80(&uLocal_119, uLocal_87, uLocal_137, obLocal_156)) bLocal_132=false;
elseif(uLocal_119.f_12==1) bLocal_132=true;
if(bLocal_132) flag3=false;
}
if(!bLocal_133) flag3=false;
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) !=inLocal_140) flag3=false;
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) flag3=false;
if(flag3){
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(func_79(uLocal_86)){
if(iLocal_96==-1){
_CONTEXT_ADD_HELP_TEXT(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
func_87(&iLocal_94, 2048);
}
elseif(!func_117(iLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_119(&iLocal_94, 2048);
}
if(func_75(iLocal_96, true)){
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_119(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
func_110(5);
}}else{
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_119(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
func_110(5);
}}
}
if(!flag3){
if(iLocal_96 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_119(&iLocal_94, 2048);
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
if(func_117(iLocal_94, 1)){
if(func_103(6) || func_103(7)){
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
iLocal_52=func_25();
func_87(&iLocal_94, 2);
func_110(6);
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
func_110(10);
}}else{
func_16();
}
break;
case 6:
if(func_117(Global_112299, 262144)){
func_119(&Global_112299, 262144);
func_15();
}
if(func_117(iLocal_94, 2097152))if(!func_101(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) func_110(10);
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_52)){
STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_11(&uLocal_107) * 1000f), iLocal_99, 0);
func_10(&uLocal_107);
func_119(&iLocal_94, 256);
func_7();
if(flag){
func_119(&iLocal_94, 2);
}
elseif(func_117(iLocal_94, 2)){
if(func_117(Global_112299, 0)){
func_6(&iLocal_98);
iLocal_98=-1;
func_119(&iLocal_94, 2);
}else{
func_6(&iLocal_98);
iLocal_98=-1;
func_119(&iLocal_94, 2);
}
}
func_110(0);
if(iLocal_99 !=-1){
if(func_117(Global_112299, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_99), 0, Global_100718, 0);
func_5(func_19(iLocal_99), 0, Global_100718, true, false);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_99), 0, Global_100718, 0);
func_5(func_19(iLocal_99), 0, Global_100718, false, false);
}
}
func_4();
func_119(&Global_112299, 0);
if(func_117(iLocal_94, 16777216)) func_121(true);
if(iLocal_99 !=-1)if(Global_113648.f_9087)if(!func_114(0, iLocal_99)) func_121(true);
}
func_3();
break;
case 8:
func_110(0);
break;
case 10:
func_121(true);
break;
case 9:
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_111(iLocal_105, true, false);
iLocal_105=263;
}
func_110(10);
}
break;
case 7:
func_2();
if(iLocal_105 !=263) func_111(iLocal_105, false, false);
if(iLocal_96 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_101)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_110(4);
break;
case 4:
if(iLocal_104 % 150==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_106==2){
if(iLocal_106==2){
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) && func_114(0, iLocal_99)){
func_118();
if(iLocal_105 !=263) func_111(iLocal_105, true, false);
func_110(0);
}}}elseif(iLocal_106==0){
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_111(iLocal_105, true, false);
iLocal_105=263;
}
func_110(10);
}}elseif(iLocal_106==1){
if(fLocal_110 > (80f + 5f) * (80f + 5f)){
func_118();
if(iLocal_105 !=263) func_111(iLocal_105, true, false);
func_110(0);
}}
}
else{
func_111(iLocal_105, true, false);
}}else{
iLocal_104=iLocal_104 + 1;
}
break;
}}
SYSTEM::WAIT(0);
}
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xAD8{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_2() // Position - 0xAEB{
if(bLocal_146){
if(hLocal_141 !=0) STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_141);
if(hLocal_142 !=0) STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_142);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dart_1"));
}
return;
}


void func_3() // Position - 0xB19{
return;
}


void func_4() // Position - 0xB21{
return;
}


void func_5(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB29{
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)) return;
if(MISC::COMPARE_STRINGS(sParam0, &Global_97751, false, -1) !=0) return;
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_94858);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
return;
}


void func_6(var uParam0) // Position - 0xB6D{
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


void func_7() // Position - 0xBAA{
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_9()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_8()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
}
return;
}
BOOL func_8() // Position - 0xBEC{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_9() // Position - 0xC02{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_10(var uParam0) // Position - 0xC18{
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
return;
}


float func_11(int* piParam0) // Position - 0xC2E{
if(func_14(piParam0))if(func_13(piParam0)) return piParam0->f_2;
else return func_12(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
return piParam0->f_1;
}


float func_12(BOOL bParam0) // Position - 0xC6A{
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
BOOL func_13(int* piParam0) // Position - 0xCC2{
return IS_BIT_SET(*piParam0, 2);
}
BOOL func_14(int* piParam0) // Position - 0xCCF{
return IS_BIT_SET(*piParam0, 1);
}

int func_15() // Position - 0xCDC{
return 1;
}


void func_16() // Position - 0xCE5{
return;
}


void func_17(char* sParam0, int iParam1, int iParam2) // Position - 0xCED{
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97751, 0, 0, false, true, false);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
}
TEXT_LABEL_ASSIGN_STRING(&Global_97751, sParam0, 64);
unk_0x363D7D2154F0040D(sParam0, iParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
return;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xD2E{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


char* func_19(int iParam0) // Position - 0xD56{
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


void func_20(int iParam0) // Position - 0xE94{
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


void func_21(int* piParam0) // Position - 0xEEB{
if(!func_14(piParam0)) func_24(piParam0);
else func_22(piParam0);
return;
}


void func_22(int* piParam0) // Position - 0xF0C{
func_23(piParam0, 0f);
return;
}


void func_23(int* piParam0, float fParam1) // Position - 0xF1B{
piParam0->f_1=func_12(IS_BIT_SET(*piParam0, 4)) - fParam1;
MISC::SET_BIT(piParam0, 1);
MISC::CLEAR_BIT(piParam0, 2);
piParam0->f_2=0f;
return;
}


void func_24(int* piParam0) // Position - 0xF46{
if(!func_14(piParam0)) func_22(piParam0);
return;
}

int func_25() // Position - 0xF5E{
var entityRotation;
int num;
entityRotation={
ENTITY::GET_ENTITY_ROTATION(obLocal_156, 2) 
};
uLocal_149={
ENTITY::GET_ENTITY_COORDS(obLocal_156, true) 
};
uLocal_149.f_3=entityRotation.f_2;
uLocal_149.f_4=obLocal_156;
if(!IS_BIT_SET(Global_113609, 10)){
uLocal_149.f_6=hLocal_142;
uLocal_149.f_5=pedLocal_143;
}else{
uLocal_149.f_6=hLocal_141;
uLocal_149.f_5=pedLocal_144;
}
num=SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&uLocal_53, &uLocal_149, 7, essLocal_97);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_53);
return num;
}


void func_26(Ped pedParam0) // Position - 0xFC5{
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


void func_27(int iParam0) // Position - 0x101E{
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

int func_28(Ped pedParam0) // Position - 0x10A1{
int i;
i=0;
for (i=0;
i < 5;
i=i + 1){
if(Global_44206[i /*5*/].f_1==pedParam0) return i;
}
return -1;
}


void func_29(int iParam0, int iParam1, int iParam2) // Position - 0x10D2{
func_30(iParam0, iParam1, iParam2, 0, 0, 1);
return;
}


void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x10E7{
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

int func_31() // Position - 0x1169{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(Global_44313[i /*6*/].f_2==6) return i;
}
return -1;
}
BOOL func_32(int iParam0, int iParam1, int iParam2) // Position - 0x119A{
if(func_33(iParam0, iParam1, iParam2)==-1) return false;
return true;
}

int func_33(int iParam0, int iParam1, int iParam2) // Position - 0x11B5{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(iParam2==Global_44313[i /*6*/].f_2)if(iParam0==Global_44313[i /*6*/])if(iParam1==Global_44313[i /*6*/].f_1) return i;
}
return -1;
}

int func_34(Ped pedParam0) // Position - 0x1201{
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


void func_35() // Position - 0x124A{
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==2) Global_9058[0 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==2) Global_9058[1 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==2) Global_9058[2 /*2811*/][0 /*281*/].f_259=0;
MISC::CLEAR_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
return;
}

int func_36(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x12C7{
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


void func_37(var uParam0, int iParam1) // Position - 0x13FE{
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
BOOL func_38(int iParam0) // Position - 0x144D{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}


void func_39() // Position - 0x146F{
var sizeAndPeds;
int pedNearbyPeds;
int i;
BOOL flag;
Vector3 entityCoords;
float num;
sizeAndPeds=25;
flag=false;
if(bLocal_146){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
num=SYSTEM::VDIST2(entityCoords, uLocal_90);
if(iLocal_147==0){
if(num < 10f * 10f){
iLocal_147=1;
if(!func_103(6) && !func_103(7)){
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_143, false)){
ENTITY::FREEZE_ENTITY_POSITION(pedLocal_143, false);
TASK::TASK_LOOK_AT_ENTITY(pedLocal_143, pedLocal_144, -1, SLF_SLOW_TURN_RATE | 2048, 3);
TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
}
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_144, false)){
ENTITY::FREEZE_ENTITY_POSITION(pedLocal_144, false);
TASK::TASK_LOOK_AT_ENTITY(pedLocal_144, pedLocal_143, -1, SLF_SLOW_TURN_RATE | 2048, 3);
TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_144, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
}}else{
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_143, false)){
ENTITY::FREEZE_ENTITY_POSITION(pedLocal_143, false);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(1991.6766f, 3044.9565f, 46.21505f, 0.5f, true)) TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(pedLocal_143, 1991.6766f, 3044.9565f, 46.21505f, 0.5f, 0);
else TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_143, 1991.6766f, 3044.9565f, 46.21505f, 1f, 20000, 1048576000, 0, 1193033728);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_143);
}
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_144, false)){
ENTITY::FREEZE_ENTITY_POSITION(pedLocal_144, false);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(1990.3704f, 3045.1213f, 46.21502f, 0.5f, true)) TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(pedLocal_144, 1990.3704f, 3045.1213f, 46.21502f, 0.5f, 0);
else TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_144, 1990.3704f, 3045.1213f, 46.21502f, 1f, 20000, 1048576000, 0, 1193033728);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_144);
}}}}elseif(iLocal_147==1){
if(num >=10f * 10f){
iLocal_147=0;
if(!func_103(6) && !func_103(7)){
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_143, false)){
TASK::TASK_STAND_STILL(pedLocal_143, -1);
if(!ENTITY::IS_ENTITY_ATTACHED(pedLocal_143)) ENTITY::FREEZE_ENTITY_POSITION(pedLocal_143, true);
}
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_144, false)){
TASK::TASK_STAND_STILL(pedLocal_144, -1);
if(!ENTITY::IS_ENTITY_ATTACHED(pedLocal_144)) ENTITY::FREEZE_ENTITY_POSITION(pedLocal_144, true);
}}else{
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_143, false)){
ENTITY::SET_ENTITY_COORDS(pedLocal_143, 1991.6766f, 3044.9565f, 46.21505f, true, false, false, true);
TASK::TASK_STAND_STILL(pedLocal_143, -1);
if(!ENTITY::IS_ENTITY_ATTACHED(pedLocal_143)) ENTITY::FREEZE_ENTITY_POSITION(pedLocal_143, true);
}
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_144, false)){
ENTITY::SET_ENTITY_COORDS(pedLocal_144, 1990.3704f, 3045.1213f, 46.21502f, true, false, false, true);
TASK::TASK_STAND_STILL(pedLocal_144, -1);
if(!ENTITY::IS_ENTITY_ATTACHED(pedLocal_144)) ENTITY::FREEZE_ENTITY_POSITION(pedLocal_144, true);
}}}}}
if(!bLocal_159){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0) || PED::IS_ANY_PED_SHOOTING_IN_AREA(937.0616f, -117.8927f, 72.9163f, 1021.8488f, -120.5357f, 72.9163f, true, true) || MISC::IS_PROJECTILE_IN_AREA(1991.4733f, 3045.9805f, 49.532f, 1996.9056f, 3052.1697f, 46.3392f, false)){
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_143, false)) TASK::TASK_SMART_FLEE_PED(pedLocal_143, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_144, false)) TASK::TASK_SMART_FLEE_PED(pedLocal_144, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
flag=true;
}else{
pedNearbyPeds=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
for (i=0;
i < pedNearbyPeds;
i=i + 1){
if(!PED::IS_PED_INJURED(sizeAndPeds[i])){
if(PED::IS_PED_IN_MELEE_COMBAT(sizeAndPeds[i]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), sizeAndPeds[i])){
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_143, false)) TASK::TASK_SMART_FLEE_PED(pedLocal_143, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_144, false)) TASK::TASK_SMART_FLEE_PED(pedLocal_144, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
flag=true;
}}}}}
if(!func_103(6) && !func_103(7))if(!PED::IS_PED_INJURED(pedLocal_143) && !PED::IS_PED_INJURED(pedLocal_144))if(PED::IS_PED_FLEEING(pedLocal_143) || PED::IS_PED_FLEEING(pedLocal_144)) flag=true;
else flag=true;
if(flag){
if(func_102(func_72())){
bLocal_159=true;
func_71(0);
}
if(bLocal_161){
STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
bLocal_161=false;
bLocal_133=false;
}}}
if(iLocal_148==1){
if(!INTERIOR::IS_VALID_INTERIOR(inLocal_157)){
inLocal_157=INTERIOR::GET_INTERIOR_AT_COORDS(-573.3155f, 291.2963f, 79.5509f);
}elseif(inLocal_157==INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())){
func_40(140, 3);
func_40(139, 3);
if(!PED::IS_PED_INJURED(pedLocal_143) && !PED::IS_PED_INJURED(pedLocal_144)){
if(bLocal_160){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_143, false);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_144, false);
bLocal_160=false;
}}}elseif(!PED::IS_PED_INJURED(pedLocal_143) && !PED::IS_PED_INJURED(pedLocal_144)){
if(!bLocal_160){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_143, true);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_144, true);
bLocal_160=true;
}}}elseif(iLocal_148==2){
if(!INTERIOR::IS_VALID_INTERIOR(inLocal_158)){
inLocal_158=INTERIOR::GET_INTERIOR_AT_COORDS(1995.6138f, 3049.8774f, 46.2153f);
}elseif(inLocal_158==INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(pedLocal_143) && !PED::IS_PED_INJURED(pedLocal_144)){
if(bLocal_160){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_143, false);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_144, false);
bLocal_160=false;
}}
if(!bLocal_161){
STREAMING::REQUEST_ANIM_DICT("mini@dartsintro");
STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
bLocal_161=true;
}
if(bLocal_161){
if(!bLocal_133){
if(!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro") || !STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro_alt1")){
}else{
bLocal_133=true;
}}}}else{
if(!PED::IS_PED_INJURED(pedLocal_143) && !PED::IS_PED_INJURED(pedLocal_144)){
if(!bLocal_160){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_143, true);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_144, true);
bLocal_160=true;
}}
if(bLocal_161){
STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
bLocal_161=false;
bLocal_133=false;
}}}
return;
}


void func_40(int iParam0, int iParam1) // Position - 0x1A60{
int num;
if(iParam0 !=226){
if(Global_78558) num=Global_42791[iParam0];
else num=Global_113648.f_7263[iParam0];
if(num !=iParam1 || IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32)){
if(iParam1==4 || iParam1==3 || iParam1==5 || iParam1==6 || iParam1==2){
MISC::SET_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
Global_39089[iParam0]=iParam1;
}elseif(Global_78558){
Global_42791[iParam0]=iParam1;
}else{
Global_113648.f_7263[iParam0]=iParam1;
}
MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
func_42(iParam0);
if(IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32)) func_41(iParam0);
}}
return;
}


void func_41(int iParam0) // Position - 0x1B4D{
if(!IS_BIT_SET(Global_39560.f_228[iParam0 / 32], iParam0 % 23)){
MISC::SET_BIT(&Global_39560.f_228[iParam0 / 32], iParam0 % 23);
Global_39560[Global_39560.f_227]=iParam0;
Global_39560.f_227=Global_39560.f_227 + 1;
}
return;
}


void func_42(int iParam0) // Position - 0x1B98{
Vector3 vector;
BOOL flag;
BOOL flag2;
int num;
float distanceBetweenCoords;
Interior interior;
Interior interiorAtCoords;
BOOL flag3;
Interior interiorFromEntity;
Interior interiorAtCoords2;
if(!func_68()) return;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) return;
vector={
func_67(iParam0) 
};
if(IS_BIT_SET(vector.f_4, 2)) func_53(iParam0, &vector);
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))if(CUTSCENE::IS_CUTSCENE_PLAYING()) return;
flag=false;
flag2=false;
distanceBetweenCoords=MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
if(IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) && Global_39089[iParam0]==2 && distanceBetweenCoords > 210f){
MISC::CLEAR_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
Global_38635[iParam0]=0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning"))==0){
if(IS_BIT_SET(Global_38862[iParam0 / 32], iParam0 % 32)){
if(distanceBetweenCoords < 25f){
if(Global_100733.f_385==0)if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) Global_100733.f_385=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
interior=Global_100733.f_385;
interiorAtCoords=INTERIOR::GET_INTERIOR_AT_COORDS(vector);
if(interior==interiorAtCoords && interior !=0){
MISC::SET_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
Global_39089[iParam0]=3;
MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
}}
MISC::CLEAR_BIT(&Global_38862[iParam0 / 32], iParam0 % 32);
}}
if(IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32)){
num=Global_39089[iParam0];
}elseif(IS_BIT_SET(vector.f_4, 0)){
if(Global_113648.f_9087) num=func_50(iParam0);
else num=0;
if(func_103(14)) num=0;
}elseif(IS_BIT_SET(vector.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon"))==0){
if(func_43()) num=0;
else num=1;
}else{
num=Global_113648.f_7263[iParam0];
}
if(Global_39316[iParam0] !=num) flag=true;
if(IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32))if(!IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) || Global_38635[iParam0]==0 && Global_39089[iParam0] !=2) flag=true;
if(flag){
if(!Global_38616){
}else{
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5)) OBJECT::ADD_DOOR_TO_SYSTEM(vector.f_5, vector.f_3, vector, false, false, false);
switch (num){
case 1:
if(IS_BIT_SET(vector.f_4, 3)){
flag3=true;
}elseif(distanceBetweenCoords > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(vector.f_5)) <=0.015f){
interiorFromEntity=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
interiorAtCoords2=INTERIOR::GET_INTERIOR_AT_COORDS(vector);
if(interiorFromEntity !=interiorAtCoords2 || interiorFromEntity==0) flag3=true;
}
if(flag3){
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
}
break;
case 4:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 2:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 0:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, true);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 3:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, 0, false, true);
flag2=true;
break;
case 5:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 6:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
default:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
}}
if(flag2){
MISC::CLEAR_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
Global_39316[iParam0]=num;
}}
if(IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) && Global_39089[iParam0] !=2){
MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
func_41(iParam0);
if(Global_38635[iParam0] < 2) Global_38635[iParam0]=Global_38635[iParam0] + 1;
}
return;
}
BOOL func_43() // Position - 0x205D{
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) return false;
switch (_GET_CURRENT_PLAYER_CHARACTER()){
case CHAR_MICHAEL:
if(Global_113648.f_9087.f_99.f_58[65]) return true;
break;
case CHAR_FRANKLIN:
if(Global_113648.f_9087.f_99.f_58[66]) return true;
break;
case CHAR_TREVOR:
if(Global_113648.f_9087.f_99.f_58[65]) return true;
break;
}
return false;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x20DC{
func_45();
return Global_113648.f_2365.f_539.f_4321;
}


void func_45() // Position - 0x20F5{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_46(character) && !func_103(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_46(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_46(eCharacter echParam0) // Position - 0x21F2{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x21FE{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x223B{
if(func_46(character)) return func_49(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_49(eCharacter echParam0) // Position - 0x2260{
return Global_2028[echParam0 /*29*/];
}

int func_50(int iParam0) // Position - 0x226F{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
if(func_51(iParam0)) return 1;
if(iParam0==49){
if(character==CHAR_FRANKLIN)if(IS_BIT_SET(Global_113648.f_7231[5], 0) || IS_BIT_SET(Global_113648.f_7231[6], 0)) return 0;
if(func_46(character))if(IS_BIT_SET(Global_95708[5], character)) return 0;
}
switch (iParam0){
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 44:
case 45:
case 46:
if(character==CHAR_MICHAEL)if(IS_BIT_SET(Global_113648.f_7231[0], 0)) return 0;
if(func_46(character))if(IS_BIT_SET(Global_95708[0], character))if(iParam0 !=40) return 0;
else return 1;
break;
case 47:
case 48:
case 49:
if(character==CHAR_FRANKLIN)if(IS_BIT_SET(Global_113648.f_7231[5], 0)) return 0;
if(func_46(character))if(IS_BIT_SET(Global_95708[5], character)) return 0;
break;
case 50:
if(character==CHAR_FRANKLIN)if(IS_BIT_SET(Global_113648.f_7231[6], 0)) return 0;
if(func_46(character))if(IS_BIT_SET(Global_95708[6], character)) return 0;
break;
case 51:
case 52:
if(character==CHAR_TREVOR){
if(IS_BIT_SET(Global_113648.f_7231[2], 0)) return 0;
if(func_46(character))if(IS_BIT_SET(Global_95708[2], character)) return 0;
}elseif(character==CHAR_MICHAEL){
if(IS_BIT_SET(Global_113648.f_7231[1], 0)) return 0;
if(func_46(character))if(IS_BIT_SET(Global_95708[1], character)) return 0;
}
break;
case 53:
if(character==CHAR_TREVOR)if(IS_BIT_SET(Global_113648.f_7231[3], 0)) return 0;
if(func_46(character))if(IS_BIT_SET(Global_95708[3], character)) return 0;
break;
default:
return 0;
}
return 1;
}
BOOL func_51(int iParam0) // Position - 0x2497{
Hash entityModel;
if(iParam0==40 || iParam0==49 || iParam0==52){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)){
entityModel=ENTITY::GET_ENTITY_MODEL(func_52(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
switch (entityModel){
case joaat("utillitruck"):
case joaat("monster"):
return true;
}}}}
return false;
}
Vehicle func_52(Vehicle veParam0) // Position - 0x2503{
return veParam0;
}


void func_53(int iParam0, var uParam1) // Position - 0x250D{
int num;
int num2;
if(!IS_BIT_SET(uParam1->f_4, 2)) return;
num=func_56();
num2=func_55(num);
switch (iParam0){
case 133:
case 134:
case 201:
case 202:
if(func_54(iParam0)){
if(num2 < 19){
if(num2 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(num2 >=19){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 199:
case 200:
case 203:
case 204:
if(func_54(iParam0)){
if(num2 < 18){
if(num2 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(num2 >=18){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 141:
case 142:
if(func_54(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0 && !Global_113648.f_9087.f_99.f_58[4]){
if(num2 < 21){
if(num2 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(!Global_113648.f_9087.f_99.f_58[4]){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(Global_113648.f_9087.f_99.f_58[4]){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0){
if(num2 >=21){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=18f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=18f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}}
break;
case 145:
case 146:
case 143:
case 144:
if(func_54(iParam0)){
if(num2 < 20){
if(num2 >=9){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(num2 >=20){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=40f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 9){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=40f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 147:
case 148:
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 152:
case 153:
case 154:
case 155:
case 156:
case 157:
if(!func_54(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet"))==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 158:
case 159:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6)==0){
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 160:
case 161:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2"))==0){
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 70:
case 71:
case 72:
if(!func_54(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[26 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}else{
return;
}
break;
case 101:
case 102:
case 103:
case 104:
if(!func_54(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[43 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 190:
case 191:
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 193:
if(!func_54(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[93 /*34*/].f_6) > 0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 198:
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 80:
if(!func_54(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[8 /*34*/].f_6)==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[10 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 205:
case 206:
if(!func_54(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[47 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 207:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6)==0){
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 208:
case 209:
case 211:
case 210:
case 212:
case 213:
case 214:
case 215:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[48 /*34*/].f_6)==0){
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 99:
case 100:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[39 /*34*/].f_6)==0){
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 216:
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 217:
case 218:
if(!func_54(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 219:
case 220:
case 221:
case 222:
if(func_54(iParam0)){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
}
return;
}
BOOL func_54(int iParam0) // Position - 0x2EA5{
var unk;
int doorState;
unk={
func_67(iParam0) 
};
doorState=OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(unk.f_5);
return doorState==1 || doorState==4 || doorState==2;
}

int func_55(int iParam0) // Position - 0x2ED9{
return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_56() // Position - 0x2EEC{
var unk;
func_66(&unk, CLOCK::GET_CLOCK_SECONDS());
func_65(&unk, CLOCK::GET_CLOCK_MINUTES());
func_64(&unk, CLOCK::GET_CLOCK_HOURS());
func_59(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_58(&unk, CLOCK::GET_CLOCK_MONTH());
func_57(&unk, CLOCK::GET_CLOCK_YEAR());
return unk;
}


void func_57(var uParam0, int iParam1) // Position - 0x2F32{
if(iParam1 <=0) return;
if(iParam1 > 2043 || iParam1 < 1979) return;
*uParam0=*uParam0 - *uParam0 & 2080374784;
if(iParam1 < 2011){
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
*uParam0=*uParam0 | -2147483648;
}else{
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
*uParam0=*uParam0 - *uParam0 & -2147483648;
}
return;
}


void func_58(var uParam0, int iParam1) // Position - 0x2FB8{
if(iParam1 < 0 || iParam1 > 11) return;
*uParam0=*uParam0 - *uParam0 & 15;
*uParam0=*uParam0 || iParam1;
return;
}


void func_59(var uParam0, int iParam1) // Position - 0x2FEB{
int num;
int num2;
num=func_63(*uParam0);
num2=func_61(*uParam0);
if(iParam1 < 1 || iParam1 > func_60(num, num2)) return;
*uParam0=*uParam0 - *uParam0 & 496;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
return;
}

int func_60(int iParam0, int iParam1) // Position - 0x303C{
if(iParam1 < 0) iParam1=0;
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 7:
case 9:
case 11:
return 31;
case 3:
case 5:
case 8:
case 10:
return 30;
case 1:
if(iParam1 % 4==0)if(iParam1 % 100 !=0) return 29;
elseif(iParam1 % 400==0) return 29;
return 28;
}
return 30;
}

int func_61(int iParam0) // Position - 0x30DE{
return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 :
1) + 2011;
}


var func__62(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3100{
if(bParam0) return uParam1;
return uParam2;
}

int func_63(int iParam0) // Position - 0x3117{
return iParam0 & 15;
}


void func_64(var uParam0, int iParam1) // Position - 0x3124{
if(iParam1 < 0 || iParam1 > 24) return;
*uParam0=*uParam0 - *uParam0 & 15872;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
return;
}


void func_65(var uParam0, int iParam1) // Position - 0x315E{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 1032192;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
return;
}


void func_66(var uParam0, int iParam1) // Position - 0x3199{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 66060288;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
return;
}


struct<7> func_67(int iParam0) // Position - 0x31D5{
var unk;
switch (iParam0){
case 0:
unk.f_3=joaat("v_ilev_bs_door");
unk={
133f, -1711f, 29f 
};
unk.f_5=1804701345;
break;
case 1:
unk.f_3=joaat("v_ilev_bs_door");
unk={
-1287.8568f, -1115.7416f, 7.1401f 
};
unk.f_5=1403601067;
break;
case 2:
unk.f_3=joaat("v_ilev_bs_door");
unk={
1932.9518f, 3725.1536f, 32.9944f 
};
unk.f_5=-2031139496;
break;
case 3:
unk.f_3=joaat("v_ilev_bs_door");
unk={
1207.8732f, -470.063f, 66.358f 
};
unk.f_5=1796834809;
break;
case 4:
unk.f_3=joaat("v_ilev_bs_door");
unk={
-29.8692f, -148.1571f, 57.2265f 
};
unk.f_5=96153298;
break;
case 5:
unk.f_3=joaat("v_ilev_bs_door");
unk={
-280.7851f, 6232.7817f, 31.8455f 
};
unk.f_5=-281080954;
break;
case 6:
unk.f_3=joaat("v_ilev_hd_door_l");
unk={
-824f, -187f, 38f 
};
unk={
-823.2001f, -187.0831f, 37.819f 
};
unk.f_5=183249434;
break;
case 7:
unk.f_3=joaat("v_ilev_hd_door_r");
unk={
-823f, -188f, 38f 
};
unk={
-822.4442f, -188.3924f, 37.819f 
};
unk.f_5=758345384;
break;
case 8:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
82.3186f, -1392.7518f, 29.5261f 
};
unk.f_5=-1069262641;
break;
case 9:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
82.3186f, -1390.4758f, 29.5261f 
};
unk.f_5=1968521986;
break;
case 10:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
1686.9832f, 4821.7407f, 42.2131f 
};
unk.f_5=-2143706301;
break;
case 11:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
1687.2817f, 4819.4844f, 42.2131f 
};
unk.f_5=-1403421822;
break;
case 12:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
418.637f, -806.457f, 29.6396f 
};
unk.f_5=-1950137670;
break;
case 13:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
418.637f, -808.733f, 29.6396f 
};
unk.f_5=1226259807;
break;
case 14:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
-1096.6613f, 2705.4458f, 19.2578f 
};
unk.f_5=1090833557;
break;
case 15:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
-1094.9652f, 2706.9636f, 19.2578f 
};
unk.f_5=897332612;
break;
case 16:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
1196.825f, 2703.221f, 38.3726f 
};
unk.f_5=1095946640;
break;
case 17:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
1199.101f, 2703.221f, 38.3726f 
};
unk.f_5=801975945;
break;
case 18:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
-818.7642f, -1079.5444f, 11.4781f 
};
unk.f_5=-167996547;
break;
case 19:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
-816.7932f, -1078.4065f, 11.4781f 
};
unk.f_5=-1935818563;
break;
case 20:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
-0.0564f, 6517.461f, 32.0278f 
};
unk.f_5=1891185217;
break;
case 21:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
-1.7253f, 6515.9136f, 32.0278f 
};
unk.f_5=1236591681;
break;
case 22:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
-1201.4349f, -776.8566f, 17.9918f 
};
unk.f_5=1980808685;
break;
case 23:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
617.2458f, 2751.0222f, 42.7578f 
};
unk.f_5=1352749757;
break;
case 24:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
127.8201f, -211.8274f, 55.2275f 
};
unk.f_5=-566554453;
break;
case 25:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
-3167.75f, 1055.5358f, 21.5329f 
};
unk.f_5=1284749450;
break;
case 26:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-716.6754f, -155.42f, 37.6749f 
};
unk.f_5=261851994;
break;
case 27:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-715.6154f, -157.2561f, 37.6749f 
};
unk.f_5=217646625;
break;
case 28:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-157.0924f, -306.4413f, 39.994f 
};
unk.f_5=1801139578;
break;
case 29:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-156.4022f, -304.4366f, 39.994f 
};
unk.f_5=-2123275866;
break;
case 30:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-1454.7819f, -231.7927f, 50.0565f 
};
unk.f_5=1312689981;
break;
case 31:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-1456.2007f, -233.3682f, 50.0565f 
};
unk.f_5=-595055661;
break;
case 32:
unk.f_3=joaat("v_ilev_ta_door");
unk={
321.81f, 178.36f, 103.68f 
};
unk.f_5=-265260897;
break;
case 33:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
1859.89f, 3749.79f, 33.18f 
};
unk.f_5=-1284867488;
break;
case 34:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
-289.1752f, 6199.1123f, 31.637f 
};
unk.f_5=302307081;
break;
case 35:
unk.f_3=joaat("v_ilev_ta_door");
unk={
-1155.4541f, -1424.0079f, 5.0461f 
};
unk.f_5=-681886015;
break;
case 36:
unk.f_3=joaat("v_ilev_ta_door");
unk={
1321.2856f, -1650.5967f, 52.3663f 
};
unk.f_5=-2086556500;
break;
case 37:
unk.f_3=joaat("v_ilev_ta_door");
unk={
-3167.7888f, 1074.7668f, 20.9209f 
};
unk.f_5=-1496386696;
break;
case 38:
unk.f_3=joaat("v_ilev_mm_doorm_l");
unk={
-817f, 179f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-2097039789;
break;
case 39:
unk.f_3=joaat("v_ilev_mm_doorm_r");
unk={
-816f, 178f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-2127416656;
break;
case 40:
unk.f_3=joaat("prop_ld_garaged_01");
unk={
-815f, 186f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1986583853;
unk.f_6=6.5f;
break;
case 41:
unk.f_3=joaat("prop_bh1_48_backdoor_l");
unk={
-797f, 177f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=776026812;
break;
case 42:
unk.f_3=joaat("prop_bh1_48_backdoor_r");
unk={
-795f, 178f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=698422331;
break;
case 43:
unk.f_3=joaat("prop_bh1_48_backdoor_l");
unk={
-793f, 181f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=535076355;
break;
case 44:
unk.f_3=joaat("prop_bh1_48_backdoor_r");
unk={
-794f, 183f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=474675599;
break;
case 45:
unk.f_3=joaat("prop_bh1_48_gate_1");
unk={
-849f, 179f, 70f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1978427516;
break;
case 46:
unk.f_3=joaat("v_ilev_mm_windowwc");
unk={
-802.7333f, 167.5041f, 77.5824f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1700375831;
break;
case 47:
unk.f_3=joaat("v_ilev_fa_frontdoor");
unk={
-14f, -1441f, 31f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=613961892;
break;
case 48:
unk.f_3=joaat("v_ilev_fh_frntdoor");
unk={
-15f, -1427f, 31f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-272570634;
break;
case 49:
unk.f_3=joaat("prop_sc1_21_g_door_01");
unk={
-25.28f, -1431.06f, 30.84f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1040675994;
break;
case 50:
unk.f_3=joaat("v_ilev_fh_frontdoor");
unk={
7.52f, 539.53f, 176.18f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=1201219326;
break;
case 51:
unk.f_3=joaat("v_ilev_trevtraildr");
unk={
1973f, 3815f, 34f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=joaat("DOORHASH_T_TRAILER_CS");
break;
case 52:
unk.f_3=joaat("prop_cs4_10_tr_gd_01");
unk={
1972.7874f, 3824.5537f, 32.5831f 
};
unk.f_5=1113956670;
unk.f_6=12f;
break;
case 53:
unk.f_3=joaat("v_ilev_trev_doorfront");
unk={
-1150f, -1521f, 11f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1361617046;
break;
}
switch (iParam0){
case 54:
unk.f_3=joaat("prop_com_ls_door_01");
unk={
-1145.9f, -1991.14f, 14.18f 
};
unk.f_5=-1871080926;
unk.f_6=25f;
break;
case 55:
unk.f_3=joaat("prop_id2_11_gdoor");
unk={
723.12f, -1088.83f, 23.28f 
};
unk.f_5=1168079979;
unk.f_6=25f;
break;
case 56:
unk.f_3=joaat("prop_com_ls_door_01");
unk={
-356.09f, -134.77f, 40.01f 
};
unk.f_5=1206354175;
unk.f_6=25f;
break;
case 57:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
108.8502f, 6617.8765f, 32.673f 
};
unk.f_5=-1038180727;
unk.f_6=25f;
break;
case 58:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
114.3206f, 6623.226f, 32.7161f 
};
unk.f_5=1200466273;
unk.f_6=25f;
break;
case 59:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
1182.3054f, 2645.2422f, 38.807f 
};
unk.f_5=1391004277;
unk.f_6=25f;
break;
case 60:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
1174.6542f, 2645.2422f, 38.6826f 
};
unk.f_5=-459199009;
unk.f_6=25f;
break;
case 225:
unk.f_3=joaat("lr_prop_supermod_door_01");
unk={
-205.7007f, -1310.6917f, 30.2957f 
};
unk.f_5=-288764223;
unk.f_6=25f;
break;
case 61:
unk.f_3=joaat("v_ilev_janitor_frontdoor");
unk={
-107.5401f, -9.0258f, 70.6696f 
};
unk.f_5=-252283844;
break;
case 62:
unk.f_3=joaat("v_ilev_ss_door8");
unk={
717f, -975f, 25f 
};
unk.f_5=-826072862;
break;
case 63:
unk.f_3=joaat("v_ilev_ss_door7");
unk={
719f, -975f, 25f 
};
unk.f_5=763780711;
break;
case 64:
unk.f_3=joaat("v_ilev_ss_door02");
unk={
709.9813f, -963.5311f, 30.5453f 
};
unk.f_5=-874851305;
break;
case 65:
unk.f_3=joaat("v_ilev_ss_door03");
unk={
709.9894f, -960.6675f, 30.5453f 
};
unk.f_5=-1480820165;
break;
case 66:
unk.f_3=joaat("v_ilev_store_door");
unk={
707.8046f, -962.4564f, 30.5453f 
};
unk.f_5=949391213;
break;
case 67:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
1393f, 3599f, 35f 
};
unk.f_5=212192855;
break;
case 68:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
1395f, 3600f, 35f 
};
unk.f_5=-126474752;
break;
case 69:
unk.f_3=joaat("v_ilev_ss_door04");
unk={
1387f, 3614f, 39f 
};
unk.f_5=1765671336;
break;
case 70:
unk.f_3=joaat("prop_ron_door_01");
unk={
1083.5471f, -1975.4354f, 31.6222f 
};
unk.f_5=792295685;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 71:
unk.f_3=joaat("prop_ron_door_01");
unk={
1065.237f, -2006.0791f, 32.2329f 
};
unk.f_5=563273144;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 72:
unk.f_3=joaat("prop_ron_door_01");
unk={
1085.3069f, -2018.5613f, 41.6289f 
};
unk.f_5=-726993043;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 73:
unk.f_3=joaat("v_ilev_bank4door02");
unk={
-111f, 6464f, 32f 
};
unk.f_5=178228075;
break;
case 74:
unk.f_3=joaat("v_ilev_bank4door01");
unk={
-110f, 6462f, 32f 
};
unk.f_5=1852297978;
break;
case 75:
unk.f_3=joaat("v_ilev_lester_doorfront");
unk={
1274f, -1721f, 55f 
};
unk.f_5=-565026078;
break;
case 76:
unk.f_3=joaat("v_ilev_lester_doorveranda");
unk={
1271.89f, -1707.57f, 53.79f 
};
unk.f_5=1646172266;
break;
case 77:
unk.f_3=joaat("v_ilev_lester_doorveranda");
unk={
1270.77f, -1708.1f, 53.75f 
};
unk.f_5=204467342;
break;
case 78:
unk.f_3=joaat("v_ilev_deviantfrontdoor");
unk={
-127.5f, -1456.18f, 37.94f 
};
unk.f_5=2047070410;
break;
case 79:
unk.f_3=joaat("prop_com_gar_door_01");
unk={
483.56f, -1316.08f, 32.18f 
};
unk.f_5=1417775309;
break;
case 80:
unk.f_3=joaat("v_ilev_cs_door");
unk={
483f, -1312f, 29f 
};
unk.f_5=-106474626;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 81:
unk.f_3=joaat("prop_strip_door_01");
unk={
128f, -1299f, 29f 
};
unk.f_5=1840510598;
break;
case 82:
unk.f_3=joaat("prop_magenta_door");
unk={
96f, -1285f, 29f 
};
unk.f_5=1382825971;
break;
case 83:
unk.f_3=joaat("prop_motel_door_09");
unk={
549f, -1773f, 34f 
};
unk.f_5=232536303;
break;
case 84:
unk.f_3=joaat("v_ilev_gangsafedoor");
unk={
974f, -1839f, 36f 
};
unk.f_5=1267246609;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 85:
unk.f_3=joaat("v_ilev_gangsafedoor");
unk={
977f, -105f, 75f 
};
unk.f_5=-1900237971;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 86:
unk.f_3=joaat("v_ilev_ra_door1_l");
unk={
1391f, 1163f, 114f 
};
unk.f_5=2077901353;
break;
case 87:
unk.f_3=joaat("v_ilev_ra_door1_r");
unk={
1391f, 1161f, 114f 
};
unk.f_5=-2102079126;
break;
case 88:
unk.f_3=joaat("prop_cs6_03_door_l");
unk={
1396f, 1143f, 115f 
};
unk.f_5=-1905793212;
break;
case 89:
unk.f_3=joaat("prop_cs6_03_door_r");
unk={
1396f, 1141f, 115f 
};
unk.f_5=-1797032505;
break;
case 90:
unk.f_3=joaat("v_ilev_ra_door1_l");
unk={
1409f, 1146f, 114f 
};
unk.f_5=-62235167;
break;
case 91:
unk.f_3=joaat("v_ilev_ra_door1_r");
unk={
1409f, 1148f, 114f 
};
unk.f_5=-1727188163;
break;
case 92:
unk.f_3=joaat("v_ilev_ra_door1_l");
unk={
1408f, 1159f, 114f 
};
unk.f_5=-562748873;
break;
case 93:
unk.f_3=joaat("v_ilev_ra_door1_r");
unk={
1408f, 1161f, 114f 
};
unk.f_5=1976429759;
break;
case 94:
unk.f_3=joaat("prop_gar_door_01");
unk={
-1067f, -1666f, 5f 
};
unk.f_5=1341041543;
break;
case 95:
unk.f_3=joaat("prop_gar_door_02");
unk={
-1065f, -1669f, 5f 
};
unk.f_5=-1631467220;
break;
case 96:
unk.f_3=joaat("prop_map_door_01");
unk={
-1104.66f, -1638.48f, 4.68f 
};
unk.f_5=-1788473129;
break;
case 97:
unk.f_3=joaat("v_ilev_fib_door1");
unk={
-31.72f, -1101.85f, 26.57f 
};
unk.f_5=-1831288286;
break;
case 98:
unk.f_3=joaat("v_ilev_tort_door");
unk={
134.4f, -2204.1f, 7.52f 
};
unk.f_5=963876966;
break;
case 99:
unk.f_3=joaat("v_ilev_bl_shutter2");
unk={
3628f, 3747f, 28f 
};
unk.f_5=1773088812;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 100:
unk.f_3=joaat("v_ilev_bl_shutter2");
unk={
3621f, 3752f, 28f 
};
unk.f_5=-1332101528;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 101:
unk.f_3=joaat("v_ilev_rc_door3_l");
unk={
-608.73f, -1610.32f, 27.16f 
};
unk.f_5=-1811763714;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 102:
unk.f_3=joaat("v_ilev_rc_door3_r");
unk={
-611.32f, -1610.09f, 27.16f 
};
unk.f_5=1608500665;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 103:
unk.f_3=joaat("v_ilev_rc_door3_l");
unk={
-592.94f, -1631.58f, 27.16f 
};
unk.f_5=-1456048340;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 104:
unk.f_3=joaat("v_ilev_rc_door3_r");
unk={
-592.71f, -1628.99f, 27.16f 
};
unk.f_5=943854909;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 105:
unk.f_3=joaat("v_ilev_ss_door04");
unk={
1991f, 3053f, 47f 
};
unk.f_5=-89065356;
break;
case 106:
unk.f_3=joaat("v_ilev_fh_door4");
unk={
1988.3529f, 3054.411f, 47.3204f 
};
unk.f_5=-925491840;
break;
case 107:
unk.f_3=joaat("prop_epsilon_door_l");
unk={
-700.17f, 47.31f, 44.3f 
};
unk.f_5=1999872275;
break;
case 108:
unk.f_3=joaat("prop_epsilon_door_r");
unk={
-697.94f, 48.35f, 44.3f 
};
unk.f_5=1999872275;
break;
case 109:
unk.f_3=joaat("v_ilev_epsstoredoor");
unk={
241.3574f, 361.0488f, 105.8963f 
};
unk.f_5=1538555582;
break;
case 110:
unk.f_3=joaat("prop_ch2_09c_garage_door");
unk={
-689.11f, 506.97f, 110.64f 
};
unk.f_5=-961994186;
break;
case 111:
unk.f_3=joaat("v_ilev_door_orangesolid");
unk={
-1055.96f, -236.43f, 44.17f 
};
unk.f_5=-1772472848;
break;
case 112:
unk.f_3=joaat("prop_magenta_door");
unk={
29f, 3661f, 41f 
};
unk.f_5=-46374650;
break;
case 113:
unk.f_3=joaat("prop_cs4_05_tdoor");
unk={
32f, 3667f, 41f 
};
unk.f_5=-358302761;
break;
case 114:
unk.f_3=joaat("v_ilev_housedoor1");
unk={
87f, -1959f, 21f 
};
unk.f_5=-1237936041;
break;
case 115:
unk.f_3=joaat("v_ilev_fh_frntdoor");
unk={
0f, -1823f, 30f 
};
unk.f_5=1487374207;
break;
case 116:
unk.f_3=joaat("p_cut_door_03");
unk={
23.34f, -1897.6f, 23.05f 
};
unk.f_5=-199126299;
break;
case 117:
unk.f_3=joaat("p_cut_door_02");
unk={
524.2f, 3081.14f, 41.16f 
};
unk.f_5=-897071863;
break;
case 118:
unk.f_3=joaat("v_ilev_po_door");
unk={
-1910.58f, -576.01f, 19.25f 
};
unk.f_5=-864465775;
break;
case 119:
unk.f_3=joaat("prop_ss1_10_door_l");
unk={
-720.39f, 256.86f, 80.29f 
};
unk.f_5=-208439480;
break;
case 120:
unk.f_3=joaat("prop_ss1_10_door_r");
unk={
-718.42f, 257.79f, 80.29f 
};
unk.f_5=-1001088805;
break;
case 121:
unk.f_3=joaat("v_ilev_fibl_door02");
unk={
106.38f, -742.7f, 46.18f 
};
unk.f_5=756894459;
break;
case 122:
unk.f_3=joaat("v_ilev_fibl_door01");
unk={
105.76f, -746.65f, 46.18f 
};
unk.f_5=476981677;
break;
case 123:
unk.f_3=joaat("v_ilev_ct_door01");
unk={
-2343.53f, 3265.37f, 32.96f 
};
unk.f_5=2081647379;
break;
case 124:
unk.f_3=joaat("v_ilev_ct_door01");
unk={
-2342.23f, 3267.62f, 32.96f 
};
unk.f_5=2081647379;
break;
case 125:
unk.f_3=joaat("ap1_02_door_l");
unk={
-1041.9326f, -2748.1675f, 22.0308f 
};
unk.f_5=169965357;
break;
case 126:
unk.f_3=joaat("ap1_02_door_r");
unk={
-1044.8408f, -2746.4888f, 22.0308f 
};
unk.f_5=311232516;
break;
case 128:
unk.f_3=joaat("v_ilev_fb_doorshortl");
unk={
-1045.1199f, -232.004f, 39.4379f 
};
unk.f_5=-1563127729;
break;
case 129:
unk.f_3=joaat("v_ilev_fb_doorshortr");
unk={
-1046.5161f, -229.3581f, 39.4379f 
};
unk.f_5=759145763;
break;
case 130:
unk.f_3=joaat("v_ilev_fb_door01");
unk={
-1083.6201f, -260.4167f, 38.1867f 
};
unk.f_5=-84399179;
break;
case 131:
unk.f_3=joaat("v_ilev_fb_door02");
unk={
-1080.9744f, -259.0204f, 38.1867f 
};
unk.f_5=-461898059;
break;
case 127:
unk.f_3=joaat("v_ilev_gtdoor");
unk={
-1042.57f, -240.6f, 38.11f 
};
unk.f_5=1259065971;
break;
case 132:
unk.f_3=joaat("prop_damdoor_01");
unk={
1385.2578f, -2079.9495f, 52.7638f 
};
unk.f_5=-884051216;
break;
case 133:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
1656.57f, 4849.66f, 42.35f 
};
unk.f_5=243782214;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 134:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
1656.25f, 4852.24f, 42.35f 
};
unk.f_5=714115627;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 135:
unk.f_3=joaat("prop_sec_barrier_ld_01a");
unk={
-1051.4019f, -474.6847f, 36.6199f 
};
unk.f_5=1668106976;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 136:
unk.f_3=joaat("prop_sec_barrier_ld_01a");
unk={
-1049.2853f, -476.6376f, 36.7584f 
};
unk.f_5=1382347031;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 137:
unk.f_3=joaat("prop_sec_barrier_ld_02a");
unk={
-1210.9567f, -580.8765f, 27.2373f 
};
unk.f_5=-966790948;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 138:
unk.f_3=joaat("prop_sec_barrier_ld_02a");
unk={
-1212.4453f, -578.4401f, 27.2373f 
};
unk.f_5=-2068750132;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 139:
unk.f_3=joaat("v_ilev_roc_door4");
unk={
-565.1712f, 276.6259f, 83.2863f 
};
unk.f_5=-1716533184;
break;
case 140:
unk.f_3=joaat("v_ilev_roc_door4");
unk={
-561.2863f, 293.5043f, 87.7771f 
};
unk.f_5=2146505927;
break;
case 141:
unk.f_3=joaat("p_jewel_door_l");
unk={
-631.96f, -236.33f, 38.21f 
};
unk.f_5=1874948872;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 142:
unk.f_3=joaat("p_jewel_door_r1");
unk={
-630.43f, -238.44f, 38.21f 
};
unk.f_5=-1965020851;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 145:
unk.f_3=joaat("prop_ld_bankdoors_01");
unk={
231.62f, 216.23f, 106.4f 
};
unk.f_5=1951546856;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 146:
unk.f_3=joaat("prop_ld_bankdoors_01");
unk={
232.72f, 213.88f, 106.4f 
};
unk.f_5=-431382051;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 143:
unk.f_3=joaat("hei_prop_hei_bankdoor_new");
unk={
258.32f, 203.84f, 106.43f 
};
unk.f_5=-293975210;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 144:
unk.f_3=joaat("hei_prop_hei_bankdoor_new");
unk={
260.76f, 202.95f, 106.43f 
};
unk.f_5=-785215289;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 148:
unk.f_3=joaat("hei_v_ilev_bk_gate_pris");
unk={
256.31f, 220.66f, 106.43f 
};
unk.f_5=-366143778;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 147:
unk.f_3=joaat("v_ilev_bk_door");
unk={
266.36f, 217.57f, 110.43f 
};
unk.f_5=440819155;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 149:
unk.f_3=joaat("v_ilev_shrf2door");
unk={
-442.66f, 6015.2217f, 31.8663f 
};
unk.f_5=-588495243;
break;
case 150:
unk.f_3=joaat("v_ilev_shrf2door");
unk={
-444.4985f, 6017.06f, 31.8663f 
};
unk.f_5=1815504139;
break;
case 151:
unk.f_3=joaat("v_ilev_shrfdoor");
unk={
1855.6848f, 3683.9302f, 34.5928f 
};
unk.f_5=1344911780;
break;
case 152:
unk.f_3=joaat("prop_bhhotel_door_l");
unk={
-1223.35f, -172.41f, 39.98f 
};
unk.f_5=-320891223;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 153:
unk.f_3=joaat("prop_bhhotel_door_r");
unk={
-1220.93f, -173.68f, 39.98f 
};
unk.f_5=1511747875;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 154:
unk.f_3=joaat("prop_bhhotel_door_l");
unk={
-1211.99f, -190.57f, 39.98f 
};
unk.f_5=-1517722103;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 155:
unk.f_3=joaat("prop_bhhotel_door_r");
unk={
-1213.26f, -192.98f, 39.98f 
};
unk.f_5=-1093199712;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 156:
unk.f_3=joaat("prop_bhhotel_door_l");
unk={
-1217.77f, -201.54f, 39.98f 
};
unk.f_5=1902048492;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 157:
unk.f_3=joaat("prop_bhhotel_door_r");
unk={
-1219.04f, -203.95f, 39.98f 
};
unk.f_5=-444768985;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 158:
unk.f_3=joaat("prop_ch3_04_door_01l");
unk={
2514.32f, -317.34f, 93.32f 
};
unk.f_5=404057594;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 159:
unk.f_3=joaat("prop_ch3_04_door_01r");
unk={
2512.42f, -319.26f, 93.32f 
};
unk.f_5=-1417472813;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 160:
unk.f_3=joaat("prop_ch3_01_trlrdoor_l");
unk={
2333.23f, 2574.97f, 47.03f 
};
unk.f_5=-1376084479;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 161:
unk.f_3=joaat("prop_ch3_01_trlrdoor_r");
unk={
2329.65f, 2576.64f, 47.03f 
};
unk.f_5=457472151;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 162:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
16.1279f, -1114.6055f, 29.9469f 
};
unk.f_5=1071759151;
break;
case 163:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
18.572f, -1115.4951f, 29.9469f 
};
unk.f_5=-2119023917;
break;
case 165:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
1698.1763f, 3751.5056f, 34.8553f 
};
unk.f_5=-1488490473;
break;
case 166:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
1699.9371f, 3753.4202f, 34.8553f 
};
unk.f_5=-511187813;
break;
case 167:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
244.7274f, -44.0791f, 70.91f 
};
unk.f_5=-248569395;
break;
case 168:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
243.8379f, -46.5232f, 70.91f 
};
unk.f_5=989443413;
break;
case 169:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
845.3624f, -1024.5391f, 28.3448f 
};
unk.f_5=2022251829;
break;
case 170:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
842.7684f, -1024.5391f, 23.3448f 
};
unk.f_5=649820567;
break;
case 171:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-326.1122f, 6075.2695f, 31.6047f 
};
unk.f_5=537455378;
break;
case 172:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-324.273f, 6077.109f, 31.6047f 
};
unk.f_5=1121431731;
break;
case 173:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-665.2424f, -944.3256f, 21.9792f 
};
unk.f_5=-1437380438;
break;
case 174:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-662.6414f, -944.3256f, 21.9792f 
};
unk.f_5=-946336965;
break;
case 175:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-1313.8259f, -389.1259f, 36.8457f 
};
unk.f_5=1893144650;
break;
case 176:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-1314.465f, -391.6472f, 36.8457f 
};
unk.f_5=435841678;
break;
case 177:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-1114.0089f, 2689.77f, 18.7041f 
};
unk.f_5=948508314;
break;
case 178:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-1112.0708f, 2691.5046f, 18.7041f 
};
unk.f_5=-1796714665;
break;
case 179:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-3164.8452f, 1081.3917f, 20.9887f 
};
unk.f_5=-1155247245;
break;
case 180:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-3163.8115f, 1083.7784f, 20.9887f 
};
unk.f_5=782482084;
break;
case 181:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
2570.9045f, 303.3556f, 108.8848f 
};
unk.f_5=-1194470801;
break;
case 182:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
2568.3037f, 303.3556f, 108.8848f 
};
unk.f_5=-2129698061;
break;
case 183:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
813.1779f, -2148.2695f, 29.7689f 
};
unk.f_5=1071759151;
break;
case 184:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
810.5769f, -2148.2695f, 29.7689f 
};
unk.f_5=-2119023917;
break;
case 164:
unk.f_3=joaat("v_ilev_gc_door01");
unk={
6.8179f, -1098.2095f, 29.9469f 
};
unk.f_5=1487704245;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 185:
unk.f_3=joaat("v_ilev_gc_door01");
unk={
827.5342f, -2160.4927f, 29.7688f 
};
unk.f_5=1529812051;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 186:
unk.f_3=joaat("prop_lrggate_01c_l");
unk={
-1107.01f, 289.38f, 64.76f 
};
unk.f_5=904342475;
break;
case 187:
unk.f_3=joaat("prop_lrggate_01c_r");
unk={
-1101.62f, 290.36f, 64.76f 
};
unk.f_5=-795418380;
break;
case 188:
unk.f_3=joaat("prop_lrggate_01c_l");
unk={
-1138.64f, 300.82f, 67.18f 
};
unk.f_5=-1502457334;
break;
case 189:
unk.f_3=joaat("prop_lrggate_01c_r");
unk={
-1137.05f, 295.59f, 67.18f 
};
unk.f_5=-1994188940;
break;
case 190:
unk.f_3=joaat("v_ilev_bl_doorel_l");
unk={
-2053.16f, 3239.49f, 30.5f 
};
unk.f_5=-621770121;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 191:
unk.f_3=joaat("v_ilev_bl_doorel_r");
unk={
-2054.39f, 3237.23f, 30.5f 
};
unk.f_5=1018580481;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 192:
unk.f_3=joaat("v_ilev_cbankcountdoor01");
unk={
-108.91f, 6469.11f, 31.91f 
};
unk.f_5=421926217;
break;
case 193:
unk.f_3=joaat("prop_fnclink_03gate5");
unk={
-182.91f, 6168.37f, 32.14f 
};
unk.f_5=-1331552374;
MISC::SET_BIT(&(unk.f_4), 2);
break;
}
switch (iParam0){
case 196:
unk.f_3=joaat("v_ilev_csr_door_l");
unk={
-59.89f, -1092.95f, 26.88f 
};
unk.f_5=-293141277;
break;
case 197:
unk.f_3=joaat("v_ilev_csr_door_r");
unk={
-60.55f, -1094.75f, 26.89f 
};
unk.f_5=506750037;
break;
case 194:
unk.f_3=joaat("v_ilev_csr_door_l");
unk={
-39.13f, -1108.22f, 26.72f 
};
unk.f_5=1496005418;
break;
case 195:
unk.f_3=joaat("v_ilev_csr_door_r");
unk={
-37.33f, -1108.87f, 26.72f 
};
unk.f_5=-1863079210;
break;
case 198:
unk.f_3=joaat("prop_ron_door_01");
unk={
1943.73f, 3803.63f, 32.31f 
};
unk.f_5=-2018911784;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 199:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
316.39f, -276.49f, 54.52f 
};
unk.f_5=-93934272;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 200:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
313.96f, -275.6f, 54.52f 
};
unk.f_5=667682830;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 201:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
-2965.71f, 484.22f, 16.05f 
};
unk.f_5=1876735830;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 202:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
-2965.82f, 481.63f, 16.05f 
};
unk.f_5=-2112857171;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 205:
unk.f_3=joaat("v_ilev_abbmaindoor");
unk={
962.1f, -2183.83f, 31.06f 
};
unk.f_5=2046930518;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 206:
unk.f_3=joaat("v_ilev_abbmaindoor2");
unk={
961.79f, -2187.08f, 31.06f 
};
unk.f_5=1208502884;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 207:
unk.f_3=joaat("prop_ch3_04_door_02");
unk={
2508.43f, -336.63f, 115.76f 
};
unk.f_5=1986432421;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 208:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2255.19f, 322.26f, 184.93f 
};
unk.f_5=-722798986;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 209:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2254.06f, 319.7f, 184.93f 
};
unk.f_5=204301578;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 210:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2301.13f, 336.91f, 184.93f 
};
unk.f_5=-320140460;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 211:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2298.57f, 338.05f, 184.93f 
};
unk.f_5=65222916;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 212:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2222.32f, 305.86f, 184.93f 
};
unk.f_5=-920027322;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 213:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2221.19f, 303.3f, 184.93f 
};
unk.f_5=-58432001;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 214:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2280.6f, 265.43f, 184.93f 
};
unk.f_5=-2007378629;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 215:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2278.04f, 266.57f, 184.93f 
};
unk.f_5=418772613;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 216:
unk.f_3=joaat("prop_gar_door_04");
unk={
778.31f, -1867.49f, 30.66f 
};
unk.f_5=1679064921;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 217:
unk.f_3=joaat("prop_gate_tep_01_l");
unk={
-721.35f, 91.01f, 56.68f 
};
unk.f_5=412198396;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 218:
unk.f_3=joaat("prop_gate_tep_01_r");
unk={
-728.84f, 88.64f, 56.68f 
};
unk.f_5=-1053755588;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 219:
unk.f_3=joaat("prop_artgallery_02_dr");
unk={
-2287.62f, 363.9f, 174.93f 
};
unk.f_5=-53446139;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 220:
unk.f_3=joaat("prop_artgallery_02_dl");
unk={
-2289.78f, 362.91f, 174.93f 
};
unk.f_5=1333960556;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 221:
unk.f_3=joaat("prop_artgallery_02_dr");
unk={
-2289.86f, 362.88f, 174.93f 
};
unk.f_5=-41786493;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 222:
unk.f_3=joaat("prop_artgallery_02_dl");
unk={
-2292.01f, 361.89f, 174.93f 
};
unk.f_5=1750120734;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 223:
unk.f_3=joaat("prop_fnclink_07gate1");
unk={
1803.94f, 3929.01f, 33.72f 
};
unk.f_5=1661506222;
break;
case 203:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
-348.81f, -47.26f, 49.39f 
};
unk.f_5=-2116116146;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 204:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
-351.26f, -46.41f, 49.39f 
};
unk.f_5=-74083138;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 224:
unk.f_3=joaat("prop_abat_slide");
unk={
962.9084f, -2105.8137f, 34.6432f 
};
unk.f_5=-1670085357;
break;
}
return unk;
}
BOOL func_68() // Position - 0x5DE0{
if(func_70()==-1 || func_70()==999 && !func_69()==0) return true;
return false;
}

int func_69() // Position - 0x5E10{
return Global_32164;
}

int func_70() // Position - 0x5E1B{
return Global_32163;
}


void func_71(int iParam0) // Position - 0x5E26{
if(iParam0==2){}else{
iParam0==0;
}
iLocal_106=iParam0;
iLocal_104=0;
iLocal_95=7;
return;
}

int func_72() // Position - 0x5E47{
Vector3 vector;
float num;
float num2;
int i;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
vector={
uLocal_90 
};
num=999999f;
i=1;
for (i=0;
i < func_74() + 1;
i=i + 1){
if(i > 0){
num2=SYSTEM::VDIST2(vector, func_73(i));
if(num > num2) num=num2;
}}}
return 67;
}


Vector3 func__73(int iParam0) // Position - 0x5EA8{
switch (iParam0){
case 1:
return -572.041f, 294.196f, 79.9374f;
case 2:
return 1992.27f, 3050.6f, 47.89f;
default:
}
return 0f, 0f, 0f;
}

int func_74() // Position - 0x5EEA{
return 1;
}
BOOL func_75(int iParam0, BOOL bParam1) // Position - 0x5EF3{
int num;
num=func_76(iParam0);
if(num==-1) return false;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) return false;
if(func_82(0)) return false;
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

int func_76(int iParam0) // Position - 0x5FAB{
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


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x5FE6{
int num;
if(*uParam0==-1) return;
num=func_76(*uParam0);
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


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x603D{
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
BOOL func_79(var uParam0) // Position - 0x6168{
return true;
}
BOOL func_80(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, Object obParam7) // Position - 0x6171{
int entityHit;
var endCoords;
var surfaceNormal;
uParam0->f_12=0;
entityHit=0;
switch (*uParam0){
case 0:
uParam0->f_2=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 19, obParam7, 7);
*uParam0=1;
break;
case 1:
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &endCoords, &surfaceNormal, &entityHit)==2){
if(uParam0->f_9==0){
*uParam0=3;
return true;
}else{
uParam0->f_12=1;
*uParam0=0;
return false;
}}elseif(SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &endCoords, &surfaceNormal, &entityHit)==0){
*uParam0=3;
}
break;
case 3:
*uParam0=0;
break;
}
return false;
}
BOOL func_81() // Position - 0x6215{
return Global_75693;
}
BOOL func_82(int iParam0) // Position - 0x6221{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_83(int iParam0, int iParam1) // Position - 0x6278{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}
BOOL func_84() // Position - 0x62B0{
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}
BOOL func_85() // Position - 0x62C5{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}
BOOL func_86(BOOL bParam0) // Position - 0x62DF{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}


void func_87(var uParam0, int iParam1) // Position - 0x6308{
func_88(uParam0, iParam1);
return;
}


void func_88(var uParam0, int iParam1) // Position - 0x6318{
*uParam0=*uParam0 || iParam1;
return;
}
BOOL func_89() // Position - 0x6329{
if(func_103(6) || func_103(7))if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) return func_102(67);
return true;
}
BOOL func_90() // Position - 0x635B{
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
BOOL func_91(int iParam0) // Position - 0x6465{
eCharacter character;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
character=_GET_CURRENT_PLAYER_CHARACTER();
if(!func_46(character)) return false;
switch (iParam0){
case 9:
case 0:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_98() || Global_112695 || Global_32166 || func_97() || func_83(8, -1) || func_96() || func_95() || func_94() || func_85() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 1:
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_98() || Global_32166 || func_97() || func_83(8, -1) || func_94() || func_96() || func_95() || func_85() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 2:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_98() || Global_112695 || Global_32166 || func_97() || func_83(8, -1) || func_94() || func_96() || func_95() || func_85() || Global_113648.f_7690.f_919[character]==5 || Global_43804 !=-1) return false;
break;
case 3:
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_98() || Global_112695 || Global_32166 || func_97() || func_83(8, -1) || func_96() || func_95() || func_85() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 4:
if(func_98() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_83(8, -1) || func_85() || func_93() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 5:
if(func_83(8, -1) || func_96() || func_95() || func_93() || func_92()) return false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8) return false;
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_98() || Global_32166 || func_97() || func_83(8, -1) || func_95() || func_94() || func_85() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 7:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_98() || func_95() || Global_112695 || Global_32166 || func_97() || Global_44446 || func_83(8, -1) || func_94() || func_93() || func_85() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 8:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_98() || Global_112695 || Global_32166 || func_97() || func_83(8, -1) || func_94() || func_93() || func_96() || func_95() || func_85()) return false;
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
BOOL func_92() // Position - 0x6B82{
return Global_100720.f_1;
}
BOOL func_93() // Position - 0x6B90{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
return false;
}
BOOL func_94() // Position - 0x6BB3{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}
BOOL func_95() // Position - 0x6BDD{
return Global_100733.f_388 > 0;
}
BOOL func_96() // Position - 0x6BEE{
return Global_100733.f_387 > 0;
}
BOOL func_97() // Position - 0x6BFF{
return Global_1575060;
}
BOOL func_98() // Position - 0x6C0B{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}
BOOL func_99() // Position - 0x6C27{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0) return true;
return false;
}
Entity func_100() // Position - 0x6C41{
return Global_96513;
}
BOOL func_101(int iParam0) // Position - 0x6C4D{
switch (iParam0){
case 0:
return true;
case 1:
if(func_103(6) || func_103(7)) return true;
else return func_101(3);
break;
case 2:
return true;
case 3:
if(_CAN_ENTER_FREEROAM_STATE(5))if(func_91(4)) return true;
break;
}
return false;
}
BOOL func_102(int iParam0) // Position - 0x6CBF{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
return HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19);
}
BOOL func_103(int iParam0) // Position - 0x6CFB{
return Global_43257==iParam0;
}


void func_104() // Position - 0x6D09{
Vector3 vector;
Vector3 entityCoords;
float num;
var unk5;
var unk8;
var unk11;
var unk14;
float num2;
float num3;
float num4;
float num5;
Interior interiorAtCoords;
if(bLocal_146){
vector={
func_73(iLocal_148) 
};
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
num=SYSTEM::VDIST2(entityCoords, vector);
if(num > 45f || Global_113610 && !ENTITY::DOES_ENTITY_EXIST(pedLocal_143)){
if(Global_113610) Global_113610=false;
unk5={
-573.1373f, 294.0269f, 78.1765f 
};
unk8={
-574.1169f, 292.7964f, 78.1766f 
};
unk11={
1995.6138f, 3049.8774f, 46.2153f 
};
unk14={
1995.488f, 3047.3833f, 46.2153f 
};
num2=172.6813f;
num3=274.5094f;
num4=142.6717f;
num5=44.8785f;
interiorAtCoords=INTERIOR::GET_INTERIOR_AT_COORDS(func_73(iLocal_148));
if(INTERIOR::IS_VALID_INTERIOR(interiorAtCoords)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(interiorAtCoords);
while (!INTERIOR::IS_INTERIOR_READY(interiorAtCoords)){
SYSTEM::WAIT(0);
}
INTERIOR::UNPIN_INTERIOR(interiorAtCoords);
}
pedLocal_143=PED::CREATE_PED(PED_TYPE_MISSION, hLocal_141, func_106(iLocal_148==1, unk5, unk11), iLocal_148==1 ? num2 :
num4, true, true);
pedLocal_144=PED::CREATE_PED(PED_TYPE_MISSION, hLocal_142, func_106(iLocal_148==1, unk8, unk14), iLocal_148==1 ? num3 :
num5, true, true);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_143, true, false);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_144, true, false);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_143, true);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_144, true);
bLocal_160=true;
MISC::CLEAR_BIT(&Global_113609, 10);
iLocal_147=-1;
if(num < 20f * 20f){
iLocal_147=1;
TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_144, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
}else{
iLocal_147=0;
TASK::TASK_STAND_STILL(pedLocal_143, -1);
ENTITY::FREEZE_ENTITY_POSITION(pedLocal_143, true);
TASK::TASK_STAND_STILL(pedLocal_144, -1);
ENTITY::FREEZE_ENTITY_POSITION(pedLocal_144, true);
}
iLocal_145=1;
}else{
if(num <=45f){
}else{
ENTITY::DOES_ENTITY_EXIST(pedLocal_143);
}
iLocal_145=0;
}}else{
iLocal_145=0;
}
return;
}


var func__105(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6EF3{
if(bParam0) return uParam1;
return uParam2;
}


Vector3 func__106(BOOL bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x6F0A{
if(bParam0) return uParam1;
return uParam4;
}
BOOL func_107() // Position - 0x6F25{
if(bLocal_146) return STREAMING::HAS_MODEL_LOADED(hLocal_141) && STREAMING::HAS_MODEL_LOADED(hLocal_142) && STREAMING::HAS_MODEL_LOADED(joaat("prop_dart_1"));
return true;
}


void func_108() // Position - 0x6F55{
int num;
if(bLocal_146){
num=func_72();
switch (num){
case 66:
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3)){
case 0:
hLocal_141=joaat("A_M_Y_Vinewood_01");
break;
case 1:
hLocal_141=joaat("A_M_Y_StLat_01");
break;
case 2:
hLocal_141=joaat("A_M_Y_Vinewood_04");
break;
}
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
hLocal_142=joaat("A_M_Y_StWhi_02");
break;
case 1:
hLocal_142=joaat("A_M_Y_Vinewood_03");
break;
}
iLocal_148=1;
break;
case 67:
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
hLocal_141=joaat("A_F_M_Salton_01");
hLocal_142=joaat("A_F_O_Salton_01");
break;
case 1:
hLocal_141=joaat("A_F_O_Salton_01");
hLocal_142=joaat("A_F_M_Salton_01");
break;
}
iLocal_148=2;
break;
}
STREAMING::REQUEST_MODEL(hLocal_141);
STREAMING::REQUEST_MODEL(hLocal_142);
STREAMING::REQUEST_MODEL(joaat("prop_dart_1"));
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_143)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_143, true, false);
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_144)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_144, true, false);
}
return;
}


void func_109(var uParam0, int iParam1) // Position - 0x705D{
*uParam0=*uParam0 || iParam1;
return;
}


void func_110(int iParam0) // Position - 0x706E{
iLocal_95=iParam0;
return;
}


void func_111(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x707A{
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
BOOL func_112() // Position - 0x717A{
if(MISC::IS_PC_VERSION())if(MISC::GET_CITY_DENSITY()==1f) return true;
return false;
}
BOOL func_113() // Position - 0x7197{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
return false;
}
BOOL func_114(int iParam0, int iParam1) // Position - 0x71BA{
BOOL flag;
if(iParam0==11 || iParam0==-1) return false;
if(iParam1 < 0 || iParam1 >=32) return false;
flag=IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return flag;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x7204{
return func_116(iParam0, Global_43257);
}
BOOL func_116(int iParam0, int iParam1) // Position - 0x7215{
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
BOOL func_117(int iParam0, int iParam1) // Position - 0x73F6{
return iParam0 && iParam1 !=false;
}


void func_118() // Position - 0x7405{
BOOL flag;
TEXT_LABEL_ASSIGN_STRING(&uLocal_53, "Darts", 64);
sLocal_101="PLAY_DARTS" /*Press ~INPUT_CONTEXT~ to play darts.*/;
iLocal_99=1;
fLocal_117=2.5f;
uLocal_134={
0f, -0.5f, 0f 
};
iLocal_105=67;
flag=false;
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_73(2), 100f, 100f, 100f, false, false, 0)) flag=true;
if(!flag) func_71(0);
if(func_103(6) || func_103(7)) iLocal_103=0;
inLocal_140=INTERIOR::GET_INTERIOR_AT_COORDS(uLocal_90);
func_109(&iLocal_94, 1);
func_87(&iLocal_94, 524288);
essLocal_97=54000;
return;
}


void func_119(int iParam0, int iParam1) // Position - 0x749C{
func_120(iParam0, iParam1);
return;
}


void func_120(var uParam0, int iParam1) // Position - 0x74AC{
*uParam0=*uParam0 - *uParam0 && iParam1;
return;
}


void func_121(BOOL bParam0) // Position - 0x74C1{
if(bParam0)if(iLocal_105 !=263) func_111(iLocal_105, 0, false);
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(func_117(iLocal_94, 2)){
func_4();
func_119(&iLocal_94, 2);
func_6(&iLocal_98);
}
iLocal_98=-1;
func_122();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_122() // Position - 0x750A{
func_119(&iLocal_94, 4);
func_123();
if(SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_52, 3);
if(!MISC::IS_STRING_NULL(&uLocal_69))if(HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_69) !=0) SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_69);
return;
}


void func_123() // Position - 0x7547{
if(bLocal_159) func_124(func_72());
return;
}


void func_124(int iParam0) // Position - 0x755C{
if(iParam0 !=263) func_111(iParam0, true, false);
return;
}