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
BOOL bLocal_64=0;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34)) SCRIPT::TERMINATE_THIS_THREAD();
while (true){
SYSTEM::WAIT(0);
func_143();
func_1();
}
return;
}


void func_1() // Position - 0xA5{
eEventType eventAtIndex;
Entity eventData;
int i;
int num;
int num2;
int num3;
int num4;
eEventType eventAtIndex2;
i=0;
num=0;
num2=0;
num3=0;
num4=0;
if(PLAYER::IS_PLAYER_ONLINE()){
for (i=0;
i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK);
i=i + 1){
eventAtIndex2=SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
switch (eventAtIndex2){
case EVENT_VOICE_SESSION_STARTED:
func_140();
break;
case EVENT_VOICE_SESSION_ENDED:
func_139();
break;
case EVENT_VOICE_CONNECTION_REQUESTED:
func_133(i);
break;
case EVENT_VOICE_CONNECTION_RESPONSE:
func_132(i);
break;
case EVENT_VOICE_CONNECTION_TERMINATED:
func_121(i);
break;
case EVENT_NETWORK_PRESENCE_INVITE:
func_3(i);
break;
}}}
for (i=0;
i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI);
i=i + 1){
eventAtIndex=SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i);
bLocal_64=true;
switch (eventAtIndex){
case EVENT_ENTITY_DAMAGED:
SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
if(ENTITY::DOES_ENTITY_EXIST(eventData)){
if(ENTITY::IS_ENTITY_A_VEHICLE(eventData)){
if(func_2(num)){
Global_55613.f_1[num]=eventData;
num=num + 1;
}}elseif(ENTITY::IS_ENTITY_A_PED(eventData)){
if(func_2(num3)){
Global_55613.f_25[num3]=eventData;
num3=num3 + 1;
}}}
break;
case EVENT_ENTITY_DESTROYED:
SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
if(ENTITY::DOES_ENTITY_EXIST(eventData)){
if(ENTITY::IS_ENTITY_A_VEHICLE(eventData)){
if(func_2(num2)){
Global_55613.f_13[num2]=eventData;
num2=num2 + 1;
}}elseif(ENTITY::IS_ENTITY_A_PED(eventData)){
if(func_2(num4)){
Global_55613.f_37[num4]=eventData;
num4=num4 + 1;
}}}
break;
}}
Global_55613=num;
Global_55613.f_12=num2;
Global_55613.f_24=num3;
Global_55613.f_36=num4;
return;
}
BOOL func_2(int iParam0) // Position - 0x24E{
return iParam0 < 10;
}


void func_3(int iParam0) // Position - 0x25B{
struct<39> eventData;
int presenceInviteIndexById;
if(SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 39)){
presenceInviteIndexById=NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(eventData.f_38);
if(presenceInviteIndexById >=0 && presenceInviteIndexById < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES()){
if(NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(presenceInviteIndexById) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(presenceInviteIndexById)){
if(NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(presenceInviteIndexById)) func_58(presenceInviteIndexById);
else NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(presenceInviteIndexById);
func_57(eventData.f_37, -1);
}elseif(func_49()){
func_4(eventData.f_29, eventData, eventData.f_38, eventData.f_16, eventData.f_35, eventData.f_36);
}}}
return;
}

