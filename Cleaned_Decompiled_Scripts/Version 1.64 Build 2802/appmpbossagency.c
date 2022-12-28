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
float fLocal_47=0f;
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
int iLocal_85=0;
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
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
int iLocal_110=0;
Player plLocal_111=0;
BOOL bLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
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
fLocal_47=(0.05f + 0.275f) - 0.01f;
TEXT_LABEL_ASSIGN_STRING(&uLocal_86, "CELL_206" /*BACK*/, 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_90, "CELL_214" /*OPTIONS*/, 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_94, "CELL_243" /*ACCEPT JOB*/, 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_98, "CELL_244" /*CANCEL JOB*/, 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_102, "CELL_265" /*INVITATION*/, 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_106, "CELL_300" /*CHAR_DEFAULT*/, 16);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_98(&uLocal_113);
iLocal_110=0;
func_96();
func_95(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
func_85(false);
while (true){
SYSTEM::WAIT(0);
func_84();
func_83();
if(!Global_20383.f_1==9 && Global_20383.f_1 > 3){
switch (iLocal_85){
case 0:
func_47();
break;
case 1:
func_31();
break;
case 3:
func_5();
break;
case 2:
func_4();
break;
default:
break;
}
if(Global_20383.f_1 !=8)if(func_3()) func_2();
}
if(func_1()) func_2();
}
return;
}
BOOL func_1() // Position - 0x170{
if(Global_20383.f_1==1 || Global_20383.f_1==3 || Global_20383.f_1==0 || Global_20327==1){
Global_20370=1;
return true;
}
return false;
}


void func_2() // Position - 0x1B3{
Global_1890001.f_6=0;
SCRIPT::TERMINATE_THIS_THREAD();
return;
}
BOOL func_3() // Position - 0x1C6{
if(Global_8859==1 || Global_20383.f_1 < 7){
Global_20370=1;
return true;
}
return false;
}


void func_4() // Position - 0x1EF{
return;
}


void func_5() // Position - 0x1F7{
int num;
Global_1890001.f_6=1;
if(bLocal_112){
if(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, Global_20352)) bLocal_112=false;
return;
}
if(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)){
iLocal_85=1;
num=func_29(iLocal_110, 0);
func_6(num);
return;
}
if(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL)){
iLocal_85=1;
return;
}
HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23" /*Confirm*/, "BA_APP_PASS_W" /*Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard.*/, 36, 0, false, -1, 0, 0, true, 0);
return;
}


void func_6(int iParam0) // Position - 0x25E{
Player player;
player=Global_1890001.f_7[iParam0 /*8*/].f_2;
if(Global_1890001.f_7[iParam0 /*8*/].f_1==1 && plLocal_111==player){
func_26(player, Global_1890001.f_7[iParam0 /*8*/].f_6);
func_13(iParam0);
}
Global_1890001.f_6=0;
func_7(0);
return;
}


void func_7(int iParam0) // Position - 0x2B3{
if(func_12()) return;
if(Global_20584)if(func_11()) func_9(true, true);
else func_9(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_8()) Global_20383.f_1=3;
return;
}
BOOL func_8() // Position - 0x33D{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_9(BOOL bParam0, BOOL bParam1) // Position - 0x364{
if(bParam0){
if(func_10(0)){
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
BOOL func_10(int iParam0) // Position - 0x3D8{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_11() // Position - 0x42F{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_12() // Position - 0x43D{
return IS_BIT_SET(Global_1962996, 19);
}


void func_13(int iParam0) // Position - 0x44C{
int i;
if(iParam0 !=-1){
if(Global_1890001.f_7[iParam0 /*8*/].f_1==1){
if(IS_BIT_SET(Global_1890001.f_7[iParam0 /*8*/].f_5, 0)){
func_25();
if(Global_1890001.f_7[iParam0 /*8*/].f_7==0){
func_25();
}else{
Global_1890001.f_4=Global_1890001.f_4 - 1;
if(Global_1890001.f_4 < 0) Global_1890001.f_4=0;
func_18();
}}
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_22), Global_1890001.f_7[iParam0 /*8*/].f_2);
HUD::THEFEED_REMOVE_ITEM(Global_1890001.f_7[iParam0 /*8*/].f_4);
func_17();
func_15(0);
}
for (i=iParam0;
i <=8;
i=i + 1){
Global_1890001.f_7[i /*8*/]={
Global_1890001.f_7[i + 1 /*8*/] 
};
}
Global_1890001.f_7[9 /*8*/].f_1=0;
Global_1890001.f_7[9 /*8*/].f_2=_INVALID_PLAYER_INDEX();
}
return;
}
Player _INVALID_PLAYER_INDEX() // Position - 0x53E{
return -1;
}


