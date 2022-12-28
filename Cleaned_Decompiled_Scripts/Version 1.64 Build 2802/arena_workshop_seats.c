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
var uLocal_95=3;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=1061158912;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=1061158912;
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
var uLocal_131=1061158912;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=-1;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=-1;
var uLocal_144=-1;
var uLocal_145=-1;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
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
if(func_83()){
while (!func_72()){
SYSTEM::WAIT(0);
func_9(&uLocal_95);
}}
func_1();
return;
}


void func_1() // Position - 0xA5{
func_3(&uLocal_95);
func_2();
return;
}


void func_2() // Position - 0xB7{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_3(var uParam0) // Position - 0xC3{
int localSceneFromNetworkId;
_CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_43.f_5));
func_5(uParam0, true);
if(uParam0->f_43.f_4 > 2){
func_4(-1);
localSceneFromNetworkId=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_43.f_1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId)) NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
}
return;
}


void func_4(int iParam0) // Position - 0x10A{
Global_2694553=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_855=iParam0;
return;
}


void func_5(var uParam0, BOOL bParam1) // Position - 0x128{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MPOF_AC_PC_EXIT" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MPOF_AC_EXIT" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MPOFSEAT_PCEXIT" /*Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MPOFSEAT_EXIT" /*Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_SEAT_PC" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_SEAT" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_PSEAT_PC" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_PSEAT" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_SEAT_PC_BM" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_SEAT_BM" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_PSEAT_PC_BM" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_PSEAT_BM" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_SEAT_PC_TOU" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_SEAT_TOU" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_PSEAT_PC_TOU" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DJ_PSEAT_TOU" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(bParam1 && uParam0->f_43.f_5 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_43.f_5));
uParam0->f_43.f_5=-1;
}
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x224{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x237{
int num;
if(*uParam0==-1) return;
num=func_8(*uParam0);
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

int func_8(int iParam0) // Position - 0x28E{
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


void func_9(var uParam0) // Position - 0x2C9{
var animDict;
var animName;
Vector3 animInitialOffsetPosition;
var animInitialOffsetRotation;
float targetHeading;
float distanceToSlide;
int scriptTaskStatus;
var animInitialOffsetRotation2;
float num;
int localSceneFromNetworkId;
int localSceneFromNetworkId2;
int scriptTaskStatus2;
func_69(uParam0);
func_67(uParam0);
switch (uParam0->f_43.f_4){
case 0:
func_66(&(uParam0->f_43), 11);
func_65(uParam0, 1);
break;
case 1:
Global_1950092=0;
if(func_64(uParam0)){
uParam0->f_43.f_6=MISC::GET_GAME_TIMER();
func_65(uParam0, 2);
}
break;
case 2:
if(func_63(PLAYER::PLAYER_PED_ID(), &uParam0->[uParam0->f_43.f_2 /*14*/]) && func_62(PLAYER::PLAYER_PED_ID(), uParam0->[uParam0->f_43.f_2 /*14*/].f_8.f_3, uParam0->[uParam0->f_43.f_2 /*14*/])){
if(func_60(uParam0) || func_56(uParam0) || !func_55(uParam0)){
func_5(uParam0, true);
func_65(uParam0, 1);
}else{
Global_1950092=1;
if(uParam0->f_43.f_5==-1){
if(MISC::GET_GAME_TIMER() - uParam0->f_43.f_6 > 150) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "MPJAC_SIT" /*Press ~INPUT_CONTEXT~ to sit down.*/, 0, 0, 0, 0);
}elseif(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT)){
_CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_43.f_5));
func_51(uParam0);
func_65(uParam0, 3);
}}}else{
func_5(uParam0, true);
func_65(uParam0, 1);
}
break;
case 3:
func_50(uParam0, &animDict);
STREAMING::REQUEST_ANIM_DICT(&animDict);
if(STREAMING::HAS_ANIM_DICT_LOADED(&animDict)) func_65(uParam0, 4);
break;
case 4:
func_50(uParam0, &animDict);
func_49(uParam0, &animName);
animInitialOffsetPosition={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(&animDict, &animName, func_48(uParam0), func_47(uParam0), 0, 2) 
};
animInitialOffsetRotation={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&animDict, &animName, func_48(uParam0), func_47(uParam0), 0, 2) 
};
targetHeading=animInitialOffsetRotation.f_2;
distanceToSlide=0.05f;
if(uParam0->f_43.f_8==1) distanceToSlide=0.15f;
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), animInitialOffsetPosition, 1f, 500, targetHeading, distanceToSlide);
func_4(uParam0->f_43.f_2);
func_65(uParam0, 5);
break;
case 5:
func_35(uParam0);
func_50(uParam0, &animDict);
func_49(uParam0, &animName);
scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD);
animInitialOffsetRotation2={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&animDict, &animName, func_48(uParam0), func_47(uParam0), 0, 2) 
};
num=animInitialOffsetRotation2.f_2;
if(scriptTaskStatus !=1 && scriptTaskStatus !=0 || func_34(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), num, 5f)){
uParam0->f_43.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, true, false, 1065353216, 0, 1.12f);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &animDict, &animName, 2f, -1000f, 13, 16, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
uParam0->f_43.f_8.f_4=MISC::GET_GAME_TIMER();
func_33(&(uParam0->f_43), 8);
func_65(uParam0, 6);
}
break;
case 6:
if(func_32(&(uParam0->f_43), 10) || func_31()){
func_66(&(uParam0->f_43), 10);
func_30(uParam0);
}
func_35(uParam0);
func_16(uParam0);
localSceneFromNetworkId=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_43.f_1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >=1f){
func_10(uParam0, false);
func_50(uParam0, &animDict);
func_49(uParam0, &animName);
uParam0->f_43.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, true, false, 1065353216, 0, 1.12f);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &animDict, &animName, 4f, -1.5f, 13, 16, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
func_33(&(uParam0->f_43), 8);
func_33(&(uParam0->f_43), 11);
}else{
func_66(&(uParam0->f_43), 8);
}}elseif(!func_32(&(uParam0->f_43), 8)){
func_65(uParam0, 8);
}
break;
case 7:
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
func_65(uParam0, 8);
break;
case 8:
localSceneFromNetworkId2=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_43.f_1);
scriptTaskStatus2=TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_SYNCHRONIZED_SCENE);
if(scriptTaskStatus2==0 || scriptTaskStatus2==1){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId2)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId2) >=0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish")) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out"))){
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
func_4(-1);
func_5(uParam0, true);
func_65(uParam0, 0);
}}}else{
func_4(-1);
func_5(uParam0, true);
func_65(uParam0, 0);
}
break;
}
return;
}


