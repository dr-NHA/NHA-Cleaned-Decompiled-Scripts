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
char* sLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
float fLocal_35=0f;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
var uLocal_39=0;
Object obLocal_40=0;
Object obLocal_41=0;
Object obLocal_42=0;
Object obLocal_43=0;
char* sLocal_44=0;
char* sLocal_45=0;
int iLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
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
sLocal_21="NULL";
fLocal_24=0f;
fLocal_28=-0.0375f;
fLocal_29=0.17f;
fLocal_33=80f;
fLocal_34=140f;
fLocal_35=180f;
iLocal_38=3;
sLocal_44="RCMBarryLeadInOut";
sLocal_45="idle";
uLocal_49={
189.5964f, -956.0344f, 29.5771f 
};
uLocal_52={
190.2424f, -956.379f, 28.63f 
};
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
if(func_25(PLAYER::PLAYER_PED_ID()))if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0) PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)) func_22(false);
STREAMING::REQUEST_ANIM_DICT(sLocal_44);
HUD::REQUEST_ADDITIONAL_TEXT("BARY1", 7);
while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_44) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(7)){
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
SYSTEM::WAIT(0);
}
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
func_25(PLAYER::PLAYER_PED_ID());
iLocal_46=MISC::GET_GAME_TIMER() + 13000;
iLocal_47=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
func_19();
while (!func_13(&obLocal_43, 49, uLocal_52, func_18(1.12f), false)){
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
SYSTEM::WAIT(0);
}
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
func_12();
iLocal_48=MISC::GET_GAME_TIMER() + 1000;
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
while (true){
func_25(PLAYER::PLAYER_PED_ID());
if(MISC::GET_GAME_TIMER() < iLocal_48) PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
func_11();
if(!func_25(obLocal_43)) func_22(false);
func_3();
if(func_2(PLAYER::PLAYER_PED_ID(), uLocal_52, true) > 70f){
func_1(&obLocal_40, false);
func_1(&obLocal_41, false);
func_1(&obLocal_42, false);
func_22(false);
}
SYSTEM::WAIT(0);
}
return;
}


void func_1(Object* pobParam0, BOOL bParam1) // Position - 0x1D9{
if(ENTITY::DOES_ENTITY_EXIST(*pobParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0)) ENTITY::DETACH_ENTITY(*pobParam0, true, true);
if(!bParam1) ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
else OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*pobParam0);
}
return;
}


float func_2(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x214{
Vector3 entityCoords;
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
else entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, false) 
};
return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}
BOOL func_3() // Position - 0x24E{
var unk;
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_43) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && MISC::GET_GAME_TIMER() > iLocal_46 && func_8(PLAYER::PLAYER_PED_ID(), obLocal_43, true) < 20f && !MISC::GET_MISSION_FLAG()){
unk=16;
_CONVERSATION_INITIALIZE_ACTOR(&unk, 0, obLocal_43, "BARRY", 0, 1);
_CONVERSATION_ADD_LINE_NO_SUBTITLE(&unk, "BARY1AU", func_6(), 7, 0, 0);
iLocal_46=MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 18000);
return true;
}
return false;
}


void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2DE{
func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
if(iParam3 > 7)if(iParam3 < 12) iParam3=7;
MISC::SET_BIT(&Global_20591, 0);
Global_21728=iParam3;
TEXT_LABEL_ASSIGN_STRING(&Global_21715, sParam2, 24);
return;
}


void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x319{
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


char* func_6() // Position - 0x36F{
char* str;
switch (iLocal_47){
case 0:
str="BARY1_RCMLI1";
break;
case 1:
str="BARY1_RCMLI2";
break;
case 2:
str="BARY1_RCMLI3";
break;
case 3:
str="BARY1_RCMLI4";
break;
case 4:
str="BARY1_RCMLI5";
break;
}
iLocal_47=iLocal_47 + 1;
if(iLocal_47 > 4) iLocal_47=0;
return str;
}


