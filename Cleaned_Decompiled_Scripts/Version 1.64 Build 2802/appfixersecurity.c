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
char* sLocal_20=NULL;
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
var uLocal_131=0;
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
char* sLocal_142=NULL;
var uLocal_143=0;
var uLocal_144=0;
char* sLocal_145=NULL;
char* sLocal_146=NULL;
var uLocal_147=0;
int iLocal_148=0;
int iLocal_149=0;
int iLocal_150=0;
int iLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
int iLocal_155=0;
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
fLocal_62=((0.05f + 0.275f) - 0.01f);
iLocal_140=-1;
iLocal_141=-1;
sLocal_142="";
iLocal_151=-1;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("appFixerSecurity")) > 1){
func_419(1, 0);
}
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_409();
SYSTEM::WAIT(0);
HUD::CLEAR_HELP(1);
while (Global_77329){
func_398();
func_383();
func_378();
func_375();
if(!MISC::IS_BIT_SET(uLocal_131, 7)){
func_364();
func_334();
}
if(!MISC::IS_BIT_SET(uLocal_131, 6)){
func_69();
func_31();
func_24();
}elseif(MISC::IS_BIT_SET(uLocal_131, 6)){
if(CAM::IS_SCREEN_FADED_OUT()){
func_1();
}elseif(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(500);
}}
SYSTEM::WAIT(0);
}}


void func_1(){
Global_1949965=1;
func_2(264, 0, -1);
func_419(1, 1);
}


void func_2(int iParam0, int iParam1, int iParam2){
if(iParam1 !=-1){
func_23(iParam1);
}
if(iParam2 !=-1){
func_22(iParam2);
}
func_3(iParam0, -1);
}


void func_3(int iParam0, int iParam1){
if((func_21() || !func_17(1)) || func_16(iParam0)==3){
if(!func_14(PLAYER::PLAYER_ID(), 0) && !func_14(PLAYER::PLAYER_ID(), 3)){
func_13(iParam0);
func_4(iParam0, func_8(1, 1), func_7(), func_6(), func_5(), iParam1);
}}}


void func_4(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5){
struct<7> Var0;
Var0.f_0=1311159119;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=uParam2;
Var0.f_4=uParam3;
Var0.f_5=uParam4;
Var0.f_6=uParam5;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 7, iParam1);
}}


var func__5(){
return Global_2793044.f_5225.f_346;
}


var func__6(){
return Global_2793044.f_5225.f_345;
}


var func__7(){
return Global_2793044.f_5225.f_344;
}

int func_8(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_12(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_9(iVar2, 0)){
MISC::SET_BIT(&uVar0, iVar1);
}}}
iVar1++;
}
return uVar0;
}


bool func_9(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_10(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_10(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_11();
}
if(Global_1575040[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_11(){
return Global_1574918;
}

int func_12(int iParam0, bool bParam1, bool bParam2){
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


void func_13(int iParam0){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_32=iParam0;
}

int func_14(int iParam0, int iParam1){
if(func_15(iParam0, 0)){
return func_16(Global_1894573[iParam0 /*608*/].f_10.f_33)==iParam1;
}
return 0;
}

int func_15(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_16(int iParam0){
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


bool func_17(bool bParam0){
return func_18(PLAYER::PLAYER_ID(), bParam0);
}


bool func_18(int iParam0, bool bParam1){
if(!bParam1){
if(func_20(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_19();
}

int func_19(){
return -1;
}

int func_20(int iParam0){
if(iParam0 !=func_19()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_19()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_21(){
return func_20(PLAYER::PLAYER_ID());
}


void func_22(int iParam0){
if(Global_2793044.f_5225.f_345 !=iParam0){
Global_2793044.f_5225.f_345=iParam0;
}}


void func_23(int iParam0){
if(Global_2793044.f_5225.f_344 !=iParam0){
Global_2793044.f_5225.f_344=iParam0;
}}


void func_24(){
if(MISC::IS_BIT_SET(uLocal_131, 14)){
if(!func_30()){
MISC::CLEAR_BIT(&uLocal_131, 14);
if(func_29("FXR_NX_SEC_WAIT")){
HUD::CLEAR_HELP(1);
}
if(func_28()==3){
func_25(1);
}}}}


void func_25(bool bParam0){
func_26("FIX_APP_ACC_CON", bParam0);
}


void func_26(char* sParam0, bool bParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "UPDATE_START_BUTTON");
func_27(sParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_27(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_28(){
return iLocal_149;
}


bool func_29(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


bool func_30(){
return MISC::IS_BIT_SET(Global_1981423.f_1, 31);
}


void func_31(){
int iVar0;
if(MISC::IS_BIT_SET(uLocal_131, 5)){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_154)){
iVar0=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_154);
if(iVar0 !=iLocal_150){
if(!func_68()){
switch (iVar0){
case 214:
case 215:
func_67(0);
func_60(iVar0);
func_26("FAPP_ACCEPT", 1);
break;
case 205:
case 206:
case 207:
func_32(iVar0);
break;
}}}
iLocal_150=iVar0;
iLocal_155=0;
MISC::CLEAR_BIT(&uLocal_131, 5);
}else{
iLocal_155=(iLocal_155 - 1);
if(iLocal_155==0){
MISC::CLEAR_BIT(&uLocal_131, 5);
}}}}


void func_32(int iParam0){
int iVar0;
int iVar1;
iVar0=func_59(iParam0);
iVar1=func_58(iVar0);
if(iLocal_151==iVar0 && MISC::IS_BIT_SET(uLocal_131, 15)){
return;
}else{
func_57(iVar0);
}
func_67(1);
if(Global_77330){
func_56(iVar0);
}
if(func_54(0)==iVar0 || func_51(iVar1, 0)){
func_48(iVar0);
func_47(1);
if(func_51(iVar1, 0)){
func_26("FIX_APP_MIS_COM", 0);
func_47(1);
func_39(iVar0, 2, 2);
}else{
func_26("FAPP_ACCEPT", 0);
func_39(iVar0, 2, 0);
}}else{
func_33();
func_26("FAPP_ACCEPT", 0);
func_47(0);
func_39(iVar0, 2, 0);
}}


void func_33(){
int iVar0;
int iVar1;
iVar0=func_38(0);
iVar1=func_35();
func_34("", 1, 0, "", 1, 0, "", 1, 0, iVar0, iVar1);
}


void func_34(char* sParam0, bool bParam1, bool bParam2, char* sParam3, bool bParam4, bool bParam5, char* sParam6, bool bParam7, bool bParam8, int iParam9, int iParam10){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "UPDATE_DATA_LEAK_SCREEN");
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
}

int func_35(){
int iVar0;
iVar0=0;
iVar0=(iVar0 + func_36(func_37(PLAYER::PLAYER_ID(), 7)));
iVar0=(iVar0 + func_36(func_37(PLAYER::PLAYER_ID(), 10)));
iVar0=(iVar0 + func_36(func_37(PLAYER::PLAYER_ID(), 4)));
return iVar0;
}

int func_36(bool bParam0){
if(bParam0){
return 1;
}
return 0;
}

int func_37(int iParam0, int iParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27.f_3, iParam1);
}
return 0;
}


var func__38(bool bParam0){
if(bParam0){
return Global_262145.f_31746;
}
return Global_262145.f_31747;
}


void func_39(int iParam0, int iParam1, int iParam2){
char* sVar0;
var uVar1;
char* sVar2;
bool bVar3;
char* sVar4;
sVar0=func_46(iParam0, iParam1);
uVar1=func_45(iParam0, iParam1);
sVar2=func_44(iParam0, iParam1);
bVar3=func_43(iParam0, iParam1);
sVar4="";
if(iParam2 !=-1){
uVar1=func_45(iParam0, iParam2);
sVar0=func_42(iParam0);
}
func_41();
func_40(sVar0, uVar1, sVar2, bVar3, bVar3, 1, sVar4);
}


void func_40(char* sParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "UPDATE_TAB_DATA");
func_27(sParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(uParam1);
func_27(sParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
func_27(sParam6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_41(){
MISC::CLEAR_BIT(&uLocal_131, 16);
MISC::CLEAR_BIT(&uLocal_131, 17);
}


char* func_42(int iParam0){
switch (iParam0){
case 0:
return "FIX_APP_DL1_D_B";
break;
case 1:
return "FIX_APP_DL2_D_B";
break;
case 2:
return "FIX_APP_DL3_D_B";
break;
}
return "";
}

int func_43(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return func_51(2, 0);
break;
case 1:
return func_51(3, 0);
break;
case 2:
return func_51(4, 0);
break;
}
break;
case 1:
switch (iParam1){
case 0:
return func_51(5, 0);
break;
case 1:
return func_51(6, 0);
break;
case 2:
return func_51(7, 0);
break;
}
break;
case 2:
switch (iParam1){
case 0:
return func_51(8, 0);
break;
case 1:
return func_51(9, 0);
break;
case 2:
return func_51(10, 0);
break;
}
break;
}
return 0;
}


char* func_44(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "FIX_APP_INVEST";
break;
case 1:
return "FIX_APP_INVEST";
break;
case 2:
return "FIX_APP_RECOVR";
break;
}
break;
case 1:
switch (iParam1){
case 0:
return "FIX_APP_INVEST";
break;
case 1:
return "FIX_APP_INVEST";
break;
case 2:
return "FIX_APP_RECOVR";
break;
}
break;
case 2:
switch (iParam1){
case 0:
return "FIX_APP_INVEST";
break;
case 1:
return "FIX_APP_INVEST";
break;
case 2:
return "FIX_APP_RECOVR";
break;
}
break;
}
return "UNKNOWN";
}


char* func_45(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "DATA_LEAK_1_NIGHTCLUB";
break;
case 1:
return "DATA_LEAK_1_MARINA";
break;
case 2:
return "MISSION_VINEWOOD";
break;
}
break;
case 1:
switch (iParam1){
case 0:
return "DATA_LEAK_2_COUNTRY";
break;
case 1:
return "DATA_LEAK_2_GUEST_LIST";
break;
case 2:
return "MISSION_RICHMAN_LEAK";
break;
}
break;
case 2:
switch (iParam1){
case 0:
return "DATA_LEAK_3_DAVIS";
break;
case 1:
return "DATA_LEAK_3_BALLAS";
break;
case 2:
return "MISSION_SOUTH_CENTRAL";
break;
}
break;
}
return "UNKNOWN";
}


char* func_46(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L1_D1";
break;
case 1:
return "FIX_APP_DATA_L1_D2";
break;
case 2:
return "FIX_APP_DATA_L1_D3";
break;
}
break;
case 1:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L2_D1";
break;
case 1:
return "FIX_APP_DATA_L2_D2";
break;
case 2:
return "FIX_APP_DATA_L2_D3";
break;
}
break;
case 2:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L3_D1";
break;
case 1:
return "FIX_APP_DATA_L3_D2";
break;
case 2:
return "FIX_APP_DATA_L3_D3";
break;
}
break;
}
return "UNKNOWN";
}


void func_47(bool bParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "ENABLE_TABS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_48(int iParam0){
char* sVar0;
bool bVar1;
bool bVar2;
char* sVar3;
bool bVar4;
bool bVar5;
char* sVar6;
bool bVar7;
bool bVar8;
int iVar9;
int iVar10;
sVar0=func_50(iParam0, 0);
bVar1=func_49(iParam0, 0);
bVar2=func_43(iParam0, 0);
sVar3=func_50(iParam0, 1);
bVar4=func_49(iParam0, 1);
bVar5=func_43(iParam0, 1);
sVar6=func_50(iParam0, 2);
bVar7=func_49(iParam0, 2);
bVar8=func_43(iParam0, 2);
iVar9=func_38(0);
iVar10=func_35();
func_34(sVar0, bVar1, bVar2, sVar3, bVar4, bVar5, sVar6, bVar7, bVar8, iVar9, iVar10);
}

int func_49(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 0;
break;
case 1:
if((func_51(2, 0) && Global_1981457 !=2) && Global_1981457 !=3){
return 0;
}
break;
case 2:
if((func_51(3, 0) && Global_1981457 !=4) && Global_1981457 !=5){
return 0;
}
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
break;
case 1:
if((func_51(5, 0) && Global_1981457 !=6) && Global_1981457 !=7){
return 0;
}
break;
case 2:
if((func_51(6, 0) && Global_1981457 !=8) && Global_1981457 !=9){
return 0;
}
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 0;
break;
case 1:
if((func_51(8, 0) && Global_1981457 !=10) && Global_1981457 !=11){
return 0;
}
break;
case 2:
if((func_51(9, 0) && Global_1981457 !=12) && Global_1981457 !=13){
return 0;
}
break;
}
break;
}
return 1;
}


char* func_50(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L1_T1";
break;
case 1:
return "FIX_APP_DATA_L1_T2";
break;
case 2:
return "FIX_APP_DATA_L1_T3";
break;
}
break;
case 1:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L2_T1";
break;
case 1:
return "FIX_APP_DATA_L2_T2";
break;
case 2:
return "FIX_APP_DATA_L2_T3";
break;
}
break;
case 2:
switch (iParam1){
case 0:
return "FIX_APP_DATA_L3_T1";
break;
case 1:
return "FIX_APP_DATA_L3_T2";
break;
case 2:
return "FIX_APP_DATA_L3_T3";
break;
}
break;
}
return "UNKNOWN";
}


bool func_51(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_52(9907, -1, 0), iParam0);
}
return func_37(PLAYER::PLAYER_ID(), iParam0);
}