void func_10(var uParam0, BOOL bParam1) // Position - 0x75B{
int randomIntInRange;
int num;
int endRange;
if(bParam1){
num=func_11(uParam0);
if(num !=uParam0->f_43.f_8.f_1)if(num==0) randomIntInRange=11 + uParam0->f_43.f_8.f_1;
else randomIntInRange=6 + num;
else randomIntInRange=uParam0->f_43.f_8.f_2;
num=uParam0->f_43.f_8.f_1;
}elseif(uParam0->f_43.f_8.f_2==5){
num=uParam0->f_43.f_8.f_1;
endRange=3;
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
if(randomIntInRange==uParam0->f_43.f_8.f_3) randomIntInRange=(randomIntInRange + 1) % endRange;
}else{
if(uParam0->f_43.f_8.f_2 > 6){
num=func_11(uParam0);
uParam0->f_43.f_8.f_4=MISC::GET_GAME_TIMER();
}else{
num=uParam0->f_43.f_8.f_1;
}
if(MISC::GET_GAME_TIMER() - uParam0->f_43.f_8.f_4 >=90000){
num=func_11(uParam0);
if(num !=uParam0->f_43.f_8.f_1)if(num==0) randomIntInRange=11 + uParam0->f_43.f_8.f_1;
else randomIntInRange=6 + num;
num=uParam0->f_43.f_8.f_1;
}else{
randomIntInRange=5;
}}
uParam0->f_43.f_8.f_3=uParam0->f_43.f_8.f_2;
uParam0->f_43.f_8.f_2=randomIntInRange;
uParam0->f_43.f_8.f_1=num;
return;
}

