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
var uLocal_95=4;
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
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=1061158912;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=-1;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=-1;
var uLocal_158=-1;
var uLocal_159=-1;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
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
if(func_70()){
while (!func_59()){
func_11(&uLocal_95);
SYSTEM::WAIT(0);
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
_CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_57.f_5));
func_4(uParam0, true);
return;
}


void func_4(var uParam0, BOOL bParam1) // Position - 0xDC{
if(func_5(uParam0)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(bParam1) _CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_57.f_5));
return;
}
BOOL func_5(var uParam0) // Position - 0x101{
var unk;
var unk5;
func_7(uParam0, uParam0->f_57.f_2, &unk);
func_7(uParam0, uParam0->f_57.f_2, &unk5);
return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk5);
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x137{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_7(var uParam0, int iParam1, char* sParam2) // Position - 0x14A{
if(func_8(&(uParam0->f_57), 7)) uParam0->f_57.f_14(&uParam0->[iParam1 /*14*/], iParam1, sParam2);
else TEXT_LABEL_ASSIGN_STRING(sParam2, "MPJAC_EXIT" /*Press ~INPUT_CONTEXT~ to stand up.*/, 16);
return;
}
BOOL func_8(var uParam0, int iParam1) // Position - 0x179{
return IS_BIT_SET(*uParam0, iParam1);
}


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x187{
int num;
if(*uParam0==-1) return;
num=func_10(*uParam0);
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

int func_10(int iParam0) // Position - 0x1DE{
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


void func_11(var uParam0) // Position - 0x219{
var animDict;
var animName;
int num;
Vector3 animInitialOffsetPosition;
var animInitialOffsetRotation;
float targetHeading;
int scriptTaskStatus;
int localSceneFromNetworkId;
int localSceneFromNetworkId2;
func_56(uParam0);
func_54(uParam0);
num.f_1.f_6=1061158912;
num={
uParam0->[uParam0->f_57.f_2 /*14*/] 
};
switch (uParam0->f_57.f_4){
case 0:
func_53(&(uParam0->f_57), 11);
func_52(uParam0, 1);
break;
case 1:
if(func_51(uParam0)){
uParam0->f_57.f_6=MISC::GET_GAME_TIMER();
func_52(uParam0, 2);
}
break;
case 2:
if(func_50(PLAYER::PLAYER_PED_ID(), &uParam0->[uParam0->f_57.f_2 /*14*/])){
if(func_49(uParam0) || func_47(uParam0) || !func_46(uParam0)){
func_4(uParam0, true);
func_52(uParam0, 1);
}elseif(uParam0->f_57.f_5==-1){
if(MISC::GET_GAME_TIMER() - uParam0->f_57.f_6 > 150) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_57.f_5), 4, "MPJAC_SIT" /*Press ~INPUT_CONTEXT~ to sit down.*/, 0, 0, 0, 0);
}elseif(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT)){
_CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_57.f_5));
func_42(uParam0);
func_52(uParam0, 3);
}}else{
func_4(uParam0, true);
func_52(uParam0, 1);
}
break;
case 3:
func_41(uParam0, &animDict);
STREAMING::REQUEST_ANIM_DICT(&animDict);
if(STREAMING::HAS_ANIM_DICT_LOADED(&animDict)) func_52(uParam0, 4);
break;
case 4:
func_41(uParam0, &animDict);
func_40(uParam0, &animName);
if(num !=3){
animInitialOffsetPosition={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(&animDict, &animName, func_39(uParam0), func_38(uParam0), 0, 2) 
};
animInitialOffsetRotation={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&animDict, &animName, func_39(uParam0), func_38(uParam0), 0, 2) 
};
targetHeading=animInitialOffsetRotation.f_2;
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), animInitialOffsetPosition, 1f, 500, targetHeading, 0.15f);
}
func_52(uParam0, 5);
break;
case 5:
func_26(uParam0);
func_41(uParam0, &animDict);
func_40(uParam0, &animName);
if(num==3) scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_ACHIEVE_HEADING);
else scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD);
if(scriptTaskStatus !=1 && scriptTaskStatus !=0){
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, true, false, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &animDict, &animName, 2f, -1000f, 13, 16, 1.5f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
uParam0->f_57.f_8.f_4=MISC::GET_GAME_TIMER();
func_25(&(uParam0->f_57), 8);
func_52(uParam0, 6);
}
break;
case 6:
if(func_8(&(uParam0->f_57), 10)){
func_53(&(uParam0->f_57), 10);
func_24(uParam0);
}
func_26(uParam0);
func_18(uParam0);
localSceneFromNetworkId=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_57.f_1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >=1f){
func_12(uParam0, false);
func_41(uParam0, &animDict);
func_40(uParam0, &animName);
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, true, false, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &animDict, &animName, 4f, -1.5f, 13, 16, 1000f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_25(&(uParam0->f_57), 8);
func_25(&(uParam0->f_57), 11);
}else{
func_53(&(uParam0->f_57), 8);
}}elseif(!func_8(&(uParam0->f_57), 8)){
func_52(uParam0, 8);
}
break;
case 7:
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_52(uParam0, 8);
break;
case 8:
localSceneFromNetworkId2=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_57.f_1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId2)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId2) >=1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish")) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out"))){
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_4(uParam0, true);
func_52(uParam0, 0);
}}else{
func_4(uParam0, true);
func_52(uParam0, 0);
}
break;
}
return;
}


