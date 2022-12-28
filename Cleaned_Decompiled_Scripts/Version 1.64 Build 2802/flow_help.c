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
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
int iLocal_37=0;
#endregion

void main() // Position - 0x0{
int i;
int num;
int j;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50)) func_23();
while (true){
if(Global_113648.f_20412.f_145 > 0 || Global_112288){
if(!Global_112288){
if(Global_43257 !=6 && Global_43257 !=15 && !Global_96688) func_23();
if(!Global_112287){
if(Global_113648.f_20412.f_145 > 0){
if(func_20(&Global_113648.f_20412[iLocal_37 /*16*/])){
if(func_18(_GET_CURRENT_PLAYER_CHARACTER_0())){
if(IS_BIT_SET(Global_113648.f_20412[iLocal_37 /*16*/].f_11, _GET_CURRENT_PLAYER_CHARACTER())){
if(Global_113648.f_20412[iLocal_37 /*16*/].f_12==Global_113648.f_20412.f_146[_GET_CURRENT_PLAYER_CHARACTER()]){
if(MISC::GET_GAME_TIMER() > Global_112290){
if(MISC::GET_GAME_TIMER() > Global_113648.f_20412[iLocal_37 /*16*/].f_8){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_20412[iLocal_37 /*16*/].f_4), "")){
HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
func_11(&Global_113648.f_20412[iLocal_37 /*16*/]);
}else{
HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
func_10(&Global_113648.f_20412[iLocal_37 /*16*/], &(Global_113648.f_20412[iLocal_37 /*16*/].f_4));
}
if(Global_113648.f_20412[iLocal_37 /*16*/].f_13 !=0) func_9(Global_113648.f_20412[iLocal_37 /*16*/].f_13, 0);
uLocal_20={
Global_113648.f_20412[iLocal_37 /*16*/] 
};
uLocal_20.f_4={
Global_113648.f_20412[iLocal_37 /*16*/].f_4 
};
uLocal_20.f_8=Global_113648.f_20412[iLocal_37 /*16*/].f_8;
uLocal_20.f_10=Global_113648.f_20412[iLocal_37 /*16*/].f_10;
uLocal_20.f_9=Global_113648.f_20412[iLocal_37 /*16*/].f_9;
uLocal_20.f_11=Global_113648.f_20412[iLocal_37 /*16*/].f_11;
uLocal_20.f_12=Global_113648.f_20412[iLocal_37 /*16*/].f_12;
uLocal_20.f_13=Global_113648.f_20412[iLocal_37 /*16*/].f_13;
uLocal_20.f_14=Global_113648.f_20412[iLocal_37 /*16*/].f_14;
uLocal_20.f_15=Global_113648.f_20412[iLocal_37 /*16*/].f_15;
uLocal_20.f_16=0;
Global_112291={
Global_113648.f_20412[iLocal_37 /*16*/] 
};
Global_112289=MISC::GET_GAME_TIMER();
for (i=iLocal_37;
i <=Global_113648.f_20412.f_145 - 2;
i=i + 1){
func_8(i, i + 1);
}
func_7(Global_113648.f_20412.f_145 - 1);
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 - 1;
func_6();
Global_112288=true;
}
}
}}}
}}}}elseif(!func_4()){
if(MISC::ARE_STRINGS_EQUAL(&(uLocal_20.f_4), ""))if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uLocal_20)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
elseif(func_2(&uLocal_20, &(uLocal_20.f_4))) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
if(MISC::GET_GAME_TIMER() - Global_112289 > 4000 || uLocal_20.f_16){
if(uLocal_20.f_14 !=0) func_9(uLocal_20.f_14, 0);
Global_112290=MISC::GET_GAME_TIMER() + 250;
}else{
if(uLocal_20.f_10 !=-1) num=20000;
else num=-1;
func_1(&uLocal_20, &(uLocal_20.f_4), uLocal_20.f_12, 1000, num, uLocal_20.f_9, uLocal_20.f_11, uLocal_20.f_13, uLocal_20.f_14, uLocal_20.f_15);
}
TEXT_LABEL_ASSIGN_STRING(&uLocal_20, "", 16);
TEXT_LABEL_ASSIGN_STRING(&(uLocal_20.f_4), "", 16);
uLocal_20.f_8=0;
uLocal_20.f_9=0;
uLocal_20.f_10=-1;
uLocal_20.f_11=0;
uLocal_20.f_12=0;
uLocal_20.f_13=0;
uLocal_20.f_14=0;
uLocal_20.f_15=0;
uLocal_20.f_16=0;
Global_112289=0;
Global_112288=false;
}
if(!MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[iLocal_37 /*16*/], &uLocal_20) && !MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[iLocal_37 /*16*/], "")){
if(Global_113648.f_20412[iLocal_37 /*16*/].f_10 !=-1){
if(MISC::GET_GAME_TIMER() > Global_113648.f_20412[iLocal_37 /*16*/].f_10){
for (j=iLocal_37;
j <=Global_113648.f_20412.f_145 - 2;
j=j + 1){
func_8(j, j + 1);
}
func_7(Global_113648.f_20412.f_145 - 1);
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 - 1;
func_6();
}}}
iLocal_37=iLocal_37 + 1;
if(iLocal_37 >=Global_113648.f_20412.f_145) iLocal_37=0;
}elseif(Global_43257 !=6 && Global_43257 !=15 && !Global_96688){
func_23();
}
SYSTEM::WAIT(0);
}
return;
}