void func_15(int iParam0) // Position - 0x547{
if(!func_16(iParam0)) MISC::SET_BIT(&(Global_1890001.f_3), iParam0);
return;
}
BOOL func_16(int iParam0) // Position - 0x565{
return IS_BIT_SET(Global_1890001.f_3, iParam0);
}


void func_17() // Position - 0x576{
Global_1890001=Global_1890001 - 1;
return;
}


void func_18() // Position - 0x588{
Global_22788=Global_22788 - 1;
if(Global_22788 < 0) func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
func_19();
return;
}


void func_19() // Position - 0x5AA{
if(!Global_20585){
if(Global_20383.f_1==6){
func_95(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_20(1);
func_95(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
}}
return;
}


void func_20(int iParam0) // Position - 0x607{
int i;
int num;
int value;
int j;
int value2;
int k;
int value3;
int value4;
int value5;
int value6;
Global_22793=0;
Global_8858=iParam0;
for (i=0;
i < 9;
i=i + 1){
Global_8822[i]=0;
}
for (i=0;
i < 9;
i=i + 1){
num=0;
if(func_23(14)){
while (num < 34){
if(iParam0==Global_8260[num /*15*/].f_11){
if(i==Global_8260[num /*15*/].f_4){
if(Global_8822[i]==0){
Global_8786[i]=num;
if(num==3){
if(IS_BIT_SET(Global_8254, 3)){
value=42;
Global_20588=1;
}else{
value=255;
Global_20588=0;
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_22(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694519)if(num==14) func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
Global_8822[i]=1;
}}}
num=num + 1;
}}else{
while (num < 34){
if(iParam0==Global_8260[num /*15*/].f_11){
if(i==Global_8260[num /*15*/].f_4){
if(Global_8822[i]==0){
Global_8786[i]=num;
if(num==1){
for (j=0;
j < 35;
j=j + 1){
if(Global_113648.f_14143[j /*104*/].f_24 !=0)if(Global_113648.f_14143[j /*104*/].f_28==0)if(Global_113648.f_14143[j /*104*/].f_99[Global_20383]==1) Global_22793=Global_22793 + 1;
}
func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==7){
if(Global_78558){
value2=0;
value2=Global_4541031;
for (k=0;
k < 12;
k=k + 1){
if(Global_4541032[k /*104*/].f_24 !=0)if(Global_4541032[k /*104*/].f_28==0)if(Global_4541032[k /*104*/].f_99[Global_20383]==1) value2=value2 + 1;
}
func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
switch (Global_20383){
case 0:
value3=Global_44457;
break;
case 1:
value3=Global_44458;
break;
case 2:
value3=Global_44459;
break;
default:
break;
}
func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}}elseif(num==14){
func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==20){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_22(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==2){
if(IS_BIT_SET(Global_8254, 6)) value4=42;
else value4=255;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_22(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==3){
if(IS_BIT_SET(Global_8254, 3)){
value5=42;
Global_20588=1;
}else{
value5=255;
Global_20588=0;
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_22(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==8){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_22(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==23 && MISC::ARE_STRINGS_EQUAL(&Global_8260[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8254, 6)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_22(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[num /*15*/].f_10==57 && num==23){
value6=0;
value6=Global_1890001.f_1;
func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}
Global_8822[i]=1;
}}}
num=num + 1;
}}}
return;
}


void func_21(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xB93{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_22(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_22(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_22(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_22(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_22(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_22(const char* sParam0) // Position - 0xC46{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}
BOOL func_23(int iParam0) // Position - 0xC58{
return Global_43257==iParam0;
}


void func_24(char* sParam0) // Position - 0xC66{
if(Global_22788 !=0){
!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
Global_22788=0;
}
return;
}


void func_25() // Position - 0xC83{
Global_1890001.f_1=Global_1890001.f_1 - 1;
if(Global_1890001.f_1 < 0) Global_1890001.f_1=0;
return;
}


void func_26(Player plParam0, var uParam1) // Position - 0xCAA{
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_26==_INVALID_PLAYER_INDEX()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0)){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_26=plParam0;
Global_2793044.f_5225.f_225=uParam1;
func_27(_GET_PLAYER_SCRIPT_EVENT_BITS(plParam0));
}}
return;
}


void func_27(int iParam0) // Position - 0xCFA{
struct<2> eventData;
eventData=1848110702;
eventData.f_1=PLAYER::PLAYER_ID();
if(!iParam0==0) SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 2, iParam0);
return;
}
int _GET_PLAYER_SCRIPT_EVENT_BITS(Player plParam0) // Position - 0xD26{
int address;
if(plParam0 !=-1) MISC::SET_BIT(&address, plParam0);
return address;
}

int func_29(int iParam0, int iParam1) // Position - 0xD3E{
int i;
for (i=0;
i < func_30();
i=i + 1){
if(Global_1890001.f_7[i /*8*/].f_7==iParam1){
iParam0=iParam0 - 1;
if(iParam0 < 0) return i;
}}
return 0;
}

int func_30() // Position - 0xD7E{
return Global_1890001;
}


void func_31() // Position - 0xD8A{
int num;
Player player;
num=func_29(iLocal_110, 0);
if(iLocal_110==-1){
func_85(true);
return;
}
player=Global_1890001.f_7[num /*8*/].f_2;
if(!_NETWORK_IS_PLAYER_VALID(player, false, true) || plLocal_111 !=player){
func_85(true);
return;
}
func_41(&uLocal_113);
if(func_39(&uLocal_113)){
func_85(true);
return;
}
if(func_38(&uLocal_113)){
func_13(num);
func_85(true);
return;
}
if(func_34(&uLocal_113)){
if(func_33()){
bLocal_112=true;
iLocal_85=3;
}elseif(Global_1890001.f_7[num /*8*/]==0){
func_6(num);
}elseif(Global_1890001.f_7[num /*8*/]==1){
func_32(num);
}else{
func_7(0);
}}
return;
}


void func_32(int iParam0) // Position - 0xE50{
MISC::SET_BIT(&Global_1836078, 15);
func_13(iParam0);
Global_1890001.f_6=0;
func_7(0);
return;
}
BOOL func_33() // Position - 0xE74{
return Global_1574582;
}
BOOL func_34(var uParam0) // Position - 0xE80{
if(!IS_BIT_SET(*uParam0, 0)) return false;
if(Global_20361) return false;
if(!CAM::IS_SCREEN_FADED_IN()) return false;
if(!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20352)) return false;
func_35();
Global_20361=true;
return true;
}


