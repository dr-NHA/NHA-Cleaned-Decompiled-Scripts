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
var uLocal_87=-1;
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
var uLocal_110=0;
int iLocal_111=0;
BOOL bLocal_112=0;
BOOL bLocal_113=0;
BOOL bLocal_114=0;
BOOL bLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
Object obLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
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
Object obScriptParam_0=0;
#endregion

void main() // Position - 0x0{
BOOL flag;
char* name;
var sizeAndPeds;
BOOL flag2;
Vector3 vector;
Hash entityModel;
Vector3 entityRotation;
BOOL flag3;
int pedNearbyPeds;
int i;
Vector3 vector2;
BOOL flag4;
BOOL flag5;
BOOL flag6;
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
fLocal_62=(0.05f + 0.275f) - 0.01f;
iLocal_111=-1;
uLocal_125={
0f, 0f, 0f 
};
obLocal_122=obScriptParam_0;
if(!ENTITY::DOES_ENTITY_EXIST(obLocal_122)) SCRIPT::TERMINATE_THIS_THREAD();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_246(13) || func_246(14)){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(Global_38594){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(Global_75803) SCRIPT::TERMINATE_THIS_THREAD();
flag=false;
name="tvscreen";
sizeAndPeds=25;
flag2=true;
vector={
ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) - (ENTITY::GET_ENTITY_FORWARD_VECTOR(obScriptParam_0) *{
0.6f, 0.6f, 0.6f 
}
) 
};
vector.f_2=vector.f_2 + 0.5f;
uLocal_128={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obScriptParam_0, uLocal_125) 
};
Global_1949969=0;
Global_1949965=false;
Global_1950077=0;
while (flag2){
if(ENTITY::DOES_ENTITY_EXIST(obLocal_122)){
if(bLocal_113)if(!func_244(PLAYER::PLAYER_ID()))if(!_STOPWATCH_IS_INITIALIZED(&uLocal_116)) _STOPWATCH_INITIALIZE(&uLocal_116, true, false);
if(Global_1949965 && func_241(PLAYER::PLAYER_ID()) || func_240(PLAYER::PLAYER_ID())){
if(!_STOPWATCH_IS_INITIALIZED(&uLocal_120)){
_STOPWATCH_INITIALIZE(&uLocal_120, false, false);
}elseif(_STOPWATCH_HAS_TIME_PASSED(&uLocal_120, 10000, false)){
_STOPWATCH_DESTROY(&uLocal_120);
Global_1949965=false;
}
func_232(0);
}
if(Global_1853760){
if(!flag){
entityModel=ENTITY::GET_ENTITY_MODEL(obLocal_122);
if(entityModel==joaat("prop_laptop_01a")){
ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true), 1f, joaat("prop_laptop_01a"), false);
entityRotation={
ENTITY::GET_ENTITY_ROTATION(obLocal_122, 2) 
};
obLocal_122=OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(obLocal_122, true), false, true, false);
ENTITY::SET_ENTITY_ROTATION(obLocal_122, entityRotation, 2, true);
flag=true;
}}}
if(OBJECT::HAS_OBJECT_BEEN_BROKEN(obLocal_122, 0)){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(obLocal_122) && !CUTSCENE::IS_CUTSCENE_PLAYING() && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_122)){
flag3=false;
pedNearbyPeds=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
i=0;
for (i=0;
i < pedNearbyPeds;
i=i + 1){
if(!ENTITY::IS_ENTITY_DEAD(sizeAndPeds[i], false))if(ENTITY::IS_ENTITY_PLAYING_ANIM(sizeAndPeds[i], "MP_COMMON_MISS", "HACK_INTRO", 3)) flag3=true;
elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(sizeAndPeds[i], "MP_COMMON_MISS", "HACK_LOOP", 3)) flag3=true;
}
if(Global_16) flag3=true;
vector2={
0.6f, 0.6f, 0.8f 
};
if(func_231() || func_230(PLAYER::PLAYER_ID()) || func_240(PLAYER::PLAYER_ID()) || func_229()) vector2={
1f, 1f, 0.9f 
};
elseif(func_228()) vector2={
0.75f, 0.55f, 1.25f 
};
flag4=_IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
flag5=true;
if(func_228() || func_226()) flag5=func_225(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_122), 90f);
if(!flag3 && !Global_32434 && !func_224(0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && !func_223() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vector, vector2, false, true, 1) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_ROOM_KEY_FROM_ENTITY(obLocal_122) && !IS_BIT_SET(Global_2621446, 15) && !func_222() && !(Global_78558 && func_221()) && !(!Global_78558 && func_220()) && !(Global_78558 && IS_BIT_SET(Global_4718592.f_14, 24) && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !(Global_78558 && func_219() && func_218()) && !(Global_78558 && func_216(PLAYER::PLAYER_ID())==5) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !Global_77328 && !func_213() && !func_212() && flag5 && !func_211() && !func_210()){
if(!func_209(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33) && !func_208(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33, -1) && !func_207(PLAYER::PLAYER_ID())){
if(bLocal_114 !=flag4){
if(func_241(PLAYER::PLAYER_ID()) || func_206(PLAYER::PLAYER_ID()) || func_240(PLAYER::PLAYER_ID())){
if(iLocal_111 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_111);
if(func_203()) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
}
}
bLocal_114=flag4;
if(iLocal_111==-1)if(flag) _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "MPLA_BILL" /*Unable to use the laptop until utility charge is paid.*/, 0, 0, 0, 0);
elseif(func_231()) func_201(flag4);
elseif(func_198()) func_195(flag4);
elseif(func_229()) func_183(flag4);
elseif(func_228()) func_181(flag4);
else _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "BROWSEINPUTTRIG" /*Press ~INPUT_CONTEXT~ to browse the internet on this computer.*/, 0, 0, 0, 0);
}
if(iLocal_111 !=-1 && func_179(iLocal_111, true) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_178()){
if(iLocal_111 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_111);
if(!flag){
if(func_177() || func_176() || func_175()) func_170();
if(func_231()){
func_30(0, flag4);
func_29(0, false, 1);
}elseif(func_229()){
func_30(0, flag4);
func_29(0, false, 3);
}elseif(func_198()){
func_30(1, flag4);
func_29(0, false, 2);
}elseif(func_228()){
func_29(8, false, 0);
}else{
func_29(0, false, 0);
}
if(!bLocal_112){
func_22();
bLocal_112=true;
}
flag6=true;
if(func_177() || func_176() || func_175()){
_STOPWATCH_RESET(&uLocal_118, false, false);
while (!_STOPWATCH_HAS_TIME_PASSED(&uLocal_118, 500, false)){
func_232(0);
SYSTEM::WAIT(0);
}
_STOPWATCH_DESTROY(&uLocal_118);
}
while (flag6){
if(!ENTITY::DOES_ENTITY_EXIST(obLocal_122) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(obLocal_122, true), 1.5f, 1.5f, 4f, false, true, 1)) Global_75696=1;
if(func_177() || func_176() || func_207(PLAYER::PLAYER_ID()) || func_175())if(!func_20() && !Global_77328) flag6=false;
elseif(func_20() || Global_75696) flag6=false;
if(func_177()) func_232(0);
SYSTEM::WAIT(0);
}
if(func_177() || func_176() || func_175()) func_6();
func_232(0);
_STOPWATCH_DESTROY(&uLocal_120);
bLocal_112=false;
}}elseif(iLocal_111 !=-1 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_178() && func_175()){
if(iLocal_111 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_111);
func_5();
}
func_170();
MISC::SET_BIT(&(Global_1950108.f_4), 28);
while (IS_BIT_SET(Global_1950108.f_4, 28)){
SYSTEM::WAIT(0);
}
func_6();
func_4();
func_232(0);
}}else{
if(iLocal_111 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_111);
if(func_241(PLAYER::PLAYER_ID()) || func_206(PLAYER::PLAYER_ID()))if(func_203()) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))if(func_1()) flag2=false;
}}elseif(iLocal_111 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_111);
}}else{
if(iLocal_111 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_111);
flag2=false;
}
SYSTEM::WAIT(0);
}
if(flag)if(HUD::IS_NAMED_RENDERTARGET_REGISTERED(name)) HUD::RELEASE_NAMED_RENDERTARGET(name);
return;
}
BOOL func_1() // Position - 0x88C{
Hash entityModel;
Vector3 entityCoords;
Vector3 entityCoords2;
if(ENTITY::DOES_ENTITY_EXIST(obLocal_122)){
entityModel=ENTITY::GET_ENTITY_MODEL(obLocal_122);
if(func_3(entityModel)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
entityCoords2={
ENTITY::GET_ENTITY_COORDS(obLocal_122, true) 
};
return SYSTEM::VDIST2(entityCoords, entityCoords2) > 10000f;
}}else{
return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_122);
}}
return false;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x8F4{
if(ENTITY::DOES_ENTITY_EXIST(pedParam0))if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) return true;
return false;
}
BOOL func_3(Hash hParam0) // Position - 0x915{
if(hParam0==joaat("prop_laptop_lester")) return true;
return false;
}


