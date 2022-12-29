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
int iLocal_21=0;
float fLocal_22=0f;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
float fLocal_27=0f;
var uLocal_28=0;
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
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
eCharacter echLocal_58=CHAR_MICHAEL;
BOOL bLocal_59=0;
BOOL bLocal_60=0;
BOOL bLocal_61=0;
eCharacter echLocal_62=CHAR_MICHAEL;
int iLocal_63=0;
BOOL bLocal_64=0;
int iLocal_65=0;
BOOL bLocal_66=0;
BOOL bLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
int iLocal_73=0;
BOOL bLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
BOOL bLocal_80=0;
BOOL bLocal_81=0;
BOOL bLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
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
sLocal_18="NULL";
iLocal_21=3;
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
iLocal_53=2;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32)) SCRIPT::TERMINATE_THIS_THREAD();
while (true){
func_104();
switch (iLocal_54){
case 0:
func_99();
break;
case 1:
func_90();
func_2();
Global_97965=false;
break;
case 2:
func_1();
break;
}
SYSTEM::WAIT(0);
}
return;
}


void func_1() // Position - 0xCC{
iLocal_54=0;
return;
}


void func_2() // Position - 0xD7{
eCharacter character;
BOOL flag;
int i;
int outValue;
int value;
int num;
Hash statHash;
eMPStat stat;
int num2;
Hash statName;
int outValue2;
int num3;
int j;
BOOL flag2;
int num4;
int num5;
BOOL flag3;
if(bLocal_60) bLocal_60=false;
else iLocal_55=iLocal_55 + 1;
bLocal_59=false;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) character=CHAR_MULTIPLAYER;
else character=_GET_CURRENT_PLAYER_CHARACTER();
if(character !=echLocal_58){
echLocal_58=character;
bLocal_59=true;
bLocal_66=false;
bLocal_67=false;
bLocal_74=false;
bLocal_80=false;
}
if(echLocal_58==_CHAR_NULL) return;
flag=false;
if(iLocal_55==6 && func_84(64) || iLocal_55==5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pilot_school")) > 0){
flag=true;
bLocal_60=true;
}
func_78();
if(Global_97963 || Global_97964 && !func_75(0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
for (i=0;
i < 8;
i=i + 1){
func_74(echLocal_58, i);
}
Global_97963=false;
}}
if(!flag){
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_73(echLocal_58) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_72() || CUTSCENE::IS_CUTSCENE_PLAYING() || CAM::IS_SCREEN_FADED_OUT() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || Global_78556 || Global_97965 || bLocal_61){
bLocal_82=true;
iLocal_83=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_84=NETWORK::GET_NETWORK_TIME();
return;
}
if(bLocal_82)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_83 > 3000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_84, 3000))) bLocal_82=false;
else return;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_56 > 2000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_57, 2000)) || bLocal_59){
if(iLocal_55 >=8){
iLocal_55=0;
iLocal_56=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_57=NETWORK::GET_NETWORK_TIME();
}
num3=1;
if(bLocal_59) num3=8;
for (j=0;
j < num3;
j=j + 1){
flag2=true;
if(bLocal_59) num2=j;
else num2=iLocal_55;
func_71(echLocal_58, num2, &statHash, &stat);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) outValue=_MPCHAR_STAT_GET_INT(stat, -1, 0);
elseif(num2==0) outValue=Global_113648.f_2365.f_539.f_2387[echLocal_58];
else STATS::STAT_GET_INT(statHash, &outValue, -1);
num=outValue;
outValue=func_69(outValue, 0, 100);
if(func_56(echLocal_58, num2, outValue, &value)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
_MPCHAR_STAT_SET_INT(stat, value, -1, true, false);
}elseif(num2==0){
if(Global_113648.f_2365.f_539.f_2387[echLocal_58]==0) flag2=false;
Global_113648.f_2365.f_539.f_2387[echLocal_58]=value;
}else{
STATS::STAT_SET_INT(statHash, value, true);
}
if(value > func_53(echLocal_58, num2, -1)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_39, 19)) flag2=false;
elseif(!Global_113648.f_9087 && !_IS_MISSION_REPEAT_ACTIVE(false) || !IS_BIT_SET(Global_113648.f_9087.f_2[27 /*3*/], 2)) flag2=false;
num4=value;
num5=num4 - (num4 % func_51(echLocal_58, num2));
if(num4 % func_51(echLocal_58, num2) >=0) num5=num5 + func_51(echLocal_58, num2);
if(num4 >=num5) num4=num5;
else num4=num5 - func_51(echLocal_58, num2);
if(value > num4) flag2=false;
if(func_46()) flag2=false;
if(flag2){
if(!bLocal_59){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_45(117, -1)==0){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9()){
_DISPLAY_HELP_TEXT("STAT_HELP2" /*~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game.*/, -1);
func_4(117, true, -1, true);
}}}
bLocal_61=true;
bLocal_64=value - outValue;
bLocal_64=bLocal_64 + (outValue % func_51(echLocal_58, num2));
iLocal_65=value;
echLocal_62=echLocal_58;
iLocal_63=num2;
}}
if(value >=100){
if(func_3(echLocal_58, num2, &statName)){
if(echLocal_58==CHAR_MICHAEL){
STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &outValue2, -1);
STATS::STAT_SET_INT(statName, outValue2, true);
}elseif(echLocal_58==CHAR_FRANKLIN){
STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &outValue2, -1);
STATS::STAT_SET_INT(statName, outValue2, true);
}elseif(echLocal_58==CHAR_TREVOR){
STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &outValue2, -1);
STATS::STAT_SET_INT(statName, outValue2, true);
}else{
echLocal_58==CHAR_MULTIPLAYER;
}
}}}
func_74(echLocal_58, num2);
}elseif(value < num){
flag3=true;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
_MPCHAR_STAT_SET_INT(stat, value, -1, true, false);
}elseif(num2==0){
Global_113648.f_2365.f_539.f_2387[echLocal_58]=value;
flag3=false;
}else{
STATS::STAT_SET_INT(statHash, value, true);
}
if(flag3) func_74(echLocal_58, num2);
}}}else{
bLocal_60=true;
}
return;
}
BOOL func_3(eCharacter echParam0, int iParam1, var uParam2) // Position - 0x5CD{
*uParam2=joaat("LAST_PLAYING_TIME");
switch (echParam0){
case CHAR_MICHAEL:
switch (iParam1){
case 0:
*uParam2=joaat("SP0_SPECIAL_ABILITY_MAXED");
break;
case 1:
*uParam2=joaat("SP0_STAMINA_MAXED");
break;
case 3:
*uParam2=joaat("SP0_LUNG_CAPACITY_MAXED");
break;
case 2:
*uParam2=joaat("SP0_STRENGTH_MAXED");
break;
case 4:
*uParam2=joaat("SP0_WHEELIE_ABILITY_MAXED");
break;
case 5:
*uParam2=joaat("SP0_FLYING_ABILITY_MAXED");
break;
case 6:
*uParam2=joaat("SP0_SHOOTING_ABILITY_MAXED");
break;
case 7:
*uParam2=joaat("SP0_STEALTH_ABILITY_MAXED");
break;
}
break;
case CHAR_FRANKLIN:
switch (iParam1){
case 0:
*uParam2=joaat("SP1_SPECIAL_ABILITY_MAXED");
break;
case 1:
*uParam2=joaat("SP1_STAMINA_MAXED");
break;
case 3:
*uParam2=joaat("SP1_LUNG_CAPACITY_MAXED");
break;
case 2:
*uParam2=joaat("SP1_STRENGTH_MAXED");
break;
case 4:
*uParam2=joaat("SP1_WHEELIE_ABILITY_MAXED");
break;
case 5:
*uParam2=joaat("SP1_FLYING_ABILITY_MAXED");
break;
case 6:
*uParam2=joaat("SP1_SHOOTING_ABILITY_MAXED");
break;
case 7:
*uParam2=joaat("SP1_STEALTH_ABILITY_MAXED");
break;
}
break;
case CHAR_TREVOR:
switch (iParam1){
case 0:
*uParam2=joaat("SP2_SPECIAL_ABILITY_MAXED");
break;
case 1:
*uParam2=joaat("SP2_STAMINA_MAXED");
break;
case 3:
*uParam2=joaat("SP2_LUNG_CAPACITY_MAXED");
break;
case 2:
*uParam2=joaat("SP2_STRENGTH_MAXED");
break;
case 4:
*uParam2=joaat("SP2_WHEELIE_ABILITY_MAXED");
break;
case 5:
*uParam2=joaat("SP2_FLYING_ABILITY_MAXED");
break;
case 6:
*uParam2=joaat("SP2_SHOOTING_ABILITY_MAXED");
break;
case 7:
*uParam2=joaat("SP2_STEALTH_ABILITY_MAXED");
break;
}
break;
}
return *uParam2 !=joaat("LAST_PLAYING_TIME");
}