void func_35() // Position - 0xEC4{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
func_36();
}
return;
}


void func_36() // Position - 0xEE9{
if(func_37()) MOBILE::CELL_SET_INPUT(5);
return;
}
BOOL func_37() // Position - 0xEFD{
eViewModeContext camActiveViewModeContext;
eViewMode camViewModeForContext;
int num;
if(Global_78558) return false;
num=0;
camActiveViewModeContext=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
camViewModeForContext=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
if(camViewModeForContext==FIRST_PERSON) num=1;
if(Global_4542575 || num) return true;
return true;
}
BOOL func_38(var uParam0) // Position - 0xF44{
if(!IS_BIT_SET(*uParam0, 1)) return false;
if(Global_20361) return false;
if(!CAM::IS_SCREEN_FADED_IN()) return false;
if(!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20355)) return false;
func_35();
Global_20361=true;
return true;
}
BOOL func_39(var uParam0) // Position - 0xF88{
if(!IS_BIT_SET(*uParam0, 2)) return false;
if(Global_20361) return false;
if(!CAM::IS_SCREEN_FADED_IN()) return false;
if(!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20353)) return false;
func_40();
Global_20361=true;
return true;
}


void func_40() // Position - 0xFCC{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);
return;
}


void func_41(var uParam0) // Position - 0xFEE{
if(MISC::GET_GAME_TIMER() < uParam0->f_1) return;
if(!CAM::IS_SCREEN_FADED_IN()) return;
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20359) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD)){
func_44();
uParam0->f_1=MISC::GET_GAME_TIMER() + 50;
}
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20360) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD)){
func_42();
uParam0->f_1=MISC::GET_GAME_TIMER() + 50;
}
return;
}