int func_11(var uParam0) // Position - 0x894{
int num;
if(uParam0->f_43.f_8==2) return uParam0->f_43.f_8.f_1;
num=(uParam0->f_43.f_8.f_1 + 1) % func_14(uParam0->f_43.f_8);
if(func_12())if(uParam0->f_43.f_8==1)if(num==0 || num==4) num=1;
elseif(uParam0->f_43.f_8==1)if(num==1 || num==2) num=3;
return num;
}
BOOL func_12() // Position - 0x910{
return func_13(PLAYER::PLAYER_ID());
}
BOOL func_13(Player plParam0) // Position - 0x920{
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0))==joaat("MP_F_Freemode_01")) return 1;
return 0;
}

int func_14(int iParam0) // Position - 0x93F{
switch (iParam0){
case 0:
return 3;
case 1:
return func_12() ? 4 :
5;
case 2:
return 5;
default:
}
return 0;
}


var func__15(BOOL bParam0, var uParam1, var uParam2) // Position - 0x976{
if(bParam0) return uParam1;
return uParam2;
}


void func_16(var uParam0) // Position - 0x98D{
Vector3 vector;
float num;
BOOL flag;
eControlAction action;
if(uParam0->f_43.f_4==6){
vector={
PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X), PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y), 0f 
};
num=SYSTEM::VMAG(vector);
if(uParam0->f_43.f_4==6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")) && !func_32(&(uParam0->f_43), 12))if(num >=0.35f && !Global_2766478 && !Global_2766481) func_29(uParam0);
if(PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL)) func_5(uParam0, true);
if(ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt"))){
func_5(uParam0, true);
}elseif(Global_2766478 || Global_2766481){
func_5(uParam0, true);
}elseif(func_28(uParam0)){
func_5(uParam0, true);
}else{
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_ALTERNATE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACKR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACKQ, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_BLOCK, true);
PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
flag=false;
if(func_26(func_27()) && func_25() && func_24(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10, 4) && func_23(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10)) flag=true;
if(!HUD::IS_PAUSE_MENU_ACTIVE() && !func_32(&(uParam0->f_43), 0) && !func_32(&(uParam0->f_43), 4) && !func_22() && !func_20(true) && uParam0->f_43.f_8.f_2 !=3){
if(uParam0->f_43.f_5==-1)if(uParam0->f_43.f_8==1 || uParam0->f_43.f_8==0)if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))if(flag)if(func_17(PLAYER::PLAYER_ID())==3) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC_BM" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
elseif(func_17(PLAYER::PLAYER_ID())==2) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC_TOU" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "MPOF_AC_PC_EXIT" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
elseif(flag)if(func_17(PLAYER::PLAYER_ID())==3) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_SEAT_BM" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
elseif(func_17(PLAYER::PLAYER_ID())==2) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_SEAT_TOU" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_SEAT" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "MPOF_AC_EXIT" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
elseif(uParam0->f_43.f_8==2)if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))if(flag)if(func_17(PLAYER::PLAYER_ID())==3) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC_BM" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
elseif(func_17(PLAYER::PLAYER_ID())==2) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC_TOU" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "MPOFSEAT_PCEXIT" /*Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/, 0, 0, 0, 0);
elseif(flag)if(func_17(PLAYER::PLAYER_ID())==3) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_BM" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
elseif(func_17(PLAYER::PLAYER_ID())==2) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_TOU" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "DJ_PSEAT" /*Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
else _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_43.f_5), 4, "MPOFSEAT_EXIT" /*Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/, 0, 0, 0, 0);
if(uParam0->f_43.f_4==6){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) action=INPUT_SCRIPT_RRIGHT;
else action=INPUT_FRONTEND_RIGHT;
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, action) && !PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X) && !Global_2766481 && !Global_2766478) func_30(uParam0);
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, action) && func_26(func_27()) && func_25() && func_24(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10, 4) && func_23(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10)){
Global_2766481=true;
Global_2766478=true;
}}}}}
func_66(&(uParam0->f_43), 9);
return;
}

int func_17(Player plParam0) // Position - 0xE0C{
int num;
num=-1;
if(func_18(plParam0, 0)) num=0;
elseif(func_18(plParam0, 1)) num=1;
elseif(func_18(plParam0, 2)) num=2;
elseif(func_18(plParam0, 3)) num=3;
return num;
}
BOOL func_18(Player plParam0, int iParam1) // Position - 0xE56{
int num;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return Global_4718592.f_160064.f_6==iParam1;
if(plParam0==_INVALID_PLAYER_INDEX() || iParam1==-1) return false;
num=iParam1 + 20;
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_353.f_1, num);
}
Player _INVALID_PLAYER_INDEX() // Position - 0xEAB{
return -1;
}
BOOL func_20(BOOL bParam0) // Position - 0xEB4{
if(PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(func_21(PLAYER::PLAYER_PED_ID()))if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 25) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 68)) return false;
if(Global_23131.f_130) return false;
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 19) || !bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_CHARACTER_WHEEL)) return true;
if(MISC::IS_PC_VERSION()){
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 166) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 167) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 168) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 169)) return true;
if(!bParam0)if(PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MICHAEL) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_FRANKLIN) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_TREVOR) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MULTIPLAYER)) return true;
}
return false;
}
BOOL func_21(Ped pedParam0) // Position - 0xF9F{
int weaponHash;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(pedParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
if(weaponHash==joaat("WEAPON_SNIPERRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER") || weaponHash==joaat("WEAPON_MARKSMANRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER_MK2")) return true;
}}
return false;
}
BOOL func_22() // Position - 0xFFC{
if(Global_2672505.f_946.f_5==-1) return false;
return true;
}
BOOL func_23(Player plParam0) // Position - 0x1016{
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return IS_BIT_SET(Global_4718592.f_160064.f_14, 4);
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_353.f_1, 1);
}
BOOL func_24(Player plParam0, int iParam1) // Position - 0x1058{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
switch (iParam1){
case 0:
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_310.f_7, 0);
case 1:
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_310.f_7, 1);
case 4:
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_310.f_7, 2);
case 2:
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_310.f_7, 3);
case 3:
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_310.f_7, 4);
case 5:
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_310.f_7, 5);
}
return false;
}
BOOL func_25() // Position - 0x112F{
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1612.2834f, -3021.7915f, -76.18069f, -1612.2198f, -3005.2026f, -74.20517f, 12.75f, false, true, 0)) return 1;
return 0;
}
BOOL func_26(int iParam0) // Position - 0x116D{
if(Global_262145.f_24354) return false;
switch (iParam0){
case 4:
case 5:
case 6:
case 7:
case 8:
return true;
default:
}
return false;
}

int func_27() // Position - 0x11AD{
return Global_2694553;
}
BOOL func_28(var uParam0) // Position - 0x11B9{
return func_32(&(uParam0->f_43), 9);
}


void func_29(var uParam0) // Position - 0x11CB{
var animDict;
var animnName;
if(func_11(uParam0) !=uParam0->f_43.f_8.f_1 && uParam0->f_43.f_8.f_2 < 6 && uParam0->f_43.f_8.f_2 !=3 && uParam0->f_43.f_8.f_2 !=4){
func_10(uParam0, true);
func_50(uParam0, &animDict);
func_49(uParam0, &animnName);
uParam0->f_43.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, true, false, 1065353216, 0, 1.12f);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &animDict, &animnName, 4f, -1.5f, 13, 16, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
func_33(&(uParam0->f_43), 8);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}
return;
}


void func_30(var uParam0) // Position - 0x128C{
var animDict;
uParam0->f_43.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, true, false, 1065353216, 0, 1.12f);
func_50(uParam0, &animDict);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &animDict, "exit", 4f, -4f, 13, 16, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
_CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_43.f_5));
func_65(uParam0, 8);
return;
}
BOOL func_31() // Position - 0x12FE{
return IS_BIT_SET(Global_1950108.f_3, 25);
}
BOOL func_32(var uParam0, int iParam1) // Position - 0x130F{
return IS_BIT_SET(*uParam0, iParam1);
}


void func_33(int* piParam0, int iParam1) // Position - 0x131D{
MISC::SET_BIT(piParam0, iParam1);
return;
}
BOOL func_34(float fParam0, float fParam1, float fParam2) // Position - 0x132D{
float num;
float num2;
num2=fParam1 - fParam2;
if(num2 < 0f) num2=num2 + 360f;
num=fParam1 + fParam2;
if(num >=360f) num=num - 360f;
if(num < 0f) num=num + 360f;
if(num > num2)if(fParam0 < num && fParam0 > num2) return true;
elseif(fParam0 < num || fParam0 > num2) return true;
return false;
}


void func_35(var uParam0) // Position - 0x13B3{
int weaponHash;
switch (uParam0->f_43.f_4){
case 4:
case 8:
func_40(1);
[[fallthrough]];
case 6:
CAM::INVALIDATE_IDLE_CAM();
HUD::HUD_FORCE_WEAPON_WHEEL(false);
HUD::DISPLAY_AMMO_THIS_FRAME(false);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
func_39();
if(WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true) && weaponHash !=joaat("WEAPON_UNARMED")) WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
func_37(true);
func_36();
break;
}
return;
}


void func_36() // Position - 0x143B{
Global_23131.f_6=1;
return;
}


void func_37(BOOL bParam0) // Position - 0x1449{
if(bParam0)if(func_38()) Global_2683862.f_41=1;
else Global_2683862.f_41=0;
return;
}
BOOL func_38() // Position - 0x146E{
return IS_BIT_SET(Global_2683862.f_2, 11);
}


void func_39() // Position - 0x147F{
MISC::SET_BIT(&Global_8254, 4);
return;
}


void func_40(int iParam0) // Position - 0x148F{
if(func_46()) return;
if(!Global_20383.f_1==1){
if(func_45(0)) func_41(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_41(int iParam0) // Position - 0x14C2{
if(func_46()) return;
if(Global_20584)if(func_44()) func_43(true, true);
else func_43(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_42()) Global_20383.f_1=3;
return;
}
BOOL func_42() // Position - 0x154C{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_43(BOOL bParam0, BOOL bParam1) // Position - 0x1573{
if(bParam0){
if(func_45(0)){
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
BOOL func_44() // Position - 0x15E7{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_45(int iParam0) // Position - 0x15F5{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_46() // Position - 0x164C{
return IS_BIT_SET(Global_1962996, 19);
}


Vector3 func__47(var uParam0) // Position - 0x165B{
var unk;
unk={
uParam0->[uParam0->f_43.f_2 /*14*/].f_8.f_3 
};
if(func_12() && uParam0->f_43.f_8==0) unk.f_2=unk.f_2 - 4f;
return unk;
}


