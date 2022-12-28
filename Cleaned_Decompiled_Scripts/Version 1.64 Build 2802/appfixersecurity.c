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
float fLocal_62=0f;
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
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=17;
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
var uLocal_107=17;
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
int iLocal_131=0;
int iLocal_132=0;
int iLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
int iLocal_136=0;
int iLocal_137=0;
int iLocal_138=0;
int iLocal_139=0;
int iLocal_140=0;
int iLocal_141=0;
char* sLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
char* sLocal_145=0;
const char* sLocal_146=0;
int iLocal_147=0;
int iLocal_148=0;
int iLocal_149=0;
int iLocal_150=0;
int iLocal_151=0;
Player plLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
int iLocal_155=0;
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
sLocal_20="NULL";
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
fLocal_62=(0.05f + 0.275f) - 0.01f;
iLocal_140=-1;
iLocal_141=-1;
sLocal_142="";
iLocal_151=-1;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("appFixerSecurity")) > 1) func_419(true, false);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_409();
SYSTEM::WAIT(0);
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
while (Global_77329){
func_398();
func_383();
func_378();
func_375();
if(!IS_BIT_SET(iLocal_131, 7)){
func_364();
func_334();
}
if(!IS_BIT_SET(iLocal_131, 6)){
func_69();
func_31();
func_24();
}elseif(IS_BIT_SET(iLocal_131, 6)){
if(CAM::IS_SCREEN_FADED_OUT()) func_1();
elseif(!CAM::IS_SCREEN_FADING_OUT()) CAM::DO_SCREEN_FADE_OUT(500);
}
SYSTEM::WAIT(0);
}
return;
}


void func_1() // Position - 0x121{
Global_1949965=1;
func_2(264, 0, -1);
func_419(true, true);
return;
}


void func_2(int iParam0, int iParam1, int iParam2) // Position - 0x13D{
if(iParam1 !=-1) func_23(iParam1);
if(iParam2 !=-1) func_22(iParam2);
func_3(iParam0, -1);
return;
}


void func_3(int iParam0, int iParam1) // Position - 0x164{
if(func_21() || !func_17(true) || func_16(iParam0)==3){
if(!func_14(PLAYER::PLAYER_ID(), 0) && !func_14(PLAYER::PLAYER_ID(), 3)){
func_13(iParam0);
func_4(iParam0, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true), func_7(), func_6(), func_5(), iParam1);
}}
return;
}


void func_4(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5) // Position - 0x1CC{
struct<7> eventData;
eventData=1311159119;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_2=iParam0;
eventData.f_3=iParam2;
eventData.f_4=iParam3;
eventData.f_5=uParam4;
eventData.f_6=iParam5;
if(!iParam1==0) SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 7, iParam1);
return;
}


var func__5() // Position - 0x216{
return Global_2793044.f_5225.f_346;
}

int func_6() // Position - 0x228{
return Global_2793044.f_5225.f_345;
}

int func_7() // Position - 0x23A{
return Global_2793044.f_5225.f_344;
}
int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x24C{
int address;
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(_NETWORK_IS_PLAYER_VALID(player, false, false))if(player !=PLAYER::PLAYER_ID() || includeLocalPlayer)if(includeSpectators) MISC::SET_BIT(&address, i);
elseif(!_NETWORK_IS_PLAYER_IN_SCTV(player, 0)) MISC::SET_BIT(&address, i);
}
return address;
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x2B1{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_10(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_10(int iParam0, BOOL bParam1) // Position - 0x2FC{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_11();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_11() // Position - 0x33D{
return Global_1574918;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x349{
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


void func_13(int iParam0) // Position - 0x3A9{
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_32=iParam0;
return;
}
BOOL func_14(Player plParam0, int iParam1) // Position - 0x3C2{
if(func_15(plParam0, false)) return func_16(Global_1894573[plParam0 /*608*/].f_10.f_33)==iParam1;
return false;
}
BOOL func_15(Player plParam0, BOOL bParam1) // Position - 0x3EC{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}

int func_16(int iParam0) // Position - 0x427{
switch (iParam0){
case 153:
case 154:
case 155:
case 162:
case 160:
case 163:
case 167:
case 168:
case 169:
case 171:
case 172:
case 178:
case 190:
case 191:
case 192:
case 189:
case 193:
case 194:
case 199:
case 205:
case 210:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
case 262:
case 263:
case 264:
case 271:
case 277:
case 291:
case 292:
case 293:
case 294:
case 295:
case 296:
case 297:
case 298:
case 299:
case 300:
case 301:
case 304:
case 305:
case 306:
case 307:
case 308:
case 309:
return 0;
case 276:
case 267:
return 3;
case 152:
case 159:
case 142:
case 164:
case 157:
case 166:
case 170:
case 173:
case 180:
case 183:
case 185:
case 182:
case 186:
case 197:
case 200:
case 201:
case 198:
case 195:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 241:
case 242:
case 244:
case 248:
return 1;
case 148:
case 179:
return 2;
default:
}
return -1;
}
BOOL func_17(BOOL bParam0) // Position - 0x68D{
return _IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), bParam0);
}
BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x69F{
if(!bCanBeBoss)if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return false;
return Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX();
}
Player _INVALID_PLAYER_INDEX() // Position - 0x6CA{
return -1;
}
BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x6D3{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10==plParam0;
return false;
}
BOOL func_21() // Position - 0x708{
return _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
}


void func_22(int iParam0) // Position - 0x718{
if(Global_2793044.f_5225.f_345 !=iParam0) Global_2793044.f_5225.f_345=iParam0;
return;
}


void func_23(int iParam0) // Position - 0x73B{
if(Global_2793044.f_5225.f_344 !=iParam0) Global_2793044.f_5225.f_344=iParam0;
return;
}


void func_24() // Position - 0x75E{
if(IS_BIT_SET(iLocal_131, 14)){
if(!func_30()){
MISC::CLEAR_BIT(&iLocal_131, 14);
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FXR_NX_SEC_WAIT" /*There is a short delay before you can accept another Security Contract.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(func_28()==3) func_25(true);
}}
return;
}


void func_25(BOOL bParam0) // Position - 0x79A{
func_26("FIX_APP_ACC_CON" /*ACCEPT CONTRACT*/, bParam0);
return;
}


void func_26(char* sParam0, BOOL bParam1) // Position - 0x7AB{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "UPDATE_START_BUTTON");
func_27(sParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_27(char* sParam0) // Position - 0x7CD{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}

int func_28() // Position - 0x7DF{
return iLocal_149;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x7E9{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
BOOL func_30() // Position - 0x7FC{
return IS_BIT_SET(Global_1981423.f_1, 31);
}


void func_31() // Position - 0x80D{
int scaleformMovieMethodReturnValueInt;
if(IS_BIT_SET(iLocal_131, 5)){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_154)){
scaleformMovieMethodReturnValueInt=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_154);
if(scaleformMovieMethodReturnValueInt !=iLocal_150){
if(!func_68()){
switch (scaleformMovieMethodReturnValueInt){
case 214:
case 215:
func_67(false);
func_60(scaleformMovieMethodReturnValueInt);
func_26("FAPP_ACCEPT", true);
break;
case 205:
case 206:
case 207:
func_32(scaleformMovieMethodReturnValueInt);
break;
}}}
iLocal_150=scaleformMovieMethodReturnValueInt;
iLocal_155=0;
MISC::CLEAR_BIT(&iLocal_131, 5);
}else{
iLocal_155=iLocal_155 - 1;
if(iLocal_155==0) MISC::CLEAR_BIT(&iLocal_131, 5);
}}
return;
}


void func_32(int iParam0) // Position - 0x8AA{
int num;
int num2;
num=func_59(iParam0);
num2=func_58(num);
if(iLocal_151==num && IS_BIT_SET(iLocal_131, 15)) return;
else func_57(num);
func_67(true);
if(Global_77330) func_56(num);
if(func_54(false)==num || func_51(num2, false)){
func_48(num);
func_47(true);
if(func_51(num2, false)){
func_26("FIX_APP_MIS_COM" /*COMPLETED*/, false);
func_47(true);
func_39(num, 2, 2);
}else{
func_26("FAPP_ACCEPT", false);
func_39(num, 2, 0);
}}else{
func_33();
func_26("FAPP_ACCEPT", false);
func_47(false);
func_39(num, 2, 0);
}
return;
}


void func_33() // Position - 0x963{
int num;
int num2;
num=func_38(false);
num2=func_35();
func_34("", true, false, "", true, false, "", true, false, num, num2);
return;
}


void func_34(char* sParam0, BOOL bParam1, BOOL bParam2, char* sParam3, BOOL bParam4, BOOL bParam5, char* sParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10) // Position - 0x98C{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "UPDATE_DATA_LEAK_SCREEN");
func_27(sParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
func_27(sParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
func_27(sParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}

int func_35() // Position - 0x9E4{
int num;
num=0;
num=num + func_36(func_37(PLAYER::PLAYER_ID(), 7));
num=num + func_36(func_37(PLAYER::PLAYER_ID(), 10));
num=num + func_36(func_37(PLAYER::PLAYER_ID(), 4));
return num;
}

int func_36(BOOL bParam0) // Position - 0xA28{
if(bParam0) return 1;
return 0;
}
BOOL func_37(Player plParam0, int iParam1) // Position - 0xA3A{
if(plParam0 !=-1) return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_27.f_3, iParam1);
return false;
}

int func_38(BOOL bParam0) // Position - 0xA5B{
if(bParam0) return Global_262145.f_31746;
return Global_262145.f_31747;
}


void func_39(int iParam0, int iParam1, int iParam2) // Position - 0xA79{
char* str;
char* str2;
char* str3;
BOOL flag;
char* str4;
str=func_46(iParam0, iParam1);
str2=func_45(iParam0, iParam1);
str3=func_44(iParam0, iParam1);
flag=func_43(iParam0, iParam1);
str4="";
if(iParam2 !=-1){
str2=func_45(iParam0, iParam2);
str=func_42(iParam0);
}
func_41();
func_40(str, str2, str3, flag, flag, true, str4);
return;
}


void func_40(char* sParam0, char* sParam1, char* sParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, char* sParam6) // Position - 0xADA{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "UPDATE_TAB_DATA");
func_27(sParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sParam1);
func_27(sParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
func_27(sParam6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_41() // Position - 0xB1A{
MISC::CLEAR_BIT(&iLocal_131, 16);
MISC::CLEAR_BIT(&iLocal_131, 17);
return;
}


char* func_42(int iParam0) // Position - 0xB32{
switch (iParam0){
case 0:
return "FIX_APP_DL1_D_B" /*Nightlife Leak:
Investigate the data signal detected at a nightclub owned by the Los Santos Triads and track down the copy of Dr. Dre's stolen music.*/;
case 1:
return "FIX_APP_DL2_D_B" /*High Society Leak:
Investigate the data signal detected at the Pacific Bluffs Country Club and track down the copy of Dr. Dre's stolen music.*/;
case 2:
return "FIX_APP_DL3_D_B" /*South Central Leak:
Investigate the data signal detected in Davis and track down the copy of Dr. Dre's stolen music.*/;
}
return "";
}
BOOL func_43(int iParam0, int iParam1) // Position - 0xB70{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return func_51(2, false);
case 1:
return func_51(3, false);
case 2:
return func_51(4, false);
}
break;
case 1:
switch (iParam1){
case 0:
return func_51(5, false);
case 1:
return func_51(6, false);
case 2:
return func_51(7, false);
}
break;
case 2:
switch (iParam1){
case 0:
return func_51(8, false);
case 1:
return func_51(9, false);
case 2:
return func_51(10, false);
}
break;
}
return false;
}


char* func_44(int iParam0, int iParam1) // Position - 0xC55{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "FIX_APP_INVEST" /*INVESTIGATED*/;
case 1:
return "FIX_APP_INVEST" /*INVESTIGATED*/;
case 2:
return "FIX_APP_RECOVR" /*COPY RECOVERED*/;
}
break;
case 1:
switch (iParam1){
case 0:
return "FIX_APP_INVEST" /*INVESTIGATED*/;
case 1:
return "FIX_APP_INVEST" /*INVESTIGATED*/;
case 2:
return "FIX_APP_RECOVR" /*COPY RECOVERED*/;
}
break;
case 2:
switch (iParam1){
case 0:
return "FIX_APP_INVEST" /*INVESTIGATED*/;
case 1:
return "FIX_APP_INVEST" /*INVESTIGATED*/;
case 2:
return "FIX_APP_RECOVR" /*COPY RECOVERED*/;
}
break;
}
return "UNKNOWN";
}


char* func_45(int iParam0, int iParam1) // Position - 0xD1E{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "DATA_LEAK_1_NIGHTCLUB";
case 1:
return "DATA_LEAK_1_MARINA";
case 2:
return "MISSION_VINEWOOD";
}
break;
case 1:
switch (iParam1){
case 0:
return "DATA_LEAK_2_COUNTRY";
case 1:
return "DATA_LEAK_2_GUEST_LIST";
case 2:
return "MISSION_RICHMAN_LEAK";
}
break;
case 2:
switch (iParam1){
case 0:
return "DATA_LEAK_3_DAVIS";
case 1:
return "DATA_LEAK_3_BALLAS";
case 2:
return "MISSION_SOUTH_CENTRAL";
}
break;
}
return "UNKNOWN";
}


char* func_46(int iParam0, int iParam1) // Position - 0xDEE{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L1_D1" /*Investigate the data signal at the Los Santos Triads Nightclub.*/;
case 1:
return "FIX_APP_DATA_L1_D2" /*Investigate the lead at the Puerto Del Sol Marina.*/;
case 2:
return "FIX_APP_DATA_L1_D3" /*Recover the copy of Dr. Dre's stolen music from the casino penthouse party.*/;
}
break;
case 1:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L2_D1" /*Investigate the data signal at the Pacific Bluffs Country Club.*/;
case 1:
return "FIX_APP_DATA_L2_D2" /*Find a way to infiltrate the gathering at the Richman mansion.*/;
case 2:
return "FIX_APP_DATA_L2_D3" /*Recover the copy of Dr. Dre's stolen music from the Richman mansion.*/;
}
break;
case 2:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L3_D1" /*Investigate the data trace in Davis with Franklin's Families contact.*/;
case 1:
return "FIX_APP_DATA_L3_D2" /*Confront the Ballas suspected of stealing Dr. Dre's music.*/;
case 2:
return "FIX_APP_DATA_L3_D3" /*Recover the copy of Dr. Dre's stolen music from the Vagos.*/;
}
break;
}
return "UNKNOWN";
}


void func_47(BOOL bParam0) // Position - 0xEC0{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "ENABLE_TABS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_48(int iParam0) // Position - 0xEDD{
char* str;
BOOL flag;
BOOL flag2;
char* str2;
BOOL flag3;
BOOL flag4;
char* str3;
BOOL flag5;
BOOL flag6;
int num;
int num2;
str=func_50(iParam0, 0);
flag=func_49(iParam0, 0);
flag2=func_43(iParam0, 0);
str2=func_50(iParam0, 1);
flag3=func_49(iParam0, 1);
flag4=func_43(iParam0, 1);
str3=func_50(iParam0, 2);
flag5=func_49(iParam0, 2);
flag6=func_43(iParam0, 2);
num=func_38(false);
num2=func_35();
func_34(str, flag, flag2, str2, flag3, flag4, str3, flag5, flag6, num, num2);
return;
}
BOOL func_49(int iParam0, int iParam1) // Position - 0xF5D{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 0;
case 1:
if(func_51(2, false) && Global_1981457 !=2 && Global_1981457 !=3) return 0;
break;
case 2:
if(func_51(3, false) && Global_1981457 !=4 && Global_1981457 !=5) return 0;
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
case 1:
if(func_51(5, false) && Global_1981457 !=6 && Global_1981457 !=7) return 0;
break;
case 2:
if(func_51(6, false) && Global_1981457 !=8 && Global_1981457 !=9) return 0;
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 0;
case 1:
if(func_51(8, false) && Global_1981457 !=10 && Global_1981457 !=11) return 0;
break;
case 2:
if(func_51(9, false) && Global_1981457 !=12 && Global_1981457 !=13) return 0;
break;
}
break;
}
return 1;
}


char* func_50(int iParam0, int iParam1) // Position - 0x10D4{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L1_T1" /*THE NIGHTCLUB*/;
case 1:
return "FIX_APP_DATA_L1_T2" /*THE MARINA*/;
case 2:
return "FIX_APP_DATA_L1_T3" /*NIGHTLIFE LEAK*/;
}
break;
case 1:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L2_T1" /*THE COUNTRY CLUB*/;
case 1:
return "FIX_APP_DATA_L2_T2" /*GUEST LIST*/;
case 2:
return "FIX_APP_DATA_L2_T3" /*HIGH SOCIETY LEAK*/;
}
break;
case 2:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L3_T1" /*DAVIS*/;
case 1:
return "FIX_APP_DATA_L3_T2" /*THE BALLAS*/;
case 2:
return "FIX_APP_DATA_L3_T3" /*SOUTH CENTRAL LEAK*/;
}
break;
}
return "UNKNOWN";
}
BOOL func_51(int iParam0, BOOL bParam1) // Position - 0x11A6{
if(bParam1) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_FIXER_STORY_BS, -1, 0), iParam0);
return func_37(PLAYER::PLAYER_ID(), iParam0);
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x11CC{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_53(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}

int func_53(int iParam0) // Position - 0x1209{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_11();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_54(BOOL bParam0) // Position - 0x123D{
if(bParam0) return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_STORY_STRAND, -1, 0);
return func_55(PLAYER::PLAYER_ID());
}

int func_55(Player plParam0) // Position - 0x125E{
if(plParam0 !=-1) return Global_1981514[plParam0 /*60*/].f_27.f_4;
return -1;
}


void func_56(int iParam0) // Position - 0x127C{
iLocal_134=iParam0;
return;
}


void func_57(int iParam0) // Position - 0x1288{
iLocal_151=iParam0;
return;
}

int func_58(int iParam0) // Position - 0x1294{
switch (iParam0){
case 0:
return 4;
case 1:
return 7;
case 2:
return 10;
}
return -1;
}

int func_59(int iParam0) // Position - 0x12CC{
switch (iParam0){
case 205:
return 0;
case 206:
return 1;
case 207:
return 2;
}
return -1;
}


void func_60(int iParam0) // Position - 0x1303{
char* str;
char* str2;
str=func_66();
str2=func_65();
if(iParam0==215){
str=func_64();
str2=func_63();
func_62();
}else{
func_61();
}
func_40(str, str2, "FIX_APP_INVEST" /*INVESTIGATED*/, false, true, false, "");
return;
}


void func_61() // Position - 0x1345{
func_41();
MISC::SET_BIT(&iLocal_131, 16);
return;
}


void func_62() // Position - 0x1359{
func_41();
MISC::SET_BIT(&iLocal_131, 17);
return;
}


char* func_63() // Position - 0x136D{
return "SETUP_DATA_RECOVERY";
}


char* func_64() // Position - 0x1379{
return "FIX_APP_DATA_R2_D" /*Data Recovery:
Infiltrate the FIB headquarters and retrieve any data that could lead to Dr. Dre's stolen phone.*/;
}


char* func_65() // Position - 0x1385{
return "MISSION_ON_COURSE";
}


char* func_66() // Position - 0x1391{
return "FIX_APP_DATA_R1_D" /*On Course:
Meet Franklin at the Los Santos Golf Club in Richman to discuss the VIP client.*/;
}