void func_4() // Position - 0x92C{
if(Global_2672505.f_946.f_10) Global_2672505.f_946.f_10=0;
return;
}


void func_5() // Position - 0x94A{
if(!Global_2672505.f_946.f_10) Global_2672505.f_946.f_10=1;
return;
}


void func_6() // Position - 0x969{
var animDict;
if(!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(obLocal_122)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PLAYER::PLAYER_PED_ID());
if(!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true)) TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}
if(func_7(1, &animDict)) STREAMING::REMOVE_ANIM_DICT(&animDict);
if(func_7(2, &animDict)){
if(iLocal_123 !=0){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_128, ENTITY::GET_ENTITY_ROTATION(obLocal_122, 2), 2, false, false, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict, "exit", 8f, -4f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
STREAMING::REMOVE_ANIM_DICT(&animDict);
}}}}}
Global_1949964=0;
return;
}
BOOL func_7(int iParam0, char* sParam1) // Position - 0xA5D{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
return false;
}
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()){
TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
return false;
}
if(!func_241(PLAYER::PLAYER_ID()) && !func_240(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID())){
TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
return false;
}
TEXT_LABEL_ASSIGN_STRING(sParam1, "anim@amb@warehouse@laptop@", 64);
return true;
}
BOOL func_8(Player plParam0) // Position - 0xAC5{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_9(Global_2657589[plParam0 /*466*/].f_321.f_7)==13;
return false;
}

int func_9(int iParam0) // Position - 0xB0C{
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
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xFC0{
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
Player _INVALID_PLAYER_INDEX() // Position - 0x1020{
return -1;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x1029{
if(Global_1575035==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_19()) return true;
if(Global_2696915) return true;
if(func_18()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_16()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x10AD{
switch (func_15()){
case 0:
return func_14();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_14() // Position - 0x10E0{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_15() // Position - 0x1104{
return Global_32163;
}
BOOL func_16() // Position - 0x110F{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x111E{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_18() // Position - 0x1135{
return Global_2694524;
}
BOOL func_19() // Position - 0x1141{
return Global_2683862.f_693;
}
BOOL func_20() // Position - 0x1150{
return Global_75693;
}


void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x115C{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
return;
}


void func_22() // Position - 0x1199{
if(func_28() || func_27()){
func_26();
func_23();
}
return;
}


void func_23() // Position - 0x11BA{
if(!_IS_FMMC_ACTIVE() && !func_24() && Global_2684798) Global_4718592.f_113724=0;
return;
}
BOOL func_24() // Position - 0x11E8{
return Global_2683862.f_691;
}
BOOL _IS_FMMC_ACTIVE() // Position - 0x11F7{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


void func_26() // Position - 0x120E{
Global_2683862.f_756=1;
return;
}
BOOL func_27() // Position - 0x121E{
return Global_2683862.f_735;
}
BOOL func_28() // Position - 0x122D{
return IS_BIT_SET(Global_2683862.f_2, 11);
}

int func_29(int iParam0, BOOL bParam1, int iParam2) // Position - 0x123E{
BOOL flag;
BOOL flag2;
BOOL flag3;
Global_75806=iParam0;
flag=iParam2==1;
flag2=iParam2==2;
flag3=iParam2==3;
switch (Global_75806){
case 3:
Global_75804=0;
break;
case 4:
Global_75804=3;
break;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0){
if(flag){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0){
if(flag2){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0){
if(flag3){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
if(flag || flag2 || flag3){
}
return 0;
}
if(Global_78558 && func_221()) return 0;
if(!Global_78558 && func_220()) return 0;
if(flag){
if(!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ")){
SCRIPT::REQUEST_SCRIPT("appSecuroServ");
if(bParam1) return 0;
}
while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ")){
SYSTEM::WAIT(0);
}
SYSTEM::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
return 1;
}
if(flag2){
if(!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness")){
SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
if(bParam1) return 0;
}
while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness")){
SYSTEM::WAIT(0);
}
SYSTEM::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
return 1;
}
if(flag3){
if(!SCRIPT::HAS_SCRIPT_LOADED("appImportExport")){
SCRIPT::REQUEST_SCRIPT("appImportExport");
if(bParam1) return 0;
}
while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport")){
SYSTEM::WAIT(0);
}
SYSTEM::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
return 1;
}
if(!SCRIPT::HAS_SCRIPT_LOADED("appInternet")){
SCRIPT::REQUEST_SCRIPT("appInternet");
if(bParam1) return 0;
}
while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet")){
SYSTEM::WAIT(0);
}
SYSTEM::START_NEW_SCRIPT("appInternet", APP_INTERNET);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
return 1;
}


void func_30(int iParam0, BOOL bParam1) // Position - 0x1445{
if(!bParam1 && !_IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), true) && func_168() < func_167() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_163(PLAYER::PLAYER_ID())) func_31(true, iParam0);
return;
}


void func_31(BOOL bParam0, int iParam1) // Position - 0x148F{
var unk;
func_112(true, true, iParam1);
if(bParam0){
if(func_111(91) || func_111(98)) func_108();
func_93();
func_92(17);
unk.f_2=-503120183;
unk.f_3=iParam1;
if(func_91(PLAYER::PLAYER_ID()) && iParam1==0) unk.f_3=100;
func_89(unk, _GET_LOBBY_SCRIPT_EVENT_BITS(false, true));
func_57();
if(!func_91(PLAYER::PLAYER_ID()) && iParam1 !=1) _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(_CHAR_GANGAPP_SECUROSERV, "GB_TXTMSG_INIT2" /*Thank you for registering with SecuroServ as a VIP. Recruit your Protection Detail immediately to start feeling the benefits of having a troop of armed Bodyguards at your beck and call. But what now? Take your operation to the next level by getting an office on dynasty8realestate.com, of course! You'll become a CEO with access to Special Cargo, Vehicle Cargo, Special Vehicle Work and many other benefits.*/, 2, 0, 0, 0, 0, true, 0, 1);
}
return;
}
int _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x1529{
int num;
char* str;
int num2;
char* str2;
int num3;
char* str3;
char* str4;
int num4;
MISC::CLEAR_BIT(&Global_8253, 10);
num=0;
str="NULL";
num2=-99;
str2="NULL";
num3=0;
str3="NULL";
str4="NULL";
num4=3;
if(func_34(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4)==1){
if(bParam7==true){
Global_8960=iParam6;
Global_8863[3 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8940=echParam0;
MISC::SET_BIT(&Global_8253, 1);
MISC::SET_BIT(&Global_8253, 7);
}
return 1;
}
return 0;
}
struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x15B8{
return Global_2028[character /*29*/].f_3;
}

int func_34(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x15CB{
int num;
BOOL flag;
iParam13 > 99;
MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
_UPDATE_CURRENT_PLAYER_CHARACTER();
num=0;
switch (iParam16){
case 0:
if(Global_20383==CHAR_MICHAEL) num=0;
else num=1;
break;
case 2:
if(Global_20383==CHAR_TREVOR) num=0;
else num=1;
break;
case 1:
if(Global_20383==CHAR_FRANKLIN) num=0;
else num=1;
break;
default:
num=0;
break;
}
if(num==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) return 0;
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==1) return 0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0) return 0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0) return 0;
}
if(func_49()==0){
func_47();
return 0;
}
func_46(Global_22792);
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_14143[Global_22792 /*104*/], sParam1, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_17=echParam0;
if(iParam2==0){}else{
Global_113648.f_14143[Global_22792 /*104*/].f_24=iParam2;
}
Global_113648.f_14143[Global_22792 /*104*/].f_25=iParam7;
Global_113648.f_14143[Global_22792 /*104*/].f_26=iParam8;
Global_113648.f_14143[Global_22792 /*104*/].f_29=iParam9;
Global_113648.f_14143[Global_22792 /*104*/].f_30=iParam12;
Global_113648.f_14143[Global_22792 /*104*/].f_31=iParam11;
Global_113648.f_14143[Global_22792 /*104*/].f_28=0;
Global_113648.f_14143[Global_22792 /*104*/].f_32=iParam3;
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_49=iParam6;
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_66=iParam13;
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
if(IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
Global_8959=4;
func_45(0);
func_45(2);
func_45(1);
}else{
_UPDATE_CURRENT_PLAYER_CHARACTER();
switch (iParam16){
case 3:
Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383]=1;
break;
case 0:
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
break;
case 2:
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
break;
case 1:
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20383){
case CHAR_MICHAEL:
func_45(0);
Global_8959=0;
break;
case CHAR_FRANKLIN:
func_45(1);
Global_8959=1;
break;
case CHAR_TREVOR:
func_45(2);
Global_8959=2;
break;
case CHAR_MULTIPLAYER:
func_45(3);
Global_8959=3;
break;
default:
Global_8959=4;
break;
}}}
if(iParam7==1){
if(IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14053[0 /*20*/].f_17=1;
Global_113648.f_14053[1 /*20*/].f_17=1;
Global_113648.f_14053[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113648.f_14053[Global_20383 /*20*/].f_17=1;
break;
case 0:
Global_113648.f_14053[0 /*20*/].f_17=1;
break;
case 2:
Global_113648.f_14053[2 /*20*/].f_17=1;
break;
case 1:
Global_113648.f_14053[1 /*20*/].f_17=1;
break;
}}}
Global_22794[Global_22792]=0;
if(bParam10){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_20326){
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20383){
case CHAR_MICHAEL:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
break;
case CHAR_TREVOR:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Trevor", 24);
break;
case CHAR_FRANKLIN:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Franklin", 24);
break;
default:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1)if(!func_44()) AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, true);
}
if(!Global_20585){
if(Global_20383.f_1==6){
func_43(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_40(1);
func_43(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && echParam0==Global_1977527) flag=true;
func_35(echParam0, sParam1, flag, func_39(PLAYER::PLAYER_ID()));
return 1;
}


void func_35(eCharacter echParam0, char* sParam1, BOOL bParam2, Any anParam3) // Position - 0x1AA2{
if(!func_36()) return;
MONEY::NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(echParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, anParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2) Global_1977527=-1;
return;
}
BOOL func_36() // Position - 0x1AFF{
if(!Global_262145.f_28878) return false;
if(!Global_78558) return false;
if(PLAYER::PLAYER_ID()==_INVALID_PLAYER_INDEX()) return false;
if(func_37(PLAYER::PLAYER_ID())) return false;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
return true;
}
BOOL func_37(Player plParam0) // Position - 0x1B62{
return func_38(plParam0, 20);
}
BOOL func_38(Player plParam0, int iParam1) // Position - 0x1B72{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
Any func_39(Player plParam0) // Position - 0x1B8A{
return Global_1853910[plParam0 /*862*/].f_205.f_6;
}