void func_4(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x7B5{
Hash statName;
if(func_7()){
statName=Global_2848280[iParam0 /*3*/][func_5(iParam2)];
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, bParam3);
}
return;
}

int func_5(int iParam0) // Position - 0x7E7{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_6();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_6() // Position - 0x81B{
return Global_1574918;
}
BOOL func_7() // Position - 0x827{
return true;
}


void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x834{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
return;
}
BOOL func_9() // Position - 0x84B{
int frameCount;
frameCount=MISC::GET_FRAME_COUNT();
if(Global_1935365==frameCount){
return Global_1935366;
}else{
Global_1935365=frameCount;
Global_1935366=false;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_39, 19)) return false;
if(HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN() && !func_44(PLAYER::PLAYER_ID())) return false;
if(Global_1935367==1) return false;
if(Global_1935176==1) return false;
if(func_43()) return false;
if(MISC::IS_STUNT_JUMP_MESSAGE_SHOWING()) return false;
if(Global_1836583==1) return false;
if(MISC::IS_STUNT_JUMP_IN_PROGRESS()) return false;
if(Global_1057410) return false;
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 16)) return false;
if(_IS_FMMC_ACTIVE()) return false;
if(func_41()) return false;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED()){
if(!func_41()){
if(!func_39(3, -1)){
if(func_37(&Global_2696995, 300000, false)==1){
_STOPWATCH_DESTROY(&Global_2696993);
func_34(3, -1);
}elseif(func_37(&Global_2696993, 7000, false)==0){
return false;
}}}else{
return false;
}}
if(func_33()) return false;
if(func_32()) return false;
if(func_30()) return false;
if(func_29()) return false;
if(func_28()) return false;
if(func_27()) return false;
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE()) return false;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())if(func_26(PLAYER::PLAYER_PED_ID())==joaat("WEAPON_SNIPERRIFLE") || func_26(PLAYER::PLAYER_PED_ID())==joaat("WEAPON_HEAVYSNIPER")) return false;
if(CAM::IS_SCREEN_FADED_OUT()) return false;
if(func_25(8, -1)) return false;
if(func_24(12, -1)) return false;
if(HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL)) return false;
if(func_23()) return false;
if(func_22()) return false;
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2)) return false;
if(Global_1836374) return false;
if(Global_1836378) return false;
if(Global_1836380) return false;
if(Global_2672505.f_3693.f_39) return false;
if(func_21(0)) return false;
if(func_20()) return false;
if(Global_2793044.f_4062) return false;
if(Global_2672505.f_3559) return false;
if(!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false)) return false;
if(func_18(PLAYER::PLAYER_ID())) return false;
if(Global_2672505.f_3693.f_39==true) return false;
if(Global_2684799.f_2846.f_26==1) return false;
if(func_17(true)) return false;
if(func_15()) return false;
if(HUD::IS_HUD_COMPONENT_ACTIVE(HUD_RADIO_STATIONS)) return false;
if(func_14()) return false;
if(func_13()) return false;
if(DECORATOR::DECOR_GET_BOOL())if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FHU_HELP3" /*Shout through your headset to make the store clerk fill the bag with cash faster.*/)) return false;
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 6)) return false;
if(func_10(PLAYER::PLAYER_ID())) return false;
Global_1935366=true;
return true;
}
BOOL func_10(Player plParam0) // Position - 0xB9B{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_365, 26);
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0xBC2{
return -1;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xBCB{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
BOOL func_13() // Position - 0xBDE{
return Global_2672505.f_1684.f_701 !=0;
}
BOOL func_14() // Position - 0xBF2{
return Global_2672505.f_2837.f_582;
}
BOOL func_15() // Position - 0xC04{
return func_16();
}
BOOL func_16() // Position - 0xC10{
return Global_1649046.f_40==3;
}
BOOL func_17(BOOL bParam0) // Position - 0xC20{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}
BOOL func_18(Player plParam0) // Position - 0xC49{
return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_14, 0);
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xC5D{
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
BOOL func_20() // Position - 0xCBD{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0) return true;
return false;
}
BOOL func_21(int iParam0) // Position - 0xCDA{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_22() // Position - 0xD31{
return Global_1653913.f_112;
}
BOOL func_23() // Position - 0xD3F{
return Global_2672505.f_2513[0 /*80*/].f_1 !=0;
}
BOOL func_24(int iParam0, int iParam1) // Position - 0xD55{
switch (iParam0){
case 5:
if(iParam1 > -1){
if(Global_1653913.f_137[iParam1]) return true;
if(Global_1653913.f_170[iParam1]) return true;
}
break;
default:
if(IS_BIT_SET(Global_1653913.f_1046, iParam0)) return true;
if(IS_BIT_SET(Global_1653913.f_1047, iParam0)) return true;
break;
}
return false;
}
BOOL func_25(int iParam0, int iParam1) // Position - 0xDBB{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_26(Ped pedParam0) // Position - 0xDF3{
int weaponHash;
WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
return weaponHash;
}
BOOL func_27() // Position - 0xE07{
return Global_2683862.f_692;
}
BOOL func_28() // Position - 0xE16{
return IS_BIT_SET(Global_1048576.f_10, 13);
}
BOOL func_29() // Position - 0xE27{
return Global_2683862.f_691;
}
BOOL func_30() // Position - 0xE36{
if(func_31()==1 || func_31()==4) return true;
return false;
}