void func_67(BOOL bParam0) // Position - 0x139D{
if(bParam0) MISC::SET_BIT(&iLocal_131, 15);
else MISC::CLEAR_BIT(&iLocal_131, 15);
return;
}
BOOL func_68() // Position - 0x13BD{
return IS_BIT_SET(iLocal_131, 2);
}


void func_69() // Position - 0x13C9{
int scaleformMovieMethodReturnValueInt;
func_332();
func_331();
if(IS_BIT_SET(iLocal_131, 4)){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_153)){
scaleformMovieMethodReturnValueInt=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_153);
if(!CAM::IS_SCREEN_FADED_IN()){
MISC::CLEAR_BIT(&iLocal_131, 4);
return;
}elseif(_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && !func_329(scaleformMovieMethodReturnValueInt)){
if(func_328(0)){
if(!IS_BIT_SET(iLocal_131, 10)){
_DISPLAY_HELP_TEXT("FIX_HQ_APP_WAIT" /*Please wait for Franklin to finish his introduction to the Agency Network.*/, -1);
MISC::SET_BIT(&iLocal_131, 10);
}}
func_326(2);
MISC::CLEAR_BIT(&iLocal_131, 4);
return;
}
switch (scaleformMovieMethodReturnValueInt){
case 202:
func_317();
break;
case 201:
func_316();
break;
case 216:
func_315();
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_1), 22);
func_326(3);
break;
case 222:
break;
case 223:
MISC::SET_BIT(&iLocal_131, 6);
func_326(8);
break;
case 203:
case 220:
case 221:
func_309();
func_326(3);
func_303(0);
func_296(true, 0);
break;
case 218:
func_294(iLocal_132);
break;
case 211:
case 212:
case 213:
func_292(scaleformMovieMethodReturnValueInt);
break;
case 204:
case 219:
if(func_290(false) && func_288(false) && func_286() && !func_284(true)){
if(!func_282(false)){
func_281();
func_326(3);
}
elseif(!func_280(PLAYER::PLAYER_ID()) && !IS_BIT_SET(Global_1981423.f_1, 23)){
func_326(2);
}
else{
func_272();
func_326(3);
}}else{
func_326(2);
}
break;
case 205:
case 206:
case 207:
func_264(scaleformMovieMethodReturnValueInt);
break;
case 208:
case 209:
case 210:
func_262(scaleformMovieMethodReturnValueInt);
break;
case 217:
if(IS_BIT_SET(iLocal_131, 16)){
if(!func_75(0)) func_326(6);
}elseif(IS_BIT_SET(iLocal_131, 17)){
MISC::SET_BIT(&iLocal_131, 6);
func_326(8);
}else{
func_72(iLocal_134, iLocal_133);
}
break;
case 214:
case 215:
func_70(217);
break;
}
MISC::CLEAR_BIT(&iLocal_131, 4);
}}
return;
}


void func_70(int iParam0) // Position - 0x161A{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SET_CURRENT_SELECTION");
func_71(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_71(int iParam0) // Position - 0x1637{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
return;
}


void func_72(int iParam0, int iParam1) // Position - 0x1645{
if(func_74()){
func_326(2);
return;
}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
if(func_51(2, false)) func_326(2);
else func_73(1);
break;
case 1:
if(!func_51(2, false) || func_51(3, false)) func_326(2);
else func_73(2);
break;
case 2:
if(!func_51(2, false) || !func_51(3, false) || func_51(4, false)) func_326(2);
else func_75(4);
break;
}
break;
case 1:
switch (iParam1){
case 0:
if(func_51(5, false)) func_326(2);
else func_73(3);
break;
case 1:
if(!func_51(5, false) || func_51(6, false)) func_326(2);
else func_73(4);
break;
case 2:
if(!func_51(5, false) || !func_51(6, false) || func_51(7, false)) func_326(2);
else func_75(7);
break;
}
break;
case 2:
switch (iParam1){
case 0:
if(func_51(8, false)) func_326(2);
else func_73(5);
break;
case 1:
if(!func_51(8, false) || func_51(9, false)) func_326(2);
else func_73(6);
break;
case 2:
if(!func_51(8, false) || !func_51(9, false) || func_51(10, false)) func_326(2);
else func_75(10);
break;
}
break;
}
return;
}


void func_73(int iParam0) // Position - 0x1829{
Global_1949965=1;
Global_75698=1;
func_2(264, iParam0, -1);
func_419(true, true);
return;
}
BOOL func_74() // Position - 0x184B{
return Global_1981457 !=-1;
}
BOOL func_75(int iParam0) // Position - 0x1859{
int num;
var unk;
int num2;
var unk7;
var unk8;
int num3;
var unk11;
int address;
func_326(8);
num=func_260(iParam0);
if(num==-1) return false;
unk={
Global_794709.f_4[num /*88*/] 
};
num2=Global_794709.f_4[num /*88*/].f_65;
unk7=Global_794709.f_4[num /*88*/].f_71;
func_200(func_201(PLAYER::PLAYER_ID()));
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 376832, false);
Global_2684799.f_3831=1;
func_187(PLAYER::PLAYER_ID(), 0);
func_186();
func_185();
num2=284;
func_184(77);
func_183();
func_182();
if(func_181() || func_180()){
func_179();
}else{
Global_1950108.f_507=1;
func_178(num2);
if(func_174() <=3) func_173();
func_170(GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()));
func_168(&unk);
func_167(unk7);
func_166();
func_164();
func_163();
func_162();
func_161();
unk11={
0f, 0f, 0f 
};
MISC::SET_BIT(&address, 8);
func_84(&(Global_2683862.f_781), 0, 0, unk11, &unk8, unk11, true, false, &unk8, &num3, num3, false, address);
func_76(false, 0);
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95=8;
func_419(false, false);
return true;
}
return false;
}


void func_76(BOOL bParam0, int iParam1) // Position - 0x199A{
if(bParam0) func_81(true, false, true);
else func_77(iParam1);
return;
}


void func_77(int iParam0) // Position - 0x19B7{
func_80();
if(iParam0==0)if(LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()) return;
if(func_79()==0 || HUD::IS_PAUSE_MENU_ACTIVE()){
func_78(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
}
return;
}


void func_78(int iParam0) // Position - 0x19F8{
if(Global_1574632.f_20 !=iParam0) Global_1574632.f_20=iParam0;
return;
}

int func_79() // Position - 0x1A13{
return Global_1574632.f_20;
}


void func_80() // Position - 0x1A21{
Global_2696215=1;
return;
}


void func_81(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A2E{
if(func_82()) return;
if(func_79()==1 || HUD::IS_PAUSE_MENU_ACTIVE() || bParam0){
func_78(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
if(!bParam1) GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
if(bParam2) GRAPHICS::RESET_PAUSED_RENDERPHASES();
}
return;
}
BOOL func_82() // Position - 0x1A79{
if(func_83()) return Global_2694451;
return false;
}
BOOL func_83() // Position - 0x1A90{
if(Global_2694444) return Global_2694443;
return false;
}


void func_84(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, BOOL bParam11, var uParam12, var uParam13, int iParam14, BOOL bParam15, int iParam16) // Position - 0x1AA7{
float entityCoords;
Vector3 finalRenderedCamRot;
float finalRenderedCamFov;
BOOL flag;
float amplitude;
BOOL flag2;
int num;
var unk5;
func_157(uParam0, iParam1, 1, iParam14, true);
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)){
if(bParam11){
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())if(!func_156() || bParam15) func_145(false);
return;
}}
if(!CAM::DOES_CAM_EXIST(*uParam0)) *uParam0=unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 0);
finalRenderedCamRot={
uParam7 
};
finalRenderedCamFov=-1f;
flag=false;
amplitude=0.2f;
flag2=true;
if(func_144(iParam1)){
*uParam6={
func_143(iParam1, iParam2) 
};
finalRenderedCamRot={
func_142(iParam1, iParam2) 
};
finalRenderedCamFov=func_141(iParam1, iParam2);
}
if(!_IS_NULL_VECTOR(*uParam6)) entityCoords={
*uParam6 
};
if(_IS_NULL_VECTOR(entityCoords)){
if(!bParam10){
entityCoords={
uParam3 
};
if(INTERIOR::IS_COLLISION_MARKED_OUTSIDE(entityCoords, entityCoords.f_1, entityCoords.f_2 + 1f)){
}else{
entityCoords.f_2=entityCoords.f_2 + 4f;
}}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(_IS_NULL_VECTOR(entityCoords)){
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)){
if(ENTITY::DOES_ENTITY_EXIST(func_137()) && !ENTITY::IS_ENTITY_DEAD(func_137(), false)){
entityCoords={
ENTITY::GET_ENTITY_COORDS(func_137(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(func_137()) 
};
if(func_136(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, true, false)){
entityCoords={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
finalRenderedCamRot={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
}}else{
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
}}else{
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
}
if(func_135(PLAYER::PLAYER_ID()) || func_134(PLAYER::PLAYER_ID()) && func_133()) entityCoords.f_2=entityCoords.f_2 + 1.5f;
elseif(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))if(func_135(PLAYER::PLAYER_ID())) entityCoords.f_2=entityCoords.f_2 + 0.4f;
else entityCoords.f_2=entityCoords.f_2 + 1.5f;
else entityCoords.f_2=entityCoords.f_2 + 4f;
}}
if(IS_BIT_SET(iParam16, 3)){
entityCoords={
1124.7449f, 263.6554f, -48.8552f 
};
finalRenderedCamRot={
-22.4617f, 0f, -75.8431f 
};
finalRenderedCamFov=50f;
}elseif(func_131(PLAYER::PLAYER_ID())){
entityCoords={
488.6712f, -2623.0745f, -48.1159f 
};
finalRenderedCamRot={
-9.1167f, 0f, 130.9763f 
};
finalRenderedCamFov=50f;
}elseif(func_130(*Global_4718592.f_113724) || IS_BIT_SET(iParam16, 2)){
if(func_129(PLAYER::PLAYER_ID())){
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
entityCoords.f_2=entityCoords.f_2 + 0.4f;
finalRenderedCamFov=CAM::GET_FINAL_RENDERED_CAM_FOV();
}else{
entityCoords={
-194.2056f, -1853.7499f, 70.3345f 
};
finalRenderedCamRot={
-10.0011f, 0f, 131.0271f 
};
finalRenderedCamFov=42.6052f;
}}elseif(func_128(*Global_4718592.f_113724) || IS_BIT_SET(iParam16, 1)){
entityCoords={
347.2638f, 4867.324f, -59.2679f 
};
finalRenderedCamRot={
1.2933f, 0.0747f, -34.6934f 
};
finalRenderedCamFov=50f;
}elseif(IS_BIT_SET(iParam16, 4) || func_127(*Global_4718592.f_113724)){
entityCoords={
2709.3323f, -366.5988f, -52.2786f 
};
finalRenderedCamRot={
-19.962f, 0f, -121.3927f 
};
finalRenderedCamFov=56.6574f;
}elseif(IS_BIT_SET(iParam16, 5)){
num=func_126(PLAYER::PLAYER_ID());
entityCoords={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_125(num), func_124(num), 3.5688f, 7.9792f, 4.1641f) 
};
finalRenderedCamRot={
-21.6791f, 0f, func_124(num) + 40.237f 
};
finalRenderedCamFov=70f;
}elseif(IS_BIT_SET(iParam16, 6) || func_123()){
if(IS_BIT_SET(iParam16, 6)){
entityCoords={
Global_1977693.f_1073 
};
finalRenderedCamRot={
Global_1977693.f_1073.f_3 
};
finalRenderedCamFov=Global_1977693.f_1073.f_6;
}else{
func_120(&entityCoords, &finalRenderedCamRot, &finalRenderedCamFov);
}}elseif(IS_BIT_SET(iParam16, 7)){
entityCoords={
-1381.7837f, 38.8164f, 63.1614f 
};
finalRenderedCamRot={
-19.0288f, 0f, -35.2577f 
};
finalRenderedCamFov=50f;
}elseif(IS_BIT_SET(iParam16, 8) || func_119(*Global_4718592.f_113724)){}elseif(IS_BIT_SET(iParam16, 9) || func_117() && func_116(249)){
entityCoords={
-822.1176f, -198.5518f, 40.085f 
};
finalRenderedCamRot={
13.7424f, 0f, 145.7582f 
};
finalRenderedCamFov=65.2994f;
flag=true;
if(!func_115()) flag2=false;
}elseif(IS_BIT_SET(iParam16, 10)){}elseif(func_114(*Global_4718592.f_113724)){
entityCoords={
800.2757f, -3051.393f, 10.5728f 
};
finalRenderedCamRot={
3.1956f, 0f, -8.4268f 
};
finalRenderedCamFov=50f;
}elseif(IS_BIT_SET(iParam16, 11)){
entityCoords={
1403.9072f, 3586.4277f, 41.1676f 
};
finalRenderedCamRot={
-8.8877f, 0f, 39.6448f 
};
finalRenderedCamFov=62f;
}elseif(IS_BIT_SET(iParam16, 12)){
entityCoords={
622.9118f, -396.3098f, 31.0305f 
};
finalRenderedCamRot={
-10.3971f, 0f, 133.29f 
};
finalRenderedCamFov=60f;
}
if(func_156() && !bParam15){
entityCoords={
-213.5595f, 316.9778f, 96.9244f 
};
finalRenderedCamRot={
-1.0483f, 0f, -127.3989f 
};
finalRenderedCamFov=25.5102f;
}
if(iParam1==0 && bParam11){
func_108();
func_107(&unk5, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
if(!_IS_NULL_VECTOR(unk5)) entityCoords={
unk5 
};
func_101(&unk5, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
finalRenderedCamRot={
unk5 
};
}
CAM::SET_CAM_ACTIVE(*uParam0, true);
CAM::SET_CAM_COORD(*uParam0, entityCoords);
CAM::SET_CAM_ROT(*uParam0, finalRenderedCamRot, 2);
if(finalRenderedCamFov > 0f) CAM::SET_CAM_FOV(*uParam0, finalRenderedCamFov);
else CAM::SET_CAM_FOV(*uParam0, 40f);
if(flag) CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", amplitude);
if(func_156() && !bParam15){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_100(PLAYER::PLAYER_ID())){
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS, false);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -209.434f, 305.016f, 95.9464f, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 12.5f);
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 1193033728, 0.1f);
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}}
MISC::CLEAR_AREA_OF_VEHICLES(-209.434f, 305.016f, 95.9464f, 30f, false, false, false, false, false, false, 0);
func_99(true);
}
if(flag2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())if(!func_156() || bParam15) func_145(false);
CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
if(!func_98() && !func_97() && !func_96() && !func_95() && !func_94()) func_93(0);
if(func_92()) STREAMING::CLEAR_FOCUS();
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
*uParam12={
entityCoords 
};
*uParam13=1;
}else{
func_91(entityCoords);
}
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_85(func_156(), IS_BIT_SET(iParam16, 0) || IS_BIT_SET(iParam16, 1) || IS_BIT_SET(iParam16, 2));
return;
}


void func_85(BOOL bParam0, BOOL bParam1) // Position - 0x22AC{
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) return;
if(!bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))if(ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())) ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
if(!bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_88()) TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
if(func_87(PLAYER::PLAYER_ID())) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 32768, false);
elseif(func_86()) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS | 32768, false);
elseif(!bParam1) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS | 319488, false);
}else{
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS | 57344, false);
}}
return;
}
BOOL func_86() // Position - 0x236E{
return Global_2684799.f_6341;
}
BOOL func_87(Player plParam0) // Position - 0x237D{
if(plParam0 !=-1) return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_29, 31);
return false;
}
BOOL func_88() // Position - 0x239C{
Vehicle vehiclePedIsIn;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(func_90(vehiclePedIsIn, true) && !func_89(vehiclePedIsIn, true)) return true;
}
return false;
}
BOOL func_89(Vehicle veParam0, BOOL bParam1) // Position - 0x23D7{
if(Global_78558)if(ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))if(DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())) return true;
return false;
}
BOOL func_90(Vehicle veParam0, BOOL bParam1) // Position - 0x242B{
if(Global_78558)if(ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle")) return true;
return false;
}


void func_91(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x246A{
if(!func_92()) return;
STREAMING::SET_FOCUS_POS_AND_VEL(vParam0, 0f, 0f, 0f);
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
return;
}
BOOL func_92() // Position - 0x248D{
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0))if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, false, true))if(func_136(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, true, false)) return false;
return true;
}


void func_93(int iParam0) // Position - 0x24E9{
if(func_82()) return;
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1) return;
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) CAM::DO_SCREEN_FADE_IN(iParam0);
return;
}
BOOL func_94() // Position - 0x2539{
return IS_BIT_SET(Global_2683862.f_3, 17);
}
BOOL func_95() // Position - 0x254A{
return IS_BIT_SET(Global_2683862.f_3, 14);
}
BOOL func_96() // Position - 0x255B{
return IS_BIT_SET(Global_2683862.f_3, 12);
}
BOOL func_97() // Position - 0x256C{
return IS_BIT_SET(Global_2683862.f_3, 9);
}
BOOL func_98() // Position - 0x257D{
return IS_BIT_SET(Global_2683862.f_3, 6);
}


void func_99(BOOL bParam0) // Position - 0x258D{
if(bParam0) MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
else MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
return;
}
BOOL func_100(Player plParam0) // Position - 0x25C3{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_143, 27);
}

int func_101(var uParam0, int iParam1, int iParam2) // Position - 0x25D9{
switch (iParam2){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 61:
case 62:
case 63:
case 64:
case 65:
case 83:
case 84:
case 85:
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
case 73:
case 74:
case 75:
case 76:
case 87:
case 88:
case 89:
case 90:
default:
}
return 0;
}