Vector3 func__48(var uParam0) // Position - 0x1699{
return uParam0->[uParam0->f_43.f_2 /*14*/].f_8;
}


void func_49(var uParam0, char* sParam1) // Position - 0x16AF{
if(uParam0->f_43.f_8==1){
if(func_12()){
switch (uParam0->f_43.f_8.f_2){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_A", 16);
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_B", 16);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_C", 16);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ENTER", 16);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BASE", 16);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam1, "EXIT", 16);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D_TO_B", 16);
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(sParam1, "B_TO_C", 16);
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(sParam1, "C_TO_D", 16);
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D_TO_B", 16);
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(sParam1, "B_TO_A", 16);
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(sParam1, "C_TO_A", 16);
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D_TO_B", 16);
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(sParam1, "E_TO_A", 16);
break;
default:
TEXT_LABEL_ASSIGN_STRING(sParam1, "invalid_clip", 16);
break;
}}else{
switch (uParam0->f_43.f_8.f_2){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_A", 16);
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_B", 16);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_C", 16);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ENTER", 16);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BASE", 16);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam1, "EXIT", 16);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(sParam1, "A_TO_B", 16);
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(sParam1, "B_TO_C", 16);
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(sParam1, "A_TO_D", 16);
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D_TO_E", 16);
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(sParam1, "B_TO_E", 16);
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(sParam1, "C_TO_A", 16);
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D_TO_A", 16);
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(sParam1, "E_TO_A", 16);
break;
default:
TEXT_LABEL_ASSIGN_STRING(sParam1, "invalid_clip", 16);
break;
}}}else{
switch (uParam0->f_43.f_8.f_2){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_A", 16);
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_B", 16);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(sParam1, "IDLE_C", 16);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ENTER", 16);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BASE", 16);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam1, "EXIT", 16);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(sParam1, "A_TO_B", 16);
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(sParam1, "B_TO_C", 16);
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(sParam1, "C_TO_D", 16);
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D_TO_E", 16);
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(sParam1, "B_TO_E", 16);
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(sParam1, "C_TO_A", 16);
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D_TO_A", 16);
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(sParam1, "E_TO_A", 16);
break;
default:
TEXT_LABEL_ASSIGN_STRING(sParam1, "invalid_clip", 16);
break;
}}
return;
}