int func_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, int iParam37) // Position - 0x2F8{
BOOL flag;
BOOL flag2;
var unk;
int num;
int presenceInviteIndexById;
int presenceInviteSessionId;
int i;
var unk17;
int num2;
int num3;
int num4;
int num5;
var unk27;
var unk43;
int num6;
int num7;
int num8;
int num9;
int num10;
BOOL flag3;
int num11;
int num12;
BOOL flag4;
BOOL flag5;
BOOL flag6;
BOOL flag7;
int num13;
int j;
int num14;
flag=false;
if(iParam37 >=1000000){
iParam37=iParam37 - 1000000;
flag=true;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_48()){
func_47(iParam22);
return 0;
}
if(func_46()){
func_47(iParam22);
return 0;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(flag){
}elseif(!NETWORK::NETWORK_IS_FRIEND(&uParam23)){
func_47(iParam22);
return 0;
}
if(Global_20326){
func_47(iParam22);
return 0;
}
flag2=true;
if(!func_45()){
if(!_IS_MISSION_REPEAT_ACTIVE(false)){
if(flag2){
func_47(iParam22);
return 0;
}}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_43(PLAYER::PLAYER_ID())){
func_47(iParam22);
return 0;
}}
if(MISC::IS_STRING_NULL_OR_EMPTY(&uParam6)){
func_47(iParam22);
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&uParam0)){
func_47(iParam22);
return 0;
}
unk={
uParam6 
};
num=func_42(unk);
if(num !=-1) func_39(num);
presenceInviteIndexById=NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam22);
presenceInviteSessionId=NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(presenceInviteIndexById);
i=0;
for (i=0;
i <=11;
i=i + 1){
if(presenceInviteSessionId==Global_2625771[i /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2625771[i /*4*/].f_2){
Global_2625771[i /*4*/].f_2=MISC::GET_GAME_TIMER() + 30000;
i=12;
func_47(iParam22);
return 0;
}}
unk17.f_1=-1;
unk17.f_2=-1;
unk17.f_9=-1;
func_38(&unk17);
num2=0;
num3=0;
num4=63;
num5=0;
TEXT_LABEL_ASSIGN_STRING(&unk27, "", 64);
TEXT_LABEL_ASSIGN_STRING(&unk43, "", 64);
num6=0;
num7=0;
num8=0;
num9=1;
num10=0;
flag3=false;
if(func_37(&uParam0, &num2, &num5)){
num4=40;
num7=0;
num5=num5;
}elseif(func_35(&uParam0, &unk17, false)){
num4=unk17.f_2;
num2=func_34(num4, unk17.f_1);
num3=func_33(&unk17);
unk27={
func_32(&unk17, false) 
};
unk43={
func_31(&unk17) 
};
num7=1;
num6=func_30(&unk17, false);
flag3=func_29(&unk17);
num11=func_27(&unk17);
num12=func_26(&unk17);
flag4=func_21(&unk17);
if(!flag4) num10=1;
}else{
flag5=false;
if(func_19(PLAYER::PLAYER_ID(), uParam23)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
flag5=true;
}else{
func_47(iParam22);
func_17(false);
return 0;
}}
if(!func_16()){
if(!flag5){
if(func_14(PLAYER::PLAYER_ID(), uParam23)){
func_47(iParam22);
func_17(false);
return 0;
}}}
if(!func_13()){
func_47(iParam22);
flag6=true;
func_17(flag6);
return 0;
}
flag7=false;
if(!flag5){
if(func_7(uParam23, &flag7, true)){
func_47(iParam22);
func_17(flag7);
return 0;
}}
num8=1;
num9=0;
num7=1;
}
num13=Global_1665317;
if(num13 >=12) num13=num13 - 1;
for (j=num13 - 1;
j >=0;
j=j - 1){
Global_2623469[num13 /*99*/]={
Global_2623469[j /*99*/] 
};
num13=num13 - 1;
}
Global_1665317=Global_1665317 + 1;
if(Global_1665317 > 12) Global_1665317=12;
num14=0;
Global_2623469[num14 /*99*/]=0;
Global_2623469[num14 /*99*/].f_1=0;
Global_2623469[num14 /*99*/].f_5=0;
Global_2623469[num14 /*99*/].f_2=num8;
Global_2623469[num14 /*99*/].f_3=0;
Global_2623469[num14 /*99*/].f_4=num9;
Global_2623469[num14 /*99*/].f_6={
uParam0 
};
Global_2623469[num14 /*99*/].f_12=num11;
Global_2623469[num14 /*99*/].f_13=num12;
Global_2623469[num14 /*99*/].f_15={
uParam6 
};
TEXT_LABEL_ASSIGN_STRING(&(Global_2623469[num14 /*99*/].f_31), "", 64);
Global_2623469[num14 /*99*/].f_49=num4;
Global_2623469[num14 /*99*/].f_50=num2;
Global_2623469[num14 /*99*/].f_51=num3;
Global_2623469[num14 /*99*/].f_91=iParam22;
Global_2623469[num14 /*99*/].f_57={
unk27 
};
Global_2623469[num14 /*99*/].f_73={
unk43 
};
Global_2623469[num14 /*99*/].f_52=num6;
Global_2623469[num14 /*99*/].f_53=0;
Global_2623469[num14 /*99*/].f_53.f_1=0;
Global_2623469[num14 /*99*/].f_53.f_2=0;
Global_2623469[num14 /*99*/].f_56=num7;
Global_2623469[num14 /*99*/].f_90=uParam36;
Global_2623469[num14 /*99*/].f_92=-1;
Global_2623469[num14 /*99*/].f_93=num10;
Global_2623469[num14 /*99*/].f_94=Global_2625823;
Global_2623469[num14 /*99*/].f_95=flag3;
Global_2623469[num14 /*99*/].f_98=NETWORK::NETWORK_IS_FRIEND(&uParam23);
if(Global_2623469[num14 /*99*/].f_50==0)if(Global_2623469[num14 /*99*/].f_51==1) Global_2623469[num14 /*99*/].f_56=0;
Global_2623469[num14 /*99*/].f_96=func_6(uParam23, num14);
Global_2623469[num14 /*99*/].f_97=0;
Global_2623469[num14 /*99*/].f_89=iParam37;
Global_2625823=Global_2625823 + 1;
Global_2623469[num14 /*99*/].f_47=func_5(uParam23);
if(Global_2623469[num14 /*99*/].f_47 !=-1) Global_2623469[num14 /*99*/].f_48=MISC::GET_GAME_TIMER() + 15000;
return 1;
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x845{
var unk;
int num;
if(!func_16()) return -1;
unk=1;
unk[0 /*13*/]={
uParam0 
};
num=NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&unk, 1);
if(num < 0) return -1;
return num;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13) // Position - 0x880{
if(!NETWORK::NETWORK_IS_FRIEND(&uParam0)) return 0;
if(Global_2623469[iParam13 /*99*/].f_90 > 0) return 0;
return 1;
}
BOOL func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, BOOL bParam14) // Position - 0x8A9{
var gamerHandle1;
*uParam13=0;
if(func_12(0)) return false;
if(func_16()){
if(!func_11()){
*uParam13=1;
return true;
}}
if(!func_9(1) && !bParam14) return true;
gamerHandle1={
GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) 
};
if(!bParam14 && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &uParam0))if(!NETWORK::NETWORK_IS_FRIEND(&uParam0)) return true;
return false;
}
struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x91D{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
return gamerHandle;
}
BOOL func_9(int iParam0) // Position - 0x934{
if(MISC::IS_PS3_VERSION() || func_10() && iParam0==0)if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)==false || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1)==false) return false;
elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)==false) return false;
if(func_11()==false) return false;
return true;
}
BOOL func_10() // Position - 0x98F{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_11() // Position - 0x9A5{
if(MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
if(MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
if(func_10() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()==false && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
if(func_16() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
if(MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
return false;
}
BOOL func_12(int iParam0) // Position - 0xA1D{
if(MISC::IS_PS3_VERSION() || func_10() && iParam0==0)if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)==false || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)==false) return false;
elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)==false) return false;
if(func_11()==false) return false;
return true;
}
BOOL func_13() // Position - 0xA78{
if(!MISC::IS_XBOX360_VERSION()) return true;
return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}
BOOL func_14(Player plParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xA90{
if(!func_15(plParam0)){
if(func_16())if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1)) return false;
if(!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))if(!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)) return true;
}
return false;
}
BOOL func_15(Player plParam0) // Position - 0xACD{
switch (plParam0){
case 63:
case 62:
case 61:
case 40:
return true;
default:
}
return false;
}
BOOL func_16() // Position - 0xAF9{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_17(BOOL bParam0) // Position - 0xB0F{
int gameTimer;
if(bParam0)if(!MISC::IS_XBOX360_VERSION()) return;
if(func_16()) return;
gameTimer=MISC::GET_GAME_TIMER();
if(gameTimer < Global_2625820) return;
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) return;
if(bParam0) _DISPLAY_HELP_TEXT("INV_NO_XBOXLIVE", -1);
else _DISPLAY_HELP_TEXT("INV_RESTRICT" /*You have received an Invite to user-generated content which is currently restricted by your control settings.*/, -1);
Global_2625820=gameTimer + 1800000;
return;
}


void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xB6F{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
return;
}
BOOL func_19(Player plParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xB86{
if(!func_15(plParam0)){
if(func_16())if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1)) return false;
if(!func_20()) return true;
}
return false;
}
BOOL func_20() // Position - 0xBB9{
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==false) return false;
if(func_10())if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
elseif(func_16())if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true)) return true;
elseif(MISC::IS_PC_VERSION())if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
return false;
}
BOOL func_21(var uParam0) // Position - 0xC20{
BOOL flag;
int num;
flag=0;
if(func_25(uParam0)) return IS_BIT_SET(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
if(func_24(uParam0->f_1)){
if(func_23(uParam0)) return IS_BIT_SET(Global_2628582.f_1.f_63, 14);
return flag;
}
num=func_22(uParam0);
if(num==-1) return flag;
switch (uParam0->f_2){
case 63:
return IS_BIT_SET(Global_794709.f_4[num /*88*/].f_76, 14);
case 62:
return IS_BIT_SET(Global_978406.f_1804[num /*88*/].f_76, 14);
case 40:
return flag;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()) return flag;
elseif(uParam0->f_2 < 32) return flag;
return flag;
}

