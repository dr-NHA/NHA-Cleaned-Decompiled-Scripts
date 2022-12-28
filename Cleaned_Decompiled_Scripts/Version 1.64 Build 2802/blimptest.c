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
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
Vehicle veLocal_40=0;
Hash hLocal_41=0;
Blip blLocal_42=0;
Ped pedLocal_43=0;
Hash hLocal_44=0;
Vehicle veLocal_45=0;
Hash hLocal_46=0;
int iLocal_47=0;
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
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
hLocal_41=joaat("blimp");
hLocal_44=joaat("S_M_M_Pilot_02");
hLocal_46=joaat("buzzard");
if(CAM::IS_SCREEN_FADED_OUT()) CAM::DO_SCREEN_FADE_IN(500);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18)) func_18();
PLAYER::SET_MAX_WANTED_LEVEL(0);
func_17();
func_16();
func_14();
func_11();
while (true){
HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
HUD::SET_TEXT_SCALE(0.75f, 0.9f);
HUD::SET_TEXT_WRAP(0f, 1f);
func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
HUD::SET_TEXT_SCALE(0.4f, 0.45f);
HUD::SET_TEXT_WRAP(0f, 1f);
func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
func_1();
SYSTEM::WAIT(0);
}
return;
}


void func_1() // Position - 0x116{
var entityCoords;
if(ENTITY::DOES_ENTITY_EXIST(veLocal_40)){
if(ENTITY::IS_ENTITY_DEAD(veLocal_40, false) || ENTITY::GET_ENTITY_HEALTH(veLocal_40) <=0 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veLocal_40) <=0f){
func_9(&blLocal_42);
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_40)) VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_40);
if(iLocal_47==1){
entityCoords={
ENTITY::GET_ENTITY_COORDS(veLocal_40, false) 
};
func_8(entityCoords);
}
if(iLocal_47==1){
func_7(&pedLocal_43);
func_4(&veLocal_40);
}else{
func_3(&pedLocal_43, true, 0, 1);
func_2(&veLocal_40);
}}elseif(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_40)){
VEHICLE::SET_PLAYBACK_SPEED(veLocal_40, 0.25f);
}}
return;
}


void func_2(Vehicle* pveParam0) // Position - 0x1B6{
if(ENTITY::DOES_ENTITY_EXIST(*pveParam0)){
ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true)) ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
}
return;
}


void func_3(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x1EE{
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


void func_4(Vehicle* pveParam0) // Position - 0x23E{
if(ENTITY::DOES_ENTITY_EXIST(*pveParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
if(func_6(*pveParam0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(pveParam0);
}}else{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(pveParam0);
}}
return;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x2DA{
if(ENTITY::DOES_ENTITY_EXIST(veParam0))if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)) return true;
return false;
}
BOOL func_6(Vehicle veParam0) // Position - 0x2FB{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(!FILES::GET_DLC_VEHICLE_FLAGS(veParam0)) return true;
return false;
}


void func_7(Ped* ppedParam0) // Position - 0x325{
if(ENTITY::DOES_ENTITY_EXIST(*ppedParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false)) ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
PED::DELETE_PED(ppedParam0);
}
return;
}


void func_8(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x366{
int i;
int num;
var unk;
num=12;
unk=12;
unk[0 /*3*/]={
5f, 0f, 0f 
};
unk[1 /*3*/]={
0f, 5f, 0f 
};
unk[2 /*3*/]={
0f, 0f, 5f 
};
unk[3 /*3*/]={
5f, 5f, 0f 
};
unk[4 /*3*/]={
5f, 0f, 5f 
};
unk[5 /*3*/]={
0f, 5f, 5f 
};
unk[6 /*3*/]={
20f, 0f, 0f 
};
unk[7 /*3*/]={
0f, 20f, 0f 
};
unk[8 /*3*/]={
0f, 0f, 20f 
};
unk[9 /*3*/]={
20f, 20f, 0f 
};
unk[10 /*3*/]={
20f, 0f, 20f 
};
unk[11 /*3*/]={
0f, 20f, 20f 
};
FIRE::ADD_EXPLOSION(vParam0, 8, 1f, true, false, 1065353216, false);
for (i=0;
i <=num - 1;
i=i + 1){
FIRE::ADD_EXPLOSION(vParam0 + unk[i /*3*/], 8, 1f, true, false, 1065353216, false);
}
return;
}


void func_9(Blip* pblParam0) // Position - 0x45C{
if(HUD::DOES_BLIP_EXIST(*pblParam0)){
HUD::SET_BLIP_ROUTE(*pblParam0, false);
HUD::REMOVE_BLIP(pblParam0);
}
return;
}