void func_1(const char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9) // Position - 0x472{
int i;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")) return;
if(iParam3 < 0) return;
if(iParam5 < 500 && iParam5 !=-1) return;
if(iParam4 < 0 && iParam4 !=-1) return;
if(iParam6 < 1 || iParam6 > 7) return;
if(iParam7==235) return;
if(iParam8==235) return;
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0)) return;
}
if(Global_113648.f_20412.f_145 < 9){
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=MISC::GET_GAME_TIMER() + iParam3;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=uParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1) Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=MISC::GET_GAME_TIMER() + iParam3 + iParam4;
else Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 + 1;
func_6();
}
return;
}
BOOL func_2(const char* sParam0, const char* sParam1) // Position - 0x644{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x65D{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
BOOL func_4() // Position - 0x670{
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return false;
if(func_5()) return false;
if(uLocal_20.f_9 !=-1 && MISC::GET_GAME_TIMER() - Global_112289 > uLocal_20.f_9) return false;
if(Global_112287) return false;
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return false;
if(MISC::ARE_STRINGS_EQUAL(&(uLocal_20.f_4), "")){
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uLocal_20)){
uLocal_20.f_16=1;
return false;
}}elseif(!func_2(&uLocal_20, &(uLocal_20.f_4))){
uLocal_20.f_16=1;
return false;
}
return true;
}
BOOL func_5() // Position - 0x6FF{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}


void func_6() // Position - 0x719{
int i;
for (i=0;
i < 3;
i=i + 1){
Global_113648.f_20412.f_146[i]=0;
}
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0]) Global_113648.f_20412.f_146[0]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1]) Global_113648.f_20412.f_146[1]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2]) Global_113648.f_20412.f_146[2]=Global_113648.f_20412[i /*16*/].f_12;
}
return;
}


void func_7(int iParam0) // Position - 0x830{
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[iParam0 /*16*/], "", 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
Global_113648.f_20412[iParam0 /*16*/].f_8=0;
Global_113648.f_20412[iParam0 /*16*/].f_9=0;
Global_113648.f_20412[iParam0 /*16*/].f_11=0;
Global_113648.f_20412[iParam0 /*16*/].f_10=-1;
Global_113648.f_20412[iParam0 /*16*/].f_12=0;
Global_113648.f_20412[iParam0 /*16*/].f_13=0;
Global_113648.f_20412[iParam0 /*16*/].f_14=0;
Global_113648.f_20412[iParam0 /*16*/].f_15=0;
return;
}


void func_8(int iParam0, int iParam1) // Position - 0x8C8{
Global_113648.f_20412[iParam0 /*16*/]={
Global_113648.f_20412[iParam1 /*16*/] 
};
Global_113648.f_20412[iParam0 /*16*/].f_4={
Global_113648.f_20412[iParam1 /*16*/].f_4 
};
Global_113648.f_20412[iParam0 /*16*/].f_8=Global_113648.f_20412[iParam1 /*16*/].f_8;
Global_113648.f_20412[iParam0 /*16*/].f_10=Global_113648.f_20412[iParam1 /*16*/].f_10;
Global_113648.f_20412[iParam0 /*16*/].f_9=Global_113648.f_20412[iParam1 /*16*/].f_9;
Global_113648.f_20412[iParam0 /*16*/].f_11=Global_113648.f_20412[iParam1 /*16*/].f_11;
Global_113648.f_20412[iParam0 /*16*/].f_12=Global_113648.f_20412[iParam1 /*16*/].f_12;
Global_113648.f_20412[iParam0 /*16*/].f_13=Global_113648.f_20412[iParam1 /*16*/].f_13;
Global_113648.f_20412[iParam0 /*16*/].f_14=Global_113648.f_20412[iParam1 /*16*/].f_14;
Global_113648.f_20412[iParam0 /*16*/].f_15=Global_113648.f_20412[iParam1 /*16*/].f_15;
return;
}


void func_9(int iParam0, int iParam1) // Position - 0x9D8{
if(iParam0==235 || iParam0==0) return;
Global_113648.f_8615[iParam0]=1;
Global_113648.f_8615.f_236[iParam0]=MISC::GET_GAME_TIMER() + iParam1;
return;
}


void func_10(const char* sParam0, const char* sParam1) // Position - 0xA15{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}


void func_11(const char* sParam0) // Position - 0xA31{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xA47{
func_13();
return Global_113648.f_2365.f_539.f_4321;
}


void func_13() // Position - 0xA60{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_18(character) && !func_14(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_18(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_14(int iParam0) // Position - 0xB5D{
return Global_43257==iParam0;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xB6B{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xBA8{
if(func_18(character)) return func_17(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_17(eCharacter echParam0) // Position - 0xBCD{
return Global_2028[echParam0 /*29*/];
}
BOOL func_18(eCharacter echParam0) // Position - 0xBDC{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0xBE8{
func_13();
return Global_113648.f_2365.f_539.f_4321;
}
BOOL func_20(const char* sParam0) // Position - 0xC01{
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) return false;
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return false;
if(!CAM::IS_SCREEN_FADED_IN()) return false;
if(HUD::IS_WARNING_MESSAGE_ACTIVE()) return false;
if(func_22()) return false;
if(func_5()) return false;
if(sParam0->f_12 < 3){
if(func_21()) return false;
if(Global_78556) return false;
if(Global_97601) return false;
if(!IS_BIT_SET(sParam0->f_15, 1))if(Global_97609) return false;
}
return true;
}
BOOL func_21() // Position - 0xC8B{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}
BOOL func_22() // Position - 0xCB5{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}


void func_23() // Position - 0xCD1{
if(Global_112288)if(MISC::ARE_STRINGS_EQUAL(&(uLocal_20.f_4), ""))if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uLocal_20)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
elseif(func_2(&uLocal_20, &(uLocal_20.f_4))) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
Global_112289=0;
Global_112288=false;
SCRIPT::TERMINATE_THIS_THREAD();
return;
}