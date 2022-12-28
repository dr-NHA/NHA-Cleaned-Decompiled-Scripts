//Cleaned With dr NHA's C Script Cleaner V2.72
#region Local Var
int iLocal_0=0;
var uLocal_1=0;
var uLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
int iLocal_12=0;
var uLocal_13=0;
var uLocal_14=0;
float fLocal_15=0f;
var uLocal_16=0;
var uLocal_17=0;
int iLocal_18=0;
char* sLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
var uLocal_35=0;
var uLocal_36=0;
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
var uLocal_62=0;
float fLocal_63=0f;
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
var uLocal_81=6;
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
var uLocal_107=9;
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
var uLocal_134=0;
var uLocal_135=9;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
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
var uLocal_153=0;
int iLocal_154=0;
int iLocal_155=0;
Vehicle veLocal_156=0;
Ped pedLocal_157=0;
int iLocal_158=0;
BOOL bLocal_159=0;
float fLocal_160=0f;
#endregion

void main() // Position - 0x0{
iLocal_0=3;
iLocal_3=1;
iLocal_4=134;
iLocal_5=134;
iLocal_6=1;
iLocal_7=1;
iLocal_8=1;
iLocal_9=134;
iLocal_10=1;
iLocal_11=12;
iLocal_12=12;
fLocal_15=0.001f;
iLocal_18=-1;
sLocal_19="NULL";
fLocal_24=80f;
fLocal_25=140f;
fLocal_26=180f;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
uLocal_60={
-1124.3922f, -514.70013f, 33.21493f 
};
fLocal_63=200f;
uLocal_64={
2490f, 3777f, 2402.879f 
};
uLocal_67={
-2052f, 3237f, 1450.078f 
};
bLocal_159=true;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18)) func_62(true);
iLocal_155=2;
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))if(SYSTEM::VDIST2(func_60(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 40000f)if(CAM::IS_SCREEN_FADED_IN())if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) Global_113648.f_25075.f_8=1;
MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
while (true){
if(!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())) return;
func_56();
switch (iLocal_154){
case 0:
func_23();
break;
case 1:
func_13();
break;
case 2:
func_11();
break;
case 3:
func_1();
break;
}
SYSTEM::WAIT(0);
}
return;
}


void func_1() // Position - 0x165{
if(func_10()){
func_8();
func_6(Global_113648.f_25075);
}
Global_113648.f_25075.f_8=1;
func_5(65, 0, false);
func_4();
func_2();
iLocal_154=0;
return;
}

int func_2() // Position - 0x1A1{
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(Global_100720.f_8)if(Global_100720.f_10 > 0) return 0;
elseif(Global_100720.f_10 > 1) return 0;
Global_100720.f_10=Global_100720.f_10 + 1;
return 1;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1EC{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


void func_4() // Position - 0x214{
Global_113645=false;
return;
}


void func_5(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x221{
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


void func_6(int iParam0) // Position - 0x321{
func_7(iParam0);
switch (iParam0){
case 0:
Global_113648.f_25075=1;
Global_113648.f_25075.f_3=1;
break;
case 1:
Global_113648.f_25075=2;
Global_113648.f_25075.f_4=1;
break;
case 2:
Global_113648.f_25075=3;
Global_113648.f_25075.f_5=1;
break;
case 3:
Global_113648.f_25075=4;
Global_113648.f_25075.f_6=1;
break;
case 4:
Global_113648.f_25075=0;
Global_113648.f_25075.f_7=1;
break;
}
return;
}


void func_7(int iParam0) // Position - 0x3BD{
int outValue;
outValue=0;
STATS::STAT_GET_INT(joaat("NUM_STOCK_RACES_COMPLETED"), &outValue, -1);
if(outValue < iParam0 + 1) STATS::STAT_SET_INT(joaat("NUM_STOCK_RACES_COMPLETED"), iParam0 + 1, true);
return;
}


