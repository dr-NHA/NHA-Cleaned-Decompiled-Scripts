//Cleaned With dr NHA's C Script Cleaner V2.8
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
char* sLocal_21=NULL;
float fLocal_22=0f;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
float fLocal_27=0f;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
var uLocal_39=0;
var uLocal_40=3;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=1092616192;
var uLocal_47=1101004800;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=3;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
struct<3> Local_64={
0, 0, 0 
};
struct<3> Local_67={
0, 0, 0 
};
struct<3> Local_70={
0, 0, 0 
};
float fLocal_73=0f;
float fLocal_74=0f;
bool bLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
int iLocal_90[2]={
0, 0 
};
int iLocal_93[2]={
0, 0 
};
int iLocal_96=0;
int iLocal_97=0;
int iLocal_98=0;
var uLocal_99[2]={
0, 0 
};
var uLocal_102=0;
char* sLocal_103=NULL;
char* sLocal_104=NULL;
char* sLocal_105=NULL;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=-1;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=1000;
var uLocal_116=1000;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
#endregion

void __EntryFunction__(){
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
iLocal_20=3;
sLocal_21="NULL";
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_85=-1;
sLocal_103="PMDL_OBJ";
sLocal_104="PMDL_LOC";
sLocal_105="PMDL_BCK";
MISC::SET_MISSION_FLAG(1);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_142(2);
func_114();
}
iLocal_36=func_112();
while (true){
switch (iLocal_37){
case 0:
if(!iLocal_76){
func_107();
}else{
func_106();
}
if(bLocal_75){
iLocal_77=1;
iLocal_37=1;
}
break;
case 1:
if(!func_105()){
switch (iLocal_38){
case 0:
func_102();
break;
case 1:
if(iLocal_36==5 || iLocal_36==6){
func_66();
}else{
func_65();
}
break;
case 2:
func_9();
if(iLocal_36 < 3){
func_7();
}elseif(iLocal_36 > 6){
func_7();
func_2();
}
break;
case 3:
case 4:
func_1();
break;
}}else{
func_1();
}
break;
}
SYSTEM::WAIT(0);
}}


void func_1(){
func_142(2);
func_114();
}


void func_2(){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_96)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, 0)){
iVar0=200;
iVar1=(ENTITY::GET_ENTITY_HEALTH(iLocal_96) - 800);
if(ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_96)){
ENTITY::SET_ENTITY_HEALTH(iLocal_96, (ENTITY::GET_ENTITY_HEALTH(iLocal_96) - 5), 0);
}
if(iVar1 <=0){
iLocal_38=4;
}elseif(iVar1 < 75){
func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
}else{
func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
}}else{
iLocal_38=4;
}}else{
iLocal_38=4;
}}


void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}


void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(iVar0==-1){
if(func_6(0, iVar1)==0){
iVar0=iVar1;
}}
iVar1++;
}
if(iVar0 > -1){
Global_1655472.f_1=1;
func_5(0, iVar0);
Global_1655472.f_1177[iVar0]=uParam0;
Global_1655472.f_1177.f_11[iVar0]=uParam1;
StringCopy(&(Global_1655472.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
Global_1655472.f_1177.f_194[iVar0]=uParam3;
Global_1655472.f_1177.f_183[iVar0]=uParam4;
Global_1655472.f_1177.f_216[iVar0]=uParam5;
Global_1655472.f_1177.f_227[iVar0 /*3*/]=fParam6;
Global_1655472.f_1177.f_227[iVar0 /*3*/].f_1=fParam7;
Global_1655472.f_1177.f_258[iVar0]=iParam8;
Global_1655472.f_1177.f_269[iVar0]=uParam9;
Global_1655472.f_1177.f_312[iVar0]=iParam10;
Global_1655472.f_1177.f_323[iVar0]=iParam11;
Global_1655472.f_1177.f_334[iVar0]=iParam12;
Global_1655472.f_1177.f_345[iVar0]=iParam13;
Global_1655472.f_1172=1;
Global_1655472.f_1177.f_356[iVar0]=iParam14;
Global_1655472.f_1177.f_367[iVar0]=iParam15;
Global_1655472.f_1177.f_378[iVar0]=iParam16;
Global_1655472.f_1177.f_389[iVar0]=iParam17;
Global_1655472.f_1177.f_400[iVar0]=iParam18;
Global_1655472.f_1177.f_411[iVar0]=iParam19;
Global_1655472.f_1177.f_422[iVar0]=iParam20;
Global_1655472.f_1177.f_433[iVar0]=iParam21;
Global_1655472.f_1177.f_444[iVar0]=iParam22;
Global_1655472.f_1177.f_455[iVar0]=iParam23;
Global_1655472.f_1177.f_466[iVar0]=iParam24;
Global_1655472.f_1177.f_205[iVar0]=iParam25;
Global_1655472.f_1177.f_477[iVar0]=iParam26;
Global_1655472.f_1177.f_488[iVar0]=iParam27;
Global_1655472.f_1177.f_499[iVar0]=iParam28;
Global_1655472.f_1177.f_510[iVar0]=iParam29;
Global_1655472.f_1177.f_521[iVar0]=iParam30;
Global_1655472.f_1177.f_532[iVar0]=iParam31;
Global_1655472.f_1177.f_543[iVar0]=iParam32;
Global_1655472.f_1177.f_554[iVar0]=iParam33;
Global_1655472.f_1177.f_565[iVar0]=iParam34;
Global_1655472.f_1177.f_576[iVar0]=iParam35;
Global_1655472.f_1177.f_587[iVar0]=iParam36;
}}


void func_5(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_6(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}


void func_7(){
int iVar0;
iVar0=(iLocal_80 - MISC::GET_GAME_TIMER());
if(iVar0 < 0){
iVar0=0;
}
if(MISC::GET_GAME_TIMER() >=iLocal_84){
func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}else{
func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}
switch (iLocal_81){
case 0:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 10000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 1:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 9000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 2:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 8000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 3:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 7000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 4:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 6000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 5:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 5000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 6:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 4500)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 7:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 4000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 8:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 3500)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 9:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 3000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 10:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 2500)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 11:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 2000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 12:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 1500)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 13:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 1000)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 14:
if(MISC::GET_GAME_TIMER() >=(iLocal_80 - 500)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 15:
if(MISC::GET_GAME_TIMER() >=iLocal_80){
AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
iLocal_81++;
}
break;
case 16:
break;
}
if(MISC::GET_GAME_TIMER() >=iLocal_80){
iLocal_38=3;
}}


void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(iVar0==-1){
if(func_6(7, iVar1)==0){
iVar0=iVar1;
}}
iVar1++;
}
if(iVar0 > -1){
Global_1655472.f_1=1;
func_5(7, iVar0);
Global_1655472.f_4659[iVar0]=iParam0;
StringCopy(&(Global_1655472.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
Global_1655472.f_4659.f_172[iVar0]=iParam2;
Global_1655472.f_4659.f_216[iVar0]=iParam3;
Global_1655472.f_4659.f_183[iVar0]=iParam4;
Global_1655472.f_4659.f_194[iVar0]=iParam5;
Global_1655472.f_4659.f_249[iVar0]=iParam6;
Global_1655472.f_4659.f_260[iVar0]=iParam7;
Global_1655472.f_4659.f_205[iVar0]=iParam8;
Global_1655472.f_4659.f_314[iVar0]=iParam9;
Global_1655472.f_4659.f_325[iVar0]=iParam10;
Global_1655472.f_4659.f_357[iVar0]=iParam11;
Global_1655472.f_4659.f_238[iVar0]=iParam12;
Global_1655472.f_4659.f_271[iVar0]=iParam13;
Global_1655472.f_4659.f_368[iVar0]=iParam14;
Global_1655472.f_4659.f_379[iVar0]=iParam15;
Global_1655472.f_4659.f_390[iVar0]=iParam16;
Global_1655472.f_4659.f_227[iVar0]=iParam17;
}}


void func_9(){
int iVar0;
int iVar1;
if(iLocal_36 >=3 && iLocal_36 <=4){
iVar0=0;
while (iVar0 < iLocal_93){
if(!iLocal_78){
if(!PED::IS_PED_INJURED(iLocal_93[iVar0])){
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_64, 50f, 50f, 50f, 0, 1, 0)){
PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
iLocal_78=1;
}}}elseif(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(!PED::IS_PED_INJURED(iLocal_93[iVar0])){
TASK::TASK_SMART_FLEE_PED(iLocal_93[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_93[iVar0], 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_93[iVar0]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_97)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_97);
}}
iVar0++;
}}
if(func_21(&uLocal_39, Local_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1)){
func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 2000, 0);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_96, 0);
func_14(&uLocal_39, 1, 0);
func_13();
}
iVar1=0;
while (iVar1 < iLocal_90){
if(!PED::IS_PED_INJURED(iLocal_90[iVar1])){
if(!HUD::DOES_BLIP_EXIST(uLocal_99[iVar1])){
uLocal_99[iVar1]=func_10(iLocal_90[iVar1], 1, 145);
TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
TASK::TASK_PERFORM_SEQUENCE(iLocal_90[iVar1], uLocal_120);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
PED::SET_PED_KEEP_TASK(iLocal_90[iVar1], 1);
}
if(!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90[iVar1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_99[iVar1])){
HUD::REMOVE_BLIP(&(uLocal_99[iVar1]));
}
TASK::TASK_SMART_FLEE_PED(iLocal_90[iVar1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_90[iVar1], 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_90[iVar1]));
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_99[iVar1])){
HUD::REMOVE_BLIP(&(uLocal_99[iVar1]));
}
iVar1++;
}}


var func__10(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_11(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
}
return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_12(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_13(){
func_142(1);
func_114();
}


void func_14(var uParam0, bool bParam1, bool bParam2){
int iVar0;
if(MISC::IS_BIT_SET(uParam0->f_13, 30)){
bParam1=true;
}
func_18(uParam0);
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
}
func_17(iVar0, uParam0);
func_16(iVar0, uParam0);
iVar0++;
}
iVar0=0;
while (iVar0 < 31){
if(iVar0 !=8){
MISC::CLEAR_BIT(&(uParam0->f_13), iVar0);
MISC::CLEAR_BIT(&(uParam0->f_14), iVar0);
}
iVar0++;
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
uParam0->f_6=0;
uParam0->f_12=0;
uParam0->f_15=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 1);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 1);
if(bParam2){
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 0);
}
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 0);
if(bParam1){
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] !=PLAYER::PLAYER_PED_ID()){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}
if(!MISC::IS_BIT_SET(uParam0->f_13, 29)){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
}
uParam0->f_17[iVar0]=0;
}
iVar0++;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(bParam2){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
}}
uParam0->f_21=0;
}


var func__15(){
return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}


void func_16(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::CLEAR_BIT(&(uParam1->f_13), 17);
break;
case 1:
MISC::CLEAR_BIT(&(uParam1->f_13), 18);
break;
case 2:
MISC::CLEAR_BIT(&(uParam1->f_13), 19);
break;
}}