void func_40(int iParam0) // Position - 0x1B9F{
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
if(func_246(14)){
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
func_42(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694519)if(num==14) func_41(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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
func_41(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==7){
if(Global_78558){
value2=0;
value2=Global_4541031;
for (k=0;
k < 12;
k=k + 1){
if(Global_4541032[k /*104*/].f_24 !=0)if(Global_4541032[k /*104*/].f_28==0)if(Global_4541032[k /*104*/].f_99[Global_20383]==1) value2=value2 + 1;
}
func_41(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
switch (Global_20383){
case CHAR_MICHAEL:
value3=Global_44457;
break;
case CHAR_FRANKLIN:
value3=Global_44458;
break;
case CHAR_TREVOR:
value3=Global_44459;
break;
default:
break;
}
func_41(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}}elseif(num==14){
func_41(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==20){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&Global_8260[num /*15*/]);
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
func_42(&Global_8260[num /*15*/]);
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
func_42(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==8){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==23 && MISC::ARE_STRINGS_EQUAL(&Global_8260[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8254, 6)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[num /*15*/].f_10==57 && num==23){
value6=0;
value6=Global_1890001.f_1;
func_41(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
func_41(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}
Global_8822[i]=1;
}}}
num=num + 1;
}}}
return;
}


void func_41(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x2139{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_42(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_42(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_42(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_42(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_42(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_42(const char* sParam0) // Position - 0x21EC{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_43(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21FE{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(iParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
BOOL func_44() // Position - 0x2261{
return Global_1575060;
}


void func_45(int iParam0) // Position - 0x226D{
var unk;
var unk2;
unk=Global_113648.f_14053[iParam0 /*20*/].f_8;
unk=unk;
unk2=unk2;
return;
}


void func_46(int iParam0) // Position - 0x228C{
int clockSeconds;
int clockMinutes;
int clockHours;
int clockDayOfMonth;
int num;
int clockYear;
clockSeconds=CLOCK::GET_CLOCK_SECONDS();
clockMinutes=CLOCK::GET_CLOCK_MINUTES();
clockHours=CLOCK::GET_CLOCK_HOURS();
clockDayOfMonth=CLOCK::GET_CLOCK_DAY_OF_MONTH();
num=CLOCK::GET_CLOCK_MONTH() + 1;
clockYear=CLOCK::GET_CLOCK_YEAR();
Global_113648.f_14143[iParam0 /*104*/].f_18=clockSeconds;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_1=clockMinutes;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_2=clockHours;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_3=clockDayOfMonth;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_4=num;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_5=clockYear;
return;
}


void func_47() // Position - 0x231E{
int num;
int num2;
int num3;
if(Global_78558){
num=24;
num2=33;
}else{
num=0;
num2=20;
}
num3=num;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (num3 < num2){
if(!func_48(Global_113648.f_14143[num3 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)) Global_22792=num3;
num3=num3 + 1;
}
Global_113648.f_14143[Global_22792 /*104*/].f_24=1;
return;
}
BOOL func_48(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x23E9{
int num;
int num2;
int num3;
int num4;
if(iParam0.f_5 < iParam6.f_5) return false;
if(iParam0.f_5 > iParam6.f_5) return true;
if(iParam0.f_5==iParam6.f_5){
if(iParam0.f_4 < iParam6.f_4) return false;
if(iParam0.f_4 > iParam6.f_4) return true;
if(iParam0.f_4==iParam6.f_4){
num=iParam0;
num.f_1=iParam0.f_1 * 60;
num.f_2=iParam0.f_2 * 3600;
num.f_3=iParam0.f_3 * 86400;
num3=num + num.f_1 + num.f_2 + num.f_3;
num2=iParam6;
num2.f_1=iParam6.f_1 * 60;
num2.f_2=iParam6.f_2 * 3600;
num2.f_3=iParam6.f_3 * 86400;
num4=num2 + num2.f_1 + num2.f_2 + num2.f_3;
if(num3 > num4 || num3==num4) return true;
else return false;
}}
return false;
}

int func_49() // Position - 0x24D4{
int num;
int num2;
int i;
if(Global_78558){
num=24;
num2=33;
}else{
num=0;
num2=20;
}
for (i=num;
i < num2;
i=i + 1){
if(Global_113648.f_14143[i /*104*/].f_24==0){
Global_22792=i;
return 1;
}}
i=num;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (i < num2){
if(Global_113648.f_14143[i /*104*/].f_24==0 || Global_113648.f_14143[i /*104*/].f_24==1)if(!func_48(Global_113648.f_14143[i /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)) Global_22792=i;
Global_113648.f_14143[i /*104*/].f_24==2;
i=i + 1;
}
if(Global_22792==34) return 0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=0;
return 1;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x263C{
if(func_246(14)){
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
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x26DE{
func_52();
return Global_113648.f_2365.f_539.f_4321;
}


void func_52() // Position - 0x26F7{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_53(character) && !func_246(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_53(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_53(eCharacter echParam0) // Position - 0x27F4{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2800{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x283D{
if(func_53(character)) return func_56(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_56(eCharacter echParam0) // Position - 0x2862{
return Global_2028[echParam0 /*29*/];
}


void func_57() // Position - 0x2871{
if(!func_86() && func_71() && func_69(PLAYER::PLAYER_ID()))if(func_66()) _THEFEED_SHOW_MESSAGE("GB_INFO_MC_L" /*There are players looking to join a MC in this session.*/, false);
else _THEFEED_SHOW_MESSAGE("GB_INFO_LFG" /*There are players looking for work as Bodyguards in this session.*/, false);
return;
}
int _THEFEED_SHOW_MESSAGE(char* sParam0, BOOL bParam1) // Position - 0x28B5{
int num;
int num2;
num=-1;
num2=1;
if(bParam1) num2=2;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
num=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
func_59(0, sParam0, num2, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return num;
}


void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x28ED{
int num;
if(!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) return;
num=func_60(iParam2);
if(num >=0 && num < 5){
Global_1944061.f_5[num /*53*/]=iParam0;
Global_1944061.f_5[num /*53*/].f_1=iParam2;
TEXT_LABEL_ASSIGN_STRING(&(Global_1944061.f_5[num /*53*/].f_8), sParam1, 16);
Global_1944061.f_5[num /*53*/].f_2[0]=iParam4;
Global_1944061.f_5[num /*53*/].f_2[1]=iParam5;
Global_1944061.f_5[num /*53*/].f_2[2]=iParam6;
Global_1944061.f_5[num /*53*/].f_7=iParam7;
Global_1944061.f_5[num /*53*/].f_6=iParam8;
TEXT_LABEL_ASSIGN_STRING(&(Global_1944061.f_5[num /*53*/].f_12), sParam3, 64);
TEXT_LABEL_ASSIGN_STRING(&Global_1944061.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
TEXT_LABEL_ASSIGN_STRING(&Global_1944061.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
TEXT_LABEL_ASSIGN_STRING(&Global_1944061.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
}
return;
}

int func_60(int iParam0) // Position - 0x29F5{
int i;
for (i=0;
i <=Global_1944061 - 1;
i=i + 1){
if(iParam0 > Global_1944061.f_5[i /*53*/].f_1){
func_61(i);
return i;
}}
Global_1944061=Global_1944061 + 1;
if(Global_1944061 > 5){
Global_1944061=5;
return Global_1944061;
}
return Global_1944061 - 1;
}


void func_61(int iParam0) // Position - 0x2A57{
int i;
for (i=4;
i >=iParam0 + 1;
i=i + -1){
Global_1944061.f_5[i /*53*/]={
Global_1944061.f_5[i - 1 /*53*/] 
};
}
return;
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x2A90{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_63(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_63(int iParam0, BOOL bParam1) // Position - 0x2ADB{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_64();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_64() // Position - 0x2B1C{
return Global_1574918;
}
BOOL IS_ROCKSTAR_DEV() // Position - 0x2B28{
return DLC::IS_DLC_PRESENT(-1762644250);
}
BOOL func_66() // Position - 0x2B39{
return func_67(PLAYER::PLAYER_ID());
}
BOOL func_67(Player plParam0) // Position - 0x2B49{
return func_68(plParam0, 1);
}
BOOL func_68(Player plParam0, int iParam1) // Position - 0x2B58{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10==plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428==iParam1) return 1;
return 0;
}
BOOL func_69(Player plParam0) // Position - 0x2BA7{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return false;
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return false;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_139, 2) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_139, 5)) return false;
if(func_70(plParam0)) return false;
return true;
}
BOOL func_70(Player plParam0) // Position - 0x2C0F{
Player player;
player=plParam0;
if(player !=-1) return func_38(plParam0, 9);
return false;
}
BOOL func_71() // Position - 0x2C2D{
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(func_72(player)) return true;
}
return false;
}
BOOL func_72(Player plParam0) // Position - 0x2C5E{
int num;
if(_NETWORK_IS_PLAYER_VALID(plParam0, false, true)){
if(plParam0 !=PLAYER::PLAYER_ID()){
num=0;
if(func_85(true))if(func_84(plParam0, 9)) num=1;
elseif(func_38(plParam0, 15)) num=1;
if(num && func_73(plParam0, 0, false)) return true;
}}
return false;
}