void func_8() // Position - 0x3ED{
var unk;
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
TEXT_LABEL_ASSIGN_STRING(&unk, "CRACEWIN", 16);
TEXT_LABEL_APPEND_INT(&unk, Global_113648.f_25075 + 1, 16);
_DISPLAY_HELP_TEXT(&unk, -1);
return;
}


void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x414{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
return;
}
BOOL func_10() // Position - 0x42B{
return Global_113645;
}


void func_11() // Position - 0x437{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race"))==0){
func_12(&Global_113646);
Global_113646=-1;
iLocal_155=2;
iLocal_154=3;
}
return;
}


void func_12(int iParam0) // Position - 0x45F{
if(*iParam0==-1) return;
if(!*iParam0==Global_43219){
*iParam0=-1;
return;
}
*iParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
return;
}


void func_13() // Position - 0x49C{
HUD::HIDE_HELP_TEXT_THIS_FRAME();
func_22();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
SCRIPT::REQUEST_SCRIPT("Country_Race");
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
MISC::CLEAR_AREA_OF_PROJECTILES(func_60(), 20f, 0);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race"))==0){
if(SCRIPT::HAS_SCRIPT_LOADED("Country_Race")){
if(iLocal_155==2){
iLocal_155=func_17(&Global_113646, 2, 9, false, 0);
}elseif(iLocal_155==1){
func_15(&pedLocal_157, false);
func_14(&veLocal_156, false);
SYSTEM::START_NEW_SCRIPT("Country_Race", MULTIPLAYER_MISSION);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Country_Race");
iLocal_154=2;
}elseif(iLocal_155==0){
func_62(false);
}}}
return;
}


void func_14(Vehicle* pveParam0, BOOL bParam1) // Position - 0x537{
if(ENTITY::DOES_ENTITY_EXIST(*pveParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*pveParam0, false)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*pveParam0)) VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*pveParam0);
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*pveParam0, -8f, true);
if(ENTITY::IS_ENTITY_ATTACHED(*pveParam0)) ENTITY::DETACH_ENTITY(*pveParam0, true, true);
}
if(bParam1) VEHICLE::DELETE_VEHICLE(pveParam0);
else ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
}
return;
}


void func_15(Ped* ppedParam0, BOOL bParam1) // Position - 0x59B{
if(ENTITY::DOES_ENTITY_EXIST(*ppedParam0)){
if(!PED::IS_PED_INJURED(*ppedParam0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(*ppedParam0, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*ppedParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*ppedParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*ppedParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*ppedParam0)) ENTITY::DETACH_ENTITY(*ppedParam0, true, true);
ENTITY::FREEZE_ENTITY_POSITION(*ppedParam0, false);
}
if(!PED::IS_PED_IN_ANY_VEHICLE(*ppedParam0, false)) ENTITY::SET_ENTITY_COLLISION(*ppedParam0, true, false);
if(PED::IS_PED_GROUP_MEMBER(*ppedParam0, func_16())) PED::REMOVE_PED_FROM_GROUP(*ppedParam0);
if(!bParam1) PED::SET_PED_KEEP_TASK(*ppedParam0, true);
}
if(bParam1) PED::DELETE_PED(ppedParam0);
else ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
}
return;
}

int func_16() // Position - 0x652{
return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_17(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x662{
int i;
if(iParam1==7) return 0;
if(!bParam3)if(Global_98159.f_44==1) return 2;
if(iParam1==0){
if(func_21(0)) return 0;
Global_43221=Global_43221 + 1;
*iParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
Global_23131.f_5=0;
if(iParam2 !=5) PLAYER::FORCE_CLEANUP(8);
Global_43257=iParam2;
Global_43219=*iParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*iParam0 !=-1){
if(Global_43218 > 0){
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*iParam0) return 2;
}}elseif(Global_43219==*iParam0){
return 1;
}
*iParam0=-1;
}
if(*iParam0==-1){
if(!_CAN_ENTER_FREEROAM_STATE(iParam2)) return 0;
if(Global_43218==8) return 0;
Global_43221=Global_43221 + 1;
*iParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218=Global_43218 + 1;
if(iParam4 !=0) func_18(iParam0, iParam4);
}
return 2;
}


