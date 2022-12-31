//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
var uLocal_3=0;
struct<3> Local_4={
0, 0, 0 
};
struct<3> Local_7={
0, 0, 0 
};
var uScriptParam_0=0;
#endregion

void __EntryFunction__(){
struct<3> Var0;
struct<3> Var3;
struct<3> Var6;
float fVar9;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2)){
func_4();
}
if(ENTITY::DOES_ENTITY_EXIST(uScriptParam_0)){
ENTITY::FREEZE_ENTITY_POSITION(uScriptParam_0, 1);
Local_4={
ENTITY::GET_ENTITY_COORDS(uScriptParam_0, 1) 
};
Local_7={
ENTITY::GET_ENTITY_ROTATION(uScriptParam_0, 2) 
};
}
while (true){
SYSTEM::WAIT(0);
if(ENTITY::DOES_ENTITY_EXIST(uScriptParam_0)){
if(BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0)){
switch (iLocal_2){
case 0:
if(ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0)){
STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
if(STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col"))){
if(!func_3(Local_4, 0f, 0f, 0f, 0)){
uLocal_3=OBJECT::CREATE_OBJECT(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(uLocal_3, Local_7, 2, 1);
iLocal_2=1;
}}
}
break;
case 1:
if(ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0){
STREAMING::REQUEST_ANIM_DICT("map_objects");
if(STREAMING::HAS_ANIM_DICT_LOADED("map_objects")){
iLocal_2=2;
}}
}
break;
case 2:
if(ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0){
if(Global_97112){
if(STREAMING::HAS_ANIM_DICT_LOADED("map_objects")){
ENTITY::PLAY_ENTITY_ANIM(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
iLocal_2=3;
}}}
}
break;
case 3:
fVar9=0.35f;
Var0={
Local_4 + Vector(3.45f, 0f, 0f) 
};
if(ENTITY::DOES_ENTITY_EXIST(uLocal_3)){
Var3={
ENTITY::GET_ENTITY_COORDS(uLocal_3, 1) 
};
if(!func_2(Var3, Var0, 0.1f, 0)){
Var6={
Var0 - Var3 
};
ENTITY::SET_ENTITY_COORDS(uLocal_3, Var3 + func_1(Var6) * FtoV(MISC::GET_FRAME_TIME()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
}else{
Global_97113=1;
iLocal_2=4;
}
}
break;
case 4:
break;
}}else{
func_4();
}}else{
func_4();
}}}


Vector3 func__1(struct<3> Param0){
float fVar0;
float fVar1;
fVar0=SYSTEM::VMAG(Param0);
if(fVar0 !=0f){
fVar1=(1f / fVar0);
Param0={
Param0 * Vector(fVar1, fVar1, fVar1) 
};
}else{
Param0.f_0=0f;
Param0.f_1=0f;
Param0.f_2=0f;
}
return Param0;
}

int func_2(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7){
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


bool func_3(struct<3> Param0, struct<3> Param3, bool bParam6){
if(bParam6){
return (Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1);
}
return ((Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1) && Param0.f_2==Param3.f_2);
}


void func_4(){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_3)){
OBJECT::DELETE_OBJECT(&uLocal_3);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_5(char* sParam0){
func_6(sParam0);
}


void func_6(var uParam0){
if(MISC::ARE_STRINGS_EQUAL(uParam0, uParam0)){}}