int func_22(var uParam0) // Position - 0xCF0{
int i;
if(MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3))) return -1;
if(func_24(uParam0->f_1)){
if(func_23(uParam0)) return 9999;
return -1;
}
i=0;
switch (uParam0->f_2){
case 63:
if(IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))if(MISC::ARE_STRINGS_EQUAL(&Global_794709.f_4[uParam0->f_1 /*88*/], &(uParam0->f_3))) return uParam0->f_1;
if(!IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))if(Global_1573131.f_5) return -1;
for (i=0;
i < 1818;
i=i + 1){
if(IS_BIT_SET(Global_794709.f_4[i /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&Global_794709.f_4[i /*88*/], &(uParam0->f_3))){
uParam0->f_1=i;
return i;
}}}
return -1;
case 62:
if(IS_BIT_SET(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))if(MISC::ARE_STRINGS_EQUAL(&Global_978406.f_1804[uParam0->f_1 /*88*/], &(uParam0->f_3))) return uParam0->f_1;
if(!IS_BIT_SET(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))if(Global_1573131.f_5) return -1;
for (i=0;
i < 300;
i=i + 1){
if(IS_BIT_SET(Global_978406.f_1804[i /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&Global_978406.f_1804[i /*88*/], &(uParam0->f_3))){
uParam0->f_1=i;
return i;
}}}
return -1;
case 40:
return uParam0->f_1;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()){
if(IS_BIT_SET(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))if(MISC::ARE_STRINGS_EQUAL(&Global_1010831.f_4[uParam0->f_1 /*88*/], &(uParam0->f_3))) return uParam0->f_1;
if(IS_BIT_SET(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))if(Global_1573131.f_5) return -1;
for (i=0;
i < 62;
i=i + 1){
if(IS_BIT_SET(Global_1010831.f_4[i /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&Global_1010831.f_4[i /*88*/], &(uParam0->f_3))){
uParam0->f_1=i;
return i;
}}}
return -1;
}elseif(uParam0->f_2 < 32){
return -1;
}
return -1;
}
BOOL func_23(var uParam0) // Position - 0xF46{
if(Global_2628582)if(MISC::ARE_STRINGS_EQUAL(&(Global_2628582.f_1), &(uParam0->f_3))) return true;
return false;
}
BOOL func_24(int iParam0) // Position - 0xF6B{
return iParam0==9999;
}
BOOL func_25(var uParam0) // Position - 0xF79{
int num;
num=uParam0->f_9;
if(num==-1) return false;
if(!Global_2625825.f_356[num /*75*/]) return false;
if(!MISC::ARE_STRINGS_EQUAL(&(Global_2625825.f_356[num /*75*/].f_10), &(uParam0->f_3))) return false;
if(!IS_BIT_SET(Global_2625825.f_356[num /*75*/].f_5, 3)) return false;
return true;
}

int func_26(var uParam0) // Position - 0xFD9{
int num;
int num2;
num=0;
num2=func_22(uParam0);
if(num2==-1) return num;
switch (uParam0->f_2){
case 63:
return Global_794709.f_4[num2 /*88*/].f_80;
case 62:
return num;
default:
}
return num;
}

int func_27(var uParam0) // Position - 0x1022{
var unk;
int num;
int num2;
unk.f_2=-1;
unk.f_5=-1;
unk.f_6=-1;
unk.f_12=-1;
num=0;
num2=func_22(uParam0);
if(num2==-1) return num;
switch (uParam0->f_2){
case 63:
unk={
func_28(uParam0) 
};
return unk.f_1;
case 62:
return num;
default:
}
return num;
}
struct<13> func_28(var uParam0) // Position - 0x1089{
var unk;
int num;
unk.f_2=-1;
unk.f_5=-1;
unk.f_6=-1;
unk.f_12=-1;
num=func_22(uParam0);
if(num==-1) return unk;
switch (uParam0->f_2){
case 63:
return Global_794709.f_159989[num /*13*/];
case 62:
return Global_978406.f_28205[num /*13*/];
default:
}
return unk;
}
BOOL func_29(var uParam0) // Position - 0x1100{
BOOL flag;
int num;
flag=0;
if(func_25(uParam0)) return IS_BIT_SET(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
if(func_24(uParam0->f_1)){
if(func_23(uParam0)) return IS_BIT_SET(Global_2628582.f_1.f_63, 17);
return flag;
}
num=func_22(uParam0);
if(num==-1) return flag;
switch (uParam0->f_2){
case 63:
return IS_BIT_SET(Global_794709.f_4[num /*88*/].f_76, 17);
case 62:
return IS_BIT_SET(Global_978406.f_1804[num /*88*/].f_76, 17);
case 40:
return flag;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()) return flag;
elseif(uParam0->f_2 < 32) return flag;
return flag;
}

int func_30(var uParam0, BOOL bParam1) // Position - 0x11D0{
int num;
int num2;
num=0;
if(!bParam1)if(func_25(uParam0))if(IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0)) return Global_2628716.f_513[uParam0->f_9];
if(func_24(uParam0->f_1)){
if(func_23(uParam0)) return Global_2628582.f_1.f_54;
return num;
}
num2=func_22(uParam0);
if(num2==-1) return 0;
switch (uParam0->f_2){
case 63:
return Global_794709.f_4[num2 /*88*/].f_54;
case 62:
return Global_978406.f_1804[num2 /*88*/].f_54;
case 40:
return 0;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()) return Global_1010831.f_4[num2 /*88*/].f_54;
elseif(uParam0->f_2 < 32) return num;
return num;
}
struct<16> func_31(var uParam0) // Position - 0x12AF{
var unk;
int num;
TEXT_LABEL_ASSIGN_STRING(&unk, "NO DESCRIPTION", 64);
if(func_25(uParam0)) return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_28;
if(func_24(uParam0->f_1)){
if(func_23(uParam0)) return Global_2628582.f_1.f_28;
return unk;
}
num=func_22(uParam0);
if(num==-1) return unk;
switch (uParam0->f_2){
case 63:
return Global_794709.f_4[num /*88*/].f_38;
case 62:
return Global_978406.f_1804[num /*88*/].f_38;
case 40:
return unk;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()) return Global_1010831.f_4[num /*88*/].f_38;
elseif(uParam0->f_2 < 32) return unk;
return unk;
}
struct<16> func_32(var uParam0, BOOL bParam1) // Position - 0x139F{
var unk;
int num;
TEXT_LABEL_ASSIGN_STRING(&unk, "UNKNOWN", 64);
if(bParam1) TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
if(!bParam1){
if(func_25(uParam0)){
if(IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0)) return Global_2628716[uParam0->f_9 /*16*/];
return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_12;
}}
if(func_24(uParam0->f_1)){
if(func_23(uParam0)) return Global_2628582.f_1.f_12;
return unk;
}
num=func_22(uParam0);
if(num==-1) return unk;
switch (uParam0->f_2){
case 63:
return Global_794709.f_4[num /*88*/].f_22;
case 62:
return Global_978406.f_1804[num /*88*/].f_22;
case 40:
return unk;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()) return Global_1010831.f_4[num /*88*/].f_22;
elseif(uParam0->f_2 < 32) return unk;
return unk;
}

int func_33(var uParam0) // Position - 0x14C1{
int num;
int num2;
num=-1;
if(func_25(uParam0)) return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_55;
if(func_24(uParam0->f_1)){
if(func_23(uParam0)) return Global_2628582.f_1.f_55;
return num;
}
num2=func_22(uParam0);
if(num2==-1) return num;
switch (uParam0->f_2){
case 63:
return Global_794709.f_4[num2 /*88*/].f_68;
case 62:
return Global_978406.f_1804[num2 /*88*/].f_68;
case 40:
return num;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()) return Global_1010831.f_4[num2 /*88*/].f_68;
elseif(uParam0->f_2 < 32) return num;
return num;
}