void func_42() // Position - 0x105B{
func_95(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
func_43();
return;
}


void func_43() // Position - 0x1098{
if(func_37())if(Global_20589==0) MOBILE::CELL_SET_INPUT(2);
else MOBILE::CELL_SET_INPUT(1);
return;
}


void func_44() // Position - 0x10BB{
func_95(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
func_45();
return;
}


void func_45() // Position - 0x10F8{
if(func_37())if(Global_20589==0) MOBILE::CELL_SET_INPUT(1);
else MOBILE::CELL_SET_INPUT(2);
return;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x111B{
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


void func_47() // Position - 0x117B{
int methodReturn;
int num;
int methodReturn2;
int num2;
if(func_30() > 1) func_41(&uLocal_113);
if(func_34(&uLocal_113)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "GET_CURRENT_SELECTION");
methodReturn=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn)){
SYSTEM::WAIT(0);
}
iLocal_110=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn);
num=func_29(iLocal_110, 0);
switch (Global_1890001.f_7[num /*8*/].f_1){
case 0:
return;
case 1:
func_49();
break;
default:
return;
}
Global_20383.f_1=8;
return;
}
if(func_38(&uLocal_113)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "GET_CURRENT_SELECTION");
methodReturn2=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn2)){
SYSTEM::WAIT(0);
}
iLocal_110=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn2);
num2=func_29(iLocal_110, 0);
switch (Global_1890001.f_7[num2 /*8*/].f_1){
case 0:
return;
case 1:
func_13(num2);
func_85(false);
return;
default:
return;
}
return;
return;
}
if(func_16(0)){
func_48(0);
func_85(false);
}
return;
}


void func_48(int iParam0) // Position - 0x1287{
if(func_16(iParam0)) MISC::CLEAR_BIT(&(Global_1890001.f_3), iParam0);
return;
}