void func_17(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::CLEAR_BIT(&(uParam1->f_13), 14);
break;
case 1:
MISC::CLEAR_BIT(&(uParam1->f_13), 15);
break;
case 2:
MISC::CLEAR_BIT(&(uParam1->f_13), 16);
break;
}}


void func_18(var uParam0){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
}}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
if(bParam5){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(!bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
PAD::DISABLE_CONTROL_ACTION(0, 352, 1);
PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
func_20(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_20(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


bool func_21(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15){
return func_22(uParam0, Param1, Param4, func_64(), func_64(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_63(), func_63(), func_63(), func_63(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_22(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36){
int iVar0;
bool bVar1;
int iVar2;
struct<3> Var3;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
Var3={
Param1 + Vector(1f, 0f, 0f) 
};
uParam0->f_17[0]=iParam15;
uParam0->f_17[1]=iParam16;
uParam0->f_17[2]=iParam17;
uParam0->f_16=iParam15;
func_62(uParam0);
func_61(uParam0);
func_60();
if(func_44(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26)){
func_43(sParam20);
func_43(sParam21);
func_43(sParam22);
func_43(sParam23);
if(CAM::IS_SCREEN_FADED_IN()){
bVar1=false;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0)){
MISC::SET_BIT(&(uParam0->f_13), 3);
if(!MISC::IS_BIT_SET(uParam0->f_13, 9)){
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 23)){
MISC::CLEAR_BIT(&(uParam0->f_13), 23);
}
MISC::SET_BIT(&(uParam0->f_13), 9);
bVar1=true;
}}elseif(iParam14==4 || iParam14==5){
if(func_41(uParam0, iParam29)){
MISC::SET_BIT(&(uParam0->f_13), 3);
if(!MISC::IS_BIT_SET(uParam0->f_13, 9)){
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
MISC::SET_BIT(&(uParam0->f_13), 9);
bVar1=true;
}}else{
bVar1=true;
}
if(bVar1){
func_43(sParam24);
func_43(sParam27);
func_43("MORE_SEATS");
if(bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_43(sParam19);
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
if((!func_37(uParam0, 1) && !func_36(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0)){
if(bParam30){
func_34(uParam0, "LOSE_WANTED", 0);
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
}
}
MISC::SET_BIT(&(uParam0->f_13), 0);
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
func_43("LOSE_WANTED");
MISC::CLEAR_BIT(&(uParam0->f_13), 0);
MISC::SET_BIT(&(uParam0->f_13), 1);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 1)){
if(!func_37(uParam0, 1)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
}
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}
if(!HUD::DOES_BLIP_EXIST(uParam0->f_5)){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
uParam0->f_5=func_31(Var3, 0);
if(!iParam31==-1){
HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
}
if(bParam35){
func_30(uParam0->f_5, uParam0);
}}elseif(!func_29(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f, 0)){
HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
if(bParam35){
func_30(uParam0->f_5, uParam0);
}}
if(!func_37(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 2)){
func_34(uParam0, sParam19, 0);
MISC::SET_BIT(&(uParam0->f_13), 2);
}}
if(iParam14==4 || iParam14==5){
if(MISC::IS_BIT_SET(uParam0->f_13, 13)){
iParam13=0;
}}
bVar1=false;
iVar6=0;
iVar7=0;
if((iParam14==1 || iParam14==3) || iParam14==5){
iVar6=1;
}
if(iParam14==2 || iParam14==3){
iVar7=1;
}elseif(iParam14==4 || iParam14==5){
iVar7=2;
}
if(bParam28){
ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, iParam36, 0, iVar6, iVar7)){
bVar1=true;
}}elseif(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7)){
bVar1=true;
}
if(bVar1){
bVar1=true;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar2])){
if(iParam14==4 || iParam14==5){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0)){
bVar1=false;
}}elseif(iParam18 !=0){
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0)){
bVar1=false;
}}elseif(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], func_15()) || !func_27(uParam0->f_17[iVar2], 1)){
bVar1=false;
}}
iVar2++;
}
if(bVar1){
if(func_24(uParam0)){
func_43(sParam19);
func_43(sParam24);
func_43(sParam20);
func_43(sParam21);
func_43(sParam22);
func_43(sParam23);
func_43("LOSE_WANTED");
func_43("MORE_SEATS");
func_43(sParam27);
func_14(uParam0, 1, 0);
return 1;
}
}}}}elseif(ENTITY::DOES_ENTITY_EXIST(iParam18)){
if((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22))){
func_43(sParam24);
func_43(sParam27);
if(HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
HUD::REMOVE_BLIP(uParam0);
func_43(sParam19);
}
if((!func_37(uParam0, 1) && !func_36(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0)){
if(bParam30){
func_34(uParam0, "LOSE_WANTED", 0);
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
}
}
MISC::SET_BIT(&(uParam0->f_13), 0);
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
func_43("LOSE_WANTED");
MISC::CLEAR_BIT(&(uParam0->f_13), 0);
MISC::SET_BIT(&(uParam0->f_13), 1);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 1)){
if(!func_37(uParam0, 1)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
}
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0)){
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_43(sParam19);
}
*uParam0=func_23(iParam18, 0, 0);
HUD::SET_BLIP_DISPLAY(*uParam0, 2);
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_30(*uParam0, uParam0);
}
}
if(!func_37(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_34(uParam0, sParam24, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}elseif(MISC::IS_BIT_SET(uParam0->f_13, 9)){
if(!MISC::IS_STRING_NULL(sParam27)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_34(uParam0, sParam27, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_34(uParam0, sParam24, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}
if(!MISC::IS_BIT_SET(uParam0->f_13, 23)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_32(uParam0->f_17[0], "GET_IN_CAR", 3);
}
MISC::SET_BIT(&(uParam0->f_13), 23);
}}
}}}}else{
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_43(sParam19);
}
if(iParam14==4 || iParam14==5){
if(iParam29 > 0){
if(!func_37(uParam0, 2)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!MISC::IS_BIT_SET(uParam0->f_13, 13)){
iVar8=0;
iVar9=0;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar2])){
iVar8++;
}
iVar2++;
}
iVar9=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar9])){
func_32(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
}
func_34(uParam0, "MORE_SEATS", 0);
MISC::SET_BIT(&(uParam0->f_13), 13);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_34(uParam0, sParam24, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
if(MISC::IS_BIT_SET(uParam0->f_13, 9)){
func_34(uParam0, sParam27, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}
}}elseif(!func_37(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_34(uParam0, sParam24, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
elseif(MISC::IS_BIT_SET(uParam0->f_13, 9)){
if(!MISC::IS_STRING_NULL(sParam27)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_34(uParam0, sParam27, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_34(uParam0, sParam24, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}
}}}}}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
MISC::CLEAR_BIT(&(uParam0->f_13), 0);
}
func_43(sParam19);
func_43(sParam24);
func_43(sParam27);
func_43(sParam24);
func_43("LOSE_WANTED");
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}}
MISC::CLEAR_BIT(&(uParam0->f_13), 11);
MISC::CLEAR_BIT(&(uParam0->f_13), 12);
return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2){
return func_11(iParam0, !bParam1, bParam2);
}

int func_24(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_13, 12)){
if(func_26(PLAYER::PLAYER_PED_ID())){
if(func_25(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_13, 7)){
return 1;
}}}elseif(func_25(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_13, 7)){
return 1;
}
return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
if(MISC::IS_MINIGAME_IN_PROGRESS()){
return 0;
}
if(bParam0){
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}}
iVar0=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
return 0;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(bParam0){
if(ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return 0;
}}
if(bParam2){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) !=PLAYER::PLAYER_PED_ID()){
return 0;
}}}
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f){
return 0;
}}}elseif(bParam1){
return 0;
}
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())){
return 0;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}

int func_26(int iParam0){
float fVar0;
if(!PED::IS_PED_INJURED(iParam0)){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 > -0.5f && fVar0 < 0.5f){
return 1;
}}
return 0;
}

int func_27(int iParam0, int iParam1){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1){
if(func_28(PLAYER::PLAYER_PED_ID(), iParam0)){
PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
return 1;
}}elseif(PED::IS_PED_GROUP_MEMBER(iParam0, func_15())){
PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
return 1;
}}else{
return 1;
}
return 0;
}

int func_28(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(!PED::IS_PED_INJURED(iParam1)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0)){
return 1;
}}}}}
return 0;
}

int func_29(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7){
if(fParam6 < 0f){
fParam6=0f;
}
if(!bParam7){
if(MISC::ABSF((Param0.f_0 - Param3.f_0)) <=fParam6){
if(MISC::ABSF((Param0.f_1 - Param3.f_1)) <=fParam6){
if(MISC::ABSF((Param0.f_2 - Param3.f_2)) <=fParam6){
return 1;
}}}}elseif(MISC::ABSF((Param0.f_0 - Param3.f_0)) <=fParam6){
if(MISC::ABSF((Param0.f_1 - Param3.f_1)) <=fParam6){
return 1;
}}
return 0;
}


void func_30(var uParam0, var uParam1){
if(HUD::DOES_BLIP_EXIST(uParam0)){
if(HUD::DOES_BLIP_EXIST(uParam1->f_6)){
HUD::SET_BLIP_ROUTE(uParam1->f_6, 0);
}
HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
HUD::CLEAR_GPS_MULTI_ROUTE();
uParam1->f_6=uParam0;
HUD::SET_BLIP_ROUTE(uParam0, 1);
}}


var func__31(struct<3> Param0, int iParam3){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam3);
return uVar0;
}


void func_32(var uParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_33(iParam2), 1);
}

int func_33(int iParam0){
int iVar0;
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
iVar0=0;
return iVar0;
}


void func_34(var uParam0, char* sParam1, bool bParam2){
if(!bParam2){
if(!MISC::IS_STRING_NULL(sParam1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "")){
func_35(sParam1, 7500, 1);
}}}
uParam0->f_10=MISC::GET_GAME_TIMER();
}


void func_35(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_36(var uParam0){
if(!PED::IS_PED_INJURED(uParam0->f_16)){
if(AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_16)){
return 1;
}}
return 0;
}

int func_37(var uParam0, int iParam1){
if(iParam1 !=1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
return 1;
}
if(func_40(uParam0)){
return 1;
}}
if(iParam1 !=2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_39() && !func_38()){
return 1;
}}
return 0;
}

int func_38(){
if(Global_22736==1){
return 1;
}
return 0;
}

int func_39(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_40(var uParam0){
int iVar0;
int iVar1;
iVar1=MISC::GET_GAME_TIMER();
iVar0=(iVar1 - uParam0->f_10);
if(iVar0 < 35){
return 1;
}
return 0;
}

int func_41(var uParam0, int iParam1){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_42(iVar0, uParam0, iParam1)){
return 1;
}}
return 0;
}

int func_42(int iParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
iVar2=0;
while (iVar2 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2])){
iVar0++;
}
iVar2++;
}
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
if(iParam2 > 0){
if(iVar1 >=iParam2){
if(iParam2 > 1){
if(!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1)){
return 1;
}}else{
return 1;
}}}elseif(iVar1 >=iVar0){
if(iVar0 > 1){
if(!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1)){
return 1;
}}else{
return 1;
}}}
return 0;
}