int func_73(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x2CBB{
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return 0;
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return 0;
if(func_82(plParam0)) return 0;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_139, 2) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_139, 5)) return 0;
if(func_81(plParam0)) return 0;
if(bParam2){
if(func_79(plParam0, plParam1, true)) return 0;
if(func_37(plParam0)) return 0;
if(func_77(plParam0, true)) return 0;
}elseif(_IS_PLAYER_IN_AN_ORGANIZATION(plParam0, true)){
return 0;
}
if(func_76(plParam0)) return 0;
if(func_70(plParam0)) return 0;
if(func_163(plParam0)) return 0;
if(func_74(plParam0)) return 0;
return 1;
}
BOOL func_74(Player plParam0) // Position - 0x2DA5{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_75())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_75() // Position - 0x2DE4{
return IS_BIT_SET(Global_2621446, 3);
}
BOOL func_76(Player plParam0) // Position - 0x2DF2{
Player player;
player=plParam0;
if(player !=-1) return IS_BIT_SET(Global_1894573[player /*608*/].f_1, 0);
return false;
}
BOOL func_77(Player plParam0, BOOL bParam1) // Position - 0x2E15{
return func_78(plParam0, bParam1, 1);
}

int func_78(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x2E26{
Player player;
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
if(!bParam1)if(func_68(plParam0, iParam2)) return 0;
player=Global_1894573[plParam0 /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428==iParam2) return 1;
return 0;
}
BOOL func_79(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x2E82{
if(plParam1 !=_INVALID_PLAYER_INDEX()){
if(!bParam2)if(func_80(plParam0, plParam1)) return false;
if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return plParam1==Global_1894573[plParam0 /*608*/].f_10;
}
return false;
}
BOOL func_80(Player plParam0, Player plParam1) // Position - 0x2ECC{
if(plParam1 !=_INVALID_PLAYER_INDEX())if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10==plParam0) return plParam1==plParam0;
return false;
}
BOOL func_81(Player plParam0) // Position - 0x2F11{
return func_38(plParam0, 30);
}
BOOL func_82(Player plParam0) // Position - 0x2F21{
if(!func_38(plParam0, 2)) return true;
if(func_38(plParam0, 1)) return true;
if(func_83(plParam0) > 0) return true;
return false;
}

int func_83(Player plParam0) // Position - 0x2F55{
return Global_1894573[plParam0 /*608*/].f_10.f_23;
}
BOOL func_84(Player plParam0, int iParam1) // Position - 0x2F6A{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_5, iParam1);
}
BOOL func_85(BOOL bParam0) // Position - 0x2F82{
return func_77(PLAYER::PLAYER_ID(), bParam0);
}
BOOL func_86() // Position - 0x2F94{
int i;
var string2;
var string1;
for (i=0;
i < 7;
i=i + 1){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[i]==_INVALID_PLAYER_INDEX()){
TEXT_LABEL_ASSIGN_STRING(&string1, "", 64);
string1={
func_87(func_88(i)) 
};
if(MISC::ARE_STRINGS_EQUAL(&string1, &string2)) return false;
}}
return true;
}
struct<16> func_87(int iParam0) // Position - 0x2FEE{
return Global_2684799.f_3076.f_18[iParam0 /*16*/];
}

int func_88(int iParam0) // Position - 0x3006{
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
default:
}
return 0;
}


void func_89(struct<14> Param0, int iParam14) // Position - 0x305C{
Param0=548471420;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam14==0) SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &Param0, 14, iParam14);
return;
}
int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x3089{
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
BOOL func_91(Player plParam0) // Position - 0x30EE{
if(plParam0==-1) return false;
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 26);
}


void func_92(int iParam0) // Position - 0x3111{
int num;
int offset;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::SET_BIT(&Global_2793044.f_5225.f_7[num], offset);
return;
}


void func_93() // Position - 0x313A{
var unk;
int num;
unk={
func_107(65, 67, -1) 
};
num=0;
if(func_85(true)){
unk={
func_107(47, 48, -1) 
};
num=1;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk)) TEXT_LABEL_ASSIGN_STRING(&unk, func_105(PLAYER::PLAYER_ID(), false), 64);
func_99(&unk, num, false);
if(!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_96()) func_95(28);
else func_94(28);
return;
}


void func_94(int iParam0) // Position - 0x31B6{
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
return;
}


void func_95(int iParam0) // Position - 0x31D3{
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
return;
}
BOOL func_96() // Position - 0x31F0{
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==false) return false;
if(func_97())if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
elseif(func_98())if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true)) return true;
elseif(MISC::IS_PC_VERSION())if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
return false;
}
BOOL func_97() // Position - 0x3257{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_98() // Position - 0x326D{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_99(const char* sParam0, int iParam1, BOOL bParam2) // Position - 0x3283{
if(bParam2){
if(func_85(true) || iParam1==1){
func_102(47, 48, sParam0, -1, true);
if(func_66() && iParam1==1) func_101(sParam0, bParam2);
}else{
func_102(65, 67, sParam0, -1, true);
if(func_218() && iParam1==0) func_100(sParam0, bParam2);
}}
TEXT_LABEL_ASSIGN_STRING(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_105), sParam0, 64);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121=unk_0xF4D7C992D817B333();
if(!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_96()) func_95(28);
else func_94(28);
return;
}


void func_100(const char* sParam0, BOOL bParam1) // Position - 0x333E{
var unk;
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_102(45, 46, sParam0, -1, true);
unk={
func_107(65, 67, -1) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk)) func_102(65, 67, sParam0, -1, true);
}}
if(!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_96()) func_95(28);
else func_94(28);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) TEXT_LABEL_ASSIGN_STRING(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_338), sParam0, 64);
return;
}


void func_101(const char* sParam0, BOOL bParam1) // Position - 0x33CC{
if(bParam1)if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) func_102(49, 50, sParam0, -1, true);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) TEXT_LABEL_ASSIGN_STRING(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_354), sParam0, 64);
if(!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_96()) func_95(28);
else func_94(28);
return;
}


void func_102(int iParam0, int iParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x3439{
Hash statName;
Hash statName2;
var value;
var value2;
int lengthOfLiteralString;
int length;
if(func_104()){
statName=Global_2849799[iParam0 /*3*/][func_103(iParam3)];
statName2=Global_2849799[iParam1 /*3*/][func_103(iParam3)];
if(statName !=0 && statName2 !=0){
TEXT_LABEL_ASSIGN_STRING(&value, "", 32);
TEXT_LABEL_ASSIGN_STRING(&value2, "", 32);
lengthOfLiteralString=HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
if(lengthOfLiteralString > 0){
length=10;
if(lengthOfLiteralString < 10) length=lengthOfLiteralString;
TEXT_LABEL_ASSIGN_STRING(&value, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, length, 31), 32);
if(lengthOfLiteralString > 10) TEXT_LABEL_ASSIGN_STRING(&value2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, lengthOfLiteralString, 31), 32);
}
STATS::STAT_SET_STRING(statName, &value, bParam4);
STATS::STAT_SET_STRING(statName2, &value2, bParam4);
}}
return;
}

int func_103(int iParam0) // Position - 0x34E3{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_64();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}
BOOL func_104() // Position - 0x3517{
return true;
}
const 

char* func_105(Player plParam0, BOOL bParam1) // Position - 0x3524{
if(!bParam1)if(func_77(plParam0, true)) return func_106();
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}
const 