void func_10(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0x47C{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
return;
}


void func_11() // Position - 0x494{
func_2(&veLocal_45);
STREAMING::REQUEST_MODEL(hLocal_46);
while (!STREAMING::HAS_MODEL_LOADED(hLocal_46)){
SYSTEM::WAIT(0);
}
if(func_6(veLocal_40)){
veLocal_45=VEHICLE::CREATE_VEHICLE(hLocal_46, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_40, 50f, 0f, 15f), 0f, true, true, false);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(veLocal_45);
func_12(veLocal_45, veLocal_40);
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_45, -1);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, true, false, false, false);
}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_46);
return;
}


void func_12(Vehicle veParam0, Vehicle veParam1) // Position - 0x52F{
float heading;
heading=func_13(ENTITY::GET_ENTITY_COORDS(veParam0, true), ENTITY::GET_ENTITY_COORDS(veParam1, true), 1);
ENTITY::SET_ENTITY_HEADING(veParam0, heading);
return;
}


float func_13(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x554{
float num;
float num2;
float num3;
num2=fParam3 - uParam0;
num3=fParam3.f_1 - uParam0.f_1;
if(num3 !=0f) num=MISC::ATAN2(num2, num3);
elseif(num2 < 0f) num=-90f;
else num=90f;
if(iParam6==1){
num=num * -1f;
if(num < 0f) num=num + 360f;
}
return num;
}


void func_14() // Position - 0x5B9{
func_9(&blLocal_42);
if(func_6(veLocal_40)) blLocal_42=func_15(veLocal_40, true, 5);
return;
}
Blip func_15(Vehicle veParam0, BOOL bParam1, int iParam2) // Position - 0x5DA{
Blip blip;
blip=0;
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0)){
blip=HUD::ADD_BLIP_FOR_ENTITY(veParam0);
HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
HUD::SET_BLIP_PRIORITY(blip, iParam2);
HUD::SET_BLIP_SCALE(blip, 1f);
}
return blip;
}


void func_16() // Position - 0x60F{
STREAMING::REQUEST_MODEL(hLocal_44);
while (!STREAMING::HAS_MODEL_LOADED(hLocal_44)){
SYSTEM::WAIT(0);
}
if(func_6(veLocal_40)){
pedLocal_43=PED::CREATE_PED_INSIDE_VEHICLE(veLocal_40, PED_TYPE_MISSION, hLocal_44, -1, true, true);
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_43)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_43, true);
PED::SET_PED_CONFIG_FLAG(pedLocal_43, 118, false);
PED::SET_PED_CONFIG_FLAG(pedLocal_43, 29, false);
PED::SET_PED_CONFIG_FLAG(pedLocal_43, 116, false);
}}
if(func_6(veLocal_40)) VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(veLocal_40, 1, "Blimp_City", true);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_44);
return;
}


void func_17() // Position - 0x68C{
var rotationOfVehicleRecordingIdAtTime;
if(func_6(veLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_40)) VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_40);
func_9(&blLocal_42);
func_7(&pedLocal_43);
func_4(&veLocal_40);
STREAMING::REQUEST_MODEL(hLocal_41);
VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Blimp_City");
while (!STREAMING::HAS_MODEL_LOADED(hLocal_41) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City")){
SYSTEM::WAIT(0);
}
rotationOfVehicleRecordingIdAtTime={
VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) 
};
veLocal_40=VEHICLE::CREATE_VEHICLE(hLocal_41, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), rotationOfVehicleRecordingIdAtTime.f_2, true, true, false);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_41);
return;
}


void func_18() // Position - 0x722{
if(func_6(veLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_40)) VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_40);
VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
func_9(&blLocal_42);
func_3(&pedLocal_43, true, 0, 1);
func_2(&veLocal_40);
func_2(&veLocal_45);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_44);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_41);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_46);
PLAYER::SET_MAX_WANTED_LEVEL(6);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}