void func_43(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
HUD::CLEAR_THIS_PRINT(sParam0);
}}

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7[3];
bool bVar11;
bool bVar12;
int iVar13;
int iVar14;
var uVar15[3];
var uVar19[3];
bool bVar23;
var uVar24;
int iVar25;
int iVar26;
int iVar27;
struct<3> Var28;
int iVar31;
int iVar32;
iVar4=0;
uParam0->f_17[0]=uParam1;
uParam0->f_17[1]=uParam2;
uParam0->f_17[2]=uParam3;
uParam0->f_16=uParam1;
uVar15[0]=uParam4;
uVar15[1]=uParam5;
uVar15[2]=uParam6;
uVar19[0]=uParam13;
uVar19[1]=uParam14;
uVar19[2]=uParam15;
iVar6=1;
iVar1=0;
iVar2=0;
iVar3=0;
iVar7[0]=0;
iVar7[1]=0;
iVar7[2]=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
iVar3++;
}
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 29) && !MISC::IS_BIT_SET(uParam0->f_13, 28)){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
}
if(iVar0==2){
MISC::SET_BIT(&(uParam0->f_13), 28);
}}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 29) && MISC::IS_BIT_SET(uParam0->f_13, 28)){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
}
if(iVar0==2){
MISC::CLEAR_BIT(&(uParam0->f_13), 28);
}}
iVar0++;
}
if(iVar3==0){
return 1;
}
if(MISC::IS_BIT_SET(uParam0->f_13, 26)){
bVar23=false;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21)){
iVar25=64;
iVar25 |=65536;
iVar25 |=2048;
iVar25 |=1;
iVar25 |=2;
iVar25 |=4;
iVar25 |=32;
iVar25 |=16;
iVar25 |=8;
uVar24=VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar25);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar24, 0)){
uParam0->f_21=iVar24;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0)){
if(SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17){
if(func_42(uParam0->f_21, uParam0, iVar3)){
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}
if(TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"))==7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21)){
if(!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
}
}}
iVar0++;
}
return 1;
}
else{
bVar23=true;
}}else{
bVar23=true;
}}else{
bVar23=true;
}}else{
bVar23=true;
}}else{
bVar23=true;
}
if(bVar23){
MISC::CLEAR_BIT(&(uParam0->f_13), 26);
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
if(func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1)){
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
}}}
iVar0++;
}}}
if(!MISC::IS_BIT_SET(uParam0->f_13, 26)){
if((!func_56(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10)){
iVar13=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 13)){
if(iParam16==4 || iParam16==5){
}
if(!func_37(uParam0, 2)){
iVar26=0;
iVar27=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
iVar26++;
}
iVar0++;
}
iVar27=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar27])){
func_32(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
}
func_34(uParam0, "MORE_SEATS", 0);
MISC::SET_BIT(&(uParam0->f_13), 13);
}}
bVar12=true;
}}else{
bVar12=false;
MISC::CLEAR_BIT(&(uParam0->f_13), 13);
func_43("MORE_SEATS");
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam10)){
if((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2])){
if(!MISC::IS_BIT_SET(uParam0->f_13, 31)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_37(uParam0, 2)){
iVar13=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_55(iVar13, uParam0)){
func_34(uParam0, "CMN_VEHSUIT", 0);
MISC::SET_BIT(&(uParam0->f_13), 31);
}}}elseif(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
MISC::CLEAR_BIT(&(uParam0->f_13), 31);
func_43("CMN_VEHSUIT");
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10)){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 75)){
MISC::SET_BIT(&(uParam0->f_13), 21);
}}elseif(MISC::IS_BIT_SET(uParam0->f_13, 21)){
MISC::CLEAR_BIT(&(uParam0->f_13), 21);
}}
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
}else{
PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
}
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar13=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0)){
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
if(!func_56(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!func_54(uParam0->f_17[iVar0])){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}}
}
if(iVar13 !=iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13)){
if(ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13)){
Var28={
ENTITY::GET_ENTITY_COORDS(iVar13, 1) 
};
if(Var28.f_2 < -1f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
}}}
}}
bVar11=true;
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
iVar13=PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar13, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(iVar13 !=iParam10){
if(!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13)){
if(ENTITY::GET_ENTITY_SPEED(iVar13) > 5f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
}else{
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
}
bVar11=false;
}
}}else{
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar31=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, 0)){
if(iVar13 !=iVar31){
if(ENTITY::GET_ENTITY_SPEED(iVar13) > 5f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
}else{
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
}
bVar11=false;
}
}}}
}}
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
iVar32=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar32)){
if(func_42(iVar32, uParam0, 0)){
if(func_53(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_13, 27)){
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
func_16(iVar0, uParam0);
iVar4++;
if(iVar4 >=iVar3){
MISC::SET_BIT(&(uParam0->f_13), 27);
}}}elseif(!func_53(iVar0, uParam0)){
if(ENTITY::GET_ENTITY_MODEL(iVar32)==joaat("sentinel2")){
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
}else{
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
}
func_52(iVar0, uParam0);
}
}}
if((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10)){
if(func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11)){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
if(((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])){
iVar14=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar14==7){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
bVar11=false;
}}
}
if(bVar11){
if(!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
uParam0->f_11=MISC::GET_GAME_TIMER();
uParam0->f_1[iVar0]=func_23(uParam0->f_17[iVar0], 0, 0);
HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
if(bParam9){
func_30(uParam0->f_1[iVar0], uParam0);
}}
}
iVar6=0;
}elseif(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
if(((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_43(uVar15[iVar0]);
}
}
else{
if(bParam9){
func_30(uParam0->f_1[iVar0], uParam0);
}
iVar6=0;
}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10)){
if((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0)){
if(!func_27(uParam0->f_17[iVar0], 1)){
if(func_26(uParam0->f_17[iVar0])){
iVar14=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
if(iVar14==7){
TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
}}
}
}}else{
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
if((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}
}
iVar14=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar14==7 && !func_59(uParam0->f_17[iVar0], iParam10)){
if(((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_49(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
if(MISC::IS_BIT_SET(uParam0->f_13, 10)){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
}
TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
}
}
elseif(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)){
uParam0->f_1[iVar0]=func_23(uParam0->f_17[iVar0], 0, 0);
HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
iVar6=0;
}}}elseif(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
if(func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11)){
if(!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])){
iVar14=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar14==7){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
}}}
}
elseif(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10)){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15())){
if(!MISC::IS_BIT_SET(uParam0->f_13, 21)){
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
}}elseif(MISC::IS_BIT_SET(uParam0->f_13, 21)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
MISC::SET_BIT(&(uParam0->f_13), 21);
}
}
elseif(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}}elseif(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_43(uVar15[iVar0]);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
iVar7[iVar0]=1;
iVar1++;
}
iVar0++;
}
if(!func_37(uParam0, 2)){
if(iVar1 > 0){
iVar0=0;
while (iVar0 < 3){
if(iVar7[iVar0]){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(func_54(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0)){
iVar1=(iVar1 - 1);
iVar7[iVar0]=0;
}
}}elseif(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0])){
}}
iVar0++;
}}
iVar5=MISC::GET_GAME_TIMER();
if((iVar5 - uParam0->f_11) > 1500 || iVar3==1){
if(iVar1 > 0){
if(uParam0->f_12 < iVar1){
if((iVar1==iVar3 || (iVar2 + iVar1)==iVar3) && iVar3 > 1){
if(!MISC::IS_BIT_SET(uParam0->f_13, 5)){
func_34(uParam0, sParam7, 0);
MISC::SET_BIT(&(uParam0->f_13), 5);
uParam0->f_12=iVar1;
}else{
uParam0->f_12=iVar1;
}
}
else{
iVar0=0;
while (iVar0 < 3){
if(iVar7[iVar0]){
if(!func_48(iVar0, uParam0)){
if(!MISC::IS_STRING_NULL(uVar19[iVar0])){
if(!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], "")){
func_46(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
func_45(iVar0, uParam0);
uParam0->f_12=iVar1;
}
}
if(!func_48(iVar0, uParam0)){
func_34(uParam0, uVar15[iVar0], 0);
func_45(iVar0, uParam0);
uParam0->f_12=iVar1;
}
}
else{
uParam0->f_12=iVar1;
}}
iVar0++;
}
}}}else{
uParam0->f_12=0;
}}}
MISC::CLEAR_BIT(&(uParam0->f_13), 10);
if(iVar6 && !bVar12){
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_43(uVar15[iVar0]);
}
iVar0++;
}
func_43("MORE_SEATS");
return 1;
}}
return 0;
}


void func_45(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::SET_BIT(&(uParam1->f_13), 14);
break;
case 1:
MISC::SET_BIT(&(uParam1->f_13), 15);
break;
case 2:
MISC::SET_BIT(&(uParam1->f_13), 16);
break;
}}


void func_46(var uParam0, char* sParam1, var uParam2, bool bParam3){
if(!bParam3){
if(!MISC::IS_STRING_NULL(sParam1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "")){
func_47(sParam1, uParam2, 7500, 1);
}}}
uParam0->f_10=MISC::GET_GAME_TIMER();
}


void func_47(char* sParam0, var uParam1, int iParam2, int iParam3){
iParam3=iParam3;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_48(int iParam0, var uParam1){
switch (iParam0){
case 0:
return MISC::IS_BIT_SET(uParam1->f_13, 14);
case 1:
return MISC::IS_BIT_SET(uParam1->f_13, 15);
case 2:
return MISC::IS_BIT_SET(uParam1->f_13, 16);
default:
}
return 0;
}

int func_49(int iParam0, float fParam1){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1){
return 1;
}}}
return 0;
}

int func_50(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(!PED::IS_PED_GROUP_MEMBER(iParam0, func_15())){
iVar0=PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0)){
if(iVar0==iParam1){
return 1;
}}}}}
return 0;
}

int func_51(int iParam0, int iParam1){
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
return 1;
}}}}
return 0;
}


void func_52(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::SET_BIT(&(uParam1->f_13), 17);
break;
case 1:
MISC::SET_BIT(&(uParam1->f_13), 18);
break;
case 2:
MISC::SET_BIT(&(uParam1->f_13), 19);
break;
}}

int func_53(int iParam0, var uParam1){
switch (iParam0){
case 0:
return MISC::IS_BIT_SET(uParam1->f_13, 17);
case 1:
return MISC::IS_BIT_SET(uParam1->f_13, 18);
case 2:
return MISC::IS_BIT_SET(uParam1->f_13, 19);
default:
}
return 0;
}

int func_54(int iParam0){
int iVar0;
int iVar1;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(!PED::IS_PED_INJURED(iParam0)){
iVar1=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)){
if(iVar0==iVar1){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0)){
return 1;
}}}}}}
return 0;
}