void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Object obParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x3D5{
uParam0->[iParam1 /*10*/].f_7==1;
uParam0->[iParam1 /*10*/]=obParam2;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
uParam0->[iParam1 /*10*/].f_7=1;
uParam0->[iParam1 /*10*/].f_8=iParam4;
uParam0->[iParam1 /*10*/].f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(obParam2))if(uParam0->[iParam1 /*10*/].f_8==0) PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(obParam2, false);
else PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(obParam2, true);
if(!PED::IS_PED_INJURED(obParam2))if(uParam0->[iParam1 /*10*/].f_9==0) TASK::OPEN_PATROL_ROUTE(obParam2, 0);
else TASK::OPEN_PATROL_ROUTE(obParam2, 1);
}
return;
}


float func_8(Ped pedParam0, Object obParam1, BOOL bParam2) // Position - 0x470{
Vector3 entityCoords;
Vector3 entityCoords2;
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
else entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, false) 
};
if(!ENTITY::IS_ENTITY_DEAD(obParam1, false)) entityCoords2={
ENTITY::GET_ENTITY_COORDS(obParam1, true) 
};
else entityCoords2={
ENTITY::GET_ENTITY_COORDS(obParam1, false) 
};
return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}
BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x4CE{
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return true;
return false;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Object obParam0) // Position - 0x4F0{
if(ENTITY::DOES_ENTITY_EXIST(obParam0))if(!ENTITY::IS_ENTITY_DEAD(obParam0, false)) return true;
return false;
}


void func_11() // Position - 0x511{
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, uLocal_52, 5f)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_43)){
ENTITY::FREEZE_ENTITY_POSITION(obLocal_43, false);
PED::APPLY_DAMAGE_TO_PED(obLocal_43, 1000, true, 0);
}
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_41)) ENTITY::FREEZE_ENTITY_POSITION(obLocal_41, false);
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_40)) ENTITY::FREEZE_ENTITY_POSITION(obLocal_40, false);
}
return;
}


void func_12() // Position - 0x561{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_43)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(obLocal_43)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obLocal_43, true, false);
PED::SET_PED_PROP_INDEX(obLocal_43, 1, 0, 0, false, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(obLocal_43, true);
PED::SET_PED_MONEY(obLocal_43, 0);
PED::SET_PED_CAN_BE_TARGETTED(obLocal_43, false);
PED::SET_PED_NAME_DEBUG(obLocal_43, "POSTBARRY");
PED::SET_PED_RELATIONSHIP_GROUP_HASH(obLocal_43, joaat("PLAYER"));
ENTITY::SET_ENTITY_COLLISION(obLocal_43, false, false);
ENTITY::FREEZE_ENTITY_POSITION(obLocal_43, true);
ENTITY::SET_ENTITY_COORDS(obLocal_43, uLocal_52, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(obLocal_43, func_18(1.12f));
ENTITY::FREEZE_ENTITY_POSITION(obLocal_43, true);
TASK::TASK_PLAY_ANIM(obLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, false, false, false);
TASK::TASK_LOOK_AT_ENTITY(obLocal_43, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}
return;
}
BOOL func_13(Ped* ppedParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x613{
Hash model;
if(!func_17(iParam1)){
model=func_15(iParam1);
STREAMING::REQUEST_MODEL(model);
if(STREAMING::HAS_MODEL_LOADED(model)){
if(ENTITY::DOES_ENTITY_EXIST(*ppedParam0)) PED::DELETE_PED(ppedParam0);
*ppedParam0=PED::CREATE_PED(PED_TYPE_MISSION, model, vParam2, fParam5, false, false);
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*ppedParam0);
if(model==joaat("IG_LamarDavis"))if(PED::GET_PED_DRAWABLE_VARIATION(*ppedParam0, PV_COMP_UPPR)==0) PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_HAND, 2, 0, 0);
func_14(*ppedParam0, iParam1);
if(bParam6) STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
return true;
}}
return false;
}

int func_14(var uParam0, int iParam1) // Position - 0x6A1{
int num;
num=7;
if(iParam1==19){
num=3;
}elseif(iParam1==14){
num=4;
}elseif(iParam1==17){
num=5;
}else{
num=7;
return 0;
}
Global_96515[num - 3]=uParam0;
return 1;
}
Hash func_15(int iParam0) // Position - 0x6E7{
if(!func_17(iParam0)) return func_16(iParam0);
else iParam0 !=145;
return 0;
}

int func_16(int iParam0) // Position - 0x70D{
return Global_2028[iParam0 /*29*/];
}
BOOL func_17(int iParam0) // Position - 0x71C{
return iParam0 < 3;
}