int func_31() // Position - 0xE58{
return Global_1574632.f_18;
}
BOOL func_32() // Position - 0xE66{
if(func_31()==3 || func_31()==2) return true;
return false;
}
BOOL func_33() // Position - 0xE88{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0) return true;
return false;
}


void func_34(int iParam0, int iParam1) // Position - 0xEA2{
int profileSetting;
int profileSetting2;
if(iParam1==-1) iParam1=func_6();
Global_1665487=0;
if(MISC::ARE_PROFILE_SETTINGS_VALID()==false) return;
switch (iParam0){
case 0:
STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
profileSetting2=func_35(iParam1);
profileSetting=MISC::GET_PROFILE_SETTING(profileSetting2);
break;
default:
profileSetting2=func_35(iParam1);
profileSetting=MISC::GET_PROFILE_SETTING(profileSetting2);
if(!IS_BIT_SET(profileSetting, iParam0)){
MISC::SET_BIT(&profileSetting, iParam0);
STATS::SET_FREEMODE_PROLOGUE_DONE(profileSetting, iParam1);
}
break;
}
switch (iParam0){
case 0:
func_4(120, false, iParam1, true);
func_4(124, false, iParam1, true);
func_4(115, false, iParam1, true);
func_4(119, false, iParam1, true);
func_4(121, false, iParam1, true);
func_4(122, false, iParam1, true);
func_4(125, false, iParam1, true);
_MPCHAR_STAT_SET_INT(MP_STAT_FM_CUT_DONE, 0, iParam1, true, false);
_MPCHAR_STAT_SET_INT(MP_STAT_FM_CUT_DONE_2, 0, iParam1, true, false);
break;
}
return;
}

int func_35(int iParam0) // Position - 0xF8A{
int num;
if(iParam0==-1) iParam0=func_6();
switch (iParam0){
case 0:
num=914;
break;
case 1:
num=915;
break;
case 2:
num=916;
break;
case 3:
num=917;
break;
case 4:
num=918;
break;
}
return num;
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0xFED{
uParam0->f_1=0;
return;
}

int func_37(var uParam0, int iParam1, BOOL bParam2) // Position - 0xFFA{
if(iParam1==-1) return 1;
_STOPWATCH_INITIALIZE(uParam0, bParam2, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
_STOPWATCH_DESTROY(uParam0);
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
_STOPWATCH_DESTROY(uParam0);
return 1;
}
return 0;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1064{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL func_39(int iParam0, int iParam1) // Position - 0x10A9{
int profileSetting;
int profileSetting2;
if(iParam1==-1) iParam1=func_6();
profileSetting=func_35(iParam1);
profileSetting2=MISC::GET_PROFILE_SETTING(profileSetting);
return IS_BIT_SET(profileSetting2, iParam0);
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x10D2{
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
BOOL func_41() // Position - 0x118A{
return Global_1575060;
}
BOOL _IS_FMMC_ACTIVE() // Position - 0x1196{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}
BOOL func_43() // Position - 0x11AD{
return Global_2764905;
}
BOOL func_44(Player plParam0) // Position - 0x11B9{
return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_3, 13);
}

int func_45(int iParam0, int iParam1) // Position - 0x11D2{
Hash statHash;
int outValue;
statHash=Global_2848280[iParam0 /*3*/][func_5(iParam1)];
if(STATS::STAT_GET_BOOL(statHash, &outValue, -1)) return outValue;
return 0;
}
BOOL func_46() // Position - 0x11FE{
if(!func_49(true)) return false;
if(func_47()) return false;
return Global_1947720;
}
BOOL func_47() // Position - 0x1222{
return _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
}
BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x1232{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10==plParam0;
return false;
}
BOOL func_49(BOOL bParam0) // Position - 0x1267{
return _IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), bParam0);
}
BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x1279{
if(!bCanBeBoss)if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return false;
return Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX();
}

int func_51(eCharacter echParam0, int iParam1) // Position - 0x12A4{
switch (echParam0){
case CHAR_MICHAEL:
switch (iParam1){
case 0:
return 20;
case 1:
return 20;
case 3:
return 20;
case 2:
return 20;
case 4:
return 20;
case 5:
return 20;
case 6:
return 20;
case 7:
return 20;
}
break;
case CHAR_FRANKLIN:
switch (iParam1){
case 0:
return 20;
case 1:
return 20;
case 3:
return 20;
case 2:
return 20;
case 4:
return 20;
case 5:
return 20;
case 6:
return 20;
case 7:
return 20;
}
break;
case CHAR_TREVOR:
switch (iParam1){
case 0:
return 20;
case 1:
return 20;
case 3:
return 20;
case 2:
return 20;
case 4:
return 20;
case 5:
return 20;
case 6:
return 20;
case 7:
return 20;
}
break;
case CHAR_MULTIPLAYER:
switch (iParam1){
case 0:
return 20;
case 1:
return 20;
case 3:
return 20;
case 2:
return 20;
case 4:
return 20;
case 5:
return 20;
case 6:
return 20;
case 7:
return 20;
}
break;
}
return 1;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x14B4{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}