void func_12(var uParam0, BOOL bParam1) // Position - 0x62F{
int randomIntInRange;
int num;
int endRange;
if(bParam1){
num=func_13(uParam0);
if(num !=uParam0->f_57.f_8.f_1)if(num==0) randomIntInRange=11 + uParam0->f_57.f_8.f_1;
else randomIntInRange=6 + num;
else randomIntInRange=uParam0->f_57.f_8.f_2;
num=uParam0->f_57.f_8.f_1;
}elseif(uParam0->f_57.f_8.f_2==5){
num=uParam0->f_57.f_8.f_1;
endRange=3;
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
if(randomIntInRange==uParam0->f_57.f_8.f_3) randomIntInRange=(randomIntInRange + 1) % endRange;
}else{
if(uParam0->f_57.f_8.f_2 > 6){
num=func_13(uParam0);
uParam0->f_57.f_8.f_4=MISC::GET_GAME_TIMER();
}else{
num=uParam0->f_57.f_8.f_1;
}
if(MISC::GET_GAME_TIMER() - uParam0->f_57.f_8.f_4 >=90000){
num=func_13(uParam0);
if(num !=uParam0->f_57.f_8.f_1)if(num==0) randomIntInRange=11 + uParam0->f_57.f_8.f_1;
else randomIntInRange=6 + num;
num=uParam0->f_57.f_8.f_1;
}else{
randomIntInRange=5;
}}
uParam0->f_57.f_8.f_3=uParam0->f_57.f_8.f_2;
uParam0->f_57.f_8.f_2=randomIntInRange;
uParam0->f_57.f_8.f_1=num;
return;
}

int func_13(var uParam0) // Position - 0x768{
if(uParam0->f_57.f_8==2) return uParam0->f_57.f_8.f_1;
return (uParam0->f_57.f_8.f_1 + 1) % func_14(uParam0->f_57.f_8);
}

int func_14(int iParam0) // Position - 0x79A{
switch (iParam0){
case 0:
return 3;
case 1:
return func_16() ? 4 :
5;
case 2:
return 5;
default:
}
return 0;
}


var func__15(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7D1{
if(bParam0) return uParam1;
return uParam2;
}
BOOL func_16() // Position - 0x7E8{
return func_17(PLAYER::PLAYER_ID());
}
BOOL func_17(Player plParam0) // Position - 0x7F8{
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0))==joaat("MP_F_Freemode_01")) return 1;
return 0;
}