void func_18(int iParam0, int iParam1) // Position - 0x799{
int i;
if(Global_43218==0) return;
if(*iParam0==-1) return;
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*iParam0) Global_43224[i /*4*/].f_3=iParam1;
}
*iParam0=-1;
return;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x7E8{
return func_20(iParam0, Global_43257);
}
BOOL func_20(int iParam0, int iParam1) // Position - 0x7F9{
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
BOOL func_21(int iParam0) // Position - 0x9DA{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}


void func_22() // Position - 0x9FC{
Global_23131.f_6=1;
return;
}


void func_23() // Position - 0xA0A{
if(func_43()){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_60(), 5f, 5f, 5f, true, true, 0)){
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
PED::SET_IK_TARGET(pedLocal_157, 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 150, 400);
if(func_41()){
if(func_38()){
func_35();
func_33();
func_32();
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_31(true) && !func_30(0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
MISC::CLEAR_AREA_OF_PROJECTILES(func_60(), 20f, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
HUD::HIDE_HELP_TEXT_THIS_FRAME();
iLocal_154=1;
}}}else{
func_28();
func_27();
}}else{
func_24();
func_27();
}}else{
func_24();
func_27();
}}else{
func_24();
func_27();
}
return;
}


void func_24() // Position - 0xB06{
var unk;
unk={
func_26() 
};
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CRACECAR")) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xB3E{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


struct<4> func_26() // Position - 0xB51{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "CRACEHELP", 16);
TEXT_LABEL_APPEND_INT(&unk, Global_113648.f_25075 + 1, 16);
return unk;
}


void func_27() // Position - 0xB71{
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()) CAM::STOP_GAMEPLAY_HINT(false);
bLocal_159=true;
return;
}


void func_28() // Position - 0xB88{
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3)){
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CRACECAR") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_29("CRACECAR", true, true, -1);
}}
return;
}


void func_29(char* sParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xBC5{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, bParam1, bParam2, iParam3);
return;
}
BOOL func_30(int iParam0) // Position - 0xBDE{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_31(BOOL bParam0) // Position - 0xC35{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}


void func_32() // Position - 0xC5E{
var unk;
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3)){
unk={
func_26() 
};
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_29(&unk, true, true, -1);
}}
return;
}


void func_33() // Position - 0xCA1{
if(CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() !=CINEMATIC && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() !=FIRST_PERSON && !CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND() && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && func_34(pedLocal_157) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f){
if(bLocal_159){
if(!CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::SET_GAMEPLAY_ENTITY_HINT(pedLocal_157, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
bLocal_159=false;
}}}else{
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()) CAM::STOP_GAMEPLAY_HINT(false);
bLocal_159=true;
}
return;
}
BOOL func_34(Ped pedParam0) // Position - 0xD28{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))if(!PED::IS_PED_INJURED(pedParam0)) return true;
return false;
}


void func_35() // Position - 0xD48{
if(MISC::GET_GAME_TIMER() > iLocal_158 + 5000){
func_36(pedLocal_157, "PRERACE_CHAT", 11);
iLocal_158=MISC::GET_GAME_TIMER();
}
return;
}


void func_36(Ped pedParam0, char* sParam1, int iParam2) // Position - 0xD6D{
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_37(iParam2), 1);
return;
}