void func_49() // Position - 0x12A4{
BOOL flag;
const char* pedheadshotTxdString;
int num;
int num2;
Player player;
var text;
var unk16;
BOOL flag2;
int i;
int num3;
var componentType;
var text2;
var componentType2;
if(Global_20383.f_1 !=8) Global_20383.f_1=8;
func_95(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
flag=false;
num2=func_29(iLocal_110, 0);
plLocal_111=Global_1890001.f_7[num2 /*8*/].f_2;
player=Global_1890001.f_7[num2 /*8*/].f_2;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(_NETWORK_IS_PLAYER_VALID(player, false, true)){
text={
func_82(player) 
};
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(player));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
flag=true;
}else{
func_22("");
}
if(Global_1890001.f_7[num2 /*8*/]==0){
if(Global_262145.f_15419){
unk16=3;
flag2=func_75(player);
for (i=0;
i < 3;
i=i + 1){
if(num3 < 3){
if(Global_1894573[player /*608*/].f_10.f_11[i] !=_INVALID_PLAYER_INDEX()){
if(_NETWORK_IS_PLAYER_VALID(Global_1894573[player /*608*/].f_10.f_11[i], false, true)){
unk16[num3]=Global_1894573[player /*608*/].f_10.f_11[i];
num3=num3 + 1;
}}}}
if(num3==0){
if(flag2) func_22("BA_APP_BODYCTA" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~*/);
else func_22("BA_APP_BODY_TA" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~*/);
}else{
TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T4" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~*/, 16);
if(flag2) TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT4" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~*/, 16);
if(num3==2)if(flag2) TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT5" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~*/, 16);
else TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T5" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~*/, 16);
elseif(num3 > 2)if(flag2) TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT6" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~*/, 16);
else TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T6" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~*/, 16);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
for (i=0;
i < num3;
i=i + 1){
text2={
func_82(unk16[i]) 
};
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
if(Global_1890001.f_88[num2 /*5*/].f_1)if(Global_1890001.f_88[num2 /*5*/].f_2) TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T9" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage:
$~1~ ~n~- Associate(s):
~1~ ~n~- Yacht:
Yes~n~- Office:
Yes ~n~- Warehouse(s):
~1~ ~n~- Vehicle(s):
~1~*/, 16);
else TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T8" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage:
$~1~ ~n~- Bodyguard(s):
~1~ ~n~- Yacht:
Yes~n~- Office:
No ~n~- Warehouse(s):
~1~ ~n~- Vehicle(s):
~1~*/, 16);
elseif(Global_1890001.f_88[num2 /*5*/].f_2) TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T7" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage:
$~1~ ~n~- Associate(s):
~1~ ~n~- Yacht:
No~n~- Office:
Yes ~n~- Warehouse(s):
~1~ ~n~- Vehicle(s):
~1~*/, 16);
else TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T10" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage:
$~1~ ~n~- Bodyguard(s):
~1~ ~n~- Yacht:
No~n~- Office:
No~n~- Warehouse(s):
~1~ ~n~- Vehicle(s):
~1~*/, 16);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType2);
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890001.f_88[num2 /*5*/]);
HUD::ADD_TEXT_COMPONENT_INTEGER(func_74(player));
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890001.f_88[num2 /*5*/].f_3);
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890001.f_88[num2 /*5*/].f_4);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}elseif(Global_1890001.f_7[num2 /*8*/]==1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2" /*~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~*/);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(Global_1890001.f_7[num2 /*8*/].f_2));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_61(Global_1890001.f_7[num2 /*8*/].f_2));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(flag){
num=func_55(Global_1890001.f_7[num2 /*8*/].f_2);
if(num==0) flag=false;
else pedheadshotTxdString=PED::GET_PEDHEADSHOT_TXD_STRING(num);
}
if(flag) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(pedheadshotTxdString);
else func_22(&uLocal_106);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_95(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
func_53(&uLocal_102);
func_50(13, &uLocal_94, 12, &uLocal_98, 4, &uLocal_86, &uLocal_113);
iLocal_85=1;
return;
}


void func_50(int iParam0, const char* sParam1, int iParam2, const char* sParam3, int iParam4, const char* sParam5, int* piParam6) // Position - 0x15F3{
func_51(2, iParam0, sParam1, 0, piParam6, -1);
func_51(1, iParam2, sParam3, 1, piParam6, 17);
func_51(3, iParam4, sParam5, 2, piParam6, -1);
return;
}


void func_51(int iParam0, int iParam1, const char* sParam2, int iParam3, int* piParam4, int iParam5) // Position - 0x1623{
if(iParam1==1){
func_21(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(piParam4, iParam3);
func_52(iParam5, false);
return;
}
if(Global_20371){
func_21(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
MISC::SET_BIT(piParam4, iParam3);
func_52(iParam5, true);
return;
}
func_21(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(piParam4, iParam3);
func_52(iParam5, true);
return;
}


void func_52(int iParam0, BOOL bParam1) // Position - 0x16C8{
if(iParam0==-1) return;
if(bParam1){
MISC::SET_BIT(&Global_8253, iParam0);
return;
}
MISC::CLEAR_BIT(&Global_8253, iParam0);
return;
}


void func_53(char* sParam0) // Position - 0x16F3{
func_54(Global_20364, "SET_HEADER", sParam0, 0, 0, 0, 0);
return;
}


void func_54(Player plParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x170C{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
func_22(sParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)) func_22(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)) func_22(sParam4);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)) func_22(sParam5);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)) func_22(sParam6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}