int func_52(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805027[iParam0 /*3*/][func_53(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_53(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_11();
if(iVar1 > -1){
Global_2804739=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804739=1;
}}
return iVar0;
}

int func_54(bool bParam0){
if(bParam0){
return func_52(9908, -1, 0);
}
return func_55(PLAYER::PLAYER_ID());
}

int func_55(int iParam0){
if(iParam0 !=-1){
return Global_1981514[iParam0 /*60*/].f_27.f_4;
}
return -1;
}


void func_56(int iParam0){
iLocal_134=iParam0;
}


void func_57(int iParam0){
iLocal_151=iParam0;
}

int func_58(int iParam0){
switch (iParam0){
case 0:
return 4;
break;
case 1:
return 7;
break;
case 2:
return 10;
break;
}
return -1;
}

int func_59(int iParam0){
switch (iParam0){
case 205:
return 0;
break;
case 206:
return 1;
break;
case 207:
return 2;
break;
}
return -1;
}


void func_60(int iParam0){
char* sVar0;
var uVar1;
sVar0=func_66();
uVar1=func_65();
if(iParam0==215){
sVar0=func_64();
uVar1=func_63();
func_62();
}else{
func_61();
}
func_40(sVar0, uVar1, "FIX_APP_INVEST", 0, 1, 0, "");
}


void func_61(){
func_41();
MISC::SET_BIT(&uLocal_131, 16);
}


void func_62(){
func_41();
MISC::SET_BIT(&uLocal_131, 17);
}


char* func_63(){
return "SETUP_DATA_RECOVERY";
}


char* func_64(){
return "FIX_APP_DATA_R2_D";
}


char* func_65(){
return "MISSION_ON_COURSE";
}


char* func_66(){
return "FIX_APP_DATA_R1_D";
}


void func_67(bool bParam0){
if(bParam0){
MISC::SET_BIT(&uLocal_131, 15);
}else{
MISC::CLEAR_BIT(&uLocal_131, 15);
}}


bool func_68(){
return MISC::IS_BIT_SET(uLocal_131, 2);
}


void func_69(){
int iVar0;
func_332();
func_331();
if(MISC::IS_BIT_SET(uLocal_131, 4)){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_153)){
iVar0=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_153);
if(!CAM::IS_SCREEN_FADED_IN()){
MISC::CLEAR_BIT(&uLocal_131, 4);
return;
}elseif(func_330() && !func_329(iVar0)){
if(func_328(0)){
if(!MISC::IS_BIT_SET(uLocal_131, 10)){
func_327("FIX_HQ_APP_WAIT", -1);
MISC::SET_BIT(&uLocal_131, 10);
}}
func_326(2);
MISC::CLEAR_BIT(&uLocal_131, 4);
return;
}
switch (iVar0){
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
MISC::SET_BIT(&uLocal_131, 6);
func_326(8);
break;
case 203:
case 220:
case 221:
func_309();
func_326(3);
func_303(0);
func_296(1, 0);
break;
case 218:
func_294(iLocal_132);
break;
case 211:
case 212:
case 213:
func_292(iVar0);
break;
case 204:
case 219:
if(((func_290(0) && func_288(0)) && func_286()) && !func_284(1)){
if(!func_282(0)){
func_281();
func_326(3);
}
elseif(!func_280(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(Global_1981423.f_1, 23)){
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
func_264(iVar0);
break;
case 208:
case 209:
case 210:
func_262(iVar0);
break;
case 217:
if(MISC::IS_BIT_SET(uLocal_131, 16)){
if(!func_75(0)){
func_326(6);
}}elseif(MISC::IS_BIT_SET(uLocal_131, 17)){
MISC::SET_BIT(&uLocal_131, 6);
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
MISC::CLEAR_BIT(&uLocal_131, 4);
}}}


void func_70(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SET_CURRENT_SELECTION");
func_71(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_71(int iParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
}


void func_72(int iParam0, int iParam1){
if(func_74()){
func_326(2);
return;
}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
if(func_51(2, 0)){
func_326(2);
}else{
func_73(1);
}
break;
case 1:
if(!func_51(2, 0) || func_51(3, 0)){
func_326(2);
}else{
func_73(2);
}
break;
case 2:
if((!func_51(2, 0) || !func_51(3, 0)) || func_51(4, 0)){
func_326(2);
}else{
func_75(4);
}
break;
}
break;
case 1:
switch (iParam1){
case 0:
if(func_51(5, 0)){
func_326(2);
}else{
func_73(3);
}
break;
case 1:
if(!func_51(5, 0) || func_51(6, 0)){
func_326(2);
}else{
func_73(4);
}
break;
case 2:
if((!func_51(5, 0) || !func_51(6, 0)) || func_51(7, 0)){
func_326(2);
}else{
func_75(7);
}
break;
}
break;
case 2:
switch (iParam1){
case 0:
if(func_51(8, 0)){
func_326(2);
}else{
func_73(5);
}
break;
case 1:
if(!func_51(8, 0) || func_51(9, 0)){
func_326(2);
}else{
func_73(6);
}
break;
case 2:
if((!func_51(8, 0) || !func_51(9, 0)) || func_51(10, 0)){
func_326(2);
}else{
func_75(10);
}
break;
}
break;
}}


void func_73(int iParam0){
Global_1949965=1;
Global_75698=1;
func_2(264, iParam0, -1);
func_419(1, 1);
}


bool func_74(){
return Global_1981457 !=-1;
}

int func_75(int iParam0){
int iVar0;
struct<6> Var1;
int iVar7;
var uVar8;
var uVar9;
int iVar12;
struct<3> Var13;
var uVar16;
func_326(8);
iVar0=func_260(iParam0);
if(iVar0==-1){
return 0;
}
Var1={
Global_794709.f_4[iVar0 /*88*/] 
};
iVar7=Global_794709.f_4[iVar0 /*88*/].f_65;
uVar8=Global_794709.f_4[iVar0 /*88*/].f_71;
func_200(func_201(PLAYER::PLAYER_ID()));
func_188(PLAYER::PLAYER_ID(), 0, 376832, 0);
Global_2684799.f_3831=1;
func_187(PLAYER::PLAYER_ID(), 0);
func_186();
func_185();
iVar7=284;
func_184(77);
func_183();
func_182();
if(func_181() || func_180()){
func_179();
}else{
Global_1950108.f_507=1;
func_178(iVar7);
if(func_174() <=3){
func_173();
}
func_170(func_172(PLAYER::PLAYER_ID()));
func_168(&Var1);
func_167(uVar8);
func_166();
func_164();
func_163();
func_162();
func_161();
Var13={
0f, 0f, 0f 
};
MISC::SET_BIT(&uVar16, 8);
func_84(&(Global_2683862.f_781), 0, 0, Var13, &uVar9, Var13, 1, 0, &uVar9, &iVar12, iVar12, 0, uVar16);
func_76(0, 0);
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95=8;
func_419(0, 0);
return 1;
}
return 0;
}


void func_76(bool bParam0, int iParam1){
if(bParam0){
func_81(1, 0, 1);
}else{
func_77(iParam1);
}}


void func_77(int iParam0){
func_80();
if(iParam0==0){
if(LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()){
return;
}}
if(func_79()==0 || HUD::IS_PAUSE_MENU_ACTIVE()){
func_78(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
}}


void func_78(int iParam0){
if(Global_1574632.f_20 !=iParam0){
Global_1574632.f_20=iParam0;
}}

int func_79(){
return Global_1574632.f_20;
}


void func_80(){
Global_2696215=1;
}


void func_81(int iParam0, bool bParam1, bool bParam2){
if(func_82()){
return;
}
if((func_79()==1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0){
func_78(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
if(!bParam1){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
}
if(bParam2){
GRAPHICS::RESET_PAUSED_RENDERPHASES();
}}}

int func_82(){
if(func_83()){
return Global_2694451;
}
return 0;
}

int func_83(){
if(Global_2694444){
return Global_2694443;
}
return 0;
}


void func_84(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, struct<3> Param7, bool bParam10, bool bParam11, var uParam12, var uParam13, int iParam14, bool bParam15, var uParam16){
struct<3> Var0;
struct<3> Var3;
float fVar6;
bool bVar7;
float fVar8;
int iVar9;
int iVar10;
struct<3> Var11;
func_157(uParam0, iParam1, 1, iParam14, 1);
if(func_9(PLAYER::PLAYER_ID(), 0)){
if(bParam11){
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!func_156() || bParam15){
func_145(0);
}}
return;
}}
if(!CAM::DOES_CAM_EXIST(*uParam0)){
*uParam0=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
}
Var3={
Param7 
};
fVar6=-1f;
bVar7=false;
fVar8=0.2f;
iVar9=1;
if(func_144(iParam1)){
*uParam6={
func_143(iParam1, iParam2) 
};
Var3={
func_142(iParam1, iParam2) 
};
fVar6=func_141(iParam1, iParam2);
}
if(!func_140(*uParam6)){
Var0={
*uParam6 
};
}
if(func_140(Var0)){
if(!bParam10){
Var0={
Param3 
};
if(INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f))){
}else{
Var0.f_2=(Var0.f_2 + 4f);
}}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_140(Var0)){
if(func_9(PLAYER::PLAYER_ID(), 0)){
if(ENTITY::DOES_ENTITY_EXIST(func_137()) && !ENTITY::IS_ENTITY_DEAD(func_137(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(func_137(), 1) 
};
Var3={
0f, 0f, ENTITY::GET_ENTITY_HEADING(func_137()) 
};
if(func_136(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, 1, 0)){
Var0={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
Var3={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
}}else{
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var3={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
}}else{
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var3={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
}
if((func_135(PLAYER::PLAYER_ID()) || func_134(PLAYER::PLAYER_ID())) && func_133()){
Var0.f_2=(Var0.f_2 + 1.5f);
}elseif(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))){
if(func_135(PLAYER::PLAYER_ID())){
Var0.f_2=(Var0.f_2 + 0.4f);
}else{
Var0.f_2=(Var0.f_2 + 1.5f);
}}else{
Var0.f_2=(Var0.f_2 + 4f);
}}}
if(MISC::IS_BIT_SET(uParam16, 3)){
Var0={
1124.745f, 263.6554f, -48.8552f 
};
Var3={
-22.4617f, 0f, -75.8431f 
};
fVar6=50f;
}elseif(func_131(PLAYER::PLAYER_ID())){
Var0={
488.6712f, -2623.074f, -48.1159f 
};
Var3={
-9.1167f, 0f, 130.9763f 
};
fVar6=50f;
}elseif(func_130(Global_4718592.f_113724) || MISC::IS_BIT_SET(uParam16, 2)){
if(func_129(PLAYER::PLAYER_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var3={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
Var0.f_2=(Var0.f_2 + 0.4f);
fVar6=CAM::GET_FINAL_RENDERED_CAM_FOV();
}else{
Var0={
-194.2056f, -1853.75f, 70.3345f 
};
Var3={
-10.0011f, 0f, 131.0271f 
};
fVar6=42.6052f;
}}elseif(func_128(Global_4718592.f_113724) || MISC::IS_BIT_SET(uParam16, 1)){
Var0={
347.2638f, 4867.324f, -59.2679f 
};
Var3={
1.2933f, 0.0747f, -34.6934f 
};
fVar6=50f;
}elseif(MISC::IS_BIT_SET(uParam16, 4) || func_127(Global_4718592.f_113724)){
Var0={
2709.332f, -366.5988f, -52.2786f 
};
Var3={
-19.962f, 0f, -121.3927f 
};
fVar6=56.6574f;
}elseif(MISC::IS_BIT_SET(uParam16, 5)){
iVar10=func_126(PLAYER::PLAYER_ID());
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_125(iVar10), func_124(iVar10), 3.5688f, 7.9792f, 4.1641f) 
};
Var3={
-21.6791f, 0f, (func_124(iVar10) + 40.237f) 
};
fVar6=70f;
}elseif(MISC::IS_BIT_SET(uParam16, 6) || func_123()){
if(MISC::IS_BIT_SET(uParam16, 6)){
Var0={
Global_1977693.f_1073 
};
Var3={
Global_1977693.f_1073.f_3 
};
fVar6=Global_1977693.f_1073.f_6;
}else{
func_120(&Var0, &Var3, &fVar6);
}}elseif(MISC::IS_BIT_SET(uParam16, 7)){
Var0={
-1381.784f, 38.8164f, 63.1614f 
};
Var3={
-19.0288f, 0f, -35.2577f 
};
fVar6=50f;
}elseif(MISC::IS_BIT_SET(uParam16, 8) || func_119(Global_4718592.f_113724)){}elseif(MISC::IS_BIT_SET(uParam16, 9) || (func_117() && func_116(249))){
Var0={
-822.1176f, -198.5518f, 40.085f 
};
Var3={
13.7424f, 0f, 145.7582f 
};
fVar6=65.2994f;
bVar7=true;
if(!func_115()){
iVar9=0;
}}elseif(MISC::IS_BIT_SET(uParam16, 10)){}elseif(func_114(Global_4718592.f_113724)){
Var0={
800.2757f, -3051.393f, 10.5728f 
};
Var3={
3.1956f, 0f, -8.4268f 
};
fVar6=50f;
}elseif(MISC::IS_BIT_SET(uParam16, 11)){
Var0={
1403.907f, 3586.428f, 41.1676f 
};
Var3={
-8.8877f, 0f, 39.6448f 
};
fVar6=62f;
}elseif(MISC::IS_BIT_SET(uParam16, 12)){
Var0={
622.9118f, -396.3098f, 31.0305f 
};
Var3={
-10.3971f, 0f, 133.29f 
};
fVar6=60f;
}
if(func_156() && !bParam15){
Var0={
-213.5595f, 316.9778f, 96.9244f 
};
Var3={
-1.0483f, 0f, -127.3989f 
};
fVar6=25.5102f;
}
if(iParam1==0 && bParam11){
func_108();
func_107(&Var11, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
if(!func_140(Var11)){
Var0={
Var11 
};
}
func_101(&Var11, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
Var3={
Var11 
};
}
CAM::SET_CAM_ACTIVE(*uParam0, 1);
CAM::SET_CAM_COORD(*uParam0, Var0);
CAM::SET_CAM_ROT(*uParam0, Var3, 2);
if(fVar6 > 0f){
CAM::SET_CAM_FOV(*uParam0, fVar6);
}else{
CAM::SET_CAM_FOV(*uParam0, 40f);
}
if(bVar7){
CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fVar8);
}
if(func_156() && !bParam15){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_100(PLAYER::PLAYER_ID())){
func_188(PLAYER::PLAYER_ID(), 0, 4, 0);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -209.434f, 305.016f, 95.9464f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 12.5f);
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 1193033728, 0.1f);
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}
MISC::CLEAR_AREA_OF_VEHICLES(-209.434f, 305.016f, 95.9464f, 30f, 0, 0, 0, 0, 0, 0, 0);
func_99(1);
}
if(iVar9 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!func_156() || bParam15){
func_145(0);
}}
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
if((((!func_98() && !func_97()) && !func_96()) && !func_95()) && !func_94()){
func_93(0);
}
if(func_92()){
STREAMING::CLEAR_FOCUS();
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
*uParam12={
Var0 
};
*uParam13=1;
}else{
func_91(Var0);
}
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_85(func_156(), ((MISC::IS_BIT_SET(uParam16, 0) || MISC::IS_BIT_SET(uParam16, 1)) || MISC::IS_BIT_SET(uParam16, 2)));
}


void func_85(bool bParam0, bool bParam1){
if(func_9(PLAYER::PLAYER_ID(), 0)){
return;
}
if(!bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
}}}
if(!bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_88()){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}
if(func_87(PLAYER::PLAYER_ID())){
func_188(PLAYER::PLAYER_ID(), 0, 32768, 0);
}elseif(func_86()){
func_188(PLAYER::PLAYER_ID(), 0, 32772, 0);
}elseif(!bParam1){
func_188(PLAYER::PLAYER_ID(), 0, 319492, 0);
}}else{
func_188(PLAYER::PLAYER_ID(), 0, 57348, 0);
}}}


bool func_86(){
return Global_2684799.f_6341;
}

int func_87(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1890444[iParam0 /*129*/].f_29, 31);
}
return 0;
}

int func_88(){
var uVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_90(uVar0, 1) && !func_89(uVar0, 1)){
return 1;
}}
return 0;
}

int func_89(var uParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(uParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
return 1;
}}}}
return 0;
}

int func_90(var uParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "Player_Vehicle")){
return 1;
}}}
return 0;
}


void func_91(struct<3> Param0){
if(!func_92()){
return;
}
STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(1);
}

int func_92(){
if(func_9(PLAYER::PLAYER_ID(), 0)){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802 !=func_19()){
if(func_12(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, 0, 1)){
if(func_136(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, 1, 0)){
return 0;
}}}}
return 1;
}


void func_93(int iParam0){
if(func_82()){
return;
}
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1){
return;
}
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_IN(iParam0);
}}


bool func_94(){
return MISC::IS_BIT_SET(Global_2683862.f_3, 17);
}


bool func_95(){
return MISC::IS_BIT_SET(Global_2683862.f_3, 14);
}


bool func_96(){
return MISC::IS_BIT_SET(Global_2683862.f_3, 12);
}


bool func_97(){
return MISC::IS_BIT_SET(Global_2683862.f_3, 9);
}


bool func_98(){
return MISC::IS_BIT_SET(Global_2683862.f_3, 6);
}


void func_99(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
}else{
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
}}


bool func_100(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_143, 27);
}

int func_101(var uParam0, int iParam1, int iParam2){
struct<4> Var0;
switch (iParam2){
case default:
return 0;
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
func_102(iParam2, iParam1, &Var0, -1, 0);
*uParam0={
Var0.f_3 
};
return 1;
case 61:
case 62:
case 63:
case 64:
case 65:
func_102(iParam2, iParam1, &Var0, 61, 0);
*uParam0={
Var0.f_3 
};
return 1;
case 83:
case 84:
case 85:
func_102(iParam2, iParam1, &Var0, 83, 0);
*uParam0={
Var0.f_3 
};
return 1;
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
func_102(iParam2, iParam1, &Var0, 77, 0);
*uParam0={
Var0.f_3 
};
return 1;
case 73:
case 74:
case 75:
case 76:
func_102(iParam2, iParam1, &Var0, 73, 0);
*uParam0={
Var0.f_3 
};
return 1;
case 87:
case 88:
case 89:
case 90:
func_102(iParam2, iParam1, &Var0, 88, 0);
*uParam0={
Var0.f_3 
};
return 1;
return 0;
}}