char* func_37(int iParam0) // Position - 0xD84{
char* str;
switch (iParam0){
case 0:
return "SPEECH_PARAMS_STANDARD";
case 1:
return "SPEECH_PARAMS_ALLOW_REPEAT";
case 2:
return "SPEECH_PARAMS_BEAT";
case 3:
return "SPEECH_PARAMS_FORCE";
case 4:
return "SPEECH_PARAMS_FORCE_FRONTEND";
case 5:
return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
case 6:
return "SPEECH_PARAMS_FORCE_NORMAL";
case 7:
return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
case 8:
return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
case 9:
return "SPEECH_PARAMS_FORCE_SHOUTED";
case 10:
return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
case 11:
return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
case 12:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
case 13:
return "SPEECH_PARAMS_MEGAPHONE";
case 14:
return "SPEECH_PARAMS_HELI";
case 15:
return "SPEECH_PARAMS_FORCE_MEGAPHONE";
case 16:
return "SPEECH_PARAMS_FORCE_HELI";
case 17:
return "SPEECH_PARAMS_INTERRUPT";
case 18:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
case 19:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
case 20:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
case 21:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
case 22:
return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
case 23:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
case 24:
return "SPEECH_PARAMS_ADD_BLIP";
case 25:
return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
case 26:
return "SPEECH_PARAMS_ADD_BLIP_FORCE";
case 27:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
case 28:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
case 29:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
case 30:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
case 31:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
case 32:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
case 33:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
case 34:
return "SPEECH_PARAMS_SHOUTED";
case 35:
return "SPEECH_PARAMS_SHOUTED_CLEAR";
case 36:
return "SPEECH_PARAMS_SHOUTED_CRITICAL";
default:
}
str=0;
return str;
}
BOOL func_38() // Position - 0xF73{
Hash entityModel;
int i;
int num;
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(func_40(PLAYER::GET_PLAYERS_LAST_VEHICLE())){
entityModel=ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
if(func_39(entityModel)) return false;
if(entityModel==joaat("police4") || entityModel==joaat("policeold1") || entityModel==joaat("policeold2") || entityModel==joaat("fbi") || entityModel==joaat("fbi2") || entityModel==joaat("lguard") || entityModel==joaat("sheriff") || entityModel==joaat("sheriff2")) return false;
if(VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel) || VEHICLE::IS_THIS_MODEL_A_BOAT(entityModel) || VEHICLE::IS_THIS_MODEL_A_HELI(entityModel) || VEHICLE::IS_THIS_MODEL_A_PLANE(entityModel)) return false;
num=91;
num[0]=joaat("ambulance");
num[1]=joaat("benson");
num[2]=joaat("biff");
num[3]=joaat("bus");
num[4]=joaat("firetruk");
num[5]=joaat("forklift");
num[6]=joaat("mule");
num[7]=joaat("mule2");
num[8]=joaat("packer");
num[9]=joaat("phantom");
num[10]=joaat("mower");
num[11]=joaat("stockade");
num[12]=joaat("squalo");
num[13]=joaat("maverick");
num[14]=joaat("polmav");
num[15]=joaat("airtug");
num[16]=joaat("pranger");
num[17]=joaat("annihilator");
num[18]=joaat("dinghy");
num[19]=joaat("police");
num[20]=joaat("ripley");
num[21]=joaat("trash");
num[22]=joaat("burrito");
num[23]=joaat("pony");
num[24]=joaat("speedo");
num[25]=joaat("marquis");
num[26]=joaat("sanchez");
num[27]=joaat("airtug");
num[28]=joaat("taco");
num[29]=joaat("barracks");
num[30]=joaat("romero");
num[31]=joaat("blazer");
num[32]=joaat("blazer2");
num[33]=joaat("bodhi2");
num[34]=joaat("boxville2");
num[35]=joaat("bulldozer");
num[36]=joaat("caddy");
num[37]=joaat("caddy2");
num[38]=joaat("camper");
num[39]=joaat("tiptruck");
num[40]=joaat("tourbus");
num[41]=joaat("towtruck");
num[42]=joaat("towtruck2");
num[43]=joaat("tractor");
num[44]=joaat("tractor2");
num[45]=joaat("utillitruck");
num[46]=joaat("utillitruck2");
num[47]=joaat("utillitruck3");
num[48]=joaat("ratloader");
num[49]=joaat("dloader");
num[50]=joaat("docktug");
num[51]=joaat("dump");
num[52]=joaat("gburrito");
num[53]=joaat("handler");
num[54]=joaat("hauler");
num[55]=joaat("journey");
num[56]=joaat("rentalbus");
num[57]=joaat("mixer");
num[58]=joaat("rhino");
num[59]=joaat("cutter");
num[60]=joaat("pounder");
num[61]=joaat("tiptruck2");
num[62]=joaat("mixer2");
num[63]=joaat("rubble");
num[64]=joaat("scrap");
num[65]=joaat("armytanker");
num[66]=joaat("barracks2");
num[67]=joaat("airbus");
num[68]=joaat("coach");
num[69]=joaat("pbus");
num[70]=joaat("riot");
num[71]=joaat("boxville3");
num[72]=joaat("stockade3");
num[73]=joaat("flatbed");
num[74]=joaat("boxville");
num[75]=joaat("burrito2");
num[76]=joaat("burrito3");
num[77]=joaat("burrito4");
num[78]=joaat("rumpo");
num[79]=joaat("speedo2");
num[80]=joaat("blimp");
num[81]=joaat("blimp2");
num[82]=joaat("submersible");
num[83]=joaat("submersible2");
num[84]=joaat("blazer3");
num[85]=joaat("pony2");
num[86]=joaat("rumpo2");
num[87]=joaat("taxi");
num[88]=MISC::GET_HASH_KEY("RATLOADER2");
num[89]=MISC::GET_HASH_KEY("SLAMVAN");
num[90]=0;
for (i=0;
i < num;
i=i + 1){
if(entityModel==num[i]) return false;
}
return true;
}}
return false;
}
BOOL func_39(Hash hParam0) // Position - 0x145A{
switch (hParam0){
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("polmav"):
case joaat("policeb"):
case joaat("policet"):
case joaat("policeold2"):
case joaat("policeold1"):
case joaat("sheriff"):
case joaat("sheriff2"):
return true;
}
return false;
}
BOOL func_40(Vehicle veParam0) // Position - 0x14B3{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(!FILES::GET_DLC_VEHICLE_FLAGS(veParam0)) return true;
return false;
}
BOOL func_41() // Position - 0x14DD{
Vehicle vehiclePedIsIn;
if(func_42()) return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) !=0) return false;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehiclePedIsIn, false, true)==0) return true;
}else{
return false;
}
return true;
}
BOOL func_42() // Position - 0x1530{
Vehicle vehiclePedIsIn;
if(Global_32315){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))if(!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false))) return true;
}}
return false;
}
BOOL func_43() // Position - 0x1574{
if(!Global_113648.f_25075.f_9 && !Global_113648.f_25075.f_8 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_60()) < 84100f){
Global_113648.f_25075.f_9=func_54();
func_51();
if(!Global_113648.f_25075.f_9){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_157) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_156)){
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) <=0) HUD::REQUEST_ADDITIONAL_TEXT("C_RACE", 3);
return true;
}else{
func_44(false);
}}}else{
if(SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_60()) > 90000f){
func_15(&pedLocal_157, true);
func_14(&veLocal_156, true);
if(Global_113648.f_25075.f_9) Global_113648.f_25075.f_9=0;
if(Global_113648.f_25075.f_8) Global_113648.f_25075.f_8=0;
}
if(Global_113648.f_25075.f_9){
func_15(&pedLocal_157, false);
func_14(&veLocal_156, false);
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_60(), 5f, 5f, 5f, true, true, 0)){
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3)){
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CRACEDISRUPT") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_29("CRACEDISRUPT", true, true, -1);
}}}elseif(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CRACEDISRUPT")){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
}}elseif(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CRACEDISRUPT")){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
}}
return false;
}