int func_53(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x14DC{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_54(14)) return 100;
switch (echParam0){
case 0:
switch (iParam1){
case 0:
return 0;
case 1:
return 47;
case 3:
return 22;
case 2:
return 21;
case 4:
return 54;
case 5:
return 31;
case 6:
return 79;
case 7:
return 81;
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
case 1:
return 51;
case 3:
return 46;
case 2:
return 49;
case 4:
return 71;
case 5:
return 19;
case 6:
return 24;
case 7:
return 21;
}
break;
case 2:
switch (iParam1){
case 0:
return 0;
case 1:
return 23;
case 3:
return 28;
case 2:
return 79;
case 4:
return 31;
case 5:
return 82;
case 6:
return 69;
case 7:
return 49;
}
break;
case 3:
switch (iParam1){
case 1:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_STAMINA, iParam2, 0);
case 3:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_LUNG, iParam2, 0);
case 2:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_STRENGTH, iParam2, 0);
case 4:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_BIKE, iParam2, 0);
case 5:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_FLYING, iParam2, 0);
case 6:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_SHOOTING, iParam2, 0);
case 7:
return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_STEALTH, iParam2, 0);
}
break;
}
return 0;
}
BOOL func_54(int iParam0) // Position - 0x1729{
return Global_43257==iParam0;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1737{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_5(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}
BOOL func_56(eCharacter echParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1767{
*uParam3=func_57(echParam0, iParam1, false, -1);
if(*uParam3 > iParam2) return true;
return false;
}

int func_57(eCharacter echParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1789{
float value;
float outValue;
int num;
int outValue2;
int num2;
int outValue3;
int outValue4;
int i;
int num3;
int num4;
int num5;
int num6;
float num7;
num=0;
switch (iParam1){
case 0:
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
value=SYSTEM::TO_FLOAT(outValue2);
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
value=SYSTEM::TO_FLOAT(outValue2);
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
value=SYSTEM::TO_FLOAT(outValue2);
}elseif(echParam0==CHAR_MULTIPLAYER){
value=SYSTEM::TO_FLOAT(_MPCHAR_STAT_GET_INT(MP_STAT_SPECIAL_ABILITY, iParam3, 0));
}
break;
case 1:
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &outValue, -1);
value=(outValue - Global_113648.f_2365.f_539.f_2355[echParam0]) / 175f;
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &outValue, -1);
value=(outValue - Global_113648.f_2365.f_539.f_2355[echParam0]) / 175f;
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &outValue, -1);
value=(outValue - Global_113648.f_2365.f_539.f_2355[echParam0]) / 175f;
}elseif(echParam0==CHAR_MULTIPLAYER){
value=func_68(20, iParam3) / 175f;
func_65(&value);
}
if(echParam0==CHAR_MICHAEL){
value=value + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_SWIMMING")));
}elseif(echParam0==CHAR_FRANKLIN){
value=value + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_SWIMMING")));
}elseif(echParam0==CHAR_TREVOR){
value=value + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_SWIMMING")));
}elseif(echParam0==CHAR_MULTIPLAYER){
value=value + SYSTEM::TO_FLOAT(func_64(func_63(50, iParam3)));
func_65(&value);
}
if(echParam0==CHAR_MICHAEL){
value=value + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_BICYCLE")));
}elseif(echParam0==CHAR_FRANKLIN){
value=value + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_BICYCLE")));
}elseif(echParam0==CHAR_TREVOR){
value=value + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_BICYCLE")));
}elseif(echParam0==CHAR_MULTIPLAYER){
value=value + SYSTEM::TO_FLOAT(func_64(func_63(47, iParam3)));
func_65(&value);
}
if(echParam0==CHAR_MULTIPLAYER) value=value + (4f * Global_262145.f_24333 * (float)_MPCHAR_STAT_GET_INT(MP_STAT_DANCE_COMBO_DURATION_MINS, -1, 0));
if(echParam0==CHAR_MULTIPLAYER) value=value * 0.25f;
break;
case 3:
if(echParam0==CHAR_MICHAEL){
value=SYSTEM::TO_FLOAT(func_62(joaat("SP0_TIME_UNDERWATER"))) / 30f;
}elseif(echParam0==CHAR_FRANKLIN){
value=SYSTEM::TO_FLOAT(func_62(joaat("SP1_TIME_UNDERWATER"))) / 30f;
}elseif(echParam0==CHAR_TREVOR){
value=SYSTEM::TO_FLOAT(func_62(joaat("SP2_TIME_UNDERWATER"))) / 30f;
}elseif(echParam0==CHAR_MULTIPLAYER){
value=SYSTEM::TO_FLOAT(func_62(func_63(52, iParam3))) / 30f;
func_65(&value);
}
break;
case 2:
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &outValue2, -1);
value=SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2359[echParam0]) / 20f;
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &outValue2, -1);
value=SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2359[echParam0]) / 20f;
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &outValue2, -1);
value=SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2359[echParam0]) / 20f;
}elseif(echParam0==CHAR_MULTIPLAYER){
value=SYSTEM::TO_FLOAT(_MPCHAR_STAT_GET_INT(MP_STAT_UNARMED_PED_HITS, iParam3, 0)) / 20f;
func_65(&value);
}
break;
case 4:
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &outValue2, -1);
value=value + (SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2363[echParam0]) / 50f);
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &outValue2, -1);
value=value + (SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2363[echParam0]) / 50f);
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &outValue2, -1);
value=value + (SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2363[echParam0]) / 50f);
}elseif(echParam0==CHAR_MULTIPLAYER){
value=value + (float)_MPCHAR_STAT_GET_INT(MP_STAT_NUMBER_NEAR_MISS, iParam3, 0) / 50;
func_65(&value);
}
break;
case 5:
if(echParam0==CHAR_MICHAEL) value=SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
elseif(echParam0==CHAR_FRANKLIN) value=SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
elseif(echParam0==CHAR_TREVOR) value=SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
elseif(echParam0==CHAR_MULTIPLAYER) value=SYSTEM::TO_FLOAT(func_64(func_63(43, iParam3))) / 10f;
if(echParam0==CHAR_MICHAEL) value=value + (SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
elseif(echParam0==CHAR_FRANKLIN) value=value + (SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
elseif(echParam0==CHAR_TREVOR) value=value + (SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
elseif(echParam0==CHAR_MULTIPLAYER) value=value + (SYSTEM::TO_FLOAT(func_64(func_63(45, iParam3))) / 10f);
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_INT(joaat("SP0_PLANE_LANDINGS"), &outValue2, -1);
value=value + SYSTEM::TO_FLOAT(outValue2);
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_INT(joaat("SP1_PLANE_LANDINGS"), &outValue2, -1);
value=value + SYSTEM::TO_FLOAT(outValue2);
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_INT(joaat("SP2_PLANE_LANDINGS"), &outValue2, -1);
value=value + SYSTEM::TO_FLOAT(outValue2);
}elseif(echParam0==CHAR_MULTIPLAYER){
value=value + (float)_MPCHAR_STAT_GET_INT(MP_STAT_PLANE_LANDINGS, iParam3, 0);
func_65(&value);
}
if(echParam0==CHAR_MICHAEL || echParam0==CHAR_FRANKLIN || echParam0==CHAR_TREVOR){
num2=func_61(echParam0, 0);
if(echParam0==CHAR_TREVOR)if(num2==3) value=value + 10f;
elseif(num2==2) value=value + 7f;
elseif(num2==1) value=value + 5f;
elseif(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 1);
if(echParam0==CHAR_TREVOR)if(num2==3) value=value + 10f;
elseif(num2==2) value=value + 7f;
elseif(num2==1) value=value + 5f;
elseif(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 2);
if(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 3);
if(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 6);
if(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 4);
if(num2==3) value=value + 5f;
elseif(num2==2) value=value + 3f;
elseif(num2==1) value=value + 2f;
num2=func_61(echParam0, 5);
if(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 7);
if(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 8);
if(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
num2=func_61(echParam0, 11);
if(num2==3) value=value + 12f;
elseif(num2==2) value=value + 9f;
elseif(num2==1) value=value + 7f;
}
break;
case 7:
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &outValue, -1);
value=(outValue - Global_113648.f_2365.f_539.f_2367[echParam0]) / 45f;
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &outValue, -1);
value=(outValue - Global_113648.f_2365.f_539.f_2367[echParam0]) / 45f;
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &outValue, -1);
value=(outValue - Global_113648.f_2365.f_539.f_2367[echParam0]) / 45f;
}elseif(echParam0==CHAR_MULTIPLAYER){
value=func_68(19, iParam3) / 45f;
}
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &outValue2, -1);
value=value + ((SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2371[echParam0]) / 2f) * 1.5f);
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &outValue2, -1);
value=value + ((SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2371[echParam0]) / 2f) * 1.5f);
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &outValue2, -1);
value=value + ((SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2371[echParam0]) / 2f) * 1.5f);
}elseif(echParam0==CHAR_MULTIPLAYER){
outValue2=_MPCHAR_STAT_GET_INT(MP_STAT_KILLS_STEALTH, iParam3, 0);
value=value + ((SYSTEM::TO_FLOAT(outValue2) / 2f) * 1.5f);
func_65(&value);
}
break;
case 6:
if(echParam0==CHAR_MICHAEL){
STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &outValue3, -1);
STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &outValue4, -1);
outValue4=outValue4 - outValue3;
value=SYSTEM::TO_FLOAT(outValue3 - Global_113648.f_2365.f_539.f_2375[echParam0]) / 40f;
value=value + (SYSTEM::TO_FLOAT(outValue4 - Global_113648.f_2365.f_539.f_2379[echParam0]) / 80f);
}elseif(echParam0==CHAR_FRANKLIN){
STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &outValue3, -1);
STATS::STAT_GET_INT(joaat("SP1_HITS_PEDS_VEHICLES"), &outValue4, -1);
outValue4=outValue4 - outValue3;
value=SYSTEM::TO_FLOAT(outValue3 - Global_113648.f_2365.f_539.f_2375[echParam0]) / 40f;
value=value + (SYSTEM::TO_FLOAT(outValue4 - Global_113648.f_2365.f_539.f_2379[echParam0]) / 80f);
}elseif(echParam0==CHAR_TREVOR){
STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &outValue3, -1);
STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &outValue4, -1);
outValue4=outValue4 - outValue3;
value=SYSTEM::TO_FLOAT(outValue3 - Global_113648.f_2365.f_539.f_2375[echParam0]) / 40f;
value=value + (SYSTEM::TO_FLOAT(outValue4 - Global_113648.f_2365.f_539.f_2379[echParam0]) / 80f);
}elseif(echParam0==CHAR_MULTIPLAYER){
outValue4=_MPCHAR_STAT_GET_INT(MP_STAT_HITS_PEDS_VEHICLES, iParam3, 0);
value=value + (SYSTEM::TO_FLOAT(outValue4) / 80f);
}
if(echParam0==CHAR_MICHAEL || echParam0==CHAR_FRANKLIN || echParam0==CHAR_TREVOR){
for (i=0;
i < 22;
i=i + 1){
switch (func_60(i, echParam0)){
case 3:
num3=num3 + 1;
break;
case 2:
num4=num4 + 1;
break;
case 1:
num5=num5 + 1;
break;
}}
value=value + (float)num3 * 3;
value=value + (float)num4 * 2;
value=value + (float)num5 * 1;
}elseif(echParam0==CHAR_MULTIPLAYER){
value=value + (float)_MPPLY_STAT_GET_INT(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
func_65(&value);
}
break;
}
if(iParam1 !=0){
num6=func_53(echParam0, iParam1, iParam3);
value=value + (float)num6;
value=value + (float)func_58(echParam0, iParam1, iParam3);
}
if(bParam2){
num7=value - (value % (float)func_51(echParam0, iParam1));
if(value % (float)func_51(echParam0, iParam1) >=0f) num7=num7 + (float)func_51(echParam0, iParam1);
if(value >=num7) value=num7;
else value=num7 - (float)func_51(echParam0, iParam1);
}
num=SYSTEM::FLOOR(value);
num=func_69(num, 0, 100);
return num;
}