int func_55(Player plParam0) // Position - 0x1767{
int num;
num=func_58(plParam0);
if(num==-1){
func_56(plParam0, true);
return 0;
}
Global_1666668[num /*5*/].f_4=1;
return Global_1666668[num /*5*/].f_2;
}


void func_56(Player plParam0, BOOL bParam1) // Position - 0x179D{
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return;
if(func_58(plParam0) !=-1) return;
if(Global_1666831)if(plParam0==Global_1666831.f_1) return;
if(func_57(plParam0)) return;
if(Global_1666869 >=32) return;
Global_1666836[Global_1666869]=plParam0;
Global_1666869=Global_1666869 + 1;
bParam1;
return;
}
BOOL func_57(Player plParam0) // Position - 0x1809{
int i;
i=0;
for (i=0;
i < Global_1666869;
i=i + 1){
if(Global_1666836[i]==plParam0) return true;
}
return false;
}

int func_58(Player plParam0) // Position - 0x183B{
int i;
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return -1;
if(Global_1666829==0) return -1;
i=0;
for (i=0;
i < Global_1666829;
i=i + 1){
if(Global_1666668[i /*5*/].f_1==plParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[i /*5*/].f_2)) return i;
func_59(i);
return -1;
}}
return -1;
}


void func_59(int iParam0) // Position - 0x18BA{
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
func_60(&Global_1666668[num /*5*/]);
Global_1666829=Global_1666829 - 1;
return;
}


void func_60(var uParam0) // Position - 0x1970{
*uParam0=0;
uParam0->f_1=_INVALID_PLAYER_INDEX();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) uParam0->f_3=NETWORK::GET_NETWORK_TIME();
return;
}
const 

char* func_61(Player plParam0) // Position - 0x199D{
const char* str;
Player player;
if(plParam0==PLAYER::PLAYER_ID()){
str=func_73(&(Global_1894573[plParam0 /*608*/].f_10.f_105));
return str;
}
if(Global_1894573[plParam0 /*608*/].f_10.f_121 !=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121){
str=func_68(plParam0, false);
return str;
}
if(func_67(plParam0, 28) || func_67(PLAYER::PLAYER_ID(), 28) || func_66(plParam0) && !func_64(plParam0)) return func_68(plParam0, false);
player=func_63(plParam0);
if(player !=_INVALID_PLAYER_INDEX())if(player !=PLAYER::PLAYER_ID())if(!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) return func_68(player, false);
if(player !=_INVALID_PLAYER_INDEX()){
str=func_73(&(Global_1894573[player /*608*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(str)) return func_68(player, false);
else return str;
}
return "";
}
BOOL func_62() // Position - 0x1AA4{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}
Player func_63(Player plParam0) // Position - 0x1ABA{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10;
return _INVALID_PLAYER_INDEX();
}
BOOL func_64(Player plParam0) // Position - 0x1ADD{
var gamerHandle;
gamerHandle={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
if(func_62())if(plParam0==PLAYER::PLAYER_ID()) return true;
elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle)) return true;
return false;
}
struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x1B1D{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
return gamerHandle;
}
BOOL func_66(Player plParam0) // Position - 0x1B34{
var gamerHandle;
if(plParam0 !=_INVALID_PLAYER_INDEX()){
gamerHandle={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
if(MISC::IS_ORBIS_VERSION() && !unk_0xEE17703CF2C2875A() || MISC::IS_PC_VERSION())if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) return false;
elseif(func_62() || unk_0xEE17703CF2C2875A())if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle)) return false;
}
return true;
}
BOOL func_67(Player plParam0, int iParam1) // Position - 0x1BA1{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
const 

char* func_68(Player plParam0, BOOL bParam1) // Position - 0x1BB9{
if(!bParam1)if(func_70(plParam0, true)) return func_69();
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}
const 

char* func_69() // Position - 0x1BE0{
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}
BOOL func_70(Player plParam0, BOOL bParam1) // Position - 0x1BF0{
return func_71(plParam0, bParam1, 1);
}
BOOL func_71(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x1C01{
Player player;
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
if(!bParam1)if(func_72(plParam0, iParam2)) return 0;
player=Global_1894573[plParam0 /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428==iParam2) return 1;
return 0;
}
BOOL func_72(Player plParam0, int iParam1) // Position - 0x1C5D{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10==plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428==iParam1) return true;
return false;
}
const 

char* func_73(var uParam0) // Position - 0x1CAC{
return uParam0;
}

int func_74(Player plParam0) // Position - 0x1CB6{
if(func_63(plParam0)==_INVALID_PLAYER_INDEX()) return 0;
return Global_1894573[plParam0 /*608*/].f_10.f_19;
}
BOOL func_75(Player plParam0) // Position - 0x1CDC{
if(plParam0==-1) return false;
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 26);
}
eHudColour func_76(Player plParam0) // Position - 0x1CFF{
int num;
num=func_79(plParam0);
if(num !=-1) return func_77(num);
return HUD_COLOUR_WHITE;
}
eHudColour func_77(int iParam0) // Position - 0x1D1F{
int num;
if(iParam0 > -1){
num=func_78(iParam0);
switch (num){
case 0:
return 192;
case 1:
return 193;
case 2:
return 194;
case 3:
return 195;
case 4:
return 196;
case 5:
return 197;
case 6:
return 198;
case 7:
return 199;
case 8:
return 200;
case 9:
return 201;
case 10:
return 202;
case 11:
return 203;
case 12:
return 204;
case 13:
return 205;
case 14:
return 206;
default:
}}
return 1;
}