int func_34(Player plParam0, int iParam1) // Position - 0x158F{
if(func_24(iParam1)){
if(Global_2628582) return Global_2628582.f_1.f_53;
return 312;
}
switch (plParam0){
case 63:
return Global_794709.f_4[iParam1 /*88*/].f_65;
case 62:
return Global_978406.f_1804[iParam1 /*88*/].f_65;
default:
}
if(plParam0==PLAYER::PLAYER_ID()) return Global_1010831.f_4[iParam1 /*88*/].f_65;
elseif(plParam0 < 32) return 312;
return 312;
}
BOOL func_35(const char* sParam0, var uParam1, BOOL bParam2) // Position - 0x1618{
int i;
int num;
int num2;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return false;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) return false;
i=0;
num=-1;
num2=1818;
if(!bParam2) num2=1800;
for (i=0;
i < num2;
i=i + 1){
if(IS_BIT_SET(Global_794709.f_4[i /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&Global_794709.f_4[i /*88*/], sParam0)){
num=Global_794709.f_4[i /*88*/].f_65;
*uParam1=func_36(num);
uParam1->f_1=i;
uParam1->f_2=63;
uParam1->f_3={
Global_794709.f_4[i /*88*/] 
};
uParam1->f_9=-1;
return true;
}}}
for (i=0;
i < 300;
i=i + 1){
if(IS_BIT_SET(Global_978406.f_1804[i /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&Global_978406.f_1804[i /*88*/], sParam0)){
num=Global_978406.f_1804[i /*88*/].f_65;
*uParam1=func_36(num);
uParam1->f_1=i;
uParam1->f_2=62;
uParam1->f_3={
*sParam0 
};
uParam1->f_9=-1;
return true;
}}}
for (i=0;
i < 62;
i=i + 1){
if(IS_BIT_SET(Global_1010831.f_4[i /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&Global_1010831.f_4[i /*88*/], sParam0)){
num=Global_1010831.f_4[i /*88*/].f_65;
*uParam1=func_36(num);
uParam1->f_1=i;
uParam1->f_2=PLAYER::PLAYER_ID();
uParam1->f_3={
*sParam0 
};
uParam1->f_9=-1;
return true;
}}}
return false;
}

int func_36(int iParam0) // Position - 0x17A8{
switch (iParam0){
case 15:
return 191;
case 14:
return 192;
case 122:
return 196;
case 11:
return 193;
case 13:
return 194;
case 12:
return 195;
case 8:
return 198;
case 1:
return 199;
case 5:
return 197;
case 6:
return 200;
case 3:
return 203;
case 0:
return 201;
case 2:
return 202;
case 148:
return 49;
case 151:
return 52;
case 152:
return 53;
case 157:
return 54;
case 153:
return 55;
case 154:
return 56;
case 155:
return 57;
case 159:
return 58;
case 162:
return 51;
case 142:
return 60;
case 160:
return 62;
case 164:
return 63;
case 163:
return 64;
case 166:
return 65;
case 167:
return 66;
case 168:
return 67;
case 169:
return 68;
case 170:
return 69;
case 171:
return 70;
case 172:
return 71;
case 173:
return 72;
case 178:
return 73;
case 188:
return 74;
case 214:
return 75;
case 215:
return 76;
case 216:
return 77;
case 217:
return 78;
case 218:
return 79;
case 219:
return 80;
case 220:
return 81;
case 221:
return 82;
case 179:
return 84;
case 189:
return 83;
case 180:
return 85;
case 182:
return 87;
case 183:
return 88;
case 185:
return 89;
case 186:
return 90;
case 190:
return 91;
case 191:
return 92;
case 192:
return 93;
case 193:
return 94;
case 205:
return 102;
case 194:
return 95;
case 197:
return 96;
case 198:
return 97;
case 195:
return 98;
case 199:
return 99;
case 200:
return 100;
case 201:
return 101;
case 207:
return 103;
case 208:
return 104;
case 209:
return 105;
case 210:
return 106;
case 225:
return 107;
case 226:
return 108;
case 227:
return 109;
case 229:
return 110;
case 230:
return 111;
case 233:
return 113;
case 237:
return 115;
case 238:
return 116;
case 249:
return 123;
case 239:
return 117;
case 240:
return 118;
case 241:
return 119;
case 242:
return 120;
case 244:
return 121;
case 248:
return 122;
case 250:
return 124;
case 243:
return 125;
case 158:
return 126;
case 181:
return 86;
case 150:
return 127;
case 24:
return 128;
case 26:
return 129;
case 256:
return 130;
case 258:
return 131;
case 259:
return 133;
case 271:
return 134;
case 273:
return 135;
case 276:
return 136;
case 277:
return 137;
case 262:
return 138;
case 263:
return 139;
case 264:
return 140;
case 268:
return 141;
case 269:
return 143;
case 270:
return 144;
case 275:
return 145;
case 286:
return 146;
case 267:
return 148;
case 266:
return 147;
case 287:
return 149;
case 289:
return 150;
case 147:
return 151;
case 291:
return 152;
case 292:
return 153;
case 293:
return 154;
case 294:
return 155;
case 295:
return 156;
case 296:
return 157;
case 297:
return 158;
case 298:
return 159;
case 299:
return 160;
case 300:
return 161;
case 301:
return 162;
case 288:
return 163;
case 290:
return 164;
case 304:
return 165;
case 305:
return 166;
case 306:
return 167;
case 307:
return 168;
case 308:
return 169;
case 309:
return 170;
case 310:
return 171;
case 311:
return 172;
default:
}
return 0;
}
BOOL func_37(const char* sParam0, var uParam1, int* piParam2) // Position - 0x1D4E{
int lengthOfLiteralStringInBytes;
var string1;
var string12;
var unk5;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) return false;
lengthOfLiteralStringInBytes=HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0);
if(!lengthOfLiteralStringInBytes > 12) return false;
TEXT_LABEL_ASSIGN_STRING(&string1, unk_0x6A752012CC0081B1(sParam0, 0, 5), 8);
if(!MISC::ARE_STRINGS_EQUAL(&string1, "FAKE_")) return false;
TEXT_LABEL_ASSIGN_STRING(&string12, unk_0x6A752012CC0081B1(sParam0, 5, 12), 16);
if(MISC::ARE_STRINGS_EQUAL(&string12, "GOLF___")) *uParam1=11;
elseif(MISC::ARE_STRINGS_EQUAL(&string12, "TENNIS_")) *uParam1=12;
elseif(MISC::ARE_STRINGS_EQUAL(&string12, "PILOTS_")) *uParam1=122;
elseif(MISC::ARE_STRINGS_EQUAL(&string12, "SHOOTR_")) *uParam1=13;
elseif(MISC::ARE_STRINGS_EQUAL(&string12, "DARTS__")) *uParam1=14;
elseif(MISC::ARE_STRINGS_EQUAL(&string12, "ARMWRS_")) *uParam1=15;
else return false;
TEXT_LABEL_ASSIGN_STRING(&unk5, unk_0x6A752012CC0081B1(sParam0, 12, lengthOfLiteralStringInBytes), 8);
if(!MISC::STRING_TO_INT(&unk5, piParam2)) return false;
return true;
}