void func_102(int iParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2778{
var unk;
Vector3 vector;
unk=2;
unk[0 /*6*/]={
func_106(uParam3, bParam4) 
};
unk[1 /*6*/]={
func_106(iParam0, bParam4) 
};
*uParam2={
func_104(iParam1, uParam3) 
};
vector={
*uParam2 - unk[0 /*6*/] 
};
vector={
func_103(vector, -unk[0 /*6*/].f_3.f_2) 
};
vector={
func_103(vector, unk[1 /*6*/].f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(unk[1 /*6*/], 0f, vector) 
};
switch (iParam1){
case 6:
case 2:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 34:
case 35:
case 36:
case 38:
case 39:
case 120:
case 121:
case 125:
case 40:
case 41:
case 43:
case 44:
case 45:
case 42:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 64:
case 65:
case 57:
case 58:
case 59:
case 60:
case 61:
case 62:
case 63:
case 66:
case 67:
case 68:
case 109:
case 69:
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
case 83:
case 85:
case 84:
case 89:
case 90:
case 91:
case 92:
case 94:
case 95:
case 96:
case 97:
case 98:
case 93:
case 99:
case 100:
case 106:
case 107:
case 108:
case 119:
case 122:
case 123:
case 124:
case 138:
case 139:
case 140:
case 130:
case 128:
case 141:
case 142:
case 143:
case 144:
case 145:
case 146:
case 147:
case 148:
case 153:
case 154:
case 155:
case 157:
case 234:
case 174:
case 175:
case 176:
case 177:
case 178:
case 179:
case 180:
case 235:
case 149:
case 150:
case 151:
case 152:
case 172:
case 187:
case 173:
case 201:
case 188:
case 189:
case 190:
case 191:
case 192:
case 193:
case 194:
case 195:
case 196:
case 197:
case 198:
case 199:
case 200:
case 284:
case 285:
case 286:
case 287:
case 202:
case 203:
case 204:
case 205:
case 206:
case 207:
case 208:
case 209:
case 210:
case 211:
case 212:
case 213:
case 214:
case 216:
case 217:
case 182:
case 183:
case 181:
case 156:
case 236:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 243:
case 244:
case 245:
case 246:
case 247:
case 248:
case 249:
case 250:
case 251:
case 252:
case 253:
case 254:
case 255:
case 256:
case 257:
case 258:
case 259:
case 260:
case 261:
case 262:
case 263:
case 264:
case 265:
case 266:
case 267:
case 268:
case 269:
case 270:
case 271:
case 272:
case 273:
case 274:
case 275:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
switch (iParam1){
case 278:
case 279:
case 280:
case 281:
case 282:
case 283:
case 300:
case 301:
case 302:
case 303:
case 304:
case 306:
case 305:
case 308:
case 309:
case 312:
case 313:
case 314:
case 315:
case 316:
case 317:
case 318:
case 319:
case 320:
case 321:
case 322:
case 323:
case 324:
case 325:
case 326:
case 327:
case 328:
case 329:
case 307:
case 331:
case 332:
case 333:
case 334:
case 310:
case 335:
case 336:
case 337:
case 338:
case 339:
case 311:
case 340:
case 435:
case 436:
case 437:
case 470:
case 477:
case 504:
case 507:
case 510:
case 513:
case 528:
case 531:
case 534:
case 537:
case 540:
case 547:
case 445:
case 446:
case 447:
case 448:
case 449:
case 450:
case 471:
case 472:
case 478:
case 479:
case 505:
case 506:
case 508:
case 509:
case 511:
case 512:
case 514:
case 515:
case 529:
case 530:
case 532:
case 533:
case 535:
case 536:
case 538:
case 539:
case 541:
case 542:
case 548:
case 549:
case 432:
case 433:
case 434:
case 451:
case 452:
case 453:
case 454:
case 455:
case 456:
case 459:
case 460:
case 461:
case 462:
case 463:
case 464:
case 560:
case 546:
case 587:
case 588:
case 589:
case 590:
case 591:
case 592:
case 501:
case 502:
case 500:
case 616:
case 615:
case 612:
case 629:
case 630:
case 631:
case 714:
case 633:
case 634:
case 635:
case 636:
case 637:
case 638:
case 639:
case 640:
case 643:
case 644:
case 641:
case 642:
case 646:
case 645:
case 647:
case 648:
case 649:
case 650:
case 666:
case 667:
case 668:
case 669:
case 670:
case 671:
case 673:
case 674:
case 675:
case 676:
case 677:
case 689:
case 690:
case 691:
case 692:
case 693:
case 694:
case 695:
case 696:
case 697:
case 698:
case 699:
case 700:
case 701:
case 702:
case 703:
case 704:
case 705:
case 706:
case 707:
case 708:
case 709:
case 710:
case 711:
case 712:
case 713:
case 632:
case 738:
case 739:
case 740:
case 741:
case 742:
case 743:
case 744:
case 745:
case 746:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
switch (iParam1){
case 715:
case 716:
case 717:
case 718:
case 719:
case 720:
case 721:
case 722:
case 723:
case 724:
case 725:
case 726:
case 727:
case 728:
case 729:
case 730:
case 731:
case 732:
case 733:
case 734:
case 735:
case 736:
case 737:
case 747:
case 748:
case 749:
case 750:
case 751:
case 752:
case 753:
case 754:
case 755:
case 756:
case 757:
case 758:
case 759:
case 760:
case 761:
case 762:
case 763:
case 764:
case 765:
case 766:
case 767:
case 768:
case 769:
case 770:
case 771:
case 772:
case 773:
case 774:
case 775:
case 776:
case 777:
case 778:
case 779:
case 780:
case 781:
case 782:
case 783:
case 784:
case 785:
case 786:
case 787:
case 788:
case 789:
case 790:
case 791:
case 792:
case 793:
case 794:
case 795:
case 796:
case 797:
case 798:
case 799:
case 800:
case 802:
case 801:
case 803:
case 804:
case 805:
case 806:
case 807:
case 808:
case 809:
case 678:
case 679:
case 680:
case 681:
case 682:
case 683:
case 684:
case 685:
case 810:
case 811:
case 812:
case 813:
case 814:
case 815:
case 817:
case 816:
case 819:
case 818:
case 820:
case 821:
case 822:
case 823:
case 824:
case 825:
case 826:
case 827:
case 828:
case 829:
case 830:
case 831:
case 832:
case 833:
case 834:
case 835:
case 836:
case 837:
case 838:
case 839:
case 840:
case 841:
case 842:
case 843:
case 844:
case 845:
case 846:
case 847:
case 848:
case 849:
case 850:
case 851:
case 852:
case 853:
case 854:
case 855:
case 856:
case 686:
case 687:
case 688:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
switch (iParam1){
case 857:
case 858:
case 859:
case 860:
case 861:
case 862:
case 863:
case 864:
case 865:
case 866:
case 867:
case 868:
case 869:
case 870:
case 871:
case 872:
case 873:
case 874:
case 875:
case 876:
case 877:
case 878:
case 879:
case 880:
case 881:
case 882:
case 883:
case 884:
case 888:
case 889:
case 890:
case 891:
case 651:
case 652:
case 653:
case 654:
case 655:
case 656:
case 657:
case 658:
case 659:
case 660:
case 661:
case 662:
case 663:
case 664:
case 665:
case 887:
case 894:
case 895:
case 896:
case 897:
case 898:
case 899:
case 900:
case 901:
case 902:
case 903:
case 904:
case 905:
case 906:
case 907:
case 908:
case 911:
case 913:
case 914:
case 915:
case 916:
case 917:
case 918:
case 919:
case 920:
case 921:
case 922:
case 923:
case 924:
case 925:
case 926:
case 927:
case 928:
case 929:
case 930:
case 931:
case 932:
case 954:
case 955:
case 956:
case 957:
case 958:
case 959:
case 968:
case 969:
case 970:
case 973:
case 974:
case 975:
case 976:
case 977:
case 978:
case 979:
case 980:
case 981:
case 982:
case 983:
case 984:
case 985:
case 986:
case 987:
case 988:
case 989:
case 990:
case 1008:
case 1009:
case 1010:
case 991:
case 992:
case 993:
case 994:
case 995:
case 996:
case 997:
case 998:
case 999:
case 960:
case 961:
case 962:
case 963:
case 964:
case 965:
case 966:
case 967:
case 1000:
case 1001:
case 1002:
case 1003:
case 1004:
case 1005:
case 1006:
case 1007:
case 1011:
case 1012:
case 1013:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
return;
}


Vector3 func__103(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x3C32{
float num;
float num2;
float num3;
num2=SYSTEM::SIN(fParam3);
num3=SYSTEM::COS(fParam3);
num=(fParam0 * num3) - (fParam0.f_1 * num2);
num.f_1=(fParam0 * num2) + (fParam0.f_1 * num3);
num.f_2=fParam0.f_2;
return num;
}


struct<6> func_104(Any anParam0, var uParam1) // Position - 0x3C76{
var unk;
BOOL flag;
BOOL flag2;
flag2=false;
if(func_105(uParam1, &flag)) flag2=true;
if(flag2 && MISC::GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(&unk, &(unk.f_3), anParam0, flag)) return unk;
return unk;
}
BOOL func_105(int iParam0, var uParam1) // Position - 0x3CB8{
switch (iParam0){
case -1:
case 1:
*uParam1=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "BaseElementLocationsMap", 64);
return true;
case 61:
*uParam1=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
return true;
case 73:
*uParam1=2;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
return true;
case 77:
*uParam1=3;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
return true;
case 83:
*uParam1=4;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
return true;
case 86:
*uParam1=5;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
return true;
case 88:
*uParam1=6;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
return true;
case 91:
*uParam1=7;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
return true;
case 97:
*uParam1=8;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
return true;
case 109:
*uParam1=9;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
return true;
}
return false;
}


struct<6> func_106(int iParam0, BOOL bParam1) // Position - 0x3DDE{
var unk;
switch (iParam0){
case -1:
unk={
-794.9184f, 339.6266f, 200.4135f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 1:
unk={
-794.9184f, 339.6266f, 200.4135f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 2:
unk={
-761.0982f, 317.6259f, 169.59628f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 3:
unk={
-761.1888f, 317.6295f, 216.0503f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 4:
unk={
-795.3856f, 340.0188f, 152.7941f 
};
unk.f_3={
0f, 0f, 179.99997f 
};
break;
case 61:
unk={
-778.5056f, 332.3779f, 212.1968f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 5:
unk={
-258.1807f, -950.6853f, 70.0239f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 6:
unk={
-285.0051f, -957.6552f, 85.3035f 
};
unk.f_3={
0f, 0f, -109.99999f 
};
break;
case 7:
unk={
-1471.8821f, -530.7484f, 62.34918f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 34:
unk={
-1471.8821f, -530.7484f, 49.72156f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 62:
unk={
-1463.15f, -540.2369f, 74.2439f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 35:
unk={
-885.3702f, -451.4775f, 119.327f 
};
unk.f_3={
0f, 0f, 27.55617f 
};
break;
case 36:
unk={
-913.0385f, -438.4284f, 114.39966f 
};
unk.f_3={
0f, 0f, -153.30931f 
};
break;
case 37:
unk={
-892.5499f, -430.4789f, 88.25368f 
};
unk.f_3={
0f, 0f, 116.9193f 
};
break;
case 38:
unk={
-35.0462f, -576.317f, 82.90739f 
};
unk.f_3={
0f, 0f, 160f 
};
break;
case 39:
unk={
-10.3788f, -590.7431f, 93.02542f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 65:
unk={
-22.2487f, -589.1461f, 80.2305f 
};
unk.f_3={
0f, 0f, 69.88f 
};
break;
case 40:
unk={
-900.6311f, -376.7462f, 78.27306f 
};
unk.f_3={
0f, 0f, 26.92611f 
};
break;
case 41:
unk={
-929.483f, -374.5104f, 102.23286f 
};
unk.f_3={
0f, 0f, -152.55307f 
};
break;
case 63:
unk={
-914.4202f, -375.8189f, 114.4743f 
};
unk.f_3={
0f, 0f, -63f 
};
break;
case 42:
unk={
-617.1647f, 64.6042f, 100.8196f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 43:
unk={
-584.2015f, 42.7133f, 86.4187f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 64:
unk={
-609.5665f, 50.2203f, 98.3998f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 73:
unk={
-171.3969f, 494.2671f, 134.4935f 
};
unk.f_3={
0f, 0f, 11f 
};
break;
case 74:
unk={
339.4982f, 434.0887f, 146.2206f 
};
unk.f_3={
0f, 0f, -63.5f 
};
break;
case 75:
unk={
-761.3884f, 615.7333f, 140.9805f 
};
unk.f_3={
0f, 0f, -71.5f 
};
break;
case 76:
unk={
-678.1752f, 591.0076f, 142.2196f 
};
unk.f_3={
0f, 0f, 40.5f 
};
break;
case 77:
unk={
120.0541f, 553.793f, 181.0943f 
};
unk.f_3={
0f, 0f, 6f 
};
break;
case 78:
unk={
-571.4039f, 655.2008f, 142.6293f 
};
unk.f_3={
0f, 0f, -14.5f 
};
break;
case 79:
unk={
-742.2565f, 587.6547f, 143.0577f 
};
unk.f_3={
0f, 0f, -29f 
};
break;
case 80:
unk={
-857.2222f, 685.051f, 149.6502f 
};
unk.f_3={
0f, 0f, 4.5f 
};
break;
case 81:
unk={
-1287.6498f, 443.2707f, 94.6919f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 82:
unk={
374.2012f, 416.9688f, 142.6977f 
};
unk.f_3={
0f, 0f, -14f 
};
break;
case 83:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 84:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 85:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 86:
unk={
-1573.0981f, -4085.806f, 9.7851f 
};
unk.f_3={
0f, 0f, 162f 
};
break;
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 66:
case 67:
case 68:
case 69:
unk={
342.8157f, -997.4288f, -100f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 70:
case 71:
case 72:
unk={
260.3297f, -997.4288f, -100f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 87:
unk={
-1572.1869f, -570.8315f, 109.9879f 
};
unk.f_3={
0f, 0f, -54f 
};
break;
case 88:
unk={
-1383.9543f, -476.7112f, 73.507f 
};
unk.f_3={
0f, 0f, 8f 
};
break;
case 89:
unk={
-138.0029f, -629.739f, 170.2854f 
};
unk.f_3={
0f, 0f, -84f 
};
break;
case 90:
unk={
-74.8895f, -817.6883f, 244.8508f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
unk={
1100.7644f, -3159.384f, -34.9342f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
unk={
1005.806f, -3157.6702f, -36.0897f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 103:
if(!bParam1){
unk={
-1576.5712f, -569.7595f, 85.5f 
};
unk.f_3={
0f, 0f, 36.1f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 104:
if(!bParam1){
unk={
-1571.2538f, -566.5865f, 85.5f 
};
unk.f_3={
0f, 0f, -53.9f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 105:
if(!bParam1){
unk={
-1568.0984f, -571.9171f, 85.5f 
};
unk.f_3={
0f, 0f, -143.9f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 106:
if(!bParam1){
unk={
-1384.5178f, -475.8657f, 56.1f 
};
unk.f_3={
0f, 0f, 98.7f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 107:
if(!bParam1){
unk={
-1384.5383f, -475.8829f, 48.1f 
};
unk.f_3={
0f, 0f, 98.7f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 108:
if(!bParam1){
unk={
-1378.9939f, -477.2481f, 56.1f 
};
unk.f_3={
0f, 0f, -81.1f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 109:
if(!bParam1){
unk={
-186.5683f, -576.4624f, 135f 
};
unk.f_3={
0f, 0f, 96.16f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 110:
if(!bParam1){
unk={
-113.886f, -564.3862f, 135f 
};
unk.f_3={
0f, 0f, 110.96f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 111:
if(!bParam1){
unk={
-134.6568f, -635.1774f, 135f 
};
unk.f_3={
0f, 0f, -9.04f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 112:
if(!bParam1){
unk={
-79.0479f, -822.6393f, 221f 
};
unk.f_3={
0f, 0f, 70f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
case 113:
if(!bParam1){
unk={
-70.3086f, -819.5784f, 221f 
};
unk.f_3={
0f, 0f, 160f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
case 114:
if(!bParam1){
unk={
-79.9861f, -818.425f, 221f 
};
unk.f_3={
0f, 0f, -20f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
}
return unk;
}

int func_107(var uParam0, int iParam1, int iParam2) // Position - 0x4995{
switch (iParam2){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 61:
case 62:
case 63:
case 64:
case 65:
case 83:
case 84:
case 85:
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
case 73:
case 74:
case 75:
case 76:
case 87:
case 88:
case 89:
case 90:
default:
}
return 0;
}


void func_108() // Position - 0x4B28{
int i;
if(func_111()) return;
func_110(4, -1);
if(func_109()) return;
for (i=0;
i < 32;
i=i + 1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))if(PLAYER::INT_TO_PLAYERINDEX(i)==PLAYER::PLAYER_ID())if(!func_116(48)) NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(i), false);
else NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(i), false);
}
return;
}
BOOL func_109() // Position - 0x4B9A{
return IS_BIT_SET(Global_2683862.f_43.f_4, 0);
}


void func_110(int iParam0, int iParam1) // Position - 0x4BAC{
MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1) Global_1653913.f_170[iParam1]=1;
break;
}
return;
}
BOOL func_111() // Position - 0x4BE2{
if(func_113() !=2) return false;
if(!func_109() && !(Global_1943594 || Global_1574964 && func_112())) return false;
return true;
}
BOOL func_112() // Position - 0x4C20{
return Global_2683862.f_43.f_57;
}

int func_113() // Position - 0x4C30{
return Global_2683862.f_43.f_40;
}
BOOL func_114(int iParam0) // Position - 0x4C40{
int i;
if(iParam0 !=0){
for (i=0;
i < Global_262145.f_6211[18];
i=i + 1){
if(iParam0==Global_262145.f_5066[18 /*51*/][i]) return true;
}}
return false;
}
BOOL func_115() // Position - 0x4C83{
return Global_2683862.f_692;
}
BOOL func_116(int iParam0) // Position - 0x4C92{
int num;
int num2;
num=iParam0 / 32;
num2=iParam0 % 32;
if(num >=8) return false;
return IS_BIT_SET(Global_2684799.f_1.f_2813[num], num2);
}
BOOL func_117() // Position - 0x4CC3{
return func_118(*Global_4718592.f_113724);
}
BOOL func_118(var uParam0) // Position - 0x4CD9{
int i;
for (i=0;
i < 3;
i=i + 1){
if(Global_262145.f_31722[i]==uParam0) return 1;
}
return 0;
}
BOOL func_119(int iParam0) // Position - 0x4D08{
int i;
for (i=0;
i < 6;
i=i + 1){
if(Global_262145.f_31715[i]==iParam0) return true;
}
return false;
}


void func_120(var uParam0, var uParam1, var uParam2) // Position - 0x4D37{
if(func_122(*Global_4718592.f_113724)){
if(MISC::ABSF(GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f) < 0.1f){
*uParam0={
1561.1614f, 384.824f, -48.6215f 
};
*uParam1={
-89.3034f, -0.1435f, 180f 
};
*uParam2=69f;
}else{
*uParam0={
1561.1604f, 384.8204f, -48.9135f 
};
*uParam1={
-89.5003f, -0.204f, 180f 
};
*uParam2=69f;
}}elseif(func_121(*Global_4718592.f_113724)){
*uParam0={
-1348.9563f, 138.2791f, -94.7272f 
};
*uParam1={
-2.4593f, 0f, -164.9275f 
};
*uParam2=70f;
}
return;
}
BOOL func_121(int iParam0) // Position - 0x4E05{
int i;
if(iParam0==0) return false;
for (i=0;
i < 8;
i=i + 1){
if(Global_262145.f_31051[i]==iParam0) return true;
}
return false;
}
BOOL func_122(int iParam0) // Position - 0x4E3F{
int i;
for (i=0;
i < 11;
i=i + 1){
if(Global_262145.f_29933[i]==iParam0) return true;
}
return false;
}
BOOL func_123() // Position - 0x4E6F{
if(func_122(*Global_4718592.f_113724)) return true;
return false;
}


float func_124(int iParam0) // Position - 0x4E8D{
return Global_4280768[iParam0 /*45*/].f_7;
}


Vector3 func__125(int iParam0) // Position - 0x4E9F{
return Global_4280768[iParam0 /*45*/].f_4;
}

int func_126(Player plParam0) // Position - 0x4EB3{
return Global_2652258[plParam0 /*3*/];
}
BOOL func_127(var uParam0) // Position - 0x4EC3{
int i;
for (i=0;
i < 21;
i=i + 1){
if(Global_262145.f_6087[i]==uParam0) return true;
}
return false;
}
BOOL func_128(int iParam0) // Position - 0x4EF3{
int i;
if(iParam0==0) return false;
for (i=0;
i < 16;
i=i + 1){
if(Global_262145.f_5042[i]==iParam0) return true;
}
return false;
}
BOOL func_129(Player plParam0) // Position - 0x4F2D{
return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_200, 24);
}
BOOL func_130(int iParam0) // Position - 0x4F43{
int i;
int j;
if(iParam0 !=0){
for (j=0;
j < 19;
j=j + 1){
if(Global_262145.f_6891[j]==251){
for (i=0;
i < Global_262145.f_6211[j];
i=i + 1){
if(iParam0==Global_262145.f_5066[j /*51*/][i]) return true;
}}}}
return false;
}
BOOL func_131(Player plParam0) // Position - 0x4FA9{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==25;
return false;
}

int func_132(int iParam0) // Position - 0x5009{
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
case 81:
return 5;
case 82:
return 6;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
case 88:
return 8;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
case 101:
return 10;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
case 117:
return 12;
case 122:
return 13;
case 123:
return 14;
case 124:
return 15;
case 125:
return 16;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
case 145:
return 18;
case 146:
return 19;
case 147:
return 20;
case 148:
return 21;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
case 154:
return 23;
case 155:
case 156:
case 157:
case 158:
return 24;
case 159:
return 25;
case 160:
return 26;
case 161:
return 27;
}
return -1;
}
BOOL func_133() // Position - 0x54BD{
return IS_BIT_SET(Global_2683862.f_3, 4);
}
BOOL func_134(Player plParam0) // Position - 0x54CD{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==6;
return false;
}
BOOL func_135(Player plParam0) // Position - 0x5513{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==5;
return false;
}
BOOL func_136(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5572{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 0)) return true;
if(bParam1)if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 1)) return true;
if(bParam2)if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return true;
return false;
}
Entity func_137() // Position - 0x55D6{
if(ENTITY::DOES_ENTITY_EXIST(func_139())) return func_139();
return func_138();
}
Entity func_138() // Position - 0x55F4{
return Global_2621446.f_2;
}
Entity func_139() // Position - 0x5602{
return Global_2621446.f_3;
}
BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x5610{
if(fParam0==0f && fParam0.f_1==0f && fParam0.f_2==0f) return true;
return false;
}


float func_141(int iParam0, int iParam1) // Position - 0x563A{
switch (iParam0){
case 11:
return 40.5914f;
case 122:
return 50f;
case 13:
switch (iParam1){
case 0:
return 50f;
case 1:
return 50f;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return 50f;
case 1:
return 40.4324f;
case 2:
return 42.2709f;
case 3:
return 43.6444f;
case 4:
return 37.3862f;
case 5:
return 38.6952f;
case 6:
return 40.9091f;
default:
break;
}
break;
case 15:
switch (iParam1){
case 0:
return 40.5238f;
case 1:
return 47.4321f;
case 2:
return 38.6571f;
case 3:
return 44.0641f;
case 4:
return 39.2991f;
case 5:
return 31.7484f;
case 6:
return 35.6342f;
case 7:
return 36.0072f;
case 8:
return 42.5782f;
case 9:
return 37.4336f;
default:
break;
}
break;
case 14:
return 50f;
}
return 50f;
}


Vector3 func__142(int iParam0, int iParam1) // Position - 0x57B2{
switch (iParam0){
case 11:
return 1.3773f, 0f, -88.827f;
case 122:
return -18.1605f, 2.6167f, 113.0513f;
case 13:
switch (iParam1){
case 0:
return 2.3039f, 0f, -19.6903f;
case 1:
return -5.9341f, 0f, -151.6385f;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return -3.627f, 0f, 34.6935f;
case 1:
return -57.9221f, 0f, 58.3042f;
case 2:
return -15.4498f, 0f, 161.1361f;
case 3:
return -1.8386f, 0f, -135.0223f;
case 4:
return 0.5233f, 0f, -85.7377f;
case 5:
return -4.2364f, 0f, 173.6634f;
case 6:
return -3.74f, 0f, -30.7752f;
default:
break;
}
break;
case 15:
switch (iParam1){
case 0:
return 4.1441f, 0f, 15.6909f;
case 1:
return 5.4815f, 0f, -127.6695f;
case 2:
return -4.1889f, 0f, -15.0654f;
case 3:
return 16.4433f, 0f, -60.3988f;
case 4:
return 7.8225f, 0f, 39.2409f;
case 5:
return 2.0405f, 0f, -122.3459f;
case 6:
return 7.3382f, 0f, 157.6388f;
case 7:
return 6.481f, 0f, 172.9874f;
case 8:
return 14.0573f, 0f, 5.0622f;
case 9:
return -10.1444f, 0f, -131.4038f;
default:
break;
}
break;
case 14:
switch (iParam1){
case 0:
return 8.8196f, 0f, 57.5677f;
default:
break;
}
break;
}
return 0f, 0f, 0f;
}


Vector3 func__143(int iParam0, int iParam1) // Position - 0x59C0{
switch (iParam0){
case 11:
return -1297.8552f, 84.6478f, 54.6519f;
case 122:
return -855.7661f, -2645.376f, 100.8438f;
case 13:
switch (iParam1){
case 0:
return 13.4678f, -1097.7811f, 30.192f;
case 1:
return 816.6221f, -2160.6592f, 30.3139f;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return -1172.111f, -1641.5487f, 5.7494f;
case 1:
return 498.4758f, -226.4275f, 71.0569f;
case 2:
return -1217.632f, 364.4556f, 86.527f;
case 3:
return -2884.7537f, 32.9823f, 15.1123f;
case 4:
return -948.1036f, -1260.2487f, 8.228f;
case 5:
return -1614.2163f, 302.0945f, 66.0158f;
case 6:
return -1380.7211f, -107.9713f, 50.6998f;
default:
break;
}
break;
case 15:
switch (iParam1){
case 0:
return 903.8763f, -192.214f, 74.6401f;
case 1:
return 1419.5167f, -2216.0344f, 61.8467f;
case 2:
return -83.9713f, -1331.6351f, 29.8383f;
case 3:
return 364.6455f, -2441.8967f, 6.2607f;
case 4:
return 1237.2067f, 2715.9993f, 37.6424f;
case 5:
return 1019.1531f, 2680.4268f, 41.2254f;
case 6:
return 269.5203f, 2617.4104f, 44.7054f;
case 7:
return -194.2518f, 6295.6875f, 31.0991f;
case 8:
return 1682.7593f, 4954.088f, 42.6891f;
case 9:
return 2325.4468f, 3145.91f, 58.4284f;
default:
break;
}
break;
case 14:
switch (iParam1){
case 0:
return 1993.6974f, 3049.6675f, 47.7241f;
default:
break;
}
break;
}
return 0f, 0f, 0f;
}
BOOL func_144(int iParam0) // Position - 0x5C22{
switch (iParam0){
case 15:
case 14:
case 11:
case 13:
case 12:
case 122:
return true;
default:
}
return false;
}


