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
int iLocal_28=0;
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
var uLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
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
var uLocal_88=-1;
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
var uLocal_110=0;
var uLocal_111=0;
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
int iLocal_116=0;
int iLocal_117=0;
int iLocal_118=0;
int iLocal_119=0;
int iLocal_120=0;
int iLocal_121=0;
var uLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
var uLocal_125=0;
int iLocal_126=0;
char* sLocal_127=NULL;
int iLocal_128=0;
int iLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
struct<3> Local_136={
0, 0, 0 
};
float fLocal_139=0f;
struct<3> Local_140={
0, 0, 0 
};
struct<3> Local_143={
0, 0, 0 
};
struct<5> Local_146={
1, 1056964608, -1, -1, 0 
};
struct<3> Local_151[32];
#endregion

void __EntryFunction__(){
struct<13> Var0;
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
iLocal_28=3;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
iLocal_41=1;
iLocal_42=65;
iLocal_43=49;
iLocal_44=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
iLocal_115=-1;
iLocal_117=-1;
iLocal_119=-1;
sLocal_127="anim@amb@clubhouse@jukebox@";
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("ob_jukebox")) > 1){
func_239(0);
}
iLocal_117=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
if(func_238(PLAYER::PLAYER_ID())){
iLocal_117=126;
}elseif(func_237(PLAYER::PLAYER_ID())){
iLocal_117=130;
}
iLocal_126=func_236();
func_231();
func_222();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2793044.f_1947){
if(Global_2793044.f_1947){
}
func_239(0);
}
func_221(PLAYER::PLAYER_ID(), &Var0);
if(func_220(Var0)){
if(NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0)){
iLocal_113=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
}}
if(iLocal_117==126){
iLocal_113=func_215(PLAYER::PLAYER_ID());
AUDIO::START_AUDIO_SCENE("dlc_ch_arcade_music_volume");
AUDIO::SET_AUDIO_SCENE_VARIABLE("dlc_ch_arcade_music_volume", "ArcadeRadioVolumeDucking", Local_146.f_1);
}elseif(iLocal_117==130){
iLocal_113=func_215(PLAYER::PLAYER_ID());
}
if(iLocal_113==func_214()){
func_239(0);
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(iLocal_117==126){
if(Global_1853910[iLocal_113 /*862*/].f_267.f_384 > iLocal_126){
Global_1853910[iLocal_113 /*862*/].f_267.f_384=iLocal_126;
}
if(Global_1853910[iLocal_113 /*862*/].f_267.f_384 !=iLocal_126 && func_211(iLocal_113)){
func_207(Global_1853910[iLocal_113 /*862*/].f_267.f_384);
func_202(1);
Local_146.f_1=0.5f;
Local_146.f_0=1;
Local_146.f_3=iLocal_114;
func_201();
}else{
func_202(0);
Local_146.f_1=0.5f;
Local_146.f_0=0;
}}elseif(iLocal_117==130){
if(Global_1853910[iLocal_113 /*862*/].f_267.f_385 > iLocal_126){
Global_1853910[iLocal_113 /*862*/].f_267.f_385=iLocal_126;
}
if(Global_1853910[iLocal_113 /*862*/].f_267.f_385 !=iLocal_126){
func_207(Global_1853910[iLocal_113 /*862*/].f_267.f_385);
func_202(1);
Local_146.f_1=0.5f;
Local_146.f_0=1;
Local_146.f_3=iLocal_114;
func_201();
}else{
func_202(0);
Local_146.f_1=0.5f;
Local_146.f_0=0;
}}else{
if(Global_1853910[iLocal_113 /*862*/].f_267.f_381 > iLocal_126){
Global_1853910[iLocal_113 /*862*/].f_267.f_381=iLocal_126;
}
if(Global_1853910[iLocal_113 /*862*/].f_267.f_381 !=iLocal_126){
func_207(Global_1853910[iLocal_113 /*862*/].f_267.f_381);
func_202(1);
Local_146.f_0=1;
Local_146.f_3=iLocal_114;
func_201();
}else{
func_202(0);
Local_146.f_0=0;
}}}else{
func_207(Local_146.f_3);
func_202(func_200());
}
while (true){
func_231();
iLocal_126=func_236();
if(iLocal_117==126){
AUDIO::SET_AUDIO_SCENE_VARIABLE("dlc_ch_arcade_music_volume", "ArcadeRadioVolumeDucking", Local_146.f_1);
}
if(iLocal_112 !=0 && !func_199(Local_143, 0f, 0f, 0f, 0)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_198();
}
func_26();
func_24();
func_7();
}elseif(iLocal_117 !=-1 && iLocal_117 <=130){
Local_136={
func_1() 
};
if((MISC::GET_FRAME_COUNT() % 4)==0){
}
if(iLocal_117==126){
iLocal_112=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_136, 2f, joaat("ch_prop_arcade_jukebox_01a"), 1, 0, 0);
}elseif(iLocal_117==130){
iLocal_112=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_136, 2f, 827492794, 1, 0, 0);
}else{
iLocal_112=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_136, 2f, joaat("bkr_prop_clubhouse_jukebox_01a"), 1, 0, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_112)){
Local_140={
ENTITY::GET_ENTITY_COORDS(iLocal_112, 1) - ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_112) * Vector(0.6f, 0.6f, 0.6f) 
};
Local_140.f_2=(Local_140.f_2 + 0.5f);
fLocal_139=ENTITY::GET_ENTITY_HEADING(iLocal_112);
Local_143={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_112, 0f, -0.12f, -0.0315f) 
};
}}else{
func_239(0);
}
SYSTEM::WAIT(0);
}}


Vector3 func__1(){
if(func_6(iLocal_117, -1)){
return func_4(iLocal_117);
}elseif(iLocal_117==126){
return func_3();
}elseif(iLocal_117==130){
return func_2();
}
return 0f, 0f, 0f;
}


Vector3 func__2(){
return 556.8822f, -415.1679f, -70.6348f;
}


Vector3 func__3(){
return 2720.626f, -381.4199f, -50f;
}


Vector3 func__4(int iParam0){
if(func_5(iParam0)==97){
return 1001.093f, -3171.051f, -35.0421f;
}elseif(func_5(iParam0)==91){
return 1122.505f, -3152.994f, -38.0211f;
}
return 0f, 0f, 0f;
}

int func_5(int iParam0){
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
return 1;
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
case 69:
case 68:
case 66:
case 67:
return 8;
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
return 17;
break;
case 61:
case 62:
case 63:
case 64:
case 65:
return 61;
break;
case 73:
case 74:
case 75:
case 76:
return 73;
break;
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
return 77;
break;
case 83:
case 84:
case 85:
return 83;
break;
case 86:
return 86;
break;
case 87:
case 88:
case 89:
case 90:
return 88;
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 91;
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 97;
break;
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 109;
break;
}
return -1;
}

int func_6(int iParam0, int iParam1){
if(iParam1==-1){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
break;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}
return 0;
}


void func_7(){
if(iLocal_113==PLAYER::PLAYER_ID() && func_200()){
if(!func_23(&uLocal_134)){
func_22(&uLocal_134, 0, 0);
}elseif(func_21(&uLocal_134, 180000, 0)){
func_9(iLocal_114);
func_8(&uLocal_134, 0, 0);
}}}


void func_8(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}


void func_9(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iLocal_126){
return;
}
if(iLocal_117==126){
iVar0=func_19(func_20(iParam0), -1, 0);
iVar1=(NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_123);
func_16(func_20(iParam0), (iVar0 + iVar1), -1, 1, 0);
if(iLocal_124 < (iVar0 + iVar1)){
func_14(func_15());
}}elseif(iLocal_117==130){
iVar2=func_19(func_13(iParam0), -1, 0);
iVar3=(NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_123);
func_16(func_13(iParam0), (iVar2 + iVar3), -1, 1, 0);
if(iLocal_124 < (iVar2 + iVar3)){
func_14(func_12());
}}else{
iVar4=func_19(func_11(iParam0), -1, 0);
iVar5=(NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_123);
func_16(func_11(iParam0), (iVar4 + iVar5), -1, 1, 0);
if(iLocal_124 < (iVar4 + iVar5)){
func_14(func_10());
}}
iLocal_123=NETWORK::GET_CLOUD_TIME_AS_INT();
}

int func_10(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
while (iVar0 < 5){
iVar3=func_19(func_11(iVar0), -1, 0);
if(iVar3 > iVar2){
iVar2=iVar3;
iVar1=iVar0;
}
iVar0++;
}
return iVar1;
}

int func_11(int iParam0){
switch (iParam0){
case 0:
return 12540;
case 1:
return 12541;
case 2:
return 12542;
case 3:
return 12543;
case 4:
return 8831;
default:
}
return 12540;
}

int func_12(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar2=0;
while (iVar2 < 10){
iVar3=func_19(func_13(iVar2), -1, 0);
if(iVar3 > iVar1){
iVar1=iVar3;
iVar0=iVar2;
}
iVar2++;
}
return iVar0;
}

int func_13(int iParam0){
switch (iParam0){
case 0:
return 12540;
case 1:
return 12541;
case 2:
return 12542;
case 3:
return 12543;
case 4:
return 8826;
case 5:
return 8827;
case 6:
return 8828;
case 7:
return 8829;
case 8:
return 8830;
case 9:
return 8831;
default:
}
return 12540;
}


void func_14(var uParam0){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_382=uParam0;
}

int func_15(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar2=0;
while (iVar2 < 10){
iVar3=func_19(func_20(iVar2), -1, 0);
if(iVar3 > iVar1){
iVar1=iVar3;
iVar0=iVar2;
}
iVar2++;
}
return iVar0;
}


void func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805027[iParam0 /*3*/][func_17(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_17(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_18();
if(iVar1 > -1){
Global_2804739=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804739=1;
}}
return iVar0;
}

int func_18(){
return Global_1574918;
}

int func_19(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805027[iParam0 /*3*/][func_17(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_20(int iParam0){
switch (iParam0){
case 0:
return 12540;
case 1:
return 12541;
case 2:
return 12542;
case 3:
return 12543;
case 4:
return 8826;
case 5:
return 8827;
case 6:
return 8828;
case 7:
return 8829;
case 8:
return 8830;
case 9:
return 8831;
default:
}
return 12540;
}

int func_21(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_22(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_22(var uParam0, bool bParam1, bool bParam2){
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


bool func_23(var uParam0){
return uParam0->f_1;
}


void func_24(){
bool bVar0;
bVar0=func_200();
if(Local_146.f_3 !=iLocal_114){
func_207(Local_146.f_3);
if(iLocal_113==PLAYER::PLAYER_ID() && Local_146.f_4){
if(iLocal_117==126){
func_25(26808, iLocal_114, -1);
Global_1853910[iLocal_113 /*862*/].f_267.f_384=iLocal_114;
}elseif(iLocal_117==130){
func_25(41216, iLocal_114, -1);
Global_1853910[iLocal_113 /*862*/].f_267.f_385=iLocal_114;
}else{
func_25(9355, iLocal_114, -1);
Global_1853910[iLocal_113 /*862*/].f_267.f_381=iLocal_114;
}}}
if(MISC::IS_BIT_SET(uLocal_122, 6) !=bVar0){
func_202(bVar0);
if((iLocal_113==PLAYER::PLAYER_ID() && Local_146.f_4) && !bVar0){
if(iLocal_117==126){
func_25(26808, iLocal_126, -1);
Global_1853910[iLocal_113 /*862*/].f_267.f_384=iLocal_126;
}elseif(iLocal_117==130){
func_25(41216, iLocal_126, -1);
Global_1853910[iLocal_113 /*862*/].f_267.f_385=iLocal_126;
}else{
func_25(9355, iLocal_126, -1);
Global_1853910[iLocal_113 /*862*/].f_267.f_381=iLocal_126;
}}}}


void func_25(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_18();
}
if(iParam1 < 0){
iParam1=255;
}
MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(iParam0, iParam1, iParam2);
}


void func_26(){
var uVar0;
switch (iLocal_129){
case 0:
if(func_189() && func_188()){
func_186();
if(iLocal_119==-1){
func_185(&iLocal_119, 4, "JBOX_INTERACT", 0, 0, 0, 0);
func_184();
}elseif((iLocal_119 !=-1 && func_183(iLocal_119, 1)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())){
func_182(2);
func_180(&iLocal_119);
func_170(PLAYER::PLAYER_ID(), 0, 256, 0);
MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 0);
MISC::SET_BIT(&Global_2764398, 4);
}
MISC::SET_BIT(&Global_2764398, 3);
}else{
if(iLocal_119 !=-1){
func_180(&iLocal_119);
MISC::CLEAR_BIT(&Global_2764398, 3);
}elseif(!func_188() && func_189()){
func_169("JBOX_NO_MONEY");
MISC::CLEAR_BIT(&Global_2764398, 3);
}else{
func_186();
MISC::CLEAR_BIT(&Global_2764398, 3);
}
func_168();
}
break;
case 2:
if(Local_146.f_2==PLAYER::PLAYER_ID() && func_166()){
iLocal_120=0;
func_182(1);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 0);
MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 1);
func_165(&uLocal_132);
}elseif(Local_146.f_2 !=-1 || !func_166()){
func_182(0);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 0);
MISC::CLEAR_BIT(&Global_2764398, 4);
func_170(PLAYER::PLAYER_ID(), 1, 0, 0);
}
break;
case 1:
if(func_158()){
iLocal_116=0;
MISC::SET_BIT(&uLocal_122, 1);
func_182(3);
if(!MONEY::NETWORK_CAN_SPEND_MONEY(1, 0, 0, 0, -1, 0)){
iLocal_128=1;
}}
break;
case 3:
if(MISC::IS_BIT_SET(uLocal_122, 4)){
if(func_157()){
MISC::CLEAR_BIT(&uLocal_122, 4);
}}
func_63();
break;
case 4:
if(MISC::IS_BIT_SET(uLocal_122, 3)){
MISC::CLEAR_BIT(&uLocal_122, 3);
func_60(1, -1);
}
uVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_121);
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_127, "EXIT", 3)){
func_51(MISC::IS_BIT_SET(uLocal_122, 5));
if(iLocal_115 !=-1){
if((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_127, "INSERT_COINS", 3) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >=0.82f) || !MISC::IS_BIT_SET(uLocal_122, 5)){
func_50(iLocal_115);
}}}elseif(PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >=0.96f){
MISC::CLEAR_BIT(&uLocal_122, 5);
MISC::CLEAR_BIT(&uLocal_122, 4);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 1);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 2);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 3);
func_170(PLAYER::PLAYER_ID(), 1, 0, 0);
MISC::CLEAR_BIT(&Global_2764398, 4);
iLocal_128=0;
if(iLocal_117==126){
uLocal_125=Global_1853910[iLocal_113 /*862*/].f_267.f_381;
}elseif(iLocal_117==130){
uLocal_125=Global_1853910[iLocal_113 /*862*/].f_267.f_385;
}else{
uLocal_125=Global_1853910[iLocal_113 /*862*/].f_267.f_384;
}
unk_0x88CC9E06939F19E7(func_48(func_49()), func_47(func_49()), func_46(), func_45(), 4, uLocal_125, 0, func_27());
func_182(0);
}
break;
}}

int func_27(){
return MISC::GET_HASH_KEY(func_28());
}


char* func_28(){
int iVar0;
int iVar1;
if(func_44()){
return func_42(func_43(PLAYER::PLAYER_ID()));
}elseif(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 !=-1){
return func_41(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
}elseif(func_40(PLAYER::PLAYER_ID())){
return "SIMEON_SHOWROOM";
}elseif(func_38(PLAYER::PLAYER_ID())){
return "BEACH_PARTY";
}elseif(func_37()){
return "ARENA_BOX";
}elseif(Global_2793044.f_5992.f_1 && Global_1983438 !=-1){
return func_36(Global_1983438);
}elseif(Global_100733.f_387 > 0){
iVar0=0;
while (iVar0 < 18){
iVar1=func_35(iVar0);
if(MISC::IS_BIT_SET(Global_100733.f_1407[iVar1], 5)){
return func_34(iVar0);
}
iVar0++;
}}
return func_29();
}


char* func_29(){
char cVar0[24];
if(func_33(PLAYER::PLAYER_ID(), 1, 1)){
StringCopy(&cVar0, "FREEMODE_", 24);
StringConCat(&cVar0, func_31(ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))), 24);
return func_30(&cVar0);
}
return "FREEMODE_DEAD";
}