void func_38(var uParam0) // Position - 0x1E3D{
*uParam0=0;
uParam0->f_1=-1;
uParam0->f_2=-1;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_3), "", 24);
uParam0->f_9=-1;
return;
}


void func_39(int iParam0) // Position - 0x1E60{
int i;
int num;
int j;
if(iParam0 >=Global_1665317) return;
i=0;
for (i=0;
i <=11;
i=i + 1){
if(MISC::GET_GAME_TIMER() > Global_2625771[i /*4*/].f_2 || Global_2625771[i /*4*/].f_2==0){
if(NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2623469[iParam0 /*99*/].f_91 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES()){
Global_2625771[i /*4*/].f_3=NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2623469[iParam0 /*99*/].f_91);
Global_2625771[i /*4*/].f_2=MISC::GET_GAME_TIMER() + 30000;
i=12;
}}}
if(Global_2623469[iParam0 /*99*/].f_92 !=-1) HUD::THEFEED_REMOVE_ITEM(Global_2623469[iParam0 /*99*/].f_92);
if(!Global_2623469[iParam0 /*99*/].f_56)if(Global_2623469[iParam0 /*99*/].f_52 !=0) NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_2623469[iParam0 /*99*/].f_52);
func_47(Global_2623469[iParam0 /*99*/].f_91);
num=iParam0;
for (j=num + 1;
j < Global_1665317;
j=j + 1){
Global_2623469[num /*99*/]={
Global_2623469[j /*99*/] 
};
num=num + 1;
}
func_41(num);
Global_1665317=Global_1665317 - 1;
if(Global_1665290)if(Global_1665288 > 0) func_40();
return;
}


void func_40() // Position - 0x1FA8{
Global_1665290=false;
return;
}


void func_41(int iParam0) // Position - 0x1FB5{
Global_2623469[iParam0 /*99*/]=0;
Global_2623469[iParam0 /*99*/].f_1=0;
Global_2623469[iParam0 /*99*/].f_5=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_2623469[iParam0 /*99*/].f_15), "", 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_2623469[iParam0 /*99*/].f_31), "", 64);
Global_2623469[iParam0 /*99*/].f_47=-1;
Global_2623469[iParam0 /*99*/].f_48=MISC::GET_GAME_TIMER();
Global_2623469[iParam0 /*99*/].f_49=-1;
Global_2623469[iParam0 /*99*/].f_50=-1;
Global_2623469[iParam0 /*99*/].f_51=-1;
Global_2623469[iParam0 /*99*/].f_52=0;
Global_2623469[iParam0 /*99*/].f_53=0;
Global_2623469[iParam0 /*99*/].f_53.f_1=0;
Global_2623469[iParam0 /*99*/].f_53.f_2=0;
Global_2623469[iParam0 /*99*/].f_56=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_2623469[iParam0 /*99*/].f_57), "", 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_2623469[iParam0 /*99*/].f_73), "", 64);
Global_2623469[iParam0 /*99*/].f_89=0;
Global_2623469[iParam0 /*99*/].f_90=0;
Global_2623469[iParam0 /*99*/].f_91=-1;
Global_2623469[iParam0 /*99*/].f_92=-1;
Global_2623469[iParam0 /*99*/].f_93=0;
Global_2623469[iParam0 /*99*/].f_94=-1;
Global_2623469[iParam0 /*99*/].f_95=0;
Global_2623469[iParam0 /*99*/].f_96=0;
Global_2623469[iParam0 /*99*/].f_97=0;
Global_2623469[iParam0 /*99*/].f_98=0;
return;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x20F7{
int i;
i=0;
for (i=0;
i < Global_1665317;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2623469[i /*99*/].f_15))) return i;
}
return -1;
}
BOOL func_43(Player plParam0) // Position - 0x2130{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_139, 22);
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x2146{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}
BOOL func_45() // Position - 0x216E{
if(Global_113648.f_9087.f_330[0 /*6*/]) return true;
return false;
}
BOOL func_46() // Position - 0x218B{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 2);
}


void func_47(int iParam0) // Position - 0x21A2{
int presenceInviteIndexById;
presenceInviteIndexById=NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam0);
if(presenceInviteIndexById < 0 || presenceInviteIndexById >=NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES()) return;
if(NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(presenceInviteIndexById)) return;
return;
}
BOOL func_48() // Position - 0x21D5{
return Global_1575018==10;
}
BOOL func_49() // Position - 0x21E4{
if(!Global_78558) return true;
elseif(func_50()) return true;
return false;
}
BOOL func_50() // Position - 0x2207{
if(!func_51()) return false;
return true;
}
BOOL func_51() // Position - 0x221C{
if(Global_1574612) return true;
if(func_56()) return true;
if(func_55()) return true;
return func_52(120, -1);
}
BOOL func_52(int iParam0, int iParam1) // Position - 0x224C{
Hash statHash;
int outValue;
statHash=Global_2848280[iParam0 /*3*/][func_53(iParam1)];
if(STATS::STAT_GET_BOOL(statHash, &outValue, -1)) return outValue;
return 0;
}

int func_53(int iParam0) // Position - 0x2278{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_54();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_54() // Position - 0x22AC{
return Global_1574918;
}
BOOL func_55() // Position - 0x22B8{
return Global_1575048;
}
BOOL func_56() // Position - 0x22C4{
return Global_1575050;
}


void func_57(int iParam0, int iParam1) // Position - 0x22D0{
int num;
num=iParam1;
if(num==-1) num=func_54();
Global_1575040[num]=iParam0;
return;
}


void func_58(int iParam0) // Position - 0x22F2{
func_114();
if(func_113(1)){
if(!func_102()){
if(!func_91(1)){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) func_90();
func_61(1, false);
NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
func_60();
func_59();
}}}
return;
}


void func_59() // Position - 0x2337{
Global_1935368.f_7=1;
return;
}


void func_60() // Position - 0x2346{
Global_1935368.f_6=1;
return;
}


void func_61(int iParam0, BOOL bParam1) // Position - 0x2355{
if(func_113(iParam0)){
Global_1935368.f_16[iParam0 /*44*/].f_5=1;
func_63(iParam0, false);
func_62();
if(bParam1) Global_1935368=1;
}
return;
}


void func_62() // Position - 0x2388{
Global_1935368.f_2=1;
return;
}


void func_63(int iParam0, BOOL bParam1) // Position - 0x2397{
var unk;
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
if(bParam1){
func_89();
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 81920, false);
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95=8;
func_74();
func_73();
}
func_72(iParam0);
func_71(iParam0);
func_69();
func_68();
func_62();
}
unk={
func_67(iParam0) 
};
func_66(iParam0);
func_64(&unk);
return;
}


void func_64(char* sParam0) // Position - 0x2403{
TEXT_LABEL_ASSIGN_STRING(&(Global_2683862.f_860), sParam0, 24);
if(func_65()) TEXT_LABEL_ASSIGN_STRING(&(Global_1048576.f_44), sParam0, 24);
return;
}
BOOL func_65() // Position - 0x2427{
return IS_BIT_SET(Global_2684799.f_1.f_2809, 5);
}


void func_66(int iParam0) // Position - 0x243A{
Global_1935368.f_16[iParam0 /*44*/].f_3=1;
return;
}