void func_145(BOOL bParam0) // Position - 0x5C5A{
if(!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_146(false))) GRAPHICS::ANIMPOSTFX_PLAY(func_146(bParam0), 0, true);
return;
}


char* func_146(BOOL bParam0) // Position - 0x5C7B{
if(func_155(*Global_4718592.f_113724)) return "MenuMGIslandHeistIn";
if(bParam0 || func_116(134)) return "MenuMGHeistIn";
if(func_154()) return "MenuMGTournamentIn";
if(func_148(*Global_4718592.f_166301)) return "MenuMGRemixIn";
if(func_147(*Global_4718592.f_166301) && IS_BIT_SET(Global_4718592.f_167679.f_2808, 2)) return "MenuSurvivalAlienIn";
return "MenuMGSelectionIn";
}
BOOL func_147(int iParam0) // Position - 0x5D08{
return iParam0==998;
}
BOOL func_148(int iParam0) // Position - 0x5D16{
if(func_153(iParam0) || func_152(iParam0) || func_151(iParam0) || func_150(iParam0) || func_149(iParam0)) return true;
return false;
}
BOOL func_149(int iParam0) // Position - 0x5D5C{
return iParam0==64;
}
BOOL func_150(int iParam0) // Position - 0x5D69{
return iParam0==65;
}
BOOL func_151(int iParam0) // Position - 0x5D76{
return iParam0==69;
}
BOOL func_152(int iParam0) // Position - 0x5D83{
return iParam0==67;
}
BOOL func_153(int iParam0) // Position - 0x5D90{
return iParam0==68;
}
BOOL func_154() // Position - 0x5D9D{
return IS_BIT_SET(Global_2684799.f_1.f_2809, 12);
}
BOOL func_155(int iParam0) // Position - 0x5DB1{
int i;
if(iParam0==0) return false;
for (i=0;
i < 11;
i=i + 1){
if(Global_262145.f_29933[i]==iParam0) return true;
}
return false;
}
BOOL func_156() // Position - 0x5DEB{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 2);
}


void func_157(var uParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x5E02{
if(iParam1 !=0 && iParam1 !=3 || iParam2==1){
if(CAM::DOES_CAM_EXIST(*uParam0)){
CAM::SET_CAM_ACTIVE(*uParam0, false);
if(bParam4) CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
CAM::DESTROY_CAM(*uParam0, false);
*uParam0=0;
func_162();
if(func_92()) STREAMING::CLEAR_FOCUS();
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
if(Global_1574534==0 && iParam3==1){
func_76(true, 0);
func_76(true, 0);
}
if(!func_160())if(func_159() || func_158())if(!Global_2692733.f_7) HUD::BUSYSPINNER_OFF();
else HUD::BUSYSPINNER_OFF();
}}
return;
}
BOOL func_158() // Position - 0x5EB6{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_159() // Position - 0x5ECC{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}
BOOL func_160() // Position - 0x5EE2{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 0);
}


void func_161() // Position - 0x5EF9{
Global_2683862.f_717=1;
return;
}


void func_162() // Position - 0x5F09{
MISC::CLEAR_BIT(&Global_2683862, 15);
return;
}


void func_163() // Position - 0x5F1B{
MISC::CLEAR_BIT(&Global_2683862, 7);
return;
}


void func_164() // Position - 0x5F2C{
MISC::SET_BIT(&Global_2683862, 5);
func_165();
return;
}


void func_165() // Position - 0x5F41{
MISC::SET_BIT(&Global_2683862, 8);
return;
}


void func_166() // Position - 0x5F53{
MISC::CLEAR_BIT(&(Global_2683862.f_2), 14);
return;
}


void func_167(var uParam0) // Position - 0x5F67{
Global_2683862.f_42=uParam0;
return;
}


void func_168(char* sParam0) // Position - 0x5F77{
TEXT_LABEL_ASSIGN_STRING(&(Global_2683862.f_860), sParam0, 24);
if(func_169()) TEXT_LABEL_ASSIGN_STRING(&(Global_1048576.f_44), sParam0, 24);
return;
}
BOOL func_169() // Position - 0x5F9B{
return IS_BIT_SET(Global_2684799.f_1.f_2809, 5);
}


void func_170(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x5FAE{
if(IS_GAMER_HANDLE_VALID(uParam0)) Global_2684799.f_6591={
uParam0 
};
return;
}
BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x5FD4{
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}
struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x5FE4{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
return gamerHandle;
}


void func_173() // Position - 0x5FFB{
MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 12);
return;
}

int func_174() // Position - 0x6015{
if(_GET_BOSS_OF_LOCAL_PLAYER()==_INVALID_PLAYER_INDEX()) return 0;
return func_175(_GET_BOSS_OF_LOCAL_PLAYER());
}

int func_175(Player plParam0) // Position - 0x6034{
if(func_176(plParam0)==_INVALID_PLAYER_INDEX()) return 0;
return Global_1894573[plParam0 /*608*/].f_10.f_19;
}
Player func_176(Player plParam0) // Position - 0x605A{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10;
return _INVALID_PLAYER_INDEX();
}
Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x607D{
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


void func_178(int iParam0) // Position - 0x6092{
Global_2683862.f_9=iParam0;
return;
}


void func_179() // Position - 0x60A2{
Global_2683862.f_756=1;
return;
}
BOOL func_180() // Position - 0x60B2{
return Global_2683862.f_756;
}
BOOL func_181() // Position - 0x60C1{
return IS_BIT_SET(Global_2683862.f_2, 11);
}


void func_182() // Position - 0x60D2{
MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 29);
return;
}


void func_183() // Position - 0x60EC{
MISC::SET_BIT(&(Global_2683862.f_3), 15);
return;
}


void func_184(int iParam0) // Position - 0x6100{
Global_1057409=iParam0;
return;
}


void func_185() // Position - 0x610E{
MISC::SET_BIT(&(Global_2683862.f_3), 2);
return;
}


void func_186() // Position - 0x6121{
Global_2692733.f_1=0;
return;
}


void func_187(Player plParam0, int iParam1) // Position - 0x6130{
int int;
int=0;
if(DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(plParam0), "MPBitset")) int=DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(plParam0), "MPBitset");
MISC::SET_BIT(&int, iParam1);
DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(plParam0), "MPBitset", int);
return;
}


void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x6175{
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
if(func_199())if(bParam1) return;
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
if(!func_197()){
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
elseif(flag14 || !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_196()) ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
if(!flag14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17) NETWORK::FADE_OUT_LOCAL_PLAYER(false);
Global_2657589[plParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(flag){
func_193(false, 0, 0);
if(flag23) STREAMING::CLEAR_FOCUS();
}
if(!func_192(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
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
func_191();
func_190();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) !flag21;
STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
Global_2657589[plParam0 /*466*/].f_255=0;
if(!flag22) flag3=true;
if(Global_2635559.f_2681) Global_2635559.f_2681=0;
}else{
if(!func_192(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed)){
if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
if(!ENTITY::IS_ENTITY_ATTACHED(playerPed)){
if(!flag19) ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
if(!toggle) ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
}
if(func_189(*Global_4718592.f_166301)) ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
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
BOOL func_189(int iParam0) // Position - 0x6603{
return iParam0==17;
}


void func_190() // Position - 0x6610{
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


void func_191() // Position - 0x665D{
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
return;
}
BOOL func_192(Ped pedParam0) // Position - 0x669B{
int scriptTaskStatus;
if(PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true)){
return true;
}else{
scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
if(scriptTaskStatus==0) return true;
}
return false;
}


void func_193(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x66CC{
int num;
eViewModeContext i;
ENTITY::IS_ENTITY_DEAD(pedParam1, false);
if(bParam0==true)if(ENTITY::DOES_ENTITY_EXIST(pedParam1))if(PED::IS_PED_A_PLAYER(pedParam1))if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1))) num=1;
if(num==0){
if(iParam2==1){
if(bParam0==true){
func_195();
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


void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x679C{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, true);
return;
}


void func_195() // Position - 0x67B8{
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
BOOL func_196() // Position - 0x6810{
return IS_BIT_SET(Global_2621446, 3);
}
BOOL func_197() // Position - 0x681E{
if(func_198()==0) return true;
return false;
}

int func_198() // Position - 0x6833{
return Global_1574632.f_18;
}
BOOL func_199() // Position - 0x6841{
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1) return true;
return false;
}


void func_200(var uParam0, var uParam1, var uParam2) // Position - 0x6872{
Global_2694511={
uParam0 
};
return;
}


Vector3 func__201(Player plParam0) // Position - 0x6884{
Vector3 vector;
if(HUD::DOES_BLIP_EXIST(Global_2646729[plParam0])) vector={
func_259(Global_2646729[plParam0]) 
};
elseif(HUD::DOES_BLIP_EXIST(Global_2646729.f_33[plParam0]) && !plParam0==Global_2672505) vector={
func_259(Global_2646729.f_33[plParam0]) 
};
if(SYSTEM::VMAG(vector) > 0f) return vector;
return func_202(plParam0);
}


Vector3 func__202(Player plParam0) // Position - 0x68F8{
int num;
Vector3 vector;
int num2;
if(Global_2644534){
if(func_258(plParam0)){
vector={
func_257(plParam0) 
};
if(SYSTEM::VMAG(vector) > 0f) return vector;
}
if(Global_2657589[plParam0 /*466*/].f_73.f_11)if(SYSTEM::VMAG(Global_2657589[plParam0 /*466*/].f_73.f_12) > 0f) return Global_2657589[plParam0 /*466*/].f_73.f_12;
}
if(Global_1853910[plParam0 /*862*/].f_267.f_33 > 0){
vector={
func_255(func_256(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33)) 
};
if(SYSTEM::VMAG(vector) > 0f) return vector;
}else{
func_252(_GET_PLAYER_COORDS(plParam0), &num);
if(num > 0){
vector={
func_255(func_256(num)) 
};
if(SYSTEM::VMAG(vector) > 0f) return vector;
}}
if(func_251(plParam0)){
vector={
func_205(plParam0) 
};
if(SYSTEM::VMAG(vector) > 0f) return vector;
}
if(func_204(plParam0)){
num2=func_203(plParam0);
if(num2 > -1){
vector={
Global_1950108.f_542[num2 /*3*/] 
};
if(SYSTEM::VMAG(vector) > 0f) return vector;
}}
if(!Global_2644534){
if(func_258(plParam0)){
vector={
func_257(plParam0) 
};
if(SYSTEM::VMAG(vector) > 0f) return vector;
}
if(Global_2657589[plParam0 /*466*/].f_73.f_11)if(SYSTEM::VMAG(Global_2657589[plParam0 /*466*/].f_73.f_12) > 0f) return Global_2657589[plParam0 /*466*/].f_73.f_12;
}
return _GET_PLAYER_COORDS(plParam0);
}

int func_203(Player plParam0) // Position - 0x6ACB{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_2657589[plParam0 /*466*/].f_321.f_16;
return -1;
}
BOOL func_204(Player plParam0) // Position - 0x6AEE{
BOOL flag;
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true) || Global_2635559.f_2680){
flag=IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 1);
return flag;
}
return false;
}