int func_58(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x249C{
switch (echParam0){
case CHAR_MICHAEL:
case CHAR_FRANKLIN:
case CHAR_TREVOR:
switch (iParam1){
case 1:
case 3:
case 2:
case 4:
case 5:
case 6:
case 7:
return Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][echParam0];
}
break;
case CHAR_MULTIPLAYER:
switch (iParam1){
case 1:
return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_STAM, iParam2, 0);
case 3:
return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_LUNG, iParam2, 0);
case 2:
return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_STRN, iParam2, 0);
case 4:
return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_DRIV, iParam2, 0);
case 5:
return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_FLY, iParam2, 0);
case 6:
return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_SHO, iParam2, 0);
case 7:
return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_STL, iParam2, 0);
}
break;
}
return 0;
}
int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x25B0{
Hash statHash;
int outValue;
statHash=hParam0;
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
return 0;
}

int func_60(int iParam0, eCharacter echParam1) // Position - 0x25CE{
return Global_113648.f_19149[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(eCharacter echParam0, int iParam1) // Position - 0x25EA{
if(echParam0 < CHAR_MICHAEL || echParam0 > CHAR_TREVOR) return 0;
return Global_113648.f_1990[echParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(Hash hParam0) // Position - 0x2618{
int num;
num=0;
num=num + (STATS::STAT_GET_NUMBER_OF_DAYS(hParam0) * 86400);
num=num + (STATS::STAT_GET_NUMBER_OF_HOURS(hParam0) * 3600);
num=num + (STATS::STAT_GET_NUMBER_OF_MINUTES(hParam0) * 60);
num=num + STATS::STAT_GET_NUMBER_OF_SECONDS(hParam0);
return num;
}
Hash func_63(int iParam0, int iParam1) // Position - 0x265B{
return Global_2805027[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(Hash hParam0) // Position - 0x2673{
int num;
num=0;
num=num + (STATS::STAT_GET_NUMBER_OF_DAYS(hParam0) * 1440);
num=num + (STATS::STAT_GET_NUMBER_OF_HOURS(hParam0) * 60);
num=num + STATS::STAT_GET_NUMBER_OF_MINUTES(hParam0);
return num;
}


var func__65(var uParam0) // Position - 0x26A6{
if(func_46()){
if(func_66() < Global_262145.f_13170)if(*uParam0 + ((float)func_66() * Global_262145.f_13169) <=(float)Global_262145.f_13179) *uParam0=*uParam0 + ((float)func_66() * Global_262145.f_13169);
return *uParam0;
}
return *uParam0;
}