struct<6> func_67(int iParam0) // Position - 0x244F{
return Global_1935368.f_16[iParam0 /*44*/].f_6;
}


void func_68() // Position - 0x2465{
Global_2683862.f_9=100;
return;
}


void func_69() // Position - 0x2475{
MISC::SET_BIT(&Global_2683862, 5);
func_70();
return;
}


void func_70() // Position - 0x248A{
MISC::SET_BIT(&Global_2683862, 8);
return;
}


void func_71(int iParam0) // Position - 0x249C{
Global_1935368.f_8=iParam0;
return;
}


void func_72(int iParam0) // Position - 0x24AC{
Global_1935368.f_9=iParam0;
return;
}


void func_73() // Position - 0x24BC{
Global_2692733.f_1=0;
return;
}


void func_74() // Position - 0x24CB{
char* str;
TEXT_LABEL_ASSIGN_STRING(&(Global_2683862.f_860), str, 24);
return;
}


void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x24DE{
eSetPlayerControlFlags flags;
BOOL flag;
BOOL flag2;
BOOL flag3;
BOOL flag4;
BOOL flag5;
BOOL flag6;
BOOL flag7;
BOOL flag8;
BOOL flag9;
BOOL flag10;
BOOL flag11;
BOOL flag12;
BOOL flag13;
BOOL flag14;
BOOL flag15;
BOOL toggle;
BOOL toggle2;
BOOL flag16;
BOOL flag17;
BOOL flag18;
BOOL flag19;
BOOL flag20;
BOOL flag21;
BOOL flag22;
BOOL flag23;
BOOL flag24;
Ped playerPed;
eSetPlayerControlFlags flags2;
if(bParam1)if(SCRIPT::GET_NO_LOADING_SCREEN()) SCRIPT::SET_NO_LOADING_SCREEN(false);
if(func_88())if(bParam1) return;
else bParam3=true;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
flags=espcfParam2;
PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
}else{
flag=true;
flag2=espcfParam2 & SPC_AMBIENT_SCRIPT !=0;
flag3=espcfParam2 & SPC_CLEAR_TASKS !=0;
flag4=espcfParam2 & SPC_REMOVE_FIRES !=0;
flag5=espcfParam2 & SPC_REMOVE_EXPLOSIONS !=0;
flag6=espcfParam2 & SPC_REMOVE_PROJECTILES !=0;
flag7=espcfParam2 & SPC_DEACTIVATE_GADGETS !=0;
flag8=espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH !=0;
flag9=espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON !=0;
flag10=espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE !=0;
flag11=espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER !=0;
flag12=espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF !=0;
flag13=espcfParam2 & SPC_ALLOW_PAD_SHAKE !=0;
flag14=espcfParam2 & 8192 !=0;
flag15=espcfParam2 & 16384 !=0;
toggle=espcfParam2 & 32768 !=0;
toggle2=espcfParam2 & 65536 !=0;
flag16=espcfParam2 & 131072 !=0;
flag17=espcfParam2 & 262144 !=0;
flag18=espcfParam2 & 524288 !=0;
flag19=espcfParam2 & 1048576 !=0;
flag20=espcfParam2 & 2097152 !=0;
flag21=espcfParam2 & 4194304 !=0;
flag22=espcfParam2 & 8388608 !=0;
flag23=espcfParam2 & 16777216 !=0;
if(espcfParam2 & 33554432 !=0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) flag=false;
if(!func_86()){
flag24=false;
if(bParam1==true) flag24=true;
if(toggle==false && !flag19) flag24=true;
if(flag10==true) flag24=true;
if(flag24) return;
}
flag16;
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3==true){
if(bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false)) return;
playerPed=PLAYER::GET_PLAYER_PED(plParam0);
if(!flag18){
if(flag17 && bParam1==false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) NETWORK::FADE_OUT_LOCAL_PLAYER(true);
elseif(flag14 || !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_83()) ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
if(!flag14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17) NETWORK::FADE_OUT_LOCAL_PLAYER(false);
Global_2657589[plParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(flag){
func_80(false, 0, 0);
if(flag23) STREAMING::CLEAR_FOCUS();
}
if(!func_79(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
if(!ENTITY::IS_ENTITY_ATTACHED(playerPed)){
if(!flag19) ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
}elseif(!flag19){
ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
}
PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed)) PED::FINALIZE_HEAD_BLEND(playerPed);
PED::SET_PED_DIES_WHEN_INJURED(playerPed, true);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==false){
func_78();
func_77();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) !flag21;
STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
Global_2657589[plParam0 /*466*/].f_255=0;
if(!flag22) flag3=true;
if(Global_2635559.f_2681) Global_2635559.f_2681=0;
}else{
if(!func_79(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed)){
if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
if(!ENTITY::IS_ENTITY_ATTACHED(playerPed)){
if(!flag19) ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
if(!toggle) ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
}
if(func_76(*Global_4718592.f_166301)) ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
}
if(Global_1575035) flag10=false;
if(flag10) PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
else PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
if(flag3)if(!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false)) TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
}
flags2=0;
if(flag2) flags2=flags2 | SPC_AMBIENT_SCRIPT;
if(flag3) flags2=flags2 | SPC_CLEAR_TASKS;
if(flag4) flags2=flags2 | SPC_REMOVE_FIRES;
if(flag5) flags2=flags2 | SPC_REMOVE_EXPLOSIONS;
if(flag6) flags2=flags2 | SPC_REMOVE_PROJECTILES;
if(flag7) flags2=flags2 | SPC_DEACTIVATE_GADGETS;
if(flag8) flags2=flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
if(flag9) flags2=flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
if(flag10) flags2=flags2 | SPC_ALLOW_PLAYER_DAMAGE;
if(flag11) flags2=flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
if(flag12) flags2=flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
if(flag13) flags2=flags2 | SPC_ALLOW_PAD_SHAKE;
PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
}}
return;
}
BOOL func_76(int iParam0) // Position - 0x296C{
return iParam0==17;
}


void func_77() // Position - 0x2979{
var unk;
Global_2672505.f_1023=0;
Global_2672505.f_1024=0;
Global_2672505.f_1025={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672505.f_1030=-1;
Global_2672505.f_1031=0;
Global_2635559.f_2692={
unk 
};
return;
}


void func_78() // Position - 0x29C6{
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
return;
}
BOOL func_79(Ped pedParam0) // Position - 0x2A04{
int scriptTaskStatus;
if(PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true)){
return true;
}else{
scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
if(scriptTaskStatus==0) return true;
}
return false;
}


void func_80(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x2A35{
int num;
eViewModeContext i;
ENTITY::IS_ENTITY_DEAD(pedParam1, false);
if(bParam0==true)if(ENTITY::DOES_ENTITY_EXIST(pedParam1))if(PED::IS_PED_A_PLAYER(pedParam1))if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1))) num=1;
if(num==0){
if(iParam2==1){
if(bParam0==true){
func_82();
}elseif(!IS_BIT_SET(Global_2621446.f_67, 1)){
if(IS_BIT_SET(Global_2621446.f_67, 2)){
for (i=ON_FOOT;
i < 8;
i=i + 1){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
}}
MISC::SET_BIT(&(Global_2621446.f_67), 1);
}}
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
else NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
}
return;
}