Vector3 func__205(Player plParam0) // Position - 0x6B30{
Player player;
int num;
Player player2;
int num2;
Player player3;
int num3;
Player player4;
int num4;
Player player5;
int num5;
Player player6;
int num6;
Player player7;
int num7;
Player player8;
int num8;
Player player9;
plParam0==_INVALID_PLAYER_INDEX();
if(func_135(plParam0)){
player=func_250(plParam0);
if(player !=_INVALID_PLAYER_INDEX()){
if(!func_249(player)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_253[player /*3*/][1])) return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_253[player /*3*/][1], false);
else return Global_2657589[func_250(plParam0) /*466*/].f_321.f_12;
}else{
num=func_246(player);
if(!num==-1) return Global_1950108.f_542[num /*3*/];
}}}elseif(func_131(plParam0)){
player2=func_245(plParam0);
if(player2 !=_INVALID_PLAYER_INDEX()){
if(!func_244(player2)){
if(ENTITY::DOES_ENTITY_EXIST(Global_1968145[player2])) return ENTITY::GET_ENTITY_COORDS(Global_1968145[player2], false);
else return Global_2657589[func_250(plParam0) /*466*/].f_321.f_12;
}else{
num2=160;
if(!num2==-1) return Global_1950108.f_542[num2 /*3*/];
}}}elseif(func_134(plParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_308)) return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_308, false);
}elseif(func_243(plParam0) && !func_242(plParam0)){
player3=Global_2657589[plParam0 /*466*/].f_321.f_10;
if(player3 !=_INVALID_PLAYER_INDEX()){
num3=func_246(player3);
if(!num3==-1) return Global_1950108.f_542[num3 /*3*/];
}}elseif(func_241(plParam0) && !func_240(plParam0)){
if(func_251(plParam0) && func_239()) return Global_1950108.f_542[Global_2657589[plParam0 /*466*/].f_321.f_7 /*3*/];
player4=Global_2657589[plParam0 /*466*/].f_321.f_10;
if(player4 !=_INVALID_PLAYER_INDEX()){
if(func_238(player4)){
num4=func_235(player4);
if(num4 !=-1) return Global_1950108.f_542[num4 /*3*/];
}}}elseif(func_234(plParam0)){
player5=func_233(plParam0);
if(player5 !=_INVALID_PLAYER_INDEX()){
if(!func_232(player5)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_350[player5])) return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_350[player5], false);
else return Global_2657589[func_233(plParam0) /*466*/].f_321.f_20;
}else{
num5=func_235(player5);
if(!num5==-1) return Global_1950108.f_542[num5 /*3*/];
}}}elseif(func_231(plParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_310)) return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_310, false);
}elseif(func_230(plParam0) && !func_229(plParam0)){
player6=Global_2657589[plParam0 /*466*/].f_321.f_10;
if(player6 !=_INVALID_PLAYER_INDEX()){
if(func_228(player6)){
num6=func_225(player6);
if(num6 !=-1) return func_224(num6);
}}}elseif(func_223(plParam0) && !func_222(plParam0)){
player7=Global_2657589[plParam0 /*466*/].f_321.f_10;
if(player7 !=_INVALID_PLAYER_INDEX()){
if(func_221(player7)){
num7=func_218(player7);
if(num7 !=-1) return Global_1950108.f_542[num7 /*3*/];
}}}elseif(func_217(plParam0, false)){
player8=func_216(plParam0);
if(player8 !=_INVALID_PLAYER_INDEX()){
if(!func_215(player8)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_383[player8])) return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_383[player8], false);
else return Global_1894573[func_216(plParam0) /*608*/].f_590;
}else{
num8=func_218(player8);
if(!num8==-1) return Global_1950108.f_542[num8 /*3*/];
}}}elseif(func_214(plParam0)){
return -366.7f, -1909.6f, 20f;
}elseif(func_213(plParam0)){
player9=func_211(plParam0);
if(player9 !=_INVALID_PLAYER_INDEX())if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_416[player9])) return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_416[player9], false);
else return Global_1914091[player9 /*297*/].f_51;
else return 0f, 0f, 0f;
}
if(func_230(plParam0)) return func_224(Global_2657589[plParam0 /*466*/].f_321.f_7);
if(func_206(plParam0)) return 965.8165f, 42.25042f, 122.1267f;
return Global_1950108.f_542[Global_2657589[plParam0 /*466*/].f_321.f_7 /*3*/];
}
BOOL func_206(Player plParam0) // Position - 0x701F{
if(func_210(plParam0) || func_209(plParam0) || func_208(plParam0) || func_207(plParam0)) return true;
return false;
}
BOOL func_207(Player plParam0) // Position - 0x7059{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==19;
return false;
}
BOOL func_208(Player plParam0) // Position - 0x70A0{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==15;
return false;
}
BOOL func_209(Player plParam0) // Position - 0x70E7{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==16;
return false;
}
BOOL func_210(Player plParam0) // Position - 0x712E{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==14;
return false;
}
Player func_211(Player plParam0) // Position - 0x7175{
int num;
if(plParam0==_INVALID_PLAYER_INDEX()) return plParam0;
if(func_212(plParam0) !=-1){
num=func_132(func_212(plParam0));
if(num==2 || num==1 || num==0 || num==25){
if(_IS_PLAYER_IN_AN_ORGANIZATION(plParam0, false)) return func_176(plParam0);
return plParam0;
}elseif(num==3){
return _INVALID_PLAYER_INDEX();
}
return Global_2657589[plParam0 /*466*/].f_321.f_10;
}
return _INVALID_PLAYER_INDEX();
}

int func_212(Player plParam0) // Position - 0x7204{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return Global_2657589[plParam0 /*466*/].f_321.f_7;
elseif(Global_1575060 || Global_2635559.f_2680 && plParam0==PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false)) return Global_2657589[plParam0 /*466*/].f_321.f_7;
return -1;
}
BOOL func_213(Player plParam0) // Position - 0x7273{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==20;
elseif(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_1575060 && plParam0==PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false)) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==20;
return false;
}
BOOL func_214(Player plParam0) // Position - 0x730A{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==13;
return false;
}
BOOL func_215(Player plParam0) // Position - 0x7351{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_3, 4);
return false;
}
Player func_216(Player plParam0) // Position - 0x7376{
if(plParam0==_INVALID_PLAYER_INDEX()) return plParam0;
return Global_2657589[plParam0 /*466*/].f_321.f_10;
}
BOOL func_217(Player plParam0, BOOL bParam1) // Position - 0x739A{
Vehicle vehiclePedIsIn;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("terbyte")) return true;
}}
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==12;
return false;
}

int func_218(Player plParam0) // Position - 0x7428{
int num;
if(plParam0 !=_INVALID_PLAYER_INDEX()){
num=func_220(plParam0);
if(num !=0) return func_219(num);
}
return -1;
}

int func_219(int iParam0) // Position - 0x7451{
switch (iParam0){
case 1:
return 102;
case 2:
return 103;
case 3:
return 104;
case 4:
return 105;
case 5:
return 106;
case 6:
return 107;
case 7:
return 108;
case 8:
return 109;
case 9:
return 110;
case 10:
return 111;
default:
}
return -1;
}

int func_220(Player plParam0) // Position - 0x74CF{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1853910[plParam0 /*862*/].f_267.f_310;
return 0;
}
BOOL func_221(Player plParam0) // Position - 0x74F3{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1853910[plParam0 /*862*/].f_267.f_310 !=0) return true;
return false;
}
BOOL func_222(Player plParam0) // Position - 0x751C{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(func_223(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_223(Player plParam0) // Position - 0x7551{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==11;
return false;
}


Vector3 func__224(int iParam0) // Position - 0x7598{
switch (iParam0){
case 102:
return 750.5f, -1322.3f, 26.2802f;
case 103:
return 331.9f, -974.9f, 30f;
case 104:
return -146f, -1270f, 28.3088f;
case 105:
return -17.7f, 225.7f, 106.7566f;
case 106:
return 894.4f, -2106.4f, 29.4768f;
case 107:
return -668f, -2431.5f, 12.9444f;
case 108:
return 213.4f, -3166.6f, 4.7903f;
case 109:
return 366.6f, 237.6f, 104.9f;
case 110:
return -1275.3f, -666.8f, 25.6332f;
case 111:
return -1188.8f, -1156.9f, 4.6582f;
default:
}
return Global_1950108.f_542[iParam0 /*3*/];
}

int func_225(Player plParam0) // Position - 0x76A4{
int num;
if(plParam0 !=_INVALID_PLAYER_INDEX()){
num=func_227(plParam0);
if(num !=0) return func_226(num);
}
return -1;
}

int func_226(int iParam0) // Position - 0x76CD{
switch (iParam0){
case 1:
return 102;
case 2:
return 103;
case 3:
return 104;
case 4:
return 105;
case 5:
return 106;
case 6:
return 107;
case 7:
return 108;
case 8:
return 109;
case 9:
return 110;
case 10:
return 111;
default:
}
return -1;
}

int func_227(Player plParam0) // Position - 0x774B{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1853910[plParam0 /*862*/].f_267.f_353;
return 0;
}
BOOL func_228(Player plParam0) // Position - 0x776F{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1853910[plParam0 /*862*/].f_267.f_353 !=0;
return false;
}
BOOL func_229(Player plParam0) // Position - 0x7795{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(func_230(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_230(Player plParam0) // Position - 0x77CA{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==11;
return false;
}
BOOL func_231(Player plParam0) // Position - 0x7811{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==10;
return false;
}
BOOL func_232(Player plParam0) // Position - 0x7858{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_2, 6);
return false;
}
Player func_233(Player plParam0) // Position - 0x787D{
if(plParam0==_INVALID_PLAYER_INDEX()) return plParam0;
return Global_2657589[plParam0 /*466*/].f_321.f_10;
}
BOOL func_234(Player plParam0) // Position - 0x78A1{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==8;
return false;
}

int func_235(Player plParam0) // Position - 0x7901{
int num;
if(plParam0==_INVALID_PLAYER_INDEX()) return -1;
num=func_237(plParam0);
if(!num==0) return func_236(num);
return -1;
}

int func_236(int iParam0) // Position - 0x7930{
switch (iParam0){
case 1:
return 89;
case 2:
return 90;
case 3:
return 91;
case 4:
return 92;
case 5:
return 93;
case 6:
return 94;
case 7:
return 95;
case 8:
return 96;
case 9:
return 97;
}
return -1;
}

int func_237(Player plParam0) // Position - 0x79BE{
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
return Global_1853910[plParam0 /*862*/].f_267.f_300;
}
BOOL func_238(Player plParam0) // Position - 0x79E2{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1853910[plParam0 /*862*/].f_267.f_300 !=0;
return false;
}
BOOL func_239() // Position - 0x7A08{
if(IS_BIT_SET(Global_1950108.f_2, 13) || Global_1950108.f_3347) return 1;
return 0;
}
BOOL func_240(Player plParam0) // Position - 0x7A2E{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(func_241(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_241(Player plParam0) // Position - 0x7A67{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==9;
return false;
}
BOOL func_242(Player plParam0) // Position - 0x7AAE{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(func_243(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_243(Player plParam0) // Position - 0x7AE7{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_132(Global_2657589[plParam0 /*466*/].f_321.f_7)==4;
return false;
}
BOOL func_244(Player plParam0) // Position - 0x7B2D{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_5, 26);
return false;
}
Player func_245(Player plParam0) // Position - 0x7B53{
if(plParam0==_INVALID_PLAYER_INDEX()) return plParam0;
return Global_2657589[plParam0 /*466*/].f_321.f_10;
}

int func_246(Player plParam0) // Position - 0x7B77{
int num;
if(plParam0==_INVALID_PLAYER_INDEX()) return -1;
num=func_248(plParam0);
if(!num==0) return func_247(num);
return -1;
}

int func_247(int iParam0) // Position - 0x7BA6{
switch (iParam0){
case 1:
return 22;
case 2:
return 23;
case 3:
return 24;
case 4:
return 25;
case 5:
return 26;
case 6:
return 27;
case 7:
return 28;
case 8:
return 29;
case 9:
return 30;
case 10:
return 31;
case 11:
return 32;
case 12:
return 33;
case 13:
return 34;
case 14:
return 35;
case 15:
return 36;
case 16:
return 37;
case 17:
return 38;
case 18:
return 39;
case 19:
return 40;
case 20:
return 41;
case 32:
return 159;
case 21:
return 70;
case 22:
return 71;
case 23:
return 72;
case 24:
return 73;
case 25:
return 74;
case 26:
return 75;
case 27:
return 76;
case 28:
return 77;
case 29:
return 78;
case 30:
return 79;
case 31:
return 80;
}
return -1;
}

int func_248(Player plParam0) // Position - 0x7D76{
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
return Global_1853910[plParam0 /*862*/].f_267.f_193[5 /*13*/];
}
BOOL func_249(Player plParam0) // Position - 0x7D9C{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 6);
return false;
}
Player func_250(Player plParam0) // Position - 0x7DBF{
if(plParam0==_INVALID_PLAYER_INDEX()) return plParam0;
return Global_2657589[plParam0 /*466*/].f_321.f_10;
}
BOOL func_251(Player plParam0) // Position - 0x7DE3{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1;
elseif(Global_1575060 && plParam0==PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false)) return Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1;
return false;
}


void func_252(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7E49{
int num;
int num2;
num=1;
num2=7;
while (num <=num2){
if(func_253(uParam0, num, 0)){
*uParam3=num;
return;
}
num=num + 1;
}
num=34;
num2=43;
while (num <=num2){
if(func_253(uParam0, num, 0)){
*uParam3=num;
return;
}
num=num + 1;
}
num=61;
num2=65;
while (num <=num2){
if(func_253(uParam0, num, 0)){
*uParam3=num;
return;
}
num=num + 1;
}
num=8;
if(func_253(uParam0, num, 0)){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 > 0) *uParam3=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
elseif(Global_2635145.f_1 > 0) *uParam3=Global_2635145.f_1;
else *uParam3=num;
return;
}
num=17;
if(func_253(uParam0, num, 0)){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 > 0) *uParam3=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
elseif(Global_2635145.f_1 > 0) *uParam3=Global_2635145.f_1;
else *uParam3=num;
return;
}
return;
}
BOOL func_253(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x7F8D{
int i;
var unk;
var unk11;
int j;
if(iParam3 !=999){
unk=3;
unk11=3;
for (j=0;
j < 3;
j=j + 1){
if(Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_2 > Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_3.f_2){
unk[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/] 
};
unk11[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_3 
};
}else{
unk[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_3 
};
unk11[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/] 
};
}
unk[j /*3*/].f_2=unk[j /*3*/].f_2 + iParam4;
unk11[j /*3*/].f_2=unk11[j /*3*/].f_2 - iParam4;
}
if(Global_1312228[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk11[0 /*3*/], unk[0 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true) || Global_1312228[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk11[1 /*3*/], unk[1 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true) || Global_1312228[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk11[2 /*3*/], unk[2 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)) return true;
}else{
for (i=1;
i <=7;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=34;
i <=43;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=61;
i <=65;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=73;
i <=76;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=77;
i <=82;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=83;
i <=85;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=87;
i <=90;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=91;
i <=102;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
for (i=103;
i <=113;
i=i + 1){
if(func_253(vParam0, i, iParam4)) return true;
}
if(func_253(vParam0, 8, iParam4)) return true;
if(func_253(vParam0, 17, iParam4)) return true;
}
return false;
}
Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x82E4{
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}


Vector3 func__255(int iParam0) // Position - 0x82F7{
var unk;
switch (iParam0){
case 1:
unk={
-773.4775f, 310.6321f, 84.6981f 
};
break;
case 2:
unk={
-252.5713f, -949.9199f, 30.221f 
};
break;
case 3:
unk={
-1443.0938f, -544.7684f, 33.7424f 
};
break;
case 4:
unk={
-913.85f, -455.1392f, 38.5999f 
};
break;
case 5:
unk={
-47.3145f, -585.9766f, 36.9593f 
};
break;
case 6:
unk={
-932.7474f, -383.9246f, 37.9613f 
};
break;
case 7:
unk={
-619.1315f, 37.8841f, 42.5883f 
};
break;
case 8:
unk={
284.9614f, -159.9891f, 63.6221f 
};
break;
case 9:
unk={
2.8889f, 35.7762f, 70.5349f 
};
break;
case 10:
unk={
9.74f, 84.6906f, 77.3975f 
};
break;
case 11:
unk={
-512.1465f, 111.2223f, 62.351f 
};
break;
case 12:
unk={
-197.3405f, 88.1053f, 68.7422f 
};
break;
case 13:
unk={
-628.3212f, 165.8364f, 60.1651f 
};
break;
case 14:
unk={
-973.3757f, -1429.4247f, 6.6791f 
};
break;
case 15:
unk={
-829.1362f, -855.0104f, 18.6297f 
};
break;
case 16:
unk={
-757.5739f, -755.5591f, 25.5697f 
};
break;
case 17:
unk={
-45.1289f, -57.0925f, 62.2531f 
};
break;
case 18:
unk={
-206.7293f, 184.142f, 79.3279f 
};
break;
case 19:
unk={
-811.7045f, -984.1961f, 13.1538f 
};
break;
case 20:
unk={
-664.0032f, -853.6744f, 23.4325f 
};
break;
case 21:
unk={
-1534.0247f, -324.5247f, 46.5237f 
};
break;
case 22:
unk={
-1561.381f, -412.1974f, 41.389f 
};
break;
case 23:
unk={
-1608.8514f, -429.184f, 39.439f 
};
break;
case 24:
unk={
964.3583f, -1034.1991f, 39.8303f 
};
break;
case 25:
unk={
894.2868f, -885.5679f, 26.1212f 
};
break;
case 26:
unk={
821.1741f, -924.1658f, 25.1998f 
};
break;
case 27:
unk={
759.7933f, -759.8209f, 25.759f 
};
break;
case 28:
unk={
844.7289f, -1164.0997f, 24.2681f 
};
break;
case 29:
unk={
526.2521f, -1604.613f, 28.2625f 
};
break;
case 30:
unk={
572.0462f, -1570.7357f, 27.4904f 
};
break;
case 31:
unk={
722.2852f, -1190.6168f, 23.282f 
};
break;
case 32:
unk={
497.6212f, -1494.0845f, 28.2893f 
};
break;
case 33:
unk={
480.3127f, -1549.9368f, 28.2828f 
};
break;
case 34:
unk={
-68.702f, 6426.148f, 30.439f 
};
break;
case 35:
unk={
-247.4374f, 6240.294f, 30.4892f 
};
break;
case 36:
unk={
2554.1653f, 4668.059f, 33.0233f 
};
break;
case 37:
unk={
2461.2202f, 1589.2552f, 32.0443f 
};
break;
case 38:
unk={
-2203.335f, 4244.4272f, 47.3305f 
};
break;
case 39:
unk={
218.0665f, 2601.8171f, 44.7668f 
};
break;
case 40:
unk={
186.1719f, 2786.3425f, 45.0144f 
};
break;
case 41:
unk={
642.0746f, 2791.7295f, 40.9795f 
};
break;
case 42:
unk={
-1130.9376f, 2701.1333f, 17.8004f 
};
break;
case 43:
unk={
-10.944f, -1646.7601f, 28.3125f 
};
break;
case 44:
unk={
1024.2628f, -2398.4036f, 29.1261f 
};
break;
case 45:
unk={
870.8577f, -2232.3228f, 29.5508f 
};
break;
case 46:
unk={
-663.8541f, -2380.389f, 12.9446f 
};
break;
case 47:
unk={
-1088.6158f, -2235.0977f, 12.2182f 
};
break;
case 48:
unk={
-342.5126f, -1468.6746f, 29.6107f 
};
break;
case 49:
unk={
-1241.5399f, -259.8841f, 37.9445f 
};
break;
case 50:
unk={
899.8448f, -147.528f, 75.5674f 
};
break;
case 51:
unk={
-1405.4109f, 526.8572f, 122.8361f 
};
break;
case 52:
unk={
1341.5518f, -1578.0366f, 53.4443f 
};
break;
case 53:
unk={
-105.7029f, 6528.539f, 29.1719f 
};
break;
case 54:
unk={
-302.3985f, 6327.434f, 31.8918f 
};
break;
case 55:
unk={
-15.258f, 6557.378f, 32.2454f 
};
break;
case 56:
unk={
1899.6729f, 3773.1785f, 31.8829f 
};
break;
case 57:
unk={
1662.1211f, 4776.317f, 41.0075f 
};
break;
case 58:
unk={
-178.2278f, 490.886f, 134.0466f 
};
break;
case 59:
unk={
339.5743f, 439.7083f, 145.5896f 
};
break;
case 60:
unk={
-764.6163f, 618.3144f, 137.5536f 
};
break;
case 61:
unk={
-679.5461f, 592.5162f, 139.693f 
};
break;
case 62:
unk={
124.4571f, 551.8877f, 181.658f 
};
break;
case 63:
unk={
-563.7349f, 689.099f, 151.6596f 
};
break;
case 64:
unk={
-743.0927f, 590.0371f, 140.9221f 
};
break;
case 65:
unk={
-861.252f, 684.8923f, 146.2643f 
};
break;
case 66:
unk={
-1292.4557f, 440.9454f, 93.7572f 
};
break;
case 67:
unk={
369.5891f, 417.4813f, 136.8344f 
};
break;
case 68:
unk={
-1581.5015f, -558.2578f, 33.9528f 
};
break;
case 69:
unk={
-1379.5457f, -499.1783f, 32.1574f 
};
break;
case 70:
unk={
-117.5296f, -605.7157f, 35.2857f 
};
break;
case 71:
unk={
-67.0943f, -802.4415f, 43.2273f 
};
break;
case 72:
unk={
254.1892f, -1809.1831f, 26.1805f 
};
break;
case 73:
unk={
-1472.2778f, -920.0677f, 8.9683f 
};
break;
case 74:
unk={
38.9478f, -1026.6288f, 28.6354f 
};
break;
case 75:
unk={
46.903f, 2789.8247f, 57.1124f 
};
break;
case 76:
unk={
-342.3246f, 6065.3164f, 30.4895f 
};
break;
case 77:
unk={
1737.8784f, 3709.0876f, 33.1348f 
};
break;
case 78:
unk={
939.7161f, -1459.2039f, 30.467f 
};
break;
case 79:
unk={
189.7624f, 309.7488f, 104.4714f 
};
break;
case 80:
unk={
-21.9593f, -191.3618f, 51.5599f 
};
break;
case 81:
unk={
2472.2197f, 4110.4927f, 36.9629f 
};
break;
case 82:
unk={
-39.3286f, 6420.6025f, 30.7017f 
};
break;
case 83:
unk={
-1134.762f, -1568.848f, 3.4077f 
};
break;
}
return unk;
}

int func_256(int iParam0) // Position - 0x8C1E{
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
case 61:
case 83:
case 84:
case 85:
return 1;
case 5:
case 6:
return 2;
case 7:
case 34:
case 62:
return 3;
case 35:
case 36:
case 37:
return 4;
case 38:
case 39:
case 65:
return 5;
case 40:
case 41:
case 63:
return 6;
case 42:
case 43:
case 64:
return 7;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 11:
return 11;
case 12:
return 12;
case 13:
return 13;
case 14:
return 14;
case 15:
return 15;
case 16:
return 16;
case 17:
return 17;
case 18:
return 18;
case 19:
return 19;
case 20:
return 20;
case 21:
return 21;
case 22:
return 22;
case 23:
return 23;
case 24:
return 24;
case 25:
return 25;
case 26:
return 26;
case 27:
return 27;
case 28:
return 28;
case 29:
return 29;
case 30:
return 30;
case 31:
return 31;
case 32:
return 32;
case 33:
return 33;
case 44:
return 34;
case 45:
return 35;
case 46:
return 36;
case 47:
return 37;
case 48:
return 38;
case 49:
return 39;
case 50:
return 40;
case 51:
return 41;
case 52:
return 42;
case 53:
return 43;
case 54:
return 44;
case 55:
return 45;
case 56:
return 46;
case 57:
return 47;
case 58:
return 48;
case 59:
return 49;
case 60:
return 50;
case 66:
return 51;
case 67:
return 52;
case 68:
return 53;
case 69:
return 54;
case 70:
return 55;
case 71:
return 56;
case 72:
return 57;
case 73:
return 58;
case 74:
return 59;
case 75:
return 60;
case 76:
return 61;
case 77:
return 62;
case 78:
return 63;
case 79:
return 64;
case 80:
return 65;
case 81:
return 66;
case 82:
return 67;
case 87:
case 103:
case 104:
case 105:
return 68;
case 88:
case 106:
case 107:
case 108:
return 69;
case 89:
case 109:
case 110:
case 111:
return 70;
case 90:
case 112:
case 113:
case 114:
return 71;
case 91:
return 72;
case 92:
return 73;
case 93:
return 74;
case 94:
return 75;
case 95:
return 76;
case 96:
return 77;
case 97:
return 78;
case 98:
return 79;
case 99:
return 80;
case 100:
return 81;
case 101:
return 82;
case 102:
return 83;
}
return 0;
}