char* func_106() // Position - 0x354B{
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}
struct<16> func_107(int iParam0, int iParam1, int iParam2) // Position - 0x355B{
Hash statHash;
Hash statHash2;
var unk;
var unk17;
statHash=Global_2849799[iParam0 /*3*/][func_103(iParam2)];
statHash2=Global_2849799[iParam1 /*3*/][func_103(iParam2)];
TEXT_LABEL_ASSIGN_STRING(&unk, STATS::STAT_GET_STRING(statHash, -1), 64);
TEXT_LABEL_ASSIGN_STRING(&unk17, STATS::STAT_GET_STRING(statHash2, -1), 32);
TEXT_LABEL_APPEND_STRING(&unk, &unk17, 64);
return unk;
}


void func_108() // Position - 0x35A8{
int i;
for (i=0;
i <=3;
i=i + 1){
if(Global_2672505.f_2513[i /*80*/].f_2 !=0){
Global_2672505.f_2513[i /*80*/].f_2=5;
func_109(&(Global_2672505.f_2513[i /*80*/].f_69), 1);
}}
return;
}


void func_109(var uParam0, int iParam1) // Position - 0x35F3{
func_110(uParam0, iParam1);
return;
}


void func_110(var uParam0, int iParam1) // Position - 0x3603{
*uParam0=*uParam0 || iParam1;
return;
}
BOOL func_111(int iParam0) // Position - 0x3614{
return Global_2672505.f_2513[0 /*80*/].f_1==iParam0;
}


void func_112(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x362B{
var userID;
int cloudTimeAsInt;
int num;
var unk6;
var unk7;
const char* userid;
var unk8;
BOOL flag;
int address;
if(!func_160()) return;
num=1;
if(func_91(PLAYER::PLAYER_ID())) num=2;
if(iParam2==1) num=3;
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10 !=PLAYER::PLAYER_ID()){
if(bParam1){
STATS::START_BEING_BOSS(num);
func_157(false);
func_155(false);
func_95(21);
func_95(22);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_466=num;
}
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10=PLAYER::PLAYER_ID();
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_428=iParam2;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_465=iParam2;
STATS::GET_BOSS_GOON_UUID(func_64(), &unk6, &unk7);
func_154(unk6, unk7);
userid=NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &userID);
TEXT_LABEL_ASSIGN_STRING(&unk8, userid, 64);
func_153(unk8);
func_152();
if(_MPCHAR_STAT_GET_INT(MP_STAT_BRUISER2_LAS_HEADSHOTS, -1, 0) <=0) cloudTimeAsInt=NETWORK::GET_CLOUD_TIME_AS_INT();
else cloudTimeAsInt=_MPCHAR_STAT_GET_INT(MP_STAT_BRUISER2_LAS_HEADSHOTS, -1, 0) - 43200;
func_148(cloudTimeAsInt);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", INT)) DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_24=-1;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_25=-1;
Global_2793044.f_5225.f_223=-1;
func_142();
func_134(12, 0, true);
if(bParam0) func_92(0);
if(Global_2793044.f_5225.f_259 !=_INVALID_PLAYER_INDEX()) Global_2793044.f_5225.f_259=_INVALID_PLAYER_INDEX();
if(IS_BIT_SET(Global_2793044.f_1831, 15)) MISC::CLEAR_BIT(&(Global_2793044.f_1831), 15);
if(func_133(15)) func_132(15);
if(!func_131() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_130();
func_129(2);
}
_MPCHAR_STAT_SET_INT(MP_STAT_CERBERUS_FLAME_SHOTS, 2, -1, true, false);
func_95(31);
func_93();
func_127();
func_126();
func_125();
if(iParam2 !=1){
if(!func_124(82, 3)){
flag=false;
address=_MPCHAR_STAT_GET_INT(MP_STAT_BRUISER2_LAS_DEATHS, -1, 0);
if(!IS_BIT_SET(address, 11)){
MISC::SET_BIT(&address, 11);
_MPCHAR_STAT_SET_INT(MP_STAT_BRUISER2_LAS_DEATHS, address, -1, true, false);
flag=true;
}
func_118(82, 3, flag);
}}
if(iParam2==1) STATS::PLAYSTATS_CHANGE_MC_ROLE(func_116(_GET_BOSS_OF_LOCAL_PLAYER()), func_115(_GET_BOSS_OF_LOCAL_PLAYER()), func_114(), func_113(), Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_429, 4, Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_467);
}
return;
}

int func_113() // Position - 0x38A2{
if(Global_1947733.f_3 !=0) return Global_1947733.f_3;
return -1;
}

int func_114() // Position - 0x38BE{
if(Global_1947733.f_2 !=0) return Global_1947733.f_2;
return -1;
}

int func_115(Player plParam0) // Position - 0x38DA{
if(plParam0==_INVALID_PLAYER_INDEX()) return -1;
return Global_1894573[plParam0 /*608*/].f_10.f_8[1];
}

int func_116(Player plParam0) // Position - 0x38FF{
if(plParam0==_INVALID_PLAYER_INDEX()) return -1;
return Global_1894573[plParam0 /*608*/].f_10.f_8[0];
}
Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x3924{
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


void func_118(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x3939{
int num;
Global_8939=echParam0;
if(Global_117[echParam0 /*10*/].f_8 !=169){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(echParam1==4){
func_123(echParam0, 0, 1);
func_123(echParam0, 1, 1);
func_123(echParam0, 2, 1);
func_122(echParam0, 0, 1);
func_122(echParam0, 1, 1);
func_122(echParam0, 2, 1);
}else{
if(func_121(echParam0, echParam1)==1 && func_120(echParam0, echParam1)==1) bParam2=false;
num=echParam1;
func_123(echParam0, num, 1);
func_122(echParam0, num, 1);
if(echParam0==CHAR_SESSANTA && !Global_2793044.f_6891) bParam2=false;
if(echParam0==CHAR_ISLDJ4 && !Global_2793044.f_6890) bParam2=false;
if(echParam0==CHAR_KDJ && !Global_2793044.f_6890) bParam2=false;
}
if(bParam2){
if(!Global_78558){
if(echParam1 !=4){
if(Global_20383 !=echParam1){
Global_8912[echParam1 /*4*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8929[echParam1]=1;
Global_8934[echParam1]=echParam0;
}elseif(echParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_119();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_119();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_119();
}}}
return;
}


void func_119() // Position - 0x3AB1{
var txdName;
var subject;
const char* filenameForAudioConversation;
TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
if(Global_8958==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_8863[1 /*6*/]), 64);
filenameForAudioConversation=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact:
~n~~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8863[1 /*6*/]);
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8253, 0);
return;
}

int func_120(eCharacter echParam0, int iParam1) // Position - 0x3B2C{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_24[iParam1];
}

int func_121(eCharacter echParam0, int iParam1) // Position - 0x3B56{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_12[iParam1];
}


void func_122(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3B80{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_24[iParam1]=iParam2;
if(echParam0 < _CHAR_UNUSED) Global_113648.f_28052[echParam0 /*29*/].f_24[iParam1]=iParam2;
return;
}


void func_123(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3BC5{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_12[iParam1]=iParam2;
if(echParam0 < _CHAR_UNUSED) Global_113648.f_28052[echParam0 /*29*/].f_12[iParam1]=iParam2;
return;
}
BOOL func_124(int iParam0, int iParam1) // Position - 0x3C0A{
if(func_121(iParam0, iParam1)==1) return true;
return false;
}


void func_125() // Position - 0x3C26{
if(!Global_2793044.f_5225.f_338) Global_2793044.f_5225.f_338=1;
return;
}


void func_126() // Position - 0x3C47{
var unk;
unk={
func_107(49, 50, -1) 
};
func_101(&unk, false);
if(!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_96()) func_95(28);
else func_94(28);
return;
}


void func_127() // Position - 0x3C90{
var unk;
unk={
func_107(45, 46, -1) 
};
func_100(&unk, false);
if(!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_96()) func_95(28);
else func_94(28);
return;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3CD9{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_103(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}


void func_129(int iParam0) // Position - 0x3D09{
MISC::SET_BIT(&(Global_4585323.f_2), iParam0);
if(Global_4585323) return;
Global_4585323=true;
Global_4585323.f_1=0;
return;
}


void func_130() // Position - 0x3D33{
int i;
for (i=0;
i < 15;
i=i + 1){
if(Global_4585249.f_28[i /*2*/] !=-1 && Global_4585249.f_28[i /*2*/].f_1 !=0)if(HUD::DOES_BLIP_EXIST(Global_4585249.f_28[i /*2*/].f_1)) HUD::SET_BLIP_AS_SHORT_RANGE(Global_4585249.f_28[i /*2*/].f_1, true);
}
return;
}
BOOL func_131() // Position - 0x3D94{
return Global_2683862.f_740;
}


void func_132(int iParam0) // Position - 0x3DA3{
int num;
int offset;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::CLEAR_BIT(&Global_2793044.f_5225.f_7[num], offset);
return;
}
BOOL func_133(int iParam0) // Position - 0x3DCC{
int num;
int num2;
num=iParam0 / 32;
num2=iParam0 % 32;
return IS_BIT_SET(Global_2793044.f_5225.f_7[num], num2);
}