void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x2B05{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, true);
return;
}


void func_82() // Position - 0x2B21{
eViewModeContext i;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!IS_BIT_SET(Global_2621446.f_67, 2)){
for (i=ON_FOOT;
i < 8;
i=i + 1){
Global_2621446.f_58[i]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), 0);
}}
return;
}
BOOL func_83() // Position - 0x2B79{
return IS_BIT_SET(Global_2621446, 3);
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x2B87{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_85(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_85(int iParam0, BOOL bParam1) // Position - 0x2BD2{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_54();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}
BOOL func_86() // Position - 0x2C13{
if(func_87()==0) return true;
return false;
}

int func_87() // Position - 0x2C28{
return Global_1574632.f_18;
}
BOOL func_88() // Position - 0x2C36{
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1) return true;
return false;
}


void func_89() // Position - 0x2C67{
MISC::SET_BIT(&Global_2683862, 7);
return;
}


void func_90() // Position - 0x2C78{
MISC::SET_BIT(&(Global_2683862.f_2), 15);
return;
}
BOOL func_91(int iParam0) // Position - 0x2C8C{
if(iParam0 || func_101()){
if(!func_93(true)) return true;
if(!func_92()) return true;
if(NETWORK::NETWORK_PLAYER_IS_CHEATER()) return true;
}
return false;
}
BOOL func_92() // Position - 0x2CC8{
return Global_1935368.f_4;
}
BOOL func_93(BOOL bParam0) // Position - 0x2CD6{
if(!func_98()) return false;
if(func_96(func_97(-1), 0) >=1 || func_52(123, -1) && func_52(133, -1)){
func_95();
return true;
}elseif(bParam0){
func_94();
}
return false;
}


void func_94() // Position - 0x2D27{
Global_1935368.f_5=1;
return;
}


void func_95() // Position - 0x2D36{
Global_1935368.f_4=1;
return;
}

int func_96(var uParam0, int iParam1) // Position - 0x2D45{
int i;
int value;
int value2;
int num;
float value3;
iParam1==0;
value=8000;
value2=0;
num=(value - value2) / 2;
for (i=0;
i <=100;
i=i + 1){
if(value==value2){
i=8000;
if(num==0) num=1;
return num;
}
if(Global_297010[num]==uParam0){
value=num;
value2=num;
}elseif(Global_297010[num] < uParam0){
if(value2==num) value2=value2 + 1;
else value2=num;
}elseif(value==num){
value=value - 1;
}else{
value=num;
}
value3=((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
num=SYSTEM::ROUND(value3);
}
return 8000;
}


var func__97(int iParam0) // Position - 0x2E04{
return Global_1665638[func_53(iParam0)];
}
BOOL func_98() // Position - 0x2E18{
if(func_100() && func_99(0)) return true;
return false;
}


var func__99(int iParam0) // Position - 0x2E36{
return Global_1574538[iParam0];
}


var func__100() // Position - 0x2E46{
return func_99(func_54() + 1);
}

int func_101() // Position - 0x2E58{
return Global_1935368.f_2;
}
BOOL func_102() // Position - 0x2E66{
if(func_112() || !func_110(-1) || !func_108() || !func_105() || !func_104() || func_103()) return true;
return false;
}
BOOL func_103() // Position - 0x2EB1{
return Global_2694537;
}
BOOL func_104() // Position - 0x2EBD{
if(MISC::GET_PROFILE_SETTING(903)==1) return true;
return false;
}
BOOL func_105() // Position - 0x2ED8{
int num;
if(func_106(&num)==false)if(num==1) return false;
return true;
}
BOOL func_106(int* piParam0) // Position - 0x2EF5{
if(func_107()){
*piParam0=11;
return true;
}
return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(piParam0);
}
BOOL func_107() // Position - 0x2F13{
return Global_32441;
}
BOOL func_108() // Position - 0x2F1E{
int i;
for (i=0;
i <=1;
i=i + 1){
if(func_109(i)==1){
i=2;
return true;
}}
return false;
}

int func_109(int iParam0) // Position - 0x2F4A{
if(func_52(76, iParam0)==true) return 1;
return 0;
}
BOOL func_110(int iParam0) // Position - 0x2F66{
int profileSetting;
int profileSetting2;
profileSetting=func_111(iParam0);
profileSetting2=MISC::GET_PROFILE_SETTING(profileSetting);
if(IS_BIT_SET(profileSetting2, 1)) return true;
return false;
}

int func_111(int iParam0) // Position - 0x2F8A{
int num;
if(iParam0==-1) iParam0=func_54();
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
BOOL func_112() // Position - 0x2FED{
return Global_2683862.f_743;
}
BOOL func_113(int iParam0) // Position - 0x2FFC{
return Global_1935368.f_16[iParam0 /*44*/].f_4;
}


void func_114() // Position - 0x3010{
int i;
int eventIdForType;
func_120();
if(SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE() && !func_117()){
for (i=0;
i < 5;
i=i + 1){
eventIdForType=SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(func_116(i));
if(eventIdForType > 0){
Global_1935368.f_16[i /*44*/]=eventIdForType;
func_115(i, eventIdForType);
}}}else{
for (i=0;
i < 5;
i=i + 1){
Global_1935368.f_16[i /*44*/].f_4=0;
}}
return;
}


void func_115(int iParam0, int iParam1) // Position - 0x3087{
BOOL flag;
var unk;
var unk17;
flag=true;
if(unk_0xF0AEF7789CC6085E(iParam1, "contentId", &unk)) TEXT_LABEL_COPY(&(Global_1935368.f_16[iParam0 /*44*/].f_6),{
unk 
}
, 6);
else flag=false;
if(unk_0xF0AEF7789CC6085E(iParam1, "playlist", &unk)) Global_1935368.f_16[iParam0 /*44*/].f_12={
unk 
};
else flag=false;
if(SOCIALCLUB::SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(iParam1, &unk)) Global_1935368.f_16[iParam0 /*44*/].f_28={
unk 
};
else flag=false;
if(iParam0==1){
if(unk_0x824E7683AF101883(iParam1, "coronaCountdown", &unk17)) Global_1935368.f_16[iParam0 /*44*/].f_1=unk17;
else Global_1935368.f_16[iParam0 /*44*/].f_1=120000;
Global_1935368.f_16[iParam0 /*44*/].f_2=0;
if(unk_0x824E7683AF101883(iParam1, "eventSubType", &unk17)) Global_1935368.f_16[iParam0 /*44*/].f_2=unk17;
}
if(flag){
if(iParam0 !=1) Global_1935368.f_1=1;
Global_1935368.f_16[iParam0 /*44*/].f_4=1;
}else{
Global_1935368.f_16[iParam0 /*44*/].f_4=0;
}
return;
}


char* func_116(int iParam0) // Position - 0x3195{
switch (iParam0){
case 0:
return "TournamentQualifying";
case 1:
return "Tournament";
case 2:
return "LiveStreaming";
case 3:
return "Sweepstakes";
case 4:
return "FeaturedPlaylist";
default:
}
return "";
}
BOOL func_117() // Position - 0x31E2{
if(!func_118()) return true;
return false;
}
BOOL func_118() // Position - 0x31F7{
if(func_119()) return false;
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==false) return false;
return true;
}
BOOL func_119() // Position - 0x3217{
return Global_2695031;
}