void func_18(var uParam0) // Position - 0x817{
Vector3 vector;
float num;
if(uParam0->f_57.f_4==6){
vector={
PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X), PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y), 0f 
};
num=SYSTEM::VMAG(vector);
if(uParam0->f_57.f_4==6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")) && !func_8(&(uParam0->f_57), 12))if(num >=0.35f) func_23(uParam0);
if(ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt"))){
func_4(uParam0, true);
}elseif(func_22(uParam0)){
func_4(uParam0, true);
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
if(!HUD::IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_57), 0) && !func_8(&(uParam0->f_57), 4) && !func_21() && !func_19(true) && uParam0->f_57.f_8.f_2 !=3){
if(uParam0->f_57.f_5==-1) _CONTEXT_ADD_HELP_TEXT(&(uParam0->f_57.f_5), 4, "MPJAC_EXIT" /*Press ~INPUT_CONTEXT~ to stand up.*/, 0, 0, 0, 0);
if(uParam0->f_57.f_4==6)if(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT)) func_24(uParam0);
}}}
func_53(&(uParam0->f_57), 9);
return;
}
BOOL func_19(BOOL bParam0) // Position - 0x98B{
if(PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(func_20(PLAYER::PLAYER_PED_ID()))if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 25) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 68)) return false;
if(Global_23131.f_130) return false;
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 19) || !bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_CHARACTER_WHEEL)) return true;
if(MISC::IS_PC_VERSION()){
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 166) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 167) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 168) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 169)) return true;
if(!bParam0)if(PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MICHAEL) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_FRANKLIN) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_TREVOR) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MULTIPLAYER)) return true;
}
return false;
}
BOOL func_20(Ped pedParam0) // Position - 0xA76{
int weaponHash;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(pedParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
if(weaponHash==joaat("WEAPON_SNIPERRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER") || weaponHash==joaat("WEAPON_MARKSMANRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER_MK2")) return true;
}}
return false;
}
BOOL func_21() // Position - 0xAD3{
if(Global_2672505.f_946.f_5==-1) return false;
return true;
}
BOOL func_22(var uParam0) // Position - 0xAED{
return func_8(&(uParam0->f_57), 9);
}


void func_23(var uParam0) // Position - 0xAFF{
var animDict;
var animnName;
if(func_13(uParam0) !=uParam0->f_57.f_8.f_1 && uParam0->f_57.f_8.f_2 < 6 && uParam0->f_57.f_8.f_2 !=3 && uParam0->f_57.f_8.f_2 !=4){
func_12(uParam0, true);
func_41(uParam0, &animDict);
func_40(uParam0, &animnName);
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, true, false, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &animDict, &animnName, 4f, -1.5f, 13, 16, 1000f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_25(&(uParam0->f_57), 8);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}
return;
}


void func_24(var uParam0) // Position - 0xBC0{
var animDict;
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, true, false, 1065353216, 0, 1065353216);
func_41(uParam0, &animDict);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &animDict, "exit", 4f, -4f, 13, 16, 1000f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
_CONTEXT_REMOVE_HELP_TEXT(&(uParam0->f_57.f_5));
func_52(uParam0, 8);
return;
}


void func_25(int* piParam0, int iParam1) // Position - 0xC32{
MISC::SET_BIT(piParam0, iParam1);
return;
}


void func_26(var uParam0) // Position - 0xC42{
int weaponHash;
switch (uParam0->f_57.f_4){
case 4:
case 8:
func_31(1);
[[fallthrough]];
case 6:
CAM::INVALIDATE_IDLE_CAM();
HUD::HUD_FORCE_WEAPON_WHEEL(false);
HUD::DISPLAY_AMMO_THIS_FRAME(false);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
func_30();
if(WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true) && weaponHash !=joaat("WEAPON_UNARMED")) WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
func_28(true);
func_27();
break;
}
return;
}