int func_55(int iParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("coach")){
iVar0=0;
iVar1=0;
iVar2=0;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam1->f_17[iVar2])){
iVar0++;
}
iVar2++;
}
iVar3=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
if(!PED::IS_PED_INJURED(iVar3)){
if((iVar3==uParam1->f_17[0] || iVar3==uParam1->f_17[1]) || iVar3==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
if(!PED::IS_PED_INJURED(iVar4)){
if((iVar4==uParam1->f_17[0] || iVar4==uParam1->f_17[1]) || iVar4==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
iVar5=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
if(!PED::IS_PED_INJURED(iVar5)){
if((iVar5==uParam1->f_17[0] || iVar5==uParam1->f_17[1]) || iVar5==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
if(iVar1 < iVar0){
return 1;
}}}
return 0;
}

int func_56(var uParam0){
var uVar0;
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_42(uVar0, uParam0, 0)){
return 1;
}}
return 0;
}

int func_57(var uParam0, int iParam1, float fParam2, bool bParam3){
var uVar0;
if(!PED::IS_PED_INJURED(iParam1)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
if(!ENTITY::IS_ENTITY_DEAD(uVar0, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0)){
if(func_56(uParam0)){
return 1;
}}elseif(bParam3){
return 1;
}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)){
return 1;
}}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)){
if(!bParam3){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(func_42(iVar0, uParam0, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(func_58(iVar0)){
return 1;
}
}}}else{
return 1;
}}else{
return 1;
}}}
return 0;
}

int func_58(int iParam0){
float fVar0;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 > -0.5f && fVar0 < 0.5f){
return 1;
}}
return 0;
}

int func_59(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(iVar0==iParam1){
return 1;
}}}
return 0;
}


void func_60(){
int iVar0;
int iVar1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar0=PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
if(!PED::IS_PED_INJURED(iVar1)){
if(iVar1 !=PLAYER::PLAYER_PED_ID()){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
if(!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
}}}}}}}


void func_61(var uParam0){
int iVar0;
if(!MISC::IS_BIT_SET(uParam0->f_13, 25)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 0);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 1);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
}}
iVar0++;
}
MISC::SET_BIT(&(uParam0->f_13), 25);
}}


void func_62(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 0);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 0);
}}}
iVar0++;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
}}}}


var func__63(){
var uVar0;
return uVar0;
}


Vector3 func__64(){
struct<3> Var0;
return Var0;
}


void func_65(){
int iVar0;
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_96, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_102)){
HUD::REMOVE_BLIP(&uLocal_102);
}
if(iLocal_36 <=2){
iLocal_80=(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_82) + iLocal_83));
iLocal_80=(iLocal_80 + MISC::GET_GAME_TIMER());
iLocal_84=(iLocal_80 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
}elseif(iLocal_36 > 6){
iLocal_80=(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_82) + iLocal_83));
iLocal_80=(iLocal_80 + MISC::GET_GAME_TIMER());
iLocal_84=(iLocal_80 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
}elseif(iLocal_36 >=3 && iLocal_36 <=4){
iLocal_97=VEHICLE::CREATE_VEHICLE(iLocal_89, Local_70, fLocal_74, 1, 1, 0);
iLocal_93[0]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_97, 6, iLocal_87, -1, 1, 1);
iLocal_93[1]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_97, 6, iLocal_87, 0, 1, 1);
PED::ADD_RELATIONSHIP_GROUP("rghCop", &uLocal_118);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, uLocal_118, joaat("player"));
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_93[0], 39, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_93[1], 39, 1);
iVar0=0;
while (iVar0 < iLocal_93){
WEAPON::GIVE_WEAPON_TO_PED(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
PED::SET_PED_SEEING_RANGE(iLocal_93[iVar0], 100f);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_93[iVar0], uLocal_118);
iVar0++;
}}
iLocal_38=2;
}}


void func_66(){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(iLocal_96, 0)){
if(func_101() || PED::IS_PED_INJURED(iLocal_90[0])){
iVar0=0;
while (iVar0 < iLocal_90){
if(!PED::IS_PED_INJURED(iLocal_90[iVar0])){
if(!HUD::DOES_BLIP_EXIST(uLocal_99[iVar0])){
uLocal_99[iVar0]=func_10(iLocal_90[iVar0], 1, 145);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_90[iVar0], 1, 0);
TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
TASK::TASK_PERFORM_SEQUENCE(iLocal_90[iVar0], uLocal_120);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_99[iVar0])){
HUD::REMOVE_BLIP(&(uLocal_99[iVar0]));
}
iVar0++;
}}elseif(!iLocal_79){
if(!PED::IS_PED_INJURED(iLocal_90[0])){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0)){
TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_90[0], iLocal_96, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, 1);
iLocal_79=1;
}}}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_96, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_102)){
HUD::REMOVE_BLIP(&uLocal_102);
}
func_100(&uLocal_106, 0, 0);
iLocal_38=2;
}elseif(VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_96, -1, 0) || PED::IS_PED_INJURED(iLocal_90[0])){
func_100(&uLocal_106, 0, 0);
}else{
func_67();
}}}