void func_50(var uParam0, char* sParam1) // Position - 0x19D1{
switch (uParam0->f_43.f_8){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
break;
}
if(func_12()) TEXT_LABEL_APPEND_STRING(sParam1, "@FEMALE", 64);
else TEXT_LABEL_APPEND_STRING(sParam1, "@MALE", 64);
switch (uParam0->f_43.f_8){
case 1:
if(func_12()){
switch (uParam0->f_43.f_8.f_1){
case 0:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_B@BASE@", 64);
break;
case 1:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_B@BASE@", 64);
break;
case 2:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_C@BASE@", 64);
break;
case 3:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_D@BASE@", 64);
break;
case 4:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_B@BASE@", 64);
break;
}}else{
switch (uParam0->f_43.f_8.f_1){
case 0:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_A@BASE@", 64);
break;
case 1:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_B@BASE@", 64);
break;
case 2:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_C@BASE@", 64);
break;
case 3:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_D@BASE@", 64);
break;
case 4:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_E@BASE@", 64);
break;
}}
break;
case 0:
switch (uParam0->f_43.f_8.f_1){
case 0:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_A@BASE@", 64);
break;
case 1:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_B@BASE@", 64);
break;
case 2:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_C@BASE@", 64);
break;
case 3:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_D@BASE@", 64);
break;
case 4:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_E@BASE@", 64);
break;
}
break;
case 2:
switch (uParam0->f_43.f_8.f_1){
case 0:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_A@", 64);
break;
case 1:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_B@", 64);
break;
case 2:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_C@", 64);
break;
case 3:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_D@", 64);
break;
case 4:
TEXT_LABEL_APPEND_STRING(sParam1, "@VAR_E@", 64);
break;
}
break;
}
return;
}