void func_27() // Position - 0xCCA{
Global_23131.f_6=1;
return;
}


void func_28(BOOL bParam0) // Position - 0xCD8{
if(bParam0)if(func_29()) Global_2683862.f_41=1;
else Global_2683862.f_41=0;
return;
}
BOOL func_29() // Position - 0xCFD{
return IS_BIT_SET(Global_2683862.f_2, 11);
}


void func_30() // Position - 0xD0E{
MISC::SET_BIT(&Global_8254, 4);
return;
}


void func_31(int iParam0) // Position - 0xD1E{
if(func_37()) return;
if(!Global_20383.f_1==1){
if(func_36(0)) func_32(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_32(int iParam0) // Position - 0xD51{
if(func_37()) return;
if(Global_20584)if(func_35()) func_34(true, true);
else func_34(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_33()) Global_20383.f_1=3;
return;
}
BOOL func_33() // Position - 0xDDB{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_34(BOOL bParam0, BOOL bParam1) // Position - 0xE02{
if(bParam0){
if(func_36(0)){
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
BOOL func_35() // Position - 0xE76{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_36(int iParam0) // Position - 0xE84{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_37() // Position - 0xEDB{
return IS_BIT_SET(Global_1962996, 19);
}


Vector3 func__38(var uParam0) // Position - 0xEEA{
var unk;
unk={
uParam0->[uParam0->f_57.f_2 /*14*/].f_8.f_3 
};
if(func_16() && uParam0->f_57.f_8==0) unk.f_2=unk.f_2 - 4f;
return unk;
}


Vector3 func__39(var uParam0) // Position - 0xF28{
return uParam0->[uParam0->f_57.f_2 /*14*/].f_8;
}


void func_40(var uParam0, char* sParam1) // Position - 0xF3E{
switch (uParam0->f_57.f_8.f_2){
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
}
return;
}


void func_41(var uParam0, char* sParam1) // Position - 0x103A{
switch (uParam0->f_57.f_8){
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
if(func_16()) TEXT_LABEL_APPEND_STRING(sParam1, "@FEMALE", 64);
else TEXT_LABEL_APPEND_STRING(sParam1, "@MALE", 64);
switch (uParam0->f_57.f_8){
case 1:
case 0:
switch (uParam0->f_57.f_8.f_1){
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
switch (uParam0->f_57.f_8.f_1){
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


void func_42(var uParam0) // Position - 0x117A{
uParam0->f_57.f_8=func_44(uParam0->[uParam0->f_57.f_2 /*14*/]);
uParam0->f_57.f_8.f_1=func_43(uParam0);
uParam0->f_57.f_8.f_2=3;
uParam0->f_57.f_8.f_3=3;
return;
}

int func_43(var uParam0) // Position - 0x11B6{
int randomIntInRange;
switch (uParam0->f_57.f_8){
case 2:
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
if(randomIntInRange >=1) randomIntInRange=randomIntInRange + 1;
break;
default:
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, func_14(uParam0->f_57.f_8));
}
return randomIntInRange;
}

int func_44(int iParam0) // Position - 0x11F9{
if(iParam0 >=11) return 0;
elseif(iParam0 >=9) return 0;
elseif(iParam0 >=7) return 0;
elseif(iParam0 >=4) return 0;
elseif(iParam0 > 1) return 2;
return 0;
}


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x1242{
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
BOOL func_46(var uParam0) // Position - 0x136D{
uParam0->f_57.f_13(!func_8(&(uParam0->f_57), 5), &uParam0->[uParam0->f_57.f_2 /*14*/], uParam0->f_57.f_2);
return StackVal || StackVal;
}
BOOL func_47(var uParam0) // Position - 0x139C{
int i;
Player playerIndex;
for (i=0;
i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
i=i + 1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i))){
playerIndex=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(i));
if(playerIndex !=PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(playerIndex, true, true) && func_50(PLAYER::GET_PLAYER_PED(playerIndex), &uParam0->[uParam0->f_57.f_2 /*14*/])) return 1;
}}
return 0;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1407{
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
BOOL func_49(var uParam0) // Position - 0x1467{
return uParam0->f_57 & 31 > 0;
}
BOOL func_50(Ped pedParam0, var uParam1) // Position - 0x1478{
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}
BOOL func_51(var uParam0) // Position - 0x149D{
int i;
for (i=0;
i < 1;
i=i + 1){
if(func_50(PLAYER::PLAYER_PED_ID(), &uParam0->[uParam0->f_57.f_2 /*14*/])) return true;
else uParam0->f_57.f_2=(uParam0->f_57.f_2 + 1) % 4;
}
return false;
}