var func__78(int iParam0) // Position - 0x1DE2{
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(Player plParam0) // Position - 0x1DF9{
if(!plParam0==_INVALID_PLAYER_INDEX())if(_IS_PLAYER_IN_AN_ORGANIZATION(plParam0, true)) return Global_2648605.f_818.f_11[func_63(plParam0)];
return -1;
}
BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x1E2B{
if(!bCanBeBoss)if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return false;
return Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX();
}
BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x1E56{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10==plParam0;
return false;
}
struct<16> func_82(Player plParam0) // Position - 0x1E8B{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
TEXT_LABEL_APPEND_STRING(&unk, PLAYER::GET_PLAYER_NAME(plParam0), 64);
TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
return unk;
}


void func_83() // Position - 0x1EB2{
if(Global_1890001.f_6)if(iLocal_85 !=3)if(!HUD::IS_WARNING_MESSAGE_ACTIVE()) Global_1890001.f_6=0;
return;
}


void func_84() // Position - 0x1ED8{
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT);
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL);
return;
}


void func_85(BOOL bParam0) // Position - 0x1EEE{
int value;
int num;
BOOL flag;
plLocal_111=_INVALID_PLAYER_INDEX();
if(!Global_20383.f_1==7) Global_20383.f_1=7;
value=0;
if(bParam0) value=iLocal_110;
if(value >=Global_1665288) value=0;
if(Global_22785){
func_49();
Global_22785=false;
return;
}
num=func_30();
num=num - func_94();
if(_IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), false) && !func_93(true) && num <=0){
func_91();
return;
}
func_86();
func_95(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
func_53("CELL_BOSSAGE" /*SecuroServ*/);
flag=false;
if(num > 0) flag=true;
if(flag) func_50(13, &uLocal_90, 12, &uLocal_98, 4, &uLocal_86, &uLocal_113);
else func_50(1, "", 1, "", 4, &uLocal_86, &uLocal_113);
iLocal_85=0;
return;
}


void func_86() // Position - 0x1FD8{
int i;
int num;
func_95(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
for (i=0;
i < func_30();
i=i + 1){
if(Global_1890001.f_7[i /*8*/].f_1==1 && Global_1890001.f_7[i /*8*/].f_7==0){
switch (Global_1890001.f_7[i /*8*/]){
case 0:
if(func_90(i, num)) num=num + 1;
break;
case 1:
if(func_88(i, num)) num=num + 1;
break;
}}}
if(num > 0) return;
func_87();
return;
}