Vector3 func__257(Player plParam0) // Position - 0x9165{
return Global_2657589[plParam0 /*466*/].f_73.f_7;
}
BOOL func_258(Player plParam0) // Position - 0x917C{
if(Global_2657589[plParam0 /*466*/].f_73.f_6 !=-1) return true;
return false;
}


Vector3 func__259(Blip blParam0) // Position - 0x919A{
Entity blipInfoIdEntityIndex;
switch (HUD::GET_BLIP_INFO_ID_TYPE(blParam0)){
case 1:
case 2:
case 3:
blipInfoIdEntityIndex=HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(blParam0);
if(ENTITY::DOES_ENTITY_EXIST(blipInfoIdEntityIndex)) return ENTITY::GET_ENTITY_COORDS(blipInfoIdEntityIndex, false);
break;
}
return HUD::GET_BLIP_COORDS(blParam0);
}

int func_260(int iParam0) // Position - 0x91E3{
int num;
int num2;
num=func_261(iParam0);
if(num !=-1){
num2=unk_0x0546ACFECA98380F(num);
if(num2 !=-1) return num2;
}
return -1;
}

int func_261(int iParam0) // Position - 0x920D{
switch (iParam0){
case 0:
return Global_262145.f_31715[0];
case 4:
return Global_262145.f_31715[1];
case 7:
return Global_262145.f_31715[2];
case 10:
return Global_262145.f_31715[3];
case 11:
return Global_262145.f_31715[4];
case 12:
return Global_262145.f_31715[5];
default:
}
return -1;
}


void func_262(int iParam0) // Position - 0x928F{
int num;
num=0;
if(iParam0==209) num=1;
elseif(iParam0==210) num=2;
func_67(false);
func_39(iLocal_134, num, -1);
func_263(num);
func_326(3);
if(func_43(iLocal_134, num)) func_26("FIX_APP_MIS_COM" /*COMPLETED*/, false);
else func_26("FAPP_ACCEPT", true);
return;
}


void func_263(int iParam0) // Position - 0x92E8{
iLocal_133=iParam0;
return;
}


void func_264(int iParam0) // Position - 0x92F4{
int num;
int num2;
int num3;
char* str;
char* str2;
num=func_59(iParam0);
num2=func_58(num);
func_57(num);
if(func_54(true)==num || func_51(num2, false)){
func_56(num);
if(func_51(num2, false)){
func_48(num);
func_26("FIX_APP_MIS_COM" /*COMPLETED*/, false);
func_47(true);
func_326(3);
}else{
num3=func_271(num);
if(num3==-1){
func_326(2);
}else{
func_39(num, num3, -1);
func_263(num3);
func_67(false);
func_270(num3);
func_26("FAPP_ACCEPT", true);
func_326(3);
}}}elseif(func_54(true)==-1){
str=func_269(num);
str2=func_268(num);
func_265(str, str2, "WHOUSE_CONF" /*Confirm*/, "WHOUSE_CANC" /*Cancel*/, false, true, 2, -1, -1, 0, 0);
func_70(202);
func_56(num);
}else{
_DISPLAY_HELP_TEXT("FXR_VIP_STRAND2" /*Unavailable. Only one investigation can be active at a time.*/, -1);
func_326(2);
}
return;
}


void func_265(char* sParam0, char* sParam1, char* sParam2, char* sParam3, BOOL bParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, const char* sParam9, const char* sParam10) // Position - 0x93E2{
sLocal_146="SHOW_OVERLAY_TWO_BUTTON";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam3)) sLocal_146="SHOW_OVERLAY_ONE_BUTTON";
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, sLocal_146);
func_27(sParam0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
if(iParam7 !=-1) HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
if(iParam8 !=-1) HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
}elseif(iParam7 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_27(sParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)) func_27(sParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(bParam5) func_326(3);
elseif(bParam4) func_326(6);
MISC::SET_BIT(&iLocal_131, 2);
func_267(iParam6);
func_266();
return;
}


void func_266() // Position - 0x94A1{
if(IS_BIT_SET(iLocal_131, 1)){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
sLocal_145="";
MISC::CLEAR_BIT(&iLocal_131, 1);
}
return;
}


void func_267(int iParam0) // Position - 0x94C0{
if(iLocal_148 !=iParam0) iLocal_148=iParam0;
return;
}


char* func_268(int iParam0) // Position - 0x94D3{
switch (iParam0){
case 0:
return "FIX_APP_DL1_D" /*Investigate the data signal last detected at a nightclub owned by the Los Santos Triads?*/;
case 1:
return "FIX_APP_DL2_D" /*Investigate the data signal last detected at the Pacific Bluffs Country Club?*/;
case 2:
return "FIX_APP_DL3_D" /*Investigate the data signal last detected in Davis?*/;
}
return "";
}


char* func_269(int iParam0) // Position - 0x9514{
switch (iParam0){
case 0:
return "FIX_APP_DL1_T" /*NIGHTLIFE LEAK*/;
case 1:
return "FIX_APP_DL2_T" /*HIGH SOCIETY LEAK*/;
case 2:
return "FIX_APP_DL3_T" /*SOUTH CENTRAL LEAK*/;
}
return "";
}


void func_270(int iParam0) // Position - 0x9555{
int num;
switch (iParam0){
case 0:
num=208;
break;
case 1:
num=209;
break;
case 2:
num=210;
break;
}
func_70(num);
return;
}

int func_271(int iParam0) // Position - 0x9591{
if(iParam0 !=-1)if(func_43(iParam0, 2)) return -1;
elseif(func_43(iParam0, 1))if(!func_49(iParam0, 2)) return 2;
elseif(func_43(iParam0, 0))if(!func_49(iParam0, 1)) return 1;
else return 0;
return -1;
}


void func_272() // Position - 0x95ED{
char* str;
char* str2;
char* str3;
char* str4;
char* str5;
char* str6;
char* str7;
char* str8;
char* str9;
BOOL value;
BOOL value2;
char* str10;
char* str11;
char* str12;
BOOL value3;
BOOL value4;
char* str13;
char* str14;
char* str15;
BOOL value5;
BOOL value6;
BOOL value7;
int num;
int num2;
func_279(2);
str=func_278();
str2=func_66();
str3=func_65();
str4=func_277();
str5=func_64();
str6=func_63();
str7="FIX_APP_DL1_T" /*NIGHTLIFE LEAK*/;
str8=func_42(0);
str9="MISSION_VINEWOOD";
value=func_276(0);
value2=func_51(4, false);
str10="FIX_APP_DL2_T" /*HIGH SOCIETY LEAK*/;
str11=func_42(1);
str12="MISSION_RICHMAN_LEAK";
value3=func_276(1);
value4=func_51(7, false);
str13="FIX_APP_DL3_T" /*SOUTH CENTRAL LEAK*/;
str14=func_42(2);
str15="MISSION_SOUTH_CENTRAL";
value5=func_276(2);
value6=func_51(10, false);
value7=func_274(false);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SHOW_DATA_LEAK_SCREEN");
func_27(str7);
func_27(str8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str9);
func_27(str10);
func_27(str11);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str12);
func_27(str13);
func_27(str14);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str15);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value7);
func_27(str);
func_27(str2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str3);
func_27(str4);
func_27(str5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
num=func_54(true);
num2=func_271(num);
switch (num){
case -1:
func_33();
if(!func_51(4, false)){
func_39(0, 2, 0);
func_57(0);
func_70(205);
}elseif(!func_51(7, false)){
func_39(1, 2, 0);
func_57(1);
func_70(206);
}else{
func_39(2, 2, 0);
func_57(2);
func_70(207);
}
func_67(true);
func_26("FAPP_ACCEPT", false);
break;
default:
func_48(num);
func_47(true);
if(num2 !=-1){
func_39(num, num2, -1);
func_263(num2);
func_67(false);
func_57(num);
func_270(num2);
}else{
func_39(num, 2, 0);
func_70(func_273(num));
func_67(true);
func_57(num);
if(func_43(num, 2)) func_26("FIX_APP_MIS_COM" /*COMPLETED*/, false);
else func_26("FAPP_ACCEPT", false);
}
func_56(num);
break;
}
return;
}

int func_273(int iParam0) // Position - 0x9816{
switch (iParam0){
case 0:
return 205;
case 1:
return 206;
case 2:
return 207;
}
return 216;
}
BOOL func_274(BOOL bParam0) // Position - 0x9851{
if(bParam0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_FIXER_GENERAL_BS, -1, 0), 2);
return func_275(PLAYER::PLAYER_ID());
}
BOOL func_275(Player plParam0) // Position - 0x9874{
if(plParam0 !=-1) return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_27, 2);
return false;
}
BOOL func_276(int iParam0) // Position - 0x9892{
if(func_54(true)==-1) return false;
if(func_54(true) !=iParam0){
switch (iParam0){
case 0:
return !func_51(4, false);
case 1:
return !func_51(7, false);
case 2:
return !func_51(10, false);
}}
return false;
}


char* func_277() // Position - 0x98F3{
return "FIX_APP_DATA_R2_T" /*REPLAY:
DATA RECOVERY*/;
}


char* func_278() // Position - 0x98FF{
return "FIX_APP_DATA_R1_T" /*REPLAY:
THE MEET*/;
}


void func_279(int iParam0) // Position - 0x990B{
if(iLocal_149 !=iParam0) iLocal_149=iParam0;
if(iParam0 !=3) MISC::CLEAR_BIT(&iLocal_131, 14);
return;
}
BOOL func_280(Player plParam0) // Position - 0x992C{
if(plParam0 !=-1) return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_27, 5);
return false;
}


void func_281() // Position - 0x994A{
char* str;
char* str2;
char* str3;
char* str4;
char* str5;
int value;
BOOL value2;
str="FIX_APP_VIP_SETUP_T" /*SETUP:
DATA RECOVERY*/;
str2="FIX_APP_VIP_SETUP_D" /*Infiltrate the FIB headquarters and retrieve any data that could lead to Dr. Dre's stolen phone.*/;
str3="SETUP_DATA_RECOVERY";
str4="";
str5="FAPP_ACCEPT";
value=0;
value2=false;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SHOW_DATA_RECOVERY_SCREEN");
func_27(str);
func_27(str2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
func_27(str4);
func_27(str5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_279(4);
func_70(222);
return;
}
BOOL func_282(BOOL bParam0) // Position - 0x99B7{
if(bParam0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_FIXER_GENERAL_BS, -1, 0), 1);
return func_283(PLAYER::PLAYER_ID());
}
BOOL func_283(Player plParam0) // Position - 0x99DA{
if(plParam0 !=-1) return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_27, 1);
return false;
}
BOOL func_284(BOOL bParam0) // Position - 0x99F8{
if(bParam0){
if(NETWORK::GET_CLOUD_TIME_AS_INT() < _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_STORY_COOLDOWN, -1, 0)) return true;
return false;
}
return func_285(PLAYER::PLAYER_ID());
}
BOOL func_285(Player plParam0) // Position - 0x9A25{
if(plParam0 !=-1)if(NETWORK::GET_CLOUD_TIME_AS_INT() < Global_1981514[plParam0 /*60*/].f_27.f_5) return 1;
return 0;
}
BOOL func_286() // Position - 0x9A4B{
return func_287(28257, -1);
}
BOOL func_287(int iParam0, int iParam1) // Position - 0x9A5B{
if(iParam1==-1) iParam1=func_11();
return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}
BOOL func_288(BOOL bParam0) // Position - 0x9A77{
if(bParam0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_FIXER_GENERAL_BS, -1, 0), 0);
return func_289(PLAYER::PLAYER_ID());
}
BOOL func_289(Player plParam0) // Position - 0x9A9A{
if(plParam0 !=-1) return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_27, 0);
return false;
}
BOOL func_290(BOOL bParam0) // Position - 0x9AB8{
if(bParam0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_FIXER_GENERAL_BS, -1, 0), 4);
return func_291(PLAYER::PLAYER_ID());
}
BOOL func_291(Player plParam0) // Position - 0x9ADB{
if(plParam0 !=-1) return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_27, 4);
return false;
}


void func_292(int iParam0) // Position - 0x9AF9{
int num;
num=0;
if(iParam0==212) num=1;
elseif(iParam0==213) num=2;
func_293(iParam0);
func_303(num);
func_296(true, num);
func_326(3);
return;
}


void func_293(int iParam0) // Position - 0x9B33{
switch (iParam0){
case 211:
iLocal_132=0;
break;
case 212:
iLocal_132=1;
break;
case 213:
iLocal_132=2;
break;
}
return;
}


void func_294(int iParam0) // Position - 0x9B66{
Global_75698=1;
Global_1949965=1;
func_2(263, func_295(PLAYER::PLAYER_ID(), iParam0), -1);
func_419(true, true);
return;
}

int func_295(Player plParam0, int iParam1) // Position - 0x9B90{
if(plParam0 !=-1)if(iParam1 >=0 && iParam1 < 3) return Global_1981514[plParam0 /*60*/].f_27.f_17[iParam1 /*3*/];
return -1;
}


void func_296(BOOL bParam0, int iParam1) // Position - 0x9BC5{
int num;
char* str;
int value;
BOOL value2;
char* str2;
int value3;
BOOL value4;
char* str3;
int value5;
BOOL value6;
num=func_295(PLAYER::PLAYER_ID(), iParam1);
str=func_302(num);
value=func_300(num, false);
value2=bParam0;
str2="FAPP_CONTRACTS_COMPLETE";
value3=func_298(false);
value4=true;
str3="FAPP_EARNINGS";
value5=func_297(PLAYER::PLAYER_ID());
value6=true;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "UPDATE_SECURITY_CONTRACT_SELECTION_SCREEN");
func_27(str);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value2);
func_27(str2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value4);
func_27(str3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}

int func_297(Player plParam0) // Position - 0x9C56{
if(plParam0 !=-1) return Global_1981514[plParam0 /*60*/].f_27.f_16;
return 0;
}

int func_298(BOOL bParam0) // Position - 0x9C74{
if(bParam0) return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_COUNT, -1, 0);
return func_299(PLAYER::PLAYER_ID());
}

int func_299(Player plParam0) // Position - 0x9C95{
if(plParam0 !=-1) return Global_1981514[plParam0 /*60*/].f_27.f_8;
return 0;
}

int func_300(int iParam0, BOOL bParam1) // Position - 0x9CB3{
if(bParam1){
switch (iParam0){
case 0:
return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_SC_VAL_RECOVERED, -1, 0);
case 1:
return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_SC_VEH_RECOVERED, -1, 0);
case 2:
return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_SC_GANG_TERMINATED, -1, 0);
case 3:
return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_SC_VIP_RESCUED, -1, 0);
case 4:
return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_SC_ASSETS_PROTECTED, -1, 0);
case 5:
return _MPCHAR_STAT_GET_INT(MP_STAT_FIXER_SC_EQ_DESTROYED, -1, 0);
default:
}}
return func_301(PLAYER::PLAYER_ID(), iParam0);
}

int func_301(Player plParam0, int iParam1) // Position - 0x9D3D{
if(plParam0 !=-1) return Global_1981514[plParam0 /*60*/].f_27.f_9[iParam1];
return 0;
}


char* func_302(int iParam0) // Position - 0x9D5F{
switch (iParam0){
case 0:
return "FIX_A_STAT_VAR" /*VALUABLES RECOVERED*/;
case 1:
return "FIX_A_STAT_VHR" /*VEHICLES RECOVERED*/;
case 2:
return "FIX_A_STAT_GE" /*GANGS ELIMINATED*/;
case 3:
return "FIX_A_STAT_VIP" /*VIPS RESCUED*/;
case 4:
return "FIX_A_STAT_AP" /*ASSETS PROTECTED*/;
case 5:
return "FIX_A_STAT_AD" /*ASSETS DESTROYED*/;
}
return "";
}