void func_51(var uParam0) // Position - 0x1BE9{
uParam0->f_43.f_8=func_53(uParam0->[uParam0->f_43.f_2 /*14*/]);
uParam0->f_43.f_8.f_1=func_52(uParam0);
uParam0->f_43.f_8.f_2=3;
uParam0->f_43.f_8.f_3=3;
return;
}

int func_52(var uParam0) // Position - 0x1C25{
int randomIntInRange;
switch (uParam0->f_43.f_8){
case 2:
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
if(randomIntInRange >=1) randomIntInRange=randomIntInRange + 1;
break;
default:
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, func_14(uParam0->f_43.f_8));
}
if(uParam0->f_43.f_8==1)if(func_12())if(randomIntInRange==0 || randomIntInRange==4) randomIntInRange=1;
elseif(randomIntInRange==1 || randomIntInRange==2) randomIntInRange=3;
return randomIntInRange;
}

int func_53(int iParam0) // Position - 0x1CA4{
switch (iParam0){
case 1:
return 1;
case 2:
return 0;
case 3:
return 2;
default:
}
return 0;
}


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x1CD2{
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
BOOL func_55(var uParam0) // Position - 0x1DFD{
uParam0->f_43.f_13(!func_32(&(uParam0->f_43), 5), &uParam0->[uParam0->f_43.f_2 /*14*/], uParam0->f_43.f_2);
return StackVal || StackVal;
}
BOOL func_56(var uParam0) // Position - 0x1E2C{
int i;
Player playerIndex;
for (i=0;
i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
i=i + 1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i))){
playerIndex=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(i));
if(playerIndex !=PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(playerIndex, true, true))if(func_63(PLAYER::GET_PLAYER_PED(playerIndex), &uParam0->[uParam0->f_43.f_2 /*14*/]) || func_58(playerIndex)==uParam0->f_43.f_2) return 1;
}}
if(func_57(uParam0)) return 1;
return 0;
}
BOOL func_57(var uParam0) // Position - 0x1EB5{
var sizeAndPeds;
int i;
sizeAndPeds=10;
PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
for (i=0;
i < 10;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i]) && !PED::IS_PED_INJURED(sizeAndPeds[i]) && ENTITY::IS_ENTITY_VISIBLE(sizeAndPeds[i]) && func_63(sizeAndPeds[i], &uParam0->[uParam0->f_43.f_2 /*14*/]) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(sizeAndPeds[i], false), (uParam0->[uParam0->f_43.f_2 /*14*/].f_1 + uParam0->[uParam0->f_43.f_2 /*14*/].f_1.f_3) /{
2f, 2f, 2f 
}
) < 1f) return true;
}
return false;
}