void func_87() // Position - 0x208D{
BOOL value;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(_IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID())) func_22("BA_APP_NONEB" /*No Invites*/);
else func_22("BA_APP_NONE" /*No VIP Invites*/);
func_22("");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
value=NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
BOOL func_88(int iParam0, int iParam1) // Position - 0x20EB{
var unk;
eHudColour value;
int num;
if(Global_1890001.f_7[iParam0 /*8*/].f_2==_INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1890001.f_7[iParam0 /*8*/].f_2, false, true)) return false;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
unk={
func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) 
};
func_89(&unk);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1" /*Has challenged you to an Executive Deathmatch.*/);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
value=HUD_COLOUR_WHITE;
num=func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);
if(num !=-1) value=func_77(num);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return true;
}


void func_89(const char* sParam0) // Position - 0x219A{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
return;
}
BOOL func_90(int iParam0, int iParam1) // Position - 0x21A8{
var unk;
BOOL flag;
int value;
eHudColour value2;
int num;
if(Global_1890001.f_7[iParam0 /*8*/].f_2==_INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1890001.f_7[iParam0 /*8*/].f_2, false, true)) return false;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
unk={
func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) 
};
func_89(&unk);
flag=func_75(Global_1890001.f_7[iParam0 /*8*/].f_2);
value=func_74(Global_1890001.f_7[iParam0 /*8*/].f_2);
if(value==0){
if(flag) func_22("BA_APP_BODYCT" /*Wants you to become an Associate.*/);
else func_22("BA_APP_BODY_T" /*Wants you to become a Bodyguard.*/);
}elseif(value==1){
if(flag) GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3" /*Wants you to become an Associate.~n~~1~ other in this Organization.*/);
else GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3" /*Wants you to become a Bodyguard.~n~~1~ other in this Organization.*/);
HUD::ADD_TEXT_COMPONENT_INTEGER(value);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
if(flag) GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2" /*Wants you to become an Associate.~n~~1~ others in this Organization.*/);
else GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2" /*Wants you to become a Bodyguard.~n~~1~ others in this Organization.*/);
HUD::ADD_TEXT_COMPONENT_INTEGER(value);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
value2=HUD_COLOUR_WHITE;
num=func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);
if(num !=-1) value2=func_77(num);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return true;
}


void func_91() // Position - 0x22DD{
func_95(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(PLAYER::PLAYER_ID()));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_92());
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_22("BA_APP_NONEG" /*You are already a member of this Organization.*/);
func_22("CELL_AGBOSSPIC" /*CHAR_GANGAPP*/);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_95(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
func_53("CELL_BOSSAGE" /*SecuroServ*/);
func_50(1, "", 1, "", 4, &uLocal_86, &uLocal_113);
iLocal_85=2;
return;
}
const 

char* func_92() // Position - 0x2395{
Player player;
const char* str;
player=func_63(PLAYER::PLAYER_ID());
if(player !=_INVALID_PLAYER_INDEX()){
if(player !=PLAYER::PLAYER_ID()){
if(func_67(player, 28) || func_67(PLAYER::PLAYER_ID(), 28) || func_66(player) && !func_64(player)) return func_68(player, false);
if(!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) return func_68(player, false);
}
str=func_73(&(Global_1894573[player /*608*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(str)) return func_68(player, false);
else return str;
}
return "";
}
BOOL func_93(BOOL bParam0) // Position - 0x2447{
return func_70(PLAYER::PLAYER_ID(), bParam0);
}

int func_94() // Position - 0x2459{
int i;
int num;
for (i=0;
i < func_30();
i=i + 1){
if(Global_1890001.f_7[i /*8*/].f_7==1) num=num + 1;
}
return num;
}


void func_95(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x248E{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(iParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_96() // Position - 0x24F1{
Global_1890001.f_1=0;
func_97();
return;
}


void func_97() // Position - 0x2504{
Global_1890001.f_5=0;
return;
}


void func_98(var uParam0) // Position - 0x2513{
*uParam0=0;
return;
}