int func_66() // Position - 0x2700{
if(func_49(true)) return Global_1853910[_GET_BOSS_OF_LOCAL_PLAYER() /*862*/].f_205.f_6;
return 0;
}
Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x2726{
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


float func_68(int iParam0, int iParam1) // Position - 0x273B{
Hash statHash;
float outValue;
statHash=Global_2847604[iParam0 /*3*/][func_5(iParam1)];
if(STATS::STAT_GET_FLOAT(statHash, &outValue, -1)) return outValue;
return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2) // Position - 0x2767{
if(iParam0 > iParam2) return iParam2;
elseif(iParam0 < iParam1) return iParam1;
return iParam0;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x278C{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_5(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}


void func_71(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x27C9{
switch (echParam0){
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
BOOL func_72() // Position - 0x2A20{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}
BOOL func_73(eCharacter echParam0) // Position - 0x2A3C{
return echParam0 < CHAR_MULTIPLAYER;
}


void func_74(eCharacter echParam0, int iParam1) // Position - 0x2A48{
int outValue;
float modifier;
Hash statHash;
eMPStat stat;
if(echParam0 !=CHAR_MICHAEL || echParam0 !=CHAR_FRANKLIN || echParam0 !=CHAR_TREVOR || echParam0 !=CHAR_MULTIPLAYER) return;
func_71(echParam0, iParam1, &statHash, &stat);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) outValue=_MPCHAR_STAT_GET_INT(stat, -1, 0);
else STATS::STAT_GET_INT(statHash, &outValue, -1);
switch (iParam1){
case 2:
modifier=0.8f + (0.4f * (SYSTEM::TO_FLOAT(outValue) / 100f));
PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), modifier, true);
break;
case 7:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian3")) !=0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor3")) !=0){
Global_97964=true;
}else{
modifier=1f - (SYSTEM::TO_FLOAT(outValue) / 100f);
PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), modifier);
}
break;
}
return;
}
BOOL func_75(int iParam0) // Position - 0x2B35{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2B57{
return func_77(iParam0, Global_43257);
}
BOOL func_77(int iParam0, int iParam1) // Position - 0x2B68{
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


void func_78() // Position - 0x2D49{
Vehicle vehiclePedIsIn;
int num;
num=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false)==PLAYER::PLAYER_PED_ID() && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn))) num=1;
}
func_83(&vehiclePedIsIn, &num);
func_82(&vehiclePedIsIn, &num);
func_79();
return;
}