int func_58(Player plParam0) // Position - 0x1F65{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1853910[plParam0 /*862*/].f_855;
return -1;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1F86{
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
BOOL func_60(var uParam0) // Position - 0x1FE6{
if(func_61(PLAYER::PLAYER_ID())) return true;
return uParam0->f_43 & 31 > 0;
}
BOOL func_61(Player plParam0) // Position - 0x2006{
return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_3, 13);
}
BOOL func_62(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x201F{
if(ENTITY::DOES_ENTITY_EXIST(pedParam0))if(iParam4==3)if(func_34(ENTITY::GET_ENTITY_HEADING(pedParam0), uParam1.f_2 - 180f, 45f)) return 1;
elseif(func_34(ENTITY::GET_ENTITY_HEADING(pedParam0), uParam1.f_2, 45f)) return 1;
return 0;
}
BOOL func_63(Ped pedParam0, var uParam1) // Position - 0x2074{
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}
BOOL func_64(var uParam0) // Position - 0x2099{
int i;
for (i=0;
i < 1;
i=i + 1){
if(func_63(PLAYER::PLAYER_PED_ID(), &uParam0->[uParam0->f_43.f_2 /*14*/]) && func_62(PLAYER::PLAYER_PED_ID(), uParam0->[uParam0->f_43.f_2 /*14*/].f_8.f_3, uParam0->[uParam0->f_43.f_2 /*14*/])) return true;
else uParam0->f_43.f_2=(uParam0->f_43.f_2 + 1) % 3;
}
return false;
}


void func_65(var uParam0, int iParam1) // Position - 0x2107{
uParam0->f_43.f_4=iParam1;
return;
}


void func_66(int* piParam0, int iParam1) // Position - 0x2117{
MISC::CLEAR_BIT(piParam0, iParam1);
return;
}


void func_67(var uParam0) // Position - 0x2127{
if(uParam0->f_43.f_4==6){}elseif(uParam0->f_43.f_4 > 4){
CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_68());
uParam0->f_43.f_7=MISC::GET_FRAME_COUNT();
}elseif(MISC::GET_FRAME_COUNT() - uParam0->f_43.f_7 < 5){
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_68());
}
return;
}


float func_68() // Position - 0x2182{
return 0.13f;
}


void func_69(var uParam0) // Position - 0x218F{
func_70(&(uParam0->f_43), 4, func_71());
func_70(&(uParam0->f_43), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
func_70(&(uParam0->f_43), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
func_70(&(uParam0->f_43), 0, func_45(0));
func_70(&(uParam0->f_43), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
return;
}


void func_70(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x21E7{
int offset;
offset=iParam1;
if(bParam2) MISC::SET_BIT(piParam0, offset);
else MISC::CLEAR_BIT(piParam0, offset);
return;
}
BOOL func_71() // Position - 0x220B{
return Global_75693;
}
BOOL func_72() // Position - 0x2217{
if(CAM::IS_SCREEN_FADED_OUT() && !func_82() && !Global_2766478) return true;
if(!func_81()) return true;
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()) return true;
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10==_INVALID_PLAYER_INDEX()) return true;
return false;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x2271{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_80()) return true;
if(Global_2696915) return true;
if(func_79()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_77()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x22F5{
switch (func_76()){
case 0:
return func_75();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_75() // Position - 0x2328{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_76() // Position - 0x234C{
return Global_32163;
}
BOOL func_77() // Position - 0x2357{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x2366{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_79() // Position - 0x237D{
return Global_2694524;
}
BOOL func_80() // Position - 0x2389{
return Global_2683862.f_693;
}
BOOL func_81() // Position - 0x2398{
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.51935f, 5163.8555f, -86.59737f, 211.7083f, 5163.8794f, -83.6007f, 6.25f, false, true, 0)) return true;
return false;
}
BOOL func_82() // Position - 0x23D6{
return IS_BIT_SET(Global_1950108.f_4, 10);
}
BOOL func_83() // Position - 0x23E7{
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()){
if(NETWORK::NETWORK_IS_SCRIPT_ACTIVE("arena_workshop_seats", Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10, true, 0)) return false;
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10);
_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
func_91();
func_84();
return true;
}
return false;
}