void func_52(var uParam0, int iParam1) // Position - 0x14E4{
uParam0->f_57.f_4=iParam1;
return;
}


void func_53(int* piParam0, int iParam1) // Position - 0x14F4{
MISC::CLEAR_BIT(piParam0, iParam1);
return;
}


void func_54(var uParam0) // Position - 0x1504{
if(uParam0->f_57.f_4==6){}elseif(uParam0->f_57.f_4 > 4){
CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
uParam0->f_57.f_7=MISC::GET_FRAME_COUNT();
}elseif(uParam0->f_57.f_4 > 1){
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
uParam0->f_57.f_7=MISC::GET_FRAME_COUNT();
}elseif(MISC::GET_FRAME_COUNT() - uParam0->f_57.f_7 < 5){
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
}
return;
}


float func_55(var uParam0) // Position - 0x1588{
switch (uParam0->[uParam0->f_57.f_2 /*14*/]){
case 12:
case 10:
case 6:
return 0.24f;
case 2:
return 0.16f;
case 3:
return 0.18f;
default:
}
return 0.13f;
}


void func_56(var uParam0) // Position - 0x15DA{
func_57(&(uParam0->f_57), 4, func_58());
func_57(&(uParam0->f_57), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
func_57(&(uParam0->f_57), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
func_57(&(uParam0->f_57), 0, func_36(0));
func_57(&(uParam0->f_57), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
return;
}


void func_57(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x1632{
int offset;
offset=iParam1;
if(bParam2) MISC::SET_BIT(piParam0, offset);
else MISC::CLEAR_BIT(piParam0, offset);
return;
}
BOOL func_58() // Position - 0x1656{
return Global_75693;
}
BOOL func_59() // Position - 0x1662{
if(!func_69(PLAYER::PLAYER_PED_ID())) return true;
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()) return true;
if(Global_1853753==_INVALID_PLAYER_INDEX()) return true;
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0x1695{
return -1;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x169E{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_68()) return true;
if(Global_2696915) return true;
if(func_67()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_65()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1722{
switch (func_64()){
case 0:
return func_63();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_63() // Position - 0x1755{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_64() // Position - 0x1779{
return Global_32163;
}
BOOL func_65() // Position - 0x1784{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x1793{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_67() // Position - 0x17AA{
return Global_2694524;
}
BOOL func_68() // Position - 0x17B6{
return Global_2683862.f_693;
}
BOOL func_69(Ped pedParam0) // Position - 0x17C5{
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedParam0, 355.60925f, 4832.486f, -59.99951f, 338.4763f, 4841.36f, -56.999474f, 15f, false, true, 0);
}
BOOL func_70() // Position - 0x17F9{
if(Global_1853753 !=_INVALID_PLAYER_INDEX()){
if(NETWORK::NETWORK_IS_SCRIPT_ACTIVE("base_corridor_seats", Global_1853753, true, 0)) return false;
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Global_1853753);
_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
func_71();
return true;
}
return false;
}


void func_71() // Position - 0x1845{
var unk;
unk=2;
unk[0]=0;
unk[1]=1;
func_72(5, &uLocal_95, &unk);
unk[0]=2;
unk[1]=3;
func_72(6, &uLocal_95, &unk);
return;
}