void func_102(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<6> Var0[2];
struct<3> Var13;
Var0[0 /*6*/]={
func_106(iParam3, bParam4) 
};
Var0[1 /*6*/]={
func_106(iParam0, bParam4) 
};
*uParam2={
func_104(iParam1, iParam3) 
};
Var13={
*uParam2 - Var0[0 /*6*/] 
};
Var13={
func_103(Var13, -Var0[0 /*6*/].f_3.f_2) 
};
Var13={
func_103(Var13, Var0[1 /*6*/].f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0[1 /*6*/], 0f, Var13) 
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
while (Var0[0 /*6*/].f_3.f_2 > 180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 - 360f);
}
while (Var0[0 /*6*/].f_3.f_2 < -180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 + 360f);
}
while (Var0[1 /*6*/].f_3.f_2 > 180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 - 360f);
}
while (Var0[1 /*6*/].f_3.f_2 < -180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 + 360f);
}
uParam2->f_3.f_2=(uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 - 360f);
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 + 360f);
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
while (Var0[0 /*6*/].f_3.f_2 > 180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 - 360f);
}
while (Var0[0 /*6*/].f_3.f_2 < -180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 + 360f);
}
while (Var0[1 /*6*/].f_3.f_2 > 180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 - 360f);
}
while (Var0[1 /*6*/].f_3.f_2 < -180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 + 360f);
}
uParam2->f_3.f_2=(uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 - 360f);
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 + 360f);
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
while (Var0[0 /*6*/].f_3.f_2 > 180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 - 360f);
}
while (Var0[0 /*6*/].f_3.f_2 < -180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 + 360f);
}
while (Var0[1 /*6*/].f_3.f_2 > 180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 - 360f);
}
while (Var0[1 /*6*/].f_3.f_2 < -180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 + 360f);
}
uParam2->f_3.f_2=(uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 - 360f);
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 + 360f);
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
while (Var0[0 /*6*/].f_3.f_2 > 180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 - 360f);
}
while (Var0[0 /*6*/].f_3.f_2 < -180f){
Var0[0 /*6*/].f_3.f_2=(Var0[0 /*6*/].f_3.f_2 + 360f);
}
while (Var0[1 /*6*/].f_3.f_2 > 180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 - 360f);
}
while (Var0[1 /*6*/].f_3.f_2 < -180f){
Var0[1 /*6*/].f_3.f_2=(Var0[1 /*6*/].f_3.f_2 + 360f);
}
uParam2->f_3.f_2=(uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 - 360f);
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=(uParam2->f_3.f_2 + 360f);
}
break;
}}