void func_134(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3DF2{
if(func_141()){
if(iParam1==1){
if(Global_2793044.f_4492==-1) Global_2793044.f_4492=Global_262145.f_27184;
_STOPWATCH_RESET(&(Global_2793044.f_4490), false, false);
if(bParam2){
if(Global_2793044.f_4495==-1) Global_2793044.f_4495=Global_262145.f_27185;
_STOPWATCH_RESET(&(Global_2793044.f_4493), false, false);
}else{
Global_1574582=false;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_140(true);
}}else{
Global_1574582=false;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_140(true);
}
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_139() && !func_135(PLAYER::PLAYER_ID())) Global_1057408=0;
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
}
return;
}
BOOL func_135(Player plParam0) // Position - 0x3EBC{
if(func_136(plParam0, true, false))if(Global_1853910[plParam0 /*862*/] !=6) return true;
return false;
}
BOOL func_136(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3EE1{
if(bParam1)if(func_137(plParam0)) return true;
!bParam2;
if(Global_1853910[plParam0 /*862*/]==-1) return false;
return true;
}
BOOL func_137(Player plParam0) // Position - 0x3F13{
return func_138(plParam0);
}
BOOL func_138(Player plParam0) // Position - 0x3F21{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_11.f_1, 0);
}
BOOL func_139() // Position - 0x3F38{
return Global_2683862.f_841;
}


void func_140(BOOL bParam0) // Position - 0x3F47{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_141()){
if(_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
}
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
Global_1574582.f_2=0;
if(bParam0) NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
}}else{
if(_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1) NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
}
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
}}
return;
}
BOOL func_141() // Position - 0x4044{
return Global_1574582;
}


void func_142() // Position - 0x4050{
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
func_144(true, player);
if(player !=PLAYER::PLAYER_ID()) func_143(player);
}}
return;
}


void func_143(Player plParam0) // Position - 0x4092{
Ped playerPed;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_101, plParam0)){
playerPed=PLAYER::GET_PLAYER_PED(plParam0);
PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(playerPed, PLAYER::PLAYER_ID(), true);
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), plParam0, true);
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(plParam0, PLAYER::PLAYER_ID(), true);
func_144(true, plParam0);
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_101), plParam0);
}
return;
}


void func_144(BOOL bParam0, Player plParam1) // Position - 0x40F4{
Vehicle vehiclePedIsIn;
Ped playerPed;
int num;
int num2;
if(_NETWORK_IS_PLAYER_VALID(plParam1, false, true)){
playerPed=PLAYER::GET_PLAYER_PED(plParam1);
if(ENTITY::DOES_ENTITY_EXIST(playerPed) && !ENTITY::IS_ENTITY_DEAD(playerPed, false)){
if(PED::IS_PED_IN_ANY_VEHICLE(playerPed, false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, bParam0, true);
if(func_79(plParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true)){
if(_GET_BOSS_OF_LOCAL_PLAYER()==plParam1){
if(Global_2793044.f_5225.f_260[3] !=vehiclePedIsIn) Global_2793044.f_5225.f_260[3]=vehiclePedIsIn;
}
else{
num=func_145(_GET_BOSS_OF_LOCAL_PLAYER(), plParam1);
if(num !=-1)if(Global_2793044.f_5225.f_260[num] !=vehiclePedIsIn) Global_2793044.f_5225.f_260[num]=vehiclePedIsIn;
}}}}elseif(!bParam0){
if(func_79(plParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true)){
if(_GET_BOSS_OF_LOCAL_PLAYER()==plParam1){
vehiclePedIsIn=Global_2793044.f_5225.f_260[3];
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
Global_2793044.f_5225.f_260[3]=0;
}}else{
num2=func_145(_GET_BOSS_OF_LOCAL_PLAYER(), plParam1);
if(num2 !=-1){
vehiclePedIsIn=Global_2793044.f_5225.f_260[num2];
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
Global_2793044.f_5225.f_260[num2]=0;
}
}}}}}}
return;
}

int func_145(Player plParam0, Player plParam1) // Position - 0x4295{
int i;
if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)){
if(func_79(plParam1, plParam0, false) || func_147(plParam1, plParam0)){
for (i=0;
i < 7;
i=i + 1){
if(func_146(plParam0, i)==plParam1) return i;
}}}
return -1;
}
Player func_146(Player plParam0, int iParam1) // Position - 0x42EB{
if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))if(iParam1 > -1 && iParam1 < 7) return Global_1894573[plParam0 /*608*/].f_10.f_11[iParam1];
return _INVALID_PLAYER_INDEX();
}
BOOL func_147(Player plParam0, Player plParam1) // Position - 0x4327{
if(plParam1 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10.f_26 !=_INVALID_PLAYER_INDEX()) return plParam1==Global_1894573[plParam0 /*608*/].f_10.f_26;
return false;
}


void func_148(int iParam0) // Position - 0x4360{
if(!func_160()) return;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_1=iParam0;
if(_MPCHAR_STAT_GET_INT(MP_STAT_BRUISER2_LAS_HEADSHOTS, -1, 0) !=func_149(PLAYER::PLAYER_ID())) _MPCHAR_STAT_SET_INT(MP_STAT_BRUISER2_LAS_HEADSHOTS, func_149(PLAYER::PLAYER_ID()), -1, true, false);
return;
}

int func_149(Player plParam0) // Position - 0x43AA{
if(func_150(plParam0)==-1) return -1;
return func_150(plParam0) + 43200;
}

int func_150(Player plParam0) // Position - 0x43CB{
return Global_1894573[plParam0 /*608*/].f_10.f_1;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x43E0{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_103(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}


void func_152() // Position - 0x441D{
if(MISC::IS_PC_VERSION()){
NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
if(func_85(true)) HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
else HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
}
return;
}


void func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x444E{
Global_2684799.f_3076.f_2={
uParam0 
};
return;
}


void func_154(var uParam0, var uParam1) // Position - 0x4467{
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_8[0]=uParam0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_8[1]=uParam1;
return;
}


void func_155(BOOL bParam0) // Position - 0x4497{
func_156(204, bParam0, -1, true);
return;
}


void func_156(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x44A9{
Hash statName;
if(func_104()){
statName=Global_2848280[iParam0 /*3*/][func_103(iParam2)];
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, bParam3);
}
return;
}


void func_157(BOOL bParam0) // Position - 0x44DB{
if(bParam0){
if(func_159(4)){
func_94(21);
func_94(22);
}
func_94(31);
func_158(bParam0);
}else{
if(func_38(PLAYER::PLAYER_ID(), 21)){
func_95(21);
if(!func_159(3) && func_159(4)) func_94(22);
}
func_95(31);
func_158(bParam0);
}
return;
}


void func_158(BOOL bParam0) // Position - 0x4543{
func_156(424, bParam0, -1, true);
return;
}
BOOL func_159(int iParam0) // Position - 0x4556{
return IS_BIT_SET(Global_2793044.f_5225.f_47, iParam0);
}
BOOL func_160() // Position - 0x456A{
if(func_162() && func_161(0)) return true;
return false;
}


var func__161(int iParam0) // Position - 0x4588{
return Global_1574538[iParam0];
}


var func__162() // Position - 0x4598{
return func_161(func_64() + 1);
}
BOOL func_163(Player plParam0) // Position - 0x45AA{
return func_164(plParam0) > 0;
}

int func_164(Player plParam0) // Position - 0x45BA{
int num;
int num2;
if(_NETWORK_IS_PLAYER_VALID(plParam0, false, true)){
if(Global_1894573[plParam0 /*608*/].f_10.f_181 !=-1) num=Global_1894573[plParam0 /*608*/].f_10.f_181;
else num=_MPPLY_STAT_GET_INT(joaat("MPPLY_VIPGAMEPLAYDISABLEDTIMER"));
num2=(num + func_165()) - NETWORK::GET_CLOUD_TIME_AS_INT();
return num2;
}
return -1;
}


var func__165() // Position - 0x460F{
return Global_262145.f_15410;
}
int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x461E{
Hash statHash;
int outValue;
statHash=hParam0;
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
return 0;
}

int func_167() // Position - 0x463C{
return Global_262145.f_12841;
}

int func_168() // Position - 0x464B{
int i;
int num;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))if(_IS_PLAYER_BOSS_OF_ORGANIZATION(player)) num=num + 1;
}
return num;
}
BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x4688{
if(!bCanBeBoss)if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return false;
return Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX();
}