void func_303(int iParam0) // Position - 0x9DD0{
int num;
char* str;
char* str2;
char* str3;
int value;
int num2;
func_267(1);
num=func_295(PLAYER::PLAYER_ID(), iParam0);
str=func_308(num);
str2=func_307(num);
str3="SEC_VIP_LANDING_IMAGE";
value=func_306(iParam0);
num2=func_304(iParam0);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "UPDATE_SECURITY_CONTRACT_SELECTION_TAB");
func_27(str);
func_27(str2);
func_71(num2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(func_30()){
MISC::SET_BIT(&iLocal_131, 14);
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FXR_NX_SEC_WAIT" /*There is a short delay before you can accept another Security Contract.*/)) _DISPLAY_HELP_TEXT("FXR_NX_SEC_WAIT" /*There is a short delay before you can accept another Security Contract.*/, -1);
func_25(false);
}else{
func_25(true);
}
return;
}

int func_304(int iParam0) // Position - 0x9E6B{
switch (func_305(PLAYER::PLAYER_ID(), iParam0)){
case 0:
return 1;
case 1:
return 2;
case 2:
return 3;
}
return 1;
}

int func_305(Player plParam0, int iParam1) // Position - 0x9EAA{
if(plParam0 !=-1)if(iParam1 >=0 && iParam1 < 3) return Global_1981514[plParam0 /*60*/].f_27.f_17[iParam1 /*3*/].f_1;
return 0;
}

int func_306(int iParam0) // Position - 0x9EE4{
if(iParam0 >=0 && iParam0 < 3) return Global_1981423.f_20[iParam0 /*3*/].f_2;
return 0;
}


char* func_307(int iParam0) // Position - 0x9F0C{
switch (iParam0){
case 0:
return "FXR_STSTART_RP_D" /*Recover the client's stolen valuables.*/;
case 1:
return "FXR_STSTART_RV_D" /*Recover the client's stolen vehicle.*/;
case 2:
return "FXR_STSTART_AS_D" /*Eliminate senior gang members as requested by the client.*/;
case 3:
return "FXR_STSTART_RE_D" /*Rescue the client and extract them to safety.*/;
case 4:
return "FXR_STSTART_PR_D" /*Provide protection for the client's assets.*/;
case 5:
return "FXR_STSTART_TD_D" /*Locate and destroy equipment as requested by the client.*/;
}
return "";
}


char* func_308(int iParam0) // Position - 0x9F7D{
switch (iParam0){
case 0:
return "FXR_STSTART_RP" /*Recover Valuables*/;
case 1:
return "FXR_STSTART_RV" /*Vehicle Recovery*/;
case 2:
return "FXR_STSTART_AS" /*Gang Termination*/;
case 3:
return "FXR_STSTART_RE" /*Rescue Operation*/;
case 4:
return "FXR_STSTART_PR" /*Asset Protection*/;
case 5:
return "FXR_STSTART_TD" /*Liquidize Assets*/;
}
return "";
}


void func_309() // Position - 0x9FEE{
int value;
int value2;
int value3;
BOOL value4;
char* str;
int num;
char* str2;
char* str3;
char* str4;
int value5;
int num2;
char* str5;
char* str6;
char* str7;
int value6;
int num3;
char* str8;
char* str9;
char* str10;
int value7;
int num4;
func_279(3);
value=func_298(false);
value2=func_297(PLAYER::PLAYER_ID());
value3=func_301(PLAYER::PLAYER_ID(), 0);
value4=false;
str=func_310(&value4);
num=func_295(PLAYER::PLAYER_ID(), 0);
str2=func_308(num);
str3=func_307(num);
str4="SEC_VIP_LANDING_IMAGE";
value5=func_306(0);
num2=func_304(0);
num=func_295(PLAYER::PLAYER_ID(), 1);
str5=func_308(num);
str6=func_307(num);
str7="SEC_VIP_LANDING_IMAGE";
value6=func_306(1);
num3=func_304(1);
num=func_295(PLAYER::PLAYER_ID(), 2);
str8=func_308(num);
str9=func_307(num);
str10="SEC_VIP_LANDING_IMAGE";
value7=func_306(2);
num4=func_304(2);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SHOW_SECURITY_CONTRACT_SELECTION_SCREEN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
func_27(str2);
func_27(str3);
func_71(num2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str4);
func_27(str5);
func_27(str6);
func_71(num3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str7);
func_27(str8);
func_27(str9);
func_71(num4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(str10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_296(0, 0);
return;
}


char* func_310(var uParam0) // Position - 0xA136{
char* str;
*uParam0=0;
if(func_284(true)){
str="FIX_VIP_LOCK3" /*Unavailable. There is a short delay before you can start this contract again.*/;
*uParam0=1;
}elseif(!func_314()){
if(func_313()){
str="FIX_VIP_LOCK" /*Unavailable. Meet Franklin at the Los Santos Golf Club in Richman.*/;
*uParam0=1;
}elseif(func_312()){
str="FIX_VIP_LOCK1" /*Unavailable. Franklin will be in touch about the VIP client soon.*/;
*uParam0=1;
}elseif(!func_290(false) || !func_288(false)){
str="FIX_VIP_INTRO" /*Unavailable. Franklin will be in touch about the VIP client soon.*/;
*uParam0=1;
}elseif(func_311()){
str="FIX_VIP_LOCK2" /*Unavailable. Imani will be in touch after analyzing the FIB hard drive.*/;
*uParam0=1;
}}
return str;
}
BOOL func_311() // Position - 0xA1BC{
if(func_282(false) && !func_280(PLAYER::PLAYER_ID())) return !IS_BIT_SET(Global_1981423.f_1, 23);
return false;
}
BOOL func_312() // Position - 0xA1E8{
if(func_290(false) && func_288(false)) return !func_286();
return false;
}
BOOL func_313() // Position - 0xA20B{
if(func_290(false) && !func_288(false)) return IS_BIT_SET(Global_1981423.f_1, 3);
return false;
}
BOOL func_314() // Position - 0xA232{
if(func_288(false) && func_282(false)){
if(Global_1981457==1) return false;
if(func_54(true) !=-1) return true;
}
if(func_275(PLAYER::PLAYER_ID())) return true;
if(func_51(4, false) || func_51(7, false) || func_51(10, false)) return true;
return false;
}


void func_315() // Position - 0xA29B{
BOOL value;
char* str;
func_279(1);
func_267(0);
str=func_310(&value);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SHOW_HOME_SCREEN");
func_27("FIX_APP_SECU_T" /*SECURITY CONTRACTS*/);
func_27("FIX_APP_VIP_T" /*VIP CONTRACT*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
if(value) func_27(str);
else func_27("");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_316() // Position - 0xA2EE{
char* str;
str="HIDE_OVERLAY_ONE_BUTTON";
if(MISC::GET_HASH_KEY(sLocal_146)==joaat("SHOW_OVERLAY_TWO_BUTTON")) str="HIDE_OVERLAY_TWO_BUTTON";
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, str);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_267(0);
MISC::CLEAR_BIT(&iLocal_131, 2);
return;
}


void func_317() // Position - 0xA329{
switch (func_325()){
case 2:
func_320(iLocal_134, true);
func_48(iLocal_134);
func_319();
func_39(iLocal_134, 0, -1);
func_47(true);
func_26("FAPP_ACCEPT", true);
func_70(217);
if(func_275(PLAYER::PLAYER_ID()) && !func_318()) MISC::SET_BIT(&(Global_1981423.f_1), 21);
func_316();
break;
}
return;
}
BOOL func_318() // Position - 0xA394{
return IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_FIXER_GENERAL_BS, -1, 0), 13);
}


void func_319() // Position - 0xA3A8{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "UPDATE_MENU_LOCKED_STATES");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_276(0));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_276(1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_276(2));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_320(int iParam0, BOOL bParam1) // Position - 0xA3DA{
_MPCHAR_STAT_SET_INT(MP_STAT_FIXER_STORY_STRAND, iParam0, -1, true, false);
if(bParam1) func_321(-1713398555, 12, false);
return;
}


void func_321(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA3FF{
int num;
if(func_323(iParam1, bParam2)){
num=func_322();
Global_2694418[num]=iParam1;
Global_2694429[num]=iParam0;
}
return;
}

int func_322() // Position - 0xA42C{
int num;
int i;
num=9;
for (i=0;
i <=9;
i=i + 1){
if(Global_2694418[i]==0){
num=i;
i=10;
}}
return num;
}
BOOL func_323(int iParam0, BOOL bParam1) // Position - 0xA461{
if(Global_1575048) return false;
if(iParam0==22) return true;
if(bParam1 || !Global_1575060 || iParam0==3 || iParam0==10 || iParam0==11 || iParam0==27 || iParam0==28 || iParam0==29 || iParam0==30) return true;
else return false;
return true;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA4E7{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_53(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}

int func_325() // Position - 0xA517{
return iLocal_148;
}


void func_326(int iParam0) // Position - 0xA521{
char* audioName;
switch (iParam0){
case 0:
audioName="Nav_Up_Down";
break;
case 1:
audioName="Nav_Left_Right";
break;
case 2:
audioName="Nav_Blocked";
break;
case 3:
audioName="Select" /*Filter List*/;
break;
case 4:
audioName="Back";
break;
case 5:
audioName="Exit";
break;
case 6:
audioName="Error";
break;
case 7:
audioName="Key_Hit";
break;
case 8:
audioName="Launch_Mission";
break;
case 9:
audioName="Boot";
break;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, audioName, "DLC_Fixer_Agency_Computer_Soundset", true);
return;
}


void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xA5D2{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
return;
}
BOOL func_328(int iParam0) // Position - 0xA5E9{
if(_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()) return iLocal_141==iParam0;
return false;
}
BOOL func_329(int iParam0) // Position - 0xA601{
switch (iParam0){
case 211:
case 212:
case 213:
return true;
}
return false;
}
BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0xA62A{
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return true;
return false;
}


void func_331() // Position - 0xA64C{
if(!IS_BIT_SET(iLocal_131, 4) && !func_68()){
if(!IS_BIT_SET(iLocal_131, 5)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "GET_CURRENT_ROLLOVER");
iLocal_154=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
iLocal_155=20;
MISC::SET_BIT(&iLocal_131, 5);
}}
return;
}


void func_332() // Position - 0xA68A{
if(func_333()){
if(!IS_BIT_SET(iLocal_131, 4)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "GET_CURRENT_SELECTION");
iLocal_153=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
MISC::SET_BIT(&iLocal_131, 4);
}}
return;
}
BOOL func_333() // Position - 0xA6B9{
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT)) return true;
return false;
}


void func_334() // Position - 0xA6DD{
if(iLocal_140 !=-1) func_335(iLocal_140);
return;
}


void func_335(int iParam0) // Position - 0xA6F1{
var unk;
unk=16;
if(func_363(iParam0)){
_CONVERSATION_INITIALIZE_ACTOR(&unk, 2, 0, "FIX_IMANI", 0, 1);
_CONVERSATION_INITIALIZE_ACTOR(&unk, 3, 0, "FIX_FRANKLIN", 0, 1);
if(_CONVERSATION_ADD_LINE(&unk, "FXIMAUD", func_361(iParam0), 8, 0, 0, 0)) func_337();
}elseif(func_336(iParam0)){
_CONVERSATION_INITIALIZE_ACTOR(&unk, 2, 0, "FIX_FRANKLIN", 0, 1);
if(_CONVERSATION_ADD_LINE(&unk, "FXFRAUD", func_361(iParam0), 8, 0, 0, 0)) func_337();
}else{
_CONVERSATION_INITIALIZE_ACTOR(&unk, 2, 0, "FIX_IMANI", 0, 1);
if(_CONVERSATION_ADD_LINE(&unk, "FXIMAUD", func_361(iParam0), 8, 0, 0, 0)) func_337();
}
return;
}
BOOL func_336(int iParam0) // Position - 0xA7A5{
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
return true;
}
return false;
}


void func_337() // Position - 0xA7D4{
iLocal_141=iLocal_140;
iLocal_140=-1;
func_338(true);
return;
}


void func_338(BOOL bParam0) // Position - 0xA7E8{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SHOW_SPEAKER");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA805{
func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7)if(iParam3 < 12) iParam3=7;
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_340(sParam2, iParam3, false);
}
BOOL func_340(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xA853{
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=false;
Global_20382=0;
}else{
func_359();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return 0;
if(func_358(8, -1)) return 0;
Global_21801={
Global_21795 
};
func_357();
Global_21014={
Global_21179 
};
Global_21731=Global_21732;
Global_21738=Global_21739;
Global_2883586=Global_2883585;
Global_21740={
Global_21756 
};
Global_21733=Global_21734;
Global_22715=Global_22716;
Global_22723={
Global_22729 
};
Global_22717=Global_22718;
Global_22719=Global_22720;
Global_22721=Global_22722;
Global_21344.f_370=Global_22714;
Global_21344.f_368=Global_22712;
Global_21344.f_369=Global_22713;
Global_21721=Global_21722;
if(Global_21731){
MISC::CLEAR_BIT(&Global_8253, 20);
MISC::CLEAR_BIT(&Global_8254, 17);
MISC::CLEAR_BIT(&Global_8255, 0);
if(bParam2){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3) return 0;
}
if(Global_20349==1) return 0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) return 0;
if(func_348()) return 0;
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) return 0;
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"))) return 0;
if(!Global_78558){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) return 0;
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)) return 0;
}}
if(func_347()){
return 0;
}else{
switch (Global_20383.f_1){
case 7:
return 0;
case 8:
return 0;
case 9:
break;
case 10:
break;
default:
break;
}
if(IS_BIT_SET(Global_8253, 9)) return 0;
}
func_346();
Global_21735=bParam2;
}
Global_21727=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
Global_20591=0;
func_345();
func_341();
return 1;
}
if(Global_21725==5) return 0;
if(iParam1 < Global_21727 || iParam1==Global_21727) return 0;
if(iParam1==2){}else{
func_359();
}
return 0;
}


void func_341() // Position - 0xAB21{
if(!func_342()) return;
if(Global_21731){
TEXT_LABEL_COPY(&(Global_1977511.f_1),{
Global_21344 
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}
return;
}
BOOL func_342() // Position - 0xAB58{
if(!Global_262145.f_28878) return false;
if(!Global_78558) return false;
if(PLAYER::PLAYER_ID()==_INVALID_PLAYER_INDEX()) return false;
if(func_343(PLAYER::PLAYER_ID())) return false;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
return true;
}
BOOL func_343(Player plParam0) // Position - 0xABBB{
return func_344(plParam0, 20);
}
BOOL func_344(Player plParam0, int iParam1) // Position - 0xABCB{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}


void func_345() // Position - 0xABE3{
int i;
for (i=0;
i <=69;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
}
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=1;
return;
}


void func_346() // Position - 0xAC13{
Global_21778=Global_21777;
Global_21772=Global_21773;
Global_21819={
Global_21807 
};
Global_21825={
Global_21813 
};
Global_21780=Global_21779;
Global_21849={
Global_21831 
};
Global_21855={
Global_21837 
};
Global_21861={
Global_21843 
};
Global_21867={
Global_21873 
};
Global_7568=Global_7569;
Global_7570=Global_7571;
Global_21736=Global_21737;
Global_21738=Global_21739;
Global_21740={
Global_21756 
};
Global_21729=Global_21730;
Global_22741=0;
Global_21774=0;
Global_21775=0;
MISC::CLEAR_BIT(&Global_8254, 16);
return;
}
BOOL func_347() // Position - 0xACA8{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}
BOOL func_348() // Position - 0xACCF{
int num;
int weaponHash;
if(Global_78558){
num=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(weaponHash==joaat("WEAPON_SNIPERRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER") || weaponHash==joaat("WEAPON_REMOTESNIPER")) num=1;
if(CAM::IS_AIM_CAM_ACTIVE() && num==1) return true;
else return false;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true)) return true;
else return false;
return true;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xAD68{
if(func_356(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]) Global_20383=CHAR_MICHAEL;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]) Global_20383=CHAR_FRANKLIN;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]) Global_20383=CHAR_TREVOR;
else Global_20383=CHAR_MICHAEL;
}else{
Global_20383=_GET_CURRENT_PLAYER_CHARACTER();
if(Global_20383==_CHAR_NULL) Global_20383=CHAR_MULTIPLAYER;
if(Global_78558) Global_20383=CHAR_MULTIPLAYER;
if(Global_20383 > CHAR_MULTIPLAYER) Global_20383=CHAR_MULTIPLAYER;
}
return;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xAE0A{
func_351();
return Global_113648.f_2365.f_539.f_4321;
}


void func_351() // Position - 0xAE23{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_352(character) && !func_356(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_352(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_352(eCharacter echParam0) // Position - 0xAF20{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xAF2C{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xAF69{
if(func_352(character)) return func_355(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_355(eCharacter echParam0) // Position - 0xAF8E{
return Global_2028[echParam0 /*29*/];
}
BOOL func_356(int iParam0) // Position - 0xAF9D{
return Global_43257==iParam0;
}


void func_357() // Position - 0xAFAB{
int i;
for (i=0;
i <=15;
i=i + 1){
Global_21014[i /*10*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
Global_21014[i /*10*/].f_7=0;
Global_21014[i /*10*/].f_8=0;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
return;
}
BOOL func_358(int iParam0, int iParam1) // Position - 0xB001{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_359() // Position - 0xB039{
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9 || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21725=6;
return;
}
return;
}


void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xB090{
Global_21179={
*uParam0 
};
Global_7569=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
Global_22714=iParam5;
if(iParam3==0){
Global_22712=1;
Global_22710=0;
}else{
Global_22712=0;
Global_22710=1;
}
if(iParam4==0){
Global_22713=1;
Global_22711=0;
}else{
Global_22713=0;
Global_22711=1;
}
return;
}


char* func_361(int iParam0) // Position - 0xB0E6{
switch (iParam0){
case 0:
return "FXFR_FOC_1";
case 1:
return "FXFR_FOC_2";
case 2:
return "FXFR_FOC_3";
case 3:
return "FXFR_FOC_4";
case 4:
return "FXIM_FL_1";
case 5:
return "FXIM_FL_2";
case 6:
return "FXIM_FL_4";
case 7:
return "FXIM_FL_5";
case 8:
return "FXIM_FL_6";
case 9:
return "FXIM_FL_7";
case 10:
return "FXIM_FL_8";
case 11:
return "FXIM_FL_9";
case 12:
return "FXIM_FL_10";
case 13:
return "FXIM_FL_11";
case 14:
return "FXIM_FL_12";
case 15:
return "FXIM_FL_13";
}
return "FXFR_FOC_1";
}


void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xB1F9{
uParam0->[iParam1 /*10*/].f_7==1;
uParam0->[iParam1 /*10*/]=pedParam2;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
uParam0->[iParam1 /*10*/].f_7=1;
uParam0->[iParam1 /*10*/].f_8=iParam4;
uParam0->[iParam1 /*10*/].f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_8==0) PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
else PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_9==0) TASK::OPEN_PATROL_ROUTE(pedParam2, 0);
else TASK::OPEN_PATROL_ROUTE(pedParam2, 1);
}
return;
}
BOOL func_363(int iParam0) // Position - 0xB294{
switch (iParam0){
case 10:
case 14:
return true;
}
return false;
}