Vector3 func__103(struct<3> Param0, float fParam3){
struct<3> Var0;
float fVar3;
float fVar4;
fVar3=SYSTEM::SIN(fParam3);
fVar4=SYSTEM::COS(fParam3);
Var0.f_0=((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
Var0.f_1=((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
Var0.f_2=Param0.f_2;
return Var0;
}


struct<6> func_104(var uParam0, int iParam1){
struct<6> Var0;
var uVar6;
int iVar23;
iVar23=0;
if(func_105(iParam1, &uVar6)){
iVar23=1;
}
if(iVar23 && MISC::GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(&Var0, &(Var0.f_3), uParam0, uVar6)){
return Var0;
}
return Var0;
}

int func_105(int iParam0, var uParam1){
switch (iParam0){
case -1:
case 1:
*uParam1=0;
StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
return 1;
break;
case 61:
*uParam1=1;
StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
return 1;
break;
case 73:
*uParam1=2;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
return 1;
break;
case 77:
*uParam1=3;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
return 1;
break;
case 83:
*uParam1=4;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
return 1;
break;
case 86:
*uParam1=5;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
return 1;
break;
case 88:
*uParam1=6;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
return 1;
break;
case 91:
*uParam1=7;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
return 1;
break;
case 97:
*uParam1=8;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
return 1;
break;
case 109:
*uParam1=9;
StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
return 1;
break;
}
return 0;
}


struct<6> func_106(int iParam0, bool bParam1){
struct<6> Var0;
switch (iParam0){
case -1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 2:
Var0={
-761.0982f, 317.6259f, 169.5963f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
-761.1888f, 317.6295f, 216.0503f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
-795.3856f, 340.0188f, 152.7941f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 61:
Var0={
-778.5056f, 332.3779f, 212.1968f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 5:
Var0={
-258.1807f, -950.6853f, 70.0239f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 6:
Var0={
-285.0051f, -957.6552f, 85.3035f 
};
Var0.f_3={
0f, 0f, -110f 
};
break;
case 7:
Var0={
-1471.882f, -530.7484f, 62.34918f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 34:
Var0={
-1471.882f, -530.7484f, 49.72156f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 62:
Var0={
-1463.15f, -540.2369f, 74.2439f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 35:
Var0={
-885.3702f, -451.4775f, 119.327f 
};
Var0.f_3={
0f, 0f, 27.55617f 
};
break;
case 36:
Var0={
-913.0385f, -438.4284f, 114.3997f 
};
Var0.f_3={
0f, 0f, -153.3093f 
};
break;
case 37:
Var0={
-892.5499f, -430.4789f, 88.25368f 
};
Var0.f_3={
0f, 0f, 116.9193f 
};
break;
case 38:
Var0={
-35.0462f, -576.317f, 82.90739f 
};
Var0.f_3={
0f, 0f, 160f 
};
break;
case 39:
Var0={
-10.3788f, -590.7431f, 93.02542f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 65:
Var0={
-22.2487f, -589.1461f, 80.2305f 
};
Var0.f_3={
0f, 0f, 69.88f 
};
break;
case 40:
Var0={
-900.6311f, -376.7462f, 78.27306f 
};
Var0.f_3={
0f, 0f, 26.92611f 
};
break;
case 41:
Var0={
-929.483f, -374.5104f, 102.2329f 
};
Var0.f_3={
0f, 0f, -152.5531f 
};
break;
case 63:
Var0={
-914.4202f, -375.8189f, 114.4743f 
};
Var0.f_3={
0f, 0f, -63f 
};
break;
case 42:
Var0={
-617.1647f, 64.6042f, 100.8196f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 43:
Var0={
-584.2015f, 42.7133f, 86.4187f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
-609.5665f, 50.2203f, 98.3998f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 73:
Var0={
-171.3969f, 494.2671f, 134.4935f 
};
Var0.f_3={
0f, 0f, 11f 
};
break;
case 74:
Var0={
339.4982f, 434.0887f, 146.2206f 
};
Var0.f_3={
0f, 0f, -63.5f 
};
break;
case 75:
Var0={
-761.3884f, 615.7333f, 140.9805f 
};
Var0.f_3={
0f, 0f, -71.5f 
};
break;
case 76:
Var0={
-678.1752f, 591.0076f, 142.2196f 
};
Var0.f_3={
0f, 0f, 40.5f 
};
break;
case 77:
Var0={
120.0541f, 553.793f, 181.0943f 
};
Var0.f_3={
0f, 0f, 6f 
};
break;
case 78:
Var0={
-571.4039f, 655.2008f, 142.6293f 
};
Var0.f_3={
0f, 0f, -14.5f 
};
break;
case 79:
Var0={
-742.2565f, 587.6547f, 143.0577f 
};
Var0.f_3={
0f, 0f, -29f 
};
break;
case 80:
Var0={
-857.2222f, 685.051f, 149.6502f 
};
Var0.f_3={
0f, 0f, 4.5f 
};
break;
case 81:
Var0={
-1287.65f, 443.2707f, 94.6919f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 82:
Var0={
374.2012f, 416.9688f, 142.6977f 
};
Var0.f_3={
0f, 0f, -14f 
};
break;
case 83:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 84:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 85:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 86:
Var0={
-1573.098f, -4085.806f, 9.7851f 
};
Var0.f_3={
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
Var0={
342.8157f, -997.4288f, -100f 
};
Var0.f_3={
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
Var0={
260.3297f, -997.4288f, -100f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 87:
Var0={
-1572.187f, -570.8315f, 109.9879f 
};
Var0.f_3={
0f, 0f, -54f 
};
break;
case 88:
Var0={
-1383.954f, -476.7112f, 73.507f 
};
Var0.f_3={
0f, 0f, 8f 
};
break;
case 89:
Var0={
-138.0029f, -629.739f, 170.2854f 
};
Var0.f_3={
0f, 0f, -84f 
};
break;
case 90:
Var0={
-74.8895f, -817.6883f, 244.8508f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
Var0={
1100.764f, -3159.384f, -34.9342f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
Var0={
1005.806f, -3157.67f, -36.0897f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 103:
if(!bParam1){
Var0={
-1576.571f, -569.7595f, 85.5f 
};
Var0.f_3={
0f, 0f, 36.1f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 104:
if(!bParam1){
Var0={
-1571.254f, -566.5865f, 85.5f 
};
Var0.f_3={
0f, 0f, -53.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 105:
if(!bParam1){
Var0={
-1568.098f, -571.9171f, 85.5f 
};
Var0.f_3={
0f, 0f, -143.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 106:
if(!bParam1){
Var0={
-1384.518f, -475.8657f, 56.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 107:
if(!bParam1){
Var0={
-1384.538f, -475.8829f, 48.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 108:
if(!bParam1){
Var0={
-1378.994f, -477.2481f, 56.1f 
};
Var0.f_3={
0f, 0f, -81.1f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 109:
if(!bParam1){
Var0={
-186.5683f, -576.4624f, 135f 
};
Var0.f_3={
0f, 0f, 96.16f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 110:
if(!bParam1){
Var0={
-113.886f, -564.3862f, 135f 
};
Var0.f_3={
0f, 0f, 110.96f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 111:
if(!bParam1){
Var0={
-134.6568f, -635.1774f, 135f 
};
Var0.f_3={
0f, 0f, -9.04f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 112:
if(!bParam1){
Var0={
-79.0479f, -822.6393f, 221f 
};
Var0.f_3={
0f, 0f, 70f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 113:
if(!bParam1){
Var0={
-70.3086f, -819.5784f, 221f 
};
Var0.f_3={
0f, 0f, 160f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 114:
if(!bParam1){
Var0={
-79.9861f, -818.425f, 221f 
};
Var0.f_3={
0f, 0f, -20f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
}
return Var0;
}

int func_107(var uParam0, int iParam1, int iParam2){
struct<3> Var0;
switch (iParam2){
case default:
return 0;
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
func_102(iParam2, iParam1, &Var0, -1, 0);
*uParam0={
Var0 
};
return 1;
case 61:
case 62:
case 63:
case 64:
case 65:
func_102(iParam2, iParam1, &Var0, 61, 0);
*uParam0={
Var0 
};
return 1;
case 83:
case 84:
case 85:
func_102(iParam2, iParam1, &Var0, 83, 0);
*uParam0={
Var0 
};
return 1;
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
func_102(iParam2, iParam1, &Var0, 77, 0);
*uParam0={
Var0 
};
return 1;
case 73:
case 74:
case 75:
case 76:
func_102(iParam2, iParam1, &Var0, 73, 0);
*uParam0={
Var0 
};
return 1;
case 87:
case 88:
case 89:
case 90:
func_102(iParam2, iParam1, &Var0, 88, 0);
*uParam0={
Var0 
};
return 1;
return 0;
}}


void func_108(){
int iVar0;
if(func_111()){
return;
}
func_110(4, -1);
if(func_109()){
return;
}
iVar0=0;
while (iVar0 < 32){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0))){
if(PLAYER::INT_TO_PLAYERINDEX(iVar0)==PLAYER::PLAYER_ID()){
if(!func_116(48)){
NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0);
}}else{
NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0);
}}
iVar0++;
}}


bool func_109(){
return MISC::IS_BIT_SET(Global_2683862.f_43.f_4, 0);
}


void func_110(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1){
Global_1653913.f_170[iParam1]=1;
}
break;
}}

int func_111(){
if(func_113() !=2){
return 0;
}
if(!func_109() && !((Global_1943594 || Global_1574964) && func_112())){
return 0;
}
return 1;
}


var func__112(){
return Global_2683862.f_43.f_57;
}

int func_113(){
return Global_2683862.f_43.f_40;
}

int func_114(int iParam0){
int iVar0;
if(iParam0 !=0){
iVar0=0;
while (iVar0 < Global_262145.f_6211[18]){
if(iParam0==Global_262145.f_5066[18 /*51*/][iVar0]){
return 1;
}
iVar0++;
}}
return 0;
}


bool func_115(){
return Global_2683862.f_692;
}

int func_116(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
if(iVar0 >=8){
return 0;
}
return MISC::IS_BIT_SET(Global_2684799.f_1.f_2813[iVar0], iVar1);
}

int func_117(){
return func_118(Global_4718592.f_113724);
}

int func_118(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(Global_262145.f_31722[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_119(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_31715[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_120(var uParam0, var uParam1, float fParam2){
if(func_122(Global_4718592.f_113724)){
if(MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(0) - 1.333333f)) < 0.1f){
*uParam0={
1561.161f, 384.824f, -48.6215f 
};
*uParam1={
-89.3034f, -0.1435f, 180f 
};
*fParam2=69f;
}else{
*uParam0={
1561.16f, 384.8204f, -48.9135f 
};
*uParam1={
-89.5003f, -0.204f, 180f 
};
*fParam2=69f;
}}elseif(func_121(Global_4718592.f_113724)){
*uParam0={
-1348.956f, 138.2791f, -94.7272f 
};
*uParam1={
-2.4593f, 0f, -164.9275f 
};
*fParam2=70f;
}}

int func_121(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31051[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_122(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 11){
if(Global_262145.f_29933[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_123(){
if(func_122(Global_4718592.f_113724)){
return 1;
}
return 0;
}


float func_124(int iParam0){
return Global_4280768[iParam0 /*45*/].f_7;
}


Vector3 func__125(int iParam0){
return Global_4280768[iParam0 /*45*/].f_4;
}


var func__126(int iParam0){
return Global_2652258[iParam0 /*3*/];
}

int func_127(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 21){
if(Global_262145.f_6087[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_128(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5042[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_129(int iParam0){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_200, 24);
}

int func_130(int iParam0){
int iVar0;
int iVar1;
if(iParam0 !=0){
iVar1=0;
while (iVar1 < 19){
if(Global_262145.f_6891[iVar1]==251){
iVar0=0;
while (iVar0 < Global_262145.f_6211[iVar1]){
if(iParam0==Global_262145.f_5066[iVar1 /*51*/][iVar0]){
return 1;
}
iVar0++;
}}
iVar1++;
}}
return 0;
}

int func_131(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_19()){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==25;
}}}
return 0;
}

int func_132(int iParam0){
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
break;
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
break;
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
break;
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
break;
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
break;
case 81:
return 5;
break;
case 82:
return 6;
break;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
break;
case 88:
return 8;
break;
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
break;
case 101:
return 10;
break;
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
break;
case 117:
return 12;
break;
case 122:
return 13;
break;
case 123:
return 14;
break;
case 124:
return 15;
break;
case 125:
return 16;
break;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
break;
case 145:
return 18;
break;
case 146:
return 19;
break;
case 147:
return 20;
break;
case 148:
return 21;
break;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
break;
case 154:
return 23;
break;
case 155:
case 156:
case 157:
case 158:
return 24;
break;
case 159:
return 25;
break;
case 160:
return 26;
break;
case 161:
return 27;
break;
}
return -1;
}


var func__133(){
return MISC::IS_BIT_SET(Global_2683862.f_3, 4);
}

int func_134(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==6;
}}}
return 0;
}

int func_135(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_19()){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_136(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_19()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}


var func__137(){
if(ENTITY::DOES_ENTITY_EXIST(func_139())){
return func_139();
}
return func_138();
}


var func__138(){
return Global_2621446.f_2;
}


var func__139(){
return Global_2621446.f_3;
}

int func_140(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


float func_141(int iParam0, int iParam1){
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
}
break;
case 14:
return 50f;
}
return 50f;
}


Vector3 func__142(int iParam0, int iParam1){
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
}
break;
case 14:
switch (iParam1){
case 0:
return 8.8196f, 0f, 57.5677f;
default:
}
break;
}
return 0f, 0f, 0f;
}


Vector3 func__143(int iParam0, int iParam1){
switch (iParam0){
case 11:
return -1297.855f, 84.6478f, 54.6519f;
case 122:
return -855.7661f, -2645.376f, 100.8438f;
case 13:
switch (iParam1){
case 0:
return 13.4678f, -1097.781f, 30.192f;
case 1:
return 816.6221f, -2160.659f, 30.3139f;
default:
}
break;
case 12:
switch (iParam1){
case 0:
return -1172.111f, -1641.549f, 5.7494f;
case 1:
return 498.4758f, -226.4275f, 71.0569f;
case 2:
return -1217.632f, 364.4556f, 86.527f;
case 3:
return -2884.754f, 32.9823f, 15.1123f;
case 4:
return -948.1036f, -1260.249f, 8.228f;
case 5:
return -1614.216f, 302.0945f, 66.0158f;
case 6:
return -1380.721f, -107.9713f, 50.6998f;
default:
}
break;
case 15:
switch (iParam1){
case 0:
return 903.8763f, -192.214f, 74.6401f;
case 1:
return 1419.517f, -2216.034f, 61.8467f;
case 2:
return -83.9713f, -1331.635f, 29.8383f;
case 3:
return 364.6455f, -2441.897f, 6.2607f;
case 4:
return 1237.207f, 2715.999f, 37.6424f;
case 5:
return 1019.153f, 2680.427f, 41.2254f;
case 6:
return 269.5203f, 2617.41f, 44.7054f;
case 7:
return -194.2518f, 6295.688f, 31.0991f;
case 8:
return 1682.759f, 4954.088f, 42.6891f;
case 9:
return 2325.447f, 3145.91f, 58.4284f;
default:
}
break;
case 14:
switch (iParam1){
case 0:
return 1993.697f, 3049.667f, 47.7241f;
default:
}
break;
}
return 0f, 0f, 0f;
}

int func_144(int iParam0){
switch (iParam0){
case 15:
case 14:
case 11:
case 13:
case 12:
case 122:
return 1;
default:
}
return 0;
}


void func_145(int iParam0){
if(!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_146(0))){
GRAPHICS::ANIMPOSTFX_PLAY(func_146(iParam0), 0, 1);
}}


char* func_146(int iParam0){
if(func_155(Global_4718592.f_113724)){
return "MenuMGIslandHeistIn";
}
if(iParam0 || func_116(134)){
return "MenuMGHeistIn";
}
if(func_154()){
return "MenuMGTournamentIn";
}
if(func_148(Global_4718592.f_166301)){
return "MenuMGRemixIn";
}
if(func_147(Global_4718592.f_166301) && MISC::IS_BIT_SET(Global_4718592.f_167679.f_2808, 2)){
return "MenuSurvivalAlienIn";
}
return "MenuMGSelectionIn";
}


bool func_147(int iParam0){
return iParam0==998;
}

int func_148(int iParam0){
if((((func_153(iParam0) || func_152(iParam0)) || func_151(iParam0)) || func_150(iParam0)) || func_149(iParam0)){
return 1;
}
return 0;
}


bool func_149(int iParam0){
return iParam0==64;
}


bool func_150(int iParam0){
return iParam0==65;
}


bool func_151(int iParam0){
return iParam0==69;
}


bool func_152(int iParam0){
return iParam0==67;
}


bool func_153(int iParam0){
return iParam0==68;
}


bool func_154(){
return MISC::IS_BIT_SET(Global_2684799.f_1.f_2809, 12);
}

int func_155(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 11){
if(Global_262145.f_29933[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_156(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 2);
}


void func_157(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
if((iParam1 !=0 && iParam1 !=3) || iParam2==1){
if(CAM::DOES_CAM_EXIST(*uParam0)){
CAM::SET_CAM_ACTIVE(*uParam0, 0);
if(bParam4){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
}
CAM::DESTROY_CAM(*uParam0, 0);
*uParam0=0;
func_162();
if(func_92()){
STREAMING::CLEAR_FOCUS();
}
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
if(Global_1574534==0 && iParam3==1){
func_76(1, 0);
func_76(1, 0);
}
if(!func_160()){
if(func_159() || func_158()){
if(!Global_2692733.f_7){
HUD::BUSYSPINNER_OFF();
}}else{
HUD::BUSYSPINNER_OFF();
}}}}}


var func__158(){
return (MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A());
}


var func__159(){
return (MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33());
}


bool func_160(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 0);
}


void func_161(){
Global_2683862.f_717=1;
}


void func_162(){
MISC::CLEAR_BIT(&Global_2683862, 15);
}


void func_163(){
MISC::CLEAR_BIT(&Global_2683862, 7);
}


void func_164(){
MISC::SET_BIT(&Global_2683862, 5);
func_165();
}


void func_165(){
MISC::SET_BIT(&Global_2683862, 8);
}


void func_166(){
MISC::CLEAR_BIT(&(Global_2683862.f_2), 14);
}


void func_167(var uParam0){
Global_2683862.f_42=uParam0;
}


void func_168(char* sParam0){
StringCopy(&(Global_2683862.f_860), sParam0, 24);
if(func_169()){
StringCopy(&(Global_1048576.f_44), sParam0, 24);
}}


bool func_169(){
return MISC::IS_BIT_SET(Global_2684799.f_1.f_2809, 5);
}


void func_170(struct<13> Param0){
if(func_171(Param0)){
Global_2684799.f_6591={
Param0 
};
}}


bool func_171(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}
struct<13> func_172(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


void func_173(){
MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 12);
}

int func_174(){
if(func_177()==func_19()){
return 0;
}
return func_175(func_177());
}

int func_175(int iParam0){
if(func_176(iParam0)==func_19()){
return 0;
}
return Global_1894573[iParam0 /*608*/].f_10.f_19;
}

int func_176(int iParam0){
if(iParam0 !=func_19()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_19();
}

int func_177(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


void func_178(int iParam0){
Global_2683862.f_9=iParam0;
}


void func_179(){
Global_2683862.f_756=1;
}


var func__180(){
return Global_2683862.f_756;
}


bool func_181(){
return MISC::IS_BIT_SET(Global_2683862.f_2, 11);
}


void func_182(){
MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 29);
}


void func_183(){
MISC::SET_BIT(&(Global_2683862.f_3), 15);
}


void func_184(int iParam0){
Global_1057409=iParam0;
}


void func_185(){
MISC::SET_BIT(&(Global_2683862.f_3), 2);
}


void func_186(){
Global_2692733.f_1=0;
}


void func_187(int iParam0, int iParam1){
int iVar0;
iVar0=0;
if(DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
}
MISC::SET_BIT(&iVar0, iParam1);
DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}


void func_188(int iParam0, bool bParam1, int iParam2, int iParam3){
var uVar0;
bool bVar1;
bool bVar2;
bool bVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
bool bVar9;
bool bVar10;
bool bVar11;
bool bVar12;
bool bVar13;
bool bVar14;
bool bVar15;
bool bVar16;
bool bVar17;
bool bVar18;
bool bVar19;
bool bVar20;
bool bVar21;
bool bVar22;
bool bVar23;
bool bVar24;
bool bVar25;
bool bVar26;
var uVar27;
int iVar28;
if(bParam1){
if(SCRIPT::GET_NO_LOADING_SCREEN()){
SCRIPT::SET_NO_LOADING_SCREEN(0);
}}
if(func_199()){
if(bParam1){
return;
}else{
iParam3=1;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar0=iParam2;
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
}else{
bVar1=true;
bVar2=iParam2 & 2 !=false;
bVar3=iParam2 & 4 !=false;
bVar4=iParam2 & 8 !=false;
bVar5=iParam2 & 16 !=false;
bVar6=iParam2 & 32 !=false;
bVar7=iParam2 & 64 !=false;
bVar8=iParam2 & 128 !=false;
bVar9=iParam2 & 256 !=false;
bVar10=iParam2 & 512 !=false;
bVar11=iParam2 & 1024 !=false;
bVar12=iParam2 & 2048 !=false;
bVar13=iParam2 & 4096 !=false;
bVar14=iParam2 & 8192 !=false;
bVar15=iParam2 & 16384 !=false;
bVar16=iParam2 & 32768 !=false;
bVar17=iParam2 & 65536 !=false;
bVar18=iParam2 & 131072 !=false;
bVar19=iParam2 & 262144 !=false;
bVar20=iParam2 & 524288 !=false;
bVar21=iParam2 & 1048576 !=false;
bVar22=iParam2 & 2097152 !=false;
bVar23=iParam2 & 4194304 !=false;
bVar24=iParam2 & 8388608 !=false;
bVar25=iParam2 & 16777216 !=false;
if(iParam2 & 33554432 !=0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
bVar1=false;
}
if(!func_197()){
bVar26=false;
if(bParam1==1){
bVar26=true;
}
if(bVar16==0 && !bVar21){
bVar26=true;
}
if(bVar10==1){
bVar26=true;
}
if(bVar26){
return;
}}
if(bVar18){
}
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3==1)){
if(iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0)){
return;
}
uVar27=PLAYER::GET_PLAYER_PED(iParam0);
if(!bVar20){
if((bVar19 && bParam1==0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::FADE_OUT_LOCAL_PLAYER(1);
}elseif(bVar14 || (!func_9(PLAYER::PLAYER_ID(), 0) && !func_196())){
ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657589[iParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_193(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_192(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
}}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}elseif(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uVar27)){
PED::FINALIZE_HEAD_BLEND(uVar27);
}
PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==0){
func_191();
func_190();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(!bVar23){
}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}
Global_2657589[iParam0 /*466*/].f_255=0;
if(!bVar24){
bVar3=true;
}
if(Global_2635559.f_2681){
Global_2635559.f_2681=0;
}}else{
if(!func_192(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
}
if(!bVar16){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}}
if(func_189(Global_4718592.f_166301)){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
}}
if(Global_1575035){
bVar10=false;
}
if(bVar10){
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
}else{
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
if(bVar3){
if(!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
}}}
iVar28=0;
if(bVar2){
iVar28 |=2;
}
if(bVar3){
iVar28 |=4;
}
if(bVar4){
iVar28 |=8;
}
if(bVar5){
iVar28 |=16;
}
if(bVar6){
iVar28 |=32;
}
if(bVar7){
iVar28 |=64;
}
if(bVar8){
iVar28 |=128;
}
if(bVar9){
iVar28 |=256;
}
if(bVar10){
iVar28 |=512;
}
if(bVar11){
iVar28 |=1024;
}
if(bVar12){
iVar28 |=2048;
}
if(bVar13){
iVar28 |=4096;
}
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
}}}


bool func_189(int iParam0){
return iParam0==17;
}


void func_190(){
struct<3> Var0;
Global_2672505.f_1023=0;
Global_2672505.f_1024=0;
Global_2672505.f_1025={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672505.f_1030=-1;
Global_2672505.f_1031=0;
Global_2635559.f_2692={
Var0 
};
}


void func_191(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_192(var uParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_193(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(ENTITY::IS_ENTITY_DEAD(iParam1, 0)){}
if(iParam0==1){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(PED::IS_PED_A_PLAYER(iParam1)){
if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1))){
iVar0=1;
}}}}
if(iVar0==0){
if(iParam2==1){
if(iParam0==1){
func_195();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), 1);
}}
if(func_9(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_194(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_194(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_195(){
int iVar0;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar0=0;
while (iVar0 < 8){
Global_2621446.f_58[iVar0]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
iVar0++;
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), 0);
}}}


bool func_196(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_197(){
if(func_198()==0){
return 1;
}
return 0;
}

int func_198(){
return Global_1574632.f_18;
}

int func_199(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1){
return 1;
}
return 0;
}


void func_200(struct<3> Param0){
Global_2694511={
Param0 
};
}


Vector3 func__201(int iParam0){
struct<3> Var0;
if(HUD::DOES_BLIP_EXIST(Global_2646729[iParam0])){
Var0={
func_259(Global_2646729[iParam0]) 
};
}elseif(HUD::DOES_BLIP_EXIST(Global_2646729.f_33[iParam0]) && !iParam0==Global_2672505){
Var0={
func_259(Global_2646729.f_33[iParam0]) 
};
}
if(SYSTEM::VMAG(Var0) > 0f){
return Var0;
}
return func_202(iParam0);
}


Vector3 func__202(int iParam0){
int iVar0;
struct<3> Var1;
int iVar4;
if(Global_2644534){
if(func_258(iParam0)){
Var1={
func_257(iParam0) 
};
if(SYSTEM::VMAG(Var1) > 0f){
return Var1;
}}
if(Global_2657589[iParam0 /*466*/].f_73.f_11){
if(SYSTEM::VMAG(Global_2657589[iParam0 /*466*/].f_73.f_12) > 0f){
return Global_2657589[iParam0 /*466*/].f_73.f_12;
}}}
if(Global_1853910[iParam0 /*862*/].f_267.f_33 > 0){
Var1={
func_255(func_256(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33)) 
};
if(SYSTEM::VMAG(Var1) > 0f){
return Var1;
}}else{
func_252(func_254(iParam0), &iVar0);
if(iVar0 > 0){
Var1={
func_255(func_256(iVar0)) 
};
if(SYSTEM::VMAG(Var1) > 0f){
return Var1;
}}}
if(func_251(iParam0)){
Var1={
func_205(iParam0) 
};
if(SYSTEM::VMAG(Var1) > 0f){
return Var1;
}}
if(func_204(iParam0)){
iVar4=func_203(iParam0);
if(iVar4 > -1){
Var1={
Global_1950108.f_542[iVar4 /*3*/] 
};
if(SYSTEM::VMAG(Var1) > 0f){
return Var1;
}}}
if(!Global_2644534){
if(func_258(iParam0)){
Var1={
func_257(iParam0) 
};
if(SYSTEM::VMAG(Var1) > 0f){
return Var1;
}}
if(Global_2657589[iParam0 /*466*/].f_73.f_11){
if(SYSTEM::VMAG(Global_2657589[iParam0 /*466*/].f_73.f_12) > 0f){
return Global_2657589[iParam0 /*466*/].f_73.f_12;
}}}
return func_254(iParam0);
}

int func_203(int iParam0){
if(iParam0 !=func_19()){
return Global_2657589[iParam0 /*466*/].f_321.f_16;
}
return -1;
}

int func_204(int iParam0){
int iVar0;
if(iParam0 !=func_19() && (func_12(iParam0, 1, 1) || Global_2635559.f_2680)){
iVar0=MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 1);
return iVar0;
}
return 0;
}


Vector3 func__205(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
if(iParam0==func_19()){}
if(func_135(iParam0)){
iVar0=func_250(iParam0);
if(iVar0 !=func_19()){
if(!func_249(iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_253[iVar0 /*3*/][1])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_253[iVar0 /*3*/][1], 0);
}else{
return Global_2657589[func_250(iParam0) /*466*/].f_321.f_12;
}}else{
iVar1=func_246(iVar0);
if(!iVar1==-1){
return Global_1950108.f_542[iVar1 /*3*/];
}}}}elseif(func_131(iParam0)){
iVar2=func_245(iParam0);
if(iVar2 !=func_19()){
if(!func_244(iVar2)){
if(ENTITY::DOES_ENTITY_EXIST(Global_1968145[iVar2])){
return ENTITY::GET_ENTITY_COORDS(Global_1968145[iVar2], 0);
}else{
return Global_2657589[func_250(iParam0) /*466*/].f_321.f_12;
}}else{
iVar3=160;
if(!iVar3==-1){
return Global_1950108.f_542[iVar3 /*3*/];
}}}}elseif(func_134(iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_308)){
return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_308, 0);
}}elseif(func_243(iParam0) && !func_242(iParam0)){
iVar4=Global_2657589[iParam0 /*466*/].f_321.f_10;
if(iVar4 !=func_19()){
iVar5=func_246(iVar4);
if(!iVar5==-1){
return Global_1950108.f_542[iVar5 /*3*/];
}}}elseif(func_241(iParam0) && !func_240(iParam0)){
if(func_251(iParam0) && func_239()){
return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
}
iVar6=Global_2657589[iParam0 /*466*/].f_321.f_10;
if(iVar6 !=func_19()){
if(func_238(iVar6)){
iVar7=func_235(iVar6);
if(iVar7 !=-1){
return Global_1950108.f_542[iVar7 /*3*/];
}}}}elseif(func_234(iParam0)){
iVar8=func_233(iParam0);
if(iVar8 !=func_19()){
if(!func_232(iVar8)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_350[iVar8])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_350[iVar8], 0);
}else{
return Global_2657589[func_233(iParam0) /*466*/].f_321.f_20;
}}else{
iVar9=func_235(iVar8);
if(!iVar9==-1){
return Global_1950108.f_542[iVar9 /*3*/];
}}}}elseif(func_231(iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_310)){
return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_310, 0);
}}elseif(func_230(iParam0) && !func_229(iParam0)){
iVar10=Global_2657589[iParam0 /*466*/].f_321.f_10;
if(iVar10 !=func_19()){
if(func_228(iVar10)){
iVar11=func_225(iVar10);
if(iVar11 !=-1){
return func_224(iVar11);
}}}}elseif(func_223(iParam0) && !func_222(iParam0)){
iVar12=Global_2657589[iParam0 /*466*/].f_321.f_10;
if(iVar12 !=func_19()){
if(func_221(iVar12)){
iVar13=func_218(iVar12);
if(iVar13 !=-1){
return Global_1950108.f_542[iVar13 /*3*/];
}}}}elseif(func_217(iParam0, 0)){
iVar14=func_216(iParam0);
if(iVar14 !=func_19()){
if(!func_215(iVar14)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_383[iVar14])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_383[iVar14], 0);
}else{
return Global_1894573[func_216(iParam0) /*608*/].f_590;
}}else{
iVar15=func_218(iVar14);
if(!iVar15==-1){
return Global_1950108.f_542[iVar15 /*3*/];
}}}}elseif(func_214(iParam0)){
return -366.7f, -1909.6f, 20f;
}elseif(func_213(iParam0)){
iVar16=func_211(iParam0);
if(iVar16 !=func_19()){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_416[iVar16])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_416[iVar16], 0);
}else{
return Global_1914091[iVar16 /*297*/].f_51;
}}else{
return 0f, 0f, 0f;
}}
if(func_230(iParam0)){
return func_224(Global_2657589[iParam0 /*466*/].f_321.f_7);
}
if(func_206(iParam0)){
return 965.8165f, 42.25042f, 122.1267f;
}
return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
}

int func_206(int iParam0){
if(((func_210(iParam0) || func_209(iParam0)) || func_208(iParam0)) || func_207(iParam0)){
return 1;
}
return 0;
}

int func_207(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==19;
}}}
return 0;
}

int func_208(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==15;
}}}
return 0;
}

int func_209(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==16;
}}}
return 0;
}

int func_210(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==14;
}}}
return 0;
}

int func_211(int iParam0){
int iVar0;
if(iParam0==func_19()){
return iParam0;
}
if(func_212(iParam0) !=-1){
iVar0=func_132(func_212(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_18(iParam0, 0)){
return func_176(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_19();
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}
return func_19();
}

int func_212(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}elseif(((Global_1575060 || Global_2635559.f_2680) && iParam0==PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}}
return -1;
}

int func_213(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==20;
}}elseif(((Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_1575060) && iParam0==PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0)){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==20;
}}
return 0;
}

int func_214(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}

int func_215(int iParam0){
if(iParam0 !=func_19()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
}
return 0;
}

int func_216(int iParam0){
if(iParam0==func_19()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_217(int iParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_19()){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_218(int iParam0){
int iVar0;
if(iParam0 !=func_19()){
iVar0=func_220(iParam0);
if(iVar0 !=0){
return func_219(iVar0);
}}
return -1;
}

int func_219(int iParam0){
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

int func_220(int iParam0){
if(iParam0 !=func_19()){
return Global_1853910[iParam0 /*862*/].f_267.f_310;
}
return 0;
}

int func_221(int iParam0){
if(iParam0 !=func_19()){
if(Global_1853910[iParam0 /*862*/].f_267.f_310 !=0){
return 1;
}}
return 0;
}

int func_222(int iParam0){
if(iParam0 !=func_19()){
if(func_223(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_223(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==11;
}}}
return 0;
}


Vector3 func__224(int iParam0){
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

int func_225(int iParam0){
int iVar0;
if(iParam0 !=func_19()){
iVar0=func_227(iParam0);
if(iVar0 !=0){
return func_226(iVar0);
}}
return -1;
}

int func_226(int iParam0){
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

int func_227(int iParam0){
if(iParam0 !=func_19()){
return Global_1853910[iParam0 /*862*/].f_267.f_353;
}
return 0;
}

int func_228(int iParam0){
if(iParam0 !=func_19()){
return Global_1853910[iParam0 /*862*/].f_267.f_353 !=0;
}
return 0;
}

int func_229(int iParam0){
if(iParam0 !=func_19()){
if(func_230(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_230(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==11;
}}}
return 0;
}

int func_231(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==10;
}}}
return 0;
}

int func_232(int iParam0){
if(iParam0 !=func_19()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
}
return 0;
}

int func_233(int iParam0){
if(iParam0==func_19()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_234(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_19()){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_235(int iParam0){
int iVar0;
if(iParam0==func_19()){
return -1;
}
iVar0=func_237(iParam0);
if(!iVar0==0){
return func_236(iVar0);
}
return -1;
}

int func_236(int iParam0){
switch (iParam0){
case 1:
return 89;
break;
case 2:
return 90;
break;
case 3:
return 91;
break;
case 4:
return 92;
break;
case 5:
return 93;
break;
case 6:
return 94;
break;
case 7:
return 95;
break;
case 8:
return 96;
break;
case 9:
return 97;
break;
}
return -1;
}

int func_237(int iParam0){
if(iParam0==func_19()){
return 0;
}
return Global_1853910[iParam0 /*862*/].f_267.f_300;
}

int func_238(int iParam0){
if(iParam0 !=func_19()){
return Global_1853910[iParam0 /*862*/].f_267.f_300 !=0;
}
return 0;
}

int func_239(){
if(MISC::IS_BIT_SET(Global_1950108.f_2, 13) || Global_1950108.f_3347){
return 1;
}
return 0;
}

int func_240(int iParam0){
if(iParam0==func_19()){
return 0;
}
if(func_241(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_241(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==9;
}}}
return 0;
}

int func_242(int iParam0){
if(iParam0==func_19()){
return 0;
}
if(func_243(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_243(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_132(Global_2657589[iParam0 /*466*/].f_321.f_7)==4;
}}}
return 0;
}

int func_244(int iParam0){
if(iParam0 !=func_19()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
}
return 0;
}

int func_245(int iParam0){
if(iParam0==func_19()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_246(int iParam0){
int iVar0;
if(iParam0==func_19()){
return -1;
}
iVar0=func_248(iParam0);
if(!iVar0==0){
return func_247(iVar0);
}
return -1;
}

int func_247(int iParam0){
switch (iParam0){
case 1:
return 22;
break;
case 2:
return 23;
break;
case 3:
return 24;
break;
case 4:
return 25;
break;
case 5:
return 26;
break;
case 6:
return 27;
break;
case 7:
return 28;
break;
case 8:
return 29;
break;
case 9:
return 30;
break;
case 10:
return 31;
break;
case 11:
return 32;
break;
case 12:
return 33;
break;
case 13:
return 34;
break;
case 14:
return 35;
break;
case 15:
return 36;
break;
case 16:
return 37;
break;
case 17:
return 38;
break;
case 18:
return 39;
break;
case 19:
return 40;
break;
case 20:
return 41;
break;
case 32:
return 159;
break;
case 21:
return 70;
break;
case 22:
return 71;
break;
case 23:
return 72;
break;
case 24:
return 73;
break;
case 25:
return 74;
break;
case 26:
return 75;
break;
case 27:
return 76;
break;
case 28:
return 77;
break;
case 29:
return 78;
break;
case 30:
return 79;
break;
case 31:
return 80;
break;
}
return -1;
}

int func_248(int iParam0){
if(iParam0==func_19()){
return 0;
}
return Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_249(int iParam0){
if(iParam0 !=func_19()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 6);
}
return 0;
}

int func_250(int iParam0){
if(iParam0==func_19()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_251(int iParam0){
if(iParam0 !=func_19()){
if(func_12(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && iParam0==PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}}
return 0;
}


void func_252(struct<3> Param0, var uParam3){
int iVar0;
int iVar1;
iVar0=1;
iVar1=7;
while (iVar0 <=iVar1){
if(func_253(Param0, iVar0, 0)){
*uParam3=iVar0;
return;
}
iVar0++;
}
iVar0=34;
iVar1=43;
while (iVar0 <=iVar1){
if(func_253(Param0, iVar0, 0)){
*uParam3=iVar0;
return;
}
iVar0++;
}
iVar0=61;
iVar1=65;
while (iVar0 <=iVar1){
if(func_253(Param0, iVar0, 0)){
*uParam3=iVar0;
return;
}
iVar0++;
}
iVar0=8;
if(func_253(Param0, iVar0, 0)){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 > 0){
*uParam3=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
}elseif(Global_2635145.f_1 > 0){
*uParam3=Global_2635145.f_1;
}else{
*uParam3=iVar0;
}
return;
}
iVar0=17;
if(func_253(Param0, iVar0, 0)){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 > 0){
*uParam3=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
}elseif(Global_2635145.f_1 > 0){
*uParam3=Global_2635145.f_1;
}else{
*uParam3=iVar0;
}
return;
}}

int func_253(struct<3> Param0, int iParam3, float fParam4){
int iVar0;
struct<3> Var1[3];
struct<3> Var11[3];
int iVar21;
if(iParam3 !=999){
iVar21=0;
while (iVar21 < 3){
if(Global_1312228[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1312228[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2){
Var1[iVar21 /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] 
};
Var11[iVar21 /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 
};
}else{
Var1[iVar21 /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 
};
Var11[iVar21 /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] 
};
}
Var1[iVar21 /*3*/].f_2=(Var1[iVar21 /*3*/].f_2 + fParam4);
Var11[iVar21 /*3*/].f_2=(Var11[iVar21 /*3*/].f_2 - fParam4);
iVar21++;
}
if(((Global_1312228[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1)) || (Global_1312228[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1312228[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1))){
return 1;
}}else{
iVar0=1;
while (iVar0 <=7){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=34;
while (iVar0 <=43){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=61;
while (iVar0 <=65){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=73;
while (iVar0 <=76){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=77;
while (iVar0 <=82){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=83;
while (iVar0 <=85){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=87;
while (iVar0 <=90){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=91;
while (iVar0 <=102){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
iVar0=103;
while (iVar0 <=113){
if(func_253(Param0, iVar0, fParam4)){
return 1;
}
iVar0++;
}
if(func_253(Param0, 8, fParam4)){
return 1;
}
if(func_253(Param0, 17, fParam4)){
return 1;
}}
return 0;
}


Vector3 func__254(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


Vector3 func__255(int iParam0){
struct<3> Var0;
switch (iParam0){
case 1:
Var0={
-773.4775f, 310.6321f, 84.6981f 
};
break;
case 2:
Var0={
-252.5713f, -949.9199f, 30.221f 
};
break;
case 3:
Var0={
-1443.094f, -544.7684f, 33.7424f 
};
break;
case 4:
Var0={
-913.85f, -455.1392f, 38.5999f 
};
break;
case 5:
Var0={
-47.3145f, -585.9766f, 36.9593f 
};
break;
case 6:
Var0={
-932.7474f, -383.9246f, 37.9613f 
};
break;
case 7:
Var0={
-619.1315f, 37.8841f, 42.5883f 
};
break;
case 8:
Var0={
284.9614f, -159.9891f, 63.6221f 
};
break;
case 9:
Var0={
2.8889f, 35.7762f, 70.5349f 
};
break;
case 10:
Var0={
9.74f, 84.6906f, 77.3975f 
};
break;
case 11:
Var0={
-512.1465f, 111.2223f, 62.351f 
};
break;
case 12:
Var0={
-197.3405f, 88.1053f, 68.7422f 
};
break;
case 13:
Var0={
-628.3212f, 165.8364f, 60.1651f 
};
break;
case 14:
Var0={
-973.3757f, -1429.425f, 6.6791f 
};
break;
case 15:
Var0={
-829.1362f, -855.0104f, 18.6297f 
};
break;
case 16:
Var0={
-757.5739f, -755.5591f, 25.5697f 
};
break;
case 17:
Var0={
-45.1289f, -57.0925f, 62.2531f 
};
break;
case 18:
Var0={
-206.7293f, 184.142f, 79.3279f 
};
break;
case 19:
Var0={
-811.7045f, -984.1961f, 13.1538f 
};
break;
case 20:
Var0={
-664.0032f, -853.6744f, 23.4325f 
};
break;
case 21:
Var0={
-1534.025f, -324.5247f, 46.5237f 
};
break;
case 22:
Var0={
-1561.381f, -412.1974f, 41.389f 
};
break;
case 23:
Var0={
-1608.851f, -429.184f, 39.439f 
};
break;
case 24:
Var0={
964.3583f, -1034.199f, 39.8303f 
};
break;
case 25:
Var0={
894.2868f, -885.5679f, 26.1212f 
};
break;
case 26:
Var0={
821.1741f, -924.1658f, 25.1998f 
};
break;
case 27:
Var0={
759.7933f, -759.8209f, 25.759f 
};
break;
case 28:
Var0={
844.7289f, -1164.1f, 24.2681f 
};
break;
case 29:
Var0={
526.2521f, -1604.613f, 28.2625f 
};
break;
case 30:
Var0={
572.0462f, -1570.736f, 27.4904f 
};
break;
case 31:
Var0={
722.2852f, -1190.617f, 23.282f 
};
break;
case 32:
Var0={
497.6212f, -1494.084f, 28.2893f 
};
break;
case 33:
Var0={
480.3127f, -1549.937f, 28.2828f 
};
break;
case 34:
Var0={
-68.702f, 6426.148f, 30.439f 
};
break;
case 35:
Var0={
-247.4374f, 6240.294f, 30.4892f 
};
break;
case 36:
Var0={
2554.165f, 4668.059f, 33.0233f 
};
break;
case 37:
Var0={
2461.22f, 1589.255f, 32.0443f 
};
break;
case 38:
Var0={
-2203.335f, 4244.427f, 47.3305f 
};
break;
case 39:
Var0={
218.0665f, 2601.817f, 44.7668f 
};
break;
case 40:
Var0={
186.1719f, 2786.343f, 45.0144f 
};
break;
case 41:
Var0={
642.0746f, 2791.729f, 40.9795f 
};
break;
case 42:
Var0={
-1130.938f, 2701.133f, 17.8004f 
};
break;
case 43:
Var0={
-10.944f, -1646.76f, 28.3125f 
};
break;
case 44:
Var0={
1024.263f, -2398.404f, 29.1261f 
};
break;
case 45:
Var0={
870.8577f, -2232.323f, 29.5508f 
};
break;
case 46:
Var0={
-663.8541f, -2380.389f, 12.9446f 
};
break;
case 47:
Var0={
-1088.616f, -2235.098f, 12.2182f 
};
break;
case 48:
Var0={
-342.5126f, -1468.675f, 29.6107f 
};
break;
case 49:
Var0={
-1241.54f, -259.8841f, 37.9445f 
};
break;
case 50:
Var0={
899.8448f, -147.528f, 75.5674f 
};
break;
case 51:
Var0={
-1405.411f, 526.8572f, 122.8361f 
};
break;
case 52:
Var0={
1341.552f, -1578.037f, 53.4443f 
};
break;
case 53:
Var0={
-105.7029f, 6528.539f, 29.1719f 
};
break;
case 54:
Var0={
-302.3985f, 6327.434f, 31.8918f 
};
break;
case 55:
Var0={
-15.258f, 6557.378f, 32.2454f 
};
break;
case 56:
Var0={
1899.673f, 3773.178f, 31.8829f 
};
break;
case 57:
Var0={
1662.121f, 4776.317f, 41.0075f 
};
break;
case 58:
Var0={
-178.2278f, 490.886f, 134.0466f 
};
break;
case 59:
Var0={
339.5743f, 439.7083f, 145.5896f 
};
break;
case 60:
Var0={
-764.6163f, 618.3144f, 137.5536f 
};
break;
case 61:
Var0={
-679.5461f, 592.5162f, 139.693f 
};
break;
case 62:
Var0={
124.4571f, 551.8877f, 181.658f 
};
break;
case 63:
Var0={
-563.7349f, 689.099f, 151.6596f 
};
break;
case 64:
Var0={
-743.0927f, 590.0371f, 140.9221f 
};
break;
case 65:
Var0={
-861.252f, 684.8923f, 146.2643f 
};
break;
case 66:
Var0={
-1292.456f, 440.9454f, 93.7572f 
};
break;
case 67:
Var0={
369.5891f, 417.4813f, 136.8344f 
};
break;
case 68:
Var0={
-1581.501f, -558.2578f, 33.9528f 
};
break;
case 69:
Var0={
-1379.546f, -499.1783f, 32.1574f 
};
break;
case 70:
Var0={
-117.5296f, -605.7157f, 35.2857f 
};
break;
case 71:
Var0={
-67.0943f, -802.4415f, 43.2273f 
};
break;
case 72:
Var0={
254.1892f, -1809.183f, 26.1805f 
};
break;
case 73:
Var0={
-1472.278f, -920.0677f, 8.9683f 
};
break;
case 74:
Var0={
38.9478f, -1026.629f, 28.6354f 
};
break;
case 75:
Var0={
46.903f, 2789.825f, 57.1124f 
};
break;
case 76:
Var0={
-342.3246f, 6065.316f, 30.4895f 
};
break;
case 77:
Var0={
1737.878f, 3709.088f, 33.1348f 
};
break;
case 78:
Var0={
939.7161f, -1459.204f, 30.467f 
};
break;
case 79:
Var0={
189.7624f, 309.7488f, 104.4714f 
};
break;
case 80:
Var0={
-21.9593f, -191.3618f, 51.5599f 
};
break;
case 81:
Var0={
2472.22f, 4110.493f, 36.9629f 
};
break;
case 82:
Var0={
-39.3286f, 6420.603f, 30.7017f 
};
break;
case 83:
Var0={
-1134.762f, -1568.848f, 3.4077f 
};
break;
}
return Var0;
}

int func_256(int iParam0){
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
break;
case 5:
case 6:
return 2;
break;
case 7:
case 34:
case 62:
return 3;
break;
case 35:
case 36:
case 37:
return 4;
break;
case 38:
case 39:
case 65:
return 5;
break;
case 40:
case 41:
case 63:
return 6;
break;
case 42:
case 43:
case 64:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 11:
return 11;
break;
case 12:
return 12;
break;
case 13:
return 13;
break;
case 14:
return 14;
break;
case 15:
return 15;
break;
case 16:
return 16;
break;
case 17:
return 17;
break;
case 18:
return 18;
break;
case 19:
return 19;
break;
case 20:
return 20;
break;
case 21:
return 21;
break;
case 22:
return 22;
break;
case 23:
return 23;
break;
case 24:
return 24;
break;
case 25:
return 25;
break;
case 26:
return 26;
break;
case 27:
return 27;
break;
case 28:
return 28;
break;
case 29:
return 29;
break;
case 30:
return 30;
break;
case 31:
return 31;
break;
case 32:
return 32;
break;
case 33:
return 33;
break;
case 44:
return 34;
break;
case 45:
return 35;
break;
case 46:
return 36;
break;
case 47:
return 37;
break;
case 48:
return 38;
break;
case 49:
return 39;
break;
case 50:
return 40;
break;
case 51:
return 41;
break;
case 52:
return 42;
break;
case 53:
return 43;
break;
case 54:
return 44;
break;
case 55:
return 45;
break;
case 56:
return 46;
break;
case 57:
return 47;
break;
case 58:
return 48;
break;
case 59:
return 49;
break;
case 60:
return 50;
break;
case 66:
return 51;
break;
case 67:
return 52;
break;
case 68:
return 53;
break;
case 69:
return 54;
break;
case 70:
return 55;
break;
case 71:
return 56;
break;
case 72:
return 57;
break;
case 73:
return 58;
break;
case 74:
return 59;
break;
case 75:
return 60;
break;
case 76:
return 61;
break;
case 77:
return 62;
break;
case 78:
return 63;
break;
case 79:
return 64;
break;
case 80:
return 65;
break;
case 81:
return 66;
break;
case 82:
return 67;
break;
case 87:
case 103:
case 104:
case 105:
return 68;
break;
case 88:
case 106:
case 107:
case 108:
return 69;
break;
case 89:
case 109:
case 110:
case 111:
return 70;
break;
case 90:
case 112:
case 113:
case 114:
return 71;
break;
case 91:
return 72;
break;
case 92:
return 73;
break;
case 93:
return 74;
break;
case 94:
return 75;
break;
case 95:
return 76;
break;
case 96:
return 77;
break;
case 97:
return 78;
break;
case 98:
return 79;
break;
case 99:
return 80;
break;
case 100:
return 81;
break;
case 101:
return 82;
break;
case 102:
return 83;
break;
}
return 0;
}


Vector3 func__257(int iParam0){
return Global_2657589[iParam0 /*466*/].f_73.f_7;
}

int func_258(int iParam0){
if(Global_2657589[iParam0 /*466*/].f_73.f_6 !=-1){
return 1;
}
return 0;
}


Vector3 func__259(var uParam0){
var uVar0;
switch (HUD::GET_BLIP_INFO_ID_TYPE(uParam0)){
case 1:
case 2:
case 3:
uVar0=HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uParam0);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
return ENTITY::GET_ENTITY_COORDS(iVar0, 0);
}
break;
}
return HUD::GET_BLIP_COORDS(uParam0);
}

int func_260(int iParam0){
int iVar0;
int iVar1;
iVar0=func_261(iParam0);
if(iVar0 !=-1){
iVar1=unk_0x0546ACFECA98380F(iVar0);
if(iVar1 !=-1){
return iVar1;
}}
return -1;
}

int func_261(int iParam0){
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


void func_262(int iParam0){
int iVar0;
iVar0=0;
if(iParam0==209){
iVar0=1;
}elseif(iParam0==210){
iVar0=2;
}
func_67(0);
func_39(iLocal_134, iVar0, -1);
func_263(iVar0);
func_326(3);
if(func_43(iLocal_134, iVar0)){
func_26("FIX_APP_MIS_COM", 0);
}else{
func_26("FAPP_ACCEPT", 1);
}}


void func_263(int iParam0){
iLocal_133=iParam0;
}


void func_264(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char* sVar3;
var uVar4;
iVar0=func_59(iParam0);
iVar1=func_58(iVar0);
func_57(iVar0);
if(func_54(1)==iVar0 || func_51(iVar1, 0)){
func_56(iVar0);
if(func_51(iVar1, 0)){
func_48(iVar0);
func_26("FIX_APP_MIS_COM", 0);
func_47(1);
func_326(3);
}else{
iVar2=func_271(iVar0);
if(iVar2==-1){
func_326(2);
}else{
func_39(iVar0, iVar2, -1);
func_263(iVar2);
func_67(0);
func_270(iVar2);
func_26("FAPP_ACCEPT", 1);
func_326(3);
}}}elseif(func_54(1)==-1){
sVar3=func_269(iVar0);
uVar4=func_268(iVar0);
func_265(sVar3, uVar4, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, 2, -1, -1, 0, 0);
func_70(202);
func_56(iVar0);
}else{
func_327("FXR_VIP_STRAND2", -1);
func_326(2);
}}


void func_265(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10){
sLocal_146="SHOW_OVERLAY_TWO_BUTTON";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
sLocal_146="SHOW_OVERLAY_ONE_BUTTON";
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, sLocal_146);
func_27(sParam0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
if(iParam7 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
if(iParam8 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
}}elseif(iParam7 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_27(sParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
func_27(sParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(bParam5){
func_326(3);
}elseif(bParam4){
func_326(6);
}
MISC::SET_BIT(&uLocal_131, 2);
func_267(iParam6);
func_266();
}


void func_266(){
if(MISC::IS_BIT_SET(uLocal_131, 1)){
HUD::CLEAR_HELP(1);
sLocal_145="";
MISC::CLEAR_BIT(&uLocal_131, 1);
}}


void func_267(int iParam0){
if(iLocal_148 !=iParam0){
iLocal_148=iParam0;
}}


char* func_268(int iParam0){
switch (iParam0){
case 0:
return "FIX_APP_DL1_D";
break;
case 1:
return "FIX_APP_DL2_D";
break;
case 2:
return "FIX_APP_DL3_D";
break;
}
return "";
}


char* func_269(int iParam0){
switch (iParam0){
case 0:
return "FIX_APP_DL1_T";
break;
case 1:
return "FIX_APP_DL2_T";
break;
case 2:
return "FIX_APP_DL3_T";
break;
}
return "";
}


void func_270(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=208;
break;
case 1:
iVar0=209;
break;
case 2:
iVar0=210;
break;
}
func_70(iVar0);
}

int func_271(int iParam0){
if(iParam0 !=-1){
if(func_43(iParam0, 2)){
return -1;
}elseif(func_43(iParam0, 1)){
if(!func_49(iParam0, 2)){
return 2;
}}elseif(func_43(iParam0, 0)){
if(!func_49(iParam0, 1)){
return 1;
}}else{
return 0;
}}
return -1;
}


void func_272(){
char* sVar0;
char* sVar1;
char* sVar2;
char* sVar3;
char* sVar4;
char* sVar5;
char* sVar6;
char* sVar7;
char* sVar8;
bool bVar9;
bool bVar10;
char* sVar11;
char* sVar12;
char* sVar13;
bool bVar14;
bool bVar15;
char* sVar16;
char* sVar17;
char* sVar18;
bool bVar19;
bool bVar20;
bool bVar21;
int iVar22;
int iVar23;
func_279(2);
sVar0=func_278();
sVar1=func_66();
sVar2=func_65();
sVar3=func_277();
sVar4=func_64();
sVar5=func_63();
sVar6="FIX_APP_DL1_T";
sVar7=func_42(0);
sVar8="MISSION_VINEWOOD";
bVar9=func_276(0);
bVar10=func_51(4, 0);
sVar11="FIX_APP_DL2_T";
sVar12=func_42(1);
sVar13="MISSION_RICHMAN_LEAK";
bVar14=func_276(1);
bVar15=func_51(7, 0);
sVar16="FIX_APP_DL3_T";
sVar17=func_42(2);
sVar18="MISSION_SOUTH_CENTRAL";
bVar19=func_276(2);
bVar20=func_51(10, 0);
bVar21=func_274(0);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SHOW_DATA_LEAK_SCREEN");
func_27(sVar6);
func_27(sVar7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar8);
func_27(sVar11);
func_27(sVar12);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar14);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar15);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar13);
func_27(sVar16);
func_27(sVar17);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar19);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar20);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar21);
func_27(sVar0);
func_27(sVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar2);
func_27(sVar3);
func_27(sVar4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar22=func_54(1);
iVar23=func_271(iVar22);
switch (iVar22){
case -1:
func_33();
if(!func_51(4, 0)){
func_39(0, 2, 0);
func_57(0);
func_70(205);
}elseif(!func_51(7, 0)){
func_39(1, 2, 0);
func_57(1);
func_70(206);
}else{
func_39(2, 2, 0);
func_57(2);
func_70(207);
}
func_67(1);
func_26("FAPP_ACCEPT", 0);
break;
default:
func_48(iVar22);
func_47(1);
if(iVar23 !=-1){
func_39(iVar22, iVar23, -1);
func_263(iVar23);
func_67(0);
func_57(iVar22);
func_270(iVar23);
}else{
func_39(iVar22, 2, 0);
func_70(func_273(iVar22));
func_67(1);
func_57(iVar22);
if(func_43(iVar22, 2)){
func_26("FIX_APP_MIS_COM", 0);
}else{
func_26("FAPP_ACCEPT", 0);
}}
func_56(iVar22);
break;
}}

int func_273(int iParam0){
switch (iParam0){
case 0:
return 205;
break;
case 1:
return 206;
break;
case 2:
return 207;
break;
}
return 216;
}

int func_274(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_52(9905, -1, 0), 2);
}
return func_275(PLAYER::PLAYER_ID());
}

int func_275(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27, 2);
}
return 0;
}

int func_276(int iParam0){
if(func_54(1)==-1){
return 0;
}
if(func_54(1) !=iParam0){
switch (iParam0){
case 0:
return !func_51(4, 0);
break;
case 1:
return !func_51(7, 0);
break;
case 2:
return !func_51(10, 0);
break;
}}
return 0;
}


char* func_277(){
return "FIX_APP_DATA_R2_T";
}


char* func_278(){
return "FIX_APP_DATA_R1_T";
}


void func_279(int iParam0){
if(iLocal_149 !=iParam0){
iLocal_149=iParam0;
}
if(iParam0 !=3){
MISC::CLEAR_BIT(&uLocal_131, 14);
}}

int func_280(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27, 5);
}
return 0;
}


void func_281(){
char* sVar0;
char* sVar1;
char* sVar2;
char* sVar3;
char* sVar4;
int iVar5;
bool bVar6;
sVar0="FIX_APP_VIP_SETUP_T";
sVar1="FIX_APP_VIP_SETUP_D";
sVar2="SETUP_DATA_RECOVERY";
sVar3="";
sVar4="FAPP_ACCEPT";
iVar5=0;
bVar6=false;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SHOW_DATA_RECOVERY_SCREEN");
func_27(sVar0);
func_27(sVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
func_27(sVar3);
func_27(sVar4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_279(4);
func_70(222);
}


bool func_282(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_52(9905, -1, 0), 1);
}
return func_283(PLAYER::PLAYER_ID());
}

int func_283(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27, 1);
}
return 0;
}

int func_284(bool bParam0){
if(bParam0){
if(NETWORK::GET_CLOUD_TIME_AS_INT() < func_52(9909, -1, 0)){
return 1;
}
return 0;
}
return func_285(PLAYER::PLAYER_ID());
}

int func_285(int iParam0){
if(iParam0 !=-1){
if(NETWORK::GET_CLOUD_TIME_AS_INT() < Global_1981514[iParam0 /*60*/].f_27.f_5){
return 1;
}}
return 0;
}


bool func_286(){
return func_287(28257, -1);
}


bool func_287(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_11();
}
return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}


bool func_288(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_52(9905, -1, 0), 0);
}
return func_289(PLAYER::PLAYER_ID());
}

int func_289(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27, 0);
}
return 0;
}


bool func_290(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_52(9905, -1, 0), 4);
}
return func_291(PLAYER::PLAYER_ID());
}

int func_291(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27, 4);
}
return 0;
}


void func_292(int iParam0){
int iVar0;
iVar0=0;
if(iParam0==212){
iVar0=1;
}elseif(iParam0==213){
iVar0=2;
}
func_293(iParam0);
func_303(iVar0);
func_296(1, iVar0);
func_326(3);
}


void func_293(int iParam0){
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
}}


void func_294(int iParam0){
Global_75698=1;
Global_1949965=1;
func_2(263, func_295(PLAYER::PLAYER_ID(), iParam0), -1);
func_419(1, 1);
}

int func_295(int iParam0, int iParam1){
if(iParam0 !=-1){
if(iParam1 >=0 && iParam1 < 3){
return Global_1981514[iParam0 /*60*/].f_27.f_17[iParam1 /*3*/];
}}
return -1;
}


void func_296(int iParam0, int iParam1){
int iVar0;
char* sVar1;
int iVar2;
bool bVar3;
char* sVar4;
int iVar5;
bool bVar6;
char* sVar7;
int iVar8;
bool bVar9;
iVar0=func_295(PLAYER::PLAYER_ID(), iParam1);
sVar1=func_302(iVar0);
iVar2=func_300(iVar0, 0);
bVar3=iParam0;
sVar4="FAPP_CONTRACTS_COMPLETE";
iVar5=func_298(0);
bVar6=true;
sVar7="FAPP_EARNINGS";
iVar8=func_297(PLAYER::PLAYER_ID());
bVar9=true;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "UPDATE_SECURITY_CONTRACT_SELECTION_SCREEN");
func_27(sVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
func_27(sVar4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar6);
func_27(sVar7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_297(int iParam0){
if(iParam0 !=-1){
return Global_1981514[iParam0 /*60*/].f_27.f_16;
}
return 0;
}

int func_298(bool bParam0){
if(bParam0){
return func_52(9910, -1, 0);
}
return func_299(PLAYER::PLAYER_ID());
}

int func_299(int iParam0){
if(iParam0 !=-1){
return Global_1981514[iParam0 /*60*/].f_27.f_8;
}
return 0;
}

int func_300(int iParam0, bool bParam1){
if(bParam1){
switch (iParam0){
case 0:
return func_52(10298, -1, 0);
case 1:
return func_52(10297, -1, 0);
case 2:
return func_52(10299, -1, 0);
case 3:
return func_52(10300, -1, 0);
case 4:
return func_52(10301, -1, 0);
case 5:
return func_52(10302, -1, 0);
}
default:
}
return func_301(PLAYER::PLAYER_ID(), iParam0);
}

int func_301(int iParam0, int iParam1){
if(iParam0 !=-1){
return Global_1981514[iParam0 /*60*/].f_27.f_9[iParam1];
}
return 0;
}


char* func_302(int iParam0){
switch (iParam0){
case 0:
return "FIX_A_STAT_VAR";
break;
case 1:
return "FIX_A_STAT_VHR";
break;
case 2:
return "FIX_A_STAT_GE";
break;
case 3:
return "FIX_A_STAT_VIP";
break;
case 4:
return "FIX_A_STAT_AP";
break;
case 5:
return "FIX_A_STAT_AD";
break;
}
return "";
}


void func_303(int iParam0){
int iVar0;
char* sVar1;
char* sVar2;
char* sVar3;
int iVar4;
int iVar5;
func_267(1);
iVar0=func_295(PLAYER::PLAYER_ID(), iParam0);
sVar1=func_308(iVar0);
sVar2=func_307(iVar0);
sVar3="SEC_VIP_LANDING_IMAGE";
iVar4=func_306(iParam0);
iVar5=func_304(iParam0);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "UPDATE_SECURITY_CONTRACT_SELECTION_TAB");
func_27(sVar1);
func_27(sVar2);
func_71(iVar5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(func_30()){
MISC::SET_BIT(&uLocal_131, 14);
if(!func_29("FXR_NX_SEC_WAIT")){
func_327("FXR_NX_SEC_WAIT", -1);
}
func_25(0);
}else{
func_25(1);
}}

int func_304(int iParam0){
switch (func_305(PLAYER::PLAYER_ID(), iParam0)){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 3;
break;
}
return 1;
}

int func_305(int iParam0, int iParam1){
if(iParam0 !=-1){
if(iParam1 >=0 && iParam1 < 3){
return Global_1981514[iParam0 /*60*/].f_27.f_17[iParam1 /*3*/].f_1;
}}
return 0;
}

int func_306(int iParam0){
if(iParam0 >=0 && iParam0 < 3){
return Global_1981423.f_20[iParam0 /*3*/].f_2;
}
return 0;
}


char* func_307(int iParam0){
switch (iParam0){
case 0:
return "FXR_STSTART_RP_D";
break;
case 1:
return "FXR_STSTART_RV_D";
break;
case 2:
return "FXR_STSTART_AS_D";
break;
case 3:
return "FXR_STSTART_RE_D";
break;
case 4:
return "FXR_STSTART_PR_D";
break;
case 5:
return "FXR_STSTART_TD_D";
break;
}
return "";
}


char* func_308(int iParam0){
switch (iParam0){
case 0:
return "FXR_STSTART_RP";
break;
case 1:
return "FXR_STSTART_RV";
break;
case 2:
return "FXR_STSTART_AS";
break;
case 3:
return "FXR_STSTART_RE";
break;
case 4:
return "FXR_STSTART_PR";
break;
case 5:
return "FXR_STSTART_TD";
break;
}
return "";
}


void func_309(){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
var uVar4;
int iVar5;
char* sVar6;
char* sVar7;
char* sVar8;
int iVar9;
int iVar10;
char* sVar11;
char* sVar12;
char* sVar13;
int iVar14;
int iVar15;
char* sVar16;
char* sVar17;
char* sVar18;
int iVar19;
int iVar20;
func_279(3);
iVar0=func_298(0);
iVar1=func_297(PLAYER::PLAYER_ID());
iVar2=func_301(PLAYER::PLAYER_ID(), 0);
bVar3=false;
uVar4=func_310(&bVar3);
iVar5=func_295(PLAYER::PLAYER_ID(), 0);
sVar6=func_308(iVar5);
sVar7=func_307(iVar5);
sVar8="SEC_VIP_LANDING_IMAGE";
iVar9=func_306(0);
iVar10=func_304(0);
iVar5=func_295(PLAYER::PLAYER_ID(), 1);
sVar11=func_308(iVar5);
sVar12=func_307(iVar5);
sVar13="SEC_VIP_LANDING_IMAGE";
iVar14=func_306(1);
iVar15=func_304(1);
iVar5=func_295(PLAYER::PLAYER_ID(), 2);
sVar16=func_308(iVar5);
sVar17=func_307(iVar5);
sVar18="SEC_VIP_LANDING_IMAGE";
iVar19=func_306(2);
iVar20=func_304(2);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SHOW_SECURITY_CONTRACT_SELECTION_SCREEN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_27(sVar6);
func_27(sVar7);
func_71(iVar10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar8);
func_27(sVar11);
func_27(sVar12);
func_71(iVar15);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar13);
func_27(sVar16);
func_27(sVar17);
func_71(iVar20);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar19);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_296(0, 0);
}


char* func_310(int iParam0){
char* sVar0;
*iParam0=0;
if(func_284(1)){
sVar0="FIX_VIP_LOCK3";
*iParam0=1;
}elseif(!func_314()){
if(func_313()){
sVar0="FIX_VIP_LOCK";
*iParam0=1;
}elseif(func_312()){
sVar0="FIX_VIP_LOCK1";
*iParam0=1;
}elseif(!func_290(0) || !func_288(0)){
sVar0="FIX_VIP_INTRO";
*iParam0=1;
}elseif(func_311()){
sVar0="FIX_VIP_LOCK2";
*iParam0=1;
}}
return sVar0;
}

int func_311(){
if(func_282(0) && !func_280(PLAYER::PLAYER_ID())){
return !MISC::IS_BIT_SET(Global_1981423.f_1, 23);
}
return 0;
}

int func_312(){
if(func_290(0) && func_288(0)){
return !func_286();
}
return 0;
}

int func_313(){
if(func_290(0) && !func_288(0)){
return MISC::IS_BIT_SET(Global_1981423.f_1, 3);
}
return 0;
}

int func_314(){
if(func_288(0) && func_282(0)){
if(Global_1981457==1){
return 0;
}
if(func_54(1) !=-1){
return 1;
}}
if(func_275(PLAYER::PLAYER_ID())){
return 1;
}
if((func_51(4, 0) || func_51(7, 0)) || func_51(10, 0)){
return 1;
}
return 0;
}


void func_315(){
bool bVar0;
char* sVar1;
func_279(1);
func_267(0);
sVar1=func_310(&bVar0);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SHOW_HOME_SCREEN");
func_27("FIX_APP_SECU_T");
func_27("FIX_APP_VIP_T");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar0);
if(bVar0){
func_27(sVar1);
}else{
func_27("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_316(){
char* sVar0;
sVar0="HIDE_OVERLAY_ONE_BUTTON";
if(MISC::GET_HASH_KEY(sLocal_146)==-2021992805){
sVar0="HIDE_OVERLAY_TWO_BUTTON";
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, sVar0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_267(0);
MISC::CLEAR_BIT(&uLocal_131, 2);
}


void func_317(){
switch (func_325()){
case 2:
func_320(iLocal_134, 1);
func_48(iLocal_134);
func_319();
func_39(iLocal_134, 0, -1);
func_47(1);
func_26("FAPP_ACCEPT", 1);
func_70(217);
if(func_275(PLAYER::PLAYER_ID()) && !func_318()){
MISC::SET_BIT(&(Global_1981423.f_1), 21);
}
func_316();
break;
}}


bool func_318(){
return MISC::IS_BIT_SET(func_52(9905, -1, 0), 13);
}


void func_319(){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "UPDATE_MENU_LOCKED_STATES");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_276(0));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_276(1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_276(2));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_320(int iParam0, bool bParam1){
func_324(9908, iParam0, -1, 1, 0);
if(bParam1){
func_321(-1713398555, 12, 0);
}}


void func_321(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_323(iParam1, iParam2)){
iVar0=func_322();
Global_2694418[iVar0]=iParam1;
Global_2694429[iVar0]=iParam0;
}}

int func_322(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694418[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_323(int iParam0, var uParam1){
if(Global_1575048){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575060) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}


void func_324(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805027[iParam0 /*3*/][func_53(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
}}

int func_325(){
return iLocal_148;
}


void func_326(int iParam0){
char* sVar0;
switch (iParam0){
case 0:
sVar0="Nav_Up_Down";
break;
case 1:
sVar0="Nav_Left_Right";
break;
case 2:
sVar0="Nav_Blocked";
break;
case 3:
sVar0="Select";
break;
case 4:
sVar0="Back";
break;
case 5:
sVar0="Exit";
break;
case 6:
sVar0="Error";
break;
case 7:
sVar0="Key_Hit";
break;
case 8:
sVar0="Launch_Mission";
break;
case 9:
sVar0="Boot";
break;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, "DLC_Fixer_Agency_Computer_Soundset", 1);
}


void func_327(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_328(int iParam0){
if(func_330()){
return iLocal_141==iParam0;
}
return 0;
}

int func_329(int iParam0){
switch (iParam0){
case 211:
case 212:
case 213:
return 1;
break;
}
return 0;
}

int func_330(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_331(){
if(!MISC::IS_BIT_SET(uLocal_131, 4) && !func_68()){
if(!MISC::IS_BIT_SET(uLocal_131, 5)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "GET_CURRENT_ROLLOVER");
uLocal_154=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
iLocal_155=20;
MISC::SET_BIT(&uLocal_131, 5);
}}}


void func_332(){
if(func_333()){
if(!MISC::IS_BIT_SET(uLocal_131, 4)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "GET_CURRENT_SELECTION");
uLocal_153=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
MISC::SET_BIT(&uLocal_131, 4);
}}}

int func_333(){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}
return 0;
}


void func_334(){
if(iLocal_140 !=-1){
func_335(iLocal_140);
}}


void func_335(int iParam0){
var uVar0;
uVar0=16;
if(func_363(iParam0)){
func_362(&uVar0, 2, 0, "FIX_IMANI", 0, 1);
func_362(&uVar0, 3, 0, "FIX_FRANKLIN", 0, 1);
if(func_339(&uVar0, "FXIMAUD", func_361(iParam0), 8, 0, 0, 0)){
func_337();
}}elseif(func_336(iParam0)){
func_362(&uVar0, 2, 0, "FIX_FRANKLIN", 0, 1);
if(func_339(&uVar0, "FXFRAUD", func_361(iParam0), 8, 0, 0, 0)){
func_337();
}}else{
func_362(&uVar0, 2, 0, "FIX_IMANI", 0, 1);
if(func_339(&uVar0, "FXIMAUD", func_361(iParam0), 8, 0, 0, 0)){
func_337();
}}}

int func_336(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
return 1;
break;
}
return 0;
}


void func_337(){
iLocal_141=iLocal_140;
iLocal_140=-1;
func_338(1);
}


void func_338(bool bParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SHOW_SPEAKER");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


bool func_339(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_340(sParam2, iParam3, 0);
}

int func_340(char* sParam0, int iParam1, bool bParam2){
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=0;
Global_20382=0;
}else{
func_359();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_358(8, -1)){
return 0;
}
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
func_349();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3){
return 0;
}}
if(Global_20349==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_348()){
return 0;
}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"))){
return 0;
}
if(!Global_78558){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
return 0;
}
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)){
return 0;
}}}
if(func_347()){
return 0;
}else{
switch (Global_20383.f_1){
case 7:
return 0;
break;
case 8:
return 0;
break;
case 9:
break;
case 10:
break;
default:
break;
}
if(MISC::IS_BIT_SET(Global_8253, 9)){
return 0;
}}
func_346();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_345();
func_341();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_359();
}
return 0;
}


void func_341(){
if(!func_342()){
return;
}
if(Global_21731){
MemCopy(&(Global_1977511.f_1),{
Global_21344
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}}

int func_342(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_19()){
return 0;
}
if(func_343(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_343(int iParam0){
return func_344(iParam0, 20);
}


var func__344(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


void func_345(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_346(){
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
}

int func_347(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_348(){
int iVar0;
int iVar1;
if(Global_78558){
iVar0=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if((iVar1==joaat("weapon_sniperrifle") || iVar1==joaat("weapon_heavysniper")) || iVar1==joaat("weapon_remotesniper")){
iVar0=1;
}}
if(CAM::IS_AIM_CAM_ACTIVE() && iVar0==1){
return 1;
}else{
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1)){
return 1;
}else{
return 0;
}}
return 1;
}


void func_349(){
if(func_356(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]){
Global_20383=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]){
Global_20383=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]){
Global_20383=2;
}else{
Global_20383=0;
}}}else{
Global_20383=func_350();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__350(){
func_351();
return Global_113648.f_2365.f_539.f_4321;
}


void func_351(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_354(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_353(PLAYER::PLAYER_PED_ID());
if(func_352(iVar0) && (!func_356(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_352(Global_113648.f_2365.f_539.f_4321)){
Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
}
Global_113648.f_2365.f_539.f_4323=iVar0;
Global_113648.f_2365.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=145){
Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
}
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
}


bool func_352(int iParam0){
return iParam0 < 3;
}

int func_353(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_354(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_354(int iParam0){
if(func_352(iParam0)){
return func_355(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__355(int iParam0){
return Global_2028[iParam0 /*29*/];
}


bool func_356(int iParam0){
return Global_43257==iParam0;
}


void func_357(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21014[iVar0 /*10*/]=0;
StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
Global_21014[iVar0 /*10*/].f_7=0;
Global_21014[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
}


bool func_358(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_359(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9) || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21725=6;
return;
}}


void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=uParam5;
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
}}


char* func_361(int iParam0){
switch (iParam0){
case 0:
return "FXFR_FOC_1";
break;
case 1:
return "FXFR_FOC_2";
break;
case 2:
return "FXFR_FOC_3";
break;
case 3:
return "FXFR_FOC_4";
break;
case 4:
return "FXIM_FL_1";
break;
case 5:
return "FXIM_FL_2";
break;
case 6:
return "FXIM_FL_4";
break;
case 7:
return "FXIM_FL_5";
break;
case 8:
return "FXIM_FL_6";
break;
case 9:
return "FXIM_FL_7";
break;
case 10:
return "FXIM_FL_8";
break;
case 11:
return "FXIM_FL_9";
break;
case 12:
return "FXIM_FL_10";
break;
case 13:
return "FXIM_FL_11";
break;
case 14:
return "FXIM_FL_12";
break;
case 15:
return "FXIM_FL_13";
break;
}
return "FXFR_FOC_1";
}


void func_362(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(iParam2)){
if((uParam0[iParam1 /*10*/])->f_8==0){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
}else{
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
}}
if(!PED::IS_PED_INJURED(iParam2)){
if((uParam0[iParam1 /*10*/])->f_9==0){
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
}else{
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
}}}}

int func_363(int iParam0){
switch (iParam0){
case 10:
case 14:
return 1;
break;
}
return 0;
}


void func_364(){
bool bVar0;
if(!MISC::IS_BIT_SET(uLocal_131, 8) && !func_330()){
if(func_28()==1 && !func_374(316, -1)){
bVar0=true;
iLocal_139=28500;
iLocal_140=0;
func_373("FIX_VIP_TUT1");
func_371(316, 1, -1, 1);
}elseif(func_28()==3 && !func_374(317, -1)){
bVar0=true;
iLocal_139=30000;
iLocal_140=1;
func_371(317, 1, -1, 1);
}elseif(func_28()==3 && !func_374(318, -1)){
bVar0=true;
iLocal_139=18500;
iLocal_140=2;
if(Global_262145.f_31808){
MISC::SET_BIT(&uLocal_131, 13);
}else{
func_373("FIX_VIP_TUT2");
}
func_371(318, 1, -1, 1);
}elseif(MISC::IS_BIT_SET(uLocal_131, 13)){
bVar0=true;
iLocal_139=12000;
iLocal_140=3;
func_373("FIX_VIP_TUT2");
MISC::CLEAR_BIT(&uLocal_131, 13);
}elseif((func_28()==1 && func_286()) && !(func_374(319, -1) && func_287(32312, -1))){
if(func_290(0) && func_288(0)){
if(func_282(0)){
func_371(319, 1, -1, 1);
func_370(32312, 1, -1);
}elseif(!func_374(319, -1)){
bVar0=true;
iLocal_139=25000;
iLocal_140=4;
func_371(319, 1, -1, 1);
}elseif(!func_287(32312, -1)){
bVar0=true;
iLocal_139=11300;
iLocal_140=5;
func_373("FIX_VIP_TUT3");
func_370(32312, 1, -1);
}}}elseif(func_28()==2 && !func_374(320, -1)){
bVar0=true;
iLocal_139=17250;
iLocal_140=6;
func_373("FIX_VIP_TUT4");
func_371(320, 1, -1, 1);
}elseif((func_28()==2 && func_54(1)==0) && !func_374(321, -1)){
bVar0=true;
iLocal_139=11000;
iLocal_140=7;
func_371(321, 1, -1, 1);
}elseif((func_28()==2 && func_54(1)==1) && !func_374(324, -1)){
bVar0=true;
iLocal_139=13000;
iLocal_140=8;
func_371(324, 1, -1, 1);
}elseif((func_28()==2 && func_54(1)==2) && !func_374(327, -1)){
bVar0=true;
iLocal_139=11000;
iLocal_140=9;
func_371(327, 1, -1, 1);
}elseif((func_28()==2 && func_54(1)==0) && iLocal_134==0){
if(iLocal_133==1){
if(!func_374(322, -1) && func_51(2, 0)){
bVar0=true;
iLocal_139=29600;
iLocal_140=10;
func_371(322, 1, -1, 1);
}}elseif(iLocal_133==2){
if(!func_374(323, -1) && func_51(3, 0)){
bVar0=true;
iLocal_139=6000;
iLocal_140=11;
func_371(323, 1, -1, 1);
}}}elseif((func_28()==2 && func_54(1)==2) && iLocal_134==2){
if(iLocal_133==1){
if(!func_374(328, -1) && func_51(8, 0)){
bVar0=true;
iLocal_139=9500;
iLocal_140=12;
func_371(328, 1, -1, 1);
}}elseif(iLocal_133==2){
if(!func_374(329, -1) && func_51(9, 0)){
bVar0=true;
iLocal_139=7250;
iLocal_140=13;
func_371(329, 1, -1, 1);
}}}elseif((func_28()==2 && func_54(1)==1) && iLocal_134==1){
if(iLocal_133==1){
if(!func_374(325, -1) && func_51(5, 0)){
bVar0=true;
iLocal_139=29000;
iLocal_140=14;
func_371(325, 1, -1, 1);
}}elseif(iLocal_133==2){
if(!func_374(326, -1) && func_51(6, 0)){
bVar0=true;
iLocal_139=4250;
iLocal_140=15;
func_371(326, 1, -1, 1);
}}}}
if(bVar0){
MISC::SET_BIT(&uLocal_131, 8);
}elseif(MISC::IS_BIT_SET(uLocal_131, 8)){
if(!func_369(&uLocal_143)){
func_368(&uLocal_143, 0, 0);
}elseif(func_367(&uLocal_143, iLocal_139, 0) && !func_330()){
MISC::CLEAR_BIT(&uLocal_131, 8);
iLocal_141=-1;
iLocal_139=0;
func_366(&uLocal_143);
func_338(0);
if(func_365()){
MISC::SET_BIT(&uLocal_131, 7);
MISC::SET_BIT(&uLocal_131, 9);
}}}}

int func_365(){
if((((((((((((((func_374(316, -1) && func_374(317, -1)) && func_374(318, -1)) && func_374(319, -1)) && func_374(320, -1)) && func_374(321, -1)) && func_374(322, -1)) && func_374(323, -1)) && func_374(324, -1)) && func_374(325, -1)) && func_374(326, -1)) && func_374(327, -1)) && func_374(328, -1)) && func_374(329, -1)) && func_287(32312, -1)){
return 1;
}
return 0;
}


void func_366(var uParam0){
uParam0->f_1=0;
}

int func_367(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_368(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_368(var uParam0, bool bParam1, bool bParam2){
if(uParam0->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}}


bool func_369(var uParam0){
return uParam0->f_1;
}


void func_370(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_11();
}
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}


void func_371(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_372()){
iVar0=Global_2848280[iParam0 /*3*/][func_53(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_372(){
return 1;
return 0;
}


void func_373(char* sParam0){
sLocal_142=sParam0;
}

int func_374(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848280[iParam0 /*3*/][func_53(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_375(){
if((!MISC::IS_BIT_SET(uLocal_131, 8) && !MISC::IS_STRING_NULL_OR_EMPTY(sLocal_142)) && !func_330()){
func_327(sLocal_142, -1);
sLocal_142="";
}
if(!MISC::IS_BIT_SET(uLocal_131, 11) && func_74()){
if(func_28()==2){
switch (Global_1981457){
case 3:
case 5:
case 7:
case 9:
case 11:
case 13:
func_327("FXR_NX_MIS_WAIT", -1);
MISC::SET_BIT(&uLocal_131, 11);
break;
}}}
if(!MISC::IS_BIT_SET(uLocal_131, 12)){
if(((!func_51(4, 0) || !func_51(7, 0)) || !func_51(10, 0)) || func_284(1)){
MISC::SET_BIT(&uLocal_131, 12);
return;
}
if(func_28()==2){
if(func_275(PLAYER::PLAYER_ID())){
if(!func_377(PLAYER::PLAYER_ID(), 3)){
func_327("FXRAP_FIN_WAIT3", -1);
}elseif(!func_377(PLAYER::PLAYER_ID(), 4)){
func_327("FXRAP_FIN_WAIT5", -1);
}
MISC::SET_BIT(&uLocal_131, 12);
}else{
if(!func_376()){
func_327("FXR_AP_FIN_WAIT", -1);
}elseif(!func_377(PLAYER::PLAYER_ID(), 3)){
if(MISC::IS_BIT_SET(Global_1981423, 26)){
func_327("FXRAP_FIN_WAIT3", -1);
}else{
func_327("FXRAP_FIN_WAIT2", -1);
}}elseif(!func_377(PLAYER::PLAYER_ID(), 4)){
if(MISC::IS_BIT_SET(Global_1981423, 28)){
func_327("FXRAP_FIN_WAIT5", -1);
}else{
func_327("FXRAP_FIN_WAIT4", -1);
}}
MISC::SET_BIT(&uLocal_131, 12);
}}}}


bool func_376(){
return func_287(28258, -1);
}

int func_377(int iParam0, int iParam1){
switch (iParam1){
case 0:
if((func_37(iParam0, 2) && func_37(iParam0, 3)) && func_37(iParam0, 4)){
return 1;
}
break;
case 1:
if((func_37(iParam0, 5) && func_37(iParam0, 6)) && func_37(iParam0, 7)){
return 1;
}
break;
case 2:
if((func_37(iParam0, 8) && func_37(iParam0, 9)) && func_37(iParam0, 10)){
return 1;
}
break;
case 3:
if(func_37(iParam0, 11)){
return 1;
}
break;
}
return 0;
}


void func_378(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
MISC::CLEAR_BIT(&uLocal_131, 3);
func_381(2, 205, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 205)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_381(2, 206, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 206)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_381(2, 188, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1082130432, -1082130432, -1082130432, -1082130432);
MISC::SET_BIT(&uLocal_131, 3);
}
func_381(2, 187, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 187)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1082130432, -1082130432, -1082130432, -1082130432);
MISC::SET_BIT(&uLocal_131, 3);
}
func_381(2, 189, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_381(2, 190, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_381(2, 201, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_381(2, 202, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !MISC::IS_BIT_SET(uLocal_131, 4)){
func_380();
}
func_381(2, 203, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 203)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_381(2, 204, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 204)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(204), -1082130432, -1082130432, -1082130432, -1082130432);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_379();
if(Global_4541027 !=0f || Global_4541028 !=0f){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SET_MOUSE_INPUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&uLocal_131, 3);
}
func_381(2, 237, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_381(2, 238, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238) && !MISC::IS_BIT_SET(uLocal_131, 4)){
func_380();
}}else{
func_381(2, 195, 1);
func_381(2, 196, 1);
iVar0=PAD::GET_CONTROL_VALUE(2, 195);
iVar1=PAD::GET_CONTROL_VALUE(2, 196);
if(((iVar0 !=127 || iLocal_135 !=127) || iVar1 !=127) || iLocal_136 !=127){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SET_ANALOG_STICK_INPUT");
iLocal_135=iVar0;
iLocal_136=iVar1;
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_135);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_136);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&uLocal_131, 3);
}}
func_381(2, 197, 1);
func_381(2, 198, 1);
iVar2=PAD::GET_CONTROL_VALUE(2, 197);
iVar3=PAD::GET_CONTROL_VALUE(2, 198);
if(((iVar2 !=127 || iLocal_137 !=127) || iVar3 !=127) || iLocal_138 !=127){
bVar4=(PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242));
if(!bVar4){
bVar4=(PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241));
MISC::SET_BIT(&uLocal_131, 3);
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SET_ANALOG_STICK_INPUT");
iLocal_137=iVar2;
iLocal_138=iVar3;
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_137);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_138);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(func_330()){
func_326(2);
}elseif(!MISC::IS_BIT_SET(uLocal_131, 6)){
func_419(1, 0);
}}}


void func_379(){
Global_4541025=Global_4541023;
Global_4541026=Global_4541024;
Global_4541023=PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
Global_4541024=PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
Global_4541027=(Global_4541023 - Global_4541025);
Global_4541028=(Global_4541024 - Global_4541026);
}


void func_380(){
if(func_330()){
func_326(2);
return;
}elseif(MISC::IS_BIT_SET(uLocal_131, 6)){
return;
}
if(func_68()){
func_316();
}elseif(func_325()==1){
func_315();
}elseif(func_28() !=1 && func_28() !=0){
func_315();
}else{
func_419(1, 0);
}
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_152, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
func_326(4);
}


void func_381(int iParam0, int iParam1, int iParam2){
if(!func_382()){
PAD::SET_INPUT_EXCLUSIVE(iParam0, iParam1);
PAD::ENABLE_CONTROL_ACTION(iParam0, iParam1, iParam2);
}}


bool func_382(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}


void func_383(){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
func_396();
func_395();
HUD::THEFEED_HIDE_THIS_FRAME();
func_381(2, 199, 1);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
func_394(0f, 0f, 1f, 1f, 0, 0, 0, 255);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_152, 255, 255, 255, 255, 0);
func_392();
func_386(0);
func_384(1);
}


void func_384(bool bParam0){
if(bParam0){
func_385();
}
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
}


void func_385(){
Global_2793044.f_4629=0;
}


void func_386(int iParam0){
if(func_391()){
return;
}
if(!Global_20383.f_1==1){
if(func_390(0)){
func_387(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_387(int iParam0){
if(func_391()){
return;
}
if(Global_20584){
if(func_389()){
func_388(1, 1);
}else{
func_388(0, 0);
}}
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
Global_21725=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 30);
}else{
MISC::CLEAR_BIT(&Global_8253, 30);
}
if(!func_347()){
Global_20383.f_1=3;
}}


void func_388(bool bParam0, bool bParam1){
if(bParam0){
if(func_390(0)){
Global_20584=1;
if(bParam1){
MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
}
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==1){
Global_20584=0;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}}


bool func_389(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_390(int iParam0){
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


bool func_391(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_392(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_393();
}


void func_393(){
Global_23131.f_134=1;
}


void func_394(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


void func_395(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
}


void func_396(){
func_397(1);
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE()){
PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
}}


void func_397(bool bParam0){
if(bParam0){
if(func_181()){
Global_2683862.f_41=1;
}}else{
Global_2683862.f_41=0;
}}


void func_398(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_419(1, 0);
}elseif(func_382()){
func_419(1, 0);
}elseif(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
func_419(1, 0);
}elseif(func_408(PLAYER::PLAYER_ID())){
Global_1950108.f_4781=func_407(PLAYER::PLAYER_ID());
func_419(1, 0);
}elseif(func_399()){
func_419(1, 0);
}}

int func_399(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_406()){
return 1;
}
if(Global_2696915){
return 1;
}
if(func_405()){
return 1;
}
if(func_404(159)){
if(!func_403()){
return 1;
}}
if(func_404(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_400() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_400())==0){
return 1;
}}
return 0;
}

int func_400(){
switch (func_402()){
case 0:
return func_401();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_401(){
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_402(){
return Global_32163;
}


bool func_403(){
return Global_2683862.f_698;
}

int func_404(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_405(){
return Global_2694524;
}


bool func_406(){
return Global_2683862.f_693;
}

int func_407(int iParam0){
if(iParam0 !=func_19() && func_12(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_408(int iParam0){
if(iParam0 !=func_19() && func_12(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 3);
}
return 0;
}


void func_409(){
func_398();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2793044.f_1947){
if(Global_2793044.f_1947){
}
func_419(1, 0);
}
uLocal_152=GRAPHICS::REQUEST_SCALEFORM_MOVIE("FIXER_APP");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_152)){
func_395();
SYSTEM::WAIT(0);
}
func_387(1);
func_417(1);
func_395();
func_416();
HUD::THEFEED_PAUSE();
uLocal_147=uLocal_147;
uLocal_147=func_415(func_212(PLAYER::PLAYER_ID()));
func_413();
func_326(9);
func_411();
if(MISC::IS_PC_VERSION()){
func_410(1, 1, 1, 1);
}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Fixer_Office_Room_Use_PC_Scene")){
AUDIO::START_AUDIO_SCENE("DLC_Fixer_Office_Room_Use_PC_Scene");
}
Global_77329=1;
}

int func_410(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_411(){
if(func_365()){
MISC::SET_BIT(&uLocal_131, 7);
}else{
func_412(1);
}}


void func_412(bool bParam0){
if(bParam0){
Global_1835499=1;
}else{
Global_1835499=0;
}}


void func_413(){
func_414();
}


void func_414(){
func_279(0);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_152, "SHOW_LOGIN_SCREEN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_415(int iParam0){
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


void func_416(){
Global_1574747=1;
StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574747.f_9=MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}


void func_417(bool bParam0){
if(bParam0){
func_418();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_390(0)){
func_387(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_418(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_419(bool bParam0, bool bParam1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_152);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Fixer_Office_Room_Use_PC_Scene")){
AUDIO::STOP_AUDIO_SCENE("DLC_Fixer_Office_Room_Use_PC_Scene");
}
func_417(0);
func_420();
AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
if(bParam0){
if(bParam1){
func_326(8);
}else{
func_326(5);
}}
if(MISC::IS_PC_VERSION()){
func_410(0, 1, 1, 1);
}
HUD::THEFEED_RESUME();
func_266();
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_1), 22);
Global_77329=0;
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_420(){
if(!Global_1574747){
return;
}
func_421();
}


void func_421(){
Global_1574747=0;
StringCopy(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
}