void func_67(){
if(!PED::IS_PED_INJURED(iLocal_90[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_96, 0)){
if(PED::IS_PED_IN_VEHICLE(iLocal_90[0], iLocal_96, 0)){
func_68(&uLocal_106, iLocal_96, 0, 0, 1, 1, 1);
}}}


void func_68(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6){
func_69(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}


void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9){
func_70(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}


void func_70(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
func_100(uParam0, 0, 0);
}
uParam0->f_6=2;
func_71(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}


void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9){
int iVar0;
int iVar1;
if(uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE()){
if(MISC::GET_GAME_TIMER() >=(uParam0->f_8 + uParam0->f_9)){
uParam0->f_1=0;
}}
iVar0=sParam5;
if(MISC::IS_STRING_NULL(iVar0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0="CMN_HINT";
}else{
iVar0="FM_IHELP_HNT";
}}
if(func_99(iVar0)){
func_98();
}
if(func_97(uParam1) && ENTITY::IS_ENTITY_VISIBLE(uParam1)){
iVar1=0;
if(ENTITY::IS_ENTITY_A_PED(uParam1)){
PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
if(PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1))){
iVar1=1;
}}elseif(ENTITY::IS_ENTITY_A_VEHICLE(iParam1)){
VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
if(VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1))){
iVar1=1;
}}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam1)){
OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
if(OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1))){
iVar1=1;
}}
if(!CAM::IS_GAMEPLAY_HINT_ACTIVE()){
if(func_92(uParam0, bParam7, bParam9, 0)){
func_88(uParam0, iParam1, Param2, iParam6);
}
if(*uParam0){
*uParam0=0;
}elseif(uParam0->f_6==2){
if(func_76(iVar0)){
if((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8){
if(!func_99(iVar0)){
func_75(iVar0, -1);
uParam0->f_3=iVar0;
if(MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0)){
func_74(1);
}}
}}}}elseif(func_76(iVar0)){
if(MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)){
if(((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8){
if(!func_99(iVar0)){
func_75(iVar0, -1);
uParam0->f_3=iVar0;
if(MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0)){
func_74(1);
}
}}}}}else{
if(!MISC::IS_STRING_NULL(sParam5)){
if(func_99(sParam5)){
HUD::CLEAR_HELP(1);
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==4){
func_100(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==4){
func_100(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==4){
func_100(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==4){
func_100(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==4){
func_100(uParam0, iVar0, 1);
}}elseif(CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==4){
func_100(uParam0, iVar0, 1);
}}
if(!func_92(uParam0, bParam7, bParam9, 0)){
if((!*uParam0 && !uParam0->f_1) && !func_73(uParam0)){
func_72(uParam0);
}}}}else{
func_100(uParam0, iVar0, 0);
}}


void func_72(var uParam0){
if(func_97(PLAYER::PLAYER_PED_ID())){
TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
CAM::STOP_GAMEPLAY_HINT(0);
AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
if(uParam0->f_11){
GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
uParam0->f_11=0;
}}
uParam0->f_2=-1;
*uParam0=1;
}

int func_73(var uParam0){
int iVar0;
if(uParam0->f_2 > 0){
iVar0=(uParam0->f_10 / 2);
if(uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER(){
return 1;
}}
return 0;
}

int func_74(bool bParam0){
switch (Global_43257){
case 0:
case 3:
if(bParam0){
Global_113648.f_10051.f_100++;
}
return Global_113648.f_10051.f_100;
break;
case 4:
if(bParam0){
Global_113648.f_10051.f_101++;
}
return Global_113648.f_10051.f_101;
break;
case 5:
case 15:
if(bParam0){
Global_113648.f_10051.f_102++;
}
return Global_113648.f_10051.f_102;
break;
default:
break;
}
return 3;
}


void func_75(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_76(char* sParam0){
if(!func_77(1, 1, 0)){
if((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_99(sParam0)) || func_99("CMN_HINT")){
HUD::CLEAR_HELP(1);
}
return 0;
}
switch (Global_43257){
case 0:
case 3:
if(func_74(0) < 3){
return 1;
}
break;
case 4:
if(func_74(0) < 1){
return 1;
}
break;
case 5:
case 15:
if(func_74(0) < 1){
return 1;
}
break;
default:
break;
}
return 0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(bParam0){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return 0;
}}
if(bParam2){
return 1;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return 0;
}
if(func_87(0)){
return 0;
}
if(func_86()){
return 0;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 0;
}
if(Global_75693){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
return 0;
}
if(Global_60543){
return 0;
}
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==4){
return 0;
}}elseif(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==4){
return 0;
}}elseif(CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==4){
return 0;
}
if(CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND()){
return 0;
}}}
if((func_85() || func_84(Global_4718592.f_166301)) || func_83()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=func_82(PLAYER::PLAYER_PED_ID(), 0);
if(((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("apc") && iVar1 !=-1)) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("akula") && iVar1 !=-1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("riot2") && iVar1==0) && func_81(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) !=-1)){
return 0;
}}}
if(Global_1962010){
return 0;
}
if(func_78(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}

int func_78(int iParam0){
if(iParam0 !=func_80()){
if(func_79(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && iParam0==PLAYER::PLAYER_ID()) && func_79(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_79(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672505.f_3){
return Global_2672505.f_2;
}elseif(Global_2657589[iVar0 /*466*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}

int func_80(){
return -1;
}

int func_81(int iParam0, int iParam1){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
switch (iParam1){
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
return 1;
break;
default:
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0){
return 1;
}
break;
}}}
return 0;
}

int func_82(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
if(iVar1==1){
iVar3=-1;
return iVar3;
}
iVar2=0;
while (iVar2 < iVar1){
iVar3=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0)==iParam0){
return iVar3;
}}
iVar2++;
}}}}
return iVar3;
}


var func__83(){
return Global_2683862.f_19;
}


bool func_84(int iParam0){
return iParam0==51;
}


var func__85(){
return Global_2683862.f_18;
}


bool func_86(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_87(int iParam0){
if(iParam0==1){
if(Global_20383.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8253, 14)){
return 1;
}else{
return 0;
}}else{
return 0;
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
if(Global_20383.f_1 > 3){
return 1;
}
return 0;
}


void func_88(var uParam0, int iParam1, struct<3> Param2, int iParam5){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(Global_1581968==1){
return;
}
if(ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
func_100(uParam0, 0, 0);
}
if(func_91(Param2, 0f, 0f, 0f, 0)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
iVar0=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
if(!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
if(!func_89()){
Param2={
0f, 0f, 1f 
};
}}elseif(PED::IS_PED_MALE(iVar0)){
Param2={
0f, 0f, 1f 
};
}}}}
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
iVar1=uParam0->f_9;
iVar2=uParam0->f_10;
if(iParam5==1726668277){
if(iVar1 < 1500){
iVar1=1500;
}
if(iVar2 < 1500){
iVar2=1500;
}}
CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
iVar3=2048;
iVar4=3;
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
uParam0->f_11=1;
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_1=1;
*uParam0=0;
}


bool func_89(){
return func_90(PLAYER::PLAYER_ID());
}

int func_90(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}


bool func_91(struct<3> Param0, struct<3> Param3, bool bParam6){
if(bParam6){
return (Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1);
}
return ((Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1) && Param0.f_2==Param3.f_2);
}

int func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3){
if(uParam0->f_1){
if(MISC::GET_GAME_TIMER() >=(uParam0->f_8 + uParam0->f_9)){
uParam0->f_1=0;
}}
switch (uParam0->f_5){
case 0:
uParam0->f_7=0;
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_96(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(func_95(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==1){
if(func_95(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==2){
if(func_96(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}
if(func_73(uParam0)){
uParam0->f_7=1;
uParam0->f_5=4;
}
break;
case 1:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) <=500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_96(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(!func_95(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==1){
if(!func_95(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==2){
if(!func_96(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}}else{
uParam0->f_5=2;
}
break;
case 2:
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_96(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(!func_95(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(!func_95(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(!func_96(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}
break;
case 3:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_94(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(func_93(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_93(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(func_94(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}}
break;
case 4:
if(!func_73(uParam0)){
uParam0->f_5=0;
}
break;
}
if(!func_77(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
uParam0->f_7=0;
}
if(uParam0->f_7){
func_98();
return 1;
}else{
return 0;
}
return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2){
if(!func_77(bParam0, bParam1, bParam2)){
return 0;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80)){
return 1;
}}}
return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2){
if(!func_77(bParam0, bParam1, bParam2)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE()){
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80)){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
return 1;
}}}
return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2){
if(!func_77(bParam0, bParam1, bParam2)){
return 0;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116){
return 1;
}}}
return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2){
if(!func_77(bParam0, bParam1, bParam2)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE()){
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
return 1;
}}}
return 0;
}

int func_97(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0)){
return 1;
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
if(!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))){
return 1;
}}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
return 1;
}}
return 0;
}


void func_98(){
MISC::SET_BIT(&Global_8254, 4);
}


bool func_99(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_100(var uParam0, int iParam1, int iParam2){
char* sVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_2793044.f_4690, 26)){
return;
}}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(iParam2);
GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
if(uParam0->f_11){
GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
uParam0->f_11=0;
}}
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
uParam0->f_1=0;
*uParam0=0;
uParam0->f_2=-1;
uParam0->f_8=0;
uParam0->f_5=0;
uParam0->f_6=0;
sVar0=iParam1;
if(MISC::IS_STRING_NULL(sVar0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
sVar0="CMN_HINT";
}else{
sVar0="FM_IHELP_HNT";
}}
if(!MISC::IS_STRING_NULL(uParam0->f_3)){
if(func_99(uParam0->f_3)){
HUD::CLEAR_HELP(1);
}}
if(!MISC::IS_STRING_NULL(sVar0)){
if(func_99(sVar0)){
HUD::CLEAR_HELP(1);
}}}

int func_101(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_96)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_96, 0)){
if((((((ENTITY::GET_ENTITY_HEALTH(iLocal_96) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_96) < 200f) || FIRE::IS_ENTITY_ON_FIRE(iLocal_96)) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 1, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 5, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 4, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 1, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_96, 5, 0))){
return 1;
}}}
return 0;
}


void func_102(){
int iVar0;
int iVar1;
iLocal_96=func_104(0);
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, 0)){
iLocal_96=VEHICLE::CREATE_VEHICLE(iLocal_88, Local_64, uLocal_73, 1, 1, 0);
iVar0=1;
while (iVar0 <=8){
VEHICLE::SET_VEHICLE_EXTRA(iLocal_96, iVar0, 1);
iVar0++;
}
if(iLocal_85 !=-1){
VEHICLE::SET_VEHICLE_EXTRA(iLocal_96, iLocal_85, 0);
}}
VEHICLE::SET_VEHICLE_IS_WANTED(iLocal_96, 1);
uLocal_102=func_103(iLocal_96, 0, 0);
if(iLocal_36 !=5 && iLocal_36 !=6){
if(iLocal_36 > 6){
ENTITY::SET_ENTITY_PROOFS(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
}
func_35(sLocal_103, 7500, 1);
}else{
iLocal_90[0]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_96, 26, iLocal_86, -1, 1, 1);
iLocal_90[1]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_96, 26, iLocal_86, 0, 1, 1);
PED::ADD_RELATIONSHIP_GROUP("rghCriminal", &uLocal_119);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_119, joaat("player"));
iVar1=0;
while (iVar1 < iLocal_90){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90[iVar1], 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_90[iVar1], uLocal_119);
iVar1++;
}
TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_90[0], iLocal_96, 25f, 786599);
func_35("PMDL_REC", 7500, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)){
iLocal_98=PLAYER::GET_PLAYERS_LAST_VEHICLE();
}
iLocal_38=1;
}

int func_103(var uParam0, bool bParam1, bool bParam2){
return func_11(uParam0, !bParam1, bParam2);
}

int func_104(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112358.f_222[iParam0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112358.f_222[iParam0], 1, 1);
return Global_112358.f_222[iParam0];
}
return 0;
}

int func_105(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_96)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, 0)){
if(!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_96, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, 0, 1, 0)){
return 1;
}}else{
return 1;
}}
if(PED::IS_PED_INJURED(iLocal_90[0])){
if(HUD::DOES_BLIP_EXIST(uLocal_99[0])){
HUD::REMOVE_BLIP(&(uLocal_99[0]));
}}
return 0;
}


void func_106(){
STREAMING::REQUEST_MODEL(iLocal_88);
HUD::REQUEST_ADDITIONAL_TEXT("PMDL", 0);
if(iLocal_36 >=3 && iLocal_36 <=4){
STREAMING::REQUEST_MODEL(iLocal_87);
STREAMING::REQUEST_MODEL(iLocal_89);
}elseif(iLocal_36==5 || iLocal_36==6){
STREAMING::REQUEST_MODEL(iLocal_86);
}
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), 1);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), 1);
if(STREAMING::HAS_MODEL_LOADED(iLocal_88) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
if(iLocal_36 >=3 && iLocal_36 <=4){
if(STREAMING::HAS_MODEL_LOADED(iLocal_87) && STREAMING::HAS_MODEL_LOADED(iLocal_89)){
bLocal_75=true;
}}elseif(iLocal_36==5 || iLocal_36==6){
if(STREAMING::HAS_MODEL_LOADED(iLocal_86)){
bLocal_75=true;
}}elseif(iLocal_36 > 6){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Deliveries", 0, -1)){
bLocal_75=true;
}}else{
bLocal_75=true;
}}}


void func_107(){
float fVar0;
Local_64={
func_109(func_111(), iLocal_36) 
};
fLocal_73=func_108(func_111(), iLocal_36);
if(iLocal_36 > 6){
sLocal_103="PMDL_TRUCK";
sLocal_104="PMDL_BTIM";
sLocal_105="PMDL_BCKT";
iLocal_88=joaat("benson");
iLocal_85=2;
}
if(func_111()==10){
Local_67={
-1161.213f, -1567.068f, 3.4234f 
};
iLocal_88=joaat("pony2");
if(iLocal_36==0){
iLocal_82=2;
iLocal_83=15;
sLocal_104="PMDL_TIM";
}elseif(iLocal_36==1){
iLocal_82=1;
iLocal_83=30;
sLocal_104="PMDL_TIM";
}elseif(iLocal_36==2){
iLocal_82=1;
iLocal_83=30;
sLocal_104="PMDL_TIM";
}elseif(iLocal_36==3){
Local_70={
-3121.261f, 1152.92f, 19.4047f 
};
fLocal_74=176.4887f;
iLocal_89=joaat("police4");
iLocal_87=joaat("s_m_y_cop_01");
}elseif(iLocal_36==4){
Local_70={
1543.145f, 2184.371f, 77.8114f 
};
fLocal_74=45.3499f;
iLocal_89=joaat("police4");
iLocal_87=joaat("s_m_y_cop_01");
}elseif(iLocal_36 >=5){
iLocal_86=joaat("g_m_y_salvagoon_02");
}}elseif(func_111()==14){
Local_67={
-2169.828f, 4277.365f, 47.9568f 
};
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_67, 1);
iLocal_83=SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
}elseif(func_111()==13){
Local_67={
-323.356f, 6264.431f, 30.4463f 
};
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_67, 1);
iLocal_83=SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
}elseif(func_111()==12){
Local_67={
198.5282f, 342.2399f, 104.9566f 
};
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_67, 1);
iLocal_83=SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
}elseif(func_111()==11){
Local_67={
-560.0195f, 301.1481f, 82.1436f 
};
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_67, 1);
iLocal_83=SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
}
iLocal_81=0;
iLocal_76=1;
}


float func_108(int iParam0, int iParam1){
switch (iParam0){
case 10:
switch (iParam1){
case 0:
return 0.5801f;
break;
case 1:
return 177.9306f;
break;
case 2:
return 49.6978f;
break;
case 3:
return 336.9449f;
break;
case 4:
return 80.1639f;
break;
case 5:
return 287.983f;
break;
case 6:
return 46.7895f;
break;
}
break;
case 11:
case 12:
case 13:
case 14:
switch (iParam1){
case 7:
return 273.1085f;
break;
case 8:
return 256.7899f;
break;
case 9:
return 180.9647f;
break;
case 10:
return 126.4385f;
break;
case 11:
return 123.4767f;
break;
case 12:
return 226.219f;
break;
case 13:
return 82.6097f;
break;
}
break;
}
return 0f;
}


Vector3 func__109(int iParam0, int iParam1){
switch (iParam0){
case 10:
switch (iParam1){
case 0:
return -128.1876f, 1934.495f, 194.9075f;
break;
case 1:
return -179.8744f, 586.4468f, 196.6278f;
break;
case 2:
return 1390.089f, -605.923f, 73.3378f;
break;
case 3:
return -3170.048f, 1098.809f, 19.7817f;
break;
case 4:
return 1581.22f, 2194.629f, 78.1062f;
break;
case 5:
return 1475.833f, -113.5801f, 141.794f;
break;
case 6:
return 1603.071f, -1793.915f, 89.0179f;
break;
}
break;
case 11:
case 12:
case 13:
case 14:
switch (iParam1){
case 7:
return 642.2169f, 2774.892f, 40.985f;
break;
case 8:
return -1916.122f, 2060.313f, 139.7363f;
break;
case 9:
return 824.8992f, -1064.192f, 26.9851f;
break;
case 10:
return -669.6013f, -1198.664f, 9.6125f;
break;
case 11:
return -1465.579f, -390.7494f, 37.5168f;
break;
case 12:
return 797.7521f, -1793.008f, 28.3164f;
break;
case 13:
return 806.319f, -2017.451f, 28.2215f;
break;
}
break;
}
return func_110(iParam0);
}


Vector3 func__110(int iParam0){
switch (iParam0){
case 2:
return 2147.317f, 4795.208f, 40.08961f;
break;
case 9:
return 1524.329f, -2108.269f, 75.7248f;
break;
case 10:
return -1172.195f, -1577.427f, 3.38152f;
break;
case 1:
return 898.3718f, -177.0764f, 72.68348f;
break;
case 4:
return 1191.302f, 2672.064f, 36.73154f;
break;
case 3:
return -1584.333f, 5193.487f, 2.95912f;
break;
case 0:
return 408.3429f, -1623.836f, 28.29278f;
break;
case 8:
return -1339.489f, -21.19435f, 50.34566f;
break;
case 5:
return 336.207f, 172.4251f, 102.2055f;
break;
case 6:
return 394.5495f, -703.3795f, 28.27281f;
break;
case 7:
return -1413.184f, -206.0555f, 46.29474f;
break;
case 11:
return -560.3809f, 274.5476f, 82.02014f;
break;
case 12:
return 221.0845f, 340.7849f, 104.5883f;
break;
case 13:
return -296.7154f, 6259.732f, 30.49339f;
break;
case 14:
return -2201.402f, 4291f, 47.32429f;
break;
}
return 10f, 10f, 10f;
}

int func_111(){
return Global_112358.f_20;
}

int func_112(){
return func_113(Global_112358.f_20, Global_112358.f_29);
}

int func_113(int iParam0, int iParam1){
switch (iParam0){
case 10:
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
}
break;
case 11:
case 12:
switch (iParam1){
case 0:
return 9;
break;
case 1:
return 10;
break;
case 2:
return 11;
break;
case 3:
return 12;
break;
case 4:
return 13;
break;
}
break;
case 13:
case 14:
switch (iParam1){
case 0:
return 8;
break;
case 1:
return 7;
break;
}
break;
}
return 0;
}


void func_114(){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), 0);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), 0);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
if(iLocal_77){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_98, 0)){
func_115(iLocal_98, 0, 145);
}
PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
func_100(&uLocal_106, 0, 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_115(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam1==0){
uVar1=ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(uVar1)){
if(MISC::GET_HASH_KEY(sVar1)==MISC::GET_HASH_KEY("vehicle_gen_controller")){
return 0;
}}}
func_116(iParam0, iParam2);
return 1;
}


void func_116(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_122(iParam0)){
return;
}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar0=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_zero")){
iParam1=0;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_one")){
iParam1=1;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_two")){
iParam1=2;
}}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iParam1=Global_113648.f_2365.f_539.f_4321;
}}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66=0;
Global_113648.f_32751.f_5592[iVar1]=iVar2;
}}}
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1))){
Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66=0;
}}}
iVar1++;
}
Global_113648.f_32751.f_5590=iParam1;
Global_78253=iParam0;
Global_113648.f_32751.f_5588=1;
func_117(iParam0, &(Global_113648.f_32751.f_5510));
}


void func_117(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_121(uParam1);
uParam1->f_66=ENTITY::GET_ENTITY_MODEL(iParam0);
StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
*uParam1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
uParam1->f_65=VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
uParam1->f_67=VEHICLE::GET_VEHICLE_LIVERY(iParam0);
uParam1->f_69=VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
uParam1->f_70=VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2)){
MISC::SET_BIT(&(uParam1->f_77), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3)){
MISC::SET_BIT(&(uParam1->f_77), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1)){
MISC::SET_BIT(&(uParam1->f_77), 31);
}
if(uParam1->f_65==-1 && !func_120(uParam1->f_66)){
uParam1->f_65=0;
}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
uParam1->f_68=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)){
if(VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0)){
switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0)){
case 3:
case 0:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::SET_BIT(&(uParam1->f_77), 22);
break;
case 4:
case 1:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::CLEAR_BIT(&(uParam1->f_77), 22);
break;
case 5:
MISC::SET_BIT(&(uParam1->f_77), 23);
break;
}}else{
MISC::SET_BIT(&(uParam1->f_77), 23);
}}
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 9);
}
if(VEHICLE::IS_VEHICLE_STOLEN(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 10);
}
if(VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 13);
VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
}
if(VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 12);
}
func_119(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_118(iVar0 + 1));
}
iVar0++;
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 11);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 11);
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave")){
MISC::SET_BIT(&(uParam1->f_77), 27);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}}}

int func_118(int iParam0){
switch (iParam0){
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 2;
break;
case 4:
return 3;
break;
case 5:
return 4;
break;
case 6:
return 5;
break;
case 7:
return 6;
break;
case 8:
return 7;
break;
case 9:
return 8;
break;
case 10:
return 24;
break;
case 11:
return 25;
break;
case 12:
return 26;
break;
}
return 0;
}

int func_119(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
(*uParam1)[iVar0]=0;
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
(*uParam1)[iVar0]=1;
}}elseif(iVar1==22){
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0)){
case 255:
(*uParam1)[iVar0]=1;
break;
case 0:
(*uParam1)[iVar0]=2;
break;
case 1:
(*uParam1)[iVar0]=3;
break;
case 2:
(*uParam1)[iVar0]=4;
break;
case 3:
(*uParam1)[iVar0]=5;
break;
case 4:
(*uParam1)[iVar0]=6;
break;
case 5:
(*uParam1)[iVar0]=7;
break;
case 6:
(*uParam1)[iVar0]=8;
break;
case 7:
(*uParam1)[iVar0]=9;
break;
case 8:
(*uParam1)[iVar0]=10;
break;
case 9:
(*uParam1)[iVar0]=11;
break;
case 10:
(*uParam1)[iVar0]=12;
break;
case 11:
(*uParam1)[iVar0]=13;
break;
case 12:
(*uParam1)[iVar0]=14;
break;
case 13:
(*uParam1)[iVar0]=15;
break;
}}else{
(*uParam1)[iVar0]=0;
}}else{
(*uParam1)[iVar0]=VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
if(iVar0==23){
(*uParam2)[0]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}elseif(iVar0==24){
(*uParam2)[1]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}}
iVar0++;
}
return 1;
}

int func_120(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_121(var uParam0){
int iVar0;
uParam0->f_66=0;
uParam0->f_77=0;
uParam0->f_65=0;
uParam0->f_62=0;
uParam0->f_63=0;
uParam0->f_64=0;
uParam0->f_74=0;
uParam0->f_75=0;
uParam0->f_76=0;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 16);
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
iVar0=0;
while (iVar0 < 49){
uParam0->f_9[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 2){
uParam0->f_59[iVar0]=0;
iVar0++;
}
uParam0->f_67=0;
uParam0->f_68=0;
uParam0->f_69=0;
uParam0->f_70=1;
uParam0->f_71=0;
uParam0->f_72=0;
uParam0->f_73=0;
}

int func_122(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_140(iParam0, 0, 0)) || func_140(iParam0, 1, 0)) || func_140(iParam0, 2, 0)) || func_139(iParam0) !=145) || func_138(iParam0)) || func_137(iParam0)) || func_136(iParam0)) || func_135(iParam0)) || !func_123(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_137(iParam0)){
}
if(func_137(iParam0)){
}
if(func_140(iParam0, 0, 0)){
}
if(func_140(iParam0, 1, 0)){
}
if(func_140(iParam0, 2, 0)){
}
if(func_139(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_123(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_124(iParam0, 0, -1)){
return 0;
}
if(((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)){
return 0;
}
switch (iParam0){
case joaat("bus"):
case joaat("stretch"):
case joaat("barracks"):
case joaat("armytanker"):
case joaat("rhino"):
case joaat("armytrailer"):
case joaat("barracks2"):
case joaat("flatbed"):
case joaat("ripley"):
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("airbus"):
case joaat("coach"):
case joaat("rentalbus"):
case joaat("tourbus"):
case joaat("firetruk"):
case joaat("pbus"):
case joaat("trash"):
case joaat("benson"):
case joaat("boattrailer"):
case joaat("biff"):
case joaat("hauler"):
case joaat("docktrailer"):
case joaat("phantom"):
case joaat("pounder"):
case joaat("tractor2"):
case joaat("bulldozer"):
case joaat("handler"):
case joaat("tiptruck"):
case joaat("cutter"):
case joaat("dump"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("rubble"):
case joaat("scrap"):
case joaat("tiptruck2"):
case joaat("camper"):
case joaat("taco"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("journey"):
case joaat("mule"):
case joaat("mule2"):
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("policeb"):
case joaat("policeold1"):
case joaat("policeold2"):
case joaat("policet"):
case joaat("taxi"):
case joaat("submersible"):
case joaat("submersible2"):
case joaat("monster"):
return 0;
break;
}
return 1;
}

int func_124(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_134()){
return 0;
}}else{
iVar0=0;
while (iVar0 < FILES::GET_NUM_DLC_VEHICLES()){
if(FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1)){
if(iParam0==Var1.f_1){
if(FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
return 0;
}}}
iVar0++;
}}
if(iParam0==joaat("blimp")){
if((((!func_133() && !func_132()) && !func_131()) && !func_130()) && !func_134()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_129() || MISC::IS_PC_VERSION()) || func_128()){
}elseif(!func_131()){
return 0;
}}
if(bParam1){
if(!func_127(iParam0, iParam2)){
return 0;
}}
if(!func_125(iParam0)){
return 0;
}
return 1;
}

int func_125(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_126()){
return 1;
}
NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
if(iVar0==4){
return 1;
}
switch (iParam0){
case joaat("dune4"):
StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
break;
case joaat("voltic2"):
StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
break;
case joaat("ruiner2"):
StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
break;
case joaat("phantom2"):
StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
break;
case joaat("technical2"):
StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
break;
case joaat("boxville5"):
StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
break;
case joaat("wastelander"):
StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
break;
case joaat("blazer5"):
StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
break;
default:
return 1;
break;
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2)){
return 0;
}
return 1;
}

int func_126(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_127(int iParam0, int iParam1){
int iVar0;
int iVar1;
if((!Global_2764242 && iParam1 >=0) && iParam1 <=415){
if(MISC::IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2)){
return 1;
}}
if(Global_2764241){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14737 && iVar1 < Global_262145.f_14749){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14733 && iVar1 < Global_262145.f_14745){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14734 && iVar1 < Global_262145.f_14746){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14735 && iVar1 < Global_262145.f_14747){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14736 && iVar1 < Global_262145.f_14748){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14738 && iVar1 < Global_262145.f_14750){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14739 && iVar1 < Global_262145.f_14742){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14740 && iVar1 < Global_262145.f_14743){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14741 && iVar1 < Global_262145.f_14744){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17313 && iVar1 < Global_262145.f_17278){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17308 && iVar1 < Global_262145.f_17273){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17312 && iVar1 < Global_262145.f_17277){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17311 && iVar1 < Global_262145.f_17276){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17305 && iVar1 < Global_262145.f_17270){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17306 && iVar1 < Global_262145.f_17271){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17309 && iVar1 < Global_262145.f_17274){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17310 && iVar1 < Global_262145.f_17275){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17307 && iVar1 < Global_262145.f_17272){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17315 && iVar1 < Global_262145.f_17280){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17316 && iVar1 < Global_262145.f_17281){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17304 && iVar1 < Global_262145.f_17269){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17303 && iVar1 < Global_262145.f_17268){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17302 && iVar1 < Global_262145.f_17267){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17314 && iVar1 < Global_262145.f_17279){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17317 && iVar1 < Global_262145.f_17282){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17318 && iVar1 < Global_262145.f_17283){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17319 && iVar1 < Global_262145.f_17284){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17320 && iVar1 < Global_262145.f_17285){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17474 && iVar1 < Global_262145.f_17496){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17475 && iVar1 < Global_262145.f_17497){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17476 && iVar1 < Global_262145.f_17498){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17477 && iVar1 < Global_262145.f_17499){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17478 && iVar1 < Global_262145.f_17500){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17479 && iVar1 < Global_262145.f_17501){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17481 && iVar1 < Global_262145.f_17502){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17482 && iVar1 < Global_262145.f_17503){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17483 && iVar1 < Global_262145.f_17504){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17484 && iVar1 < Global_262145.f_17505){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17485 && iVar1 < Global_262145.f_17506){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17486 && iVar1 < Global_262145.f_17507){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17487 && iVar1 < Global_262145.f_17508){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17493 && iVar1 < Global_262145.f_17515){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17490 && iVar1 < Global_262145.f_17511){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17491 && iVar1 < Global_262145.f_17512){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17492 && iVar1 < Global_262145.f_17513){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17480 && iVar1 < Global_262145.f_17514){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17494 && iVar1 < Global_262145.f_17516){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17488 && iVar1 < Global_262145.f_17509){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17489 && iVar1 < Global_262145.f_17510){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17495 && iVar1 < Global_262145.f_17517){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19131 && iVar1 < Global_262145.f_19228){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19132 && iVar1 < Global_262145.f_19229){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19133 && iVar1 < Global_262145.f_19230){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19134 && iVar1 < Global_262145.f_19231){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19135 && iVar1 < Global_262145.f_19232){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19136 && iVar1 < Global_262145.f_19233){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19137 && iVar1 < Global_262145.f_19234){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19138 && iVar1 < Global_262145.f_19235){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19139 && iVar1 < Global_262145.f_19236){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19140 && iVar1 < Global_262145.f_19237){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19141 && iVar1 < Global_262145.f_19238){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19142 && iVar1 < Global_262145.f_19239){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19143 && iVar1 < Global_262145.f_19240){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19144 && iVar1 < Global_262145.f_19241){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19145 && iVar1 < Global_262145.f_19242){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19146 && iVar1 < Global_262145.f_19243){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19147 && iVar1 < Global_262145.f_19244){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19148 && iVar1 < Global_262145.f_19245){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19149 && iVar1 < Global_262145.f_19246){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19150 && iVar1 < Global_262145.f_19247){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19151 && iVar1 < Global_262145.f_19248){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19152 && iVar1 < Global_262145.f_19249){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19153 && iVar1 < Global_262145.f_19250){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19154 && iVar1 < Global_262145.f_19251){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19155 && iVar1 < Global_262145.f_19252){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20212 && iVar1 < Global_262145.f_20208){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20213 && iVar1 < Global_262145.f_20209){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20214 && iVar1 < Global_262145.f_20210){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20215 && iVar1 < Global_262145.f_20211){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21094 && iVar1 < Global_262145.f_21102){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21095 && iVar1 < Global_262145.f_21103){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21096 && iVar1 < Global_262145.f_21104){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21097 && iVar1 < Global_262145.f_21105){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21098 && iVar1 < Global_262145.f_21106){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21099 && iVar1 < Global_262145.f_21107){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_21893 && iVar1 < Global_262145.f_21913){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_21905 && iVar1 < Global_262145.f_21925){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_21896 && iVar1 < Global_262145.f_21916){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_21906 && iVar1 < Global_262145.f_21926){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_21894 && iVar1 < Global_262145.f_21914){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_21910 && iVar1 < Global_262145.f_21930){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_21908 && iVar1 < Global_262145.f_21928){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_21909 && iVar1 < Global_262145.f_21929){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_21904 && iVar1 < Global_262145.f_21924){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_21911 && iVar1 < Global_262145.f_21931){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_21907 && iVar1 < Global_262145.f_21927){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_21903 && iVar1 < Global_262145.f_21923){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_21895 && iVar1 < Global_262145.f_21915){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_21897 && iVar1 < Global_262145.f_21917){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_21898 && iVar1 < Global_262145.f_21918){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_21899 && iVar1 < Global_262145.f_21919){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_21900 && iVar1 < Global_262145.f_21920){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_21901 && iVar1 < Global_262145.f_21921){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_21902 && iVar1 < Global_262145.f_21922){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_22861 && iVar1 < Global_262145.f_22889){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_22862 && iVar1 < Global_262145.f_22890){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_22863 && iVar1 < Global_262145.f_22891){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_22864 && iVar1 < Global_262145.f_22892){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_22865 && iVar1 < Global_262145.f_22893){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_22866 && iVar1 < Global_262145.f_22894){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_22867 && iVar1 < Global_262145.f_22895){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_22868 && iVar1 < Global_262145.f_22896){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_22869 && iVar1 < Global_262145.f_22897){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_22870 && iVar1 < Global_262145.f_22898){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_22871 && iVar1 < Global_262145.f_22899){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_22872 && iVar1 < Global_262145.f_22900){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_22873 && iVar1 < Global_262145.f_22901){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_22874 && iVar1 < Global_262145.f_22902){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_22875 && iVar1 < Global_262145.f_22903){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_22876 && iVar1 < Global_262145.f_22904){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_22877 && iVar1 < Global_262145.f_22905){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_22878 && iVar1 < Global_262145.f_22906){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_22879 && iVar1 < Global_262145.f_22907){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_22880 && iVar1 < Global_262145.f_22908){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_22881 && iVar1 < Global_262145.f_22909){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_22882 && iVar1 < Global_262145.f_22910){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_22883 && iVar1 < Global_262145.f_22911){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_22884 && iVar1 < Global_262145.f_22912){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_22885 && iVar1 < Global_262145.f_22913){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_22886 && iVar1 < Global_262145.f_22914){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_22887 && iVar1 < Global_262145.f_22915){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_22888 && iVar1 < Global_262145.f_22916){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24081 && iVar1 < Global_262145.f_24097){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24082 && iVar1 < Global_262145.f_24098){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24086 && iVar1 < Global_262145.f_24102){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24089 && iVar1 < Global_262145.f_24105){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24094 && iVar1 < Global_262145.f_24110){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24088 && iVar1 < Global_262145.f_24104){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24080 && iVar1 < Global_262145.f_24096){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24087 && iVar1 < Global_262145.f_24103){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24093 && iVar1 < Global_262145.f_24109){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24092 && iVar1 < Global_262145.f_24108){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24083 && iVar1 < Global_262145.f_24099){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24085 && iVar1 < Global_262145.f_24101){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24095 && iVar1 < Global_262145.f_24111){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24091 && iVar1 < Global_262145.f_24107){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24084 && iVar1 < Global_262145.f_24100){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24090 && iVar1 < Global_262145.f_24106){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24171 && iVar1 < Global_262145.f_24158){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24172 && iVar1 < Global_262145.f_24159){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24177 && iVar1 < Global_262145.f_24164){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24176 && iVar1 < Global_262145.f_24163){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24174 && iVar1 < Global_262145.f_24161){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24180 && iVar1 < Global_262145.f_24167){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24182 && iVar1 < Global_262145.f_24169){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24183 && iVar1 < Global_262145.f_24170){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24181 && iVar1 < Global_262145.f_24168){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24173 && iVar1 < Global_262145.f_24160){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24175 && iVar1 < Global_262145.f_24162){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24179 && iVar1 < Global_262145.f_24166){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24178 && iVar1 < Global_262145.f_24165){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26768 && iVar1 < Global_262145.f_26770){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25781 && iVar1 < Global_262145.f_25774){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25782 && iVar1 < Global_262145.f_25775){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25783 && iVar1 < Global_262145.f_25776){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25784 && iVar1 < Global_262145.f_25777){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26769 && iVar1 < Global_262145.f_26771){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25785 && iVar1 < Global_262145.f_25778){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25786 && iVar1 < Global_262145.f_25779){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25787 && iVar1 < Global_262145.f_25780){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25792 && iVar1 < Global_262145.f_25813){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25793 && iVar1 < Global_262145.f_25814){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25794 && iVar1 < Global_262145.f_25815){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25795 && iVar1 < Global_262145.f_25816){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25796 && iVar1 < Global_262145.f_25817){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25797 && iVar1 < Global_262145.f_25818){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25798 && iVar1 < Global_262145.f_25819){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25799 && iVar1 < Global_262145.f_25820){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25800 && iVar1 < Global_262145.f_25821){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25801 && iVar1 < Global_262145.f_25822){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25802 && iVar1 < Global_262145.f_25823){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25803 && iVar1 < Global_262145.f_25824){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25804 && iVar1 < Global_262145.f_25825){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25805 && iVar1 < Global_262145.f_25826){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25806 && iVar1 < Global_262145.f_25827){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25807 && iVar1 < Global_262145.f_25828){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25808 && iVar1 < Global_262145.f_25829){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25809 && iVar1 < Global_262145.f_25830){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25810 && iVar1 < Global_262145.f_25831){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25811 && iVar1 < Global_262145.f_25832){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_25812 && iVar1 < Global_262145.f_25833){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28613 && iVar1 < Global_262145.f_28634){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28614 && iVar1 < Global_262145.f_28635){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28615 && iVar1 < Global_262145.f_28636){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28616 && iVar1 < Global_262145.f_28637){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28617 && iVar1 < Global_262145.f_28638){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28618 && iVar1 < Global_262145.f_28639){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28619 && iVar1 < Global_262145.f_28640){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28620 && iVar1 < Global_262145.f_28641){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28621 && iVar1 < Global_262145.f_28642){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28622 && iVar1 < Global_262145.f_28643){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28623 && iVar1 < Global_262145.f_28644){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28624 && iVar1 < Global_262145.f_28645){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28625 && iVar1 < Global_262145.f_28646){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28626 && iVar1 < Global_262145.f_28647){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28627 && iVar1 < Global_262145.f_28648){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28628 && iVar1 < Global_262145.f_28649){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28629 && iVar1 < Global_262145.f_28650){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28630 && iVar1 < Global_262145.f_28651){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28631 && iVar1 < Global_262145.f_28652){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28632 && iVar1 < Global_262145.f_28653){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28633 && iVar1 < Global_262145.f_28654){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28664 && iVar1 < Global_262145.f_28667){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28665 && iVar1 < Global_262145.f_28668){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28666 && iVar1 < Global_262145.f_28669){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29682 && iVar1 < Global_262145.f_29347){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29333 && iVar1 < Global_262145.f_29354){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29334 && iVar1 < Global_262145.f_29340){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29680 && iVar1 < Global_262145.f_29348){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29681 && iVar1 < Global_262145.f_29349){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29327 && iVar1 < Global_262145.f_29346){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29328 && iVar1 < Global_262145.f_29355){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29329 && iVar1 < Global_262145.f_29345){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29330 && iVar1 < Global_262145.f_29343){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29676 && iVar1 < Global_262145.f_29350){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29677 && iVar1 < Global_262145.f_29351){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29678 && iVar1 < Global_262145.f_29352){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29679 && iVar1 < Global_262145.f_29353){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29331 && iVar1 < Global_262145.f_29342){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29332 && iVar1 < Global_262145.f_29344){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30141 && iVar1 < Global_262145.f_30124){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30142 && iVar1 < Global_262145.f_30125){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30143 && iVar1 < Global_262145.f_30126){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30144 && iVar1 < Global_262145.f_30127){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30145 && iVar1 < Global_262145.f_30128){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30146 && iVar1 < Global_262145.f_30129){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30147 && iVar1 < Global_262145.f_30130){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30148 && iVar1 < Global_262145.f_30131){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30149 && iVar1 < Global_262145.f_30132){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30158){
}elseif(!Global_262145.f_30150 && iVar1 < Global_262145.f_30133){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30151 && iVar1 < Global_262145.f_30134){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30152 && iVar1 < Global_262145.f_30135){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30153 && iVar1 < Global_262145.f_30136){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30154 && iVar1 < Global_262145.f_30137){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30159){
}elseif(!Global_262145.f_30155 && iVar1 < Global_262145.f_30138){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30156 && iVar1 < Global_262145.f_30139){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30157 && iVar1 < Global_262145.f_30140){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_31009 && iVar1 < Global_262145.f_30992){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_31010 && iVar1 < Global_262145.f_30993){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_31011 && iVar1 < Global_262145.f_30994){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31012 && iVar1 < Global_262145.f_30995){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31013 && iVar1 < Global_262145.f_30996){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31014 && iVar1 < Global_262145.f_30997){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31015 && iVar1 < Global_262145.f_30998){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31016 && iVar1 < Global_262145.f_30999){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31017 && iVar1 < Global_262145.f_31000){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31018 && iVar1 < Global_262145.f_31001){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31019 && iVar1 < Global_262145.f_31002){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31020 && iVar1 < Global_262145.f_31003){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31021 && iVar1 < Global_262145.f_31004){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31022 && iVar1 < Global_262145.f_31005){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31023 && iVar1 < Global_262145.f_31006){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31024 && iVar1 < Global_262145.f_31007){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31025 && iVar1 < Global_262145.f_31008){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_31889 && iVar1 < Global_262145.f_31874){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_31890 && iVar1 < Global_262145.f_31875){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_31891 && iVar1 < Global_262145.f_31876){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_31892 && iVar1 < Global_262145.f_31877){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_31893 && iVar1 < Global_262145.f_31878){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_31894 && iVar1 < Global_262145.f_31879){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_31895 && iVar1 < Global_262145.f_31880){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_31896 && iVar1 < Global_262145.f_31881){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_31897 && iVar1 < Global_262145.f_31882){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_31898 && iVar1 < Global_262145.f_31883){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_31899 && iVar1 < Global_262145.f_31884){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_31900 && iVar1 < Global_262145.f_31885){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_31901 && iVar1 < Global_262145.f_31886){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_31902 && iVar1 < Global_262145.f_31887){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_31967){
}elseif(!Global_262145.f_31903 && iVar1 < Global_262145.f_31888){
iVar0=0;
}}elseif(iParam0==joaat("brioso3")){
if(!Global_262145.f_33131 && iVar1 < Global_262145.f_33112){
iVar0=0;
}}elseif(iParam0==joaat("corsita")){
if(!Global_262145.f_33125 && iVar1 < Global_262145.f_33106){
iVar0=0;
}}elseif(iParam0==joaat("draugur")){
if(!Global_262145.f_33129 && iVar1 < Global_262145.f_33110){
iVar0=0;
}}elseif(iParam0==joaat("greenwood")){
if(!Global_262145.f_33123 && iVar1 < Global_262145.f_33104){
iVar0=0;
}}elseif(iParam0==joaat("kanjosj")){
if(!Global_262145.f_33134 && iVar1 < Global_262145.f_33115){
iVar0=0;
}}elseif(iParam0==joaat("lm87")){
if(!Global_262145.f_33126 && iVar1 < Global_262145.f_33107){
iVar0=0;
}}elseif(iParam0==joaat("postlude")){
if(!Global_262145.f_33135 && iVar1 < Global_262145.f_33116){
iVar0=0;
}}elseif(iParam0==joaat("rhinehart")){
if(!Global_262145.f_33137 && iVar1 < Global_262145.f_33118){
iVar0=0;
}}elseif(iParam0==joaat("sm722")){
if(!Global_262145.f_33128 && iVar1 < Global_262145.f_33109){
iVar0=0;
}}elseif(iParam0==joaat("tenf")){
if(!Global_262145.f_33136 && iVar1 < Global_262145.f_33117){
iVar0=0;
}}elseif(iParam0==joaat("tenf2")){
if(!Global_262145.f_33139 && iVar1 < Global_262145.f_33120){
iVar0=0;
}}elseif(iParam0==joaat("torero2")){
if(!Global_262145.f_33124 && iVar1 < Global_262145.f_33105){
iVar0=0;
}}elseif(iParam0==joaat("vigero2")){
if(!Global_262145.f_33132 && iVar1 < Global_262145.f_33113){
iVar0=0;
}}elseif(iParam0==joaat("weevil2")){
if(!Global_262145.f_33138 && iVar1 < Global_262145.f_33119){
iVar0=0;
}}elseif(iParam0==joaat("ruiner4")){
if(!Global_262145.f_33130 && iVar1 < Global_262145.f_33111){
iVar0=0;
}}elseif(iParam0==joaat("sentinel4")){
if(!Global_262145.f_33140 && iVar1 < Global_262145.f_33121){
iVar0=0;
}}elseif(iParam0==joaat("conada")){
if(!Global_262145.f_33127 && iVar1 < Global_262145.f_33108){
iVar0=0;
}}elseif(iParam0==joaat("omnisegt")){
if(!Global_262145.f_33122 && iVar1 < Global_262145.f_33103){
iVar0=0;
}}elseif(iParam0==1384502824){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==-1576586413){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==-1249788006){
if(!Global_262145.f_33971 && iVar1 < Global_262145.f_33954){
iVar0=0;
}}elseif(iParam0==-1386336041){
if(!Global_262145.f_33965 && iVar1 < Global_262145.f_33949){
iVar0=0;
}}elseif(iParam0==-1627077503){
if(!Global_262145.f_33959 && iVar1 < Global_262145.f_33943){
iVar0=0;
}}elseif(iParam0==-1035489563){
if(!Global_262145.f_33960 && iVar1 < Global_262145.f_33944){
iVar0=0;
}}elseif(iParam0==1748565021){
if(!Global_262145.f_33957 && iVar1 < Global_262145.f_33941){
iVar0=0;
}}elseif(iParam0==2100457220){
if(!Global_262145.f_33968 && iVar1 < Global_262145.f_33952){
iVar0=0;
}}elseif(iParam0==996383885){
if(!Global_262145.f_33972 && iVar1 < Global_262145.f_33956){
iVar0=0;
}}elseif(iParam0==-131348178){
if(!Global_262145.f_33969 && iVar1 < Global_262145.f_33953){
iVar0=0;
}}elseif(iParam0==268758436){
if(!Global_262145.f_33958 && iVar1 < Global_262145.f_33942){
iVar0=0;
}}elseif(iParam0==1076201208){
if(!Global_262145.f_33961 && iVar1 < Global_262145.f_33945){
iVar0=0;
}}elseif(iParam0==669204833){
if(!Global_262145.f_33970 && iVar1 < Global_262145.f_33955){
iVar0=0;
}}elseif(iParam0==1550581940){
if(!Global_262145.f_33966 && iVar1 < Global_262145.f_33950){
iVar0=0;
}}elseif(iParam0==-1933242328){
if(!Global_262145.f_33967 && iVar1 < Global_262145.f_33951){
iVar0=0;
}}elseif(iParam0==-461850249){
if(!Global_262145.f_33964 && iVar1 < Global_262145.f_33948){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_33963 && iVar1 < Global_262145.f_33947){
iVar0=0;
}}
return iVar0;
}


var func__128(){
return (MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A());
}


var func__129(){
return (MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33());
}

int func_130(){
return 0;
}

int func_131(){
return 1;
}

int func_132(){
return 1;
}

int func_133(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_134(){
var uVar0;
if(Global_152523==2){
return 1;
}elseif(Global_152523==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
MISC::SET_BIT(&uVar0, 2);
MISC::SET_BIT(&uVar0, 4);
MISC::SET_BIT(&uVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar0, 0);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}

int func_135(int iParam0){
int iVar0;
var uVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
uVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G ")){
return 1;
}
if(!func_124(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_136(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Global_98042[iVar0])){
if(Global_98042[iVar0]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_137(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[iVar0], 0)){
if(Global_98012[iVar0]==iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[iVar0])==ENTITY::GET_ENTITY_MODEL(iParam0)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_138(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24])){
if(iParam0==Global_77348.f_484[24]){
return 0;
}}
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0])){
if((((((((((((iVar0 !=24 && iVar0 !=21) && iVar0 !=22) && iVar0 !=23) && iVar0 !=27) && iVar0 !=30) && iVar0 !=33) && iVar0 !=28) && iVar0 !=31) && iVar0 !=34) && iVar0 !=26) && iVar0 !=29) && iVar0 !=32){
if(iParam0==Global_77348.f_484[iVar0]){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_139(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(Global_98012[iVar0]==iParam0){
return Global_98022[iVar0];
}}
iVar0++;
}
return 145;
}

int func_140(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar9;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_141(iParam1, iVar0, &sVar1, &iVar9)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113648.f_7231[iVar9], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_141(int iParam0, int iParam1, char* sParam2, var uParam3){
StringCopy(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
StringCopy(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return 1;
}
break;
case 1:
if(iParam1==0){
StringCopy(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return 1;
}
break;
case 2:
if(iParam1==0){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - City", 32);
*uParam3=3;
return 1;
}elseif(iParam1==2){
StringCopy(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return 1;
}
break;
}
return 0;
}


void func_142(int iParam0){
Global_112358.f_22=iParam0;
}