void func_79() // Position - 0x2DE8{
int num;
int value;
int num2;
if(!bLocal_80){
if(echLocal_58==CHAR_MULTIPLAYER){
if(Global_2359296[func_81() /*5568*/].f_681.f_7){
iLocal_77=func_62(func_63(148, -1));
Global_2359296[func_81() /*5568*/].f_681.f_7=0;
}else{
iLocal_77=Global_2359296[func_81() /*5568*/].f_681.f_6;
}
if(Global_2359296[func_81() /*5568*/].f_681.f_4==0) Global_2359296[func_81() /*5568*/].f_681.f_4=NETWORK::GET_CLOUD_TIME_AS_INT();
iLocal_79=Global_2359296[func_81() /*5568*/].f_681.f_4;
iLocal_78=Global_2359296[func_81() /*5568*/].f_681.f_5;
}else{
if(Global_113648.f_2365.f_539.f_2292[echLocal_58]){
switch (echLocal_58){
case CHAR_MICHAEL:
iLocal_77=func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
break;
case CHAR_FRANKLIN:
iLocal_77=func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
break;
case CHAR_TREVOR:
iLocal_77=func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
break;
}
Global_113648.f_2365.f_539.f_2292[echLocal_58]=false;
}else{
iLocal_77=Global_113648.f_2365.f_539.f_2288[echLocal_58];
}
if(Global_113648.f_2365.f_539.f_2280[echLocal_58]==0) Global_113648.f_2365.f_539.f_2280[echLocal_58]=NETWORK::GET_CLOUD_TIME_AS_INT();
iLocal_79=Global_113648.f_2365.f_539.f_2280[echLocal_58];
iLocal_78=Global_113648.f_2365.f_539.f_2284[echLocal_58];
}
bLocal_80=true;
bLocal_81=true;
}elseif(NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_79 > 86400){
bLocal_80=false;
bLocal_81=false;
iLocal_79=NETWORK::GET_CLOUD_TIME_AS_INT();
iLocal_78=0;
if(echLocal_58==CHAR_MULTIPLAYER) Global_2359296[func_81() /*5568*/].f_681.f_7=1;
else Global_113648.f_2365.f_539.f_2292[echLocal_58]=true;
}
if(bLocal_81){
switch (echLocal_58){
case CHAR_MICHAEL:
num=func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
break;
case CHAR_FRANKLIN:
num=func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
break;
case CHAR_TREVOR:
num=func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
break;
case CHAR_MULTIPLAYER:
num=func_62(func_63(148, -1));
break;
}
value=num - iLocal_77;
num2=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 15f) - iLocal_78;
if(num2 > 0){
func_80(echLocal_58, 4, num2);
iLocal_78=iLocal_78 + num2;
}
if(num > iLocal_77 + ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60)) bLocal_81=false;
}
if(echLocal_58==CHAR_MULTIPLAYER){
Global_2359296[func_81() /*5568*/].f_681.f_4=iLocal_79;
Global_2359296[func_81() /*5568*/].f_681.f_5=iLocal_78;
}else{
Global_113648.f_2365.f_539.f_2280[echLocal_58]=iLocal_79;
Global_113648.f_2365.f_539.f_2284[echLocal_58]=iLocal_78;
}
return;
}


void func_80(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x30AA{
int num;
eMPStat stat;
switch (echParam0){
case 0:
case 1:
case 2:
Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][echParam0]=Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
break;
case 3:
stat=14192;
switch (iParam1){
case 1:
stat=MP_STAT_SCRIPT_INCREASE_STAM;
break;
case 3:
stat=MP_STAT_SCRIPT_INCREASE_LUNG;
break;
case 2:
stat=MP_STAT_SCRIPT_INCREASE_STRN;
break;
case 4:
stat=MP_STAT_SCRIPT_INCREASE_DRIV;
break;
case 5:
stat=MP_STAT_SCRIPT_INCREASE_FLY;
break;
case 6:
stat=MP_STAT_SCRIPT_INCREASE_SHO;
break;
case 7:
stat=MP_STAT_SCRIPT_INCREASE_STL;
break;
}
if(stat !=14192){
num=_MPCHAR_STAT_GET_INT(stat, -1, 0);
num=num + iParam2;
if(num > 100) num=100;
_MPCHAR_STAT_SET_INT(stat, num, -1, true, false);
}
break;
}
return;
}

int func_81() // Position - 0x319A{
int num;
num=0;
return num;
}


void func_82(var uParam0, var uParam1) // Position - 0x31A7{
BOOL flag;
if(bLocal_74){
flag=true;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && !ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
flag=false;
if(ENTITY::GET_ENTITY_SPEED(*uParam0) >=53f){
func_80(echLocal_58, 4, 2);
flag=true;
}}
if(flag){
bLocal_74=false;
iLocal_75=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_76=NETWORK::GET_NETWORK_TIME();
}}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && ENTITY::GET_ENTITY_SPEED(*uParam0) < 20f && !ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_75 > 10000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_76, 10000))) bLocal_74=true;
}
return;
}


void func_83(var uParam0, var uParam1) // Position - 0x3282{
BOOL flag;
var unk;
flag=false;
if(*uParam1){
if(bLocal_66){
if(!ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_68 > 1500 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_69, 1500))){
iLocal_70=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_71=NETWORK::GET_NETWORK_TIME();
bLocal_67=true;
}
bLocal_66=false;
}}
if(bLocal_67){
if(!ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*uParam0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_70 > 20 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_70==0 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_71, 20)) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), iLocal_71)){
}else{
func_80(echLocal_58, 4, 1);
}
TEXT_LABEL_ASSIGN_STRING(&unk, "Player landed on all wheels in ", 64);
TEXT_LABEL_APPEND_INT(&unk, MISC::GET_GAME_TIMER() - iLocal_70, 64);
TEXT_LABEL_APPEND_STRING(&unk, "ms", 64);
flag=true;
}}else{
flag=true;
}}
if(!bLocal_66 && !bLocal_67){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_72 > 1000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_73, 1000))){
if(ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(!bLocal_66){
iLocal_68=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_69=NETWORK::GET_NETWORK_TIME();
bLocal_66=true;
}}}}}elseif(bLocal_66 || bLocal_67){
flag=true;
}
if(flag){
iLocal_72=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_73=NETWORK::GET_NETWORK_TIME();
bLocal_66=false;
bLocal_67=false;
}
return;
}
BOOL func_84(int iParam0) // Position - 0x3440{
return Global_112733 && iParam0 !=false;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3451{
func_86();
return Global_113648.f_2365.f_539.f_4321;
}


void func_86() // Position - 0x346A{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_73(character) && !func_54(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_73(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x3567{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x35A4{
if(func_73(character)) return func_89(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_89(eCharacter echParam0) // Position - 0x35C9{
return Global_2028[echParam0 /*29*/];
}


void func_90() // Position - 0x35D8{
char* pedheadshotTxdString;
int num;
if(bLocal_61){
if(echLocal_62 !=echLocal_58){
bLocal_61=false;
return;
}
pedheadshotTxdString="CHAR_DEFAULT";
switch (echLocal_62){
case 0:
pedheadshotTxdString="CHAR_MICHAEL";
break;
case 1:
pedheadshotTxdString="CHAR_FRANKLIN";
break;
case 2:
pedheadshotTxdString="CHAR_TREVOR";
break;
case CHAR_MULTIPLAYER:
num=func_93(PLAYER::PLAYER_ID());
if(num==0) return;
else pedheadshotTxdString=PED::GET_PEDHEADSHOT_TXD_STRING(num);
break;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE" /*~1~/100*/);
HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_65);
HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_92(iLocal_63), func_91(iLocal_63), bLocal_64, iLocal_65 - bLocal_64, false, pedheadshotTxdString, pedheadshotTxdString);
bLocal_82=true;
iLocal_83=MISC::GET_GAME_TIMER() + 5000;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_84=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
bLocal_61=false;
}
return;
}