void func_72(int iParam0, var uParam1, var uParam2) // Position - 0x187C{
var unk;
float num;
int i;
func_79(iParam0, &unk, &num);
for (i=0;
i < 2;
i=i + 1){
uParam1->[uParam2->[i] /*14*/]=2;
uParam1->[uParam2->[i] /*14*/].f_8={
func_75(func_76(i), num) + unk 
};
uParam1->[uParam2->[i] /*14*/].f_8.f_3={
0f, 0f, num + 174f 
};
uParam1->[uParam2->[i] /*14*/].f_1={
func_75(func_74(i), num) + unk 
};
uParam1->[uParam2->[i] /*14*/].f_1.f_3={
func_75(func_73(i), num) + unk 
};
uParam1->[uParam2->[i] /*14*/].f_1.f_6=1.42f;
}
return;
}


Vector3 func__73(int iParam0) // Position - 0x1937{
switch (iParam0){
case 0:
return -1.42f / 2f, (0.87f / 2f) - 1.74f, 2f;
case 1:
return 1.42f / 2f, (0.87f / 2f) - 1.74f, 2f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__74(int iParam0) // Position - 0x1985{
switch (iParam0){
case 0:
return -1.42f / 2f, 0.87f / 2f, 0f;
case 1:
return 1.42f / 2f, 0.87f / 2f, 0f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__75(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x19C7{
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


Vector3 func__76(int iParam0) // Position - 0x1A0B{
switch (iParam0){
case 0:
return{
-59.42f, 4832.75f, 391.558f 
}
- func_77();
case 1:
return{
-59.42f, 4832.75f, 392.858f 
}
- func_77();
default:
}
return 0f, 0f, 0f;
}


Vector3 func__77() // Position - 0x1A57{
return func_78() +{
0f, -8.946f, 47.215f 
};
}


Vector3 func__78() // Position - 0x1A6F{
return 345.0041f, 4842.001f, -59.9997f;
}


void func_79(int iParam0, var uParam1, var uParam2) // Position - 0x1A86{
switch (iParam0){
case 0:
*uParam1={
116.985f, -16.656f, 5f 
};
*uParam2=81f;
break;
case 1:
*uParam1={
148.822f, -8.126f, 5f 
};
*uParam2=-51f;
break;
case 2:
*uParam1={
41.997f, -8.832f, 0f 
};
*uParam2=-2.5f;
break;
case 3:
*uParam1={
47.215f, -8.946f, 0f 
};
*uParam2=0f;
break;
case 4:
*uParam1={
68.813f, -8.955f, 0f 
};
*uParam2=0f;
break;
case 5:
*uParam1={
0.521f, 3.241f, 0f 
};
*uParam2=-27f;
break;
case 6:
*uParam1={
11.391f, -4.387f, 0f 
};
*uParam2=-105f;
break;
case 7:
*uParam1={
18.427f, 6.559f, -3.588f 
};
*uParam2=-19f - 180f;
break;
case 8:
*uParam1={
24.092f, 4.763f, -3.588f 
};
*uParam2=-16f - 180f;
break;
case 9:
*uParam1={
17.343f, 3.485f, -3.588f 
};
*uParam2=-19f;
break;
case 10:
*uParam1={
23.17f, 1.637f, -3.588f 
};
*uParam2=-16f;
break;
default:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
*uParam1={
*uParam1 + func_78() 
};
return;
}
int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x1C24{
int i;
for (i=NETWORK::NETWORK_GET_SCRIPT_STATUS();
i !=2;
i=NETWORK::NETWORK_GET_SCRIPT_STATUS()){
if(i==3 || i==4 || i==5 || i==6)if(!bNoTerminate) func_2();
else return 0;
if(!func_81(false)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_2();
else return 0;
if(func_68())if(!bNoTerminate) func_2();
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
BOOL func_81(BOOL bParam0) // Position - 0x1D3A{
bParam0;
return Global_1575035;
}