float func_18(float fParam0) // Position - 0x728{
return fParam0 * 57.29578f;
}


void func_19() // Position - 0x738{
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false)){
obLocal_41=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
if(func_25(obLocal_41)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(obLocal_41)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obLocal_41, true, false);
uLocal_49={
189.5964f, -956.0344f, 29.54f 
};
ENTITY::SET_ENTITY_COORDS(obLocal_41, uLocal_49, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(obLocal_41, func_18(-2.01f));
ENTITY::FREEZE_ENTITY_POSITION(obLocal_41, true);
}}
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false)){
obLocal_40=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
if(func_25(obLocal_40)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(obLocal_40)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obLocal_40, true, false);
uLocal_49={
190.2574f, -956.3513f, 29.621f 
};
ENTITY::SET_ENTITY_COORDS(obLocal_40, uLocal_49, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(obLocal_40, func_18(-1.68f));
ENTITY::FREEZE_ENTITY_POSITION(obLocal_40, true);
}}else{
uLocal_49={
190.2574f, -956.3513f, 29.621f 
};
func_20(&obLocal_40, joaat("prop_chair_08"), uLocal_49, func_18(-1.68f));
ENTITY::SET_ENTITY_COORDS(obLocal_40, uLocal_49, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(obLocal_40, func_18(-1.68f));
ENTITY::FREEZE_ENTITY_POSITION(obLocal_40, true);
}
uLocal_49={
192.4462f, -953.5946f, 29.0919f 
};
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(uLocal_49, 25f, joaat("prop_protest_sign_01"), false)){
obLocal_42=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uLocal_49, 25f, joaat("prop_protest_sign_01"), false, false, true);
if(func_25(obLocal_42)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(obLocal_42)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obLocal_42, true, false);
uLocal_49.f_2=29.603f;
ENTITY::SET_ENTITY_COORDS(obLocal_42, uLocal_49, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(obLocal_42, 23.45f);
}}else{
func_20(&obLocal_42, joaat("prop_protest_sign_01"), uLocal_49, 23.45f);
ENTITY::SET_ENTITY_COORDS(obLocal_42, uLocal_49, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(obLocal_42, 23.45f);
}
return;
}


void func_20(Object* pobParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5) // Position - 0x969{
func_21(pobParam0);
*pobParam0=OBJECT::CREATE_OBJECT(hParam1, vParam2, true, true, false);
ENTITY::SET_ENTITY_HEADING(*pobParam0, fParam5);
return;
}


void func_21(Object* pobParam0) // Position - 0x990{
if(ENTITY::DOES_ENTITY_EXIST(*pobParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0)) ENTITY::DETACH_ENTITY(*pobParam0, true, true);
OBJECT::DELETE_OBJECT(pobParam0);
}
return;
}


void func_22(BOOL bParam0) // Position - 0x9BB{
if(bParam0) func_24(&obLocal_43);
else func_23(&obLocal_43, true, 0, 1);
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_41)) ENTITY::FREEZE_ENTITY_POSITION(obLocal_41, false);
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_40)) ENTITY::FREEZE_ENTITY_POSITION(obLocal_40, false);
if(bParam0){
func_21(&obLocal_40);
func_21(&obLocal_41);
func_21(&obLocal_42);
}else{
func_1(&obLocal_40, false);
func_1(&obLocal_41, false);
func_1(&obLocal_42, false);
}
STREAMING::REMOVE_ANIM_DICT(sLocal_44);
HUD::CLEAR_ADDITIONAL_TEXT(7, false);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_23(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xA39{
if(ENTITY::DOES_ENTITY_EXIST(*ppedParam0)){
if(!PED::IS_PED_INJURED(*ppedParam0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
if(iParam3==0) TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
if(iParam2==1) PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
}
return;
}


void func_24(Ped* ppedParam0) // Position - 0xA89{
if(ENTITY::DOES_ENTITY_EXIST(*ppedParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false)) ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
PED::DELETE_PED(ppedParam0);
}
return;
}
BOOL func_25(Object obParam0) // Position - 0xACA{
if(!ENTITY::DOES_ENTITY_EXIST(obParam0)) return false;
return !ENTITY::IS_ENTITY_DEAD(obParam0, false);
}