void func_170() // Position - 0x46B3{
var unk;
Vector3 offsetFromEntityInWorldCoords;
BOOL flag;
Global_1949964=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
offsetFromEntityInWorldCoords={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obLocal_122, 0.0328f, -0.8f, 0.3f) 
};
flag=false;
_STOPWATCH_DESTROY(&uLocal_118);
if(func_7(0, &unk)){
while (!flag){
func_232(0);
if(!_STOPWATCH_IS_INITIALIZED(&uLocal_118)) _STOPWATCH_INITIALIZE(&uLocal_118, false, false);
elseif(_STOPWATCH_HAS_TIME_PASSED(&uLocal_118, 4000, false)) flag=true;
if(!func_174(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0.05f, false) && !func_225(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_122), 5f))if(!func_172(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD)) TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), offsetFromEntityInWorldCoords, 1f, 5000, ENTITY::GET_ENTITY_HEADING(obLocal_122), 0.25f);
else flag=true;
GRAPHICS::DRAW_DEBUG_SPHERE(offsetFromEntityInWorldCoords, 0.1f, 255, 0, 0, 255);
GRAPHICS::DRAW_DEBUG_LINE(offsetFromEntityInWorldCoords, ENTITY::GET_ENTITY_COORDS(obLocal_122, true), 0, 255, 0, 255);
GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0, 0, 255, 255);
SYSTEM::WAIT(0);
}
_STOPWATCH_DESTROY(&uLocal_118);
iLocal_123=0;
}}
while (iLocal_123 !=3){
func_171(obLocal_122);
func_232(0);
SYSTEM::WAIT(0);
}
return;
}


void func_171(Object obParam0) // Position - 0x4804{
var animDict;
var animDict2;
var animDict3;
char* animnName;
int endRange;
int localSceneFromNetworkId;
int randomIntInRange;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) return;
if(!func_241(PLAYER::PLAYER_ID()) && !func_240(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID())) return;
if(!ENTITY::DOES_ENTITY_EXIST(obParam0)) return;
func_7(0, &animDict);
func_7(1, &animDict2);
func_7(2, &animDict3);
STREAMING::REQUEST_ANIM_DICT(&animDict3);
STREAMING::REQUEST_ANIM_DICT(&animDict);
animnName="idle_a";
endRange=1;
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==joaat("MP_F_Freemode_01")) endRange=1;
switch (iLocal_123){
case 0:
bLocal_115=false;
GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
if(STREAMING::HAS_ANIM_DICT_LOADED(&animDict)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD)==7 && STREAMING::HAS_ANIM_DICT_LOADED(&animDict)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_128, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, false, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict, "enter", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
STREAMING::REMOVE_ANIM_DICT(&animDict);
iLocal_123=1;
}}
break;
case 1:
GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
STREAMING::REQUEST_ANIM_DICT(&animDict2);
localSceneFromNetworkId=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_124);
if(!bLocal_115){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >=0.93f){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
bLocal_115=true;
}}
if(STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >=0.96f){
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
if(MISC::ARE_STRINGS_EQUAL(&uLocal_131, "idle_a") && randomIntInRange==0 || MISC::ARE_STRINGS_EQUAL(&uLocal_131, "idle_b") && randomIntInRange==1 || MISC::ARE_STRINGS_EQUAL(&uLocal_131, "idle_c") && randomIntInRange==2 || MISC::ARE_STRINGS_EQUAL(&uLocal_131, "idle_d") && randomIntInRange==3){
randomIntInRange=randomIntInRange + 1;
if(randomIntInRange >=endRange) randomIntInRange=0;
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_128, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
switch (randomIntInRange){
case 0:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict2, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
TEXT_LABEL_ASSIGN_STRING(&uLocal_131, "idle_a", 16);
iLocal_123=3;
break;
case 1:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict2, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
TEXT_LABEL_ASSIGN_STRING(&uLocal_131, "idle_b", 16);
iLocal_123=3;
break;
case 2:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict2, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
TEXT_LABEL_ASSIGN_STRING(&uLocal_131, "idle_c", 16);
iLocal_123=3;
break;
case 3:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict2, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
TEXT_LABEL_ASSIGN_STRING(&uLocal_131, "idle_d", 16);
iLocal_123=3;
break;
default:
TEXT_LABEL_ASSIGN_STRING(&uLocal_131, "idle_XXX", 16);
break;
}}
break;
case 3:
bLocal_115=false;
if(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_a", 2)) GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_b", 2)) GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_c", 2)) GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_d", 2)) GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
else GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
localSceneFromNetworkId=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_124);
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_128, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
localSceneFromNetworkId=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_124);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId)) PED::SET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId, 0f);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
iLocal_123=3;
return;
}
if(STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >=0.99f){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_128, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
iLocal_123=3;
return;
}
break;
}
return;
}
BOOL func_172(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x4D4E{
if(func_173(pedParam0))if(TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1)==0) return true;
return false;
}
BOOL func_173(Ped pedParam0) // Position - 0x4D81{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))if(!PED::IS_PED_INJURED(pedParam0)) return true;
return false;
}
BOOL func_174(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x4DA1{
if(fParam6 < 0f) fParam6=0f;
if(!bParam7)if(MISC::ABSF(fParam0 - uParam3) <=fParam6)if(MISC::ABSF(fParam0.f_1 - uParam3.f_1) <=fParam6)if(MISC::ABSF(fParam0.f_2 - uParam3.f_2) <=fParam6) return true;
elseif(MISC::ABSF(fParam0 - uParam3) <=fParam6)if(MISC::ABSF(fParam0.f_1 - uParam3.f_1) <=fParam6) return true;
return false;
}
BOOL func_175() // Position - 0x4E1C{
if(!func_8(PLAYER::PLAYER_ID())) return false;
return IS_BIT_SET(Global_1950108.f_515, 30);
}
BOOL func_176() // Position - 0x4E3E{
if(func_240(PLAYER::PLAYER_ID()))if(IS_BIT_SET(Global_1950108.f_515, 0) || IS_BIT_SET(Global_1950108.f_515, 2)) return 1;
return 0;
}
BOOL func_177() // Position - 0x4E71{
if(func_241(PLAYER::PLAYER_ID()))if(IS_BIT_SET(Global_1950108.f_515, 0) || IS_BIT_SET(Global_1950108.f_515, 2)) return true;
return false;
}
BOOL func_178() // Position - 0x4EA4{
if(func_163(PLAYER::PLAYER_ID())) return false;
if(func_212()) return false;
if(func_211()) return false;
if(_IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID())) return true;
elseif(func_168() < func_167()) return true;
return false;
}
BOOL func_179(int iParam0, BOOL bParam1) // Position - 0x4EF3{
int num;
num=func_180(iParam0);
if(num==-1) return false;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) return false;
if(func_224(0)) return false;
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

int func_180(int iParam0) // Position - 0x4FAB{
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


void func_181(BOOL bParam0) // Position - 0x4FE6{
if(func_175() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_182() && !Global_1949965) _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 2, "ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/, 0, 0, 0, 0);
return;
}
BOOL func_182() // Position - 0x5026{
return Global_1950108.f_528;
}


void func_183(BOOL bParam0) // Position - 0x5035{
if(func_207(PLAYER::PLAYER_ID()) && func_193(PLAYER::PLAYER_ID())==func_192(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_182() && !Global_1949965){
if(func_189()){
func_188("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
}elseif(!bParam0){
if(func_168() >=func_167()) _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
elseif(func_163(PLAYER::PLAYER_ID())) _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
elseif(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
else _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
}elseif(func_67(PLAYER::PLAYER_ID())){
func_188("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
}elseif(_STOPWATCH_IS_INITIALIZED(&uLocal_116) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_116, 10000, true) || !bLocal_113){
if(func_184(PLAYER::PLAYER_ID()) || Global_1949965==true){
bLocal_113=true;
if(!Global_1949965) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
}else{
if(func_203()) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
bLocal_113=false;
_STOPWATCH_DESTROY(&uLocal_116);
_CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
}}elseif(bLocal_113){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
if(!func_184(PLAYER::PLAYER_ID())){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
bLocal_113=false;
}}}
return;
}
BOOL func_184(Player plParam0) // Position - 0x51AA{
return func_185(func_186(plParam0));
}
BOOL func_185(int iParam0) // Position - 0x51BC{
switch (iParam0){
case 178:
case 188:
return 1;
default:
}
return 0;
}

int func_186(Player plParam0) // Position - 0x51DC{
if(func_187(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_33;
return -1;
}
BOOL func_187(Player plParam0, BOOL bParam1) // Position - 0x51FF{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}


void func_188(char* sParam0) // Position - 0x523A{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}
BOOL func_189() // Position - 0x5250{
if(Global_1949970) return false;
return func_190();
}
BOOL func_190() // Position - 0x5267{
if(func_191()) return 1;
return Global_2683862.f_744;
}
BOOL func_191() // Position - 0x5281{
return Global_1575018==10;
}

int func_192(Player plParam0) // Position - 0x5290{
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
return Global_1853910[plParam0 /*862*/].f_267.f_144;
}

int func_193(Player plParam0) // Position - 0x52B3{
if(func_207(plParam0)) return func_194(Global_2657589[plParam0 /*466*/].f_321.f_7);
return 0;
}

int func_194(int iParam0) // Position - 0x52DA{
switch (iParam0){
case 60:
return 1;
case 61:
return 2;
case 62:
return 3;
case 63:
return 4;
case 64:
return 5;
case 65:
return 6;
case 66:
return 7;
case 67:
return 8;
case 68:
return 9;
case 69:
return 10;
}
return 0;
}