int func_91(int iParam0) // Position - 0x369C{
switch (iParam0){
case 0:
return 23;
case 1:
return 2;
case 3:
return 24;
case 2:
return 25;
case 4:
return 14;
case 5:
return 27;
case 6:
return 17;
case 7:
return 28;
}
return -1;
}


char* func_92(int iParam0) // Position - 0x371B{
switch (iParam0){
case 0:
return "PSF_SPEC_AB" /*Special capacity +*/;
case 1:
return "PSF_STAMINA" /*Stamina +*/;
case 3:
return "PSF_LUNG" /*Lung Capacity +*/;
case 2:
return "PSF_STRENGTH" /*Strength +*/;
case 4:
return "PSF_DRIVING" /*Driving +*/;
case 5:
return "PSF_FLYING" /*Flying +*/;
case 6:
return "PSF_SHOOTING" /*Shooting +*/;
case 7:
return "PSF_STEALTH" /*Stealth +*/;
}
return "ERROR";
}

int func_93(Player plParam0) // Position - 0x37A5{
int num;
num=func_96(plParam0);
if(num==-1){
func_94(plParam0, true);
return 0;
}
Global_1666668[num /*5*/].f_4=1;
return Global_1666668[num /*5*/].f_2;
}


void func_94(Player plParam0, BOOL bParam1) // Position - 0x37DB{
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return;
if(func_96(plParam0) !=-1) return;
if(Global_1666831)if(plParam0==Global_1666831.f_1) return;
if(func_95(plParam0)) return;
if(Global_1666869 >=32) return;
Global_1666836[Global_1666869]=plParam0;
Global_1666869=Global_1666869 + 1;
bParam1;
return;
}
BOOL func_95(Player plParam0) // Position - 0x3847{
int i;
i=0;
for (i=0;
i < Global_1666869;
i=i + 1){
if(Global_1666836[i]==plParam0) return true;
}
return false;
}

int func_96(Player plParam0) // Position - 0x3879{
int i;
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return -1;
if(Global_1666829==0) return -1;
i=0;
for (i=0;
i < Global_1666829;
i=i + 1){
if(Global_1666668[i /*5*/].f_1==plParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[i /*5*/].f_2)) return i;
func_97(i);
return -1;
}}
return -1;
}


void func_97(int iParam0) // Position - 0x38F8{
var unk;
var unk17;
int num;
int i;
if(iParam0 >=Global_1666829) return;
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2)){
TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
if(Global_1666668[iParam0 /*5*/].f_2 !=0){
TEXT_LABEL_ASSIGN_STRING(&unk17, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
unk_0x3D0CB5A9795BD2A8(&unk17, &unk17, &unk, &unk);
}
PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
}
num=iParam0;
for (i=num + 1;
i < Global_1666829;
i=i + 1){
Global_1666668[num /*5*/]={
Global_1666668[i /*5*/] 
};
num=num + 1;
}
func_98(&Global_1666668[num /*5*/]);
Global_1666829=Global_1666829 - 1;
return;
}


void func_98(var uParam0) // Position - 0x39AD{
*uParam0=0;
uParam0->f_1=_INVALID_PLAYER_INDEX();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) uParam0->f_3=NETWORK::GET_NETWORK_TIME();
return;
}


void func_99() // Position - 0x39DA{
float value;
int num;
if(MISC::GET_INDEX_OF_CURRENT_LEVEL() !=LEVEL_GTA5) return;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_103(PLAYER::PLAYER_ID())) return;
if(func_102() !=0) return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_102()==0) iLocal_53=1;
else iLocal_53=0;
if(!func_101()) func_100();
iLocal_55=0;
iLocal_56=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_57=NETWORK::GET_NETWORK_TIME();
iLocal_72=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_73=NETWORK::GET_NETWORK_TIME();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!IS_BIT_SET(Global_2359296[func_81() /*5568*/].f_681.f_1274, 2)){
value=SYSTEM::TO_FLOAT(_MPCHAR_STAT_GET_INT(MP_STAT_UNARMED_HITS, -1, 0)) / 20f;
num=SYSTEM::FLOOR(value);
num=func_69(num, 0, 100);
func_80(3, 2, num);
MISC::SET_BIT(&(Global_2359296[func_81() /*5568*/].f_681.f_1274), 2);
}}
bLocal_59=true;
iLocal_54=1;
return;
}


void func_100() // Position - 0x3AC1{
int i;
var unk;
eMPStat stat;
int j;
int k;
Hash statName;
var unk2;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
for (i=0;
i < 8;
i=i + 1){
if(i !=0){
func_71(3, i, &unk, &stat);
_MPCHAR_STAT_SET_INT(stat, func_53(3, i, -1), -1, true, false);
}}
func_4(0, true, -1, true);
Global_97963=true;
}else{
for (j=0;
j < 3;
j=j + 1){
for (k=0;
k < 8;
k=k + 1){
if(k !=0){
func_71(j, k, &statName, &unk2);
STATS::STAT_SET_INT(statName, func_53(j, k, -1), true);
}}}
Global_113648.f_2365.f_539.f_2387[0]=func_53(0, 0, -1);
Global_113648.f_2365.f_539.f_2387[1]=func_53(1, 0, -1);
Global_113648.f_2365.f_539.f_2387[2]=func_53(2, 0, -1);
Global_113648.f_2365.f_539.f_2354=1;
Global_97963=true;
}
return;
}
BOOL func_101() // Position - 0x3BB5{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
return Global_113648.f_2365.f_539.f_2354;
}

int func_102() // Position - 0x3BD8{
return Global_32163;
}
BOOL func_103(Player plParam0) // Position - 0x3BE3{
if(plParam0==-1) return false;
else return IS_BIT_SET(Global_2672505.f_1, plParam0);
return true;
}


void func_104() // Position - 0x3C05{
if(iLocal_54 !=0 && iLocal_53 !=2){
if(iLocal_53==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_53=2;
if(!func_101()) iLocal_53=2;
}elseif(iLocal_53==1){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_103(PLAYER::PLAYER_ID()) || func_102() !=0) iLocal_53=2;
}
if(iLocal_53==2) iLocal_54=2;
}
return;
}