void func_120() // Position - 0x3223{
var unk;
unk.f_8=-1;
unk.f_9=-1;
unk.f_16=6;
Global_1935368={
unk 
};
return;
}


void func_121(int iParam0) // Position - 0x324E{
struct<21> eventData;
if(Global_78558) AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
else AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20372, true);
if(SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 21)) func_123();
Global_2800023.f_1=0;
Global_2800023.f_33=-1;
Global_2800023.f_34=-1;
TEXT_LABEL_ASSIGN_STRING(&(Global_2800023.f_4), "", 64);
func_122(&(Global_2800023.f_20));
return;
}


void func_122(Any* panParam0) // Position - 0x32B6{
*panParam0=0;
panParam0->f_1=0;
panParam0->f_2=0;
panParam0->f_3=0;
panParam0->f_4=0;
panParam0->f_5=0;
panParam0->f_6=0;
panParam0->f_7=0;
panParam0->f_8=0;
panParam0->f_9=0;
panParam0->f_10=0;
panParam0->f_11=0;
panParam0->f_12=0;
return;
}


void func_123() // Position - 0x32FE{
Global_2800023.f_2=1;
Global_2800023.f_38=1;
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION()){
while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY()){
SYSTEM::WAIT(0);
}
NETWORK::NETWORK_SESSION_VOICE_LEAVE();
Global_2800023=0;
Global_2800023.f_2=0;
}elseif(IS_GAMER_HANDLE_VALID(Global_2800023.f_20)){
if(NETWORK::NETWORK_IS_FRIEND(&(Global_2800023.f_20)))if(!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2800023.f_20))) func_130();
}else{
func_130();
}}else{
func_130();
}
if(Global_2800023.f_37) func_124(0);
Global_2800023.f_37=0;
Global_2800023.f_3=0;
return;
}


void func_124(int iParam0) // Position - 0x339E{
if(func_129()) return;
if(Global_20584)if(func_128()) func_126(true, true);
else func_126(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_125()) Global_20383.f_1=3;
return;
}
BOOL func_125() // Position - 0x3428{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_126(BOOL bParam0, BOOL bParam1) // Position - 0x344F{
if(bParam0){
if(func_127(0)){
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
BOOL func_127(int iParam0) // Position - 0x34C3{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_128() // Position - 0x351A{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_129() // Position - 0x3528{
return IS_BIT_SET(Global_1962996, 19);
}


void func_130() // Position - 0x3537{
Global_2800023.f_1=0;
Global_2800023=0;
Global_2800023.f_2=0;
Global_2800023.f_33=-1;
Global_2800023.f_34=-1;
TEXT_LABEL_ASSIGN_STRING(&(Global_2800023.f_4), "", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_2800023.f_39[0 /*16*/], "", 64);
Global_2800023.f_38=0;
Global_2800023.f_56=0;
Global_2800023.f_57=0;
Global_2800023.f_58=-2;
Global_2800023.f_3=0;
func_122(&(Global_2800023.f_20));
return;
}
BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x35A6{
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_132(int iParam0) // Position - 0x35B6{
struct<15> eventData;
if(SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 15)){
Global_2800023.f_33=eventData.f_1;
Global_2800023.f_34=eventData;
}
return;
}


void func_133(int iParam0) // Position - 0x35E1{
struct<21> eventData;
if(SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 21)){
if(Global_2800023.f_3==0){
if(!func_134(&(eventData.f_8))){
NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
}else{
Global_2800023.f_3=1;
TEXT_LABEL_COPY(&(Global_2800023.f_4),{
eventData 
}
, 16);
Global_2800023.f_20={
eventData.f_8 
};
TEXT_LABEL_ASSIGN_STRING(&Global_2800023.f_39[0 /*16*/], "", 64);
Global_2800023.f_58=-2;
Global_2800023.f_56=0;
Global_2800023.f_57=0;
}}elseif(!func_134(&(eventData.f_8))){
NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
}else{
Global_2800023.f_3=1;
TEXT_LABEL_COPY(&(Global_2800023.f_4),{
eventData 
}
, 16);
Global_2800023.f_20={
eventData.f_8 
};
TEXT_LABEL_ASSIGN_STRING(&Global_2800023.f_39[0 /*16*/], "", 64);
Global_2800023.f_58=-2;
Global_2800023.f_56=0;
Global_2800023.f_57=0;
}}
return;
}
BOOL func_134(Any* panParam0) // Position - 0x36C5{
if(Global_78558){
if(func_50()==false) return false;
if(_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >=1f) return false;
}
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==false) return false;
Global_2800023.f_1;
if(Global_20592==1) return false;
if(Global_1836619) return false;
if(Global_2800023.f_36) return false;
if(func_125()) return false;
if(Global_43257 !=6 && Global_43257 !=8 && Global_43257 !=12 && Global_43257 !=15) return false;
if(func_137() && !func_136(12)) return false;
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) return false;
if(CUTSCENE::IS_CUTSCENE_ACTIVE()) return false;
if(!func_135(PLAYER::PLAYER_ID())) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE()) return false;
if(Global_78819) return false;
if(NETWORK::NETWORK_IS_SESSION_ACTIVE())if(!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID())) return false;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return false;
if(NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(panParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(panParam0)) return false;
if(NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(panParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(panParam0)) return false;
if(NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())if(func_16())if(NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT()) return false;
elseif(func_10()) return false;
return true;
}
BOOL func_135(Player plParam0) // Position - 0x3849{
Player player;
var gamerHandle;
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==false) return false;
player=-1;
if(plParam0 !=PLAYER::PLAYER_ID()){
player=plParam0;
if(player==-1) return false;
}
if(MISC::IS_PS3_VERSION() || func_10())if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, player))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
if(MISC::IS_XBOX360_VERSION() || func_16()){
if(plParam0==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1)) return true;
}else{
gamerHandle={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&gamerHandle)) return true;
}}
if(MISC::IS_PC_VERSION())if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, player))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
return false;
}
BOOL func_136(int iParam0) // Position - 0x3922{
return Global_43257==iParam0;
}
BOOL func_137() // Position - 0x3930{
if(Global_43257==15) return false;
return true;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x3945{
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


void func_139() // Position - 0x39A5{
func_130();
return;
}


void func_140() // Position - 0x39B1{
Global_2800023.f_1=1;
Global_2800023.f_33=-1;
Global_2800023.f_34=-1;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)==true){
if(Global_20371){
func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
if(Global_20326) func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}
return;
}


void func_141(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x3A2A{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_142(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_142(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_142(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_142(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_142(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_142(const char* sParam0) // Position - 0x3ADD{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_143() // Position - 0x3AEF{
int i;
if(bLocal_64){
Global_55613=0;
Global_55613.f_12=0;
Global_55613.f_24=0;
Global_55613.f_36=0;
for (i=0;
i < 10;
i=i + 1){
Global_55613.f_1[i]=0;
Global_55613.f_13[i]=0;
Global_55613.f_25[i]=0;
Global_55613.f_37[i]=0;
}
bLocal_64=false;
}
return;
}