void func_195(BOOL bParam0) // Position - 0x536F{
if(func_206(PLAYER::PLAYER_ID()) || func_176() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_182() && !Global_1949965 && func_225(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_122), 90f)){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
}elseif(func_189()){
if(func_206(PLAYER::PLAYER_ID())) func_188("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/);
else func_188("BIKERWHBLCKD" /*Join a public session to manage your Business*/);
}elseif(func_67(PLAYER::PLAYER_ID())){
if(_STOPWATCH_IS_INITIALIZED(&uLocal_116) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_116, 10000, true) || !bLocal_113){
if(func_196(PLAYER::PLAYER_ID()) || Global_1949965==true){
bLocal_113=true;
if(!Global_1949965) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
}else{
if(func_203()) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
bLocal_113=false;
_STOPWATCH_DESTROY(&uLocal_116);
_CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/, 0, 0, 0, 0);
}}elseif(bLocal_113){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
if(!func_196(PLAYER::PLAYER_ID())){
bLocal_113=false;
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
}}}elseif(!bParam0 && func_168() < func_167()){
_CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/, 0, 0, 0, 0);
}else{
func_188("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/);
}}
return;
}
BOOL func_196(Player plParam0) // Position - 0x54DE{
return func_197(func_186(plParam0));
}
BOOL func_197(int iParam0) // Position - 0x54F0{
switch (iParam0){
case 190:
case 191:
case 192:
return 1;
default:
}
return 0;
}
BOOL func_198() // Position - 0x5516{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_122)){
if(func_200(PLAYER::PLAYER_ID())) return false;
if(func_240(PLAYER::PLAYER_ID()) || func_199(PLAYER::PLAYER_ID())) return true;
}
return false;
}
BOOL func_199(Player plParam0) // Position - 0x5554{
if(func_208(Global_1853910[plParam0 /*862*/].f_267.f_33, -1)) return 1;
return 0;
}
BOOL func_200(Player plParam0) // Position - 0x5577{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_9(Global_2657589[plParam0 /*466*/].f_321.f_7)==25;
return false;
}


void func_201(BOOL bParam0) // Position - 0x55D7{
if(func_177() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_182() && !Global_1949965){
if(func_189()){
func_188("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
}elseif(!bParam0){
if(func_168() >=func_167()) _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
elseif(func_163(PLAYER::PLAYER_ID())) _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
elseif(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
else _CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
}elseif(func_67(PLAYER::PLAYER_ID())){
func_188("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
}elseif(_STOPWATCH_IS_INITIALIZED(&uLocal_116) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_116, 10000, true) || !bLocal_113){
if(func_244(PLAYER::PLAYER_ID()) || Global_1949965==true){
bLocal_113=true;
if(!Global_1949965) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
}else{
if(func_203()) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
bLocal_113=false;
_STOPWATCH_DESTROY(&uLocal_116);
_CONTEXT_ADD_HELP_TEXT(&iLocal_111, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
}}elseif(bLocal_113){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) func_188("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
if(!func_244(PLAYER::PLAYER_ID())){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
bLocal_113=false;
}}}
return;
}


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x5732{
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
BOOL func_203() // Position - 0x585D{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MP_OFF_LAP_1" /*Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHSECUROBLCK" /*This computer is unavailable during a mission.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKD" /*Join a public session to manage your Business*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/)) return true;
return false;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x5901{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x5914{
int num;
if(*uParam0==-1) return;
num=func_180(*uParam0);
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
BOOL func_206(Player plParam0) // Position - 0x596B{
if(func_208(Global_1853910[plParam0 /*862*/].f_267.f_33, -1) && !IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 1)) return 1;
return 0;
}
BOOL func_207(Player plParam0) // Position - 0x59A4{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_9(Global_2657589[plParam0 /*466*/].f_321.f_7)==1;
return false;
}
BOOL func_208(int iParam0, int iParam1) // Position - 0x59EA{
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
return true;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return true;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return true;
}}
return false;
}
BOOL func_209(int iParam0) // Position - 0x5AC7{
switch (iParam0){
case 87:
case 88:
case 89:
case 90:
return true;
}
return false;
}
BOOL func_210() // Position - 0x5AF6{
return Global_77337;
}
BOOL func_211() // Position - 0x5B02{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), true) && func_187(PLAYER::PLAYER_ID(), false) && func_70(PLAYER::PLAYER_ID())){
if(func_186(PLAYER::PLAYER_ID())==256)if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, false, true, 0)) return true;
if(func_186(PLAYER::PLAYER_ID())==271)if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.8796f, -528.8513f, 75.0839f, -1472.6295f, -526.5934f, 73.3136f, false, true, 0)) return true;
elseif(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.4672f, -3167.9465f, -37.5246f, 1006.9028f, -3171.1516f, -39.6192f, false, true, 0)) return true;
}
return false;
}
BOOL func_212() // Position - 0x5BEE{
return IS_BIT_SET(Global_1950108.f_11, 1);
}
BOOL func_213() // Position - 0x5BFE{
if(func_215(PLAYER::PLAYER_ID())==150 && func_214(PLAYER::PLAYER_PED_ID(), 3084.5112f, -4686.664f, 26.2522f, 50f, true)) return true;
return false;
}
BOOL func_214(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5) // Position - 0x5C3B{
return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5), fParam1) <=fParam4 * fParam4;
}

int func_215(Player plParam0) // Position - 0x5C59{
Player player;
player=plParam0;
if(player !=-1) return Global_1894573[player /*608*/];
return -1;
}

int func_216(Player plParam0) // Position - 0x5C78{
if(func_186(plParam0)==243) return func_217(plParam0);
return -1;
}

int func_217(Player plParam0) // Position - 0x5C95{
if(func_187(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_182;
return -1;
}
BOOL func_218() // Position - 0x5CB8{
return _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
}
BOOL func_219() // Position - 0x5CC8{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148;
}
BOOL func_220() // Position - 0x5CDE{
return Global_75694;
}
BOOL func_221() // Position - 0x5CEA{
return Global_1935689;
}
BOOL func_222() // Position - 0x5CF6{
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, false)==PLAYER::PLAYER_PED_ID()) return true;
return false;
}
BOOL func_223() // Position - 0x5D24{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}
BOOL func_224(int iParam0) // Position - 0x5D3E{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_225(float fParam0, float fParam1, float fParam2) // Position - 0x5D95{
float num;
float num2;
num2=fParam1 - fParam2;
if(num2 < 0f) num2=num2 + 360f;
num=fParam1 + fParam2;
if(num >=360f) num=num - 360f;
if(num > num2)if(fParam0 < num && fParam0 > num2) return 1;
elseif(fParam0 < num || fParam0 > num2) return 1;
return 0;
}
BOOL func_226() // Position - 0x5E0A{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_122))if(func_241(PLAYER::PLAYER_ID())) return 1;
return 0;
}
BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x5E2B{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10==plParam0;
return false;
}
BOOL func_228() // Position - 0x5E60{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_122) && func_8(PLAYER::PLAYER_ID())) return true;
return false;
}
BOOL func_229() // Position - 0x5E83{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_122) && func_207(PLAYER::PLAYER_ID())) return true;
return false;
}
BOOL func_230(Player plParam0) // Position - 0x5EA6{
if(func_208(Global_1853910[plParam0 /*862*/].f_267.f_33, -1)) return 1;
return 0;
}
BOOL func_231() // Position - 0x5EC9{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_122))if(ENTITY::GET_ENTITY_MODEL(obLocal_122)==joaat("ex_prop_monitor_01_ex") || func_241(PLAYER::PLAYER_ID())) return true;
return false;
}


void func_232(int iParam0) // Position - 0x5EFC{
if(func_237()) return;
if(!Global_20383.f_1==1){
if(func_224(0)) func_233(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_233(int iParam0) // Position - 0x5F2F{
if(func_237()) return;
if(Global_20584)if(func_236()) func_235(true, true);
else func_235(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_234()) Global_20383.f_1=3;
return;
}
BOOL func_234() // Position - 0x5FB9{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_235(BOOL bParam0, BOOL bParam1) // Position - 0x5FE0{
if(bParam0){
if(func_224(0)){
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
BOOL func_236() // Position - 0x6054{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_237() // Position - 0x6062{
return IS_BIT_SET(Global_1962996, 19);
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0x6071{
uParam0->f_1=0;
return;
}
BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x607E{
if(millis==-1) return true;
_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >=millis) return true;
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >=millis) return true;
return false;
}
BOOL func_240(Player plParam0) // Position - 0x60DC{
int num;
if(plParam0 !=_INVALID_PLAYER_INDEX()){
if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true)){
if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1){
num=func_9(Global_2657589[plParam0 /*466*/].f_321.f_7);
return num==2 || num==25;
}}}
return false;
}
BOOL func_241(Player plParam0) // Position - 0x6131{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_9(Global_2657589[plParam0 /*466*/].f_321.f_7)==0;
return false;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x6177{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x61BC{
return uParam0->f_1;
}
BOOL func_244(Player plParam0) // Position - 0x61C8{
return func_245(func_186(plParam0));
}
BOOL func_245(int iParam0) // Position - 0x61DA{
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}
BOOL func_246(int iParam0) // Position - 0x6200{
return Global_43257==iParam0;
}


void func_247() // Position - 0x620E{
if(iLocal_111 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_111);
if(func_203()) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
Global_1949965=false;
Global_1949964=0;
return;
}