void func_364() // Position - 0xB2B7{
BOOL flag;
if(!IS_BIT_SET(iLocal_131, 8) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()){
if(func_28()==1 && !func_374(316, -1)){
flag=true;
iLocal_139=28500;
iLocal_140=0;
func_373("FIX_VIP_TUT1" /*Franklin will be in touch about the VIP client soon. Complete Security Contracts in the meantime to earn cash and increase daily earnings for the business.*/);
func_371(316, true, -1, true);
}elseif(func_28()==3 && !func_374(317, -1)){
flag=true;
iLocal_139=30000;
iLocal_140=1;
func_371(317, true, -1, true);
}elseif(func_28()==3 && !func_374(318, -1)){
flag=true;
iLocal_139=18500;
iLocal_140=2;
if(Global_262145.f_31808) MISC::SET_BIT(&iLocal_131, 13);
else func_373("FIX_VIP_TUT2" /*The available contracts offered here change regularly, with each job having different difficulty levels and rewards. Select one to begin.*/);
func_371(318, true, -1, true);
}elseif(IS_BIT_SET(iLocal_131, 13)){
flag=true;
iLocal_139=12000;
iLocal_140=3;
func_373("FIX_VIP_TUT2" /*The available contracts offered here change regularly, with each job having different difficulty levels and rewards. Select one to begin.*/);
MISC::CLEAR_BIT(&iLocal_131, 13);
}elseif(func_28()==1 && func_286() && !(func_374(319, -1) && func_287(32312, -1))){
if(func_290(false) && func_288(false)){
if(func_282(false)){
func_371(319, true, -1, true);
_STAT_SET_PACKED_BOOL(32312, 1, -1);
}elseif(!func_374(319, -1)){
flag=true;
iLocal_139=25000;
iLocal_140=4;
func_371(319, true, -1, true);
}elseif(!func_287(32312, -1)){
flag=true;
iLocal_139=11300;
iLocal_140=5;
func_373("FIX_VIP_TUT3" /*Select VIP Contract, then start Setup:
Data Recovery when you are ready to begin the investigation into Dr. Dre's stolen phone.*/);
_STAT_SET_PACKED_BOOL(32312, 1, -1);
}}}elseif(func_28()==2 && !func_374(320, -1)){
flag=true;
iLocal_139=17250;
iLocal_140=6;
func_373("FIX_VIP_TUT4" /*Imani has identified the last known location for the 3 copies of Dr. Dre's stolen phone. Investigate each one and follow leads to recover every copy.*/);
func_371(320, true, -1, true);
}elseif(func_28()==2 && func_54(true)==0 && !func_374(321, -1)){
flag=true;
iLocal_139=11000;
iLocal_140=7;
func_371(321, true, -1, true);
}elseif(func_28()==2 && func_54(true)==1 && !func_374(324, -1)){
flag=true;
iLocal_139=13000;
iLocal_140=8;
func_371(324, true, -1, true);
}elseif(func_28()==2 && func_54(true)==2 && !func_374(327, -1)){
flag=true;
iLocal_139=11000;
iLocal_140=9;
func_371(327, true, -1, true);
}elseif(func_28()==2 && func_54(true)==0 && iLocal_134==0){
if(iLocal_133==1){
if(!func_374(322, -1) && func_51(2, false)){
flag=true;
iLocal_139=29600;
iLocal_140=10;
func_371(322, true, -1, true);
}}elseif(iLocal_133==2){
if(!func_374(323, -1) && func_51(3, false)){
flag=true;
iLocal_139=6000;
iLocal_140=11;
func_371(323, true, -1, true);
}}}elseif(func_28()==2 && func_54(true)==2 && iLocal_134==2){
if(iLocal_133==1){
if(!func_374(328, -1) && func_51(8, false)){
flag=true;
iLocal_139=9500;
iLocal_140=12;
func_371(328, true, -1, true);
}}elseif(iLocal_133==2){
if(!func_374(329, -1) && func_51(9, false)){
flag=true;
iLocal_139=7250;
iLocal_140=13;
func_371(329, true, -1, true);
}}}elseif(func_28()==2 && func_54(true)==1 && iLocal_134==1){
if(iLocal_133==1){
if(!func_374(325, -1) && func_51(5, false)){
flag=true;
iLocal_139=29000;
iLocal_140=14;
func_371(325, true, -1, true);
}}elseif(iLocal_133==2){
if(!func_374(326, -1) && func_51(6, false)){
flag=true;
iLocal_139=4250;
iLocal_140=15;
func_371(326, true, -1, true);
}}}}
if(flag){
MISC::SET_BIT(&iLocal_131, 8);
}elseif(IS_BIT_SET(iLocal_131, 8)){
if(!_STOPWATCH_IS_INITIALIZED(&uLocal_143)){
_STOPWATCH_INITIALIZE(&uLocal_143, false, false);
}elseif(_STOPWATCH_HAS_TIME_PASSED(&uLocal_143, iLocal_139, false) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()){
MISC::CLEAR_BIT(&iLocal_131, 8);
iLocal_141=-1;
iLocal_139=0;
_STOPWATCH_DESTROY(&uLocal_143);
func_338(false);
if(func_365()){
MISC::SET_BIT(&iLocal_131, 7);
MISC::SET_BIT(&iLocal_131, 9);
}}}
return;
}
BOOL func_365() // Position - 0xB74F{
if(func_374(316, -1) && func_374(317, -1) && func_374(318, -1) && func_374(319, -1) && func_374(320, -1) && func_374(321, -1) && func_374(322, -1) && func_374(323, -1) && func_374(324, -1) && func_374(325, -1) && func_374(326, -1) && func_374(327, -1) && func_374(328, -1) && func_374(329, -1) && func_287(32312, -1)) return true;
return false;
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0xB81D{
uParam0->f_1=0;
return;
}
BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0xB82A{
if(millis==-1) return true;
_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >=millis) return true;
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >=millis) return true;
return false;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xB888{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xB8CD{
return uParam0->f_1;
}


void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0xB8D9{
if(iParam2==-1) iParam2=func_11();
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
return;
}


void func_371(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xB8F7{
Hash statName;
if(func_372()){
statName=Global_2848280[iParam0 /*3*/][func_53(iParam2)];
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, bParam3);
}
return;
}
BOOL func_372() // Position - 0xB929{
return true;
}


void func_373(char* sParam0) // Position - 0xB936{
sLocal_142=sParam0;
return;
}
BOOL func_374(int iParam0, int iParam1) // Position - 0xB942{
Hash statHash;
BOOL outValue;
statHash=Global_2848280[iParam0 /*3*/][func_53(iParam1)];
if(STATS::STAT_GET_BOOL(statHash, &outValue, -1)) return outValue;
return false;
}


void func_375() // Position - 0xB96E{
if(!IS_BIT_SET(iLocal_131, 8) && !MISC::IS_STRING_NULL_OR_EMPTY(sLocal_142) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()){
_DISPLAY_HELP_TEXT(sLocal_142, -1);
sLocal_142="";
}
if(!IS_BIT_SET(iLocal_131, 11) && func_74()){
if(func_28()==2){
switch (Global_1981457){
case 3:
case 5:
case 7:
case 9:
case 11:
case 13:
_DISPLAY_HELP_TEXT("FXR_NX_MIS_WAIT" /*Franklin will be in touch soon with information on the next investigation.*/, -1);
MISC::SET_BIT(&iLocal_131, 11);
break;
}}}
if(!IS_BIT_SET(iLocal_131, 12)){
if(!func_51(4, false) || !func_51(7, false) || !func_51(10, false) || func_284(true)){
MISC::SET_BIT(&iLocal_131, 12);
return;
}
if(func_28()==2){
if(func_275(PLAYER::PLAYER_ID())){
if(!func_377(PLAYER::PLAYER_ID(), 3)) _DISPLAY_HELP_TEXT("FXRAP_FIN_WAIT3" /*Go to Franklin's office to continue this contract.*/, -1);
elseif(!func_377(PLAYER::PLAYER_ID(), 4)) _DISPLAY_HELP_TEXT("FXRAP_FIN_WAIT5" /*Go to Franklin's office to complete this contract.*/, -1);
MISC::SET_BIT(&iLocal_131, 12);
}else{
if(!func_376()) _DISPLAY_HELP_TEXT("FXR_AP_FIN_WAIT" /*All three Data Leaks investigated. Franklin will be in touch soon.*/, -1);
elseif(!func_377(PLAYER::PLAYER_ID(), 3))if(IS_BIT_SET(Global_1981423, 26)) _DISPLAY_HELP_TEXT("FXRAP_FIN_WAIT3" /*Go to Franklin's office to continue this contract.*/, -1);
else _DISPLAY_HELP_TEXT("FXRAP_FIN_WAIT2" /*Franklin will be in touch soon with information on Johnny Guns.*/, -1);
elseif(!func_377(PLAYER::PLAYER_ID(), 4))if(IS_BIT_SET(Global_1981423, 28)) _DISPLAY_HELP_TEXT("FXRAP_FIN_WAIT5" /*Go to Franklin's office to complete this contract.*/, -1);
else _DISPLAY_HELP_TEXT("FXRAP_FIN_WAIT4" /*Franklin will be in touch soon when Johnny Guns has been located.*/, -1);
MISC::SET_BIT(&iLocal_131, 12);
}}}
return;
}
BOOL func_376() // Position - 0xBB03{
return func_287(28258, -1);
}
BOOL func_377(Player plParam0, int iParam1) // Position - 0xBB13{
switch (iParam1){
case 0:
if(func_37(plParam0, 2) && func_37(plParam0, 3) && func_37(plParam0, 4)) return true;
break;
case 1:
if(func_37(plParam0, 5) && func_37(plParam0, 6) && func_37(plParam0, 7)) return true;
break;
case 2:
if(func_37(plParam0, 8) && func_37(plParam0, 9) && func_37(plParam0, 10)) return true;
break;
case 3:
if(func_37(plParam0, 11)) return true;
break;
}
return false;
}


void func_378() // Position - 0xBBCB{
int controlValue;
int controlValue2;
int controlValue3;
int controlValue4;
BOOL value;
MISC::CLEAR_BIT(&iLocal_131, 3);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_LB, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LB)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1082130432, -1082130432, -1082130432, -1082130432);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_RB, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RB)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1082130432, -1082130432, -1082130432, -1082130432);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_UP, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1082130432, -1082130432, -1082130432, -1082130432);
MISC::SET_BIT(&iLocal_131, 3);
}
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1082130432, -1082130432, -1082130432, -1082130432);
MISC::SET_BIT(&iLocal_131, 3);
}
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1082130432, -1082130432, -1082130432, -1082130432);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1082130432, -1082130432, -1082130432, -1082130432);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL) && !IS_BIT_SET(iLocal_131, 4)) func_380();
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_X, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1082130432, -1082130432, -1082130432, -1082130432);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_Y, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(204), -1082130432, -1082130432, -1082130432, -1082130432);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
func_379();
if(Global_4541027 !=0f || Global_4541028 !=0f){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SET_MOUSE_INPUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&iLocal_131, 3);
}
func_381(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT)) GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
func_381(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL, true);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !IS_BIT_SET(iLocal_131, 4)) func_380();
}else{
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X, true);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y, true);
controlValue=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X);
controlValue2=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y);
if(controlValue !=127 || iLocal_135 !=127 || controlValue2 !=127 || iLocal_136 !=127){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SET_ANALOG_STICK_INPUT");
iLocal_135=controlValue;
iLocal_136=controlValue2;
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_135);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_136);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&iLocal_131, 3);
}}
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X, true);
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_Y, true);
controlValue3=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X);
controlValue4=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_Y);
if(controlValue3 !=127 || iLocal_137 !=127 || controlValue4 !=127 || iLocal_138 !=127){
value=GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN);
if(!value){
value=GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP);
MISC::SET_BIT(&iLocal_131, 3);
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SET_ANALOG_STICK_INPUT");
iLocal_137=controlValue3;
iLocal_138=controlValue4;
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_137);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_138);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y) && !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))if(_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()) func_326(2);
elseif(!IS_BIT_SET(iLocal_131, 6)) func_419(true, false);
return;
}


void func_379() // Position - 0xBFFF{
Global_4541025=Global_4541023;
Global_4541026=Global_4541024;
Global_4541023=PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
Global_4541024=PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
Global_4541027=Global_4541023 - Global_4541025;
Global_4541028=Global_4541024 - Global_4541026;
return;
}


void func_380() // Position - 0xC048{
if(_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()){
func_326(2);
return;
}elseif(IS_BIT_SET(iLocal_131, 6)){
return;
}
if(func_68()) func_316();
elseif(func_325()==1) func_315();
elseif(func_28() !=1 && func_28() !=0) func_315();
else func_419(true, false);
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
func_326(4);
return;
}


void func_381(eControlType ectParam0, eControlAction ecaParam1, BOOL bParam2) // Position - 0xC0D3{
if(!func_382()){
PAD::SET_INPUT_EXCLUSIVE(ectParam0, ecaParam1);
PAD::ENABLE_CONTROL_ACTION(ectParam0, ecaParam1, bParam2);
}
return;
}
BOOL func_382() // Position - 0xC0F5{
return HUD::GET_PAUSE_MENU_STATE() !=0;
}


void func_383() // Position - 0xC103{
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
func_396();
func_395();
HUD::THEFEED_HIDE_THIS_FRAME();
func_381(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
func_394(0f, 0f, 1f, 1f, 0, 0, 0, 255);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(plLocal_152, 255, 255, 255, 255, 0);
func_392();
func_386(0);
func_384(true);
return;
}


void func_384(BOOL bParam0) // Position - 0xC16A{
if(bParam0) func_385();
func_110(4, -1);
func_110(6, -1);
func_110(7, -1);
func_110(3, -1);
func_110(1, -1);
func_110(2, -1);
func_110(11, -1);
func_110(13, -1);
func_110(14, -1);
func_110(16, -1);
return;
}


void func_385() // Position - 0xC1BB{
Global_2793044.f_4629=0;
return;
}


void func_386(int iParam0) // Position - 0xC1CB{
if(func_391()) return;
if(!Global_20383.f_1==1){
if(func_390(0)) func_387(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_387(int iParam0) // Position - 0xC1FE{
if(func_391()) return;
if(Global_20584)if(func_389()) func_388(true, true);
else func_388(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_347()) Global_20383.f_1=3;
return;
}


void func_388(BOOL bParam0, BOOL bParam1) // Position - 0xC288{
if(bParam0){
if(func_390(0)){
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
BOOL func_389() // Position - 0xC2FC{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_390(int iParam0) // Position - 0xC30A{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_391() // Position - 0xC361{
return IS_BIT_SET(Global_1962996, 19);
}


void func_392() // Position - 0xC370{
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_393();
return;
}


void func_393() // Position - 0xC380{
Global_23131.f_134=1;
return;
}


void func_394(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xC38E{
GRAPHICS::DRAW_RECT(fParam0 + (fParam2 * 0.5f), fParam1 + (fParam3 * 0.5f), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
return;
}


void func_395() // Position - 0xC3BD{
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_MP_CASH);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH_CHANGE);
return;
}


void func_396() // Position - 0xC3D5{
func_397(true);
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE()){
PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
}
return;
}


void func_397(BOOL bParam0) // Position - 0xC401{
if(bParam0)if(func_181()) Global_2683862.f_41=1;
else Global_2683862.f_41=0;
return;
}


void func_398() // Position - 0xC426{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_419(true, false);
}elseif(func_382()){
func_419(true, false);
}elseif(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
func_419(true, false);
}elseif(func_408(PLAYER::PLAYER_ID())){
Global_1950108.f_4781=func_407(PLAYER::PLAYER_ID());
func_419(true, false);
}elseif(_SHOULD_NETWORK_SCRIPT_TERMINATE()){
func_419(true, false);
}
return;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0xC494{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_406()) return true;
if(Global_2696915) return true;
if(func_405()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_403()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0xC518{
switch (func_402()){
case 0:
return func_401();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_401() // Position - 0xC54B{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_402() // Position - 0xC56F{
return Global_32163;
}
BOOL func_403() // Position - 0xC57A{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0xC589{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_405() // Position - 0xC5A0{
return Global_2694524;
}
BOOL func_406() // Position - 0xC5AC{
return Global_2683862.f_693;
}

int func_407(Player plParam0) // Position - 0xC5BB{
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return Global_2657589[plParam0 /*466*/].f_321.f_17;
return -1;
}
BOOL func_408(Player plParam0) // Position - 0xC5EC{
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 3);
return false;
}


void func_409() // Position - 0xC61D{
func_398();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2793044.f_1947){
Global_2793044.f_1947;
func_419(true, false);
}
plLocal_152=GRAPHICS::REQUEST_SCALEFORM_MOVIE("FIXER_APP");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_152)){
func_395();
SYSTEM::WAIT(0);
}
func_387(1);
func_417(true);
func_395();
func_416();
HUD::THEFEED_PAUSE();
iLocal_147=iLocal_147;
iLocal_147=func_415(func_212(PLAYER::PLAYER_ID()));
func_413();
func_326(9);
func_411();
if(MISC::IS_PC_VERSION()) func_410(true, true, true, true);
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Fixer_Office_Room_Use_PC_Scene")) AUDIO::START_AUDIO_SCENE("DLC_Fixer_Office_Room_Use_PC_Scene");
Global_77329=true;
return;
}

int func_410(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC6CE{
int num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}


void func_411() // Position - 0xC701{
if(func_365()) MISC::SET_BIT(&iLocal_131, 7);
else func_412(true);
return;
}


void func_412(BOOL bParam0) // Position - 0xC71F{
if(bParam0) Global_1835499=1;
else Global_1835499=0;
return;
}


void func_413() // Position - 0xC739{
func_414();
return;
}


void func_414() // Position - 0xC745{
func_279(0);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_152, "SHOW_LOGIN_SCREEN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}

int func_415(int iParam0) // Position - 0xC76D{
switch (iParam0){
case 155:
return 1;
case 156:
return 2;
case 157:
return 3;
case 158:
return 4;
default:
}
return 0;
}


void func_416() // Position - 0xC7A5{
Global_1574747=true;
TEXT_LABEL_ASSIGN_STRING(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574747.f_9=MISC::GET_HASH_KEY(&(Global_1574747.f_1));
return;
}


void func_417(BOOL bParam0) // Position - 0xC7CE{
if(bParam0){
func_418();
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
Global_20383.f_1=1;
if(func_390(0)) func_387(0);
}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0) Global_20383.f_1=3;
}
return;
}


void func_418() // Position - 0xC831{
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}
return;
}


void func_419(BOOL bParam0, BOOL bParam1) // Position - 0xC85A{
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_152);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Fixer_Office_Room_Use_PC_Scene")) AUDIO::STOP_AUDIO_SCENE("DLC_Fixer_Office_Room_Use_PC_Scene");
func_417(false);
func_420();
AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
if(bParam0)if(bParam1) func_326(8);
else func_326(5);
if(MISC::IS_PC_VERSION()) func_410(false, true, true, true);
HUD::THEFEED_RESUME();
func_266();
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_1), 22);
Global_77329=false;
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_420() // Position - 0xC8DA{
if(!Global_1574747) return;
func_421();
return;
}


void func_421() // Position - 0xC8F1{
Global_1574747=false;
TEXT_LABEL_ASSIGN_STRING(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
return;
}