void func_44(BOOL bParam0) // Position - 0x1714{
if(!ENTITY::DOES_ENTITY_EXIST(veLocal_156) && !ENTITY::DOES_ENTITY_EXIST(pedLocal_157)){
STREAMING::REQUEST_MODEL(func_50());
STREAMING::REQUEST_MODEL(joaat("A_M_Y_MotoX_02"));
if(bParam0){
while (!STREAMING::HAS_MODEL_LOADED(func_50())){
SYSTEM::WAIT(0);
}
while (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_MotoX_02"))){
SYSTEM::WAIT(0);
}}
if(STREAMING::HAS_MODEL_LOADED(func_50()) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_MotoX_02"))){
veLocal_156=VEHICLE::CREATE_VEHICLE(func_50(), func_49(), func_48(), true, true, false);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_156, 1084227584);
if(Global_113648.f_25075==4){
VEHICLE::SET_VEHICLE_LIVERY(veLocal_156, 0);
VEHICLE::SET_VEHICLE_COLOURS(veLocal_156, 44, 83);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veLocal_156, 111, 111);
}
VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_156, 3);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_156, false, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(veLocal_156, true);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_50());
pedLocal_157=PED::CREATE_PED(PED_TYPE_MISSION, joaat("A_M_Y_MotoX_02"), func_47(), func_46(), true, true);
func_45(pedLocal_157);
AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_157, "A_M_Y_RACER_01_WHITE_MINI_01");
TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_157, "WORLD_HUMAN_STAND_IMPATIENT", -1, true);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_MotoX_02"));
}}
return;
}