void func_84() // Position - 0x245B{
func_85(0, &uLocal_95, 0, 2);
func_85(1, &uLocal_95, 1, 1);
func_85(2, &uLocal_95, 2, 2);
return;
}


void func_85(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x247E{
var unk;
float num;
func_90(iParam0, &unk, &num);
uParam1->[iParam2 /*14*/]=iParam3;
uParam1->[iParam2 /*14*/].f_8={
unk 
};
uParam1->[iParam2 /*14*/].f_8.f_3={
0f, 0f, num 
};
uParam1->[iParam2 /*14*/].f_1={
func_87(func_89(), func_88(iParam3, num)) + unk 
};
uParam1->[iParam2 /*14*/].f_1.f_3={
func_87(func_86(), func_88(iParam3, num)) + unk 
};
uParam1->[iParam2 /*14*/].f_1.f_6=1.25f;
return;
}


Vector3 func__86() // Position - 0x2505{
return 0.5f, -0.5f, 2f;
}


Vector3 func__87(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x2518{
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


float func_88(int iParam0, float fParam1) // Position - 0x255C{
switch (iParam0){
case 1:
case 2:
return fParam1;
case 3:
return fParam1 - 180f;
default:
}
return fParam1;
}


Vector3 func__89() // Position - 0x258F{
return -0.5f, -0.5f, 0f;
}


void func_90(int iParam0, var uParam1, var uParam2) // Position - 0x25A2{
if(func_12()){
switch (iParam0){
case 0:
*uParam1={
209.185f, 5166.375f, -86.6007f 
};
*uParam2=0f;
break;
case 1:
*uParam1={
210.085f, 5166.375f, -86.6007f 
};
*uParam2=0f;
break;
case 2:
*uParam1={
210.897f, 5166.375f, -86.6007f 
};
*uParam2=0f;
break;
}}else{
switch (iParam0){
case 0:
*uParam1={
209.185f, 5166.375f, -86.6007f 
};
*uParam2=0f;
break;
case 1:
*uParam1={
210.085f, 5166.375f, -86.6007f 
};
*uParam2=0f;
break;
case 2:
*uParam1={
210.897f, 5166.375f, -86.6007f 
};
*uParam2=0f;
break;
}}
return;
}


void func_91() // Position - 0x2682{
return;
}
int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x268A{
int i;
for (i=NETWORK::NETWORK_GET_SCRIPT_STATUS();
i !=2;
i=NETWORK::NETWORK_GET_SCRIPT_STATUS()){
if(i==3 || i==4 || i==5 || i==6)if(!bNoTerminate) func_2();
else return 0;
if(!func_93(false)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_2();
else return 0;
if(func_80())if(!bNoTerminate) func_2();
else return 0;
if(_DOES_EVENT_OF_TYPE_EXIST(157))if(!bNoTerminate) func_2();
else return 0;
}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bNoTerminate) func_2();
else return 0;
}}
SYSTEM::WAIT(0);
}
if(iParam1 > -1) Global_1574666=i;
if(iParam0==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_2();
else return 0;
elseif(!NETWORK::NETWORK_IS_IN_SESSION())if(!bNoTerminate) func_2();
else return 0;
return 1;
}
BOOL func_93(BOOL bParam0) // Position - 0x27A0{
bParam0;
return Global_1575035;
}