var func__30(char[4] cParam0){
return cParam0;
}


char* func_31(char* sParam0){
struct<8> Var0;
char cVar16[64];
char cVar32[64];
int iVar48;
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
iVar48=0;
iVar48=0;
while (iVar48 <=(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1)){
StringCopy(&Var0, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar48, iVar48 + 1), 64);
StringCopy(&cVar16, func_32(&Var0), 64);
StringConCat(&cVar32, &cVar16, 64);
iVar48++;
}
return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cVar32, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar32));
}}
return sParam0;
}


char* func_32(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0)==1){
if(MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A")){
return "A";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B")){
return "B";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C")){
return "C";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D")){
return "D";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E")){
return "E";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F")){
return "F";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G")){
return "G";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H")){
return "H";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I")){
return "I";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J")){
return "J";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K")){
return "K";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L")){
return "L";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M")){
return "M";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N")){
return "N";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O")){
return "O";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P")){
return "P";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q")){
return "Q";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R")){
return "R";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S")){
return "S";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T")){
return "T";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U")){
return "U";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V")){
return "V";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W")){
return "W";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X")){
return "X";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y")){
return "Y";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z")){
return "Z";
}}}
return sParam0;
}

int func_33(int iParam0, bool bParam1, bool bParam2){
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


char* func_34(int iParam0){
switch (iParam0){
case 0:
return "GUN_SHOP_01_DT";
case 1:
return "GUN_SHOP_02_SS";
case 2:
return "GUN_SHOP_03_HW";
case 3:
return "GUN_SHOP_04_ELS";
case 4:
return "GUN_SHOP_05_PB";
case 5:
return "GUN_SHOP_06_LS";
case 6:
return "GUN_SHOP_07_MW";
case 7:
return "GUN_SHOP_08_CS";
case 8:
return "GUN_SHOP_09_GOH";
case 9:
return "GUN_SHOP_10_VWH";
case 10:
return "GUN_SHOP_11_ID1";
case 11:
return "GUN_SHOP_ARMORY";
case 12:
return "GUN_SHOP_ARMORY_AVENGER";
case 13:
return "GUN_SHOP_ARMORY_HACKER_TRUCK";
case 14:
return "GUN_SHOP_ARMORY_ARENA";
case 15:
return "GUN_SHOP_ARMORY_ARCADE";
case 16:
return "GUN_SHOP_ARMORY_SUB";
case 17:
return "GUN_SHOP_ARMORY_FIXER";
case 18:
return "GUN_SHOP_ARMORY_JUGGALO";
default:
}
return "";
}

int func_35(int iParam0){
switch (iParam0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
case 3:
return 31;
case 4:
return 32;
case 5:
return 33;
case 6:
return 34;
case 7:
return 35;
case 8:
return 36;
case 9:
return 37;
case 10:
return 38;
case 11:
return 46;
case 12:
return 47;
case 13:
return 48;
case 14:
return 49;
case 15:
return 52;
case 16:
return 53;
case 17:
return 56;
case 18:
return 59;
default:
}
return -1;
}


char* func_36(int iParam0){
switch (iParam0){
case -2:
return "SHOP_ROBBERIES_SHOP_CONV_10";
case 0:
return "SHOP_ROBBERIES_SHOP_GAS_1";
case 1:
return "SHOP_ROBBERIES_SHOP_GAS_2";
case 2:
return "SHOP_ROBBERIES_SHOP_GAS_3";
case 3:
return "SHOP_ROBBERIES_SHOP_GAS_4";
case 4:
return "SHOP_ROBBERIES_SHOP_GAS_5";
case 5:
return "SHOP_ROBBERIES_SHOP_LIQ_1";
case 6:
return "SHOP_ROBBERIES_SHOP_LIQ_2";
case 7:
return "SHOP_ROBBERIES_SHOP_LIQ_3";
case 8:
return "SHOP_ROBBERIES_SHOP_LIQ_4";
case 9:
return "SHOP_ROBBERIES_SHOP_LIQ_5";
case 10:
return "SHOP_ROBBERIES_SHOP_CONV_1";
case 11:
return "SHOP_ROBBERIES_SHOP_CONV_2";
case 12:
return "SHOP_ROBBERIES_SHOP_CONV_3";
case 13:
return "SHOP_ROBBERIES_SHOP_CONV_4";
case 14:
return "SHOP_ROBBERIES_SHOP_CONV_5";
case 15:
return "SHOP_ROBBERIES_SHOP_CONV_6";
case 16:
return "SHOP_ROBBERIES_SHOP_CONV_7";
case 17:
return "SHOP_ROBBERIES_SHOP_CONV_8";
case 18:
return "SHOP_ROBBERIES_SHOP_CONV_9";
default:
}
return "SHOP_ROBBERIES_SHOP_NONE";
}


bool func_37(){
return Global_2764615;
}


bool func_38(int iParam0){
return func_39(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}


var func__39(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}

int func_40(int iParam0){
if(iParam0 !=func_214()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_5, 25);
}
return 0;
}


char* func_41(int iParam0){
switch (iParam0){
case 1:
return "PROPERTY_HIGH_APT_1";
case 2:
return "PROPERTY_HIGH_APT_2";
case 3:
return "PROPERTY_HIGH_APT_3";
case 4:
return "PROPERTY_HIGH_APT_4";
case 5:
return "PROPERTY_HIGH_APT_5";
case 6:
return "PROPERTY_HIGH_APT_6";
case 7:
return "PROPERTY_HIGH_APT_7";
case 8:
return "PROPERTY_MEDIUM_APT_1";
case 9:
return "PROPERTY_MEDIUM_APT_2";
case 10:
return "PROPERTY_MEDIUM_APT_3";
case 11:
return "PROPERTY_MEDIUM_APT_4";
case 12:
return "PROPERTY_MEDIUM_APT_5";
case 13:
return "PROPERTY_MEDIUM_APT_6";
case 14:
return "PROPERTY_MEDIUM_APT_7";
case 15:
return "PROPERTY_MEDIUM_APT_8";
case 16:
return "PROPERTY_MEDIUM_APT_9";
case 17:
return "PROPERTY_LOW_APT_1";
case 18:
return "PROPERTY_LOW_APT_2";
case 19:
return "PROPERTY_LOW_APT_3";
case 20:
return "PROPERTY_LOW_APT_4";
case 21:
return "PROPERTY_LOW_APT_5";
case 22:
return "PROPERTY_LOW_APT_6";
case 23:
return "PROPERTY_LOW_APT_7";
case 24:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_1";
case 25:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_2";
case 26:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_3";
case 27:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_4";
case 28:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_5";
case 29:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_6";
case 30:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_7";
case 31:
return "PROPERTY_GARAGE_EAST_LOS_SANTOS_8";
case 32:
return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1";
case 33:
return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2";
case 34:
return "PROPERTY_HIGH_APT_8";
case 35:
return "PROPERTY_HIGH_APT_9";
case 36:
return "PROPERTY_HIGH_APT_10";
case 37:
return "PROPERTY_HIGH_APT_11";
case 38:
return "PROPERTY_HIGH_APT_12";
case 39:
return "PROPERTY_HIGH_APT_13";
case 40:
return "PROPERTY_HIGH_APT_14";
case 41:
return "PROPERTY_HIGH_APT_15";
case 42:
return "PROPERTY_HIGH_APT_16";
case 43:
return "PROPERTY_HIGH_APT_17";
case 44:
return "PROPERTY_GARAGE_NEW_1";
case 45:
return "PROPERTY_GARAGE_NEW_2";
case 46:
return "PROPERTY_GARAGE_NEW_3";
case 47:
return "PROPERTY_GARAGE_NEW_5";
case 48:
return "PROPERTY_GARAGE_NEW_6";
case 49:
return "PROPERTY_GARAGE_NEW_7";
case 50:
return "PROPERTY_GARAGE_NEW_8";
case 51:
return "PROPERTY_GARAGE_NEW_9";
case 52:
return "PROPERTY_GARAGE_NEW_14";
case 53:
return "PROPERTY_GARAGE_NEW_16";
case 54:
return "PROPERTY_GARAGE_NEW_17";
case 55:
return "PROPERTY_GARAGE_NEW_18";
case 56:
return "PROPERTY_GARAGE_NEW_19";
case 57:
return "PROPERTY_GARAGE_NEW_20";
case 58:
return "PROPERTY_GARAGE_NEW_21";
case 59:
return "PROPERTY_GARAGE_NEW_22";
case 60:
return "PROPERTY_GARAGE_NEW_23";
case 61:
return "PROPERTY_BUS_HIGH_APT_1";
case 62:
return "PROPERTY_BUS_HIGH_APT_2";
case 63:
return "PROPERTY_BUS_HIGH_APT_3";
case 64:
return "PROPERTY_BUS_HIGH_APT_4";
case 65:
return "PROPERTY_BUS_HIGH_APT_5";
case 66:
return "PROPERTY_IND_DAY_MEDIUM_1";
case 67:
return "PROPERTY_IND_DAY_MEDIUM_2";
case 68:
return "PROPERTY_IND_DAY_MEDIUM_3";
case 69:
return "PROPERTY_IND_DAY_MEDIUM_4";
case 70:
return "PROPERTY_IND_DAY_LOW_1";
case 71:
return "PROPERTY_IND_DAY_LOW_2";
case 72:
return "PROPERTY_IND_DAY_LOW_3";
case 73:
return "PROPERTY_STILT_APT_1_BASE_B";
case 74:
return "PROPERTY_STILT_APT_2_B";
case 75:
return "PROPERTY_STILT_APT_3_B";
case 76:
return "PROPERTY_STILT_APT_4_B";
case 77:
return "PROPERTY_STILT_APT_5_BASE_A";
case 78:
return "PROPERTY_STILT_APT_7_A";
case 79:
return "PROPERTY_STILT_APT_8_A";
case 80:
return "PROPERTY_STILT_APT_10_A";
case 81:
return "PROPERTY_STILT_APT_12_A";
case 82:
return "PROPERTY_STILT_APT_13_A";
case 83:
return "PROPERTY_CUSTOM_APT_1_BASE";
case 84:
return "PROPERTY_CUSTOM_APT_2";
case 85:
return "PROPERTY_CUSTOM_APT_3";
case 86:
return "PROPERTY_YACHT_APT_1_BASE";
case 87:
return "PROPERTY_OFFICE_1";
case 88:
return "PROPERTY_OFFICE_2_BASE";
case 89:
return "PROPERTY_OFFICE_3";
case 90:
return "PROPERTY_OFFICE_4";
case 91:
return "PROPERTY_CLUBHOUSE_1_BASE_A";
case 92:
return "PROPERTY_CLUBHOUSE_2_BASE_A";
case 93:
return "PROPERTY_CLUBHOUSE_3_BASE_A";
case 94:
return "PROPERTY_CLUBHOUSE_4_BASE_A";
case 95:
return "PROPERTY_CLUBHOUSE_5_BASE_A";
case 96:
return "PROPERTY_CLUBHOUSE_6_BASE_A";
case 97:
return "PROPERTY_CLUBHOUSE_7_BASE_B";
case 98:
return "PROPERTY_CLUBHOUSE_8_BASE_B";
case 99:
return "PROPERTY_CLUBHOUSE_9_BASE_B";
case 100:
return "PROPERTY_CLUBHOUSE_10_BASE_B";
case 101:
return "PROPERTY_CLUBHOUSE_11_BASE_B";
case 102:
return "PROPERTY_CLUBHOUSE_12_BASE_B";
case 103:
return "PROPERTY_OFFICE_1_GARAGE_LVL1";
case 104:
return "PROPERTY_OFFICE_1_GARAGE_LVL2";
case 105:
return "PROPERTY_OFFICE_1_GARAGE_LVL3";
case 106:
return "PROPERTY_OFFICE_2_GARAGE_LVL1";
case 107:
return "PROPERTY_OFFICE_2_GARAGE_LVL2";
case 108:
return "PROPERTY_OFFICE_2_GARAGE_LVL3";
case 109:
return "PROPERTY_OFFICE_3_GARAGE_LVL1";
case 110:
return "PROPERTY_OFFICE_3_GARAGE_LVL2";
case 111:
return "PROPERTY_OFFICE_3_GARAGE_LVL3";
case 112:
return "PROPERTY_OFFICE_4_GARAGE_LVL1";
case 113:
return "PROPERTY_OFFICE_4_GARAGE_LVL2";
case 114:
return "PROPERTY_OFFICE_4_GARAGE_LVL3";
case 115:
return "PROPERTY_IMPEXP_VEH_WAREHOUSE";
case 116:
return "PROPERTY_HANGAR";
case 117:
return "PROPERTY_DEFUNC_BASE";
case 118:
return "PROPERTY_NIGHTCLUB";
case 119:
return "PROPERTY_MEGAWARE_GARAGE_LVL1";
case 120:
return "PROPERTY_MEGAWARE_GARAGE_LVL2";
case 121:
return "PROPERTY_MEGAWARE_GARAGE_LVL3";
case 122:
return "PROPERTY_ARENAWARS_GARAGE_LVL1";
case 123:
return "PROPERTY_ARENAWARS_GARAGE_LVL2";
case 124:
return "PROPERTY_ARENAWARS_GARAGE_LVL3";
case 125:
return "PROPERTY_CASINO_GARAGE";
case 126:
return "PROPERTY_ARCADE_GARAGE";
case 127:
return "PROPERTY_AUTO_SHOP";
case 128:
return "PROPERTY_SECURITY_OFFICE_GARAGE";
default:
}
return "PROPERTY_INVALID";
}


char* func_42(int iParam0){
switch (iParam0){
case 0:
return "SIMPLE_INTERIOR_WAREHOUSE_1";
case 1:
return "SIMPLE_INTERIOR_WAREHOUSE_2";
case 2:
return "SIMPLE_INTERIOR_WAREHOUSE_3";
case 3:
return "SIMPLE_INTERIOR_WAREHOUSE_4";
case 4:
return "SIMPLE_INTERIOR_WAREHOUSE_5";
case 5:
return "SIMPLE_INTERIOR_WAREHOUSE_6";
case 6:
return "SIMPLE_INTERIOR_WAREHOUSE_7";
case 7:
return "SIMPLE_INTERIOR_WAREHOUSE_8";
case 8:
return "SIMPLE_INTERIOR_WAREHOUSE_9";
case 9:
return "SIMPLE_INTERIOR_WAREHOUSE_10";
case 10:
return "SIMPLE_INTERIOR_WAREHOUSE_11";
case 11:
return "SIMPLE_INTERIOR_WAREHOUSE_12";
case 12:
return "SIMPLE_INTERIOR_WAREHOUSE_13";
case 13:
return "SIMPLE_INTERIOR_WAREHOUSE_14";
case 14:
return "SIMPLE_INTERIOR_WAREHOUSE_15";
case 15:
return "SIMPLE_INTERIOR_WAREHOUSE_16";
case 16:
return "SIMPLE_INTERIOR_WAREHOUSE_17";
case 17:
return "SIMPLE_INTERIOR_WAREHOUSE_18";
case 18:
return "SIMPLE_INTERIOR_WAREHOUSE_19";
case 19:
return "SIMPLE_INTERIOR_WAREHOUSE_20";
case 20:
return "SIMPLE_INTERIOR_WAREHOUSE_21";
case 21:
return "SIMPLE_INTERIOR_WAREHOUSE_22";
case 22:
return "SIMPLE_INTERIOR_FACTORY_METH_1";
case 23:
return "SIMPLE_INTERIOR_FACTORY_WEED_1";
case 24:
return "SIMPLE_INTERIOR_FACTORY_CRACK_1";
case 25:
return "SIMPLE_INTERIOR_FACTORY_MONEY_1";
case 26:
return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_1";
case 27:
return "SIMPLE_INTERIOR_FACTORY_METH_2";
case 28:
return "SIMPLE_INTERIOR_FACTORY_WEED_2";
case 29:
return "SIMPLE_INTERIOR_FACTORY_CRACK_2";
case 30:
return "SIMPLE_INTERIOR_FACTORY_MONEY_2";
case 31:
return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_2";
case 32:
return "SIMPLE_INTERIOR_FACTORY_METH_3";
case 33:
return "SIMPLE_INTERIOR_FACTORY_WEED_3";
case 34:
return "SIMPLE_INTERIOR_FACTORY_CRACK_3";
case 35:
return "SIMPLE_INTERIOR_FACTORY_MONEY_3";
case 36:
return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_3";
case 37:
return "SIMPLE_INTERIOR_FACTORY_METH_4";
case 38:
return "SIMPLE_INTERIOR_FACTORY_WEED_4";
case 39:
return "SIMPLE_INTERIOR_FACTORY_CRACK_4";
case 40:
return "SIMPLE_INTERIOR_FACTORY_MONEY_4";
case 41:
return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_4";
case 42:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_POLICE_STATION";
case 43:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MC_CLUBHOUSE";
case 44:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ROCKFORD";
case 45:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PILLBOX";
case 46:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ALTA";
case 47:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_BURTON";
case 48:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PALETO";
case 49:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_GRAND_SENORA";
case 50:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_CHUMASH";
case 51:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ROCKCLUB";
case 52:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY";
case 53:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_2";
case 54:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_3";
case 55:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_4";
case 56:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FARMHOUSE";
case 57:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HEIST_YACHT";
case 58:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_RECYCLING_PLANT";
case 59:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB";
case 60:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_1";
case 61:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_2";
case 62:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_3";
case 63:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_4";
case 64:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_5";
case 65:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_6";
case 66:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_7";
case 67:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_8";
case 68:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_9";
case 69:
return "SIMPLE_INTERIOR_IE_WAREHOUSE_10";
case 70:
return "SIMPLE_INTERIOR_BUNKER_1";
case 71:
return "SIMPLE_INTERIOR_BUNKER_2";
case 72:
return "SIMPLE_INTERIOR_BUNKER_3";
case 73:
return "SIMPLE_INTERIOR_BUNKER_4";
case 74:
return "SIMPLE_INTERIOR_BUNKER_5";
case 75:
return "SIMPLE_INTERIOR_BUNKER_6";
case 76:
return "SIMPLE_INTERIOR_BUNKER_7";
case 77:
return "SIMPLE_INTERIOR_BUNKER_9";
case 78:
return "SIMPLE_INTERIOR_BUNKER_10";
case 79:
return "SIMPLE_INTERIOR_BUNKER_11";
case 80:
return "SIMPLE_INTERIOR_BUNKER_12";
case 81:
return "SIMPLE_INTERIOR_ARMORY_TRUCK_1";
case 82:
return "SIMPLE_INTERIOR_CREATOR_TRAILER_1";
case 83:
return "SIMPLE_INTERIOR_HANGAR_1";
case 84:
return "SIMPLE_INTERIOR_HANGAR_2";
case 85:
return "SIMPLE_INTERIOR_HANGAR_3";
case 86:
return "SIMPLE_INTERIOR_HANGAR_4";
case 87:
return "SIMPLE_INTERIOR_HANGAR_5";
case 88:
return "SIMPLE_INTERIOR_ARMORY_AIRCRAFT_1";
case 89:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_1";
case 90:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_2";
case 91:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_3";
case 92:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_4";
case 93:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_6";
case 94:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_7";
case 95:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_8";
case 96:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_9";
case 97:
return "SIMPLE_INTERIOR_DEFUNCT_BASE_10";
case 98:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MEDIUM_GARAGE";
case 99:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LOWEND_STUDIO";
case 100:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MIDEND_APARTMENT";
case 101:
return "SIMPLE_INTERIOR_CREATOR_AIRCRAFT_1";
case 102:
return "SIMPLE_INTERIOR_HUB_LA_MESA";
case 103:
return "SIMPLE_INTERIOR_HUB_MISSION_ROW";
case 104:
return "SIMPLE_INTERIOR_HUB_STRAWBERRY_WAREHOUSE";
case 105:
return "SIMPLE_INTERIOR_HUB_WEST_VINEWOOD";
case 106:
return "SIMPLE_INTERIOR_HUB_CYPRESS_FLATS";
case 107:
return "SIMPLE_INTERIOR_HUB_LSIA_WAREHOUSE";
case 108:
return "SIMPLE_INTERIOR_HUB_ELYSIAN_ISLAND";
case 109:
return "SIMPLE_INTERIOR_HUB_DOWNTOWN_VINEWOOD";
case 110:
return "SIMPLE_INTERIOR_HUB_DEL_PERRO_BUILDING";
case 111:
return "SIMPLE_INTERIOR_HUB_VESPUCCI_CANALS";
case 112:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF";
case 113:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF2";
case 114:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_UNION_DEPOSITORY_CARPARK";
case 115:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SIMEON_SHOWROOM";
case 116:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ABATTOIR";
case 117:
return "SIMPLE_INTERIOR_HACKER_TRUCK";
case 118:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_JEWEL_STORE";
case 119:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LIFE_INVADER";
case 120:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_DJ_YACHT";
case 121:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MELANOMA_GARAGE";
case 122:
return "SIMPLE_INTERIOR_ARENA_GARAGE_1";
case 123:
return "SIMPLE_INTERIOR_CASINO";
case 124:
return "SIMPLE_INTERIOR_CASINO_APT";
case 125:
return "SIMPLE_INTERIOR_CASINO_VAL_GARAGE";
case 126:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HAYES_AUTOS";
case 127:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_METH_LAB";
case 128:
return "SIMPLE_INTERIOR_ARCADE_PALETO_BAY";
case 129:
return "SIMPLE_INTERIOR_ARCADE_GRAPESEED";
case 130:
return "SIMPLE_INTERIOR_ARCADE_DAVIS";
case 131:
return "SIMPLE_INTERIOR_ARCADE_WEST_VINEWOOD";
case 132:
return "SIMPLE_INTERIOR_ARCADE_ROCKFORD_HILLS";
case 133:
return "SIMPLE_INTERIOR_ARCADE_LA_MESA";
case 134:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FIB_BUILDING";
case 135:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB_AND_TUNNEL";
case 136:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FOUNDRY";
case 137:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MAX_RENDA";
case 138:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER";
case 139:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_2";
case 140:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_3";
case 141:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_4";
case 142:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_5";
case 143:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_6";
case 144:
return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_OMEGA";
case 145:
return "SIMPLE_INTERIOR_SOLOMONS_OFFICE";
case 146:
return "SIMPLE_INTERIOR_CASINO_NIGHTCLUB";
case 147:
return "SIMPLE_INTERIOR_SUBMARINE";
case 148:
return "SIMPLE_INTERIOR_MUSIC_STUDIO";
case 149:
return "SIMPLE_INTERIOR_AUTO_SHOP_LA_MESA";
case 150:
return "SIMPLE_INTERIOR_AUTO_SHOP_STRAWBERRY";
case 151:
return "SIMPLE_INTERIOR_AUTO_SHOP_BURTON";
case 152:
return "SIMPLE_INTERIOR_AUTO_SHOP_RANCHO";
case 153:
return "SIMPLE_INTERIOR_AUTO_SHOP_MISSION_ROW";
case 154:
return "SIMPLE_INTERIOR_CAR_MEET";
case 155:
return "SIMPLE_INTERIOR_FIXER_HQ_HAWICK";
case 156:
return "SIMPLE_INTERIOR_FIXER_HQ_ROCKFORD";
case 157:
return "SIMPLE_INTERIOR_FIXER_HQ_SEOUL";
case 158:
return "SIMPLE_INTERIOR_FIXER_HQ_VESPUCCI";
case 159:
return "SIMPLE_INTERIOR_ACID_LAB";
case 160:
return "SIMPLE_INTERIOR_JUGGALO_HIDEOUT";
case 161:
return "SIMPLE_INTERIOR_MULTISTOREY_GARAGE";
default:
}
return "SIMPLE_INTERIOR_INVALID";
}

int func_43(int iParam0){
if(iParam0 !=func_214()){
if(func_33(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}elseif(((Global_1575060 || Global_2635559.f_2680) && iParam0==PLAYER::PLAYER_ID()) && func_33(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}}
return -1;
}


bool func_44(){
return Global_1950108.f_513 !=-1;
}

int func_45(){
if(Global_1947733.f_3 !=0){
return Global_1947733.f_3;
}
return -1;
}

int func_46(){
if(Global_1947733.f_2 !=0){
return Global_1947733.f_2;
}
return -1;
}

int func_47(int iParam0){
if(iParam0==func_214()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_48(int iParam0){
if(iParam0==func_214()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}

int func_49(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


void func_50(int iParam0){
Local_151[PLAYER::PLAYER_ID() /*3*/].f_1=iParam0;
MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 2);
}

int func_51(bool bParam0){
if(!bParam0){
iLocal_120=1;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
switch (iLocal_120){
case 0:
if(func_59("INSERT_COINS", 1, 0)){
iLocal_120=1;
}
break;
case 1:
if(func_59("EXIT", !bParam0, 0)){
func_168();
iLocal_120=0;
return 1;
}
break;
}}
func_52(0);
return 0;
}


void func_52(int iParam0){
if(func_58()){
return;
}
if(!Global_20383.f_1==1){
if(func_57(0)){
func_53(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_53(int iParam0){
if(func_58()){
return;
}
if(Global_20584){
if(func_56()){
func_55(1, 1);
}else{
func_55(0, 0);
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
if(!func_54()){
Global_20383.f_1=3;
}}

int func_54(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_55(bool bParam0, bool bParam1){
if(bParam0){
if(func_57(0)){
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


bool func_56(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_57(int iParam0){
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


bool func_58(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_59(char* sParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_121);
STREAMING::REQUEST_ANIM_DICT(sLocal_127);
if(STREAMING::HAS_ANIM_DICT_LOADED(sLocal_127)){
if((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >=0.96f) || bParam1){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_121)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_121);
iLocal_121=-1;
}
iLocal_121=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_143, ENTITY::GET_ENTITY_ROTATION(iLocal_112, 2), 2, 0, iParam2, 1f, 0f, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_121, sLocal_127, sParam0, 4f, -2f, 5, 0, 2f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_121);
return 1;
}}
return 0;
}


void func_60(bool bParam0, int iParam1){
int iVar0;
if(!func_62(&iVar0, 0, iParam1)){
return;
}
if(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23270.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23270.f_6071[iVar0]=0;
}
if(Global_23270.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23270.f_6057[iVar0]=0;
}
if(Global_23270.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23270.f_6064[iVar0]=0;
}
if(bParam0){
func_61(&(Global_23270.f_6103[iVar0 /*10*/]));
Global_23270.f_6164[iVar0]=0;
}else{
Global_23270.f_6164[iVar0]=0;
}}


void func_61(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_62(var uParam0, bool bParam1, int iParam2){
char cVar0[64];
int iVar16;
int iVar17;
int iVar18;
if(iParam2==-1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
iParam2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}
StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
StringIntConCat(&cVar0, iParam2, 64);
iVar16=MISC::GET_HASH_KEY(&cVar0);
iVar18=-1;
iVar17=0;
while (iVar17 < 6){
if(Global_23270.f_6164[iVar17]==iVar16){
*uParam0=iVar17;
return 1;
}elseif(Global_23270.f_6164[iVar17]==0){
iVar18=iVar17;
}
iVar17++;
}
if(bParam1){
if(iVar18 !=-1){
Global_23270.f_6164[iVar18]=iVar16;
*uParam0=iVar18;
return 1;
}}
return 0;
}


void func_63(){
if(!func_156()){
func_124();
if(func_122("SNK_MNU", -1, 1)){
if(MISC::IS_BIT_SET(uLocal_122, 1)){
func_111();
MISC::CLEAR_BIT(&uLocal_122, 1);
}else{
func_110(iLocal_116, 1, 1);
}
func_102();
func_65(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
func_64();
MISC::SET_BIT(&uLocal_122, 3);
}}}


void func_64(){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
}


void func_65(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
int iVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
bool bVar32;
bool bVar33;
float fVar34;
float fVar35;
float fVar36;
float fVar37;
struct<3> Var38;
bool bVar41;
float fVar42;
float fVar43;
float fVar44;
float fVar45;
float fVar46;
int iVar47;
int iVar48;
int iVar49;
int iVar50;
float fVar51;
bool bVar52;
bool bVar53;
bool bVar54;
bool bVar55;
float fVar56;
float fVar57;
float fVar58;
float fVar59;
var uVar60;
var uVar61;
float fVar62;
char cVar63[64];
char cVar79[64];
float fVar95;
int iVar96;
float fVar97;
float fVar98;
int iVar99;
int iVar100;
int iVar101;
int iVar102;
int iVar103;
int iVar104;
char cVar105[16];
float fVar109;
float fVar110;
float fVar111;
float fVar112;
float fVar113;
if(!func_62(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_99(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar57=0f;
if(Global_23270){
if(func_97(29, 1, 1, &fVar36, &fVar37, bParam7)){
fVar58=(fVar37 / fVar36);
}else{
Global_23270=0;
}}
if(fParam5==-1f){
fParam5=Global_23269;
}
fVar57=(fParam5 * fVar58);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar59=Global_23268;
}else{
fVar59=(((Global_23268 + fVar57) + 0.034722f) + 0f);
}
fVar62=1f;
func_95(bParam7, &uVar60, &uVar61, &fVar62);
if(bParam3){
if(Global_23270.f_5661 <=1){
func_91(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23270.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23270.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar51=Global_23268;
}else{
if(Global_23270){
StringCopy(&cVar63, func_90(29), 64);
StringCopy(&cVar79, func_87(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_86(Global_23267, Global_23268, fParam5, fVar57, 0, 0, 0, 255);
GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
}else{
GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
}}
if(Global_23270.f_8862){
iVar1=Global_23270.f_8858;
iVar2=Global_23270.f_8859;
iVar3=Global_23270.f_8860;
iVar4=Global_23270.f_8861;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}
func_86(Global_23267, (Global_23268 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar51=(((Global_23268 + fVar57) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1)) !=0){
func_85();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_1));
iVar15=0;
iVar16=0;
iVar17=0;
iVar18=0;
iVar14=0;
while (iVar14 < Global_23270.f_74){
if(Global_23270.f_5[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_10[iVar15]);
iVar15++;
}
elseif(Global_23270.f_5[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
iVar16++;
}
elseif(Global_23270.f_5[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23267 + 0.00390625f), ((Global_23268 + fVar57) + 0.00416664f), 0);
}
if(Global_23270.f_6178){
func_85();
func_83((((Global_23267 + fParam5) - 0.00390625f) - func_84("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
}elseif(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_6177 !=0){
func_85();
func_83((((Global_23267 + fParam5) - 0.00390625f) - func_84("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
}}}
iVar6=Global_23270.f_6181;
iVar9=0;
fVar95=fVar51;
if(Global_23270.f_8872){
iVar1=Global_23270.f_8868;
iVar2=Global_23270.f_8869;
iVar3=Global_23270.f_8870;
iVar4=Global_23270.f_8871;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
while (iVar9 < Global_23270.f_5668 && iVar6 <=Global_23270.f_5661){
if(iVar6 >=0){
if(Global_23270.f_5928[iVar6]){
if(Global_23270.f_5799[iVar6] && iVar6 !=Global_23270.f_6181){
fVar51=(fVar51 + 0.00277776f);
}
fVar56=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar56=Global_23270.f_6188[iVar6];
}
fVar51=(fVar51 + fVar56);
iVar9++;
}}
iVar6++;
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
if(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_8877){
iVar1=Global_23270.f_8873;
iVar2=Global_23270.f_8874;
iVar3=Global_23270.f_8875;
iVar4=Global_23270.f_8876;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=204;
}
func_86(Global_23267, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
Var38={
GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") 
};
Var38.f_0=(Var38.f_0 * (0.5f / fVar62));
Var38.f_1=(Var38.f_1 * (0.5f / fVar62));
if(Global_23270.f_8890){
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}else{
HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
fVar51=(fVar51 + (0f + 0.034722f));
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_5081)) !=0 && Global_23270.f_5163 !=-1){
fVar51=(fVar51 + (0.00277776f * 2f));
fVar42=(Global_23267 + 0.0046875f);
if(Global_23270.f_5165 !=0){
func_97(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar42=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_86(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
if(Global_23270.f_5165 !=0){
func_97(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_81(Global_23270.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
GRAPHICS::DRAW_SPRITE(func_90(Global_23270.f_5165), func_87(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
fVar51=(fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar51=(fVar51 + (0.00138888f * 6f));
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_86(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
fVar51=(fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
}
if(Global_23270.f_5163 > 0){
if((MISC::GET_GAME_TIMER() - Global_23270.f_5164) > Global_23270.f_5163){
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5163=-1;
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar51=(fVar51 + (0.00277776f * 2f));
fVar42=(Global_23267 + 0.0046875f);
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_86(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_21)) !=0 && Global_4540953.f_65 !=-1){
fVar51=(fVar51 + (0.00277776f * 2f));
fVar42=(Global_23267 + 0.0046875f);
if(Global_4540953.f_67 !=0){
func_97(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar42=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_86(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_82(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
if(Global_4540953.f_67 !=0){
func_97(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_81(Global_4540953.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
GRAPHICS::DRAW_SPRITE(func_90(Global_4540953.f_67), func_87(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
fVar51=(fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540953.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540953.f_66) > Global_4540953.f_65){
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_65=-1;
}}}
func_74(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
}
if(iVar5==1 || !Global_23270.f_6171){
iVar19=0;
iVar23=0;
iVar20=0;
iVar21=0;
iVar22=0;
iVar9=0;
iVar10=0;
iVar11=0;
iVar12=0;
iVar13=0;
iVar96=Global_23270.f_5661;
if(Global_23270.f_6172){
iVar96=(Global_23270.f_6175 - 1);
}
fVar97=0f;
fVar98=0f;
iVar7=0;
while (iVar7 <=iVar96){
fVar56=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar56=Global_23270.f_6188[iVar6];
}
if(Global_23270.f_6172){
iVar6=Global_23270.f_8513[iVar7];
}else{
iVar6=iVar7;
}
iVar12=iVar13;
bVar33=false;
if(iVar6 >=Global_23270.f_6181 && iVar9 < Global_23270.f_5668){
bVar33=true;
if(Global_23270.f_6182==iVar6){
fVar98=fVar97;
}
if(Global_23270.f_5799[iVar6]){
iVar12++;
}
fVar35=(((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
}
Global_23270.f_6322[iVar6]=fVar35;
fVar34=(Global_23267 + 0.0046875f);
bVar41=false;
bVar32=Global_23270.f_6182==iVar6;
if((bVar32 && iVar5==1) && bVar33){
iVar100=255;
iVar101=255;
iVar102=255;
iVar103=255;
if(Global_23270.f_8884){
HUD::GET_HUD_COLOUR(Global_23270.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
}else{
HUD::GET_HUD_COLOUR(1, &iVar100, &iVar101, &iVar102, &iVar103);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
Global_23270.f_6320=fVar35;
}
iVar8=0;
while (iVar8 < Global_23270.f_5669){
if(MISC::IS_BIT_SET(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_6172){
iVar19=Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar20=Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar21=Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar22=Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar23=Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
}
else{
Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar19;
Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar20;
Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar21;
Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar22;
Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar23;
}
iVar104=0;
bVar55=false;
if(Global_23270.f_6454[0] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[0]){
bVar55=true;
iVar104=0;
}
}
if(Global_23270.f_6454[1] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[1]){
bVar55=true;
iVar104=1;
}
}
if(Global_23270.f_5505[iVar8] !=-1f){
fVar34=((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
}
if((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] !=-1f) && fVar34 < Global_23270.f_5505[iVar8 + 1]){
fVar46=(Global_23270.f_5505[iVar8 + 1] - fVar34);
}
else{
fVar46=(((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
}
if((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32){
bVar54=true;
}
else{
bVar54=false;
}
switch (Global_23270.f_5499[iVar8]){
case 0:
break;
case 1:
iVar24=iVar19;
if(bVar33){
if(!Global_23270.f_6172){
fVar43=0f;
fVar44=0f;
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
bVar52=false;
bVar53=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar53=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar52=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar53=true;
}
func_72(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar28++;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
fVar43=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(iVar28 > 0){
iVar14=0;
while (iVar14 < iVar28){
if(func_97(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar44=(fVar44 + fVar36);
if(iVar14 > 0){
fVar44=(fVar44 - (0.00078125f * 4f));
}
if((Global_23270.f_4824[(iVar22 + iVar14)]==2 || Global_23270.f_4824[(iVar22 + iVar14)]==52) || Global_23270.f_4824[(iVar22 + iVar14)]==62){
fVar44=(fVar44 - (0.00078125f * 5f));
}}
iVar14++;
}
}
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar43;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar44;
if(Global_23270.f_5526[iVar8]==2){
iVar99=(iVar8 - 1);
while (iVar99 >=0){
if(Global_23270.f_5526[iVar99]==2){
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)]=(Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] - Global_23270.f_5511[iVar8]);
}
iVar99=(iVar99 + -1);
}
}
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar43=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar44=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_97(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_97(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(26), func_87(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
if(func_97(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_97(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(27), func_87(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
}
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
iVar31=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
bVar52=false;
bVar53=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar53=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar52=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar53=true;
}
func_72(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_71(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=1;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=8;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=5;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=6;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=7;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=9;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
iVar31=2;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
iVar31=3;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
if((Global_23270.f_4824[(iVar22 + iVar28)]==2 || Global_23270.f_4824[(iVar22 + iVar28)]==52) || Global_23270.f_4824[(iVar22 + iVar28)]==62){
if(func_97(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + (fVar36 * 0.5f));
if(func_97(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_81(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
if(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_90(Global_23270.f_4824[(iVar22 + iVar28)]), func_87(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_90(Global_23270.f_4824[(iVar22 + iVar28)]), func_87(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
}
fVar42=(fVar42 + (0.00078125f * 3f));
}}}
iVar28++;
iVar31=4;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
if(iVar31==4 && Global_23270.f_5526[iVar8]==2){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
}
else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
if(func_70() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23270.f_2130[iVar24]){
bVar53=true;
}
func_72(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
StringCopy(&cVar105, "TEST_LABEL", 16);
fVar109=0f;
fVar110=55f;
fVar111=0.0185f;
fVar112=0.004f;
fVar113=0.02f;
HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
GRAPHICS::DRAW_RECT((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar110), 0);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar105);
HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23270.f_6181 + iVar30));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar113), (fVar35 + fVar112), 0);
iVar30++;
}}
}
}
if(iVar28 > 0){
fVar42=(fVar42 + (6f * 0.00078125f));
iVar14=0;
while (iVar14 < iVar28){
if((Global_23270.f_4824[(iVar22 + iVar14)] !=2 && Global_23270.f_4824[(iVar22 + iVar14)] !=52) && Global_23270.f_4824[(iVar22 + iVar14)] !=62){
if(func_97(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_97(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_81(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
if(Global_23270.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_90(Global_23270.f_4824[(iVar22 + iVar14)]), func_87(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
elseif(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_90(Global_23270.f_4824[(iVar22 + iVar14)]), func_87(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_90(Global_23270.f_4824[(iVar22 + iVar14)]), func_87(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
}
}
fVar42=(fVar42 + (12f * 0.00078125f));
}}
iVar14++;
}
}}
bVar41=true;
iVar19++;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
iVar20++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
iVar21++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar22++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
iVar23++;
}
iVar14++;
}
break;
case 2:
if(bVar33){
if(!Global_23270.f_6172){
func_72(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_71(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[iVar20]);
fVar43=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar43;
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar43=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_97(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_97(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(26), func_87(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
if(func_97(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_97(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(27), func_87(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
}
if(iVar5==1){
func_72(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
func_69((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
}}
bVar41=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23270.f_6172){
func_72(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_71(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
fVar43=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar43;
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar43=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_97(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_97(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(26), func_87(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
if(func_97(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_97(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(27), func_87(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
}
func_72(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
func_68((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
}
bVar41=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_97(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
if(!Global_23270.f_6172){
fVar44=fVar36;
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
}elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar44;
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar44=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_97(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_97(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(26), func_87(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}}
if(func_97(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_97(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_81(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_90(27), func_87(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}}
}
if(iVar5==1){
if(func_97(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_81(Global_23270.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
GRAPHICS::DRAW_SPRITE(func_90(Global_23270.f_4824[iVar22]), func_87(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_67(Global_23270.f_4824[iVar22])), (fVar37 * func_67(Global_23270.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
}
}}
bVar41=true;
iVar22++;
break;
case 5:
bVar41=true;
break;
}
if(Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_5511[iVar8] > 0.05f){
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}else{
fVar34=(fVar34 + 0.05f);
}
}
else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
if(Global_23270.f_5518[iVar8]){
if(func_97(26, 1, 1, &fVar36, &fVar37, bParam7)){
fVar34=(fVar34 - fVar36);
}}
}}else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}
iVar8++;
}
if(bVar41){
if(bVar33){
Global_23270.f_8513[iVar9]=iVar6;
Global_23270.f_6183=iVar6;
iVar9++;
if(Global_23270.f_5799[iVar6]){
iVar13++;
}
if(Global_23270.f_6188[iVar6] !=0f){
fVar97=(fVar97 + Global_23270.f_6188[iVar6]);
}
else{
fVar97=(fVar97 + 0.034722f);
}}
if(!Global_23270.f_6171){
Global_23270.f_5928[iVar6]=1;
if(Global_23270.f_5670[iVar6]){
if(bVar32){
Global_23270.f_6177=0;
}
}
else{
iVar11++;
if(bVar32){
Global_23270.f_6177=iVar11;
}
}
iVar10++;
}}
iVar7++;
}
if(!Global_23270.f_6171){
Global_23270.f_6173=((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
Global_23270.f_6176=iVar11;
Global_23270.f_6174=iVar10;
Global_23270.f_6171=1;
}}
if(!Global_23270.f_6172){
Global_23270.f_6175=iVar9;
Global_23270.f_6172=1;
}
iVar5++;
}
Global_23270.f_6319=fVar51;
Global_23270.f_6321=MISC::GET_GAME_TIMER();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23270.f_6319);
if(!Global_23270.f_8857){
func_52(0);
}
Global_23270.f_8857=0;
if(bParam2){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
if(bParam0){
func_66(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_66(int iParam0){
Global_1655472.f_1163=iParam0;
}


float func_67(int iParam0){
switch (iParam0){
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 39:
case 40:
case 38:
case 54:
case 45:
case 46:
case 47:
return 0.85f;
break;
}
return 1f;
}


void func_68(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_69(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


var func__70(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_71(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(bParam0){
HUD::GET_HUD_COLOUR(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
}else{
HUD::GET_HUD_COLOUR(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}


void func_72(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_73(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
if((iVar0 < 20 && iVar1 < 20) && iVar2 < 20){
if(bParam0==0){
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
}}elseif((iVar0 > 230 && iVar1 > 230) && iVar2 > 230){
if(bParam0){
iVar0=0;
iVar1=0;
iVar2=0;
}}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}elseif(bParam1){
if(bParam0){
HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}else{
HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}}elseif(bParam1){
if(bParam0){
HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
}else{
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_JUSTIFICATION(1);
if(bParam5){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(4);
}elseif(bParam6){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(6);
}else{
HUD::SET_TEXT_FONT(0);
}
HUD::SET_TEXT_WRAP(0f, 1f);
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_73(int iParam0, var uParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
*uParam1=8;
*uParam2=8;
*uParam3=8;
break;
case 1:
*uParam1=37;
*uParam2=37;
*uParam3=39;
break;
case 22:
*uParam1=140;
*uParam2=146;
*uParam3=154;
break;
case 23:
*uParam1=91;
*uParam2=93;
*uParam3=94;
break;
case 6:
*uParam1=81;
*uParam2=84;
*uParam3=89;
break;
case 111:
*uParam1=240;
*uParam2=240;
*uParam3=240;
break;
case 28:
*uParam1=150;
*uParam2=8;
*uParam3=0;
break;
case 34:
*uParam1=38;
*uParam2=3;
*uParam3=6;
break;
case 88:
*uParam1=245;
*uParam2=137;
*uParam3=15;
break;
case 45:
*uParam1=74;
*uParam2=22;
*uParam3=7;
break;
case 56:
*uParam1=45;
*uParam2=58;
*uParam3=53;
break;
case 58:
*uParam1=71;
*uParam2=120;
*uParam3=60;
break;
case 54:
*uParam1=77;
*uParam2=98;
*uParam3=104;
break;
case 73:
*uParam1=14;
*uParam2=49;
*uParam3=109;
break;
case 68:
*uParam1=22;
*uParam2=34;
*uParam3=72;
break;
case 140:
*uParam1=0;
*uParam2=174;
*uParam3=239;
break;
case 131:
*uParam1=255;
*uParam2=183;
*uParam3=0;
break;
case 90:
*uParam1=142;
*uParam2=140;
*uParam3=70;
break;
case 97:
*uParam1=156;
*uParam2=141;
*uParam3=113;
break;
case 89:
*uParam1=145;
*uParam2=115;
*uParam3=71;
break;
case 105:
*uParam1=98;
*uParam2=68;
*uParam3=40;
break;
case 100:
*uParam1=124;
*uParam2=27;
*uParam3=68;
break;
case 99:
*uParam1=114;
*uParam2=42;
*uParam3=63;
break;
case 136:
*uParam1=246;
*uParam2=151;
*uParam3=153;
break;
case 49:
*uParam1=32;
*uParam2=32;
*uParam3=44;
break;
case 146:
*uParam1=26;
*uParam2=1;
*uParam3=23;
break;
default:
*uParam1=255;
*uParam2=255;
*uParam3=255;
break;
}}


void func_74(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_62(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_99(bParam4, bParam8)){
return;
}
if(func_79()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_77(PLAYER::PLAYER_ID(), 0)){
return;
}}
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}}
if(Global_23270.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5465[iVar1] !=363){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5465[iVar1], 1), 64);
}elseif(Global_23270.f_5480[iVar1] !=32){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5480[iVar1], 1), 64);
}
iVar1++;
}
Global_23270.f_5167=0;
}
if(!Global_23270.f_5167){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23270.f_5524 / 100f)));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar1 /*4*/])) !=MISC::GET_HASH_KEY("PREV")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_76(&(Global_23270.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_76(&(Global_23270.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23270.f_5450[iVar1]==-1){
func_75(&(Global_23270.f_5393[iVar1 /*4*/]));
}else{
iVar3=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23270.f_5465[iVar1] !=363 && MISC::IS_BIT_SET(Global_23270.f_5495, iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5465[iVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5166);
func_76(&Global_4540953);
if(Global_4540953.f_20==-1){
func_75(&(Global_4540953.f_16));
}else{
iVar4=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar4=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23270.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23270.f_5167=1;
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5450[iVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar1++;
}
if(Global_4540953.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
if(bParam6){
if(!Global_23270.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
Global_23270.f_8892=1;
}}elseif(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23270.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
}}}


void func_75(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_76(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


bool func_77(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_78(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_78(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_18();
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

int func_79(){
struct<3> Var0;
if(Global_20383.f_1 > 3){
return 1;
}
if(func_80()){
Var0={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20328==0){
if(Var0.f_1 > -119f){
return 1;
}else{
return 0;
}}elseif(Var0.f_1 > -101f){
return 1;
}else{
return 0;
}}
return 0;
}

int func_80(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_81(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
switch (iParam0){
case 28:
*iParam2=194;
*iParam3=80;
*iParam4=80;
break;
case 15:
case 4:
case 16:
case 26:
case 27:
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 54:
case 39:
case 40:
case 38:
case 44:
case 43:
case 45:
case 46:
case 47:
case 53:
case 57:
case 58:
case 59:
case 60:
if(bParam1){
*iParam2=0;
*iParam3=0;
*iParam4=0;
}
break;
case 55:
*iParam5=100;
break;
case 63:
*iParam5=100;
break;
case 56:
HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
break;
}}


void func_82(float fParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_LEADING(2);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_83(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_84(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_85();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_85(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
if(Global_23270.f_8867){
iVar0=Global_23270.f_8863;
iVar1=Global_23270.f_8864;
iVar2=Global_23270.f_8865;
iVar3=Global_23270.f_8866;
}
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_86(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


var func__87(int iParam0, bool bParam1){
char* sVar0[2];
var uVar3;
struct<13> Var19;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var19={
func_89(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3)){
return func_88(&uVar3);
}}else{
return func_88(&(Global_23270.f_7488[iParam0 /*16*/]));
}}
switch (iParam0){
case 3:
sVar0[0]="MP_hostCrown";
sVar0[1]="MP_hostCrown";
break;
case 21:
sVar0[0]="MP_SpecItem_Coke";
sVar0[1]="MP_SpecItem_Coke";
break;
case 22:
sVar0[0]="MP_SpecItem_Heroin";
sVar0[1]="MP_SpecItem_Heroin";
break;
case 23:
sVar0[0]="MP_SpecItem_Weed";
sVar0[1]="MP_SpecItem_Weed";
break;
case 24:
sVar0[0]="MP_SpecItem_Meth";
sVar0[1]="MP_SpecItem_Meth";
break;
case 25:
sVar0[0]="MP_SpecItem_Cash";
sVar0[1]="MP_SpecItem_Cash";
break;
case 1:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 2:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 4:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 6:
sVar0[0]="Shop_Box_CrossB";
sVar0[1]="Shop_Box_Cross";
break;
case 7:
sVar0[0]="Shop_Box_BlankB";
sVar0[1]="Shop_Box_Blank";
break;
case 5:
sVar0[0]="Shop_Box_TickB";
sVar0[1]="Shop_Box_Tick";
break;
case 8:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 9:
sVar0[0]="Shop_Clothing_Icon_B";
sVar0[1]="Shop_Clothing_Icon_A";
break;
case 10:
sVar0[0]="Shop_GunClub_Icon_B";
sVar0[1]="Shop_GunClub_Icon_A";
break;
case 17:
sVar0[0]="Shop_Ammo_Icon_B";
sVar0[1]="Shop_Ammo_Icon_A";
break;
case 18:
sVar0[0]="Shop_Armour_Icon_B";
sVar0[1]="Shop_Armour_Icon_A";
break;
case 19:
sVar0[0]="Shop_Health_Icon_B";
sVar0[1]="Shop_Health_Icon_A";
break;
case 20:
sVar0[0]="Shop_MakeUp_Icon_B";
sVar0[1]="Shop_MakeUp_Icon_A";
break;
case 11:
sVar0[0]="Shop_Tattoos_Icon_B";
sVar0[1]="Shop_Tattoos_Icon_A";
break;
case 12:
sVar0[0]="Shop_Garage_Icon_B";
sVar0[1]="Shop_Garage_Icon_A";
break;
case 13:
sVar0[0]="Shop_Garage_Bike_Icon_B";
sVar0[1]="Shop_Garage_Bike_Icon_A";
break;
case 14:
sVar0[0]="Shop_Barber_Icon_B";
sVar0[1]="Shop_Barber_Icon_A";
break;
case 15:
sVar0[0]="shop_Lock";
sVar0[1]="shop_Lock";
break;
case 16:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 26:
sVar0[0]="arrowleft";
sVar0[1]="arrowleft";
break;
case 27:
sVar0[0]="arrowright";
sVar0[1]="arrowright";
break;
case 28:
sVar0[0]="MP_AlertTriangle";
sVar0[1]="MP_AlertTriangle";
break;
case 29:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 31:
sVar0[0]="Shop_Michael_Icon_B";
sVar0[1]="Shop_Michael_Icon_A";
break;
case 32:
sVar0[0]="Shop_Franklin_Icon_B";
sVar0[1]="Shop_Franklin_Icon_A";
break;
case 33:
sVar0[0]="Shop_Trevor_Icon_B";
sVar0[1]="Shop_Trevor_Icon_A";
break;
case 52:
sVar0[0]="SaleIcon";
sVar0[1]="SaleIcon";
break;
case 53:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 55:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 56:
sVar0[0]="Shop_Lock_Arena";
sVar0[1]="Shop_Lock_Arena";
break;
case 57:
sVar0[0]="Card_Suit_Clubs";
sVar0[1]="Card_Suit_Clubs";
break;
case 58:
sVar0[0]="Card_Suit_Hearts";
sVar0[1]="Card_Suit_Hearts";
break;
case 59:
sVar0[0]="Card_Suit_Spades";
sVar0[1]="Card_Suit_Spades";
break;
case 60:
sVar0[0]="Card_Suit_Diamonds";
sVar0[1]="Card_Suit_Diamonds";
break;
case 61:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 63:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 62:
sVar0[0]="Shop_Chips_A";
sVar0[1]="Shop_Chips_B";
break;
case 0:
sVar0[0]="";
sVar0[1]="";
break;
}
if(bParam1){
return sVar0[0];
}
return sVar0[1];
}


var func__88(var uParam0){
return uParam0;
}
struct<13> func_89(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


char* func_90(int iParam0){
var uVar0;
struct<13> Var16;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var16={
func_89(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
return func_88(&uVar0);
}else{
return func_88(&(Global_23270.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_91(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23270.f_5661 > iParam0){
return;
}
if(Global_23270.f_5661 >=128){
return;
}
if(Global_23270.f_5663 >=256){
return;
}
if(Global_23270.f_6186 < Global_23270.f_6184){
return;
}
if(Global_23270.f_5661 !=iParam0){
Global_23270.f_5661=iParam0;
Global_23270.f_5662=0;
}
iVar0=Global_23270.f_5499[Global_23270.f_5662];
if(iVar0 !=1){
while (Global_23270.f_5662 < 4 && iVar0 !=1){
Global_23270.f_5662++;
iVar0=Global_23270.f_5499[Global_23270.f_5662];
}
if(iVar0 !=1){
return;
}}
StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1)){}
Global_23270.f_1616[Global_23270.f_5663]=bParam3;
Global_23270.f_1873[Global_23270.f_5663]=iParam4;
Global_23270.f_2130[Global_23270.f_5663]=iParam6;
Global_23270.f_5663++;
if(!bParam3){
func_94(Global_23270.f_5661, 1);
}else{
func_94(Global_23270.f_5661, 0);
}
if(iParam2==0){
fVar1=func_93(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(Global_23270.f_5518[Global_23270.f_5662]){
func_97(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23270.f_5511[Global_23270.f_5662]){
Global_23270.f_5511[Global_23270.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_92(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(fVar4 > Global_23270.f_6188[iParam0]){
Global_23270.f_6188[iParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
Global_23270.f_5662++;
Global_23270.f_6187=1;
Global_23270.f_6185=(Global_23270.f_5663 - 1);
Global_23270.f_6186=0;
Global_23270.f_6184=iParam2;
}


float func_92(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_93(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_72(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_94(int iParam0, bool bParam1){
int iVar0;
iVar0=SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}


void func_95(bool bParam0, var uParam1, var uParam2, float fParam3){
float fVar0;
float fVar1;
float fVar2;
if(!bParam0){
GRAPHICS::GET_SCREEN_RESOLUTION(uParam1, uParam2);
return;
}
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(uParam1, uParam2);
fVar0=SYSTEM::TO_FLOAT(*uParam1);
fVar1=SYSTEM::TO_FLOAT(*uParam2);
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(func_96(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=SYSTEM::ROUND((fVar1 * fVar2));
*uParam2=SYSTEM::ROUND(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=SYSTEM::ROUND((fVar0 / *fParam3));
*uParam2=SYSTEM::ROUND((fVar1 / *fParam3));
}


bool func_96(int iParam0, int iParam1){
return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_97(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar16[64];
int iVar32;
int iVar33;
float fVar34;
struct<3> Var35;
float fVar38;
StringCopy(&cVar0, func_90(iParam0), 64);
StringCopy(&cVar16, func_87(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar16) !=0){
fVar34=1f;
func_95(bParam5, &iVar32, &iVar33, &fVar34);
Var35={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) 
};
fVar38=(func_98(iParam0) / fVar34);
Var35={
Var35 * Vector(fVar38, fVar38, fVar38) 
};
if(!bParam2){
Var35.f_0=(Var35.f_0 - 2f);
Var35.f_1=(Var35.f_1 - 2f);
}
if(iParam0==30){
Var35.f_0=288f;
Var35.f_1=106f;
}
if(iParam0==29 && MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
Var35.f_0=106f;
Var35.f_1=106f;
}
*fParam3=((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
*fParam4=(((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
if(!bParam5){
if(!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 !=30){
*fParam3=(*fParam3 * 1.33f);
}}
if(iParam0==29){
if(*fParam3 > Global_23269){
*fParam4=(*fParam4 * (Global_23269 / *fParam3));
*fParam3=Global_23269;
}}
return 1;
}
return 0;
}


float func_98(int iParam0){
switch (iParam0){
case 33:
case 4:
case 11:
case 31:
case 20:
case 15:
case 10:
case 12:
case 13:
case 32:
case 9:
case 5:
case 6:
case 7:
case 14:
case 18:
case 19:
case 17:
case 28:
case 26:
case 27:
case 53:
case 57:
case 58:
case 59:
case 60:
case 61:
case 63:
return 0.5f;
break;
case 62:
return 0.8f;
break;
}
return 1f;
}

int func_99(bool bParam0, bool bParam1){
if(Global_2672505.f_1684.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_101(8, -1) && func_100() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78819) || Global_23270.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100733.f_1474){
return 0;
}
return 1;
}

int func_100(){
return Global_1574993;
}


var func__101(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_102(){
switch (iLocal_128){
case 1:
func_109();
break;
case 0:
func_105();
break;
case 2:
func_103();
break;
}}


void func_103(){
if(!func_200()){
if(iLocal_116==0){
func_104("JBOX_CONF_ON", 0, 0);
}else{
func_104("JBOX_CANC_PUR", 0, 0);
}}elseif(iLocal_115==iLocal_126){
if(iLocal_116==0){
func_104("JBOX_CONF_OFF", 0, 0);
}else{
func_104("JBOX_CANC_PUR", 0, 0);
}}elseif(iLocal_116==0){
func_104("JBOX_CONF_PUR", 0, 0);
}else{
func_104("JBOX_CANC_PUR", 0, 0);
}}


void func_104(char* sParam0, int iParam1, int iParam2){
int iVar0;
StringCopy(&(Global_23270.f_5081), sParam0, 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=iParam1;
Global_23270.f_5164=MISC::GET_GAME_TIMER();
Global_23270.f_5165=iParam2;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}}


void func_105(){
struct<2> Var0;
if(iLocal_116==Local_146.f_3 && func_200()){
func_104("JBOX_PLIST_PLY", 0, 0);
}elseif(iLocal_116==iLocal_126){
func_104("JBOX_TOFF", 0, 0);
}else{
StringCopy(&Var0, "JBOX_PLIST_D_", 16);
StringIntConCat(&Var0, iLocal_116, 16);
if((((iLocal_117 !=126 && iLocal_117 !=130) && iLocal_113==PLAYER::PLAYER_ID()) && func_107()) && iLocal_116==(func_106() - 1)){
StringConCat(&Var0, "a", 16);
}
func_104(&Var0, 0, 0);
}}

int func_106(){
if(iLocal_117==126 || iLocal_117==130){
if(iLocal_113==PLAYER::PLAYER_ID() && func_107()){
return 10;
}
return 9;
}
if(iLocal_113==PLAYER::PLAYER_ID() && func_107()){
return 5;
}
return 4;
}

int func_107(){
if((((((((func_108(31708, -1) || func_108(31709, -1)) || func_108(31710, -1)) || func_108(31711, -1)) || func_108(31712, -1)) || func_108(31713, -1)) || func_108(31714, -1)) || func_108(31757, -1)) || func_108(32287, -1)){
return 1;
}
return 0;
}


var func__108(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_18();
}
return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}


void func_109(){
func_104("JBOX_TOFF_NM", 0, 0);
}


void func_110(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
Global_23270.f_6182=iParam0;
Global_23270.f_6317=iParam2;
if(Global_23270.f_6182 < Global_23270.f_6181){
Global_23270.f_6181=Global_23270.f_6182;
}elseif((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >=(Global_23270.f_6181 + Global_23270.f_5668))){
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}
while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128){
Global_23270.f_6181++;
iVar1=0;
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}}}
Global_23270.f_6171=0;
Global_23270.f_6172=0;
if(bParam1){
StringCopy(&(Global_23270.f_5081), "", 24);
StringCopy(&(Global_4540953.f_21), "", 16);
}}


void func_111(){
switch (iLocal_128){
case 1:
func_121();
break;
case 0:
func_119();
break;
case 2:
func_112();
break;
}}


void func_112(){
func_114("JBOX_CONF_T");
func_91(0, "JBOX_MENU_0", 0, 1, 0, 0, 0);
func_91(1, "JBOX_MENU_1", 0, 1, 0, 0, 0);
func_110(iLocal_116, 1, 1);
func_113(201, "ITEM_SELECT", -1, 0);
func_113(202, "ITEM_BACK", -1, 0);
}


void func_113(int iParam0, char* sParam1, int iParam2, bool bParam3){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
if(!bParam3){
MISC::SET_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
}
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=iParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166++;
}


void func_114(char* sParam0){
func_118(0, 0);
func_117(sParam0);
func_116(1, 2, 1, 1, 1);
func_115(1, 1, 0, 0, 0);
}


void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5499[0]=iParam0;
Global_23270.f_5499[1]=iParam1;
Global_23270.f_5499[2]=iParam2;
Global_23270.f_5499[3]=iParam3;
Global_23270.f_5499[4]=iParam4;
Global_23270.f_5669=0;
if(iParam0 !=0){
Global_23270.f_5669++;
}
if(iParam1 !=0){
Global_23270.f_5669++;
}
if(iParam2 !=0){
Global_23270.f_5669++;
}
if(iParam3 !=0){
Global_23270.f_5669++;
}
if(iParam4 !=0){
Global_23270.f_5669++;
}}


void func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5526[0]=iParam0;
Global_23270.f_5526[1]=iParam1;
Global_23270.f_5526[2]=iParam2;
Global_23270.f_5526[3]=iParam3;
Global_23270.f_5526[4]=iParam4;
}


void func_117(char* sParam0){
int iVar0;
StringCopy(&(Global_23270.f_1), sParam0, 16);
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}}


void func_118(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
float fVar2;
iVar0=0;
while (iVar0 < 256){
StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
iVar1=0;
while (iVar1 < 4){
Global_23270.f_2387[iVar0 /*5*/][iVar1]=0;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 40){
StringCopy(&(Global_2695070[iVar0 /*16*/]), "", 64);
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4309[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_4566[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4824[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_5532[iVar0]=0;
Global_23270.f_5670[iVar0]=0;
Global_23270.f_5799[iVar0]=0;
Global_23270.f_6322[iVar0]=0f;
Global_23270.f_5928[iVar0]=0;
Global_23270.f_6188[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
Global_23270.f_5499[iVar0]=0;
Global_23270.f_5511[iVar0]=0f;
Global_23270.f_5505[iVar0]=-1f;
Global_23270.f_5518[iVar0]=0;
Global_23270.f_5526[iVar0]=1;
iVar0++;
}
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
Global_23270.f_5450[iVar0]=-1;
Global_23270.f_5465[iVar0]=363;
Global_23270.f_5480[iVar0]=32;
iVar0++;
}
iVar0=0;
while (iVar0 < 64){
StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
iVar0++;
}
if(bParam1){
iVar0=0;
while (iVar0 < 256){
Global_23270.f_1616[iVar0]=0;
iVar0++;
}}
StringCopy(&(Global_4540953.f_16), "", 16);
Global_4540953.f_20=-1;
Global_23270=0;
Global_23270.f_5661=0;
Global_23270.f_5662=0;
Global_23270.f_5663=0;
Global_23270.f_5665=0;
Global_23270.f_5666=0;
Global_23270.f_5667=0;
Global_23270.f_5664=0;
Global_23270.f_6317=0;
Global_23270.f_6457=0;
Global_23270.f_6182=0;
Global_23270.f_6181=0;
Global_23270.f_6183=0;
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=0;
Global_23270.f_5164=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}
Global_23270.f_5165=0;
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_61=0;
Global_4540953.f_62=0;
Global_4540953.f_63=0;
Global_4540953.f_64=0;
Global_4540953.f_65=0;
Global_4540953.f_66=0;
iVar0=0;
while (iVar0 < 4){
Global_4540953.f_25[iVar0]=0;
iVar0++;
}
Global_4540953.f_67=0;
StringCopy(&(Global_23270.f_1), "", 16);
Global_23270.f_5517=0f;
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}
Global_23270.f_6187=0;
Global_23270.f_6186=0;
Global_23270.f_6184=0;
Global_23270.f_6185=0;
Global_23270.f_5166=0;
Global_23270.f_5167=0;
Global_23270.f_5668=10;
Global_23270.f_5669=0;
Global_23270.f_6319=0f;
Global_23270.f_6320=0f;
Global_23270.f_6171=0;
Global_23270.f_6172=0;
Global_23270.f_6173=0f;
Global_23270.f_6174=0;
Global_23270.f_6176=0;
Global_23270.f_6175=0;
Global_23270.f_6177=0;
Global_23270.f_6178=0;
Global_23270.f_6179=0;
Global_23270.f_6180=0;
Global_23270.f_8888=0;
iVar0=0;
while (iVar0 < 2){
Global_23270.f_6451[iVar0]=-1;
Global_23270.f_6454[iVar0]=-1;
iVar0++;
}
Global_23270.f_5524=0f;
Global_23270.f_5495=0;
Global_23270.f_5525=0;
iVar0=0;
while (iVar0 < Global_23270.f_6458){
Global_23270.f_6458[iVar0]=0;
iVar0++;
}
Global_23270.f_8867=0;
Global_23270.f_8862=0;
Global_23270.f_8872=0;
Global_23270.f_8877=0;
Global_23270.f_8882=0;
Global_23270.f_8884=0;
Global_23270.f_8890=0;
Global_23267=0.05f;
Global_23268=0.05f;
Global_23269=0.225f;
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(bParam0){
Global_23269=(0.225f * (1.777778f / fVar2));
}elseif(fVar2 < 1.77777f){
Global_23269=(0.225f * (1.777778f / fVar2));
}else{
Global_23269=0.225f;
}}


void func_119(){
int iVar0;
int iVar1;
struct<2> Var2;
bool bVar6;
func_114("JBOX_MENU_T");
iVar0=func_106();
iVar1=0;
while (iVar1 < iVar0){
StringCopy(&Var2, "JBOX_PLIST_", 16);
bVar6=iVar1 !=Local_146.f_3;
if(!func_200()){
bVar6=true;
}
StringIntConCat(&Var2, iVar1, 16);
if((((iLocal_117 !=126 && iLocal_117 !=130) && iLocal_113==PLAYER::PLAYER_ID()) && func_107()) && iVar1==(func_106() - 1)){
StringConCat(&Var2, "a", 16);
}
func_91(iVar1, &Var2, 0, bVar6, 0, 0, 0);
if(bVar6){
func_91(iVar1, "JBOX_CHARGE", 0, bVar6, 0, 0, 0);
}
iVar1++;
}
if(func_200()){
func_91(iVar1, "JBOX_M_OFF", 0, 1, 0, 0, 0);
}
func_110(iLocal_116, 1, 1);
func_113(201, "ITEM_SELECT", -1, 0);
func_113(202, "ITEM_BACK", -1, 0);
if(iLocal_117==126 && func_200()){
func_120(8, "HUD_INPUT77", -1);
}}


void func_120(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=363;
Global_23270.f_5480[Global_23270.f_5166]=iParam0;
Global_23270.f_5166++;
}


void func_121(){
func_114("JBOX_MENU_T");
func_91(0, "JBOX_M_OFF", 0, 1, 0, 0, 0);
func_110(iLocal_116, 1, 1);
func_113(201, "ITEM_SELECT", -1, 0);
func_113(202, "ITEM_BACK", -1, 0);
}


bool func_122(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_62(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
Global_23270.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23270.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23270.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23270.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_123(&(Global_23270.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_123(var uParam0){
switch (uParam0->f_9){
case 0:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
uParam0->f_9=1;
if(uParam0->f_7){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}}}else{
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 1:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 2:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_9=0;
}
break;
}
return uParam0->f_9==2;
}


void func_124(){
int iVar0;
int iVar1;
bool bVar2;
bool bVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
iVar1=150;
if(PAD::IS_USING_CURSOR(2)){
iVar1=110;
}
func_153();
PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
bVar6=PAD::IS_CONTROL_JUST_PRESSED(2, 201);
bVar7=(PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202));
iVar0=PAD::GET_CONTROL_VALUE(2, 196);
if(!MISC::IS_BIT_SET(uLocal_122, 0)){
if(PAD::IS_USING_CURSOR(2)){
func_144(&bVar2, &bVar3, &bVar6, &bVar7, &bVar4, &bVar5);
}else{
bVar2=(iVar0 < 100 || PAD::IS_CONTROL_PRESSED(2, 188));
bVar3=(iVar0 > 150 || PAD::IS_CONTROL_PRESSED(2, 187));
bVar4=PAD::IS_CONTROL_PRESSED(2, 52);
bVar5=PAD::IS_CONTROL_PRESSED(2, 51);
}
if(((bVar2 || bVar3) || bVar4) || bVar5){
func_22(&uLocal_130, 0, 0);
MISC::SET_BIT(&uLocal_122, 0);
}}elseif(func_21(&uLocal_130, iVar1, 0)){
func_165(&uLocal_130);
MISC::CLEAR_BIT(&uLocal_122, 0);
}
if(bVar3){
iLocal_116++;
if(iLocal_116 > func_143()){
iLocal_116=0;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}
if(bVar2){
iLocal_116=(iLocal_116 - 1);
if(iLocal_116 < 0){
iLocal_116=func_143();
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}
if(iLocal_117==126){
if(bVar4){
if(Local_146.f_1 < 1f){
func_142((Local_146.f_1 + 0.5f));
}}
if(bVar5){
if(Local_146.f_1 > 0f){
func_142((Local_146.f_1 - 0.5f));
}}}
if(bVar6){
bVar8=false;
switch (iLocal_128){
case 1:
iLocal_128=0;
iLocal_116=0;
iLocal_115=iLocal_126;
func_182(4);
MISC::CLEAR_BIT(&uLocal_122, 5);
break;
case 0:
if(iLocal_116 !=Local_146.f_3 || !func_200()){
iLocal_115=iLocal_116;
iLocal_128=2;
iLocal_116=0;
MISC::SET_BIT(&uLocal_122, 1);
MISC::SET_BIT(&uLocal_122, 4);
}else{
bVar8=true;
}
break;
case 2:
if(iLocal_116==0){
iLocal_120=0;
func_182(4);
if(iLocal_115 !=iLocal_126){
MISC::SET_BIT(&uLocal_122, 5);
func_125(iLocal_115);
}}else{
iLocal_128=0;
iLocal_116=0;
MISC::SET_BIT(&uLocal_122, 1);
}
break;
}
if(bVar8){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}}
if(bVar7){
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
switch (iLocal_128){
case 0:
iLocal_128=0;
iLocal_115=-1;
func_182(4);
MISC::CLEAR_BIT(&uLocal_122, 5);
break;
case 1:
iLocal_116=0;
iLocal_115=-1;
func_182(4);
MISC::CLEAR_BIT(&uLocal_122, 5);
break;
case 2:
iLocal_128=0;
iLocal_116=0;
iLocal_115=-1;
MISC::SET_BIT(&uLocal_122, 1);
break;
}}}


void func_125(int iParam0){
var uVar0;
int iVar1;
if(func_6(iLocal_117, -1)){
uVar0=MISC::GET_HASH_KEY(func_141(iParam0));
}elseif(iLocal_117==126){
uVar0=MISC::GET_HASH_KEY(func_140(iParam0));
}elseif(iLocal_117==130){
uVar0=MISC::GET_HASH_KEY(func_139(iParam0));
}
if(MONEY::NETWORK_CAN_SPEND_MONEY(1, 0, 0, 1, -1, 0)){
if(func_138()){
func_126(1976384368, 1, &iVar1, 0, 0, 1);
Global_4535172[iVar1 /*85*/]=uVar0;
}else{
MONEY::NETWORK_SPENT_JUKEBOX(1, uVar0, 0, 0);
}}}


void func_126(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_138()){
return;
}
iVar0=1;
if(bParam4){
iVar0=4;
}elseif(bParam3){
iVar0=2;
}elseif(bParam5){
iVar0=8;
}
switch (iParam0){
case -1645229221:
case -585718395:
case -1359375127:
case 454359403:
case -982394051:
case 1643659499:
case -2072289654:
case 650665123:
case 1654961868:
case -876847842:
case 68030260:
case -2122299283:
case 366672791:
case 283351220:
case 291576838:
case 1182673174:
case -516219046:
case 1036455748:
case 277665518:
case 2043854386:
case 1839532116:
case 1022400740:
case 1940862352:
case -1389227906:
case 711665950:
case 1704445500:
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 1612072658:
case -517447402:
case 1948102096:
case 1108628223:
case -1834046564:
case -1239008812:
case -222363842:
case -1276678868:
case 1564537328:
case -96593501:
case 742499889:
case 2050093329:
case -1752488069:
case 634375935:
case 2115896461:
case 797947947:
case 1941570214:
case 665109499:
case -1330755006:
case 1976384368:
case 268924934:
case 1869490922:
case -336803850:
case -1412692765:
case 618167454:
case 980623936:
case 437291904:
case -135813048:
case -930104477:
case -1420909320:
case -1733398043:
case -1892760262:
case -1545737048:
case 2039302543:
case 402505853:
case -1143510182:
case 1678112166:
case 837955913:
case -1532467144:
case 1815541181:
if(iParam1 > 0 || Global_262145.f_28375){
func_127(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case -31156877:
case -1027218631:
case -1398318418:
case 1652884147:
case -57868256:
case -1216489292:
case -46622315:
case -352356931:
case -990286235:
case 563463121:
case 1734805203:
case 941287179:
case -1186079845:
case -1985150258:
case -1127021384:
case -109201286:
case 312105838:
case 1982688246:
case -661030418:
case 1301046174:
case -1586170317:
case 393059668:
case 23796958:
case -1077156170:
case 1780666425:
case -2043695058:
case -1922554349:
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case 1349151477:
case 1620609399:
case 1961641934:
case 210955503:
case -59668082:
case 1736933716:
case -1468524125:
case 111573502:
case 1525644423:
case 968073639:
case 1577781788:
case -934465332:
case -1194253122:
case -212607085:
case -815546555:
case 1048226110:
case 569170531:
case -856006867:
case 848090538:
case -47546905:
case -293060240:
case 463142405:
case 1550217370:
case -101307780:
case -664597565:
case 599804707:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case 1052472386:
case -2130199671:
case -1227654538:
case 1864522104:
case 215608230:
case -876012764:
case -722894325:
case 1407278493:
case -1579394494:
case -27443911:
case 1179783540:
case 923419301:
case -308826175:
case 603298940:
case -12619854:
case -311112675:
case 870439158:
case -974288740:
case -4138654:
case -1180954122:
case -1918051016:
case 844330594:
case 1934825517:
case 1852024236:
case 2099238988:
case 1952643559:
case -1172900789:
case -2015399333:
case -1574795641:
case -961034881:
case 1135468152:
case 1265272476:
case -634726636:
case 696556762:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
func_127(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}
switch (iParam0){
case -1342064661:
case -1693570755:
case 1868043300:
case -697248883:
case -1295545795:
case 914079366:
case 395122350:
case -331981076:
case 1671535231:
case -1896606724:
case -1291433573:
case 538631715:
case 133782822:
case 2081885153:
case -1314365345:
case 1322977732:
case 396623013:
case 1981664462:
case -1921250821:
case -1370731547:
case 1683798242:
case -910968288:
case -168319378:
case 1637817605:
case 830018386:
case 1051883823:
case -2013760296:
case -1033889004:
case -2081984382:
case 1089562091:
if(iParam1 > 0 || Global_262145.f_28375){
func_127(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case 1240683675:
case 1241904665:
case -1100963799:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
case -2017925037:
case 1668610896:
case -2032529561:
case -1224479447:
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case 1220095570:
case 2050320631:
case 592672421:
case 1775876058:
case -842062976:
case -518651910:
case 14658715:
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
case -837690641:
case -1029672338:
case -1503749970:
case -1843409092:
case 1669058563:
case 2102747615:
case 2030771998:
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
case 1280785534:
case -1878824774:
case 247992227:
case -229237358:
case -1123183389:
case 1814197076:
case 713955548:
case -2026544524:
case -719580138:
case -163417439:
case -550417574:
case 208223429:
case -1433071892:
case 761999406:
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case 1628412596:
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
case 1633116913:
case 668586600:
case 15168061:
case 590289134:
case 99792878:
case 1866258778:
case -178394060:
case 409592287:
case 593836803:
case 1973036520:
case 2063456538:
case -728008329:
case 119239868:
func_127(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_127(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_138()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695819){
if(iParam3==1067618600 || iParam3==-1303831698){
Global_4536675=1;
return 0;
}}}
bVar3=false;
iVar2=0;
while (iVar2 < 15){
if(Global_4535172[iVar2 /*85*/].f_66.f_2==0){
bVar3=true;
}
iVar2++;
}
if(!bVar3){
return 0;
}
*uParam0=15;
iVar4=2147483647;
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6)){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4)){
*uParam0=func_134(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
if(iVar1 && !bVar0){
}
if(bVar0){
if(*uParam0 !=-1){
Global_4535172[*uParam0 /*85*/].f_66.f_8=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=1;
}}
Global_4536659=1;
return 1;
}}else{
if(iParam7 & 2 !=0){
Global_4536673=1;
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
if(iParam7 & 8 !=0){
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
bVar5=false;
if(bVar5){
func_133(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_128(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_128(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
break;
}
if(iParam0 !=-1){
func_129(iParam0);
}}


void func_129(int iParam0){
bool bVar0;
bVar0=false;
if(!func_138()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_132(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_130(&(Global_4535172[iParam0 /*85*/]));
}}


void func_130(var uParam0){
uParam0->f_66=0;
uParam0->f_66=2147483647;
uParam0->f_66.f_1=0;
uParam0->f_66.f_2=0;
uParam0->f_66.f_3=-1593119440;
uParam0->f_66.f_4=-2085313189;
uParam0->f_66.f_5=0;
uParam0->f_66.f_6=1227573907;
uParam0->f_66.f_7=-1161833819;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_13=0;
uParam0->f_2=0;
func_131(&(uParam0->f_14));
func_131(&(uParam0->f_14.f_13));
StringCopy(&(uParam0->f_14.f_26), "", 32);
StringCopy(&(uParam0->f_14.f_34), "", 24);
StringCopy(&(uParam0->f_14.f_40), "", 16);
StringCopy(&(uParam0->f_14.f_44), "", 32);
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_66.f_8=0;
uParam0->f_66.f_9=0;
uParam0->f_66.f_10=0;
uParam0->f_66.f_11=0;
uParam0->f_66.f_13=0;
uParam0->f_66.f_12=0;
uParam0->f_66.f_14=0;
uParam0->f_66.f_15=0;
uParam0->f_66.f_16=0;
uParam0->f_66.f_18=0;
}


void func_131(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=0;
}

int func_132(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_133(int iParam0, var uParam1){
Global_2697013=uParam1;
Global_2697012=iParam0;
}

int func_134(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_138()){
iParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=uParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=uParam2;
Global_4535172[iVar0 /*85*/].f_66.f_7=uParam3;
Global_4535172[iVar0 /*85*/].f_66.f_5=0;
Global_4535172[iVar0 /*85*/].f_66=iParam0;
Global_4535172[iVar0 /*85*/].f_66.f_6=iParam4;
Global_4535172[iVar0 /*85*/].f_66.f_11=uParam8;
Global_4535172[iVar0 /*85*/].f_66.f_10=uParam7;
Global_4535172[iVar0 /*85*/].f_66.f_13=iParam9;
Global_4535172[iVar0 /*85*/].f_66.f_12=0;
Global_4535172[iVar0 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
Global_4535172[iVar0 /*85*/].f_66.f_18=0;
Global_4536659=0;
if(bParam6){
Global_4535172[iVar0 /*85*/].f_66.f_5=1;
}
if(iParam1==-1135378931 && iParam10){
func_135(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_135(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85){
struct<3> Var0;
int iVar36;
if(iParam85 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=-444617715;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam85;
iVar36=func_137(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar36==0){
func_136();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar36);
}}


void func_136(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__137(int iParam0){
var uVar0;
if(iParam0 !=-1){
MISC::SET_BIT(&uVar0, iParam0);
}
return uVar0;
}

int func_138(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


char* func_139(int iParam0){
switch (iParam0){
case 0:
return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
case 1:
return "HIDDEN_RADIO_BIKER_MODERN_ROCK";
case 2:
return "HIDDEN_RADIO_BIKER_HIP_HOP";
case 3:
return "HIDDEN_RADIO_BIKER_PUNK";
case 4:
return "HIDDEN_RADIO_ARCADE_POP";
case 5:
return "HIDDEN_RADIO_ARCADE_DANCE";
case 6:
return "HIDDEN_RADIO_ARCADE_EDM";
case 7:
return "HIDDEN_RADIO_ARCADE_MIRROR_PARK";
case 8:
return "HIDDEN_RADIO_ARCADE_WWFM";
case 9:
return "RADIO_36_AUDIOPLAYER";
default:
}
return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
}


char* func_140(int iParam0){
switch (iParam0){
case 0:
return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
case 1:
return "HIDDEN_RADIO_BIKER_MODERN_ROCK";
case 2:
return "HIDDEN_RADIO_BIKER_HIP_HOP";
case 3:
return "HIDDEN_RADIO_BIKER_PUNK";
case 4:
return "HIDDEN_RADIO_ARCADE_POP";
case 5:
return "HIDDEN_RADIO_ARCADE_DANCE";
case 6:
return "HIDDEN_RADIO_ARCADE_EDM";
case 7:
return "HIDDEN_RADIO_ARCADE_MIRROR_PARK";
case 8:
return "HIDDEN_RADIO_ARCADE_WWFM";
case 9:
return "RADIO_36_AUDIOPLAYER";
default:
}
return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
}


char* func_141(int iParam0){
switch (iParam0){
case 0:
return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
case 1:
return "HIDDEN_RADIO_BIKER_MODERN_ROCK";
case 2:
return "HIDDEN_RADIO_BIKER_HIP_HOP";
case 3:
return "HIDDEN_RADIO_BIKER_PUNK";
case 4:
return "RADIO_36_AUDIOPLAYER";
default:
}
return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
}


void func_142(float fParam0){
Local_151[PLAYER::PLAYER_ID() /*3*/].f_2=fParam0;
MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 3);
}

int func_143(){
int iVar0;
iVar0=func_106();
switch (iLocal_128){
case 2:
return 1;
case 0:
if(func_200()){
return iVar0;
}else{
return (iVar0 - 1);
}
break;
case 1:
return 0;
}
return 0;
}


void func_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
if(PAD::IS_USING_CURSOR(2)){
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
if((Global_4541029==-1 || Global_4541029==-4) || Global_4541029==-6){
PAD::ENABLE_CONTROL_ACTION(1, 1, 1);
PAD::ENABLE_CONTROL_ACTION(1, 2, 1);
}else{
PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
}
func_150(0, 0, 0, 1);
func_149(0, -1, 1);
}
if(func_148()){
if(Global_4541029==iLocal_116){
*uParam2=1;
}else{
iLocal_116=Global_4541029;
func_110(iLocal_116, 1, 1);
}}
if(func_147()){
*uParam3=1;
}
if(func_146(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2, 188)){
*uParam0=1;
}
if(func_145(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2, 187)){
*uParam1=1;
}
if(PAD::IS_CONTROL_PRESSED(2, 189)){
*uParam4=1;
}
if(PAD::IS_CONTROL_PRESSED(2, 190)){
*uParam5=1;
}}}

int func_145(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541029==-3){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1)){
return 1;
}}}
return 0;
}

int func_146(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541029==-2){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1)){
return 1;
}}}
return 0;
}

int func_147(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238)){
return 1;
}}
return 0;
}

int func_148(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541029 > -1){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}}
return 0;
}

int func_149(int iParam0, int iParam1, bool bParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}
if(bParam2){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}
if(Global_4541029==-6){
HUD::SET_MOUSE_CURSOR_STYLE(4);
if(iParam0 && PAD::IS_CONTROL_PRESSED(2, 237)){
return 1;
}else{
Global_4541029=-1;
return 0;
}}
if(((Global_4541029 > -1 || Global_4541029==-3) || Global_4541029==-2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS()){
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}
if(Global_4541029==-1 && iParam0){
if(PAD::IS_CONTROL_PRESSED(2, 237)){
HUD::SET_MOUSE_CURSOR_STYLE(4);
Global_4541029=-6;
return 1;
}else{
HUD::SET_MOUSE_CURSOR_STYLE(3);
return 0;
}}
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}


void func_150(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
fVar6=(0.034722f / 2f);
iVar13=-1;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
Global_4541029=-1;
return;
}
PAD::SET_USE_ADJUSTED_MOUSE_COORDS(1);
fVar0=Global_23267;
fVar2=(fVar0 + Global_23269);
fVar3=Global_23270.f_6173;
fVar1=(Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
if(bParam2){
fVar3=(fVar3 + 0.034722f);
fVar1=(fVar1 + 0.034722f);
}
if(Global_23270.f_6175 < 1){
fVar1=(Global_23270.f_6173 - 0.034722f);
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar4=fVar0;
fVar5=fVar1;
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
func_152();
if(Global_4541029==-6){
return;
}
Global_4541029=-1;
fVar7=Global_4541023;
fVar8=Global_4541024;
if(Global_23270.f_6176 > Global_23270.f_6175){
if(((Global_4541023 >=fVar0 && Global_4541023 <=fVar2) && Global_4541024 >=fVar3) && Global_4541024 < (fVar3 + fVar6)){
Global_4541029=-2;
if(bParam3){
func_151(0);
}
return;
}
if(((Global_4541023 >=fVar0 && Global_4541023 <=fVar2) && Global_4541024 >=(fVar3 + fVar6)) && Global_4541024 < (fVar3 + 0.034722f)){
Global_4541029=-3;
if(bParam3){
func_151(0);
}
return;
}}
if(((fVar7 >=fVar0 && fVar7 <=fVar2) && fVar8 >=fVar1) && fVar8 <=fVar3){
fVar9=(fVar8 - fVar1);
iVar13=SYSTEM::FLOOR((fVar9 / 0.034722f));
if(Global_23270.f_6176==-1){
Global_4541029=0;
iVar13=0;
return;
}
iVar11=148;
iVar12=(iVar11 / Global_23270.f_6175);
iVar10=(32 + (iVar11 - (iVar12 * iVar13)));
if(bParam3){
if(!bParam1 || iVar13 !=0){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
func_86(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23269, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}}
Global_4541029=Global_23270.f_8513[iVar13];
return;
}
if(!bParam0){
if(fVar7 < fVar2){
Global_4541029=-4;
return;
}
if(fVar8 > 0.9f){
Global_4541029=-5;
return;
}}elseif(fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f)){
Global_4541029=-4;
return;
}
Global_4541029=-1;
}


void func_151(bool bParam0){
float fVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=(0.034722f / 2f);
if(bParam0){
iVar3=48;
}else{
iVar3=210;
}
fVar0=Global_23267;
fVar1=Global_23270.f_6173;
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
if(Global_4541029==-2){
func_86(fVar0, fVar1, Global_23269, fVar2, 255, 255, 255, iVar3);
}elseif(Global_4541029==-3){
func_86(fVar0, (fVar1 + fVar2), Global_23269, fVar2, 255, 255, 255, iVar3);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_152(){
Global_4541025=Global_4541023;
Global_4541026=Global_4541024;
Global_4541023=PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
Global_4541024=PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
Global_4541027=(Global_4541023 - Global_4541025);
Global_4541028=(Global_4541024 - Global_4541026);
}


void func_153(){
func_154(1);
func_53(1);
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE()){
PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
PAD::ENABLE_ALL_CONTROL_ACTIONS(1);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
}}


void func_154(bool bParam0){
if(bParam0){
if(func_155()){
Global_2683862.f_41=1;
}}else{
Global_2683862.f_41=0;
}}


bool func_155(){
return MISC::IS_BIT_SET(Global_2683862.f_2, 11);
}


bool func_156(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}

int func_157(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
switch (iLocal_120){
case 0:
if(func_59("SELECT_TRACK", 1, 0)){
iLocal_120=1;
}
break;
case 1:
if(func_59("IDLE", 0, 1)){
iLocal_120=0;
return 1;
}
break;
}}
func_52(0);
return 0;
}

int func_158(){
struct<3> Var0;
float fVar3;
int iVar4;
func_153();
switch (iLocal_120){
case 0:
func_52(0);
if(!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_127)){
STREAMING::REQUEST_ANIM_DICT(sLocal_127);
return 0;
}
func_164(&Var0, &fVar3);
func_163(Var0, fVar3);
PED::SET_FORCE_STEP_TYPE(PLAYER::PLAYER_PED_ID(), 1, 20, 0);
iLocal_120=1;
break;
case 1:
if(func_160()){
iVar4=5;
func_159("ENTER", iVar4, 1.5f, -1.5f, 1.5f, 0, 1f);
func_165(&uLocal_132);
iLocal_120=2;
}else{
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.25f);
}
break;
case 2:
if(func_59("IDLE", 0, 1)){
iLocal_120=0;
return 1;
}
break;
}
return 0;
}


void func_159(char* sParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6){
struct<3> Var0;
struct<3> Var3;
Var0={
Local_143 
};
Var3={
ENTITY::GET_ENTITY_ROTATION(iLocal_112, 2) 
};
iLocal_121=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var3, 2, 1, 0, 1f, 0f, fParam6);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_121, sLocal_127, sParam0, fParam2, fParam3, iParam1, 16, fParam4, iParam5);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_121);
}

int func_160(){
struct<3> Var0;
float fVar3;
func_164(&Var0, &fVar3);
if((func_162(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 0.05f, 0) && func_161(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar3, 10f)) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")) !=1){
return 1;
}
return 0;
}

int func_161(float fParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
fVar1=(fParam1 - fParam2);
if(fVar1 < 0f){
fVar1=(fVar1 + 360f);
}
fVar0=(fParam1 + fParam2);
if(fVar0 >=360f){
fVar0=(fVar0 - 360f);
}
if(fVar0 > fVar1){
if(fParam0 < fVar0 && fParam0 > fVar1){
return 1;
}}elseif(fParam0 < fVar0 || fParam0 > fVar1){
return 1;
}
return 0;
}

int func_162(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7){
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


void func_163(struct<3> Param0, float fParam3){
if(func_162(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, 0.125f, 0)){
if(!func_161(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fParam3, 10f)){
TASK::TASK_ACHIEVE_HEADING(PLAYER::PLAYER_PED_ID(), fParam3, 0);
return;
}}else{
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Param0, 1f, 100, fParam3, 0.1f);
}}


void func_164(var uParam0, var uParam1){
struct<3> Var0;
struct<3> Var3;
struct<3> Var6;
char* sVar9;
Var3={
Local_143 
};
Var6={
ENTITY::GET_ENTITY_ROTATION(iLocal_112, 2) 
};
sVar9="ENTER";
*uParam0={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_127, sVar9, Var3, Var6, 0, 2) 
};
Var0={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_127, sVar9, Var3, Var6, 0, 2) 
};
*uParam1=Var0.f_2;
}


void func_165(var uParam0){
uParam0->f_1=0;
}

int func_166(){
if(func_167()==0){
return 1;
}
return 0;
}

int func_167(){
return Global_1574632.f_18;
}


void func_168(){
if(MISC::IS_BIT_SET(uLocal_122, 7) && !MISC::IS_STRING_NULL_OR_EMPTY(sLocal_127)){
MISC::CLEAR_BIT(&uLocal_122, 7);
STREAMING::REMOVE_ANIM_DICT(sLocal_127);
}}


void func_169(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


void func_170(int iParam0, bool bParam1, int iParam2, int iParam3){
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
if(func_179()){
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
if(!func_166()){
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
}elseif(bVar14 || (!func_77(PLAYER::PLAYER_ID(), 0) && !func_178())){
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
func_175(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_174(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
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
func_173();
func_172();
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
if(!func_174(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
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
if(func_171(Global_4718592.f_166301)){
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


bool func_171(int iParam0){
return iParam0==17;
}


void func_172(){
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


void func_173(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_174(int iParam0){
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


void func_175(int iParam0, int iParam1, int iParam2){
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
func_177();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), 1);
}}
if(func_77(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_176(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_176(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_177(){
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


bool func_178(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_179(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1){
return 1;
}
return 0;
}


void func_180(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_181(*iParam0);
if(iVar0==-1){
*iParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/].f_7=1;
*iParam0=-1;
return;
}}
*iParam0=-1;
}

int func_181(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44000[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_182(int iParam0){
iLocal_129=iParam0;
}

int func_183(int iParam0, bool bParam1){
int iVar0;
iVar0=func_181(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_57(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]==1 && Global_44000[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44000[iVar0 /*32*/].f_29){
return 0;
}}
Global_44000[iVar0 /*32*/].f_5=1;
Global_44000[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44000[iVar0 /*32*/]==0){
}
if(Global_44000[iVar0 /*32*/].f_7){
}}}
return 0;
}


void func_184(){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_127)){
if(!MISC::IS_BIT_SET(uLocal_122, 7)){
MISC::SET_BIT(&uLocal_122, 7);
}
STREAMING::REQUEST_ANIM_DICT(sLocal_127);
}}


void func_185(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_180(iParam0);
}
return;
}
if(!*iParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/]=1;
Global_44000[iVar0 /*32*/].f_1=Global_44201;
Global_44201++;
Global_44000[iVar0 /*32*/].f_4=0;
Global_44000[iVar0 /*32*/].f_29=0;
Global_44000[iVar0 /*32*/].f_5=0;
Global_44000[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
Global_44000[iVar0 /*32*/].f_6=iParam3;
Global_44000[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44000[iVar0 /*32*/].f_7=0;
Global_44000[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44000[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
Global_44000[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44000[iVar0 /*32*/].f_12=0;
Global_44000[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44000[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}


void func_186(){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_187("JBOX_NO_MONEY")){
HUD::CLEAR_HELP(1);
}}


var func__187(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_188(){
if(func_200() || MONEY::NETWORK_CAN_SPEND_MONEY(1, 0, 0, 0, -1, 0)){
return 1;
}
return 0;
}

int func_189(){
int iVar0;
iVar0=1;
if(func_238(PLAYER::PLAYER_ID()) && !func_211(iLocal_113)){
iVar0=0;
}
if(((((((((((((((!MISC::IS_BIT_SET(Global_2764398, 5) && !func_196()) && !func_57(0)) && !func_195()) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_112)) && func_161(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fLocal_139, 75f)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_140, 0.55f, 0.8f, 1.5f, 0, 1, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_127, "EXIT", 3)) && !func_194(PLAYER::PLAYER_ID())) && !func_193()) && iVar0) && !MISC::IS_BIT_SET(Global_1950108.f_4, 2)) && func_190(PLAYER::PLAYER_PED_ID()) <=9) && !Global_2635559.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 1;
}
return 0;
}

int func_190(int iParam0){
int iVar0;
int iVar1;
if(iParam0==0){
return 0;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
iVar0=func_192(iParam0);
iVar1=func_191(iVar0);
if(iVar1==-1){
return -1;
}
return Global_44232[iVar1 /*5*/].f_3;
}

int func_191(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44232[iVar0 /*5*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_192(int iParam0){
int iVar0;
if(iParam0==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(iParam0==Global_44232[iVar0 /*5*/].f_1){
return Global_44232[iVar0 /*5*/];
}
iVar0++;
}
return -1;
}

int func_193(){
if(Local_146.f_2 !=-1){
return 1;
}
return 0;
}

int func_194(int iParam0){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 11)){
return 1;
}
return 0;
}


bool func_195(){
return Global_75693;
}

int func_196(){
if(func_197() !=-1){
return 1;
}else{
return 0;
}
return 0;
}

int func_197(){
return Global_2694553;
}


void func_198(){
if(func_193()){
if(MISC::IS_BIT_SET(Local_151[Local_146.f_2 /*3*/], 2)){
if(Local_151[Local_146.f_2 /*3*/].f_1==iLocal_126){
if(func_200()){
Local_146.f_0=0;
Local_146.f_3=iLocal_126;
if(iLocal_113==Local_146.f_2){
Local_146.f_4=1;
}}}elseif(Local_146.f_3 !=Local_151[Local_146.f_2 /*3*/].f_1){
Local_146.f_3=Local_151[Local_146.f_2 /*3*/].f_1;
if(iLocal_113==Local_146.f_2){
Local_146.f_4=1;
}
Local_146.f_0=1;
}}
if(MISC::IS_BIT_SET(Local_151[Local_146.f_2 /*3*/], 3)){
if(Local_146.f_1 !=Local_151[Local_146.f_2 /*3*/].f_2){
Local_146.f_1=Local_151[Local_146.f_2 /*3*/].f_2;
}}
if(!MISC::IS_BIT_SET(Local_151[Local_146.f_2 /*3*/], 1) && !MISC::IS_BIT_SET(Local_151[Local_146.f_2 /*3*/], 0)){
Local_146.f_2=-1;
}}elseif(MISC::IS_BIT_SET(Local_151[iLocal_118 /*3*/], 0)){
if(!func_193()){
Local_146.f_2=iLocal_118;
}}
if(!func_193()){
if(iLocal_117==126){
if(Global_1853910[iLocal_113 /*862*/].f_267.f_384==Local_146.f_3 && (!func_200() && Global_1853910[iLocal_113 /*862*/].f_267.f_384==iLocal_126)){
Local_146.f_4=0;
}}elseif(iLocal_117==130){
if(Global_1853910[iLocal_113 /*862*/].f_267.f_385==Local_146.f_3 && (!func_200() && Global_1853910[iLocal_113 /*862*/].f_267.f_385==iLocal_126)){
Local_146.f_4=0;
}}elseif(Global_1853910[iLocal_113 /*862*/].f_267.f_381==Local_146.f_3 && (!func_200() && Global_1853910[iLocal_113 /*862*/].f_267.f_381==iLocal_126)){
Local_146.f_4=0;
}}
iLocal_118++;
if(iLocal_118==32){
iLocal_118=0;
}}


bool func_199(struct<3> Param0, struct<3> Param3, bool bParam6){
if(bParam6){
return (Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1);
}
return ((Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1) && Param0.f_2==Param3.f_2);
}


bool func_200(){
return Local_146.f_0==1;
}


void func_201(){
int iVar0;
int iVar1;
int iVar2;
if(iLocal_117==126){
iVar0=func_15();
iLocal_123=NETWORK::GET_CLOUD_TIME_AS_INT();
iLocal_124=func_19(func_20(iVar0), -1, 0);
}elseif(iLocal_117==130){
iVar1=func_12();
iLocal_123=NETWORK::GET_CLOUD_TIME_AS_INT();
iLocal_124=func_19(func_13(iVar1), -1, 0);
}else{
iVar2=func_10();
iLocal_123=NETWORK::GET_CLOUD_TIME_AS_INT();
iLocal_124=func_19(func_11(iVar2), -1, 0);
}}


void func_202(bool bParam0){
if(bParam0){
MISC::SET_BIT(&uLocal_122, 6);
}else{
MISC::CLEAR_BIT(&uLocal_122, 6);
}
if(func_6(iLocal_117, -1)){
func_206(iLocal_117, bParam0);
}elseif(iLocal_117==126){
func_205(bParam0);
}elseif(iLocal_117==130){
func_203(bParam0);
}}


void func_203(bool bParam0){
AUDIO::SET_STATIC_EMITTER_ENABLED("SE_xm3_dlc_int_03_xm3_radioemitter_office", bParam0);
AUDIO::SET_STATIC_EMITTER_ENABLED("SE_xm3_dlc_int_03_xm3_radioemitter_main_area", bParam0);
func_204(36692, bParam0, -1);
if(bParam0){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_511), 1);
}else{
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_511), 1);
}}


void func_204(int iParam0, var uParam1, int iParam2){
if(iParam2==-1){
iParam2=func_18();
}
unk_0x0111091C0EE35B9C(iParam0, uParam1, iParam2);
}


void func_205(bool bParam0){
AUDIO::SET_STATIC_EMITTER_ENABLED("DLC_H3_Arcade_Main_Area_Music_Emitter", bParam0);
AUDIO::SET_STATIC_EMITTER_ENABLED("DLC_H3_Arcade_Planning_Room_Radio_Emitter", bParam0);
}


void func_206(int iParam0, bool bParam1){
if(func_5(iParam0)==97){
AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_02_REC", bParam1);
AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_02_GRG", bParam1);
return;
}elseif(func_5(iParam0)==91){
AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_01_BAR", bParam1);
AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_01_GRG", bParam1);
AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_01_REC", bParam1);
return;
}}


void func_207(int iParam0){
if(func_6(iLocal_117, -1)){
if(iParam0 !=iLocal_126 && iParam0 !=-1){
if(iLocal_113==PLAYER::PLAYER_ID() && iLocal_123 !=0){
func_9(iLocal_114);
}
func_210(iLocal_117, iParam0);
}
if(iParam0 !=-1){
iLocal_114=iParam0;
}}elseif(iLocal_117==126 || iLocal_117==130){
if(iParam0 !=iLocal_126 && iParam0 !=-1){
if(iLocal_113==PLAYER::PLAYER_ID() && iLocal_123 !=0){
func_9(iLocal_114);
}
if(iLocal_117==126){
func_209(iParam0);
}elseif(iLocal_117==130){
func_208(iParam0);
}}
if(iParam0 !=-1){
iLocal_114=iParam0;
}}}


void func_208(int iParam0){
var uVar0;
uVar0=func_139(iParam0);
unk_0x80BC56FDED0654DB("SE_xm3_dlc_int_03_xm3_radioemitter_office", uVar0, 0);
unk_0x80BC56FDED0654DB("SE_xm3_dlc_int_03_xm3_radioemitter_main_area", uVar0, 0);
}


void func_209(int iParam0){
var uVar0;
uVar0=func_140(iParam0);
unk_0x80BC56FDED0654DB("DLC_H3_Arcade_Main_Area_Music_Emitter", uVar0, 0);
unk_0x80BC56FDED0654DB("DLC_H3_Arcade_Planning_Room_Radio_Emitter", uVar0, 0);
}


void func_210(int iParam0, int iParam1){
var uVar0;
uVar0=func_141(iParam1);
if(func_5(iParam0)==97){
unk_0x80BC56FDED0654DB("SE_bkr_biker_dlc_int_02_REC", uVar0, 0);
unk_0x80BC56FDED0654DB("SE_bkr_biker_dlc_int_02_GRG", uVar0, 0);
return;
}elseif(func_5(iParam0)==91){
unk_0x80BC56FDED0654DB("SE_bkr_biker_dlc_int_01_BAR", uVar0, 0);
unk_0x80BC56FDED0654DB("SE_bkr_biker_dlc_int_01_GRG", uVar0, 0);
unk_0x80BC56FDED0654DB("SE_bkr_biker_dlc_int_01_REC", uVar0, 0);
return;
}}


bool func_211(int iParam0){
return (func_213(iParam0) && func_212(iParam0));
}

int func_212(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_19(8726, -1, 0), 4);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1975258[iParam0 /*68*/].f_40, 4);
}
return 0;
}

int func_213(int iParam0){
if(iParam0 !=func_214()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_428.f_1, 2);
}
return 0;
}

int func_214(){
return -1;
}

int func_215(int iParam0){
int iVar0;
if(iParam0==func_214()){
return iParam0;
}
if(func_43(iParam0) !=-1){
iVar0=func_219(func_43(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_217(iParam0, 0)){
return func_216(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_214();
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}
return func_214();
}

int func_216(int iParam0){
if(iParam0 !=func_214()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_214();
}


bool func_217(int iParam0, bool bParam1){
if(!bParam1){
if(func_218(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_214();
}

int func_218(int iParam0){
if(iParam0 !=func_214()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_214()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_219(int iParam0){
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


bool func_220(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_221(int iParam0, var uParam1){
*uParam1={
Global_1853910[iParam0 /*862*/].f_267.f_70 
};
}


void func_222(){
var uVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !MISC::IS_BIT_SET(uLocal_122, 2)){
uVar0=Global_1310720.f_1475;
if(func_230(PLAYER::PLAYER_ID())){
uVar0=func_229() + 32;
}
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, uVar0);
func_226(0, -1, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_146, 5, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_151, 97, 0);
if(!func_223()){
func_239(0);
}
MISC::SET_BIT(&uLocal_122, 2);
}}

int func_223(){
int iVar0;
iVar0=0;
while (true){
iVar0++;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA()){
return 1;
}
if(func_225()){
return 0;
}
if(func_224(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
SYSTEM::WAIT(0);
}
return 0;
}

int func_224(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_225(){
return Global_2683862.f_693;
}

int func_226(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_228();
}else{
return 0;
}}
if(!func_227(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_228();
}else{
return 0;
}}
if(func_225()){
if(!bParam2){
func_228();
}else{
return 0;
}}
if(func_224(157)){
if(!bParam2){
func_228();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_228();
}else{
return 0;
}}}
SYSTEM::WAIT(0);
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
}
if(iParam1 > -1){
Global_1574666=iVar0;
}
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_228();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_228();
}else{
return 0;
}}
return 1;
}


bool func_227(bool bParam0){
if(bParam0){}
return Global_1575035;
}


void func_228(){
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_229(){
var uVar0;
uVar0=Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_8;
return uVar0;
}

int func_230(int iParam0){
if(iParam0 !=func_214()){
if(func_33(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && iParam0==PLAYER::PLAYER_ID()) && func_33(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}}
return 0;
}


void func_231(){
if(iLocal_117==126){
if(func_233(PLAYER::PLAYER_ID())){
func_239(0);
}elseif(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_239(0);
}elseif(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
func_239(0);
}elseif(MISC::IS_BIT_SET(Global_2764398, 1)){
MISC::CLEAR_BIT(&Global_2764398, 1);
func_239(0);
}elseif(MISC::IS_BIT_SET(Global_1950108.f_6, 10)){
if(iLocal_129 !=0){
if(MISC::IS_BIT_SET(uLocal_122, 3)){
MISC::CLEAR_BIT(&uLocal_122, 3);
func_60(1, -1);
}
MISC::CLEAR_BIT(&uLocal_122, 5);
MISC::CLEAR_BIT(&uLocal_122, 4);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 1);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 2);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 3);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 0);
MISC::CLEAR_BIT(&Global_2764398, 4);
iLocal_128=0;
func_182(0);
}}elseif(!func_238(PLAYER::PLAYER_ID())){
func_239(0);
}}elseif(iLocal_117==130){
if(func_233(PLAYER::PLAYER_ID())){
func_239(0);
}elseif(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_239(0);
}elseif(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
func_239(0);
}elseif(MISC::IS_BIT_SET(Global_2764398, 1)){
MISC::CLEAR_BIT(&Global_2764398, 1);
func_239(0);
}elseif(!func_237(PLAYER::PLAYER_ID())){
func_239(0);
}}elseif(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 14)){
func_239(0);
}elseif(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_239(0);
}elseif(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
func_239(0);
}elseif(MISC::IS_BIT_SET(Global_2764398, 1)){
MISC::CLEAR_BIT(&Global_2764398, 1);
func_239(0);
}elseif(func_232()){
if(iLocal_129 !=0){
if(MISC::IS_BIT_SET(uLocal_122, 3)){
MISC::CLEAR_BIT(&uLocal_122, 3);
func_60(1, -1);
}
MISC::CLEAR_BIT(&uLocal_122, 5);
MISC::CLEAR_BIT(&uLocal_122, 4);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 1);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 2);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 3);
MISC::CLEAR_BIT(&(Local_151[PLAYER::PLAYER_ID() /*3*/]), 0);
MISC::CLEAR_BIT(&Global_2764398, 4);
iLocal_128=0;
func_182(0);
}}elseif(iLocal_117 !=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33){
func_239(0);
}}


bool func_232(){
return Global_4196257;
}

int func_233(int iParam0){
if(iParam0 !=func_214() && func_33(iParam0, 1, 1)){
if(func_235(iParam0) && !func_234(iParam0)){
return 1;
}}
return 0;
}

int func_234(int iParam0){
if(iParam0 !=func_214() && func_33(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 4);
}
return 0;
}

int func_235(int iParam0){
if(iParam0 !=func_214() && func_33(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_236(){
return func_106();
}

int func_237(int iParam0){
if(iParam0 !=func_214()){
if(func_33(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_219(Global_2657589[iParam0 /*466*/].f_321.f_7)==26;
}}}
return 0;
}

int func_238(int iParam0){
if(iParam0 !=func_214()){
if(func_33(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_219(Global_2657589[iParam0 /*466*/].f_321.f_7)==17;
}}}
return 0;
}


void func_239(bool bParam0){
func_241(0);
if(MISC::IS_BIT_SET(uLocal_122, 3)){
func_60(1, -1);
}
MISC::SET_BIT(&Global_2764398, 2);
if(iLocal_119 !=-1){
func_180(&iLocal_119);
}
if(iLocal_113==PLAYER::PLAYER_ID()){
func_9(iLocal_114);
}
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_187("JBOX_NO_MONEY")){
HUD::CLEAR_HELP(1);
}
HUD::THEFEED_RESUME();
func_240();
func_168();
if(bParam0){
func_170(PLAYER::PLAYER_ID(), 1, 0, 0);
}
if(iLocal_117==126){
AUDIO::STOP_AUDIO_SCENE("dlc_ch_arcade_music_volume");
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_240(){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_127, "IDLE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_127, "EXIT", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_127, "INSERT_COINS", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_127, "SELECT_TRACK", 3)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}}}


void func_241(bool bParam0){
if(bParam0){
func_242();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_57(0)){
func_53(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_242(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}