void func_45(Ped pedParam0) // Position - 0x182A{
switch (Global_113648.f_25075){
case 0:
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_FEET, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_DECL, 0, 0, 0);
break;
case 1:
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 7, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_FEET, 0, 4, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_DECL, 0, 1, 0);
break;
case 2:
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 1, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 5, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_FEET, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_DECL, 0, 2, 0);
break;
case 3:
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_FEET, 0, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_DECL, 0, 0, 0);
break;
case 4:
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 6, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_FEET, 0, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_DECL, 0, 0, 0);
break;
}
return;
}


float func_46() // Position - 0x196A{
return 294.2507f;
}


Vector3 func__47() // Position - 0x1977{
return 1965.2484f, 3114.886f, 46.1663f;
}


float func_48() // Position - 0x198E{
return 194.8257f;
}


Vector3 func__49() // Position - 0x199B{
return 1964.0383f, 3114.6345f, 46.1319f;
}
Hash func_50() // Position - 0x19B2{
switch (Global_113648.f_25075){
case 0:
return joaat("stalion2");
case 1:
return joaat("gauntlet2");
case 2:
return joaat("dominator2");
case 3:
return joaat("buffalo3");
case 4:
return joaat("marshall");
}
return joaat("buffalo3");
}


void func_51() // Position - 0x1A20{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_157)){
if(!PED::IS_PED_FLEEING(pedLocal_157) && !PED::IS_PED_IN_COMBAT(pedLocal_157, 0) && !PED::IS_PED_RAGDOLL(pedLocal_157)){
if(!func_53(pedLocal_157, SCRIPT_TASK_START_SCENARIO_IN_PLACE, true)) TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_157, "WORLD_HUMAN_STAND_IMPATIENT", -1, true);
if(func_52(veLocal_156) || Global_113648.f_25075.f_9){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedLocal_157);
TASK::TASK_COMBAT_PED(pedLocal_157, PLAYER::PLAYER_PED_ID(), 0, 16);
}
fLocal_160=ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
}elseif(PED::IS_PED_RAGDOLL(pedLocal_157)){
if(!func_53(pedLocal_157, SCRIPT_TASK_COMBAT, true)){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedLocal_157);
TASK::TASK_COMBAT_PED(pedLocal_157, PLAYER::PLAYER_PED_ID(), 0, 16);
}}}
return;
}
BOOL func_52(Vehicle veParam0) // Position - 0x1AD4{
Vehicle playersLastVehicle;
float entitySpeed;
playersLastVehicle=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(playersLastVehicle) && fLocal_160 !=0f && fLocal_160 >=9f){
entitySpeed=ENTITY::GET_ENTITY_SPEED(playersLastVehicle);
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, playersLastVehicle) && entitySpeed <=fLocal_160 * 0.5f) return true;
}
if(ENTITY::GET_ENTITY_HEALTH(veParam0) + 100 < ENTITY::GET_ENTITY_MAX_HEALTH(veParam0)) return true;
}
return false;
}
BOOL func_53(Ped pedParam0, eScriptTaskHash esthParam1, BOOL bParam2) // Position - 0x1B47{
int scriptTaskStatus;
scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1);
if(scriptTaskStatus==1 || scriptTaskStatus==0) return true;
elseif(!bParam2)if(scriptTaskStatus==2 || scriptTaskStatus==3) return true;
return false;
}

int func_54() // Position - 0x1B8D{
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_157))if(ENTITY::IS_ENTITY_DEAD(pedLocal_157, false)) return 1;
elseif(PED::IS_PED_FLEEING(pedLocal_157)) return 1;
elseif(PED::IS_PED_IN_COMBAT(pedLocal_157, 0)) return 1;
elseif(PED::IS_PED_RAGDOLL(pedLocal_157)) return 1;
elseif(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) return 1;
if(ENTITY::DOES_ENTITY_EXIST(veLocal_156)){
if(ENTITY::IS_ENTITY_DEAD(veLocal_156, false)){
return 1;
}else{
if(func_55(veLocal_156, func_49(), true) > 2f) return 1;
if(WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), veLocal_156, 0, -1)) return 1;
}}
return 0;
}


float func_55(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1C31{
Vector3 entityCoords;
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(veParam0, true) 
};
else entityCoords={
ENTITY::GET_ENTITY_COORDS(veParam0, false) 
};
return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}


void func_56() // Position - 0x1C6B{
if(!func_59(0, 19)){
Global_113648.f_25075.f_8=1;
func_62(false);
}
if(func_21(9) && iLocal_154==0){
Global_113648.f_25075.f_8=1;
func_62(false);
}
if(func_58(13)){
Global_113648.f_25075.f_8=1;
func_62(false);
}
if(!_IS_EXCLUSIVE_CONTENT_UNLOCKED()){
Global_113648.f_25075.f_8=1;
func_62(false);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race"))==0)if(SYSTEM::VDIST2(func_60(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 160000f) func_62(false);
return;
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x1D09{
int profileSetting;
if(Global_152523==2) return true;
elseif(Global_152523==3) return false;
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(unk_0x8BD41D5945F5762B()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
MISC::SET_BIT(&profileSetting, 2);
MISC::SET_BIT(&profileSetting, 4);
MISC::SET_BIT(&profileSetting, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
profileSetting=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&profileSetting, 0);
STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
}
return true;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID())if(IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)) return true;
return false;
}
BOOL func_58(int iParam0) // Position - 0x1DC1{
int i;
if(iParam0==94 || iParam0==-1) return false;
if(Global_94666[iParam0 /*2*/]) return true;
for (i=0;
i < Global_91433;
i=i + 1){
if(Global_91433[i /*5*/] !=-1)if(Global_78828.f_109[Global_91433[i /*5*/] /*4*/]==iParam0) return true;
}
return false;
}
BOOL func_59(int iParam0, int iParam1) // Position - 0x1E29{
BOOL flag;
if(iParam0==11 || iParam0==-1) return false;
if(iParam1 < 0 || iParam1 >=32) return false;
flag=IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return flag;
}


Vector3 func__60() // Position - 0x1E73{
return 1967.042f, 3116.0051f, 45.8901f;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x1E8A{
if(ENTITY::DOES_ENTITY_EXIST(pedParam0))if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) return true;
return false;
}


void func_62(BOOL bParam0) // Position - 0x1EAB{
var unk;
func_12(&Global_113646);
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_157))if(func_53(pedLocal_157, SCRIPT_TASK_START_SCENARIO_AT_POSITION, true) || func_53(pedLocal_157, SCRIPT_TASK_START_SCENARIO_IN_PLACE, true)) TASK::TASK_WANDER_STANDARD(pedLocal_157, 1193033728, 0);
func_15(&pedLocal_157, bParam0);
func_14(&veLocal_156, bParam0);
if(bParam0) MISC::CLEAR_AREA(func_60(), 100f, true, false, false, false);
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()) CAM::STOP_GAMEPLAY_HINT(false);
bLocal_159=true;
unk={
func_26() 
};
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3))if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CRACEDISRUPT") || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CRACECAR") || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Country_Race");
SCRIPT::TERMINATE_THIS_THREAD();
return;
}